/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10565837c; end: 10565838b;  */

void FUN_10565837c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(uVar6);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_2);
  }
  puVar2 = &uStack_111;
  FUN_10565dd3c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(uVar6);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = uVar6;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(param_2);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126bc790;
    FUN_10565ebcc(PTR_PTR_1126bc790,puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar5[0x14] = 1;
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10565838c; end: 105658437; -[SCFriendshipFlashbacksDataManager _updateLocalFlashbackData] */

void FUN_10565838c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be731e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105658438; end: 10565843f;  */

void FUN_105658438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tryFetchFriendshipFlashbacksFro_112591a80);
  return;
}



/* Entry: 105658440; end: 1056584ef; -[SCFriendshipFlashbacksDataManager _populateMessagesData:] */

void FUN_105658440(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be66240(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41860(puVar2,param_2,param_1,&PTR___NSConcreteGlobalBlock_1108a4b00);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056584f0; end: 1056584ff;  */

void FUN_1056584f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_1108a4b40);
  return;
}



/* Entry: 105658500; end: 1056585e3;  */

void FUN_105658500(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_1056585e4;
  uStack_30 = 0x1056585f4;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
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



/* Entry: 1056585e4; end: 1056585fb;  */

void FUN_1056585e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056585fc; end: 105658633;  */

void FUN_1056585fc(long param_1,undefined8 param_2)

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



/* Entry: 105658634; end: 105658637;  */

void FUN_105658634(void)

{
  return;
}



/* Entry: 105658638; end: 105658927; -[SCFriendshipFlashbacksDataManager _observeFriendshipFlashbacksFeaturedStoryWithStories:] */

void FUN_105658638(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        lVar3 = param_1;
        func_0x00010bec4700();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bdd7fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ae6b8;
        if (lVar4 == 0) {
          _objc_initWeak(auStack_148,param_1);
          lVar7 = param_1;
          func_0x00010be65880(param_1);
          _objc_retainAutoreleasedReturnValue();
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_105658928;
          puStack_168 = &UNK_1108a4c00;
          param_2 = auStack_148;
          _objc_copyWeak(auStack_150,param_2);
          uStack_160 = uVar9;
          _objc_retain(lVar3);
          lVar8 = lVar7;
          lStack_158 = lVar3;
          func_0x00010c0b8600(lVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          func_0x00010befa120(puVar1);
          _objc_release(lVar8);
          _objc_release(lStack_158);
          _objc_destroyWeak(auStack_150);
          _objc_destroyWeak(auStack_148);
        }
        else {
          puVar5 = PTR_PTR_1126af5d0;
          func_0x00010c2619e0(PTR_PTR_1126af5d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    lVar2 = param_3;
    __Unwind_Resume();
    pcStack_188 = FUN_105658928;
    uStack_1b0 = 0;
    puStack_1a8 = puVar6;
    puStack_1a0 = puVar1;
    lStack_198 = param_3;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    _objc_copyWeak(auStack_1b8,lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    _objc_retain(*(undefined8 *)(lVar2 + 0x28));
    func_0x00010c0c0800(param_2);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_1b8);
    puVar6 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105658928; end: 1056589ef;  */

void FUN_105658928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1056589f0; end: 105658a43;  */

void FUN_1056589f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105658a44; end: 105658a47;  */

void FUN_105658a44(void)

{
  return;
}



/* Entry: 105658a48; end: 105658b5b; -[SCFriendshipFlashbacksDataManager _cachedDataModelForStory:storySignature:] */

void FUN_105658a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
    goto LAB_105658b34;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  lVar3 = param_3;
  func_0x00010bfb25e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar2 == 0) {
LAB_105658b20:
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c25b140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_105658b20;
    lVar3 = lVar2;
    func_0x00010bf63dc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
LAB_105658b34:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105658b5c; end: 105658c3f; -[SCFriendshipFlashbacksDataManager _updateDataModelCacheWithStory:storySignature:dataModel:] */

void FUN_105658b5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if ((param_5 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126bc758;
    _objc_alloc(PTR_PTR_1126bc758);
    func_0x00010c04e1e0();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_3;
    func_0x00010bfb25e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4,param_2,puVar3,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105658c40; end: 105658e03; -[SCFriendshipFlashbacksDataManager _storyCacheSignatureForStory:] */

void FUN_105658c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10565aa0c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  uVar3 = uVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa34e0();
  func_0x00010c113c80();
  func_0x00010c251120(param_3);
  func_0x00010bf95800(param_3);
  _objc_release(param_3);
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105658e04; end: 105658e0b;  */

void FUN_105658e04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105658e0c; end: 105658ef7; -[SCFriendshipFlashbacksDataManager _observableForSingleStory:] */

void FUN_105658e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105658ef8; end: 105659033;  */

void FUN_105658ef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be75d80(param_1);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105659034; end: 1056592ab; -[SCFriendshipFlashbacksDataManager _populateFlashbackStoryWithFullMessageDataModel:completion:] */

void FUN_105659034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1056592ac;
  puStack_98 = &UNK_1108a4c80;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_3);
  ppuVar1 = &puStack_b0;
  uStack_90 = param_3;
  _objc_retainBlock(ppuVar1);
  puStack_e8 = puVar7;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10565945c;
  puStack_d0 = &UNK_110893d30;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_e8;
  uStack_c8 = param_3;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126bc760;
  _objc_alloc(PTR_PTR_1126bc760);
  func_0x00010c04f540();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0cd8;
  uVar6 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  FUN_10565aa0c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ec20(uVar5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056592ac; end: 10565945b;  */

void FUN_1056592ac(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar2 != 0) {
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10565a4b8(lVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110df3a18;
      FUN_10565a49c(&PTR____CFConstantStringClassReference_110df3a18);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar3);
      _objc_release(ppuVar3);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,lVar2,0);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,0,0);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df3a38;
    FUN_10565a49c(&PTR____CFConstantStringClassReference_110df3a38);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10565945c; end: 1056594e3;  */

void FUN_10565945c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0,0);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3a38;
    FUN_10565a49c(&PTR____CFConstantStringClassReference_110df3a38);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar2);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056594e4; end: 1056595c7; -[SCFriendshipFlashbacksDataManager _persistFriendshipFlashbacksFromExtension] */

void FUN_1056594e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056595c8; end: 10565972f;  */

void FUN_1056595c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0fa000(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105659730; end: 1056597af;  */

void FUN_105659730(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf436e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056597b0; end: 10565988f; -[SCFriendshipFlashbacksDataManager _tryFetchFriendshipFlashbacksFromRemote] */

void FUN_1056597b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105659890; end: 105659a27;  */

void FUN_105659890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010be3fea0();
    if ((int)lVar2 == 0) {
      func_0x00010c0d9840(param_2);
      func_0x00010bf436e0(param_2);
      lVar2 = 0;
    }
    else {
      _objc_initWeak(auStack_48,param_2);
      _objc_copyWeak(auStack_50,auStack_48);
      lVar2 = param_1;
      func_0x00010be11660();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    puVar1 = PTR_PTR_1126b0418;
    _objc_retain(lVar2);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105659a28; end: 105659aa7;  */

void FUN_105659a28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf436e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105659aa8; end: 105659aaf;  */

void FUN_105659aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105659ab0; end: 105659b53; -[SCFriendshipFlashbacksDataManager _isEligibleForRemoteFetch] */

uint FUN_105659ab0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 1;
  }
  else {
    func_0x00010c083d40(uVar2);
    uVar5 = (uint)uVar2 ^ 1;
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 105659b54; end: 105659c83; -[SCFriendshipFlashbacksDataManager _fetchFriendshipFlashbacksFromRemote:] */

void FUN_105659b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010c0d7b20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105659c84; end: 105659cf3;  */

void FUN_105659c84(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be81fc0();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105659cf4; end: 105659e33; -[SCFriendshipFlashbacksDataManager _processRemotelyFetchedFriendshipFlashbacks:completion:] */

void FUN_105659cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110df39d8);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105659e34;
  puStack_50 = &UNK_11085adb8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar3,param_2,&puStack_68,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105659e34; end: 105659e43;  */

void FUN_105659e34(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined4 uStack_3d4;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  ulong *puStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined ***pppuStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_241;
  ulong auStack_240 [40];
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_78;
  
  lVar13 = *(long *)(param_1 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar13);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_2 == 0) {
    auStack_240[6] = 0;
    auStack_240[3] = 0;
    auStack_240[2] = 0;
    auStack_240[5] = 0;
    auStack_240[4] = 0;
    auStack_240[1] = 0;
    auStack_240[0] = 0;
  }
  else {
    func_0x00010bfa6be0(auStack_240,param_2);
  }
  puVar2 = &uStack_241;
  FUN_10565e174();
  ppuStack_2b8 = (undefined **)CONCAT44(ppuStack_2b8._4_4_,0xf);
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,0x100);
  uStack_290 = CONCAT71(uStack_290._1_7_,1);
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,10);
  uStack_e8._0_4_ = CONCAT13(puVar2[0x1b],CONCAT12(puVar2[0x1a],0x100));
  ppuStack_100 = &PTR_SUB_1108629c8;
  pppuStack_c0 = &ppuStack_2c0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar3 = auStack_240;
  puStack_c8 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_278 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(auStack_240 + 5);
  _objc_release(auStack_240[3]);
  _objc_release(auStack_240[2]);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (ulong *)0x0) {
    lVar17 = *plStack_310;
    do {
      puVar18 = (ulong *)0x0;
      do {
        if (*plStack_310 != lVar17) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = *(undefined8 *)(lStack_318 + (long)puVar18 * 8);
        func_0x00010bfb25e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar6);
        puVar18 = (ulong *)((long)puVar18 + 1);
      } while (puVar5 != puVar18);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    } while (puVar5 != (ulong *)0x0);
  }
  _objc_release(puVar3);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_2 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    ppuStack_100 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_100,param_2);
  }
  ppuStack_2c0 = (undefined **)0x0;
  ppuStack_2b8 = (undefined **)0x0;
  plStack_2b0 = (long *)0x0;
  auStack_240[0] = auStack_240[0] & 0xffffffff00000000;
  pppuVar7 = &ppuStack_100;
  pppuVar14 = &ppuStack_2c0;
  func_0x00010054c81c(pppuVar7,pppuVar14,auStack_240);
  _objc_retainAutoreleasedReturnValue();
  pppuStack_368 = pppuVar7;
  if (ppuStack_2c0 != (undefined **)0x0) {
    ppuStack_2b8 = ppuStack_2c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  ppuStack_2b8 = (undefined **)0x0;
  ppuStack_2c0 = (undefined **)0x0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  pppuVar7 = pppuStack_368;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = pppuVar7;
  func_0x00010bf52a60();
  if (pppuVar8 != (undefined ***)0x0) {
    lVar17 = *plStack_2b0;
    do {
      pppuVar15 = (undefined ***)0x0;
      do {
        if (*plStack_2b0 != lVar17) {
          _objc_enumerationMutation(pppuVar7);
        }
        pppuVar14 = *(undefined ****)((long)ppuStack_2b8 + (long)pppuVar15 * 8);
        puVar9 = PTR_PTR_1126bc790;
        FUN_10565f134(PTR_PTR_1126bc790,pppuVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuVar8 != pppuVar15);
      pppuVar8 = pppuVar7;
      func_0x00010bf52a60();
    } while (pppuVar8 != (undefined ***)0x0);
  }
  _objc_release(pppuVar7);
  _objc_release(pppuStack_368);
  _objc_release(param_2);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  _objc_retain(lVar13);
  lVar17 = lVar13;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar19 = *plStack_350;
    do {
      lVar20 = 0;
      do {
        if (*plStack_350 != lVar19) {
          _objc_enumerationMutation(lVar13);
        }
        lVar16 = *(long *)(lStack_358 + lVar20 * 8);
        pppuVar14 = (undefined ***)0x0;
        lVar10 = lVar16;
        FUN_10565f1a8(lVar16,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb25e0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010bf4b900();
        if (lVar10 != 0) {
          *(char *)(lVar10 + 0x14) = (char)puVar9;
        }
        _objc_release(lVar16);
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar10);
        lVar20 = lVar20 + 1;
      } while (lVar17 != lVar20);
      lVar17 = lVar13;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(lVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar13);
  lVar17 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar13);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_378 = FUN_10565be50;
  puStack_3a0 = puVar4;
  puStack_398 = puVar3;
  lStack_390 = lVar13;
  lStack_388 = param_2;
  puStack_380 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar14);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (lVar17 == 0) {
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_3b8,lVar17);
  }
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d4 = 0;
  puVar11 = &uStack_3b8;
  func_0x000108c7f714(puVar11,&lStack_3d0,&uStack_3d4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  if (lStack_3d0 != 0) {
    lStack_3c8 = lStack_3d0;
    __ZdlPv();
  }
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(pppuVar14);
  _objc_release(lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105659e44; end: 105659f03; -[SCFriendshipFlashbacksDataManager _fetchFlashbackStoryWithConversationId:flashbackId:] */

void FUN_105659e44(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  FUN_10565b3d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  if ((lVar1 == 0) || (func_0x00010be40420(), (param_1 & 1) != 0)) {
    lVar2 = 0;
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105659f04; end: 105659f77; -[SCFriendshipFlashbacksDataManager _isExpiredStory:] */

bool FUN_105659f04(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar2 = param_1;
  _objc_release(puVar1);
  func_0x00010bf95800(param_4);
  _objc_release(param_4);
  return dVar2 <= param_1;
}



/* Entry: 105659f78; end: 10565a06f; -[SCFriendshipFlashbacksDataManager _resetViewStatesForTweak] */

void FUN_105659f78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10565a070; end: 10565a077;  */

ulong FUN_10565a070(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bStack_1c2;
  byte bStack_1c1;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  pcVar13 = (code *)&uStack_180;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_13c = 0;
  puVar7 = &uStack_120;
  plVar12 = &lStack_138;
  func_0x00010054c81c(puVar7,plVar12,&uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf52a60();
  if (puVar9 != (undefined8 *)0x0) {
    lVar15 = *plStack_170;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_170 != lVar15) {
          _objc_enumerationMutation(puVar8);
        }
        plVar12 = *(long **)(lStack_178 + (long)puVar16 * 8);
        puVar10 = PTR_PTR_1126bc790;
        FUN_10565ebcc(PTR_PTR_1126bc790,plVar12);
        _objc_retainAutoreleasedReturnValue();
        if (puVar10 != (undefined *)0x0) {
          puVar10[0x14] = 0;
        }
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar9 != puVar16);
      puVar9 = puVar8;
      pcVar13 = (code *)&uStack_180;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar11;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_2);
  __Unwind_Resume(uVar11);
  _objc_retain();
  _objc_retain(plVar12);
  (*pcVar13)(uVar11,&bStack_1c1);
  dVar4 = (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  (*pcVar13)(plVar12,&bStack_1c2);
  uVar14 = 2;
  uVar2 = uVar14;
  if (bStack_1c2 == 0) {
    uVar2 = 0;
  }
  if (bStack_1c1 == 0) {
    uVar2 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(
                                                  uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))
                                              )));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13
                                                  (uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))))
                                                  )));
    bVar6 = dVar4 == (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,
                                                  CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,
                                                  uVar17)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar14 = 1;
  }
  uVar3 = 0;
  if (!bVar5) {
    uVar3 = uVar14;
  }
  uVar14 = uVar2;
  if ((bStack_1c2 & 1) == 0) {
    uVar14 = uVar3;
  }
  if ((bStack_1c1 & 1) == 0) {
    uVar2 = uVar14;
  }
  _objc_release(plVar12);
  _objc_release(uVar11);
  return (ulong)uVar2;
}



