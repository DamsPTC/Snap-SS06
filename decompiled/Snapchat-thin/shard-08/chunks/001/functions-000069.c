/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cebdb0; end: 105cebdbb;  */

void FUN_105cebdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105cebdbc; end: 105cebdf7;  */

void FUN_105cebdbc(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105cebde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105cebdf8; end: 105cebe33; -[SCCreativeToolsHintManagerImpl .cxx_destruct] */

void FUN_105cebdf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cebe34; end: 105cebeff; -[SCPreviewFeatureUserTaggingImpl initWithUserTaggingFriendsProvider:previewConfiguration:creativeToolsABProvider:] */

undefined1 *
FUN_105cebe34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ecd38;
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



/* Entry: 105cebf00; end: 105cebf07; -[SCPreviewFeatureUserTaggingImpl responderChainPriority] */

undefined8 FUN_105cebf00(void)

{
  return 0x7fffffff;
}



/* Entry: 105cebf08; end: 105cebf0f; -[SCPreviewFeatureUserTaggingImpl shouldEnableUserTagging] */

undefined8 FUN_105cebf08(void)

{
  return 1;
}



/* Entry: 105cebf10; end: 105cec2d7; -[SCPreviewFeatureUserTaggingImpl userTaggingInfoFromCaptionStates:andStickerStates:] */

void FUN_105cebf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bee71a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee71c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar6);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar6);
  _objc_release(uVar3);
  puVar7 = puVar2;
  func_0x00010bd86590(puVar2,&PTR___NSConcreteGlobalBlock_1108e4f30);
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar7);
  ppuVar11 = &PTR___NSConcreteGlobalBlock_1108e4f50;
  puVar2 = puVar4;
  func_0x00010bd86590(puVar4,&PTR___NSConcreteGlobalBlock_1108e4f50);
  puVar7 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ppuVar10 = ppuVar11;
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 105cec2d8; end: 105cec327;  */

void FUN_105cec2d8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105cec328; end: 105cec8ab; -[SCPreviewFeatureUserTaggingImpl _userTaggingInfoFromCaptionStates:] */

void FUN_105cec328(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_3);
      }
      uVar18 = *(undefined8 *)(lVar19 * 8);
      uVar6 = uVar18;
      func_0x00010c268460(uVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      uVar8 = uVar6;
      func_0x00010bf00d20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar8;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar21);
      _objc_release(uVar8);
      uVar21 = *(undefined8 *)(param_1 + 8);
      func_0x00010c26b700(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c293de0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      uVar8 = uVar21;
      func_0x00010c0e00e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar8);
      uVar8 = uVar21;
      func_0x00010c0e00e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(uVar8);
      _objc_release(uVar21);
      _objc_release(puVar7);
      _objc_release(uVar6);
      lVar19 = lVar19 + 1;
    } while (lVar5 != lVar19);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar7 = puVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar3);
      }
      lVar17 = *(long *)((long)puVar20 * 8);
      lVar11 = lVar17;
      func_0x00010c2923e0(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(lVar11);
      lVar11 = lVar17;
      func_0x00010c294420(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(lVar11);
      lVar19 = *(long *)(param_1 + 8);
      lVar11 = lVar17;
      func_0x00010c294420(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c244440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar11);
      if (lVar19 == 0) {
        func_0x00010befa120(puVar9);
      }
      func_0x00010bf5b820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar17 != 0) {
        func_0x00010befa120(puVar10);
      }
      puVar20 = puVar20 + 1;
    } while (puVar7 != puVar20);
    puVar7 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar20;
  func_0x00010c0d3c80();
  puVar13 = puVar2;
  func_0x00010c0d3c80();
  puVar14 = puVar7;
  func_0x00010c0d3c80();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar20);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c290fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_user_112681e10);
  return;
}



/* Entry: 105cec8ac; end: 105cec8bf;  */

void FUN_105cec8ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_user_112681e10);
  return;
}



/* Entry: 105cec8c0; end: 105cece23; -[SCPreviewFeatureUserTaggingImpl _userTaggingInfoFromStickerStates:] */

void FUN_105cec8c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lStack_348;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(param_3);
  lStack_348 = param_3;
  func_0x00010bf52a60();
  if (lStack_348 != 0) {
    lVar9 = *plStack_200;
    do {
      lVar11 = 0;
      do {
        if (*plStack_200 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puStack_238 = &uStack_240;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_105cece24;
        uStack_220 = 0x105cece34;
        uStack_218 = 0;
        uStack_270 = 0;
        uStack_260 = 0x3032000000;
        pcStack_258 = FUN_105cece24;
        uStack_250 = 0x105cece34;
        uStack_248 = 0;
        uStack_290 = 0;
        uStack_280 = 0x2020000000;
        uStack_278 = 0;
        puStack_288 = &uStack_290;
        puStack_268 = &uStack_270;
        func_0x00010c0bed60(*(undefined8 *)(lStack_208 + lVar11 * 8));
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c06d500();
        if ((int)puVar6 == 0) {
          puVar10 = *(undefined **)(param_1 + 8);
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c293de0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar7 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar7;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (puVar6 != (undefined *)0x0) {
            puVar12 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar7);
              }
              uVar8 = *(undefined8 *)((long)puVar12 * 8);
              func_0x00010c2923e0(uVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(uVar8);
              puVar12 = puVar12 + 1;
            } while (puVar6 != puVar12);
            puVar6 = puVar7;
            func_0x00010bf52a60();
          }
          _objc_release(puVar7);
          puVar6 = puVar10;
          func_0x00010c0e00e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar4);
          _objc_release(puVar6);
          func_0x00010befa120(puVar3);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(puVar6);
LAB_105cecc90:
          _objc_release(puVar10);
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c078d80();
          if ((int)puVar6 != 0) {
            func_0x00010befa120(puVar2);
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            goto LAB_105cecc90;
          }
        }
        __Block_object_dispose(&uStack_290,8);
        __Block_object_dispose(&uStack_270,8);
        _objc_release(uStack_248);
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_348);
      lStack_348 = param_3;
      func_0x00010bf52a60();
    } while (lStack_348 != 0);
  }
  _objc_release(param_3);
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110efb6b8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110efb678;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110efb698;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110efb6d8;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b0 = puVar2;
  puStack_1a8 = puVar4;
  puStack_1a0 = puVar3;
  puStack_198 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_270,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_240);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 105cece24; end: 105cece3b;  */

