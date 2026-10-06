/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068982f8; end: 10689847f; -[SCModularSpotlightLauncherImpl _SOFFCacheSliceFor:friendUserId:friendFeedUserIds:] */

void FUN_1068982f8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110946298);
  lVar1 = param_4;
  FUN_1068984a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2a20;
  func_0x00010c24b880(PTR_PTR_1126c2a20);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c067e20();
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    func_0x00010bdc3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = lVar1;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      _objc_retain(param_3);
      param_1 = param_3;
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106898500;
      puStack_68 = &UNK_1109462b8;
      lStack_60 = param_1;
      _objc_retain(lVar1);
      param_1 = param_3;
      lStack_58 = lVar1;
      func_0x0001006372a4(param_3,&puStack_80);
      _objc_release(lStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106898480; end: 10689849f;  */

bool FUN_106898480(undefined8 param_1,long param_2)

{
  func_0x00010c25b720(param_2);
  return param_2 == 0xd;
}



/* Entry: 1068984a0; end: 1068984ff;  */

void FUN_1068984a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x000108f4d88c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106898500; end: 10689854b;  */

undefined8 FUN_106898500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc3b40(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10689854c; end: 106898a1f; -[SCModularSpotlightLauncherImpl _SOFFStories:orderedFromFriendUserId:friendFeedUserIds:] */

void FUN_10689854c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  bool bVar14;
  undefined8 *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 *puStack_3b0;
  code *pcStack_3a8;
  undefined8 *puStack_398;
  long lStack_390;
  undefined8 *puStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  uStack_378 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar12 = param_4;
  func_0x00010c08fa60();
  if ((lVar12 == 0) || (puVar2 = param_5, func_0x00010bf529e0(), puVar2 == (undefined8 *)0x0)) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_388 = param_3;
    _objc_opt_new();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(param_5);
    puVar11 = &uStack_2b0;
    puVar2 = param_5;
    func_0x00010bf52a60(param_5,param_2,puVar11,auStack_f0,0x10);
    if (puVar2 != (undefined8 *)0x0) {
      bVar14 = false;
      lVar12 = *plStack_2a0;
      do {
        unaff_x21 = (undefined8 *)0x0;
        do {
          if (*plStack_2a0 != lVar12) {
            _objc_enumerationMutation(param_5);
          }
          lVar3 = *(long *)(lStack_2a8 + (long)unaff_x21 * 8);
          FUN_1068984a0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar3;
          func_0x00010c08fa60();
          if (lVar17 != 0) {
            if ((bVar14) ||
               (lVar17 = lVar3, func_0x00010c0720c0(lVar3,param_2,param_4), (int)lVar17 != 0)) {
              puVar4 = unaff_x22;
              func_0x00010bf4b900(unaff_x22,param_2,lVar3);
              if (((ulong)puVar4 & 1) == 0) {
                func_0x00010befa120(unaff_x22,param_2,lVar3);
              }
              bVar14 = true;
            }
            else {
              bVar14 = false;
            }
          }
          _objc_release(lVar3);
          unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
        } while (puVar2 != unaff_x21);
        puVar11 = &uStack_2b0;
        puVar2 = param_5;
        func_0x00010bf52a60(param_5,param_2,puVar11,auStack_f0,0x10);
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_5);
    puVar4 = unaff_x22;
    func_0x00010bf529e0();
    param_3 = puStack_388;
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(puStack_388);
      puVar2 = param_3;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_398 = param_5;
      lStack_390 = param_4;
      _objc_opt_new();
      puVar11 = puStack_388;
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      _objc_retain(puStack_388);
      puVar2 = puVar11;
      func_0x00010bf52a60(puVar11,param_2,&uStack_2f0,auStack_170,0x10);
      if (puVar2 != (undefined8 *)0x0) {
        lStack_380 = *plStack_2e0;
        do {
          unaff_x21 = (undefined8 *)0x0;
          do {
            if (*plStack_2e0 != lStack_380) {
              _objc_enumerationMutation(puStack_388);
            }
            uVar16 = *(undefined8 *)(lStack_2e8 + (long)unaff_x21 * 8);
            uVar5 = uStack_378;
            func_0x00010bdc3b40(uStack_378,param_2,uVar16);
            _objc_retainAutoreleasedReturnValue();
            lStack_328 = 0;
            uStack_330 = 0;
            uStack_318 = 0;
            plStack_320 = (long *)0x0;
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            _objc_retain(unaff_x22);
            puVar6 = unaff_x22;
            func_0x00010bf52a60(unaff_x22,param_2,&uStack_330,auStack_1f0,0x10);
            if (puVar6 != (undefined *)0x0) {
              lVar12 = *plStack_320;
              do {
                puVar13 = (undefined *)0x0;
                do {
                  if (*plStack_320 != lVar12) {
                    _objc_enumerationMutation(unaff_x22);
                  }
                  lVar17 = *(long *)(lStack_328 + (long)puVar13 * 8);
                  uVar7 = uVar5;
                  func_0x00010bf4b900(uVar5,param_2,lVar17);
                  if ((int)uVar7 != 0) {
                    _objc_retain(lVar17);
                    goto LAB_106898800;
                  }
                  puVar13 = puVar13 + 1;
                } while (puVar6 != puVar13);
                puVar6 = unaff_x22;
                func_0x00010bf52a60(unaff_x22,param_2,&uStack_330,auStack_1f0,0x10);
              } while (puVar6 != (undefined *)0x0);
            }
            lVar17 = 0;
LAB_106898800:
            _objc_release(unaff_x22);
            lVar12 = lVar17;
            func_0x00010c08fa60();
            if (lVar12 != 0) {
              puVar6 = puVar4;
              func_0x00010c0e00e0(puVar4,param_2,lVar17);
              _objc_retainAutoreleasedReturnValue();
              if (puVar6 == (undefined *)0x0) {
                puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar4,param_2,puVar6,lVar17);
              }
              func_0x00010befa120(puVar6,param_2,uVar16);
              _objc_release(puVar6);
            }
            _objc_release(lVar17);
            _objc_release(uVar5);
            puVar11 = puStack_388;
            unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
          } while (unaff_x21 != puVar2);
          puVar2 = puStack_388;
          func_0x00010bf52a60(puStack_388,param_2,&uStack_2f0,auStack_170,0x10);
        } while (puVar2 != (undefined8 *)0x0);
      }
      _objc_release(puVar11);
      puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      _objc_retain(unaff_x22);
      puVar11 = &uStack_370;
      puVar13 = unaff_x22;
      func_0x00010bf52a60(unaff_x22,param_2,puVar11,auStack_270,0x10);
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (puVar13 != (undefined *)0x0) {
        lVar12 = *plStack_360;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_360 != lVar12) {
              _objc_enumerationMutation(unaff_x22);
            }
            puVar9 = puVar4;
            func_0x00010c0e00e0(puVar4,param_2,*(undefined8 *)(lStack_368 + (long)puVar15 * 8));
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar6;
            if (puVar9 != (undefined *)0x0) {
              puVar1 = puVar9;
            }
            func_0x00010befa160(puVar8,param_2,puVar1);
            _objc_release(puVar9);
            puVar15 = puVar15 + 1;
          } while (puVar13 != puVar15);
          puVar11 = &uStack_370;
          puVar13 = unaff_x22;
          func_0x00010bf52a60(unaff_x22,param_2,puVar11,auStack_270,0x10);
          unaff_x21 = (undefined8 *)puVar6;
        } while (puVar13 != (undefined *)0x0);
      }
      _objc_release(unaff_x22);
      puVar2 = puVar8;
      func_0x00010bf51e00();
      _objc_release(puVar8);
      _objc_release(puVar4);
      param_3 = puStack_388;
      param_4 = lStack_390;
      param_5 = puStack_398;
    }
    _objc_release(unaff_x22);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    pcStack_3a8 = FUN_106898a20;
    puStack_3d0 = unaff_x22;
    puStack_3c8 = unaff_x21;
    puStack_3c0 = puVar2;
    puStack_3b8 = param_3;
    puStack_3b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar11);
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c259560(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    pcStack_3f0 = FUN_106898b58;
    puStack_3e8 = &UNK_1109462e8;
    _objc_retain(puVar8);
    puStack_3e0 = puVar8;
    _objc_retain(puVar10);
    puStack_3d8 = puVar10;
    func_0x00010c0bf680(puVar2,param_2,0,&puStack_400,0,0,0,0,0,0,0);
    _objc_release(puVar2);
    puVar11 = puVar8;
    func_0x00010bf529e0();
    puVar2 = puVar10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar2 = puVar8;
    }
    func_0x00010bf09f00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_3d8);
    _objc_release(puStack_3e0);
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106898a20; end: 106898b57; -[SCModularSpotlightLauncherImpl _SOFFFeedIdsForStory:] */