/* Entry: 10565a078; end: 10565a0ab;  */

void FUN_10565a078(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10565a0ac; end: 10565a157; -[SCFriendshipFlashbacksDataManager _fetchRemoteForTweak] */

void FUN_10565a0ac(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be11660(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10565a158; end: 10565a18b;  */

void FUN_10565a158(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10565a18c; end: 10565a287; -[SCFriendshipFlashbacksDataManager _showToastForTweak:] */

void FUN_10565a18c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,&PTR____CFConstantStringClassReference_110df3a78,0
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf54760(PTR_PTR_1126afde0,param_2,&PTR____CFConstantStringClassReference_110df3a58,0
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10565a248;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(puStack_28);
  _objc_release(puVar1);
  return;
}



/* Entry: 10565a288; end: 10565a32f; -[SCFriendshipFlashbacksDataManager .cxx_destruct] */

void FUN_10565a288(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10565a330; end: 10565a49b;  */

void FUN_10565a330(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfa3280();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_1;
    func_0x00010bfa3260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lVar8 * 8);
        FUN_10565aaf4();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110df3a98,param_1,1000);
  return;
}



/* Entry: 10565a49c; end: 10565a4b7;  */

void FUN_10565a49c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110df3a98,param_1,1000);
  return;
}



/* Entry: 10565a4b8; end: 10565aa0b;  */

void FUN_10565a4b8(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = param_1;
  func_0x00010bfb2600();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar21 == (undefined *)0x0) {
      _objc_release(puVar3);
      puVar21 = puVar2;
      func_0x00010bf529e0();
      if (puVar21 == (undefined *)0x0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar21 = PTR_PTR_1126b2408;
        _objc_alloc(PTR_PTR_1126b2408);
        puVar3 = param_1;
        func_0x00010bfb25e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = param_1;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = param_1;
        func_0x00010c2711a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010c260dc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa34e0();
        puVar17 = puVar2;
        func_0x00010bf51e00(puVar2);
        func_0x00010c113c80();
        func_0x00010c0166e0(puVar21);
        _objc_release(puVar17);
        _objc_release(puVar7);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        func_0x00010bfb2600();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = param_1;
        func_0x000100504554();
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
      return;
    }
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar24 = *(undefined8 *)((long)puVar19 * 8);
      _objc_retain(param_2);
      lVar4 = param_2;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          lVar23 = *(long *)(lVar22 * 8);
          uVar5 = uVar24;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar6 = lVar23;
          func_0x00010c15f2e0(lVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15f400();
          func_0x00010c0df7c0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar20;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar5;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          _objc_release(puVar20);
          _objc_release(lVar6);
          _objc_release(uVar5);
          if ((int)uVar8 != 0) {
            _objc_retain(lVar23);
            lVar4 = lVar23;
            func_0x00010c0cb140();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar4;
            func_0x00010c0c72c0();
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar9;
            func_0x00010bf529e0();
            _objc_release(lVar9);
            _objc_release(lVar4);
            if (lVar22 == 0) {
              _objc_release(lVar23);
              puVar20 = (undefined *)0x0;
            }
            else {
              puVar20 = PTR_PTR_1126bc768;
              _objc_alloc();
              lVar4 = lVar23;
              func_0x00010c0cb140();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar4;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = lVar23;
              func_0x00010c0cb140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c27dd80();
              lVar6 = lVar23;
              func_0x00010c0cb140();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar6;
              func_0x00010c0cb8c0();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar23;
              func_0x00010c0cb140(lVar23);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar11;
              func_0x00010c0cb9a0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar23;
              func_0x00010c0cb140(lVar23);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010bf026e0();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar23;
              func_0x00010c0cb140(lVar23);
              _objc_retainAutoreleasedReturnValue();
              lVar16 = lVar15;
              func_0x00010c0c72c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c002300();
              _objc_release(lVar16);
              _objc_release(lVar15);
              _objc_release(lVar14);
              _objc_release(lVar13);
              _objc_release(lVar12);
              _objc_release(lVar11);
              _objc_release(lVar10);
              _objc_release(lVar6);
              _objc_release(lVar22);
              _objc_release(lVar9);
              _objc_release(lVar4);
              _objc_release(lVar23);
              if (puVar20 != (undefined *)0x0) {
                func_0x00010befa120(puVar2);
              }
            }
            _objc_release(puVar20);
            goto LAB_10565a870;
          }
          lVar22 = lVar22 + 1;
        } while (lVar4 != lVar22);
        lVar4 = param_2;
        func_0x00010bf52a60();
      }
LAB_10565a870:
      _objc_release(param_2);
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar21);
    puVar21 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10565aa0c; end: 10565aaab;  */

void FUN_10565aa0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb2600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10565aaac; end: 10565aacb;  */

undefined ** FUN_10565aaac(int param_1)

{
  long lVar1;
  
  func_0x00010bfa34e0();
  lVar1 = 0;
  if (param_1 - 0x28U < 3) {
    lVar1 = (ulong)(param_1 - 0x28U) + 1;
  }
  if (lVar1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_1108a4d10)[lVar1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110df3b18;
}



/* Entry: 10565aacc; end: 10565aaf3;  */

undefined ** FUN_10565aacc(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_1108a4d10)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110df3b18;
}



/* Entry: 10565aaf4; end: 10565af3f;  */

undefined * FUN_10565aaf4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf36200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126bc778;
  uVar4 = uVar3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar15 = PTR_PTR_1126b0cd8;
  _objc_alloc();
  puVar5 = puVar17;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b1c0();
  puVar6 = puVar15;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (puVar6 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126bc780;
    _objc_alloc();
    uVar3 = param_1;
    func_0x00010bfa3400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe2ee0();
    uVar4 = uVar3;
    func_0x00010c0b5940(uVar3);
    func_0x000100c4a928(uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar7 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf36200();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar9 = uVar8;
    func_0x00010c0cbb40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar9);
        }
        uVar16 = *(undefined8 *)(uVar14 * 8);
        puVar10 = PTR_PTR_1126bc770;
        _objc_alloc(PTR_PTR_1126bc770);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0cb5a0(uVar16);
        func_0x00010c0df880(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02b6e0(puVar10);
        func_0x00010befa120(puVar15);
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar5);
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
      uVar2 = uVar9;
      func_0x00010bf52a60();
    }
    _objc_release(uVar9);
    puVar5 = puVar15;
    func_0x00010bf51e00(puVar15);
    _objc_release(puVar15);
    _objc_release(uVar8);
    uVar2 = param_1;
    func_0x00010bef0380(param_1);
    uVar9 = param_1;
    func_0x00010bf9c840(param_1);
    uVar14 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa34e0(param_1);
    func_0x00010c113c80();
    func_0x00010c0136e0((double)(uVar2 / 1000),(double)(uVar9 / 1000));
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar6);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar17 = PTR_PTR_1126bc788;
    _objc_retain();
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(param_1);
    if ((puVar17 == (undefined *)0x0) ||
       (puVar15 = puVar17, func_0x00010bfd5ae0(), (int)puVar15 == 0)) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar17;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar5;
      func_0x00010bf4ce20();
      if ((int)puVar15 == 1) {
        puVar6 = puVar17;
        func_0x00010bf4bc60(puVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar6;
        func_0x00010bf36200();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar11;
        func_0x00010c08fa60();
        puVar15 = (undefined *)(ulong)(puVar15 != (undefined *)0x0);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar6);
      }
      else {
        puVar15 = (undefined *)0x0;
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar17);
    return puVar15;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}