void FUN_105cece24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cece3c; end: 105cecfa3;  */

void FUN_105cece3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105cecfa4; end: 105ced3cb; -[SCPreviewFeatureUserTaggingImpl allNotifiedUsernamesfromCaptionStates:andStickerStates:] */

void FUN_105cecfa4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_105cece24;
        uStack_1d0 = 0x105cece34;
        uStack_1c8 = 0;
        puStack_1e8 = &uStack_1f0;
        func_0x00010c0bed60(*(undefined8 *)(lStack_1b8 + lVar9 * 8));
        if (puStack_1e8[5] != 0) {
          puVar3 = PTR_PTR_1126b15c8;
          _objc_alloc(PTR_PTR_1126b15c8);
          uVar4 = puStack_1e8[5];
          func_0x00010c2923e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = puStack_1e8[5];
          func_0x00010c294420(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = puStack_1e8[5];
          func_0x00010c294420(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05c0e0(puVar3);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          func_0x00010befa120(puVar2);
          _objc_release(puVar3);
        }
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(uStack_1c8);
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = param_4;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_4);
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c268460(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar8 != lVar9);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07fd00();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1d7e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500(puVar2);
    _objc_release(uVar4);
  }
  puVar3 = puVar2;
  func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_1108e50b0);
  puVar7 = puVar3;
  func_0x00010bd86590();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  _objc_retain(uVar5);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105ced3cc; end: 105ced403;  */

void FUN_105ced3cc(long param_1,undefined8 param_2)

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



/* Entry: 105ced404; end: 105ced417;  */

void FUN_105ced404(void)

{
  return;
}



/* Entry: 105ced418; end: 105ced43f;  */

void FUN_105ced418(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105ced440; end: 105ced5f3; -[SCPreviewFeatureUserTaggingImpl captionCarouselUserTagCountFromCaptions:] */

undefined * FUN_105ced440(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c252440(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c268460();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar8 = puVar2;
  func_0x00010bf529e0(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar8;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c290fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_user_112681e10);
  return param_2;
}



/* Entry: 105ced5f4; end: 105ced5fb;  */

void FUN_105ced5f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_user_112681e10);
  return;
}



/* Entry: 105ced5fc; end: 105ced82f; -[SCPreviewFeatureUserTaggingImpl staticCaptionWithUserTagPositionsFromCaptions:] */

void FUN_105ced5fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(ulong *)(lVar11 * 8);
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c081660();
      if (((uVar5 & 1) == 0) && (uVar5 = uVar4, func_0x00010bf8c660(), (uVar5 & 1) == 0)) {
        uVar5 = uVar4;
        func_0x00010c268460();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
        if (uVar6 != 0) {
          uVar5 = uVar4;
          func_0x00010c06e960();
          if ((uVar5 & 1) == 0) {
            func_0x00010bf34840(uVar4);
          }
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf348c0(uVar4);
          func_0x00010c14de00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2);
          _objc_release(puVar7);
        }
      }
      _objc_release(uVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  ppuVar8 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar9 = ppuVar2;
    func_0x00010bf51e00(ppuVar2);
    ppuVar8 = ppuVar9;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105ced830; end: 105ced86b; -[SCPreviewFeatureUserTaggingImpl .cxx_destruct] */

void FUN_105ced830(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ced86c; end: 105ced997; -[SCPreviewFeatureUserTaggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ced86c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127343a4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010c293d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfba560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ced998;
  puStack_50 = &UNK_1108e5110;
  uStack_38 = 1;
  lStack_48 = lVar2;
  lStack_40 = param_1;
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3db8;
  _objc_alloc(PTR_PTR_1126c3db8);
  func_0x00010c05efe0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273439c),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 105ced998; end: 105ceda93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ced998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar5 = PTR_PTR_1126c3db0;
    _objc_alloc(PTR_PTR_1126c3db0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28) + (long)_DAT_1127343a0;
      _objc_loadWeakRetained(lVar4);
    }
    lVar2 = lVar4;
    func_0x00010c08ed80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28) + (long)_DAT_1127343a8;
      _objc_loadWeakRetained(lVar6);
    }
    lVar3 = lVar6;
    func_0x00010bf5aea0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f000(puVar5,param_2,uVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ceda94; end: 105cedae7; -[SCPreviewFeatureUserTaggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ceda94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273439c,0);
  _objc_destroyWeak(param_1 + _DAT_1127343a8);
  _objc_destroyWeak(param_1 + _DAT_1127343a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127343a0);
  return;
}



/* Entry: 105cedae8; end: 105cedb93; -[SCPreviewFeatureUserTaggingServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cedae8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127343ac;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127343b4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c293d00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105cedb94; end: 105cedbd7; -[SCPreviewFeatureUserTaggingServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cedb94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127343b4);
  _objc_destroyWeak(param_1 + _DAT_1127343b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127343ac);
  return;
}



/* Entry: 105cedbd8; end: 105cee0a3; -[SCPreviewFeatureWebAttachmentImpl initWithUserSession:previewScopeServices:legacyPreviewConfiguration:userInteractionStateLogger:commerceAttachmentFeature:attachmentStickerFeature:userPreferences:featureSettingsService:urlPreviewProvider:galleryLogger:safeBrowsingAPI:userLocationServices:systemLocationServices:previewABServices:creativeToolsABServices:stickerInjector:currentPageTracker:circumstanceEngine:legacyStoryMediaCache:] */

undefined8 *
FUN_105cedbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ecd40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_5);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_retain();
    func_0x00010c16b020(param_7);
    _objc_release(param_7);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 10,param_6);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_16;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c112020();
    puVar1[0x16] = uVar4;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_5);
    func_0x00010beafce0(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_21);
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



/* Entry: 105cee0a4; end: 105cee0cf;  */

void FUN_105cee0a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cee0d0; end: 105cee13b; -[SCPreviewFeatureWebAttachmentImpl updateWithNewAttachmentUrlString:] */

