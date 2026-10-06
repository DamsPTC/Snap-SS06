/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058a3e44; end: 1058a4083; -[SCMemoriesMediaRetriever _completeWithUrl:snap:observer:] */

void FUN_1058a3e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1058a3f5c;
  puStack_58 = &UNK_1108bb348;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c135a80(uVar2,param_2,param_4,&PTR____CFConstantStringClassReference_110e09938,uVar1,
                      &puStack_70);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a4084; end: 1058a40e3; -[SCMemoriesMediaRetriever .cxx_destruct] */

void FUN_1058a4084(long param_1)

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



/* Entry: 1058a40e4; end: 1058a41ab;  */

void FUN_1058a40e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  lStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_2,0,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain();
  _objc_opt_class(puVar3);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar4 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0 && lVar1 == 0) {
    puVar4 = PTR_PTR_1126bf9a8;
    _objc_alloc(PTR_PTR_1126bf9a8);
    func_0x00010c0206e0();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058a41ac; end: 1058a428f;  */

void FUN_1058a41ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a4290; end: 1058a4297; -[SCGalleryHighlightContentDataSource addListener:] */

void FUN_1058a4290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1058a4298; end: 1058a429f; -[SCGalleryHighlightContentDataSource removeListener:] */

void FUN_1058a4298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1058a42a0; end: 1058a42a7; -[SCGalleryHighlightContentDataSource currentFeaturedEntriesDataModels] */

void FUN_1058a42a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_value_112683588);
  return;
}



/* Entry: 1058a42a8; end: 1058a4423; -[SCGalleryHighlightContentDataSource _deleteExpiredFeaturedEntries:] */

void FUN_1058a42a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf1f440(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf1f440(uVar2);
  lVar3 = param_3;
  FUN_1058b5428(param_3,(uint)uVar1 ^ 1,(uint)uVar2 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(undefined8 *)(param_1 + 0x160);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c2c0();
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 1058a4424; end: 1058a44b3; -[SCGalleryHighlightContentDataSource updateFeaturedStoriesWithEntries:] */

void FUN_1058a4424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058a44b4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a44b4; end: 1058a44bf;  */

void FUN_1058a44b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performUpdateFeaturedStoriesWit_11257a4d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058a44c0; end: 1058a44e7; -[SCGalleryHighlightContentDataSource observeRegularFeaturedStories] */

void FUN_1058a44c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058a44e8; end: 1058a470b; -[SCGalleryHighlightContentDataSource _performUpdateFeaturedStoriesWithEntries:] */

void FUN_1058a44e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bdf9fa0(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0c8940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_1058b591c(param_3,uVar6,uVar7,uVar3,uVar8,uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = uVar2;
  func_0x00010c154b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(uVar3);
  uVar4 = param_1;
  func_0x00010bdfa9c0();
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(param_1 + 400) & 1) == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0e0840();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      uVar1 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar6);
      *(undefined1 *)(param_1 + 400) = 1;
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    func_0x00010be17b80(param_1);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a470c; end: 1058a47f7;  */

void FUN_1058a470c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058a47f8;
  puStack_50 = &UNK_110842c58;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1058a47f8; end: 1058a4873;  */

void FUN_1058a47f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee45c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a4874; end: 1058a493b; -[SCGalleryHighlightContentDataSource _updatePriorityValueForFeaturedEntries:externalIdToPriorityMap:] */

void FUN_1058a4874(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1058a493c;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a493c; end: 1058a4deb;  */

void FUN_1058a493c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [264];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_190,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_1c0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1c0 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        lVar15 = *(long *)(lStack_1c8 + lVar13 * 8);
        lVar16 = lVar15;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar16 != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x30);
          lVar16 = lVar15;
          func_0x00010bf9e140(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010c067ec0();
          _objc_release(uVar12);
          _objc_release(lVar16);
          lVar16 = lVar15;
          func_0x00010c113c80();
          puVar5 = PTR_PTR_1126af4c0;
          if ((int)lVar16 != (int)uVar4) {
            func_0x00010bf9e140(lVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
            func_0x00010c269d40(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa6f40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar12);
            _objc_release(uVar4);
            _objc_release(lVar15);
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            plStack_200 = (long *)0x0;
            _objc_retain(puVar5);
            puVar6 = puVar5;
            func_0x00010bf52a60();
            if (puVar6 != (undefined *)0x0) {
              lVar16 = *plStack_200;
              do {
                puVar17 = (undefined *)0x0;
                do {
                  if (*plStack_200 != lVar16) {
                    _objc_enumerationMutation(puVar5);
                  }
                  func_0x00010befa120(puVar1);
                  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar2);
                  _objc_release(puVar7);
                  puVar17 = puVar17 + 1;
                } while (puVar6 != puVar17);
                puVar6 = puVar5;
                func_0x00010bf52a60();
              } while (puVar6 != (undefined *)0x0);
            }
            _objc_release(puVar5);
            _objc_release(puVar5);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar3);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar10);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_1058a4dec;
  puStack_228 = &UNK_110841f80;
  _objc_retain(puVar1);
  puStack_220 = puVar1;
  _objc_retain(puVar2);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  puStack_218 = puVar2;
  func_0x00010c11de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_248,auStack_190);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar14);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar11);
  func_0x00010c0f8520(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_248);
  _objc_release(puStack_218);
  _objc_release(puStack_220);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar8 = auStack_190;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume();
  uVar4 = *(undefined8 *)(puVar8 + 0x20);
  uVar12 = *(undefined8 *)(puVar8 + 0x28);
  _objc_retain(uVar12);
  func_0x00010bf97e80(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1058a4dec; end: 1058a4e57;  */

void FUN_1058a4dec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1058a4e58;
  puStack_30 = &UNK_1108bb418;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_28);
  return;
}



/* Entry: 1058a4e58; end: 1058a4ecf;  */