/* Entry: 10565af40; end: 10565b05b;  */

bool FUN_10565af40(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126bc788;
  _objc_retain();
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_1);
  if ((puVar2 == (undefined *)0x0) || (puVar3 = puVar2, func_0x00010bfd5ae0(), (int)puVar3 == 0)) {
    bVar1 = false;
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4ce20();
    if ((int)puVar4 == 1) {
      puVar4 = puVar2;
      func_0x00010bf4bc60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf36200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      bVar1 = puVar7 != (undefined *)0x0;
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10565b05c; end: 10565b0fb;  */

void FUN_10565b05c(undefined8 param_1,undefined8 param_2)

{
  char cStack_31;
  
  _objc_retain();
  FUN_10565f1a8(param_2,&cStack_31);
  _objc_retainAutoreleasedReturnValue();
  if (cStack_31 == '\x01') {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10565b0fc; end: 10565b3d3;  */

void FUN_10565b0fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_10565dd3c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126bc790;
    FUN_10565ebcc(PTR_PTR_1126bc790,puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar5[0x14] = 1;
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10565b3d4; end: 10565b7c7;  */

undefined *** FUN_10565b3d4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long lStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1c9;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    ppuStack_b0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_10565deb4();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_2);
  ppuStack_198 = &PTR_SUB_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_FUN_110862700;
  pppuStack_e0 = &ppuStack_198;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puVar3 = &uStack_1c9;
  uStack_168 = param_2;
  puStack_e8 = puVar2;
  FUN_10565e02c();
  puStack_78 = *(undefined8 **)(puVar3 + 0x10);
  uStack_70 = puVar3[0x19];
  uStack_6f = puVar3[0x18];
  uStack_60 = *(undefined8 *)(puVar3 + 0x28);
  uStack_6c = 1;
  pcStack_68 = FUN_10565d46c;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  func_0x000100c435d0(&lStack_1c8,&puStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_1b0,&lStack_1c8);
  uStack_1d0 = 0;
  pppuVar4 = &ppuStack_b0;
  pppuVar7 = &ppuStack_120;
  func_0x0001000e77a0(pppuVar4,pppuVar7,&lStack_1b0,&uStack_1d0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_FUN_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_78 = &uStack_d8;
  func_0x000100105004(&puStack_78);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_SUB_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_78 = &uStack_150;
  func_0x000100105004(&puStack_78);
  _objc_release(uStack_168);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  pppuVar5 = pppuVar4;
  func_0x00010bf0a540(pppuVar4);
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuVar5;
  func_0x00010bf51e00();
  _objc_release(pppuVar5);
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bfb2040(pppuVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_3);
    lStack_1d8 = param_3;
  }
  pppuVar5 = pppuVar6;
  func_0x00010bfb1920(pppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar6);
  _objc_release(pppuVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
    return pppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(lStack_1d8);
  _objc_release(pppuVar6);
  _objc_release(pppuVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  func_0x00010bfb25e0(pppuVar7);
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar7;
  func_0x00010c0720c0();
  _objc_release(pppuVar7);
  return pppuVar4;
}



/* Entry: 10565b7c8; end: 10565b823;  */

undefined8 FUN_10565b7c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb25e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10565b824; end: 10565be4f;  */

void FUN_10565b824(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  undefined4 uStack_3d4;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  ulong *puStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined ***pppuStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_241;
  ulong auStack_240 [40];
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    auStack_240[6] = 0;
    auStack_240[3] = 0;
    auStack_240[2] = 0;
    auStack_240[5] = 0;
    auStack_240[4] = 0;
    auStack_240[1] = 0;
    auStack_240[0] = 0;
  }
  else {
    func_0x00010bfa6be0(auStack_240,param_1);
  }
  puVar2 = &uStack_241;
  FUN_10565e174();
  ppuStack_2b8 = (undefined **)CONCAT44(ppuStack_2b8._4_4_,0xf);
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,0x100);
  uStack_290 = CONCAT71(uStack_290._1_7_,1);
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,10);
  uStack_e8._0_4_ = CONCAT13(puVar2[0x1b],CONCAT12(puVar2[0x1a],0x100));
  ppuStack_100 = &PTR_SUB_1108629c8;
  pppuStack_c0 = &ppuStack_2c0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar3 = auStack_240;
  puStack_c8 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_278 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(auStack_240 + 5);
  _objc_release(auStack_240[3]);
  _objc_release(auStack_240[2]);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (ulong *)0x0) {
    lVar16 = *plStack_310;
    do {
      puVar17 = (ulong *)0x0;
      do {
        if (*plStack_310 != lVar16) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = *(undefined8 *)(lStack_318 + (long)puVar17 * 8);
        func_0x00010bfb25e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar6);
        puVar17 = (ulong *)((long)puVar17 + 1);
      } while (puVar5 != puVar17);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    } while (puVar5 != (ulong *)0x0);
  }
  _objc_release(puVar3);
  _objc_retain(param_1);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    ppuStack_100 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_100,param_1);
  }
  ppuStack_2c0 = (undefined **)0x0;
  ppuStack_2b8 = (undefined **)0x0;
  plStack_2b0 = (long *)0x0;
  auStack_240[0] = auStack_240[0] & 0xffffffff00000000;
  pppuVar7 = &ppuStack_100;
  pppuVar13 = &ppuStack_2c0;
  func_0x00010054c81c(pppuVar7,pppuVar13,auStack_240);
  _objc_retainAutoreleasedReturnValue();
  pppuStack_368 = pppuVar7;
  if (ppuStack_2c0 != (undefined **)0x0) {
    ppuStack_2b8 = ppuStack_2c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  ppuStack_2b8 = (undefined **)0x0;
  ppuStack_2c0 = (undefined **)0x0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  pppuVar7 = pppuStack_368;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = pppuVar7;
  func_0x00010bf52a60();
  if (pppuVar8 != (undefined ***)0x0) {
    lVar16 = *plStack_2b0;
    do {
      pppuVar14 = (undefined ***)0x0;
      do {
        if (*plStack_2b0 != lVar16) {
          _objc_enumerationMutation(pppuVar7);
        }
        pppuVar13 = *(undefined ****)((long)ppuStack_2b8 + (long)pppuVar14 * 8);
        puVar9 = PTR_PTR_1126bc790;
        FUN_10565f134(PTR_PTR_1126bc790,pppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
      } while (pppuVar8 != pppuVar14);
      pppuVar8 = pppuVar7;
      func_0x00010bf52a60();
    } while (pppuVar8 != (undefined ***)0x0);
  }
  _objc_release(pppuVar7);
  _objc_release(pppuStack_368);
  _objc_release(param_1);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_350;
    do {
      lVar19 = 0;
      do {
        if (*plStack_350 != lVar18) {
          _objc_enumerationMutation(param_2);
        }
        lVar15 = *(long *)(lStack_358 + lVar19 * 8);
        pppuVar13 = (undefined ***)0x0;
        lVar10 = lVar15;
        FUN_10565f1a8(lVar15,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb25e0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010bf4b900();
        if (lVar10 != 0) {
          *(char *)(lVar10 + 0x14) = (char)puVar9;
        }
        _objc_release(lVar15);
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar10);
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = param_2;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar16 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_378 = FUN_10565be50;
  puStack_3a0 = puVar4;
  puStack_398 = puVar3;
  lStack_390 = param_2;
  lStack_388 = param_1;
  puStack_380 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar13);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (lVar16 == 0) {
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_3b8,lVar16);
  }
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d4 = 0;
  puVar11 = &uStack_3b8;
  func_0x000108c7f714(puVar11,&lStack_3d0,&uStack_3d4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  if (lStack_3d0 != 0) {
    lStack_3c8 = lStack_3d0;
    __ZdlPv();
  }
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(pppuVar13);
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10565be50; end: 10565bf83;  */

void FUN_10565be50(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar1 = &uStack_48;
  func_0x000108c7f714(puVar1,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10565bf84; end: 10565c177;  */

void FUN_10565bf84(double param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined ***pppuVar16;
  long lVar17;
  long lVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  double dVar21;
  double dVar22;
  undefined4 uStack_8b4;
  long lStack_8b0;
  long lStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined ***pppuStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined ***pppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined8 uStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_788;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined4 uStack_720;
  undefined1 uStack_719;
  long lStack_718;
  long lStack_710;
  undefined8 uStack_708;
  long lStack_700;
  long lStack_6f8;
  undefined **ppuStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6d0;
  undefined1 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  long *plStack_688;
  long *plStack_680;
  undefined1 uStack_671;
  undefined **ppuStack_670;
  undefined4 uStack_668;
  undefined2 uStack_658;
  undefined1 uStack_656;
  undefined1 uStack_655;
  undefined1 *puStack_638;
  undefined ***pppuStack_630;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  long *plStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 uStack_5e0;
  undefined1 uStack_5df;
  undefined4 uStack_5dc;
  code *pcStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined ***pppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined ***pppuStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined ***pppuStack_598;
  undefined1 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_4b8;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined4 uStack_450;
  undefined1 uStack_449;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  undefined **ppuStack_418;
  undefined4 uStack_410;
  undefined4 uStack_400;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined1 uStack_3a1;
  undefined **ppuStack_3a0;
  undefined4 uStack_398;
  undefined2 uStack_388;
  byte bStack_386;
  byte bStack_385;
  undefined1 *puStack_368;
  undefined ***pppuStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined4 uStack_318;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined1 uStack_2b9;
  undefined **ppuStack_2b8;
  undefined4 uStack_2b0;
  undefined2 uStack_2a0;
  undefined2 uStack_29e;
  undefined1 *puStack_280;
  undefined ***pppuStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined **ppuStack_248;
  undefined4 uStack_240;
  undefined2 uStack_230;
  byte bStack_22e;
  byte bStack_22d;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined4 uStack_1b4;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [2];
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
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar17 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar17);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar18 * 8);
        func_0x00010c251120(uVar13);
        if ((dVar21 <= param_1) && (func_0x00010bf95800(uVar13), param_1 < dVar21)) {
          func_0x00010befa120(puVar3);
        }
        lVar18 = lVar18 + 1;
      } while (lVar4 != lVar18);
      lVar4 = lVar17;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar17);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  lVar17 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcStack_138 = FUN_10565c178;
    alStack_1a0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(lVar11);
    _objc_retain(puVar12);
    _objc_opt_class(PTR_PTR_1126bc780);
    if (lVar17 == 0) {
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_1d8,lVar17);
    }
    puVar6 = &uStack_2b9;
    FUN_10565deb4();
    uStack_328 = 0xf;
    uStack_318 = 0x100;
    _objc_retain(puVar12);
    ppuStack_330 = &PTR_SUB_110862760;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e0 = 0;
    puStack_2e8 = (undefined *)0x0;
    plStack_2d0 = (long *)0x0;
    uStack_2d8 = 0;
    plStack_2c8 = (long *)0x0;
    uStack_29e = *(undefined2 *)(puVar6 + 0x1a);
    uStack_2b0 = 10;
    uStack_2a0 = 0x100;
    ppuStack_2b8 = &PTR_FUN_110862700;
    pppuStack_278 = &ppuStack_330;
    uStack_268 = 0;
    puStack_270 = (undefined *)0x0;
    plStack_258 = (long *)0x0;
    uStack_260 = 0;
    plStack_250 = (long *)0x0;
    puVar7 = &uStack_3a1;
    puStack_300 = (undefined1 *)puVar12;
    puStack_280 = puVar6;
    FUN_10565e174();
    uStack_410 = 0xf;
    pppuVar16 = &ppuStack_2b8;
    uStack_400 = 0x100;
    uStack_3e8 = 0;
    ppuStack_418 = &PTR_SUB_1108629c8;
    dVar21 = 0.0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    lStack_3d0 = 0;
    plStack_3b8 = (long *)0x0;
    uStack_3c0 = 0;
    plStack_3b0 = (long *)0x0;
    bStack_386 = puVar7[0x1a];
    bStack_385 = puVar7[0x1b];
    uStack_398 = 10;
    uStack_388 = 0x100;
    ppuStack_3a0 = &PTR_SUB_1108629c8;
    pppuStack_360 = &ppuStack_418;
    plStack_338 = (long *)0x0;
    uStack_350 = 0;
    lStack_358 = 0;
    plStack_340 = (long *)0x0;
    uStack_348 = 0;
    bStack_22e = (byte)uStack_29e | bStack_386;
    bStack_22d = uStack_29e._1_1_ & bStack_385;
    uStack_240 = 4;
    uStack_230 = 0x100;
    ppuStack_248 = &PTR_SUB_1108629c8;
    pppuStack_208 = &ppuStack_3a0;
    uStack_1f8 = 0;
    lStack_200 = 0;
    plStack_1e8 = (long *)0x0;
    uStack_1f0 = 0;
    plStack_1e0 = (long *)0x0;
    puVar6 = &uStack_449;
    puStack_368 = puVar7;
    pppuStack_210 = pppuVar16;
    FUN_10565e02c();
    uStack_1c0 = *(undefined8 *)(puVar6 + 0x10);
    uStack_1b8 = puVar6[0x19];
    uStack_1b7 = puVar6[0x18];
    uStack_1a8 = *(undefined8 *)(puVar6 + 0x28);
    uStack_1b4 = 1;
    pcStack_1b0 = FUN_10565d46c;
    lStack_440 = 0;
    uStack_438 = 0;
    lStack_448 = 0;
    func_0x000100c435d0(&lStack_448,&uStack_1c0,alStack_1a0,1);
    func_0x000100c436b8(&lStack_430,&lStack_448);
    uStack_450 = 0;
    puVar3 = &uStack_1d8;
    pppuVar10 = &ppuStack_248;
    func_0x000108c7f678(puVar3,pppuVar10,&lStack_430,&uStack_450);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lStack_430 != 0) {
      lStack_428 = lStack_430;
      __ZdlPv();
    }
    if (lStack_448 != 0) {
      lStack_440 = lStack_448;
      __ZdlPv();
    }
    plVar1 = plStack_1e0;
    ppuStack_248 = &PTR_SUB_1108629c8;
    plStack_1e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1e8;
    plStack_1e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_200 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_338;
    ppuStack_3a0 = &PTR_SUB_1108629c8;
    plStack_338 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_340;
    plStack_340 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_358 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3b0;
    ppuStack_418 = &PTR_SUB_1108629c8;
    plStack_3b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3b8;
    plStack_3b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_3d0 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_250;
    ppuVar14 = &puStack_270;
    ppuStack_2b8 = &PTR_FUN_110862700;
    plStack_250 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_258;
    plStack_258 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_3a0 = ppuVar14;
    func_0x000100105004(&ppuStack_3a0);
    plVar1 = plStack_2c8;
    ppuStack_330 = &PTR_SUB_110862760;
    plStack_2c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2d0;
    plStack_2d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_3a0 = &puStack_2e8;
    func_0x000100105004(&ppuStack_3a0);
    _objc_release(puStack_300);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(puVar12);
    _objc_release(lVar11);
    lVar4 = lVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_1a0[0]) {
      ___stack_chk_fail();
      _objc_release(ppuVar14);
      if (lStack_430 != 0) {
        lStack_428 = lStack_430;
        __ZdlPv();
      }
      if (lStack_448 != 0) {
        lStack_440 = lStack_448;
        __ZdlPv();
      }
      func_0x000105007830(&ppuStack_248);
      func_0x000105007830(&ppuStack_3a0);
      func_0x000105007830(&ppuStack_418);
      FUN_1050048c0(&ppuStack_2b8);
      func_0x000105004938(&ppuStack_330);
      _objc_release(uStack_1c8);
      _objc_release(uStack_1d0);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar17);
      __Unwind_Resume(lVar4);
      pcStack_458 = FUN_10565c678;
      lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar20 = pppuVar10;
      ppuStack_460 = &puStack_140;
      _objc_retain(pppuVar10);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar2);
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      dVar22 = 0.0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      lStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      puStack_570 = (undefined8 *)0x0;
      pppuVar8 = pppuVar10;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar8;
      func_0x00010bf52a60();
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar16 = (undefined ***)*puStack_570;
        do {
          pppuVar19 = (undefined ***)0x0;
          do {
            if ((undefined ***)*puStack_570 != pppuVar16) {
              _objc_enumerationMutation(pppuVar8);
            }
            ppuVar14 = *(undefined ***)(lStack_578 + (long)pppuVar19 * 8);
            func_0x00010c251120(ppuVar14);
            if ((dVar22 <= dVar21) && (func_0x00010bf95800(ppuVar14), dVar21 < dVar22)) {
              func_0x00010befa120(puVar3);
            }
            pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
          } while (pppuVar9 != pppuVar19);
          pppuVar9 = pppuVar8;
          func_0x00010bf52a60();
        } while (pppuVar9 != (undefined ***)0x0);
      }
      _objc_release(pppuVar8);
      puVar5 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      pppuVar8 = pppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(pppuVar10);
        pppuVar9 = pppuVar8;
        __Unwind_Resume();
        pcStack_588 = FUN_10565c86c;
        lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_5c0 = pppuVar16;
        ppuStack_5b8 = ppuVar14;
        pppuStack_5b0 = pppuVar8;
        puStack_5a8 = puVar5;
        puStack_5a0 = puVar3;
        pppuStack_598 = pppuVar10;
        pppuStack_590 = &ppuStack_460;
        _objc_retain();
        _objc_retain(pppuVar20);
        _objc_opt_class(PTR_PTR_1126bc780);
        if (pppuVar9 == (undefined ***)0x0) {
          uStack_600 = 0;
          uStack_5f8 = 0;
          uStack_5f0 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_600,pppuVar9);
        }
        puVar6 = &uStack_671;
        FUN_10565e174();
        uStack_6e0 = 0xf;
        uStack_6d0 = 0x100;
        uStack_6b8 = 0;
        ppuStack_6e8 = &PTR_SUB_1108629c8;
        dVar21 = 0.0;
        uStack_6a8 = 0;
        uStack_6b0 = 0;
        uStack_698 = 0;
        lStack_6a0 = 0;
        plStack_688 = (long *)0x0;
        uStack_690 = 0;
        plStack_680 = (long *)0x0;
        uStack_656 = puVar6[0x1a];
        uStack_655 = puVar6[0x1b];
        uStack_668 = 10;
        uStack_658 = 0x100;
        ppuStack_670 = &PTR_SUB_1108629c8;
        pppuStack_630 = &ppuStack_6e8;
        plStack_608 = (long *)0x0;
        uStack_620 = 0;
        lStack_628 = 0;
        plStack_610 = (long *)0x0;
        uStack_618 = 0;
        puVar7 = &uStack_719;
        puStack_638 = puVar6;
        FUN_10565e02c();
        uStack_5e8 = *(undefined8 *)(puVar7 + 0x10);
        uStack_5e0 = puVar7[0x19];
        uStack_5df = puVar7[0x18];
        uStack_5d0 = *(undefined8 *)(puVar7 + 0x28);
        uStack_5dc = 1;
        pcStack_5d8 = FUN_10565d46c;
        lStack_710 = 0;
        uStack_708 = 0;
        lStack_718 = 0;
        func_0x000100c435d0(&lStack_718,&uStack_5e8,&lStack_5c8,1);
        func_0x000100c436b8(&lStack_700,&lStack_718);
        uStack_720 = 0;
        puVar3 = &uStack_600;
        pppuVar16 = &ppuStack_670;
        func_0x000108c7f678(puVar3,pppuVar16,&lStack_700,&uStack_720);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (lStack_700 != 0) {
          lStack_6f8 = lStack_700;
          __ZdlPv();
        }
        if (lStack_718 != 0) {
          lStack_710 = lStack_718;
          __ZdlPv();
        }
        plVar1 = plStack_608;
        ppuStack_670 = &PTR_SUB_1108629c8;
        plStack_608 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_610;
        plStack_610 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_628 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_680;
        ppuStack_6e8 = &PTR_SUB_1108629c8;
        plStack_680 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_688;
        plStack_688 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_6a0 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_5f0);
        _objc_release(uStack_5f8);
        _objc_release(pppuVar20);
        pppuVar10 = pppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
          ___stack_chk_fail();
          _objc_release(puVar3);
          if (lStack_700 != 0) {
            lStack_6f8 = lStack_700;
            __ZdlPv();
          }
          if (lStack_718 != 0) {
            lStack_710 = lStack_718;
            __ZdlPv();
          }
          func_0x000105007830(&ppuStack_670);
          func_0x000105007830(&ppuStack_6e8);
          _objc_release(uStack_5f0);
          _objc_release(uStack_5f8);
          _objc_release(pppuVar20);
          _objc_release(pppuVar9);
          __Unwind_Resume(pppuVar10);
          pcStack_728 = FUN_10565cb74;
          lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuVar9 = pppuVar16;
          pppuStack_730 = &pppuStack_590;
          _objc_retain(pppuVar16);
          puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar2);
          puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          dVar22 = 0.0;
          uStack_828 = 0;
          uStack_830 = 0;
          uStack_818 = 0;
          uStack_820 = 0;
          lStack_848 = 0;
          uStack_850 = 0;
          uStack_838 = 0;
          plStack_840 = (long *)0x0;
          pppuVar10 = pppuVar16;
          func_0x00010bf0a540();
          _objc_retainAutoreleasedReturnValue();
          pppuVar8 = pppuVar10;
          func_0x00010bf52a60();
          if (pppuVar8 != (undefined ***)0x0) {
            lVar17 = *plStack_840;
            do {
              pppuVar20 = (undefined ***)0x0;
              do {
                if (*plStack_840 != lVar17) {
                  _objc_enumerationMutation(pppuVar10);
                }
                uVar13 = *(undefined8 *)(lStack_848 + (long)pppuVar20 * 8);
                func_0x00010c251120(uVar13);
                if ((dVar22 <= dVar21) && (func_0x00010bf95800(uVar13), dVar21 < dVar22)) {
                  func_0x00010befa120(puVar3);
                }
                pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
              } while (pppuVar8 != pppuVar20);
              pppuVar8 = pppuVar10;
              func_0x00010bf52a60();
            } while (pppuVar8 != (undefined ***)0x0);
          }
          _objc_release(pppuVar10);
          puVar5 = puVar3;
          func_0x00010bf51e00();
          _objc_release(puVar3);
          pppuVar10 = pppuVar16;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_788) {
            ___stack_chk_fail();
            _objc_release(puVar3);
            _objc_release(pppuVar16);
            pppuVar8 = pppuVar10;
            __Unwind_Resume();
            pcStack_858 = FUN_10565cd68;
            pppuStack_880 = pppuVar10;
            puStack_878 = puVar5;
            puStack_870 = puVar3;
            pppuStack_868 = pppuVar16;
            pppuStack_860 = &pppuStack_730;
            _objc_retain();
            _objc_retain(pppuVar9);
            _objc_opt_class(PTR_PTR_1126bc780);
            if (pppuVar8 == (undefined ***)0x0) {
              uStack_898 = 0;
              uStack_890 = 0;
              uStack_888 = 0;
            }
            else {
              func_0x00010bfa8fc0(&uStack_898,pppuVar8);
            }
            lStack_8b0 = 0;
            lStack_8a8 = 0;
            uStack_8a0 = 0;
            uStack_8b4 = 0;
            puVar3 = &uStack_898;
            func_0x000108c7f714(puVar3,&lStack_8b0,&uStack_8b4);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0b8600();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            if (lStack_8b0 != 0) {
              lStack_8a8 = lStack_8b0;
              __ZdlPv();
            }
            _objc_release(uStack_888);
            _objc_release(uStack_890);
            _objc_release(pppuVar9);
            _objc_release(pppuVar8);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10565c178; end: 10565c677;  */

void FUN_10565c178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_784;
  long lStack_780;
  long lStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined ***pppuStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined ***pppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined1 ***pppuStack_600;
  code *pcStack_5f8;
  undefined4 uStack_5f0;
  undefined1 uStack_5e9;
  long lStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined **ppuStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5a0;
  undefined1 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  long *plStack_550;
  undefined1 uStack_541;
  undefined **ppuStack_540;
  undefined4 uStack_538;
  undefined2 uStack_528;
  undefined1 uStack_526;
  undefined1 uStack_525;
  undefined1 *puStack_508;
  undefined ***pppuStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_4af;
  undefined4 uStack_4ac;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined ***pppuStack_490;
  undefined **ppuStack_488;
  undefined ***pppuStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined ***pppuStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined4 uStack_320;
  undefined1 uStack_319;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2d0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined1 uStack_271;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined2 uStack_258;
  byte bStack_256;
  byte bStack_255;
  undefined1 *puStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 uStack_189;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined1 *puStack_150;
  undefined ***pppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined2 uStack_100;
  byte bStack_fe;
  byte bStack_fd;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_a8,param_1);
  }
  puVar2 = &uStack_189;
  FUN_10565deb4();
  uStack_1f8 = 0xf;
  uStack_1e8 = 0x100;
  _objc_retain(param_3);
  ppuStack_200 = &PTR_SUB_110862760;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  uStack_16e = *(undefined2 *)(puVar2 + 0x1a);
  uStack_180 = 10;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_FUN_110862700;
  pppuStack_148 = &ppuStack_200;
  uStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  puVar3 = &uStack_271;
  uStack_1d0 = param_3;
  puStack_150 = puVar2;
  FUN_10565e174();
  uStack_2e0 = 0xf;
  pppuVar12 = &ppuStack_188;
  uStack_2d0 = 0x100;
  uStack_2b8 = 0;
  ppuStack_2e8 = &PTR_SUB_1108629c8;
  dVar16 = 0.0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  bStack_256 = puVar3[0x1a];
  bStack_255 = puVar3[0x1b];
  uStack_268 = 10;
  uStack_258 = 0x100;
  ppuStack_270 = &PTR_SUB_1108629c8;
  pppuStack_230 = &ppuStack_2e8;
  plStack_208 = (long *)0x0;
  uStack_220 = 0;
  lStack_228 = 0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  bStack_fe = (byte)uStack_16e | bStack_256;
  bStack_fd = uStack_16e._1_1_ & bStack_255;
  uStack_110 = 4;
  uStack_100 = 0x100;
  ppuStack_118 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_270;
  uStack_c8 = 0;
  lStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_b0 = (long *)0x0;
  puVar2 = &uStack_319;
  puStack_238 = puVar3;
  pppuStack_e0 = pppuVar12;
  FUN_10565e02c();
  uStack_90 = *(undefined8 *)(puVar2 + 0x10);
  uStack_88 = puVar2[0x19];
  uStack_87 = puVar2[0x18];
  uStack_78 = *(undefined8 *)(puVar2 + 0x28);
  uStack_84 = 1;
  pcStack_80 = FUN_10565d46c;
  lStack_310 = 0;
  uStack_308 = 0;
  lStack_318 = 0;
  func_0x000100c435d0(&lStack_318,&uStack_90,alStack_70,1);
  func_0x000100c436b8(&lStack_300,&lStack_318);
  uStack_320 = 0;
  puVar4 = &uStack_a8;
  pppuVar9 = &ppuStack_118;
  func_0x000108c7f678(puVar4,pppuVar9,&lStack_300,&uStack_320);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_300 != 0) {
    lStack_2f8 = lStack_300;
    __ZdlPv();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_b0;
  ppuStack_118 = &PTR_SUB_1108629c8;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_208;
  ppuStack_270 = &PTR_SUB_1108629c8;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_SUB_1108629c8;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuVar10 = &puStack_140;
  ppuStack_188 = &PTR_FUN_110862700;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_270 = ppuVar10;
  func_0x000100105004(&ppuStack_270);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_110862760;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_270 = &puStack_1b8;
  func_0x000100105004(&ppuStack_270);
  _objc_release(uStack_1d0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar13 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(ppuVar10);
    if (lStack_300 != 0) {
      lStack_2f8 = lStack_300;
      __ZdlPv();
    }
    if (lStack_318 != 0) {
      lStack_310 = lStack_318;
      __ZdlPv();
    }
    func_0x000105007830(&ppuStack_118);
    func_0x000105007830(&ppuStack_270);
    func_0x000105007830(&ppuStack_2e8);
    FUN_1050048c0(&ppuStack_188);
    func_0x000105004938(&ppuStack_200);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar13);
    pcStack_328 = FUN_10565c678;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar15 = pppuVar9;
    puStack_330 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar9);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar6);
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    lStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    puStack_440 = (undefined8 *)0x0;
    pppuVar7 = pppuVar9;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar7;
    func_0x00010bf52a60();
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar12 = (undefined ***)*puStack_440;
      do {
        pppuVar14 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_440 != pppuVar12) {
            _objc_enumerationMutation(pppuVar7);
          }
          ppuVar10 = *(undefined ***)(lStack_448 + (long)pppuVar14 * 8);
          func_0x00010c251120(ppuVar10);
          if ((dVar17 <= dVar16) && (func_0x00010bf95800(ppuVar10), dVar16 < dVar17)) {
            func_0x00010befa120(puVar4);
          }
          pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
        } while (pppuVar8 != pppuVar14);
        pppuVar8 = pppuVar7;
        func_0x00010bf52a60();
      } while (pppuVar8 != (undefined ***)0x0);
    }
    _objc_release(pppuVar7);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    pppuVar7 = pppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(pppuVar9);
      pppuVar8 = pppuVar7;
      __Unwind_Resume();
      pcStack_458 = FUN_10565c86c;
      lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_490 = pppuVar12;
      ppuStack_488 = ppuVar10;
      pppuStack_480 = pppuVar7;
      puStack_478 = puVar5;
      puStack_470 = puVar4;
      pppuStack_468 = pppuVar9;
      ppuStack_460 = &puStack_330;
      _objc_retain();
      _objc_retain(pppuVar15);
      _objc_opt_class(PTR_PTR_1126bc780);
      if (pppuVar8 == (undefined ***)0x0) {
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_4d0,pppuVar8);
      }
      puVar2 = &uStack_541;
      FUN_10565e174();
      uStack_5b0 = 0xf;
      uStack_5a0 = 0x100;
      uStack_588 = 0;
      ppuStack_5b8 = &PTR_SUB_1108629c8;
      dVar16 = 0.0;
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      lStack_570 = 0;
      plStack_558 = (long *)0x0;
      uStack_560 = 0;
      plStack_550 = (long *)0x0;
      uStack_526 = puVar2[0x1a];
      uStack_525 = puVar2[0x1b];
      uStack_538 = 10;
      uStack_528 = 0x100;
      ppuStack_540 = &PTR_SUB_1108629c8;
      pppuStack_500 = &ppuStack_5b8;
      plStack_4d8 = (long *)0x0;
      uStack_4f0 = 0;
      lStack_4f8 = 0;
      plStack_4e0 = (long *)0x0;
      uStack_4e8 = 0;
      puVar3 = &uStack_5e9;
      puStack_508 = puVar2;
      FUN_10565e02c();
      uStack_4b8 = *(undefined8 *)(puVar3 + 0x10);
      uStack_4b0 = puVar3[0x19];
      uStack_4af = puVar3[0x18];
      uStack_4a0 = *(undefined8 *)(puVar3 + 0x28);
      uStack_4ac = 1;
      pcStack_4a8 = FUN_10565d46c;
      lStack_5e0 = 0;
      uStack_5d8 = 0;
      lStack_5e8 = 0;
      func_0x000100c435d0(&lStack_5e8,&uStack_4b8,&lStack_498,1);
      func_0x000100c436b8(&lStack_5d0,&lStack_5e8);
      uStack_5f0 = 0;
      puVar4 = &uStack_4d0;
      pppuVar12 = &ppuStack_540;
      func_0x000108c7f678(puVar4,pppuVar12,&lStack_5d0,&uStack_5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (lStack_5d0 != 0) {
        lStack_5c8 = lStack_5d0;
        __ZdlPv();
      }
      if (lStack_5e8 != 0) {
        lStack_5e0 = lStack_5e8;
        __ZdlPv();
      }
      plVar1 = plStack_4d8;
      ppuStack_540 = &PTR_SUB_1108629c8;
      plStack_4d8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_4e0;
      plStack_4e0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_4f8 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_550;
      ppuStack_5b8 = &PTR_SUB_1108629c8;
      plStack_550 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_558;
      plStack_558 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_570 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_4c0);
      _objc_release(uStack_4c8);
      _objc_release(pppuVar15);
      pppuVar9 = pppuVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
        ___stack_chk_fail();
        _objc_release(puVar4);
        if (lStack_5d0 != 0) {
          lStack_5c8 = lStack_5d0;
          __ZdlPv();
        }
        if (lStack_5e8 != 0) {
          lStack_5e0 = lStack_5e8;
          __ZdlPv();
        }
        func_0x000105007830(&ppuStack_540);
        func_0x000105007830(&ppuStack_5b8);
        _objc_release(uStack_4c0);
        _objc_release(uStack_4c8);
        _objc_release(pppuVar15);
        _objc_release(pppuVar8);
        __Unwind_Resume(pppuVar9);
        pcStack_5f8 = FUN_10565cb74;
        lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuVar8 = pppuVar12;
        pppuStack_600 = &ppuStack_460;
        _objc_retain(pppuVar12);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar6);
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        dVar17 = 0.0;
        uStack_6f8 = 0;
        uStack_700 = 0;
        uStack_6e8 = 0;
        uStack_6f0 = 0;
        lStack_718 = 0;
        uStack_720 = 0;
        uStack_708 = 0;
        plStack_710 = (long *)0x0;
        pppuVar9 = pppuVar12;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        pppuVar7 = pppuVar9;
        func_0x00010bf52a60();
        if (pppuVar7 != (undefined ***)0x0) {
          lVar13 = *plStack_710;
          do {
            pppuVar15 = (undefined ***)0x0;
            do {
              if (*plStack_710 != lVar13) {
                _objc_enumerationMutation(pppuVar9);
              }
              uVar11 = *(undefined8 *)(lStack_718 + (long)pppuVar15 * 8);
              func_0x00010c251120(uVar11);
              if ((dVar17 <= dVar16) && (func_0x00010bf95800(uVar11), dVar16 < dVar17)) {
                func_0x00010befa120(puVar4);
              }
              pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
            } while (pppuVar7 != pppuVar15);
            pppuVar7 = pppuVar9;
            func_0x00010bf52a60();
          } while (pppuVar7 != (undefined ***)0x0);
        }
        _objc_release(pppuVar9);
        puVar5 = puVar4;
        func_0x00010bf51e00();
        _objc_release(puVar4);
        pppuVar9 = pppuVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
          ___stack_chk_fail();
          _objc_release(puVar4);
          _objc_release(pppuVar12);
          pppuVar7 = pppuVar9;
          __Unwind_Resume();
          pcStack_728 = FUN_10565cd68;
          pppuStack_750 = pppuVar9;
          puStack_748 = puVar5;
          puStack_740 = puVar4;
          pppuStack_738 = pppuVar12;
          pppuStack_730 = &pppuStack_600;
          _objc_retain();
          _objc_retain(pppuVar8);
          _objc_opt_class(PTR_PTR_1126bc780);
          if (pppuVar7 == (undefined ***)0x0) {
            uStack_768 = 0;
            uStack_760 = 0;
            uStack_758 = 0;
          }
          else {
            func_0x00010bfa8fc0(&uStack_768,pppuVar7);
          }
          lStack_780 = 0;
          lStack_778 = 0;
          uStack_770 = 0;
          uStack_784 = 0;
          puVar4 = &uStack_768;
          func_0x000108c7f714(puVar4,&lStack_780,&uStack_784);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (lStack_780 != 0) {
            lStack_778 = lStack_780;
            __ZdlPv();
          }
          _objc_release(uStack_758);
          _objc_release(uStack_760);
          _objc_release(pppuVar8);
          _objc_release(pppuVar7);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10565c678; end: 10565c86b;  */