void FUN_105cee0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c2837c0();
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cee13c; end: 105cee217; -[SCPreviewFeatureWebAttachmentImpl activate] */

void FUN_105cee13c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xe8);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108eb6ce4(uVar5,puVar3,*(undefined8 *)(param_1 + 0xb8));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uVar5;
      _objc_release(uVar4);
      _objc_release(puVar3);
      func_0x00010c28ca40(param_1);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b000(*(undefined8 *)(param_1 + 0x70));
      func_0x00010c1e8400(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 105cee218; end: 105cee253; -[SCPreviewFeatureWebAttachmentImpl snapEditor:didInitiateExportWithType:] */

void FUN_105cee218(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cee254; end: 105cee33b; -[SCPreviewFeatureWebAttachmentImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105cee254(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_4 == 5) {
    if (param_5 == 0) {
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1e1a20();
      _objc_release(lVar3);
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010bfe5d60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1e1a20();
      _objc_release(lVar3);
      uVar1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c2344a0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010be6cee0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cee33c; end: 105cee35f; -[SCPreviewFeatureWebAttachmentImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105cee33c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2a8980(param_4,param_2,*(undefined1 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105cee360; end: 105cee407; -[SCPreviewFeatureWebAttachmentImpl createWebAttachmentToolBarButtonItemWithTarget:selector:currentAttachmentUrl:] */

void FUN_105cee360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3dc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6a00();
  _objc_release(param_3);
  if (param_5 != 0) {
    func_0x00010c1fadc0(puVar1,param_2,1);
    func_0x00010c1fbac0(puVar1,param_2,2);
  }
  func_0x00010c1fb780(0xc008000000000000,puVar1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cee408; end: 105cee40b; -[SCPreviewFeatureWebAttachmentImpl updateAttachmentToolBarAttachmentStatus] */

void FUN_105cee408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadToolbarItemViewModel_112627e40);
  return;
}



/* Entry: 105cee40c; end: 105cee493; -[SCPreviewFeatureWebAttachmentImpl shouldShowToolbarAttachment] */

uint FUN_105cee40c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13c9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe1900();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c06c860(uVar5);
    uVar6 = (uint)uVar5 ^ 1;
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 105cee494; end: 105cee55f; -[SCPreviewFeatureWebAttachmentImpl updateForAttachmentItem:] */

void FUN_105cee494(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    func_0x00010c1e1a20();
    _objc_release(lVar1);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x00010c1e1a20();
  _objc_release(lVar1);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c2344a0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openAttachmentsView_112578d58);
  return;
}



/* Entry: 105cee560; end: 105cee87b; -[SCPreviewFeatureWebAttachmentImpl didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105cee560(long param_1,undefined8 param_2,long param_3,undefined ***param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)lVar1 != 0) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      }
    }
    else {
      func_0x00010beeaf80(param_1);
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e280d8;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      param_4 = &ppuStack_88;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfd100(param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      func_0x00010c2837a0();
      _objc_release(lVar1);
      func_0x00010be50620(param_1);
    }
  }
  else {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar1 = param_1;
    func_0x00010bf0d6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar6 == (undefined *)0x0) {
      _objc_release(lVar1);
    }
    else {
      lVar3 = param_1;
      func_0x00010bf0d6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      FUN_105cffa7c(puVar7,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(lVar3);
      _objc_release(puVar6);
      _objc_release(lVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010beeaf80(param_1);
      }
    }
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e280d8;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = pppuVar8;
    func_0x00010bdfc3a0(param_1);
    _objc_release(pppuVar8);
    _objc_release(puVar6);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2837a0();
    _objc_release(lVar1);
    func_0x00010be50620(param_1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (param_4 == (undefined ***)0x1) {
    puVar6 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar6);
  }
  lVar1 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  func_0x00010be50620(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bde16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__closeToolbarSelectedItem_112555f58);
  return;
}



/* Entry: 105cee87c; end: 105cee903; -[SCPreviewFeatureWebAttachmentImpl searchResultsViewController:didCancelWithDismissActionType:] */

void FUN_105cee87c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_4 == 1) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
  }
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf84b00();
  _objc_release(lVar2);
  func_0x00010be50620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeToolbarSelectedItem_112555f58);
  return;
}



/* Entry: 105cee904; end: 105cee907; -[SCPreviewFeatureWebAttachmentImpl searchResultsViewController:didOverscrollWithOffset:] */

void FUN_105cee904(void)

{
  return;
}



/* Entry: 105cee908; end: 105cee95b; -[SCPreviewFeatureWebAttachmentImpl searchAttachmentsResultViewControllerViewDidAppear:] */

void FUN_105cee908(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    lVar1 = *(long *)(param_1 + 0xe8);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c292100();
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0xa1) = 0;
    }
  }
  return;
}



/* Entry: 105cee95c; end: 105cee9af; -[SCPreviewFeatureWebAttachmentImpl searchWebViewControllerViewDidAppear:] */

void FUN_105cee95c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    lVar1 = *(long *)(param_1 + 0xe8);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c292100();
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0xa1) = 0;
    }
  }
  return;
}



/* Entry: 105cee9b0; end: 105cee9f7; -[SCPreviewFeatureWebAttachmentImpl attachmentToolbarButtonItemDidPressStoreButton:] */

void FUN_105cee9b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10b2a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa3140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cee9f8; end: 105cee9fb; -[SCPreviewFeatureWebAttachmentImpl attachmentToolbarButtonItemDidPressWebButton:] */

void FUN_105cee9f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openAttachmentsView_112578d58);
  return;
}



/* Entry: 105cee9fc; end: 105ceea13; -[SCPreviewFeatureWebAttachmentImpl didTapPreviewContainerView:] */

uint FUN_105cee9fc(uint param_1)

{
  func_0x00010be0bf80();
  return param_1 ^ 1;
}



/* Entry: 105ceea14; end: 105ceeaab; -[SCPreviewFeatureWebAttachmentImpl _exitAttachmentSubMenu] */

undefined8 FUN_105ceea14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c07d660();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c2344a0();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010bde16e0(param_1);
      uVar4 = 1;
      goto LAB_105ceea90;
    }
  }
  uVar4 = 0;