void FUN_106898a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_retain(param_3);
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106898b58;
  puStack_48 = &UNK_1109462e8;
  _objc_retain(puVar1);
  puStack_40 = puVar1;
  _objc_retain(puVar2);
  puStack_38 = puVar2;
  func_0x00010c0bf680(uVar3,param_2,0,&puStack_60,0,0,0,0,0,0,0);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  puVar5 = puVar2;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar1;
  }
  func_0x00010bf09f00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106898b58; end: 106898e33;  */

void FUN_106898b58(long param_1,long param_2)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar10 = *(long *)(lVar13 * 8);
      lVar2 = lVar10;
      func_0x00010c24c480();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c27dd80();
      if (lVar2 == 4) {
        lVar2 = lVar3;
        func_0x00010bfb9180();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        if (lVar4 != 0) {
          lVar5 = lVar3;
          func_0x00010bfb9180();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar5;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          while (lVar2 != 0) {
            lVar12 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(lVar5);
              }
              lVar6 = *(long *)(lVar12 * 8);
              FUN_1068984a0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c08fa60();
              if (lVar7 != 0) {
                func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
              }
              _objc_release(lVar6);
              lVar12 = lVar12 + 1;
            } while (lVar2 != lVar12);
            lVar2 = lVar5;
            func_0x00010bf52a60();
          }
          _objc_release(lVar5);
        }
      }
      lVar2 = lVar10;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (lVar5 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf5b480(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        FUN_1068984a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar11);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar10);
      }
      _objc_release(lVar3);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar8);
    lVar8 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_2 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_2 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106898e34; end: 106898e7b; -[SCModularSpotlightLauncherImpl removeSpotlightScope] */

void FUN_106898e34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106898e7c; end: 106898edf; -[SCModularSpotlightLauncherImpl .cxx_destruct] */

void FUN_106898e7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106898ee0; end: 106898f33; -[SCSpotlightLaunchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106898ee0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127526f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127526f8);
  _objc_destroyWeak(param_1 + _DAT_1127526f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127526fc);
  return;
}



/* Entry: 106898f34; end: 106898ff3;  */

undefined8 FUN_106898f34(long param_1)

{
  if (param_1 < 0x4a) {
    if (param_1 == 0x14) {
      return 6;
    }
    if (param_1 == 0x42) {
      return 9;
    }
  }
  else {
    if (param_1 - 0x4aU < 3) {
      return 10;
    }
    if (param_1 == 0x68) {
      return 9;
    }
    if (param_1 == 0x51) {
      return 0xd;
    }
  }
  return 0xc;
}