void FUN_10565c678(double param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 unaff_x23;
  undefined8 uVar13;
  long unaff_x24;
  long lVar14;
  long lVar15;
  undefined ***pppuVar16;
  double dVar17;
  double dVar18;
  undefined4 uStack_464;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined ***pppuStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined ***pppuStack_418;
  undefined1 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_338;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  undefined1 uStack_2c9;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined4 uStack_18c;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar14 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x24 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(lVar14);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        func_0x00010c251120(unaff_x23);
        if ((dVar17 <= param_1) && (func_0x00010bf95800(unaff_x23), param_1 < dVar17)) {
          func_0x00010befa120(puVar3);
        }
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar14;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar14);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  lVar14 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(param_3);
    lVar4 = lVar14;
    __Unwind_Resume();
    pcStack_138 = FUN_10565c86c;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = lVar14;
    puStack_158 = puVar5;
    puStack_150 = puVar3;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(lVar10);
    _objc_opt_class(PTR_PTR_1126bc780);
    if (lVar4 == 0) {
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_1b0,lVar4);
    }
    puVar6 = &uStack_221;
    FUN_10565e174();
    uStack_290 = 0xf;
    uStack_280 = 0x100;
    uStack_268 = 0;
    ppuStack_298 = &PTR_SUB_1108629c8;
    dVar17 = 0.0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    lStack_250 = 0;
    plStack_238 = (long *)0x0;
    uStack_240 = 0;
    plStack_230 = (long *)0x0;
    uStack_206 = puVar6[0x1a];
    uStack_205 = puVar6[0x1b];
    uStack_218 = 10;
    uStack_208 = 0x100;
    ppuStack_220 = &PTR_SUB_1108629c8;
    pppuStack_1e0 = &ppuStack_298;
    plStack_1b8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1d8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    puVar7 = &uStack_2c9;
    puStack_1e8 = puVar6;
    FUN_10565e02c();
    uStack_198 = *(undefined8 *)(puVar7 + 0x10);
    uStack_190 = puVar7[0x19];
    uStack_18f = puVar7[0x18];
    uStack_180 = *(undefined8 *)(puVar7 + 0x28);
    uStack_18c = 1;
    pcStack_188 = FUN_10565d46c;
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    lStack_2c8 = 0;
    func_0x000100c435d0(&lStack_2c8,&uStack_198,&lStack_178,1);
    func_0x000100c436b8(&lStack_2b0,&lStack_2c8);
    uStack_2d0 = 0;
    puVar3 = &uStack_1b0;
    pppuVar11 = &ppuStack_220;
    func_0x000108c7f678(puVar3,pppuVar11,&lStack_2b0,&uStack_2d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lStack_2b0 != 0) {
      lStack_2a8 = lStack_2b0;
      __ZdlPv();
    }
    if (lStack_2c8 != 0) {
      lStack_2c0 = lStack_2c8;
      __ZdlPv();
    }
    plVar1 = plStack_1b8;
    ppuStack_220 = &PTR_SUB_1108629c8;
    plStack_1b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_230;
    ppuStack_298 = &PTR_SUB_1108629c8;
    plStack_230 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_238;
    plStack_238 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_250 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(lVar10);
    lVar14 = lVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      if (lStack_2b0 != 0) {
        lStack_2a8 = lStack_2b0;
        __ZdlPv();
      }
      if (lStack_2c8 != 0) {
        lStack_2c0 = lStack_2c8;
        __ZdlPv();
      }
      func_0x000105007830(&ppuStack_220);
      func_0x000105007830(&ppuStack_298);
      _objc_release(uStack_1a0);
      _objc_release(uStack_1a8);
      _objc_release(lVar10);
      _objc_release(lVar4);
      __Unwind_Resume(lVar14);
      pcStack_2d8 = FUN_10565cb74;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar12 = pppuVar11;
      ppuStack_2e0 = &puStack_140;
      _objc_retain(pppuVar11);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar2);
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      dVar18 = 0.0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      lStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      pppuVar8 = pppuVar11;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar8;
      func_0x00010bf52a60();
      if (pppuVar9 != (undefined ***)0x0) {
        lVar14 = *plStack_3f0;
        do {
          pppuVar16 = (undefined ***)0x0;
          do {
            if (*plStack_3f0 != lVar14) {
              _objc_enumerationMutation(pppuVar8);
            }
            uVar13 = *(undefined8 *)(lStack_3f8 + (long)pppuVar16 * 8);
            func_0x00010c251120(uVar13);
            if ((dVar18 <= dVar17) && (func_0x00010bf95800(uVar13), dVar17 < dVar18)) {
              func_0x00010befa120(puVar3);
            }
            pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
          } while (pppuVar9 != pppuVar16);
          pppuVar9 = pppuVar8;
          func_0x00010bf52a60();
        } while (pppuVar9 != (undefined ***)0x0);
      }
      _objc_release(pppuVar8);
      puVar5 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      pppuVar8 = pppuVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(pppuVar11);
        pppuVar9 = pppuVar8;
        __Unwind_Resume();
        pcStack_408 = FUN_10565cd68;
        pppuStack_430 = pppuVar8;
        puStack_428 = puVar5;
        puStack_420 = puVar3;
        pppuStack_418 = pppuVar11;
        pppuStack_410 = &ppuStack_2e0;
        _objc_retain();
        _objc_retain(pppuVar12);
        _objc_opt_class(PTR_PTR_1126bc780);
        if (pppuVar9 == (undefined ***)0x0) {
          uStack_448 = 0;
          uStack_440 = 0;
          uStack_438 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_448,pppuVar9);
        }
        lStack_460 = 0;
        lStack_458 = 0;
        uStack_450 = 0;
        uStack_464 = 0;
        puVar3 = &uStack_448;
        func_0x000108c7f714(puVar3,&lStack_460,&uStack_464);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (lStack_460 != 0) {
          lStack_458 = lStack_460;
          __ZdlPv();
        }
        _objc_release(uStack_438);
        _objc_release(uStack_440);
        _objc_release(pppuVar12);
        _objc_release(pppuVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10565c86c; end: 10565cb73;  */

void FUN_10565c86c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined ***pppuVar13;
  double dVar14;
  double dVar15;
  undefined4 uStack_334;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined ***pppuStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined ***pppuStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_208;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_199;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined **ppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_150;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f1;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 *puStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_10565e174();
  uStack_160 = 0xf;
  uStack_150 = 0x100;
  uStack_138 = 0;
  ppuStack_168 = &PTR_SUB_1108629c8;
  dVar14 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  plStack_108 = (long *)0x0;
  uStack_110 = 0;
  plStack_100 = (long *)0x0;
  uStack_d6 = puVar2[0x1a];
  uStack_d5 = puVar2[0x1b];
  uStack_e8 = 10;
  uStack_d8 = 0x100;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  pppuStack_b0 = &ppuStack_168;
  plStack_88 = (long *)0x0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  plStack_90 = (long *)0x0;
  uStack_98 = 0;
  puVar3 = &uStack_199;
  puStack_b8 = puVar2;
  FUN_10565e02c();
  uStack_68 = *(undefined8 *)(puVar3 + 0x10);
  uStack_60 = puVar3[0x19];
  uStack_5f = puVar3[0x18];
  uStack_50 = *(undefined8 *)(puVar3 + 0x28);
  uStack_5c = 1;
  pcStack_58 = FUN_10565d46c;
  lStack_190 = 0;
  uStack_188 = 0;
  lStack_198 = 0;
  func_0x000100c435d0(&lStack_198,&uStack_68,&lStack_48,1);
  func_0x000100c436b8(&lStack_180,&lStack_198);
  uStack_1a0 = 0;
  puVar4 = &uStack_80;
  pppuVar9 = &ppuStack_f0;
  func_0x000108c7f678(puVar4,pppuVar9,&lStack_180,&uStack_1a0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  if (lStack_198 != 0) {
    lStack_190 = lStack_198;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  ppuStack_f0 = &PTR_SUB_1108629c8;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_100;
  ppuStack_168 = &PTR_SUB_1108629c8;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_108;
  plStack_108 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_120 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_2);
  lVar12 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (lStack_180 != 0) {
      lStack_178 = lStack_180;
      __ZdlPv();
    }
    if (lStack_198 != 0) {
      lStack_190 = lStack_198;
      __ZdlPv();
    }
    func_0x000105007830(&ppuStack_f0);
    func_0x000105007830(&ppuStack_168);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar12);
    pcStack_1a8 = FUN_10565cb74;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar10 = pppuVar9;
    puStack_1b0 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar9);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar6);
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 0.0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    pppuVar7 = pppuVar9;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar7;
    func_0x00010bf52a60();
    if (pppuVar8 != (undefined ***)0x0) {
      lVar12 = *plStack_2c0;
      do {
        pppuVar13 = (undefined ***)0x0;
        do {
          if (*plStack_2c0 != lVar12) {
            _objc_enumerationMutation(pppuVar7);
          }
          uVar11 = *(undefined8 *)(lStack_2c8 + (long)pppuVar13 * 8);
          func_0x00010c251120(uVar11);
          if ((dVar15 <= dVar14) && (func_0x00010bf95800(uVar11), dVar14 < dVar15)) {
            func_0x00010befa120(puVar4);
          }
          pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
        } while (pppuVar8 != pppuVar13);
        pppuVar8 = pppuVar7;
        func_0x00010bf52a60();
      } while (pppuVar8 != (undefined ***)0x0);
    }
    _objc_release(pppuVar7);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    pppuVar7 = pppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(pppuVar9);
      pppuVar8 = pppuVar7;
      __Unwind_Resume();
      pcStack_2d8 = FUN_10565cd68;
      pppuStack_300 = pppuVar7;
      puStack_2f8 = puVar5;
      puStack_2f0 = puVar4;
      pppuStack_2e8 = pppuVar9;
      ppuStack_2e0 = &puStack_1b0;
      _objc_retain();
      _objc_retain(pppuVar10);
      _objc_opt_class(PTR_PTR_1126bc780);
      if (pppuVar8 == (undefined ***)0x0) {
        uStack_318 = 0;
        uStack_310 = 0;
        uStack_308 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_318,pppuVar8);
      }
      lStack_330 = 0;
      lStack_328 = 0;
      uStack_320 = 0;
      uStack_334 = 0;
      puVar4 = &uStack_318;
      func_0x000108c7f714(puVar4,&lStack_330,&uStack_334);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (lStack_330 != 0) {
        lStack_328 = lStack_330;
        __ZdlPv();
      }
      _objc_release(uStack_308);
      _objc_release(uStack_310);
      _objc_release(pppuVar10);
      _objc_release(pppuVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10565cb74; end: 10565cd67;  */

void FUN_10565cb74(undefined8 param_1,long param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 in_b0;
  undefined1 uVar14;
  undefined1 in_register_00005001;
  undefined1 uVar15;
  undefined1 in_register_00005002;
  undefined1 uVar16;
  undefined1 in_register_00005003;
  undefined1 uVar17;
  undefined1 in_register_00005004;
  undefined1 uVar18;
  undefined1 in_register_00005005;
  undefined1 uVar19;
  undefined1 in_register_00005006;
  undefined1 uVar20;
  undefined1 in_register_00005007;
  undefined1 uVar21;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain(param_2);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar1 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  _objc_release(puVar5);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar7);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        func_0x00010c251120(uVar11);
        bVar2 = false;
        bVar4 = true;
        if (!NAN((double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                                 ))) && !NAN(dVar1)) {
          bVar2 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                                  )) == dVar1;
          bVar4 = dVar1 <= (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,
                                                  CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,
                                                  uVar14)))))));
        }
        if (!bVar4 || bVar2) {
          func_0x00010bf95800(uVar11);
          bVar4 = false;
          bVar3 = false;
          bVar2 = NAN((double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,
                                                  CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,
                                                  uVar14))))))));
          if (!bVar2 && !NAN(dVar1)) {
            bVar4 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13
                                                  (uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))))
                                                  ))) < dVar1;
            bVar3 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13
                                                  (uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))))
                                                  ))) == dVar1;
          }
          if (!bVar3 && bVar4 == (bVar2 || NAN(dVar1))) {
            func_0x00010befa120(puVar6);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar8 != lVar13);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  puVar9 = puVar6;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(param_2);
    lVar8 = lVar7;
    __Unwind_Resume();
    pcStack_138 = FUN_10565cd68;
    lStack_160 = lVar7;
    puStack_158 = puVar9;
    puStack_150 = puVar6;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(lVar10);
    _objc_opt_class(PTR_PTR_1126bc780);
    if (lVar8 == 0) {
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_178,lVar8);
    }
    lStack_190 = 0;
    lStack_188 = 0;
    uStack_180 = 0;
    uStack_194 = 0;
    puVar6 = &uStack_178;
    func_0x000108c7f714(puVar6,&lStack_190,&uStack_194);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (lStack_190 != 0) {
      lStack_188 = lStack_190;
      __ZdlPv();
    }
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    _objc_release(lVar10);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10565cd68; end: 10565ce9b;  */