LAB_105ceea90:
  _objc_release(lVar2);
  return uVar4;
}



/* Entry: 105ceeaac; end: 105ceeb6f; -[SCPreviewFeatureWebAttachmentImpl _setupSnapAttachments] */

void FUN_105ceeaac(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108eb6ce4(uVar6,puVar2,*(undefined8 *)(param_1 + 0xb8));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
    _objc_release(uVar5);
    _objc_release(puVar2);
    lVar3 = *(long *)(param_1 + 0xe8);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      return;
    }
  }
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c23f440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar4;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105ceeb70; end: 105ceed5b; -[SCPreviewFeatureWebAttachmentImpl _willDetachUrl] */

void FUN_105ceeb70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c3dc8;
    if (lVar5 == 0) {
      return;
    }
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29420(puVar1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126c3dd0;
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ad60(puVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c2ac3e0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b31a0(puVar1,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18a960();
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ceed5c; end: 105ceeea7; -[SCPreviewFeatureWebAttachmentImpl _didAttachUrl:extraData:] */

void FUN_105ceed5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c28ca40(param_1,param_2,param_3);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b000(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8400(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c2837c0(param_1);
  func_0x00010bde16e0(param_1);
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e280d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c282800();
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  _objc_release(uVar4);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa3160();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ceeea8; end: 105ceef9f; -[SCPreviewFeatureWebAttachmentImpl _didDeattachUrlWithData:] */

void FUN_105ceeea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c28ca40(param_1,param_2,0);
  func_0x00010c16b000(*(undefined8 *)(param_1 + 0x70),param_2,0);
  func_0x00010c2837c0(param_1);
  func_0x00010bde16e0(param_1);
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e280d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c282800();
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  _objc_release(uVar3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3a9c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa3160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ceefa0; end: 105ceeff7; -[SCPreviewFeatureWebAttachmentImpl _closeToolbarSelectedItem] */

void FUN_105ceefa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(param_1,param_2,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ceeff8; end: 105cef603; -[SCPreviewFeatureWebAttachmentImpl _openAttachmentsView] */

void FUN_105ceeff8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010c293a40();
  _objc_release();
  *(undefined1 *)(param_1 + 0xa1) = 1;
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar8;
    _objc_release(uVar14);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar1 = PTR_PTR_1126c3dd8;
  _objc_alloc();
  lVar8 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar8);
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c09f2a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dbc0();
  _objc_release(uVar14);
  _objc_release(lVar8);
  if (*(long *)(param_1 + 0x70) == 0) {
    puVar2 = PTR_PTR_1126c3de0;
    _objc_alloc();
    func_0x00010c05cc20();
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar2;
    _objc_release(uVar14);
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204760(*(undefined8 *)(param_1 + 0x70));
    _objc_release(lVar3);
    _objc_release(lVar8);
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x70));
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b000(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c3de8;
  _objc_alloc();
  lVar8 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c08bda0(puVar1);
  func_0x00010c05dba0();
  _objc_release(lVar8);
  puVar4 = PTR_PTR_1126c3df0;
  _objc_alloc();
  lVar8 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c05d680();
  _objc_release(lVar8);
  puVar5 = PTR_PTR_1126c3df8;
  _objc_alloc();
  lVar8 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c05d660();
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126c3e00;
  _objc_alloc(PTR_PTR_1126c3e00);
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042b00(puVar6);
  _objc_release(uVar14);
  _objc_release(uVar15);
  func_0x00010bef9980(puVar6);
  puVar7 = PTR_PTR_1126c3e08;
  _objc_alloc(PTR_PTR_1126c3e08);
  func_0x00010c040360();
  lVar8 = *(long *)(param_1 + 0xe8);
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    puVar9 = PTR_PTR_1126c3e10;
    _objc_alloc();
    func_0x00010c061a60();
    puVar10 = PTR_PTR_1126c3e18;
    _objc_alloc(PTR_PTR_1126c3e18);
    lVar8 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar8);
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf0cb40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c3e20;
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf0cb40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fb40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0(puVar1);
    func_0x00010c05cf80(puVar10);
    _objc_release(puVar11);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar8);
    func_0x00010c161980(puVar10);
    func_0x00010c219b20(puVar10);
    func_0x00010c201040(puVar10);
    func_0x00010c18b5e0(puVar10);
    puVar11 = PTR_PTR_1126c3e10;
    _objc_alloc();
    func_0x00010c061a60();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb880(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  puVar11 = puVar7;
  func_0x00010c153c40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb800(puVar4);
  _objc_release(puVar11);
  puVar11 = puVar7;
  func_0x00010c153c40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8600(puVar2);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c3e28;
  _objc_alloc(PTR_PTR_1126c3e28);
  func_0x00010c045fc0();
  func_0x00010c1c8b80(puVar7);
  func_0x00010c219b20(puVar7);
  func_0x00010c219a00(puVar6);
  func_0x00010c18b5e0(puVar6);
  func_0x00010c200680(puVar6);
  lVar8 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  lVar3 = lVar8;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + 0x50;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c292040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cef604; end: 105cef633; -[SCPreviewFeatureWebAttachmentImpl _logAttachmentToolUsageEnded] */

void FUN_105cef604(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c292040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cef634; end: 105cef6b3; -[SCPreviewFeatureWebAttachmentImpl configureWithView:] */

void FUN_105cef634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x40,param_3);
  _objc_release(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x48,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cef6b4; end: 105cef767; -[SCPreviewFeatureWebAttachmentImpl previewFeatureCommerceAttachment:didAttachUrl:] */

void FUN_105cef6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105cef768;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105cef768; end: 105cef777;  */

void FUN_105cef768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didAttachUrl_extraData__11255ca88,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105cef778; end: 105cef7eb; -[SCPreviewFeatureWebAttachmentImpl previewFeatureCommerceAttachmentDidDetach:] */

void FUN_105cef778(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 105cef7ec; end: 105cef7f7;  */

void FUN_105cef7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDeattachUrlWithData__11255cde0,0);
  return;
}



/* Entry: 105cef7f8; end: 105cef897; -[SCPreviewFeatureWebAttachmentImpl setToolbarItemViewModel:] */

void FUN_105cef7f8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cef898; end: 105cef927; -[SCPreviewFeatureWebAttachmentImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105cef900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cef904) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105cef898(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x98) == 0) || (uVar1 = param_1, func_0x00010c2346c0(), (uVar1 & 1) == 0)
     ) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0xe8));
    puVar2 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c039d00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105cef928; end: 105cef94f; -[SCPreviewFeatureWebAttachmentImpl toolbarItemViewModelObservable] */

void FUN_105cef928(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cef950; end: 105cef967; -[SCPreviewFeatureWebAttachmentImpl delegate] */

void FUN_105cef950(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cef968; end: 105cef973; -[SCPreviewFeatureWebAttachmentImpl setDelegate:] */

void FUN_105cef968(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 105cef974; end: 105cef97b; -[SCPreviewFeatureWebAttachmentImpl attachmentUrlString] */

undefined8 FUN_105cef974(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 105cef97c; end: 105cef983; -[SCPreviewFeatureWebAttachmentImpl toolbarItemViewModel] */

undefined8 FUN_105cef97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 105cef984; end: 105cefabb; -[SCPreviewFeatureWebAttachmentImpl .cxx_destruct] */

void FUN_105cef984(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105cefabc; end: 105cefc5b; -[SCPreviewFeatureWebAttachmentServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cefabc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112734434;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = 1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3e38;
  _objc_alloc(PTR_PTR_1126c3e38);
  func_0x00010c062b80();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112734480);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105cefc5c; end: 105cf0067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cefc5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined *puVar36;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x30) != '\x01')) {
    puVar36 = (undefined *)0x0;
  }
  else {
    puVar36 = PTR_PTR_1126c3e30;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_11273443c;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112734440;
    _objc_loadWeakRetained();
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = lVar1 + _DAT_112734444;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_11273444c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf42260();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112734450;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf0d2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + _DAT_112734448;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_112734478;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112734454;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c28f860();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + _DAT_112734458;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + _DAT_11273445c;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c1490a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar1 + _DAT_112734460;
    _objc_loadWeakRetained();
    lVar24 = lVar1 + _DAT_112734464;
    _objc_loadWeakRetained();
    lVar25 = lVar1 + _DAT_112734468;
    _objc_loadWeakRetained();
    lVar26 = lVar1 + _DAT_11273446c;
    _objc_loadWeakRetained();
    lVar27 = lVar1 + _DAT_112734470;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar1 + _DAT_112734474;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar1 + _DAT_112734438;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar1 + _DAT_11273447c;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c08f760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e260(puVar36,param_2,lVar3,lVar4,uVar35,lVar6,lVar9,lVar12,lVar14,lVar16,lVar18,
                        lVar20,lVar22,lVar23,lVar24,lVar25,lVar26,lVar28,lVar30,lVar32,lVar34);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
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
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar36);
  return;
}



/* Entry: 105cf0068; end: 105cf017b; -[SCPreviewFeatureWebAttachmentServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf0068(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734480,0);
  _objc_destroyWeak(param_1 + _DAT_11273447c);
  _objc_destroyWeak(param_1 + _DAT_112734478);
  _objc_destroyWeak(param_1 + _DAT_112734474);
  _objc_destroyWeak(param_1 + _DAT_112734470);
  _objc_destroyWeak(param_1 + _DAT_11273446c);
  _objc_destroyWeak(param_1 + _DAT_112734468);
  _objc_destroyWeak(param_1 + _DAT_112734464);
  _objc_destroyWeak(param_1 + _DAT_112734460);
  _objc_destroyWeak(param_1 + _DAT_11273445c);
  _objc_destroyWeak(param_1 + _DAT_112734458);
  _objc_destroyWeak(param_1 + _DAT_112734454);
  _objc_destroyWeak(param_1 + _DAT_112734450);
  _objc_destroyWeak(param_1 + _DAT_11273444c);
  _objc_destroyWeak(param_1 + _DAT_112734448);
  _objc_destroyWeak(param_1 + _DAT_112734444);
  _objc_destroyWeak(param_1 + _DAT_112734440);
  _objc_destroyWeak(param_1 + _DAT_11273443c);
  _objc_destroyWeak(param_1 + _DAT_112734438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734434);
  return;
}



/* Entry: 105cf017c; end: 105cf0227; -[SCPreviewFeatureWebAttachmentServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf017c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734484;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273448c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2a2e80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105cf0228; end: 105cf026b; -[SCPreviewFeatureWebAttachmentServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf0228(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273448c);
  _objc_destroyWeak(param_1 + _DAT_112734488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734484);
  return;
}



/* Entry: 105cf026c; end: 105cf0317; -[SCPreviewFeatureWebAttachmentToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf026c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734490;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734498;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2a2e80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105cf0318; end: 105cf035b; -[SCPreviewFeatureWebAttachmentToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf0318(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734498);
  _objc_destroyWeak(param_1 + _DAT_112734494);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734490);
  return;
}



/* Entry: 105cf035c; end: 105cf043b; -[SCSearchAttachmentsResultViewController initWithSearchSession:queryCoordinator:sectionCreator:galleryLogger:userLocationServices:toolbarItemIconStyle:currentPageTracker:locationProvider:legacyStoryMediaCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105cf035c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ecd48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithSearchSession_queryCoord_11252d158,param_3,param_4,
                      param_5,0,param_6,param_9,param_10,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273449c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127344a0) = param_8;
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105cf043c; end: 105cf07b3; -[SCSearchAttachmentsResultViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf043c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126ecd48;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c3e40;
  func_0x00010bf15ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c273600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c3e48;
  _objc_opt_new();
  func_0x00010c174920();
  puVar3 = PTR_PTR_1126c3e50;
  _objc_alloc();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e28698;
  puVar4 = puVar1;
  func_0x00010c273600();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e286b8;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar4;
  puStack_60 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0624e0();
  lVar9 = (long)_DAT_1127344a4;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar3;
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c209fe0(*(undefined8 *)(param_1 + lVar9));
  puVar3 = PTR_PTR_1126c3e58;
  _objc_alloc();
  func_0x00010c0080c0();
  lVar9 = param_1;
  func_0x00010c153720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  func_0x000108edf068();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8640(lVar6);
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee0c0(lVar6);
  _objc_release(puVar4);
  func_0x00010c1cb740(0x404d800000000000,lVar6);
  func_0x00010c1cb720(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),lVar6);
  func_0x00010c1f82a0(lVar6);
  func_0x00010c16e160(lVar6);
  _objc_initWeak(auStack_98,param_1);
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c16e120(lVar6);
  func_0x00010c153720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be03be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cf07b4; end: 105cf07df;  */

void FUN_105cf07b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf07e0; end: 105cf084b; -[SCSearchAttachmentsResultViewController viewWillAppear:] */

void FUN_105cf07e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecd48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bde57e0(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c153360();
  _objc_release(param_1);
  return;
}



/* Entry: 105cf084c; end: 105cf0853; -[SCSearchAttachmentsResultViewController prefersStatusBarHidden] */

undefined8 FUN_105cf084c(void)

{
  return 1;
}



/* Entry: 105cf0854; end: 105cf085b; -[SCSearchAttachmentsResultViewController shouldDisplayStatusBar] */

undefined8 FUN_105cf0854(void)

{
  return 0;
}



/* Entry: 105cf085c; end: 105cf0943; -[SCSearchAttachmentsResultViewController searchControllerDidChangeToText:byChangingCharactersInRange:replacementString:] */

void FUN_105cf085c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_searchControllerDidChangeToText__1126327f8;
  puStack_48 = PTR_PTR_1126ecd48;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3,param_4,param_5,param_6);
  uVar2 = param_1;
  func_0x00010c153720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c071280(uVar4);
  func_0x00010bedeaa0(param_1);
  _objc_release(param_3);
  _objc_release(uVar4);
  return;
}