void FUN_1058a4e58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1e3380(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058a4ed0; end: 1058a4f1b;  */

void FUN_1058a4ed0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3360();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a4f1c; end: 1058a4fc3; -[SCGalleryHighlightContentDataSource prefetchCollectionsWithContext:timeout:completionBlock:] */

void FUN_1058a4f1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1058a4fc4;
  puStack_68 = &UNK_1108bb538;
  lStack_60 = param_2;
  uStack_58 = param_5;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 1058a4fc4; end: 1058a5517;  */

void FUN_1058a4fc4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_3a0 [8];
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_1058a5518;
  uStack_108 = 0x1058a5528;
  uStack_100 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_1058a5518;
  uStack_138 = 0x1058a5528;
  uStack_130 = 0;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_1058a5518;
  uStack_168 = 0x1058a5528;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_180 = &uStack_188;
  puStack_f0 = &uStack_f8;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_1058a5518;
  uStack_198 = 0x1058a5528;
  uStack_190 = 0;
  puStack_1e0 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3032000000;
  pcStack_1d0 = FUN_1058a5518;
  uStack_1c8 = 0x1058a5528;
  uStack_1c0 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x3032000000;
  pcStack_220 = FUN_1058a5518;
  uStack_218 = 0x1058a5528;
  uStack_210 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_1058a5518;
  uStack_248 = 0x1058a5528;
  uStack_240 = 0;
  puStack_290 = &uStack_298;
  uStack_298 = 0;
  uStack_288 = 0x3032000000;
  pcStack_280 = FUN_1058a5518;
  uStack_278 = 0x1058a5528;
  uStack_270 = 0;
  puStack_200 = &uStack_208;
  puStack_160 = puVar1;
  _objc_initWeak(auStack_2a0,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_338 = 0xc2000000;
  pcStack_330 = FUN_1058a5530;
  puStack_328 = &UNK_1108bb478;
  _objc_copyWeak(auStack_2b0,auStack_2a0);
  puStack_300 = &uStack_d8;
  puStack_2f0 = &uStack_158;
  puStack_2e8 = &uStack_1b8;
  puStack_2e0 = &uStack_1e8;
  puStack_2d8 = &uStack_238;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_318 = &uStack_188;
  puStack_310 = &uStack_f8;
  puStack_308 = &uStack_b8;
  puStack_2f8 = &uStack_128;
  puStack_2d0 = &uStack_268;
  puStack_2c8 = &uStack_298;
  puStack_2c0 = &uStack_208;
  _objc_retain(uVar3);
  puStack_2b8 = &uStack_98;
  uStack_2a8 = *(undefined8 *)(param_1 + 0x30);
  ppuVar2 = &puStack_340;
  uStack_320 = uVar3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  _objc_retain(uVar4);
  uVar3 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x38) * 1000000000.0));
  puStack_390 = puVar1;
  uStack_388 = 0xc2000000;
  pcStack_380 = FUN_1058a58d4;
  puStack_378 = &UNK_1108bb4a8;
  uStack_350 = *(undefined8 *)(param_1 + 0x30);
  uStack_348 = *(undefined8 *)(param_1 + 0x38);
  uStack_370 = uVar4;
  puStack_360 = &uStack_128;
  puStack_358 = &uStack_b8;
  _objc_retain(ppuVar2);
  ppuStack_368 = ppuVar2;
  func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_390);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_398 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_3a0,auStack_2a0);
  _objc_retain(ppuVar2);
  func_0x00010be12d60(uVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_3a0);
  _objc_release(ppuStack_368);
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_320);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a0);
  __Block_object_dispose(&uStack_298,8);
  _objc_release(uStack_270);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  _objc_release(uStack_210);
  __Block_object_dispose(&uStack_208,8);
  __Block_object_dispose(&uStack_1e8,8);
  _objc_release(uStack_1c0);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(uStack_190);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(puStack_160);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  return;
}



/* Entry: 1058a5518; end: 1058a552f;  */

void FUN_1058a5518(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058a5530; end: 1058a5707;  */

void FUN_1058a5530(undefined8 param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_2 + 0x90;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar3);
    func_0x00010be59900(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18),
                        lVar2);
    if ((param_4 != 0) && ((*(byte *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x18) & 1) == 0)) {
      iVar1 = 0x10e09998;
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        uVar4 = *(ulong *)(lVar2 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2827c0();
        _objc_release(uVar4);
        lVar6 = *(long *)(*(long *)(param_2 + 0x40) + 8);
        uVar4 = *(ulong *)(lVar6 + 0x18);
        if (uVar4 <= uVar5) {
          uVar4 = uVar5;
        }
        *(ulong *)(lVar6 + 0x18) = uVar4;
      }
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
                (*(long *)(param_2 + 0x20),
                 *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18),param_5);
      *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x18) = 1;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a5708; end: 1058a58d3;  */

void FUN_1058a5708(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x90,param_2 + 0x90);
  return;
}



/* Entry: 1058a58d4; end: 1058a597f;  */

void FUN_1058a58d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010b5f0f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f2144(*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e09998,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058a5980; end: 1058a5ad3;  */

void FUN_1058a5980(long param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e09a98;
    lVar4 = param_2;
  }
  else {
    if (param_2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      _objc_retain(param_2);
      func_0x00010be608a0(lVar1);
      _objc_release(param_2);
      _objc_release(uVar6);
      goto LAB_1058a5a9c;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    ppuVar3 = param_4;
    lVar4 = 0;
  }
  (*pcVar5)(lVar2,ppuVar3,1,lVar4);
LAB_1058a5a9c:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058a5ad4; end: 1058a5d07;  */

void FUN_1058a5ad4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = param_3;
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18) = param_1;
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x18) = param_4;
  lVar1 = *(long *)(*(long *)(param_2 + 0x50) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x58) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x60) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x68) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x70) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_12;
  _objc_retain(param_12);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x80) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_14;
  _objc_retain(param_14);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),param_9,param_10,*(undefined8 *)(param_2 + 0x20));
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 1058a5d08; end: 1058a602b;  */

void FUN_1058a5d08(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 1058a602c; end: 1058a6083; -[SCGalleryHighlightContentDataSource forceReRankStories] */

void FUN_1058a602c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058a6084;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1058a6084; end: 1058a608b;  */

void FUN_1058a6084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fireUpdateAndSortFeaturedStorie_112563880);
  return;
}



/* Entry: 1058a608c; end: 1058a60e3; -[SCGalleryHighlightContentDataSource resetViewProgressForAllFeaturedStories] */

void FUN_1058a608c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058a60e4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1058a60e4; end: 1058a637f;  */

void FUN_1058a60e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar7;
        func_0x00010c127ea0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c26ad40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar1,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar3);
        func_0x00010c127ea0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010bf4c440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1058a6380;
  puStack_140 = &UNK_110842e18;
  uStack_138 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c139d40(uVar3,param_2,puVar4,uVar5,&puStack_158);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c0b8620(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108bb588,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139d20();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x160);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058a6380; end: 1058a63b7;  */

void FUN_1058a6380(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058a63b8; end: 1058a63bf;  */

void FUN_1058a63b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_crFeaturedStory_1125b28a8);
  return;
}



/* Entry: 1058a63c0; end: 1058a6457; -[SCGalleryHighlightContentDataSource cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_1058a63c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058a6458;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a6458; end: 1058a64a3;  */

void FUN_1058a6458(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c074180();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x30) != 9)) {
    return;
  }
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010beae8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__setupOnFeaturedStoryDataSourceU_1125893d8);
  return;
}



/* Entry: 1058a64a4; end: 1058a64df; -[SCGalleryHighlightContentDataSource _setup] */

void FUN_1058a64a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058a64e0; end: 1058a6553; -[SCGalleryHighlightContentDataSource _updateWithChatMediaFeaturedStories:] */

void FUN_1058a64e0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108bb5c8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  func_0x00010be17b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a6554; end: 1058a6723;  */

void FUN_1058a6554(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c58c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar3 = *(undefined8 *)(lVar12 * 8);
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar3);
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bf970;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bfba820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113c80();
  lVar5 = param_2;
  func_0x00010c29eb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar10 = (undefined *)0x0;
  func_0x00010c03dce0(0);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010bddf5c0(param_2);
  puVar4 = puVar10;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar10;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar6;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_2 + 0xf0);
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x000108ec19fc();
    _objc_release(uVar3);
    _objc_release(uVar7);
    if ((int)uVar8 != 0) {
      func_0x00010bde8fc0(param_2);
      goto LAB_1058a6834;
    }
  }
  puVar9 = puVar6;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar9;
  _objc_release(uVar3);
  func_0x00010bddf5e0(param_2);
LAB_1058a6834:
  _objc_release(puVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1058a6724; end: 1058a685f; -[SCGalleryHighlightContentDataSource _updateWithCRFeaturedStories:] */

void FUN_1058a6724(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010bddf5c0(param_1);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108bb608);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar2;
  func_0x00010bfb2040(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1108bb628);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x000108ec19fc();
    _objc_release(uVar6);
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010bde8fc0(param_1,param_2,puVar1,puVar2);
      goto LAB_1058a6834;
    }
  }
  puVar5 = puVar2;
  func_0x00010bfaea20(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1108bb648);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar5;
  _objc_release(uVar6);
  func_0x00010bddf5e0(param_1,param_2,0x32,1);