void FUN_10565cd68(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar1 = &uStack_48;
  func_0x000108c7f714(puVar1,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10565ce9c; end: 10565d237;  */

undefined * FUN_10565ce9c(undefined8 param_1,undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  code *pcVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined1 in_b0;
  undefined1 uVar23;
  undefined1 in_register_00005001;
  undefined1 uVar24;
  undefined1 in_register_00005002;
  undefined1 uVar25;
  undefined1 in_register_00005003;
  undefined1 uVar26;
  undefined1 in_register_00005004;
  undefined1 uVar27;
  undefined1 in_register_00005005;
  undefined1 uVar28;
  undefined1 in_register_00005006;
  undefined1 uVar29;
  undefined1 in_register_00005007;
  undefined1 uVar30;
  double unaff_d9;
  byte bStack_3c2;
  byte bStack_3c1;
  double dStack_3c0;
  undefined *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_33c;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_268;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar3 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  puVar8 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar19 = *plStack_1b0;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar19) {
          _objc_enumerationMutation(puVar8);
        }
        uVar17 = *(undefined8 *)(lStack_1b8 + (long)puVar22 * 8);
        func_0x00010c251120(uVar17);
        bVar4 = false;
        bVar5 = false;
        bVar6 = NAN((double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13
                                                  (uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))))
                                                  ))));
        if (!bVar6 && !NAN(dVar3)) {
          bVar4 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))
                                                  )) < dVar3;
          bVar5 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))
                                                  )) == dVar3;
        }
        if (bVar5 || bVar4 != (bVar6 || NAN(dVar3))) {
          func_0x00010bf95800(uVar17);
          bVar6 = false;
          bVar4 = true;
          if (!NAN((double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))
                                                  ))) && !NAN(dVar3)) {
            bVar6 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13
                                                  (uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))))
                                                  ))) == dVar3;
            bVar4 = dVar3 <= (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27
                                                  ,CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
          }
          if (bVar4 && !bVar6) {
            uVar10 = uVar17;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            if (puVar20 == (undefined *)0x0) {
LAB_10565cfec:
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar7);
              _objc_release(uVar17);
            }
            else {
              func_0x00010c251120(uVar17);
              unaff_d9 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
              func_0x00010c251120(puVar20);
              bVar4 = false;
              bVar5 = false;
              bVar6 = NAN((double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23))))))));
              if (!NAN(unaff_d9) && !bVar6) {
                bVar4 = unaff_d9 <
                        (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
                bVar5 = unaff_d9 ==
                        (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
              }
              if (!bVar5 && bVar4 == (NAN(unaff_d9) || bVar6)) goto LAB_10565cfec;
            }
            _objc_release(puVar20);
          }
        }
        puVar22 = puVar22 + 1;
      } while (puVar9 != puVar22);
      puVar9 = puVar8;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  puVar9 = puVar7;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar9;
  func_0x00010bf52a60();
  if (puVar22 != (undefined *)0x0) {
    lVar19 = *plStack_1f0;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar19) {
          _objc_enumerationMutation(puVar9);
        }
        uVar18 = *(ulong *)(lStack_1f8 + (long)puVar20 * 8);
        func_0x00010c06c2c0();
        if ((uVar18 & 1) == 0) {
          func_0x00010befa120(puVar8);
        }
        puVar20 = puVar20 + 1;
      } while (puVar22 != puVar20);
      puVar22 = puVar9;
      func_0x00010bf52a60();
    } while (puVar22 != (undefined *)0x0);
  }
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf51e00(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar22 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar15 = (code *)&uStack_380;
  pcStack_208 = FUN_10565d238;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bc780);
  if (puVar22 == (undefined *)0x0) {
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_320,puVar22);
  }
  lStack_338 = 0;
  lStack_330 = 0;
  uStack_328 = 0;
  uStack_33c = 0;
  puVar11 = &uStack_320;
  plVar14 = &lStack_338;
  func_0x00010054c81c(puVar11,plVar14,&uStack_33c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_338 != 0) {
    lStack_330 = lStack_338;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_2f8);
  _objc_release(uStack_308);
  _objc_release(uStack_310);
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  puVar12 = puVar11;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf52a60();
  if (puVar13 != (undefined8 *)0x0) {
    lVar19 = *plStack_370;
    do {
      puVar21 = (undefined8 *)0x0;
      do {
        if (*plStack_370 != lVar19) {
          _objc_enumerationMutation(puVar12);
        }
        plVar14 = *(long **)(lStack_378 + (long)puVar21 * 8);
        puVar7 = PTR_PTR_1126bc790;
        FUN_10565ebcc(PTR_PTR_1126bc790,plVar14);
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          puVar7[0x14] = 0;
        }
        func_0x00010c25ed40(puVar22);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar21 = (undefined8 *)((long)puVar21 + 1);
      } while (puVar13 != puVar21);
      puVar13 = puVar12;
      pcVar15 = (code *)&uStack_380;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined8 *)0x0);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar7 = puVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar22);
  puVar8 = puVar7;
  __Unwind_Resume(puVar7);
  pcStack_388 = FUN_10565d46c;
  dStack_3c0 = unaff_d9;
  puStack_3b0 = puVar7;
  puStack_3a8 = puVar12;
  puStack_3a0 = puVar11;
  puStack_398 = puVar22;
  ppuStack_390 = &puStack_210;
  _objc_retain();
  _objc_retain(plVar14);
  (*pcVar15)(puVar8,&bStack_3c1);
  dVar3 = (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(uVar26,
                                                  CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))));
  (*pcVar15)(plVar14,&bStack_3c2);
  uVar16 = 2;
  uVar1 = uVar16;
  if (bStack_3c2 == 0) {
    uVar1 = 0;
  }
  if (bStack_3c1 == 0) {
    uVar1 = 1;
  }
  bVar4 = false;
  bVar5 = false;
  bVar6 = NAN((double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))
                                              )));
  if (!NAN(dVar3) && !bVar6) {
    bVar4 = dVar3 < (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13
                                                  (uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))))
                                                  )));
    bVar5 = dVar3 == (double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
  }
  if (!bVar5 && bVar4 == (NAN(dVar3) || bVar6)) {
    uVar16 = 1;
  }
  uVar2 = 0;
  if (!bVar4) {
    uVar2 = uVar16;
  }
  uVar16 = uVar1;
  if ((bStack_3c2 & 1) == 0) {
    uVar16 = uVar2;
  }
  if ((bStack_3c1 & 1) == 0) {
    uVar1 = uVar16;
  }
  _objc_release(plVar14);
  _objc_release(puVar8);
  return (undefined *)(ulong)uVar1;
}