/* Entry: 105cf0944; end: 105cf09d7; -[SCSearchAttachmentsResultViewController searchControllerDidBeginEditing] */

void FUN_105cf0944(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedeaa0(param_1,param_2,uVar1,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cf09d8; end: 105cf09f7; -[SCSearchAttachmentsResultViewController searchControllerDidEndEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf09d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127344a4),PTR_s_setState_animated__112660220,
             &PTR____CFConstantStringClassReference_110e28698,1);
  return;
}



/* Entry: 105cf09f8; end: 105cf0aef; -[SCSearchAttachmentsResultViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105cf09f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e28438);
  if ((int)uVar1 == 0) {
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0();
  }
  else {
    func_0x00010c153720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193b00();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf0af0; end: 105cf0af7; -[SCSearchAttachmentsResultViewController _dismissWithCloseButton] */

void FUN_105cf0af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be034f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSearchViewControllerWith_11255e6d8,0)
  ;
  return;
}



/* Entry: 105cf0af8; end: 105cf0b7b; -[SCSearchAttachmentsResultViewController _dismissSearchViewControllerWithActionType:] */

void FUN_105cf0af8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3 != 2,0);
  return;
}



/* Entry: 105cf0b7c; end: 105cf0cc3; -[SCSearchAttachmentsResultViewController _clearSearchViewContent] */