/* Entry: 106898ff4; end: 10689a177; -[SCSpotlightPlaybackServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106898ff4(long param_1)

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
  long lVar35;
  long lVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined **ppuVar51;
  undefined *puVar52;
  undefined *puVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_470;
  long lStack_458;
  long lStack_440;
  long lStack_438;
  long lStack_410;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3a0;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar54 = param_1 + _DAT_112752700;
  _objc_loadWeakRetained();
  lVar1 = lVar54;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_112752714;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar54;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  lVar54 = param_1;
  FUN_10689a178();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar54;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  lVar54 = param_1;
  func_0x00010689a19c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar54;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_112752784;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar54;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  lVar54 = param_1;
  func_0x00010689a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar54;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  lVar54 = param_1;
  func_0x00010689a1e4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar54;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11275278c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar54;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_112752790;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar54;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  lVar54 = param_1;
  func_0x00010689a208();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11275274c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar55;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar55);
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uStack_3f0 = 0;
    lStack_3e8 = 0;
    uStack_3a0 = 0;
    lVar55 = 0;
  }
  else {
    uStack_3a0 = *(undefined8 *)(param_1 + _DAT_112752730);
    _objc_retain();
    lStack_3e8 = param_1 + _DAT_112752750;
    _objc_loadWeakRetained();
    uStack_3f0 = *(undefined8 *)(param_1 + _DAT_112752754);
    _objc_retain();
    lVar55 = param_1 + _DAT_112752758;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar55;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar55);
  lVar55 = param_1;
  func_0x00010689a208();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar55;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar55);
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_1127527ac;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar55;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar55);
  if (param_1 == 0) {
    lStack_410 = 0;
  }
  else {
    lStack_410 = param_1 + _DAT_1127527b0;
    _objc_loadWeakRetained();
  }
  lVar55 = param_1;
  func_0x00010689a22c();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1;
  func_0x00010689a250();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar56;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_1127527b4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar56;
  func_0x00010bfab9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  lVar56 = param_1;
  func_0x00010689a274();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar56;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  lVar56 = param_1;
  func_0x00010689a274();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar56;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  if (param_1 == 0) {
    lStack_440 = 0;
    lStack_438 = 0;
  }
  else {
    lStack_438 = param_1 + _DAT_11275276c;
    _objc_loadWeakRetained();
    lStack_440 = param_1 + _DAT_112752788;
    _objc_loadWeakRetained();
  }
  lVar56 = param_1;
  func_0x00010c293ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar56;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_112752774;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar56;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  if (param_1 == 0) {
    lStack_458 = 0;
  }
  else {
    lStack_458 = param_1 + _DAT_1127527c8;
    _objc_loadWeakRetained();
  }
  lVar56 = param_1;
  func_0x00010689a298();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar56;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  lVar56 = param_1 + _DAT_112752704;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lStack_470 = 0;
  }
  else {
    lStack_470 = param_1 + _DAT_112752734;
    _objc_loadWeakRetained();
  }
  lVar57 = param_1;
  func_0x00010689a22c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar57;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527d4;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar57;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527d8;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar57;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_112752708;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar57;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527dc;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar57;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a298();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar57;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527e0;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar57;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a19c();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar57;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar57;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527e4;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar57;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527e8;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar57;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  FUN_10689a178();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar57;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527ec;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar57;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527f0;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar57;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527f4;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar57;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a1e4();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar57;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  puVar52 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_1d0 = FUN_10689a2bc;
  puStack_1c8 = &UNK_110946348;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  lStack_1b0 = lStack_470;
  lStack_198 = lStack_3e8;
  lStack_178 = lStack_410;
  lStack_158 = lStack_440;
  lStack_150 = lStack_438;
  uStack_a0 = uStack_3a0;
  uStack_98 = uStack_3f0;
  lStack_80 = lStack_458;
  ppuVar37 = &puStack_1e0;
  lStack_1c0 = lVar1;
  lStack_1b8 = lVar2;
  lStack_1a8 = lVar7;
  lStack_1a0 = lVar10;
  lStack_190 = lVar11;
  lStack_188 = lVar12;
  lStack_180 = lVar13;
  lStack_170 = lVar14;
  lStack_168 = lVar16;
  lStack_160 = lVar17;
  lStack_148 = lVar19;
  lStack_140 = lVar56;
  lStack_138 = lVar20;
  lStack_130 = lVar21;
  lStack_128 = lVar22;
  lStack_120 = lVar23;
  lStack_118 = lVar25;
  lStack_110 = lVar24;
  lStack_108 = lVar27;
  lStack_100 = lVar28;
  lStack_f8 = lVar26;
  lStack_f0 = lVar29;
  lStack_e8 = lVar30;
  lStack_e0 = lVar31;
  lStack_d8 = lVar32;
  lStack_d0 = lVar33;
  lStack_c8 = lVar34;
  lStack_c0 = lVar35;
  lStack_b8 = lVar36;
  lStack_b0 = lVar5;
  lStack_a8 = lVar54;
  lStack_90 = lVar15;
  lStack_88 = lVar4;
  _objc_retainBlock();
  _objc_initWeak(auStack_1e8,param_1);
  puStack_260 = puVar52;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_10689a9e8;
  puStack_248 = &UNK_110946378;
  lStack_240 = lVar8;
  lStack_238 = lVar9;
  lStack_230 = lVar3;
  lStack_228 = lVar5;
  lStack_220 = lVar6;
  lStack_218 = lVar14;
  lStack_210 = lVar55;
  lStack_208 = lVar18;
  lStack_200 = lVar2;
  lStack_1f8 = lVar4;
  _objc_copyWeak(auStack_1f0,auStack_1e8);
  ppuVar38 = &puStack_260;
  _objc_retainBlock();
  puStack_288 = puVar52;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_10689ade8;
  puStack_270 = &UNK_1109463a8;
  _objc_copyWeak(auStack_268,auStack_1e8);
  ppuVar39 = &puStack_288;
  _objc_retainBlock();
  puStack_2b0 = puVar52;
  uStack_2a8 = 0xc2000000;
  uStack_2a0 = 0x10689ae28;
  puStack_298 = &UNK_1109463d8;
  puVar40 = PTR_PTR_1126ae720;
  lStack_290 = lVar6;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_508 = 0;
    uStack_500 = 0;
    lVar57 = 0;
  }
  else {
    uStack_500 = *(undefined8 *)(param_1 + _DAT_1127527c0);
    _objc_retain();
    uStack_508 = *(undefined8 *)(param_1 + _DAT_1127527c4);
    _objc_retain();
    lVar57 = param_1 + _DAT_1127527a4;
    _objc_loadWeakRetained();
  }
  lVar41 = lVar57;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_11275279c;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar57;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527a0;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar57;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527a8;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar57;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a1e4();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar57;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1 + _DAT_112752708;
  _objc_loadWeakRetained();
  lVar46 = lVar57;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1 + _DAT_11275270c;
  _objc_loadWeakRetained();
  lVar47 = lVar57;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  lVar57 = param_1;
  func_0x00010689a250();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar57;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar48;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527b8;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar57;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar57);
  if (param_1 == 0) {
    lVar57 = 0;
    param_1 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_1127527cc;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_1127527d0;
    _objc_loadWeakRetained();
  }
  puStack_368 = puVar52;
  uStack_360 = 0xc2000000;
  pcStack_358 = FUN_10689ae58;
  puStack_350 = &UNK_110946438;
  _objc_retain(ppuVar37);
  ppuStack_2c8 = ppuVar37;
  _objc_retain(ppuVar39);
  ppuStack_2c0 = ppuVar39;
  _objc_retain(ppuVar38);
  uStack_300 = uStack_500;
  uStack_2f0 = uStack_508;
  ppuVar51 = &puStack_368;
  puStack_348 = puVar40;
  lStack_340 = lVar6;
  lStack_338 = lVar50;
  lStack_330 = lVar14;
  lStack_328 = lVar41;
  lStack_320 = lVar42;
  lStack_318 = lVar43;
  lStack_310 = lVar44;
  lStack_308 = lVar45;
  lStack_2f8 = param_1;
  lStack_2e8 = lVar46;
  lStack_2e0 = lVar47;
  lStack_2d8 = lVar48;
  lStack_2d0 = lVar57;
  ppuStack_2b8 = ppuVar38;
  _objc_retainBlock(ppuVar51);
  puVar52 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar53 = PTR_PTR_1126ce9e0;
  _objc_alloc();
  func_0x00010c0544c0();
  _objc_release(puVar52);
  _objc_release(ppuVar51);
  _objc_release(ppuStack_2b8);
  _objc_release(ppuStack_2c0);
  _objc_release(ppuStack_2c8);
  _objc_release(param_1);
  _objc_release(lVar57);
  _objc_release(lVar48);
  _objc_release(lVar50);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(uStack_508);
  _objc_release(uStack_500);
  _objc_release(puVar40);
  _objc_release(ppuVar39);
  _objc_destroyWeak(auStack_268);
  _objc_release(ppuVar38);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(ppuVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar26);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lStack_470);
  _objc_release(lVar56);
  _objc_release(lVar20);
  _objc_release(lStack_458);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lStack_440);
  _objc_release(lStack_438);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar55);
  _objc_release(lStack_410);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uStack_3f0);
  _objc_release(lStack_3e8);
  _objc_release(uStack_3a0);
  _objc_release(lVar10);
  _objc_release(lVar54);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar53);
  return;
}



/* Entry: 10689a178; end: 10689a2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689a178(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275277c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689a2bc; end: 10689a727;  */