/* Entry: 10565d238; end: 10565d46b;  */

ulong FUN_10565d238(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bStack_1c2;
  byte bStack_1c1;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  pcVar13 = (code *)&uStack_180;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bc780);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_13c = 0;
  puVar7 = &uStack_120;
  plVar12 = &lStack_138;
  func_0x00010054c81c(puVar7,plVar12,&uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar8 = puVar7;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf52a60();
  if (puVar9 != (undefined8 *)0x0) {
    lVar15 = *plStack_170;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_170 != lVar15) {
          _objc_enumerationMutation(puVar8);
        }
        plVar12 = *(long **)(lStack_178 + (long)puVar16 * 8);
        puVar10 = PTR_PTR_1126bc790;
        FUN_10565ebcc(PTR_PTR_1126bc790,plVar12);
        _objc_retainAutoreleasedReturnValue();
        if (puVar10 != (undefined *)0x0) {
          puVar10[0x14] = 0;
        }
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar9 != puVar16);
      puVar9 = puVar8;
      pcVar13 = (code *)&uStack_180;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar11;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_1);
  __Unwind_Resume(uVar11);
  _objc_retain();
  _objc_retain(plVar12);
  (*pcVar13)(uVar11,&bStack_1c1);
  dVar4 = (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  (*pcVar13)(plVar12,&bStack_1c2);
  uVar14 = 2;
  uVar2 = uVar14;
  if (bStack_1c2 == 0) {
    uVar2 = 0;
  }
  if (bStack_1c1 == 0) {
    uVar2 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(
                                                  uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))
                                              )));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13
                                                  (uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))))
                                                  )));
    bVar6 = dVar4 == (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,
                                                  CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,
                                                  uVar17)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar14 = 1;
  }
  uVar3 = 0;
  if (!bVar5) {
    uVar3 = uVar14;
  }
  uVar14 = uVar2;
  if ((bStack_1c2 & 1) == 0) {
    uVar14 = uVar3;
  }
  if ((bStack_1c1 & 1) == 0) {
    uVar2 = uVar14;
  }
  _objc_release(plVar12);
  _objc_release(uVar11);
  return (ulong)uVar2;
}