void FUN_105cf0b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_105cfbb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  puVar4 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  func_0x00010befbd60(puVar4);
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar6 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  puVar4 = puVar5;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  func_0x00010befbd60(puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105cf0cc4; end: 105cf0e57; -[SCSearchAttachmentsResultViewController _configureRightBarButtonItemActions] */

void FUN_105cf0cc4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105cfbb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar3;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cf0e58; end: 105cf0eb7; -[SCSearchAttachmentsResultViewController _updateRightBarButtonStateWithSearchText:isEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf0e58(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127344a4);
  if (param_4 == 0) {
    ppuVar1 = &PTR_PTR_1108e5498;
  }
  else {
    func_0x00010c08fa60();
    ppuVar1 = &PTR_PTR_1108e5498;
    if (param_3 != 0) {
      ppuVar1 = &PTR_PTR_1108e54a0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setState_animated__112660220,*ppuVar1,1);
  return;
}



/* Entry: 105cf0eb8; end: 105cf0ef7; +[SCSearchAttachmentsResultViewController announcerIdentifier] */

void FUN_105cf0eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e280f8);
  return;
}



/* Entry: 105cf0ef8; end: 105cf100f; -[SCSearchAttachmentsResultViewController queryWithSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf0ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1158;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273449c);
  func_0x00010c09f2a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed7618,param_3,puVar3
                      ,uVar6,0);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cf1010; end: 105cf1017; -[SCSearchAttachmentsResultViewController shouldShowGhostSihlouette] */

undefined8 FUN_105cf1010(void)

{
  return 0;
}



/* Entry: 105cf1018; end: 105cf1057; -[SCSearchAttachmentsResultViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf1018(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273449c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127344a4,0);
  return;
}



/* Entry: 105cf1058; end: 105cf109f; -[SCSearchAttachmentsTransitionController initWithShouldAnimateToolbar:] */

void FUN_105cf1058(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecd50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 9) = param_3;
  }
  return;
}



/* Entry: 105cf10a0; end: 105cf10a7; -[SCSearchAttachmentsTransitionController transitionDuration:] */

undefined8 FUN_105cf10a0(void)

{
  return 0x3fd0000000000000;
}



/* Entry: 105cf10a8; end: 105cf227f; -[SCSearchAttachmentsTransitionController animateTransition:] */