LAB_1058a6834:
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a6860; end: 1058a695b;  */

void FUN_1058a6860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113c80();
  uVar2 = param_2;
  func_0x00010c29eac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bf970;
  _objc_alloc(PTR_PTR_1126bf970);
  uVar2 = param_2;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c03dce0(0,puVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058a695c; end: 1058a69df;  */

bool FUN_1058a695c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf53c00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0c7f80();
  _objc_release(param_2);
  return lVar1 == 1;
}



/* Entry: 1058a69e0; end: 1058a6b4b; -[SCGalleryHighlightContentDataSource _convertCRFeaturedStoryIntoSoundSyncFlashbackIfNecessary:featuredEntryDataModelsForCRFtS:] */

void FUN_1058a69e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_50,*(undefined8 *)(param_1 + 0x178));
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_58,auStack_50);
  func_0x00010c250e80(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a6b4c; end: 1058a6c7f;  */

void FUN_1058a6b4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf516c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1058a6c80; end: 1058a6d6f;  */

void FUN_1058a6c80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76700();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058a6d70; end: 1058a6dbb;  */

void FUN_1058a6d70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfaea20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108bb668);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be17b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fireUpdateAndSortFeaturedStorie_112563880);
  return;
}



/* Entry: 1058a6dbc; end: 1058a6e47;  */

uint FUN_1058a6dbc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf53c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c7f80();
  if (lVar2 == 1) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf53c00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1058a6e48; end: 1058a6e57;  */

void FUN_1058a6e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupClientGenFeaturedStories_112555718,0x32,1
            );
  return;
}



/* Entry: 1058a6e58; end: 1058a6fe7; -[SCGalleryHighlightContentDataSource _cleanupClientGenFeaturedStoriesInLocalDBWithEntrySource:bitMask:] */

void FUN_1058a6e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c2d18c(param_3,param_4,uVar1,uVar2,uVar5,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1058a6fe8; end: 1058a7037;  */

void FUN_1058a6fe8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be17b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a7038; end: 1058a71b7; -[SCGalleryHighlightContentDataSource _cleanupClientGenFeaturedStoriesInLocalDBIfAssetsDeleted] */

void FUN_1058a7038(long param_1)

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
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000106c2dda4(uVar1,uVar2,uVar6,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1058a71b8; end: 1058a7207;  */

void FUN_1058a71b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be17b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a7208; end: 1058a734b; -[SCGalleryHighlightContentDataSource _fireUpdateAndSortFeaturedStories] */

void FUN_1058a7208(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010bdc9dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1058a734c; end: 1058a73cb;  */

void FUN_1058a734c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    FUN_1058b6378(param_2,*(undefined8 *)(lVar1 + 0x58),1,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x60));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058a73cc; end: 1058a745f; -[SCGalleryHighlightContentDataSource _allFeaturedStories] */

void FUN_1058a73cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa160();
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058a7460; end: 1058a747b; -[SCGalleryHighlightContentDataSource _setupOnFeaturedStoryDataSourceUpStream] */

void FUN_1058a7460(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be11050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchExistingFeaturedStoriesOrW_112561db0,1)
  ;
  return;
}



/* Entry: 1058a747c; end: 1058a7533; -[SCGalleryHighlightContentDataSource _fetchExistingFeaturedStoriesOrWaitUtilNextUpdateWithIsFromSetup:] */

void FUN_1058a747c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  uStack_30 = 0x1058a74d8;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 1058a7534; end: 1058a7543;  */

void FUN_1058a7534(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be12d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchNewCollectionsFromServerWi_1125624f0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beea5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__waitUntilNextCollectionsUpdate_112598310);
  return;
}



/* Entry: 1058a7544; end: 1058a78d7; -[SCGalleryHighlightContentDataSource _fetchNewCollectionsFromServerWithContext:completionBlock:] */