/* Entry: 10565d46c; end: 10565d51f;  */

undefined4 FUN_10565d46c(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10565d520; end: 10565d6c7; -[SCFriendshipFlashbackStory initWithFlashbackId:conversationId:flashbackMessage:startTimestampInUtc:endTimestampInUtc:title:subtitle:featuredStoryType:priority:isAnyMessageViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10565d520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126e97c8;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127271d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127271dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271dc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127271e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271e0) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271e4) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271e8) = param_2;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127271ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271ec) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127271f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127271f0) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127271f4) = param_10;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127271f8) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127271fc) = param_12;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10565d6c8; end: 10565d6eb; -[SCFriendshipFlashbackStory copyWithZone:] */

undefined8 FUN_10565d6c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10565d6ec; end: 10565d803; -[SCFriendshipFlashbackStory hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10565d6ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127271d8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127271dc);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127271e0);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127271e4) + *(ulong *)(param_1 + _DAT_1127271e4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127271e8) + *(ulong *)(param_1 + _DAT_1127271e8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127271ec);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127271f0);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(uint *)(param_1 + _DAT_1127271f4);
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_1127271f8);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_1127271fc);
  puVar4 = &uStack_78;
  uStack_48 = uVar2;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10565d9b4:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10565d9c0;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(int *)((long)puVar4 + (long)_DAT_1127271f4) ==
          *(int *)((long)param_3 + (long)_DAT_1127271f4) &&
         (*(int *)((long)puVar4 + (long)_DAT_1127271f8) ==
          *(int *)((long)param_3 + (long)_DAT_1127271f8))) &&
        (*(char *)((long)puVar4 + (long)_DAT_1127271fc) ==
         *(char *)((long)param_3 + (long)_DAT_1127271fc))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_1127271e4);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_1127271e4);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_1127271e8);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_1127271e8);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if ((((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127271d8),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_1127271d8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127271dc),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_1127271dc) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127271e0),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_1127271e0) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127271ec),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_1127271ec) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
          puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_1127271f0);
          if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_1127271f0)) {
            func_0x00010c071ae0();
            goto LAB_10565d9c0;
          }
          goto LAB_10565d9b4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10565d9c0:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10565d804; end: 10565d9db; -[SCFriendshipFlashbackStory isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10565d804(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10565d9b4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10565d9c0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(int *)(param_1 + (long)_DAT_1127271f4) == *(int *)(param_3 + (long)_DAT_1127271f4) &&
         (*(int *)(param_1 + (long)_DAT_1127271f8) == *(int *)(param_3 + (long)_DAT_1127271f8))) &&
        (*(char *)(param_1 + (long)_DAT_1127271fc) == *(char *)(param_3 + (long)_DAT_1127271fc)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127271e4);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127271e4);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_1127271e8);
        dVar6 = *(double *)(param_3 + (long)_DAT_1127271e8);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_1127271d8),
              lVar4 == *(long *)(param_3 + (long)_DAT_1127271d8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_1127271dc),
             lVar4 == *(long *)(param_3 + (long)_DAT_1127271dc) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           (((lVar4 = *(long *)(param_1 + (long)_DAT_1127271e0),
             lVar4 == *(long *)(param_3 + (long)_DAT_1127271e0) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_1127271ec),
             lVar4 == *(long *)(param_3 + (long)_DAT_1127271ec) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_1127271f0);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_1127271f0)) {
            func_0x00010c071ae0();
            goto LAB_10565d9c0;
          }
          goto LAB_10565d9b4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10565d9c0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10565d9dc; end: 10565d9eb; -[SCFriendshipFlashbackStory flashbackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565d9dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271d8);
}