void FUN_10689a2bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_98;
  
  _objc_retain(param_6);
  if (param_5 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c14a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x58);
    uVar16 = *(undefined8 *)(param_1 + 0x50);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    uVar22 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    uVar20 = *(undefined8 *)(param_1 + 0x80);
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar10 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c258e40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072058bc(uVar13,param_2,uVar8,0,uVar1,param_3,1,param_6,0,param_4,2,0,4,0,uVar5,uVar2
                        ,uVar9,uVar16,uVar17,uVar22,uVar14,uVar3,0,uVar6,uVar20,0,uVar12,uVar15,
                        uVar4,uVar10,uVar7,0,0,*(undefined8 *)(param_1 + 0xb0),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                        *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                        *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                        *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                        *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                        *(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    goto LAB_10689a6dc;
  }
  if (param_4 < 0x4a) {
    if (param_4 == 0x14) {
      uStack_98 = 0x29;
    }
    else {
      if (param_4 == 0x42) goto LAB_10689a490;
LAB_10689a4a8:
      uStack_98 = 0;
    }
  }
  else if (param_4 == 0x4c) {
    uStack_98 = 0x1f;
  }
  else if (param_4 == 0x4b) {
    uStack_98 = 0x1e;
  }
  else {
    if (param_4 != 0x4a) goto LAB_10689a4a8;
LAB_10689a490:
    uStack_98 = 0x1d;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar15 = *(undefined8 *)(param_1 + 0x140);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x148);
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  lVar11 = param_4;
  func_0x000106898f94();
  uVar24 = *(undefined8 *)(param_1 + 0x80);
  uVar23 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  uVar20 = *(undefined8 *)(param_1 + 0x158);
  uVar21 = *(undefined8 *)(param_1 + 0x130);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar22 = *(undefined8 *)(param_1 + 0x98);
  uVar19 = *(undefined8 *)(param_1 + 0x160);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107204770(uVar13,param_2,uVar8,0,0,param_3,0,param_4,2,0,4,0,uVar9,0,uVar14,uVar1,uVar5,
                      uVar15,uVar10,0,uVar16,0,uVar18,uVar2,uVar6,uVar17,lVar11,0,uVar3,uStack_98,0,
                      uVar23,uVar24,uVar20,uVar21,uVar4,0,uVar22,uVar19,uVar7,uVar12,0,0,
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar12);
LAB_10689a6dc:
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return;
}



/* Entry: 10689a728; end: 10689a9e7;  */

void FUN_10689a728(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
  _objc_retain(*(undefined8 *)(param_2 + 0xa8));
  _objc_retain(*(undefined8 *)(param_2 + 0xb0));
  _objc_retain(*(undefined8 *)(param_2 + 0xb8));
  _objc_retain(*(undefined8 *)(param_2 + 0xc0));
  _objc_retain(*(undefined8 *)(param_2 + 200));
  _objc_retain(*(undefined8 *)(param_2 + 0xd0));
  _objc_retain(*(undefined8 *)(param_2 + 0xd8));
  _objc_retain(*(undefined8 *)(param_2 + 0xe0));
  _objc_retain(*(undefined8 *)(param_2 + 0xe8));
  _objc_retain(*(undefined8 *)(param_2 + 0xf0));
  _objc_retain(*(undefined8 *)(param_2 + 0xf8));
  _objc_retain(*(undefined8 *)(param_2 + 0x100));
  _objc_retain(*(undefined8 *)(param_2 + 0x108));
  _objc_retain(*(undefined8 *)(param_2 + 0x110));
  _objc_retain(*(undefined8 *)(param_2 + 0x118));
  _objc_retain(*(undefined8 *)(param_2 + 0x120));
  _objc_retain(*(undefined8 *)(param_2 + 0x128));
  _objc_retain(*(undefined8 *)(param_2 + 0x130));
  _objc_retain(*(undefined8 *)(param_2 + 0x138));
  _objc_retain(*(undefined8 *)(param_2 + 0x140));
  _objc_retain(*(undefined8 *)(param_2 + 0x148));
  _objc_retain(*(undefined8 *)(param_2 + 0x150));
  _objc_retain(*(undefined8 *)(param_2 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x160));
  return;
}



/* Entry: 10689a9e8; end: 10689ade7;  */

void FUN_10689a9e8(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x00010befa120(puVar2);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf57b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000106898f94(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar12 = param_5 - 1;
  uVar1 = (uint)(uVar12 < 8) & 0x9fU >> (ulong)((uint)uVar12 & 0x1f);
  if (uVar1 == 1) {
    puVar13 = (&PTR_PTR_110946498)[uVar12];
    _objc_retain(puVar13);
    puVar14 = puVar13;
  }
  else {
    _objc_retain(0);
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)0x0;
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c1554e0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (uVar1 == 0) {
    _objc_release(puVar13);
  }
  _objc_release(puVar14);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ce9c0;
  _objc_alloc(PTR_PTR_1126ce9c0);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106898f34();
  func_0x00010c04a7a0(puVar6);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar6);
  _objc_release(uVar10);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc7520();
  _objc_release(param_1);
  puVar7 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar2 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar2);
    puVar7 = puVar2;
    func_0x00010bdf0500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10689ade8; end: 10689ae57;  */

void FUN_10689ade8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10689ae58; end: 10689af4b;  */

void FUN_10689ae58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae720;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10689af4c;
  puStack_d0 = &UNK_110946408;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_c0 = *(undefined8 *)(param_1 + 0x28);
  uStack_c8 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = *(undefined8 *)(param_1 + 0x58);
  uStack_98 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = *(undefined8 *)(param_1 + 0x68);
  uStack_88 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = *(undefined8 *)(param_1 + 0x98);
  uStack_58 = *(undefined8 *)(param_1 + 0x90);
  uStack_38 = uVar2;
  func_0x00010bf11fe0(puVar1,param_2,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10689af4c; end: 10689b057;  */

void FUN_10689af4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar8 = PTR_PTR_1126ce9d0;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c150760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c150760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d2a0(puVar8,param_2,uVar1,uVar6,uVar12,uVar2,uVar7,uVar3,uVar9,uVar15,uVar16,uVar13
                      ,uVar14,uVar4,uVar10,uVar5,uVar11,*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98));
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10689b058; end: 10689b203;  */

void FUN_10689b058(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),7);
  __Block_object_assign(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0),7);
  return;
}