void FUN_105cf10a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined *puStack_348;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  
  _objc_retain(param_7);
  puVar1 = param_5;
  func_0x00010be9ca00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  func_0x00010be7ffa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != (undefined *)0x0) && (puVar2 != (undefined *)0x0)) {
    puVar3 = param_7;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (param_5[9] == '\x01') {
      puStack_348 = puVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_348 = (undefined *)0x0;
    }
    puVar8 = puVar6;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3e40;
    _objc_opt_class(PTR_PTR_1126c3e40);
    puVar9 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar4);
    puVar4 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar8);
    puVar9 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c3e68;
    _objc_opt_class(PTR_PTR_1126c3e68);
    puVar16 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    puVar8 = puVar9;
    if (((ulong)puVar16 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar9;
    func_0x00010c1408e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf62b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar16);
    if (param_5[8] == '\x01') {
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      puVar10 = param_7;
      func_0x00010c29ce60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(puVar3);
      func_0x00010bf20c00(puVar3);
      func_0x00010c19f0e0(puVar10);
      func_0x00010c1cbe20(puVar10);
      func_0x00010c08cdc0(puVar10);
      puVar16 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105cf2280;
      puStack_c0 = &UNK_110842e18;
      _objc_retain(puVar1);
      puStack_b8 = puVar1;
      func_0x00010c0f9680(puVar16);
      puVar16 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
      func_0x00010c153bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _CGAffineTransformMakeTranslation(auStack_108,0,0x402c000000000000);
      func_0x00010c219960(puVar16);
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar16;
      func_0x00010c14d4c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = puVar1;
      func_0x00010bf4dd20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c1677c0(0,puVar9);
      uVar17 = 0;
      func_0x00010c1677c0(puVar11);
      func_0x00010bfb68e0(puStack_348);
      func_0x00010befbb60(puVar3);
      puVar12 = puVar4;
      func_0x00010c273600(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bfb68e0(puVar12);
      uVar25 = uStack_f8;
      func_0x00010bf51460(puStack_348);
      uVar20 = uVar17;
      _objc_release(puVar12);
      func_0x00010bfb68e0(puVar11);
      _CGRectGetMinX();
      uVar18 = uVar20;
      func_0x00010c08ce20(puVar9);
      uVar19 = uVar17;
      _CGRectGetWidth(uVar17,uVar25,param_3,param_4);
      _CGRectGetHeight(uVar17,uVar25,param_3,param_4);
      func_0x00010c19f0e0(uVar20,uVar18,uVar19,uVar17,puStack_348);
      func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010bf17b00(puVar1);
      func_0x00010c182bc0(puVar8);
      func_0x00010c08cdc0(puVar8);
      puVar4 = param_7;
      func_0x00010c27ac00();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010c1677c0(0x3ff0000000000000,puVar16);
        func_0x00010c1677c0(0,puStack_348);
        uVar20 = 0x3ff0000000000000;
        func_0x00010c1677c0(0x3ff0000000000000,puVar11);
      }
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010c27a940(param_5);
      _objc_retain(puVar1);
      _objc_retain(puStack_348);
      _objc_retain(puVar1);
      _objc_retain(param_7);
      _objc_retain(puVar5);
      _objc_retain(puVar8);
      _objc_retain(puVar9);
      _objc_retain(puVar16);
      func_0x00010bf03460(uVar20,0,0x3feccccccccccccd,0,puVar4);
      _objc_release(param_7);
      _objc_release(puVar1);
      _objc_release(puStack_348);
      _objc_release(puVar5);
      _objc_release(puVar16);
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar16);
      puVar4 = puStack_b8;
      puVar16 = puVar5;
      puVar5 = puVar9;
      puVar9 = puVar10;
      puVar10 = puVar8;
    }
    else {
      func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
      puVar16 = puVar9;
      func_0x00010c1408e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf62b60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010bf51460(puVar9);
      dVar24 = param_1;
      uVar20 = param_2;
      uVar25 = param_3;
      uVar27 = param_4;
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar16);
      puVar16 = puVar4;
      func_0x00010c273600(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bfb68e0(puVar16);
      func_0x00010bf51460(puStack_348);
      dVar32 = dVar24;
      uVar18 = uVar20;
      uVar17 = uVar25;
      uVar28 = uVar27;
      _objc_release(puVar16);
      func_0x00010bfb68e0(puStack_348);
      func_0x00010b690928();
      puVar4 = puVar1;
      dVar30 = dVar32;
      uVar19 = uVar18;
      uVar26 = uVar17;
      uVar29 = uVar28;
      func_0x00010c0d6280();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar4;
      func_0x00010c154720();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar16;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_s_transform_11267c340;
      _NSStringFromSelector(PTR_s_transform_11267c340);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf03c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar16);
      _objc_release(puVar4);
      if (puVar13 != (undefined *)0x0) {
        puVar4 = puVar1;
        func_0x00010c0d6280(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar4;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010c10f4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar16);
        _objc_release(puVar4);
        func_0x00010bfb68e0(puVar12);
        puVar4 = puVar1;
        func_0x00010c0d6280(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar4;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar30,uVar19,uVar26,uVar29);
        _objc_release(puVar16);
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c0d6280(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar4;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12aaa0();
        _objc_release(puVar10);
        _objc_release(puVar16);
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c0d6280(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar4;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c153520();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12aaa0();
        _objc_release(puVar13);
        _objc_release(puVar10);
        _objc_release(puVar16);
        _objc_release(puVar4);
        _objc_release(puVar12);
      }
      puVar4 = param_5;
      func_0x00010c068ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = param_5;
        func_0x00010c068ca0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar4 + 0x10))();
        _objc_release(puVar4);
      }
      func_0x00010c1677c0(0,puVar11);
      func_0x00010c1677c0(0x3ff0000000000000,puVar5);
      func_0x00010befbb60(puVar3);
      dVar30 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      dVar21 = dVar24;
      _CGRectGetWidth(dVar24,uVar20,uVar25,uVar27);
      _CGRectGetHeight(dVar24,uVar20,uVar25,uVar27);
      func_0x00010c19f0e0(puStack_348);
      puVar16 = puVar1;
      func_0x00010bf4dd20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c3e18;
      _objc_opt_class(PTR_PTR_1126c3e18);
      puVar10 = puVar16;
      _objc_opt_isKindOfClass(puVar16,puVar4);
      puVar4 = puVar16;
      if (((ulong)puVar10 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar16);
      puVar16 = puVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126c3e78;
      _objc_opt_class(PTR_PTR_1126c3e78);
      puVar10 = puVar16;
      _objc_opt_isKindOfClass(puVar16,puVar4);
      puVar4 = puVar16;
      if (((ulong)puVar10 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar16);
      puVar10 = puVar4;
      func_0x00010bf0c5c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      if (puVar10 == (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        func_0x00010bf20c00(puVar10);
        _CGRectGetWidth();
        dVar21 = dVar30;
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        dVar21 = dVar30 - dVar21;
        dVar30 = dVar21 * 0.5;
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        dVar24 = dVar21;
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        param_1 = 0.0;
        func_0x00010bf199e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
        func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c16e440(puVar13);
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        func_0x00010bf20c00(puVar10);
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        func_0x00010bf20c00(puVar10);
        _CGRectGetHeight();
        func_0x00010bf199e0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc1040();
        func_0x00010c1d9820(puVar13);
        _objc_release(puVar12);
        puVar12 = puVar10;
        func_0x00010c08c0e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2c00();
        _objc_release(puVar12);
        _objc_release(puVar13);
      }
      puVar12 = puVar2;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c15b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010bfb68e0(puVar13);
      func_0x00010bf513e0(puVar3);
      dVar31 = dVar30;
      func_0x00010bfb68e0(puStack_348);
      _CGRectGetMinX();
      dVar22 = dVar32;
      _CGRectGetMinX(dVar32,uVar18,uVar17,uVar28);
      dVar31 = dVar31 - dVar22;
      func_0x00010bfb68e0(puStack_348);
      _CGRectGetMinY();
      _CGRectGetMinY(dVar32,uVar18,uVar17,uVar28);
      func_0x00010befbb60(puVar3);
      dVar23 = dVar30;
      _CGRectGetMinX(dVar30,param_1,dVar21,dVar24);
      dVar31 = dVar31 + dVar23;
      _CGRectGetMinY(dVar30,param_1,dVar21,dVar24);
      dVar32 = (dVar22 - dVar32) + dVar30;
      func_0x00010bfb68e0(puVar13);
      _CGRectGetWidth();
      dVar24 = dVar30;
      func_0x00010bfb68e0(puVar13);
      _CGRectGetHeight();
      func_0x00010c19f0e0(dVar31,dVar32,dVar30,dVar24,puVar13);
      func_0x00010befbb60(puVar3);
      func_0x00010bf345e0(puVar13);
      dVar24 = dVar31;
      if (puVar13 != (undefined *)0x0) {
        puVar12 = puVar10;
        dVar30 = dVar32;
        func_0x00010beeecc0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c0720c0();
        _objc_release(puVar14);
        _objc_release(puVar12);
        if ((int)puVar15 != 0) {
          func_0x00010bf345e0(puVar10);
          func_0x00010bf345e0(puVar10);
          func_0x00010c16af40(dVar31 - dVar24,dVar32 - dVar30,puVar4);
          func_0x00010bf345e0(puVar10);
          func_0x00010c17a6a0(puVar13);
          dVar24 = 0.0;
          func_0x00010c1677c0(0,puVar13);
        }
      }
      puVar14 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
      func_0x00010c153bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010c27a940(param_5);
      _objc_retain(puVar1);
      _objc_retain(puStack_348);
      _objc_retain(puVar14);
      _objc_retain(puVar13);
      _objc_retain(puVar2);
      _objc_retain(param_7);
      _objc_retain(puVar1);
      _objc_retain(puStack_348);
      _objc_retain(puVar7);
      _objc_retain(puVar13);
      _objc_retain(puVar5);
      _objc_retain(puVar14);
      _objc_retain(puVar4);
      _objc_retain(puVar16);
      _objc_retain(puVar10);
      _objc_retain(puVar8);
      _objc_retain(puVar9);
      func_0x00010bf03460(dVar24,0,0x3feccccccccccccd,0,puVar12);
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(puStack_348);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(param_7);
      _objc_release(puVar14);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar16);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(puStack_348);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar13);
      _objc_release(puVar5);
      _objc_release(puVar14);
      puVar5 = puVar8;
    }
    _objc_release(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puStack_348);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 105cf2280; end: 105cf22cf;  */