/* Entry: 10565d9ec; end: 10565d9fb; -[SCFriendshipFlashbackStory conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565d9ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271dc);
}



/* Entry: 10565d9fc; end: 10565da0b; -[SCFriendshipFlashbackStory flashbackMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565d9fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271e0);
}



/* Entry: 10565da0c; end: 10565da1b; -[SCFriendshipFlashbackStory startTimestampInUtc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565da0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271e4);
}



/* Entry: 10565da1c; end: 10565da2b; -[SCFriendshipFlashbackStory endTimestampInUtc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565da1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271e8);
}



/* Entry: 10565da2c; end: 10565da3b; -[SCFriendshipFlashbackStory title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565da2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271ec);
}



/* Entry: 10565da3c; end: 10565da4b; -[SCFriendshipFlashbackStory subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10565da3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127271f0);
}



/* Entry: 10565da4c; end: 10565da5b; -[SCFriendshipFlashbackStory featuredStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10565da4c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127271f4);
}



/* Entry: 10565da5c; end: 10565da6b; -[SCFriendshipFlashbackStory priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10565da5c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127271f8);
}



/* Entry: 10565da6c; end: 10565da7b; -[SCFriendshipFlashbackStory isAnyMessageViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10565da6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127271fc);
}



/* Entry: 10565da7c; end: 10565daeb; -[SCFriendshipFlashbackStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10565da7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127271f0,0);
  _objc_storeStrong(param_1 + _DAT_1127271ec,0);
  _objc_storeStrong(param_1 + _DAT_1127271e0,0);
  _objc_storeStrong(param_1 + _DAT_1127271dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127271d8,0);
  return;
}



/* Entry: 10565daec; end: 10565db9f; -[SCFriendshipFlashbackMessage initWithMessageId:creatorUserId:isUnavailable:] */

undefined1 *
FUN_10565daec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e97d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10565dba0; end: 10565dbc3; -[SCFriendshipFlashbackMessage copyWithZone:] */

undefined8 FUN_10565dba0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10565dbc4; end: 10565dc3b; -[SCFriendshipFlashbackMessage hash] */

undefined8 * FUN_10565dbc4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10565dccc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10565dcd8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10565dcd8;
        }
        goto LAB_10565dccc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10565dcd8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10565dc3c; end: 10565dcf3; -[SCFriendshipFlashbackMessage isEqual:] */

long FUN_10565dc3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10565dccc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10565dcd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10565dcd8;
        }
        goto LAB_10565dccc;
      }
    }
    lVar3 = 0;
  }
LAB_10565dcd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10565dcf4; end: 10565dcfb; -[SCFriendshipFlashbackMessage messageId] */

undefined8 FUN_10565dcf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10565dcfc; end: 10565dd03; -[SCFriendshipFlashbackMessage creatorUserId] */

undefined8 FUN_10565dcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10565dd04; end: 10565dd0b; -[SCFriendshipFlashbackMessage isUnavailable] */

undefined1 FUN_10565dd04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10565dd0c; end: 10565dd3b; -[SCFriendshipFlashbackMessage .cxx_destruct] */

void FUN_10565dd0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10565dd3c; end: 10565dd9f;  */

undefined ** FUN_10565dd3c(void)

{
  int iVar1;
  
  if ((bRam0000000113819db0 & 1) == 0) {
    iVar1 = 0x13819db0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130efb20,0x100000000);
      ___cxa_guard_release(0x113819db0);
    }
  }
  return &PTR_PTR_1130efb20;
}



/* Entry: 10565dda0; end: 10565de27;  */

void FUN_10565dda0(uint *param_1,undefined1 *param_2)

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



/* Entry: 10565de28; end: 10565deb3;  */

void FUN_10565de28(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb25e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10565deb4; end: 10565df17;  */

undefined ** FUN_10565deb4(void)

{
  int iVar1;
  
  if ((bRam0000000113819db8 & 1) == 0) {
    iVar1 = 0x13819db8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130efb90,0x100000000);
      ___cxa_guard_release(0x113819db8);
    }
  }
  return &PTR_PTR_1130efb90;
}



/* Entry: 10565df18; end: 10565df9f;  */

void FUN_10565df18(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
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



/* Entry: 10565dfa0; end: 10565e02b;  */

void FUN_10565dfa0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10565e02c; end: 10565e0e3;  */

undefined8 FUN_10565e02c(void)

{
  int iVar1;
  
  if ((bRam0000000113819e30 & 1) == 0) {
    iVar1 = 0x13819e30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819dc8 = 0xe;
      puRam0000000113819dd0 = &UNK_10f2e391f;
      uRam0000000113819dd8 = 0x100;
      pcRam0000000113819de0 = FUN_10565e0e4;
      pcRam0000000113819de8 = FUN_10565e118;
      ppuRam0000000113819dc0 = &PTR_FUN_11086d7d0;
      uRam0000000113819e00 = 0;
      uRam0000000113819df8 = 0;
      uRam0000000113819e10 = 0;
      uRam0000000113819e08 = 0;
      uRam0000000113819e20 = 0;
      uRam0000000113819e18 = 0;
      uRam0000000113819e28 = 0;
      ___cxa_atexit(FUN_105187b98,0x113819dc0,0x100000000);
      ___cxa_guard_release(0x113819e30);
    }
  }
  return 0x113819dc0;
}



/* Entry: 10565e0e4; end: 10565e117;  */

undefined8 FUN_10565e0e4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 10565e118; end: 10565e173;  */

undefined8 FUN_10565e118(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c251120(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10565e174; end: 10565e22f;  */

undefined8 FUN_10565e174(void)

{
  int iVar1;
  
  if ((bRam0000000113819ea8 & 1) == 0) {
    iVar1 = 0x13819ea8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819e40 = 0xe;
      puRam0000000113819e48 = &UNK_10f2e3933;
      uRam0000000113819e50 = 0x1010000;
      pcRam0000000113819e58 = FUN_10565e230;
      pcRam0000000113819e60 = FUN_10565e270;
      ppuRam0000000113819e38 = &PTR_SUB_1108629c8;
      uRam0000000113819e78 = 0;
      uRam0000000113819e70 = 0;
      uRam0000000113819e88 = 0;
      uRam0000000113819e80 = 0;
      uRam0000000113819e98 = 0;
      uRam0000000113819e90 = 0;
      uRam0000000113819ea0 = 0;
      ___cxa_atexit(0x105007830,0x113819e38,0x100000000);
      ___cxa_guard_release(0x113819ea8);
    }
  }
  return 0x113819e38;
}



/* Entry: 10565e230; end: 10565e26f;  */

bool FUN_10565e230(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x16 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}