void FUN_1058a7544(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b24e0;
  func_0x00010bf563c0(PTR_PTR_1126b24e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  _objc_retain();
  puVar4 = PTR_PTR_1126bf9d0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  uVar11 = *(undefined8 *)(param_2 + 0x80);
  _objc_retain(uVar11);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x140);
  _objc_retain(uVar10);
  uVar7 = *(undefined8 *)(param_2 + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  lVar12 = *(long *)(param_2 + 0x1d8);
  _objc_retain(lVar12);
  _CACurrentMediaTime();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  _objc_initWeak(auStack_a0,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae748;
  _objc_retain(lVar12);
  func_0x00010bf24820(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010bfe02e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar9 = lVar8;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    func_0x00010bef9140(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010befab00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16c6a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_copyWeak(auStack_b0,auStack_a0);
  _objc_retain(param_5);
  uStack_a8 = param_1;
  _objc_retain(uVar6);
  func_0x00010c0c9a20(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lVar12);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1058a78d8; end: 1058a7cff;  */

void FUN_1058a78d8(double param_1,long param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(*(long *)(param_2 + 0x48),0,0,puVar5);
  }
  else {
    lVar9 = *(long *)(*(long *)(param_2 + 0x50) + 8);
    if ((*(byte *)(lVar9 + 0x18) & 1) != 0) goto LAB_1058a7cc8;
    *(undefined1 *)(lVar9 + 0x18) = 1;
    _CACurrentMediaTime();
    lVar9 = (long)((param_1 - *(double *)(param_2 + 0x60)) * 1000.0);
    puVar5 = param_3;
    func_0x00010bfbcbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bf830;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((param_4 == 0) && (puVar5 != (undefined *)0x0)) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07e800();
      _objc_release(uVar2);
      if ((int)puVar8 != 0) {
        uVar2 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241000(param_3);
        func_0x00010c2045a0(uVar2);
        _objc_release(uVar2);
      }
      _objc_retain(param_3);
      puVar3 = param_3;
      func_0x00010bfbcbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR____NSArray0__struct_11034ab48;
      if (puVar7 != (undefined *)0x0) {
        puVar8 = puVar7;
      }
      _objc_retain(puVar8);
      _objc_release(puVar7);
      puVar7 = param_3;
      func_0x00010c240f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      puVar4 = puVar7;
      func_0x00010bf51e00(puVar7);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b60f8;
      _objc_alloc(PTR_PTR_1126b60f8);
      func_0x00010c0134e0();
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar7;
      func_0x00010bfb0d80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c154b60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(*(long *)(param_2 + 0x48),puVar3,puVar4,0);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf529e0(puVar5);
      func_0x00010c0df840(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f1ffc(uVar2,1,0,puVar8,lVar9);
      _objc_release(puVar8);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + 0x40);
      _objc_retain(uVar10);
      _objc_retain(param_3);
      func_0x00010c0f8520(uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_release(uVar10);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      lVar6 = param_4;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(*(long *)(param_2 + 0x48),0,0,puVar7);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf3ec40(param_4);
      func_0x00010c0df780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f1ffc(uVar2,0,puVar8,0,lVar9);
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_1058a7cc8:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a7d00; end: 1058a7d57;  */

void FUN_1058a7d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c292180(uVar2);
    func_0x00010c1ac260(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1058a7d58; end: 1058a7e43; -[SCGalleryHighlightContentDataSource _fetchNewCollectionsFromServerWithContext:] */

void FUN_1058a7d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(puVar1);
  func_0x00010be12d60(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058a7e44; end: 1058a7fcb;  */

void FUN_1058a7e44(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar2 = param_4;
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        func_0x00010be59900(0,0,lVar1);
      }
      func_0x00010beea5a0(lVar1);
    }
    else {
      _objc_initWeak(auStack_58,lVar1);
      _objc_copyWeak(auStack_60,auStack_58);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010be608a0(lVar1);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058a7fcc; end: 1058a816f;  */

void FUN_1058a7fcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
    func_0x00010be59900(uVar2,param_1,param_2);
  }
  _objc_release(param_2);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1058a8170; end: 1058a82eb; -[SCGalleryHighlightContentDataSource _waitUntilNextCollectionsUpdate] */

void FUN_1058a8170(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    uVar5 = uVar2;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1058a82ec; end: 1058a842b;  */

void FUN_1058a82ec(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f3c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        if (*(long *)(param_2 + 0x38) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380();
          _objc_release(puVar4);
          if (param_1 < 60.0) {
            func_0x00010be17880(param_2);
            goto LAB_1058a8408;
          }
        }
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x38);
        *(undefined **)(param_2 + 0x38) = puVar4;
        _objc_release(uVar5);
        func_0x00010be11040(param_2);
        func_0x00010c281a60(*(undefined8 *)(param_2 + 0x10));
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x10) = 0;
        _objc_release(uVar5);
        *(undefined1 *)(param_2 + 0x30) = 0;
      }
    }
  }
LAB_1058a8408:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a842c; end: 1058a863b; -[SCGalleryHighlightContentDataSource _fetchFeaturedEntriesForProfile:removeOutdatedEntriesWithCollections:] */

void FUN_1058a842c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4b60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = puVar5;
  func_0x00010c14cca0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1058a865c;
    puStack_78 = &UNK_1108bb7f8;
    _objc_retain();
    puStack_70 = puVar4;
    lStack_68 = param_1;
    func_0x00010bf97e80(param_4);
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1058a5518;
    uStack_a0 = 0x1058a5528;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_98 = puVar5;
    _objc_retain(puVar4);
    func_0x00010bf97e80(puVar2);
    puVar5 = (undefined *)puStack_b8[5];
    _objc_retain(puVar5);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(puStack_98);
    _objc_release(puStack_70);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058a863c; end: 1058a865b;  */

bool FUN_1058a863c(undefined8 param_1,ulong param_2)

{
  func_0x00010bf3d240(param_2);
  return (param_2 & 1) == 0;
}



/* Entry: 1058a865c; end: 1058a87d7;  */

void FUN_1058a865c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010be0dca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058a87d8; end: 1058a8a7f; -[SCGalleryHighlightContentDataSource _fetchFeaturedEntriesUsingBatchTemporaryEntrySnapFetchForProfile:removeOutdatedEntriesWithCollections:] */

void FUN_1058a87d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = puVar7;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    _objc_retain(puVar2);
    puVar7 = puVar2;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1058a8aa0;
    puStack_88 = &UNK_1108bb7f8;
    _objc_retain();
    puStack_80 = puVar4;
    lStack_78 = param_1;
    func_0x00010bf97e80(param_4);
    puVar5 = puVar2;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar7 = PTR_PTR_1126af4d0;
    puVar8 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar6 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar8 = puVar7;
    }
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_1058a5518;
    uStack_b0 = 0x1058a5528;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_a8 = puVar7;
    _objc_retain(puVar8);
    _objc_retain(puVar4);
    func_0x00010bf97e80(puVar2);
    puVar7 = (undefined *)puStack_c8[5];
    _objc_retain(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(puStack_a8);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puStack_80);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058a8a80; end: 1058a8a9f;  */

bool FUN_1058a8a80(undefined8 param_1,ulong param_2)

{
  func_0x00010bf3d240(param_2);
  return (param_2 & 1) == 0;
}



/* Entry: 1058a8aa0; end: 1058a8b27;  */

void FUN_1058a8aa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010be0dca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058a8b28; end: 1058a8b87;  */

bool FUN_1058a8b28(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c080ca0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1058a8b88; end: 1058a8cdf;  */

void FUN_1058a8b88(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c080ca0();
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    goto LAB_1058a8cc8;
  }
  uVar2 = param_2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_1058a8c14:
    puVar5 = PTR_PTR_1126af4d0;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar5 == (undefined *)0x0) goto LAB_1058a8c14;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be20360(uVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010beb43e0();
  if (iVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
  _objc_release(uVar4);
  _objc_release(puVar5);
LAB_1058a8cc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058a8ce0; end: 1058a8e53; -[SCGalleryHighlightContentDataSource _updateSnapFeedSnapLevelPriorities:] */

void FUN_1058a8ce0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bf830;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e800(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x140),1);
  _objc_release(uVar1);
  if ((int)puVar2 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0844e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,puVar4,uVar5);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar3 = param_3;
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c2045c0(uVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a8e54; end: 1058a936f; -[SCGalleryHighlightContentDataSource _getServerGeneratedProcessingInfoFromCollection:] */

void FUN_1058a8e54(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_2c8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar4 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lStack_2c8 = lVar4;
  func_0x00010bf52a60();
  if (lStack_2c8 != 0) {
    lVar14 = *plStack_220;
    do {
      lVar15 = 0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(lVar4);
        }
        lVar19 = *(long *)(lStack_228 + lVar15 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        lVar5 = lVar19;
        func_0x00010c0bc100();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar5;
        func_0x00010bf52a60();
        if (lVar18 != 0) {
          lVar16 = *plStack_260;
          do {
            lVar17 = 0;
            do {
              if (*plStack_260 != lVar16) {
                _objc_enumerationMutation(lVar5);
              }
              uVar6 = *(undefined8 *)(lStack_268 + lVar17 * 8);
              func_0x000107e65eb0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126bf9d8;
              _objc_opt_new(PTR_PTR_1126bf9d8);
              uVar13 = uVar6;
              func_0x00010c26afc0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c212c20(puVar7,param_2,uVar13);
              _objc_release(uVar13);
              uVar13 = uVar6;
              func_0x00010bf3f9a0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1bbd60(puVar7,param_2,uVar13);
              _objc_release(uVar13);
              uVar13 = uVar6;
              func_0x00010c0bc0e0();
              if ((int)uVar13 == 2) {
                uVar13 = 1;
LAB_1058a9014:
                func_0x00010c1fd420(puVar7,param_2,uVar13);
              }
              else {
                uVar13 = uVar6;
                func_0x00010c0bc0e0();
                if ((int)uVar13 == 1) {
                  uVar13 = 2;
                  goto LAB_1058a9014;
                }
              }
              func_0x00010befa120(puVar3,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(uVar6);
              lVar17 = lVar17 + 1;
            } while (lVar18 != lVar17);
            lVar18 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_270,auStack_170,0x10);
          } while (lVar18 != 0);
        }
        _objc_release(lVar5);
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        lStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        plStack_2a0 = (long *)0x0;
        func_0x00010c15f280();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar19;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar18 = *plStack_2a0;
          do {
            lVar16 = 0;
            do {
              if (*plStack_2a0 != lVar18) {
                _objc_enumerationMutation(lVar19);
              }
              lVar17 = *(long *)(lStack_2a8 + lVar16 * 8);
              func_0x000107e69b00();
              _objc_retainAutoreleasedReturnValue();
              if (lVar17 != 0) {
                puVar7 = PTR_PTR_1126bf9d8;
                _objc_opt_new(PTR_PTR_1126bf9d8);
                lVar8 = lVar17;
                func_0x00010c15f260();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c243a00();
                _objc_release(lVar8);
                if ((int)lVar9 == 1) {
                  uVar13 = 3;
LAB_1058a920c:
                  func_0x00010c1fd420(puVar7,param_2,uVar13);
                }
                else {
                  lVar8 = lVar17;
                  func_0x00010c15f260();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c243a00();
                  _objc_release(lVar8);
                  lVar8 = lVar17;
                  func_0x00010c15f260();
                  _objc_retainAutoreleasedReturnValue();
                  if ((int)lVar9 == 4) {
                    lVar9 = lVar8;
                    func_0x00010bf3f9c0();
                    _objc_retainAutoreleasedReturnValue();
LAB_1058a916c:
                    lVar10 = lVar9;
                    func_0x00010c094540();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1bbd60(puVar7,param_2,lVar10);
                    uVar13 = 1;
LAB_1058a91f0:
                    _objc_release(lVar10);
                    _objc_release(lVar9);
                    _objc_release(lVar8);
                    goto LAB_1058a920c;
                  }
                  lVar9 = lVar8;
                  func_0x00010c243a00();
                  _objc_release(lVar8);
                  lVar8 = lVar17;
                  func_0x00010c15f260();
                  _objc_retainAutoreleasedReturnValue();
                  if ((int)lVar9 == 5) {
                    lVar9 = lVar8;
                    func_0x00010c26b040();
                    _objc_retainAutoreleasedReturnValue();
LAB_1058a91cc:
                    lVar10 = lVar9;
                    func_0x00010c26afc0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c212c20(puVar7,param_2,lVar10);
                    uVar13 = 2;
                    goto LAB_1058a91f0;
                  }
                  lVar9 = lVar8;
                  func_0x00010c243a00();
                  _objc_release(lVar8);
                  lVar8 = lVar17;
                  func_0x00010c15f260();
                  _objc_retainAutoreleasedReturnValue();
                  if ((int)lVar9 == 3) {
                    lVar9 = lVar8;
                    func_0x00010bf2a780();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1058a916c;
                  }
                  lVar9 = lVar8;
                  func_0x00010c243a00();
                  _objc_release(lVar8);
                  if ((int)lVar9 == 2) {
                    lVar8 = lVar17;
                    func_0x00010c15f260(lVar17);
                    _objc_retainAutoreleasedReturnValue();
                    lVar9 = lVar8;
                    func_0x00010bf2a980();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1058a91cc;
                  }
                }
                func_0x00010befa120(puVar3,param_2,puVar7);
                _objc_release(puVar7);
              }
              _objc_release(lVar17);
              lVar16 = lVar16 + 1;
            } while (lVar5 != lVar16);
            lVar5 = lVar19;
            func_0x00010bf52a60(lVar19,param_2,&uStack_2b0,auStack_1f0,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar19);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lStack_2c8);
      lStack_2c8 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_230,auStack_f0,0x10);
    } while (lStack_2c8 != 0);
  }
  _objc_release(lVar4);
  puVar7 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126bf830;
    uVar13 = *(undefined8 *)(param_3 + 0xd8);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e800(puVar3,param_2,uVar13,*(undefined8 *)(param_3 + 0x140),0);
    _objc_release(uVar13);
    uVar11 = *(ulong *)(param_3 + 0x140);
    func_0x000108ec18ec();
    puVar12 = PTR_PTR_1126bf830;
    bVar1 = true;
    bVar2 = false;
    if ((int)puVar3 != 0) {
      bVar2 = SBORROW4((int)uVar11,1);
      bVar1 = (int)uVar11 + -1 < 0;
    }
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (bVar1 == bVar2) {
      uVar6 = *(undefined8 *)(param_3 + 0xd8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010c241040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246f20(puVar12,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      _objc_release(uVar6);
      puVar3 = puVar12;
      func_0x00010bf529e0();
      if ((undefined *)(uVar11 & 0xffffffff) <= puVar3) {
        puVar3 = (undefined *)(uVar11 & 0xffffffff);
      }
      puVar7 = puVar12;
      func_0x00010c25e980(puVar12,param_2,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058a9370; end: 1058a9483; -[SCGalleryHighlightContentDataSource _snapFeedSnapIdsToPrefetch] */

void FUN_1058a9370(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar4 = PTR_PTR_1126bf830;
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e800(puVar4,param_2,uVar3,*(undefined8 *)(param_1 + 0x140),0);
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_1 + 0x140);
  func_0x000108ec18ec();
  puVar7 = PTR_PTR_1126bf830;
  bVar1 = true;
  bVar2 = false;
  if ((int)puVar4 != 0) {
    bVar2 = SBORROW4((int)uVar5,1);
    bVar1 = (int)uVar5 + -1 < 0;
  }
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (bVar1 == bVar2) {
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c241040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246f20(puVar7,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar8 = puVar7;
    func_0x00010bf529e0();
    if ((undefined *)(uVar5 & 0xffffffff) <= puVar8) {
      puVar8 = (undefined *)(uVar5 & 0xffffffff);
    }
    puVar4 = puVar7;
    func_0x00010c25e980(puVar7,param_2,0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058a9484; end: 1058a955b; -[SCGalleryHighlightContentDataSource _scheduleNewClientGenPipelineOperationsForCollections:fastPathSaveCompletion:] */

void FUN_1058a9484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22de20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x140),param_2,
                        &PTR____CFConstantStringClassReference_110e09af8,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14fd40();
    _objc_release(uVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a955c; end: 1058a9923; -[SCGalleryHighlightContentDataSource _serverGenSnapDocSnapIdsByCollectionIdFromCollections:] */

void FUN_1058a955c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar18 = *(long *)(lVar16 * 8);
      lVar5 = lVar18;
      func_0x00010bf3fe40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar18;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar19 * 8);
            func_0x00010c15f280();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (lVar10 != 0) {
              lVar20 = 0;
              lVar11 = lVar10;
              do {
                if (lRam0000000000000000 != lVar2) {
                  lVar11 = lVar9;
                  _objc_enumerationMutation(lVar9);
                }
                lVar17 = *(long *)(lVar20 * 8);
                _objc_autoreleasePoolPush();
                func_0x000107e69b00();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar17;
                func_0x00010c15f260();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar12;
                func_0x00010c243a00();
                _objc_release(lVar12);
                if ((int)lVar13 == 6) {
                  lVar12 = lVar17;
                  func_0x00010c0844e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar13 = lVar12;
                  func_0x00010c08fa60();
                  _objc_release(lVar12);
                  if (lVar13 != 0) {
                    lVar12 = lVar17;
                    func_0x00010c0844e0(lVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar7);
                    _objc_release(lVar12);
                  }
                }
                _objc_release(lVar17);
                _objc_autoreleasePoolPop(lVar11);
                lVar20 = lVar20 + 1;
              } while (lVar10 != lVar20);
              lVar10 = lVar9;
              func_0x00010bf52a60();
            }
            _objc_release(lVar9);
            lVar19 = lVar19 + 1;
          } while (lVar19 != lVar5);
          lVar5 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
        puVar14 = puVar7;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          puVar14 = puVar7;
          func_0x00010bf51e00(puVar7);
          func_0x00010bf3fe40(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar18);
          _objc_release(puVar14);
        }
        _objc_release(puVar7);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be77b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1058a9924; end: 1058a992b; -[SCGalleryHighlightContentDataSource _preloadServerGenSnapMediaWithSnapIdsByCollectionId:] */

void FUN_1058a9924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be77b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__preloadServerGenSnapMediaWithSn_11257b868,param_3,0);
  return;
}



/* Entry: 1058a992c; end: 1058a9d2f; -[SCGalleryHighlightContentDataSource _preloadServerGenSnapMediaWithSnapIdsByCollectionId:orderedCollectionIds:] */

void FUN_1058a992c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  long lStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0xf0);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c0df380();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puStack_200 = puVar8;
  if (0 < (long)puVar8) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0xa8);
    uStack_1f8 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_248 = param_4;
    puStack_208 = puVar1;
    if (param_4 == (undefined *)0x0) {
      param_4 = param_3;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_4);
    }
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(param_4);
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar9 = *plStack_1a0;
      lStack_240 = lVar9;
      puStack_238 = param_4;
      puStack_230 = puVar3;
      lStack_228 = param_1;
      puStack_220 = param_3;
      do {
        puVar8 = (undefined *)0x0;
        puStack_218 = puVar1;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          puVar4 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 != (undefined *)0x0) {
            puVar4 = PTR_PTR_1126af4c0;
            func_0x00010bfa6f40();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            if ((puVar5 != (undefined *)0x0) &&
               (puVar4 = puVar5, func_0x000107e7553c(puVar5,*(undefined8 *)(param_1 + 0x140)),
               ((ulong)puVar4 & 1) == 0)) {
              lVar6 = *(long *)(param_1 + 0x130);
              puStack_210 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar6;
              func_0x00010c067fc0();
              _objc_release(lVar6);
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              plStack_1e0 = (long *)0x0;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = param_3;
              func_0x00010bf52a60();
              if (puVar1 != (undefined *)0x0) {
                lVar6 = *plStack_1e0;
                do {
                  puVar3 = (undefined *)0x0;
                  do {
                    if (*plStack_1e0 != lVar6) {
                      _objc_enumerationMutation(param_3);
                    }
                    if ((long)puStack_200 <= lVar9) goto LAB_1058a9c28;
                    puVar4 = PTR_PTR_1126af4d0;
                    func_0x00010bfa72e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar4;
                    func_0x00010c23ff80();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar5;
                    func_0x00010c08fa60();
                    _objc_release(puVar5);
                    if (puVar7 != (undefined *)0x0) {
                      lVar9 = lVar9 + 1;
                      func_0x00010befa120(puStack_208);
                    }
                    _objc_release(puVar4);
                    puVar3 = puVar3 + 1;
                  } while (puVar1 != puVar3);
                  puVar1 = param_3;
                  func_0x00010bf52a60();
                } while (puVar1 != (undefined *)0x0);
              }
LAB_1058a9c28:
              _objc_release(param_3);
              puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              param_1 = lStack_228;
              func_0x00010c1d0640(*(undefined8 *)(lStack_228 + 0x130));
              _objc_release(puVar1);
              puVar5 = puStack_210;
              puVar3 = puStack_230;
              param_3 = puStack_220;
              param_4 = puStack_238;
              lVar9 = lStack_240;
              puVar1 = puStack_218;
            }
            _objc_release(puVar5);
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar1);
        puVar1 = param_4;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_4);
    puVar1 = puStack_208;
    puVar4 = puStack_208;
    func_0x00010be77b40(param_1);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uStack_1f8);
    param_4 = puStack_248;
  }
  _objc_release(param_4);
  puVar5 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_1058a9d30;
  lStack_290 = param_1;
  puStack_288 = puVar8;
  puStack_280 = param_4;
  puStack_278 = param_3;
  puStack_270 = puVar3;
  puStack_268 = puVar1;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puVar8 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010bf529e0(puVar4);
    puVar1 = puVar4;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_298,puVar5);
    _objc_copyWeak(auStack_2a0,auStack_298);
    _objc_retain(puVar1);
    func_0x00010be77b60(puVar5);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_298);
    _objc_release(puVar1);
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
  return;
}