/* Entry: 10689b204; end: 10689b6f3; -[SCSpotlightPlaybackServiceProvider _createMyStoriesManagementPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689b204(long param_1)

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
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  
  lVar1 = param_1 + _DAT_112752700;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112752710;
  lVar3 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112752714;
  lVar5 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar9 = lVar44;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar11 = lVar43;
  func_0x00010c0ff720();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112752718);
  uVar38 = *(undefined8 *)(param_1 + _DAT_11275271c);
  lVar13 = param_1 + _DAT_112752720;
  _objc_loadWeakRetained();
  uVar41 = *(undefined8 *)(param_1 + _DAT_112752724);
  uVar39 = *(undefined8 *)(param_1 + _DAT_112752728);
  uVar42 = *(undefined8 *)(param_1 + _DAT_11275272c);
  uVar40 = *(undefined8 *)(param_1 + _DAT_112752730);
  lVar14 = param_1 + _DAT_112752734;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112752738;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11275273c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112752740;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112752744;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112752748;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11275274c;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112752750;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112752758;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_1127527f8;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_1127527bc;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112752760;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112752764;
  _objc_loadWeakRetained();
  lVar36 = lVar2;
  FUN_1071e1228(lVar2,&PTR____CFConstantStringClassReference_110e43098,3,0,lVar4,lVar6,lVar8,lVar10,
                lVar12,uVar37,uVar38,lVar13,0,0,uVar41,0,uVar39,uVar42,uVar40,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar35);
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
  _objc_release(lVar43);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar44);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar36);
  return;
}



/* Entry: 10689b6f4; end: 10689b76b; -[SCSpotlightPlaybackServiceProvider _addLoggingPluginToPlaylistPluginIfNecessary:storyLoggingOperaPlugin:viewLocation:] */