void FUN_105cf2280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193b00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf22d0; end: 105cf23db;  */

void FUN_105cf22d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4dd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1e7e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_60);
  func_0x00010c182bc0(*(undefined8 *)(param_1 + 0x30),param_2,0);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105cf23dc; end: 105cf243b;  */

void FUN_105cf23dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 105cf243c; end: 105cf26bf;  */

void FUN_105cf243c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1e7e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x38));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x40));
  _CGAffineTransformMakeTranslation(&uStack_90,0,0x402c000000000000);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  dStack_b0 = dStack_80;
  uStack_98 = uStack_68;
  dStack_a0 = dStack_70;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x40),param_2,&uStack_c0);
  dVar4 = dStack_70;
  dVar9 = dStack_80;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010beeecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(uVar3);
    dVar4 = dStack_70;
    dVar9 = dStack_80;
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0bc120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      _objc_retainAutorelease(uVar2);
      func_0x00010bdc1040();
      func_0x00010c1d9820(uVar1,param_2,uVar2);
      func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                          *(undefined8 *)(param_1 + 0x50));
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x50));
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x48));
      _objc_release(uVar1);
      goto LAB_105cf267c;
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bfb68e0();
    dVar5 = dVar4;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x50));
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    dVar6 = dVar5;
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    dVar7 = dVar6;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x50));
    _CGRectGetWidth();
    dVar8 = dVar7;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x50));
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar5,dVar6,dVar7,dVar8,*(undefined8 *)(param_1 + 0x50));
    _objc_release(uVar1);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x50));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x50));
    func_0x00010c16af40(dVar5 - dVar4,dVar6 - dVar9,*(undefined8 *)(param_1 + 0x68));
  }
LAB_105cf267c:
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0x48));
  func_0x00010c182bc0(*(undefined8 *)(param_1 + 0x30),param_2,2);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105cf26c0; end: 105cf28ab;  */

void FUN_105cf26c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105cf27c0;
  puStack_58 = &UNK_11084c4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uStack_40 = uVar2;
  uStack_38 = uVar4;
  func_0x00010c0f9680(puVar1,param_2,&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar3;
  func_0x00010c27ac00(uVar3);
  func_0x00010bf43bc0(uVar3,param_2,(uint)uVar2 ^ 1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x48));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(uStack_38);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_50);
  return;
}