/* Entry: 1058a9d30; end: 1058a9e5b; -[SCGalleryHighlightContentDataSource _preloadServerGenSnapsSequentially:] */

void FUN_1058a9d30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf529e0(param_3);
    lVar2 = param_3;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar2);
    func_0x00010be77b60(param_1);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a9e5c; end: 1058a9e8f;  */

void FUN_1058a9e5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a9e90; end: 1058a9faf; -[SCGalleryHighlightContentDataSource _mixFeaturedStoriesWithCollections:snapLevelPriorities:context:completionBlock:] */

void FUN_1058a9e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058a9fb0;
  puStack_88 = &UNK_1108b6770;
  uStack_80 = param_3;
  lStack_78 = param_1;
  uStack_70 = uVar1;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_58 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a9fb0; end: 1058aa723;  */

/* WARNING: Possible PIC construction at 0x0001058aa4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001058aa4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001058aa4b8) */
/* WARNING: Removing unreachable block (ram,0x0001058aa4ec) */
/* WARNING: Removing unreachable block (ram,0x0001058aa4f4) */
/* WARNING: Removing unreachable block (ram,0x0001058aa514) */
/* WARNING: Removing unreachable block (ram,0x0001058aa520) */

void FUN_1058a9fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puStack_2a8;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108bb8c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010be16b60();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(puVar2);
  puStack_2a8 = puVar2;
  func_0x00010bf52a60();
  if (puStack_2a8 != (undefined *)0x0) {
    lVar15 = *plStack_1c0;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_1c0 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        uVar1 = *(undefined8 *)(lStack_1c8 + (long)puVar21 * 8);
        uVar4 = uVar3;
        func_0x00010bf4b900();
        puVar7 = PTR_PTR_1126af4c0;
        if ((uVar4 & 1) == 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6f40();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          puVar7 = PTR_PTR_1126af4d0;
          if (puVar8 != (undefined *)0x0) {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf529e0();
            _objc_release(puVar7);
            _objc_release(uVar5);
            puVar7 = puVar8;
            func_0x00010bf977c0();
            lVar10 = (long)(int)puVar7;
            func_0x00010b5f5864(lVar10,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar8;
            func_0x00010bfa34a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar8;
            func_0x00010bfa3440(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar8;
            func_0x00010bfa3220();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1f0 = 0xc2000000;
            pcStack_1e8 = FUN_1058aa72c;
            puStack_1e0 = &UNK_1108bbf18;
            _objc_retain(puVar8);
            puStack_1d8 = puVar8;
            func_0x00010c14cca0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            lVar14 = *(long *)(param_1 + 0x28);
            func_0x00010be227e0();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
                      (0,*(long *)(param_1 + 0x40),puVar9,0,lVar10,uVar1,puVar7,puVar11,0,0);
            _objc_release(lVar14);
            _objc_release(uVar5);
            _objc_release(puStack_1d8);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar7);
            _objc_release(lVar10);
          }
          _objc_release(puVar8);
        }
        puVar21 = puVar21 + 1;
      } while (puStack_2a8 != puVar21);
      puStack_2a8 = puVar2;
      func_0x00010bf52a60();
    } while (puStack_2a8 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  plVar18 = (long *)(param_1 + 0x28);
  lVar10 = *plVar18;
  func_0x00010bdf06e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0280(*plVar18);
  uVar1 = *(undefined8 *)(*plVar18 + 0x138);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*plVar18 + 0x160);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3360();
  _objc_release(uVar1);
  func_0x00010beda600(*plVar18);
  func_0x00010beea5a0(*plVar18);
  func_0x00010c12adc0(*(undefined8 *)(*plVar18 + 0x118));
  func_0x00010c12adc0(*(undefined8 *)(*plVar18 + 0x128));
  func_0x00010c12adc0(*(undefined8 *)(*plVar18 + 0x130));
  lVar14 = *plVar18;
  func_0x00010bea1580(lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  lVar20 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar20);
  lVar15 = lVar20;
  func_0x00010bf52a60();
  if (lVar15 == 0) {
    _objc_release(lVar20);
    puVar16 = (undefined8 *)(param_1 + 0x28);
    func_0x00010be77b20(*puVar16);
    _objc_initWeak(auStack_248,*puVar16);
    uVar1 = *puVar16;
    puVar17 = auStack_248;
    _objc_copyWeak(auStack_250,puVar17);
    func_0x00010be9b320(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bebcc80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be779c0(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar19);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar19);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_250);
    _objc_destroyWeak(auStack_248);
    _objc_release(puVar21);
    _objc_release(lVar14);
    _objc_release(lVar10);
    _objc_release(uVar3);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_250);
    _objc_destroyWeak(auStack_248);
    __Unwind_Resume(puVar2);
  }
  else {
    if (*plStack_230 != *plStack_230) {
      _objc_enumerationMutation(lVar20);
    }
    puVar17 = (undefined1 *)*plStack_238;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar17,PTR_s_collectionId_1125ad938);
  return;
}