void FUN_10689b6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106898f34();
  if ((param_5 < 0xe) && ((1L << (param_5 & 0x3f) & 0x2640U) != 0)) {
    func_0x00010befa120(param_3,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10689b76c; end: 10689b78b; -[SCSpotlightPlaybackServiceProvider userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689b76c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689b78c; end: 10689b79f; -[SCSpotlightPlaybackServiceProvider setUserStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689b78c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752768,param_3);
  return;
}



/* Entry: 10689b7a0; end: 10689bad7; -[SCSpotlightPlaybackServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689b7a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127527f8);
  _objc_destroyWeak(param_1 + _DAT_1127527f4);
  _objc_destroyWeak(param_1 + _DAT_1127527f0);
  _objc_destroyWeak(param_1 + _DAT_1127527ec);
  _objc_destroyWeak(param_1 + _DAT_1127527e8);
  _objc_destroyWeak(param_1 + _DAT_1127527e4);
  _objc_destroyWeak(param_1 + _DAT_1127527e0);
  _objc_destroyWeak(param_1 + _DAT_1127527dc);
  _objc_destroyWeak(param_1 + _DAT_1127527d8);
  _objc_destroyWeak(param_1 + _DAT_1127527d4);
  _objc_destroyWeak(param_1 + _DAT_1127527d0);
  _objc_destroyWeak(param_1 + _DAT_1127527cc);
  _objc_destroyWeak(param_1 + _DAT_112752704);
  _objc_destroyWeak(param_1 + _DAT_1127527c8);
  _objc_storeStrong(param_1 + _DAT_1127527c4,0);
  _objc_storeStrong(param_1 + _DAT_112752754,0);
  _objc_storeStrong(param_1 + _DAT_1127527c0,0);
  _objc_storeStrong(param_1 + _DAT_112752730,0);
  _objc_storeStrong(param_1 + _DAT_11275272c,0);
  _objc_storeStrong(param_1 + _DAT_112752728,0);
  _objc_storeStrong(param_1 + _DAT_112752724,0);
  _objc_destroyWeak(param_1 + _DAT_112752720);
  _objc_storeStrong(param_1 + _DAT_11275271c,0);
  _objc_storeStrong(param_1 + _DAT_112752718,0);
  _objc_destroyWeak(param_1 + _DAT_1127527bc);
  _objc_destroyWeak(param_1 + _DAT_1127527b8);
  _objc_destroyWeak(param_1 + _DAT_1127527b4);
  _objc_destroyWeak(param_1 + _DAT_11275270c);
  _objc_destroyWeak(param_1 + _DAT_112752708);
  _objc_destroyWeak(param_1 + _DAT_112752758);
  _objc_destroyWeak(param_1 + _DAT_112752750);
  _objc_destroyWeak(param_1 + _DAT_1127527b0);
  _objc_destroyWeak(param_1 + _DAT_1127527ac);
  _objc_destroyWeak(param_1 + _DAT_1127527a8);
  _objc_destroyWeak(param_1 + _DAT_1127527a4);
  _objc_destroyWeak(param_1 + _DAT_1127527a0);
  _objc_destroyWeak(param_1 + _DAT_11275279c);
  _objc_destroyWeak(param_1 + _DAT_112752798);
  _objc_destroyWeak(param_1 + _DAT_112752794);
  _objc_destroyWeak(param_1 + _DAT_112752790);
  _objc_destroyWeak(param_1 + _DAT_11275278c);
  _objc_destroyWeak(param_1 + _DAT_112752788);
  _objc_destroyWeak(param_1 + _DAT_112752748);
  _objc_destroyWeak(param_1 + _DAT_112752744);
  _objc_destroyWeak(param_1 + _DAT_112752740);
  _objc_destroyWeak(param_1 + _DAT_11275273c);
  _objc_destroyWeak(param_1 + _DAT_112752784);
  _objc_destroyWeak(param_1 + _DAT_112752780);
  _objc_destroyWeak(param_1 + _DAT_11275277c);
  _objc_destroyWeak(param_1 + _DAT_11275274c);
  _objc_destroyWeak(param_1 + _DAT_112752710);
  _objc_destroyWeak(param_1 + _DAT_112752738);
  _objc_destroyWeak(param_1 + _DAT_112752778);
  _objc_destroyWeak(param_1 + _DAT_112752774);
  _objc_destroyWeak(param_1 + _DAT_112752770);
  _objc_destroyWeak(param_1 + _DAT_11275276c);
  _objc_destroyWeak(param_1 + _DAT_112752714);
  _objc_destroyWeak(param_1 + _DAT_112752700);
  _objc_destroyWeak(param_1 + _DAT_112752768);
  _objc_destroyWeak(param_1 + _DAT_112752734);
  _objc_destroyWeak(param_1 + _DAT_112752764);
  _objc_destroyWeak(param_1 + _DAT_112752760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275275c);
  return;
}



/* Entry: 10689bad8; end: 10689bb4b; -[SCStoriesTopicReportManagerImpl initWithSafetyReportScopeExposer:] */

undefined1 * FUN_10689bad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3a48;
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



/* Entry: 10689bb4c; end: 10689bccb; -[SCStoriesTopicReportManagerImpl reportTopicSnap:presentingViewController:viewLocation:] */

void FUN_10689bb4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010bf0e700(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10689bccc;
    puStack_70 = &UNK_1109464d8;
    _objc_retain(param_3);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10689bcd0;
    puStack_98 = &UNK_110946508;
    lStack_68 = param_3;
    _objc_retain(param_3);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10689bcd4;
    puStack_d0 = &UNK_110946538;
    lStack_90 = param_3;
    _objc_retain(param_4);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10689be0c;
    puStack_f8 = &UNK_110946568;
    uStack_c8 = param_4;
    uStack_c0 = param_1;
    uStack_b8 = param_5;
    _objc_retain(param_3);
    lStack_f0 = param_3;
    func_0x00010c0c1340(lVar2,param_2,&puStack_88,&puStack_b0,&puStack_e8,&puStack_110,0,0);
    _objc_release(lVar2);
    _objc_release(lStack_f0);
    _objc_release(uStack_c8);
    _objc_release(lStack_90);
    _objc_release(lStack_68);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10689bccc; end: 10689bcd3;  */

void FUN_10689bccc(void)

{
  return;
}



/* Entry: 10689bcd4; end: 10689be0b;  */

void FUN_10689bcd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ce9e8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2751c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c047e80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  puVar6 = PTR_PTR_1126b2e98;
  func_0x00010c275740(PTR_PTR_1126b2e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058840(puVar5);
  _objc_release(puVar6);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10689be0c; end: 10689be0f;  */

void FUN_10689be0c(void)

{
  return;
}



/* Entry: 10689be10; end: 10689be57; -[SCStoriesTopicReportManagerImpl reportDidCompleteWithCancelled:] */

void FUN_10689be10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10689be58; end: 10689be63; -[SCStoriesTopicReportManagerImpl .cxx_destruct] */

void FUN_10689be58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689be64; end: 10689be7b; -[SCSpotlightShareDataProvider spotlightShareDataDelegate] */

void FUN_10689be64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689be7c; end: 10689be87; -[SCSpotlightShareDataProvider setSpotlightShareDataDelegate:] */

void FUN_10689be7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10689be88; end: 10689be8f; -[SCSpotlightShareDataProvider .cxx_destruct] */

void FUN_10689be88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10689be90; end: 10689c15b; -[SCSpotlightSharePlatformAnalyticsCreator createPlatformAnalyticsWithDestinationInfo:sessionId:viewLocation:storyId:storySnapId:creatorId:storyViewId:discoverFeedPageSessionId:streamId:isForwardMessage:shareId:sendUiType:] */

void FUN_10689be90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0820(puVar1,param_2,param_12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac2e0(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b8260(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8280(puVar1,param_2,param_15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126be938;
  _objc_alloc(PTR_PTR_1126be938);
  func_0x000108534aa8();
  func_0x00010c04dc60(puVar2,param_2,param_6,param_7,0xf,0x1d,0,param_8,param_9,2,param_5,param_10,
                      param_11,param_6,0x17,0,param_14);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c2aaec0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10689c15c; end: 10689c42b; -[SCSpotlightSharingServiceProvider provide] */

void FUN_10689c15c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10689c42c;
  puStack_90 = &UNK_110946598;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10689c46c;
  puStack_b8 = &UNK_1109465c8;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x10689c4ac;
  puStack_e0 = &UNK_1109465f8;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar5;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10689c4ec;
  puStack_108 = &UNK_110946628;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ce9f0;
  _objc_alloc(PTR_PTR_1126ce9f0);
  func_0x00010c04b5e0();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10689c42c; end: 10689c56b;  */

void FUN_10689c42c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10689c56c; end: 10689caaf; -[SCSpotlightSharingServiceProvider _createSpotlightToStoriesPoster] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689c56c(long param_1,undefined8 param_2)

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
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  
  puVar1 = PTR_PTR_1126beca0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752804;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112752808;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c046840(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ce9f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275280c;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112752810;
  _objc_loadWeakRetained();
  lVar7 = lVar4;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112752814;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112752818;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c08ef00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275281c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c2431e0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112752820;
  lVar13 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c243b00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112752824;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0c4860();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112752828;
  lVar17 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11275282c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112752830;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112752834;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112752838;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf4d060();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11275283c;
  _objc_loadWeakRetained();
  lVar30 = param_1 + _DAT_112752840;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar32 = lVar43;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112752844;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112752848;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11275284c;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar39 = lVar44;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112752850;
  _objc_loadWeakRetained();
  lVar41 = param_1 + _DAT_112752854;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112752858;
  _objc_loadWeakRetained();
  lVar42 = param_1;
  func_0x00010c0dc280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d8e0(puVar5,param_2,lVar6,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,lVar20,
                      lVar22,lVar26,lVar28,lVar29,lVar31,puVar1,lVar32,lVar34,lVar36,lVar38,lVar39,
                      lVar40,lVar41,lVar42);
  _objc_release(lVar42);
  _objc_release(param_1);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar44);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar43);
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
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10689cab0; end: 10689ce33; -[SCSpotlightSharingServiceProvider _createSpotlightShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689cab0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126beca0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752804;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112752808;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c046840(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126cea00;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275285c;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275280c;
  _objc_loadWeakRetained();
  lVar7 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112752810;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112752814;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112752818;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c08ef00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112752860;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112752834;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112752838;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf4d060();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11275283c;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_112752840;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112752864;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112752828;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752854;
  _objc_loadWeakRetained();
  func_0x00010c051b00(puVar5,param_2,lVar6,lVar7,lVar8,lVar10,lVar12,lVar14,lVar18,lVar20,lVar21,
                      lVar23,puVar1,lVar25,lVar27,param_1);
  _objc_release(param_1);
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
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10689ce34; end: 10689ceaf; -[SCSpotlightSharingServiceProvider _createSpotlightShareUIProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689ce34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cea08;
  _objc_alloc(PTR_PTR_1126cea08);
  param_1 = param_1 + _DAT_112752868;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e60(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10689ceb0; end: 10689cecb; -[SCSpotlightSharingServiceProvider _createSpotlightPlatformAnalyticsCreator] */

void FUN_10689ceb0(void)

{
  _objc_alloc_init(PTR_PTR_1126cea10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689cecc; end: 10689cee7; -[SCSpotlightSharingServiceProvider _createSpotlightShareDataProvider] */

void FUN_10689cecc(void)

{
  _objc_alloc_init(PTR_PTR_1126cea18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689cee8; end: 10689d04b; -[SCSpotlightSharingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689cee8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752808);
  _objc_destroyWeak(param_1 + _DAT_112752854);
  _objc_destroyWeak(param_1 + _DAT_112752858);
  _objc_destroyWeak(param_1 + _DAT_112752850);
  _objc_destroyWeak(param_1 + _DAT_112752844);
  _objc_destroyWeak(param_1 + _DAT_11275284c);
  _objc_destroyWeak(param_1 + _DAT_112752848);
  _objc_destroyWeak(param_1 + _DAT_112752830);
  _objc_destroyWeak(param_1 + _DAT_11275282c);
  _objc_destroyWeak(param_1 + _DAT_112752824);
  _objc_destroyWeak(param_1 + _DAT_112752820);
  _objc_destroyWeak(param_1 + _DAT_11275281c);
  _objc_destroyWeak(param_1 + _DAT_112752828);
  _objc_destroyWeak(param_1 + _DAT_112752864);
  _objc_destroyWeak(param_1 + _DAT_112752804);
  _objc_destroyWeak(param_1 + _DAT_112752840);
  _objc_destroyWeak(param_1 + _DAT_11275283c);
  _objc_destroyWeak(param_1 + _DAT_112752838);
  _objc_destroyWeak(param_1 + _DAT_112752814);
  _objc_destroyWeak(param_1 + _DAT_112752834);
  _objc_destroyWeak(param_1 + _DAT_112752860);
  _objc_destroyWeak(param_1 + _DAT_112752868);
  _objc_destroyWeak(param_1 + _DAT_112752810);
  _objc_destroyWeak(param_1 + _DAT_112752818);
  _objc_destroyWeak(param_1 + _DAT_11275285c);
  _objc_destroyWeak(param_1 + _DAT_11275280c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275286c);
  return;
}



/* Entry: 10689d04c; end: 10689d057; -[SCFeatureSettingsService hasSpotlightStoryShareAlertAccepted] */

void FUN_10689d04c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e63c78);
  return;
}



/* Entry: 10689d058; end: 10689d063; -[SCFeatureSettingsService spotlightStoryShareAlertAcceptedServerParam] */

undefined ** FUN_10689d058(void)

{
  return &PTR____CFConstantStringClassReference_110e63c78;
}



/* Entry: 10689d064; end: 10689d073; -[SCFeatureSettingsService setSpotlightStoryShareAlertAccepted:] */

void FUN_10689d064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e63c78,param_3);
  return;
}



/* Entry: 10689d074; end: 10689d07b; -[SCFeatureSettingsService SPOTLIGHT_STORY_SHARE_ALERT_ACCEPTED_client_value:] */

undefined * FUN_10689d074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10689d07c; end: 10689d083; -[SCFeatureSettingsService SPOTLIGHT_STORY_SHARE_ALERT_ACCEPTED_server_value:] */

void FUN_10689d07c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10689d084; end: 10689d093; -[SCFeatureSettingsService spotlightStoryShareAlertAccepted] */

void FUN_10689d084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e63c78,0);
  return;
}



/* Entry: 10689d094; end: 10689d10b; -[SCSpotlightStoryPostingState init] */

undefined1 * FUN_10689d094(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3a50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10689d10c; end: 10689d153; -[SCSpotlightStoryPostingState addClientId:] */

void FUN_10689d10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10689d154; end: 10689d15b; -[SCSpotlightStoryPostingState removeClientId:] */

void FUN_10689d154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 10689d15c; end: 10689d197; -[SCSpotlightStoryPostingState cancelAndRemoveWorkItem] */

void FUN_10689d15c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10689d198; end: 10689d1b7; -[SCSpotlightStoryPostingState hasClientIds] */

bool FUN_10689d198(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 10689d1b8; end: 10689d1bf; -[SCSpotlightStoryPostingState clientIds] */

undefined8 FUN_10689d1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10689d1c0; end: 10689d1c7; -[SCSpotlightStoryPostingState repostState] */

undefined8 FUN_10689d1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689d1c8; end: 10689d1cf; -[SCSpotlightStoryPostingState setRepostState:] */

void FUN_10689d1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10689d1d0; end: 10689d1d7; -[SCSpotlightStoryPostingState workItem] */

undefined8 FUN_10689d1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10689d1d8; end: 10689d1df; -[SCSpotlightStoryPostingState setWorkItem:] */

void FUN_10689d1d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10689d1e0; end: 10689d20f; -[SCSpotlightStoryPostingState .cxx_destruct] */

void FUN_10689d1e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689d210; end: 10689d4d3; -[SCSpotlightPostToStoryParams initWithSnapDoc:snapDocKey:mediaQualityType:conversations:massSnapRecipients:stories:phoneNumbers:incidentalAttachments:snapSendInfo:messagingLocalMediaReferences:externalContentMetadata:localMessageContentMetadata:localPlatformData:] */

undefined8 *
FUN_10689d210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  puStack_68 = PTR_PTR_1126f3a58;
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
    puVar1[3] = param_5;
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
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10689d4d4; end: 10689d4db; -[SCSpotlightPostToStoryParams snapDoc] */

undefined8 FUN_10689d4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10689d4dc; end: 10689d4e3; -[SCSpotlightPostToStoryParams snapDocKey] */

undefined8 FUN_10689d4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689d4e4; end: 10689d4eb; -[SCSpotlightPostToStoryParams mediaQualityType] */

undefined8 FUN_10689d4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10689d4ec; end: 10689d4f3; -[SCSpotlightPostToStoryParams conversations] */

undefined8 FUN_10689d4ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10689d4f4; end: 10689d4fb; -[SCSpotlightPostToStoryParams massSnapRecipients] */

undefined8 FUN_10689d4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10689d4fc; end: 10689d503; -[SCSpotlightPostToStoryParams stories] */

undefined8 FUN_10689d4fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10689d504; end: 10689d50b; -[SCSpotlightPostToStoryParams phoneNumbers] */

undefined8 FUN_10689d504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10689d50c; end: 10689d513; -[SCSpotlightPostToStoryParams incidentalAttachments] */

undefined8 FUN_10689d50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10689d514; end: 10689d51b; -[SCSpotlightPostToStoryParams snapSendInfo] */

undefined8 FUN_10689d514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10689d51c; end: 10689d523; -[SCSpotlightPostToStoryParams messagingLocalMediaReferences] */

undefined8 FUN_10689d51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10689d524; end: 10689d52b; -[SCSpotlightPostToStoryParams externalContentMetadata] */

undefined8 FUN_10689d524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10689d52c; end: 10689d533; -[SCSpotlightPostToStoryParams localMessageContentMetadata] */

undefined8 FUN_10689d52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10689d534; end: 10689d53b; -[SCSpotlightPostToStoryParams localPlatformData] */

undefined8 FUN_10689d534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10689d53c; end: 10689d5e3; -[SCSpotlightPostToStoryParams .cxx_destruct] */

void FUN_10689d53c(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689d5e4; end: 10689d687; -[SCStoriesDeletingSnap initWithClientId:spotlightStoryId:] */

undefined1 *
FUN_10689d5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3a60;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10689d688; end: 10689d68f; -[SCStoriesDeletingSnap clientId] */

undefined8 FUN_10689d688(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10689d690; end: 10689d697; -[SCStoriesDeletingSnap spotlightStoryId] */

undefined8 FUN_10689d690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689d698; end: 10689d6c7; -[SCStoriesDeletingSnap .cxx_destruct] */

void FUN_10689d698(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689d6c8; end: 10689d76b; -[SCSpotlightShareLensMetadataBuilder initWithSimpleContentFetcher:bitmojiFetchServices:] */

undefined1 *
FUN_10689d6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3a68;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10689d76c; end: 10689dbfb; -[SCSpotlightShareLensMetadataBuilder buildLensMetadataWithMediaMetadata:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:completion:] */

void FUN_10689d76c(undefined *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  long param_6,long param_7,int param_8,long param_9,long param_10)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c4bc0();
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0c4bc0(param_3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((long)((double)(uVar2 & 0xffffffff) / 1000.0),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar4 = param_9;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_8 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar4 = param_5;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_6;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      lVar4 = param_7;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        func_0x00010bfe7720();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        if (lVar4 != 0) {
          puVar3 = PTR_PTR_1126b58e0;
          _objc_opt_new();
          func_0x00010c2a8ea0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2bae20(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b78c0(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010bfe7720();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = 0x15;
          _dispatch_get_global_queue(0x15,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar1);
          _objc_retain(param_6);
          _objc_retain(param_7);
          _objc_retain(param_10);
          func_0x00010bfa5420(uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar5);
          _objc_release(uVar8);
          _objc_release(param_10);
          _objc_release(param_7);
          _objc_release(param_6);
          _objc_release(puVar1);
          _objc_release(puVar7);
          param_1 = puVar3;
          goto LAB_10689db98;
        }
      }
    }
    func_0x00010bdd6580(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_10 + 0x10))(param_10,param_1);
  }
  else {
    puVar3 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(param_10);
    func_0x00010c13e600(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_10);
    _objc_release(puVar1);
    _objc_release(puVar7);
    param_1 = puVar3;
  }
LAB_10689db98:
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10689dbfc; end: 10689dcfb;  */

void FUN_10689dbfc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((puVar2 != (undefined *)0x0) &&
       (puVar3 = puVar2, func_0x00010c08fa60(), puVar3 != (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        func_0x00010bdce700(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd6580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10689dcfc; end: 10689dd5b;  */

void FUN_10689dcfc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x00010bdce700(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                        *(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110dec718);
  }
  lVar2 = *(long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd6580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10689dd5c; end: 10689de6f; -[SCSpotlightShareLensMetadataBuilder _applyProfileLogoImage:toLaunchParams:errorContext:] */

void FUN_10689dd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010be0dc20(param_1,param_2,param_3,&uStack_38,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf15da0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,lVar1,&PTR____CFConstantStringClassReference_110e63cf8);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,puVar2,&PTR____CFConstantStringClassReference_110e63d18);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,puVar2,&PTR____CFConstantStringClassReference_110e63d38);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 10689de70; end: 10689e0b7; -[SCSpotlightShareLensMetadataBuilder _extractRawRGBADataFromImage:width:height:] */

void FUN_10689de70(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong *param_4,
                  ulong *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar5 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (puVar5 == (undefined *)0x0) {
    puVar7 = param_3;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
    if (puVar7 == (undefined *)0x0) goto LAB_10689e090;
    puVar7 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bdc10e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bdc10e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9de20();
    puVar5 = puVar7;
    func_0x00010bf54e00();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      goto LAB_10689e090;
    }
  }
  puVar7 = puVar5;
  _CGImageGetWidth();
  puVar1 = puVar5;
  _CGImageGetHeight();
  if (((undefined *)0x80 < puVar7) || ((undefined *)0x80 < puVar1)) {
    puVar4 = puVar7;
    if (puVar7 <= puVar1) {
      puVar4 = puVar1;
    }
    puVar7 = (undefined *)(long)((128.0 / (double)puVar4) * (double)puVar7);
    puVar1 = (undefined *)(long)((128.0 / (double)puVar4) * (double)puVar1);
  }
  if (puVar7 < (undefined *)0x2) {
    puVar7 = (undefined *)0x1;
  }
  if (puVar1 < (undefined *)0x2) {
    puVar1 = (undefined *)0x1;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = (ulong)puVar7;
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = (ulong)puVar1;
  }
  lVar6 = (long)puVar7 * 4 * (long)puVar1;
  _calloc(lVar6,1);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    _CGColorSpaceCreateDeviceRGB();
    lVar3 = lVar6;
    _CGBitmapContextCreate(lVar6,puVar7,puVar1,8,(long)puVar7 * 4,lVar2,0x4001);
    _CGColorSpaceRelease(lVar2);
    if (lVar3 != 0) {
      _CGContextSetInterpolationQuality(lVar3,3);
      _CGContextClearRect(0,0,(double)puVar7,(double)puVar1,lVar3);
      _CGContextDrawImage(0,0,(double)puVar7,(double)puVar1,lVar3,puVar5);
      _CGContextRelease(lVar3);
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10689e090;
    }
    _free(lVar6);
  }
  puVar5 = (undefined *)0x0;
LAB_10689e090:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10689e0b8; end: 10689e1bf; -[SCSpotlightShareLensMetadataBuilder _buildMetadataWithLaunchParams:] */

void FUN_10689e0b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&lStack_48
                       );
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_48 == 0) && (puVar5 = puVar2, func_0x00010c08fa60(), puVar5 != (undefined *)0x0)) {
      puVar5 = PTR_PTR_1126b37e0;
      _objc_opt_new(PTR_PTR_1126b37e0);
      puVar3 = PTR_PTR_1126b3848;
      _objc_opt_new(PTR_PTR_1126b3848);
      puVar4 = PTR_PTR_1126cea20;
      _objc_opt_new(PTR_PTR_1126cea20);
      func_0x00010c1b6960();
      func_0x00010c1ad5a0(puVar3,param_2,puVar4);
      func_0x00010c1bc1e0(puVar5,param_2,puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10689e1c0; end: 10689e1ef; -[SCSpotlightShareLensMetadataBuilder .cxx_destruct] */

void FUN_10689e1c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689e1f0; end: 10689e1f7; -[SCSpotlightShareSenderPrefetchResult ephemeralMedia] */

undefined8 FUN_10689e1f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10689e1f8; end: 10689e227; -[SCSpotlightShareSenderPrefetchResult setEphemeralMedia:] */

void FUN_10689e1f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10689e228; end: 10689e22f; -[SCSpotlightShareSenderPrefetchResult spotlightSnapDoc] */

undefined8 FUN_10689e228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689e230; end: 10689e25f; -[SCSpotlightShareSenderPrefetchResult setSpotlightSnapDoc:] */

void FUN_10689e230(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10689e260; end: 10689e28f; -[SCSpotlightShareSenderPrefetchResult .cxx_destruct] */

void FUN_10689e260(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10689e290; end: 10689e297; -[SCSpotlightAttributionFetchState creatorName] */

undefined8 FUN_10689e290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689e298; end: 10689e29f; -[SCSpotlightAttributionFetchState setCreatorName:] */

void FUN_10689e298(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10689e2a0; end: 10689e2a7; -[SCSpotlightAttributionFetchState creatorLogoUrl] */

undefined8 FUN_10689e2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10689e2a8; end: 10689e2af; -[SCSpotlightAttributionFetchState setCreatorLogoUrl:] */

void FUN_10689e2a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10689e2b0; end: 10689e2b7; -[SCSpotlightAttributionFetchState shouldShowCreatorBadge] */

undefined1 FUN_10689e2b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10689e2b8; end: 10689e2bf; -[SCSpotlightAttributionFetchState setShouldShowCreatorBadge:] */

void FUN_10689e2b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10689e2c0; end: 10689e2c7; -[SCSpotlightAttributionFetchState creatorBitmojiAvatarId] */

undefined8 FUN_10689e2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