/* Entry: 1058aa724; end: 1058aa72b;  */

void FUN_1058aa724(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_collectionId_1125ad938);
  return;
}



/* Entry: 1058aa72c; end: 1058aa847;  */

undefined8 FUN_1058aa72c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9e140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1058aa848; end: 1058aa853;  */

void FUN_1058aa848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be77b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__preloadServerGenSnapMediaWithSn_11257b860,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058aa854; end: 1058aa9af;  */

ulong FUN_1058aa854(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  func_0x000106793780(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar3 = uVar8;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf04920();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        func_0x0001067939d4(param_2);
        uVar5 = uVar8;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  uVar3 = uVar5;
  func_0x00010c0bc100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    uVar4 = uVar5;
    func_0x00010c15f280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf529e0();
    uVar8 = (ulong)(uVar8 != 0);
    _objc_release(uVar4);
  }
  else {
    uVar8 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar5);
  return uVar8;
}



/* Entry: 1058aa9b0; end: 1058aaa3b;  */

bool FUN_1058aa9b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0bc100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010c15f280(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1058aaa3c; end: 1058aaa3f;  */

void FUN_1058aaa3c(void)

{
  return;
}



/* Entry: 1058aaa40; end: 1058aadeb; -[SCGalleryHighlightContentDataSource _findNewCollectionIdsAndRemoveDeletedCollectionsWithCollections:profile:allCollectionIds:] */

void FUN_1058aaa40(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_1 + 0x140);
  func_0x000108ec18c4();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    param_2 = uVar3;
    FUN_1058b6b80(param_3,uVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar2 = *(ulong *)(param_1 + 0x140);
  func_0x00010bf1f440();
  lVar6 = param_1;
  if ((uVar2 & 1) == 0) {
    func_0x00010be11180();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be111a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar5 = param_5;
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_1058b75bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bddbee0(param_1);
  _objc_retain(puVar8);
  puVar9 = puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c2c0();
      _objc_release(uVar4);
      puVar12 = puVar12 + 1;
    } while (puVar9 != puVar12);
    puVar9 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97e80(param_3);
  _objc_retain(puVar9);
  puVar12 = puVar7;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = puVar9;
    func_0x00010bf51e00();
    func_0x00010bedde80(param_1);
    _objc_release(puVar10);
  }
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c113c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = param_2;
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1058aadec; end: 1058aaeff;  */

void FUN_1058aadec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c113c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058aaf00; end: 1058aba3b; -[SCGalleryHighlightContentDataSource _createNewCollectionsWithNewCollectionIds:allCollections:profile:] */

void FUN_1058aaf00(ulong param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puStack_460;
  int iStack_424;
  long lStack_420;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  ulong uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(param_4);
  puVar6 = param_4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar21 = *plStack_240;
    do {
      puStack_460 = (undefined *)0x0;
      puVar7 = puVar6;
      do {
        if (*plStack_240 != lVar21) {
          puVar7 = param_4;
          _objc_enumerationMutation();
        }
        lVar22 = *(long *)(lStack_248 + (long)puStack_460 * 8);
        func_0x00010b6fb254();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        _objc_release();
        if (puVar8 == (undefined *)0x0) {
LAB_1058ab0b0:
          puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
          _objc_opt_new();
          puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
          lVar9 = lVar22;
          func_0x00010bf3fe40(lVar22);
          _objc_retainAutoreleasedReturnValue();
          lVar23 = param_3;
          func_0x00010bf4b900();
          _objc_release(lVar9);
          if (((int)lVar23 != 0) && (lVar9 = lVar22, func_0x00010bf33360(), lVar9 != -9999)) {
            lVar9 = lVar22;
            func_0x00010bf33360();
            if (lVar9 - 9U < 0x14) {
              lVar9 = lVar22;
              func_0x00010c0fa720();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = lVar9;
              func_0x00010bf529e0();
              if (lVar23 == 0) {
                _objc_release(lVar9);
              }
              else {
                lVar23 = lVar22;
                func_0x00010c0fa720();
                _objc_retainAutoreleasedReturnValue();
                uVar24 = param_1;
                func_0x00010bdca080();
                _objc_release(lVar23);
                _objc_release(lVar9);
                if ((int)uVar24 == 0) goto LAB_1058ab7bc;
              }
            }
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            lVar9 = lVar22;
            func_0x00010bf33360();
            func_0x00010b5fae1c();
            if (lVar9 == 5) {
              uStack_268 = 0;
              uStack_270 = 0;
              uStack_258 = 0;
              uStack_260 = 0;
              lStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              plStack_280 = (long *)0x0;
              lVar9 = lVar22;
              func_0x00010befcec0();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = lVar9;
              func_0x00010bf45660();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar9);
              lVar9 = lVar23;
              func_0x00010bf52a60();
              if (lVar9 != 0) {
                lVar28 = *plStack_280;
                do {
                  lVar29 = 0;
                  do {
                    if (*plStack_280 != lVar28) {
                      _objc_enumerationMutation(lVar23);
                    }
                    lVar26 = *(long *)(lStack_288 + lVar29 * 8);
                    lVar11 = lVar26;
                    func_0x00010c0ed960();
                    _objc_retainAutoreleasedReturnValue();
                    lVar27 = lVar11;
                    func_0x00010bf529e0();
                    if (lVar27 == 0) {
LAB_1058ab2a4:
                      _objc_release(lVar11);
                    }
                    else {
                      lVar27 = lVar26;
                      func_0x00010c0ed960(lVar26);
                      _objc_retainAutoreleasedReturnValue();
                      uVar24 = param_1;
                      func_0x00010bdca080();
                      _objc_release(lVar27);
                      _objc_release(lVar11);
                      if ((uVar24 & 1) == 0) {
                        func_0x00010c15f5a0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar10);
                        lVar11 = lVar26;
                        goto LAB_1058ab2a4;
                      }
                    }
                    lVar29 = lVar29 + 1;
                  } while (lVar9 != lVar29);
                  lVar9 = lVar23;
                  func_0x00010bf52a60();
                } while (lVar9 != 0);
              }
              _objc_release(lVar23);
            }
            lVar9 = lVar22;
            func_0x00010c0ce3e0();
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            lStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            plStack_2c0 = (long *)0x0;
            func_0x00010bfcf800();
            _objc_retainAutoreleasedReturnValue();
            lStack_420 = lVar22;
            func_0x00010bf52a60();
            if (lStack_420 == 0) {
              iStack_424 = 0;
            }
            else {
              iStack_424 = 0;
              lVar23 = *plStack_2c0;
              do {
                lVar28 = 0;
                do {
                  if (*plStack_2c0 != lVar23) {
                    _objc_enumerationMutation(lVar22);
                  }
                  lVar27 = *(long *)(lStack_2c8 + lVar28 * 8);
                  lVar29 = lVar27;
                  func_0x00010c0ce640();
                  lVar11 = lVar27;
                  func_0x00010c271620(lVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(puVar5);
                  _objc_release(lVar11);
                  puVar12 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
                  _objc_opt_new();
                  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  _objc_opt_new();
                  lVar11 = lVar27;
                  func_0x00010c245680(lVar27);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_300 = 0xc2000000;
                  pcStack_2f8 = FUN_1058aba3c;
                  puStack_2f0 = &UNK_1108bb978;
                  _objc_retain(puVar10);
                  puStack_2e8 = puVar10;
                  _objc_retain(puVar12);
                  puStack_2e0 = puVar12;
                  _objc_retain(puVar13);
                  puStack_2d8 = puVar13;
                  func_0x00010bf97e80(lVar11);
                  _objc_release(lVar11);
                  puVar15 = PTR_PTR_1126af4d0;
                  puVar14 = puVar12;
                  func_0x00010bf09f00(puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = *(undefined8 *)(param_1 + 0x80);
                  func_0x00010c269d40(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfa74c0(puVar15);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                  _objc_release(puVar14);
                  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
                  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0ce860(puVar12);
                  _objc_release(puVar14);
                  uVar20 = *(undefined8 *)(param_1 + 0x1c0);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = uVar20;
                  func_0x00010bf1f3c0();
                  _objc_release(uVar20);
                  puVar14 = PTR_PTR_1126af4d0;
                  if ((int)uVar19 != 0) {
                    puVar16 = puVar12;
                    func_0x00010bf09f00(puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    uVar19 = *(undefined8 *)(param_1 + 0x80);
                    func_0x00010c269d40(uVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa7480(puVar14);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar19);
                    _objc_release(puVar16);
                    iVar1 = (int)*(undefined8 *)(param_1 + 0x140);
                    func_0x000108ec0158();
                    if (iVar1 == 0) {
                      puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_328 = 0xc2000000;
                      uStack_320 = 0x1058abb00;
                      puStack_318 = &UNK_1108bb9a8;
                      puVar16 = puVar14;
                      uStack_310 = param_1;
                      func_0x00010bf43280(puVar14);
                      _objc_retainAutoreleasedReturnValue();
                      puVar17 = PTR__OBJC_CLASS___NSSet_1126ae870;
                      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0ce860(puVar12);
                      _objc_release(puVar17);
                      _objc_release(puVar16);
                    }
                    else {
                      uVar24 = param_1;
                      func_0x00010be80360(param_1);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0ce860(puVar12);
                      _objc_release(uVar24);
                    }
                    _objc_release(puVar14);
                  }
                  puVar14 = puVar12;
                  func_0x00010bf529e0();
                  lVar11 = lVar27;
                  func_0x00010c0bc100();
                  _objc_retainAutoreleasedReturnValue();
                  lVar26 = lVar11;
                  func_0x00010bf529e0();
                  func_0x00010c15f280();
                  _objc_retainAutoreleasedReturnValue();
                  lVar18 = lVar27;
                  func_0x00010bf529e0();
                  _objc_release(lVar27);
                  _objc_release(lVar11);
                  if ((undefined *)(long)(int)lVar29 <= puVar14 + lVar18 + lVar26) {
                    puVar14 = puVar12;
                    func_0x00010bf09f00(puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar7);
                    _objc_release(puVar14);
                    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_350 = 0xc2000000;
                    pcStack_348 = FUN_1058abbf0;
                    puStack_340 = &UNK_1108baae8;
                    _objc_retain(puVar13);
                    puStack_338 = puVar13;
                    func_0x00010bf97e80(puVar15);
                    func_0x00010bef7f60(puVar8);
                    _objc_release(puStack_338);
                    iStack_424 = iStack_424 + 1;
                  }
                  _objc_release(puVar15);
                  _objc_release(puStack_2d8);
                  _objc_release(puStack_2e0);
                  _objc_release(puStack_2e8);
                  _objc_release(puVar13);
                  _objc_release(puVar12);
                  lVar28 = lVar28 + 1;
                } while (lStack_420 != lVar28);
                lStack_420 = lVar22;
                func_0x00010bf52a60();
              } while (lStack_420 != 0);
            }
            _objc_release(lVar22);
            if ((int)lVar9 <= iStack_424) {
              func_0x00010befa120(puVar2);
              puVar15 = puVar7;
              func_0x00010bf09f00(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar15);
              func_0x00010befa120(puVar4);
            }
            _objc_release(puVar10);
          }
LAB_1058ab7bc:
          _objc_release(puVar8);
          _objc_release();
        }
        else {
          func_0x00010b6fb254();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar22;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          lVar23 = lVar9;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010c0720c0();
          _objc_release(lVar23);
          _objc_release(lVar9);
          _objc_release(puVar8);
          _objc_release();
          if ((int)puVar10 != 0) goto LAB_1058ab0b0;
        }
        puStack_460 = puStack_460 + 1;
      } while (puStack_460 != puVar6);
      puVar6 = param_4;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(param_4);
  puStack_380 = &uStack_388;
  uStack_388 = 0;
  uStack_378 = 0x3032000000;
  pcStack_370 = FUN_1058a5518;
  uStack_368 = 0x1058a5528;
  uStack_360 = 0;
  uVar19 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  func_0x00010c0f8540(uVar19);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar19);
  _objc_release(uVar19);
  uVar19 = puStack_380[5];
  _objc_retain(uVar19);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_388,8);
  _objc_release(uStack_360);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    uVar20 = 8;
    __Block_object_dispose(&uStack_388,8);
    __Unwind_Resume();
    _objc_retain(uVar20);
    uVar24 = *(ulong *)(param_3 + 0x20);
    uVar19 = uVar20;
    func_0x00010c241220(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar19);
    if ((uVar24 & 1) == 0) {
      uVar25 = *(undefined8 *)(param_3 + 0x28);
      uVar19 = uVar20;
      func_0x00010c241220(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar25);
      _objc_release(uVar19);
      uVar25 = *(undefined8 *)(param_3 + 0x30);
      uVar19 = uVar20;
      func_0x00010c241220(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar25);
      _objc_release(uVar19);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar19);
  return;
}



/* Entry: 1058aba3c; end: 1058abbef;  */

void FUN_1058aba3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058abbf0; end: 1058abc2f;  */

void FUN_1058abbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058abc30; end: 1058abcbf;  */

void FUN_1058abc30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be734a0(uVar4,param_2,uVar1,uVar5,uVar2,puVar3,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1058abcc0; end: 1058abd1b;  */

void FUN_1058abcc0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 1058abd1c; end: 1058abe53;  */

void FUN_1058abd1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  FUN_1058b77fc(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bf3fe40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1058b772c(param_2,uVar3);
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1058abe54; end: 1058abe57;  */

void FUN_1058abe54(void)

{
  return;
}


