/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085618e8; end: 10856191b;  */

void FUN_1085618e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085618f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10856191c; end: 108561973; -[SnapVideoFilter _audioAssetFromData:] */

void FUN_10856191c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0082a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108561974; end: 108561b33; -[SnapVideoFilter _compositedAVAssetForSVFAudioAssets:] */

void FUN_108561974(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    uStack_58 = 0x108559598;
    uStack_50 = 0x1085595a8;
    uStack_48 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3810000000;
    pcStack_90 = "";
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_88 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _objc_retain();
    func_0x00010bf97e80(param_3);
    if (puStack_68[5] == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_a8,8);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108561b34; end: 108561ddf;  */

void FUN_108561b34(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 8);
  }
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar6);
    func_0x00010bdd1100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar4 = lVar5;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      if (param_2 == 0) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
      }
      else {
        uStack_78 = *(ulong *)(param_2 + 0x18);
        uStack_80 = *(undefined8 *)(param_2 + 0x10);
        uStack_70 = *(undefined8 *)(param_2 + 0x20);
      }
      func_0x00010c26f620(&uStack_b0,lVar1);
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_c0 = uStack_88;
      _CMTimeMinimum(&uStack_68,&uStack_80,&uStack_d0);
      func_0x00010c26f620(&uStack_b0,lVar1);
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_c0 = uStack_88;
      uStack_e8 = uStack_60;
      uStack_f0 = uStack_68;
      uStack_e0 = uStack_58;
      _CMTimeSubtract(&uStack_80,&uStack_d0,&uStack_f0);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_a0 = uStack_70;
      uStack_c8 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar2 = &uStack_b0;
      _CMTimeCompare(puVar2,&uStack_d0);
      if (((int)puVar2 != 0) && ((uStack_78 & 0x100000000) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        uStack_c8 = uStack_60;
        uStack_d0 = uStack_68;
        uStack_c0 = uStack_58;
        uStack_e8 = uStack_78;
        uStack_f0 = uStack_80;
        uStack_e0 = uStack_70;
        _CMTimeRangeMake(&uStack_b0,&uStack_d0,&uStack_f0);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uStack_f8 = *(undefined8 *)(lVar7 + 0x28);
        uStack_c8 = *(undefined8 *)(lVar4 + 0x28);
        uStack_d0 = *(undefined8 *)(lVar4 + 0x20);
        uStack_c0 = *(undefined8 *)(lVar4 + 0x30);
        func_0x00010c067160(uVar6);
        uVar6 = uStack_f8;
        _objc_retain(uStack_f8);
        uVar3 = *(undefined8 *)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x28) = uVar6;
        _objc_release(uVar3);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uStack_a8 = *(ulong *)(lVar4 + 0x28);
        uStack_b0 = *(undefined8 *)(lVar4 + 0x20);
        uStack_a0 = *(undefined8 *)(lVar4 + 0x30);
        uStack_c8 = uStack_78;
        uStack_d0 = uStack_80;
        uStack_c0 = uStack_70;
        _CMTimeAdd(&uStack_110,&uStack_b0,&uStack_d0);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        *(undefined8 *)(lVar4 + 0x28) = uStack_108;
        *(undefined8 *)(lVar4 + 0x20) = uStack_110;
        *(undefined8 *)(lVar4 + 0x30) = uStack_100;
      }
    }
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108561de0; end: 108561f87; -[SnapVideoFilter _imageProcessCommandsInfo] */

void FUN_108561de0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar10 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + 0x330);
  _objc_retain(lVar12);
  puVar11 = auStack_e8;
  lVar2 = lVar12;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar12);
        }
        lVar13 = *(long *)(lStack_128 + lVar15 * 8);
        lVar3 = lVar13;
        func_0x00010bf41ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bf41ce0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar1);
          _objc_release(lVar13);
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      puVar11 = auStack_e8;
      lVar2 = lVar12;
      ppuVar10 = &puStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar12);
  ppuVar5 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110db3ed8;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar10);
    _objc_retain(puVar11);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar10;
    func_0x00010911c960(ppuVar10,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (ppuVar1 != (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(ppuVar5);
        }
        if (*(long *)((long)ppuVar16 * 8) == 0) {
          puVar17 = (undefined1 *)0xfffffffffffffffc;
LAB_1085620b0:
          puVar7 = puVar11;
          func_0x00010bf529e0();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar17 < puVar7) {
            puVar17 = puVar11;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar17 == (undefined1 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined4 *)(puVar17 + 8);
            }
            func_0x00010c0df740(uVar18,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar17);
          }
        }
        else {
          lVar14 = *(long *)(*(long *)((long)ppuVar16 * 8) + 0x10);
          if ((lVar14 != 3) && (lVar14 != 2)) {
            puVar17 = (undefined1 *)(lVar14 + -4);
            goto LAB_1085620b0;
          }
          func_0x00010c1d0640(puVar6);
        }
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar1 != ppuVar16);
      ppuVar1 = ppuVar5;
      func_0x00010bf52a60();
    }
    ppuVar1 = ppuVar10;
    func_0x000109122100(ppuVar10,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      ppuVar5 = (undefined **)PTR_PTR_1126c4a90;
      func_0x00010af23194();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010af231e4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af23228();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af2326c();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af231b4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af232b0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af232f4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af2338c();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af233e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (ppuVar1 == (undefined **)0x0) {
        _objc_release();
        func_0x00010af23424(0,ppuVar10[0x47]);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af234ac(0,ppuVar10[0x2b]);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar5[9] = ppuVar10[0x3f];
        _objc_retain(ppuVar5);
        _objc_release(ppuVar5);
        func_0x00010af23424(ppuVar5,ppuVar10[0x47]);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af234ac();
        _objc_unsafeClaimAutoreleasedReturnValue();
        ppuVar5[7] = ppuVar10[0x48];
        _objc_retain();
      }
      _objc_release(ppuVar5);
      ppuVar1 = ppuVar5;
      func_0x00010af23338(ppuVar5,ppuVar10[0x4d]);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af23468();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af23500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108561f88; end: 10856221f; -[SnapVideoFilter _audioRenderEffectDagForComposition:mixedTracks:] */

void FUN_108561f88(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010911c960(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_3;
      func_0x000109122100(param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        puVar2 = PTR_PTR_1126c4a90;
        func_0x00010af23194();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010af231e4();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af23228();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af2326c();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af231b4();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af232b0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af232f4();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af2338c();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af233e0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          _objc_release();
          func_0x00010af23424(0,*(undefined8 *)(param_3 + 0x238));
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010af234ac(0,*(undefined8 *)(param_3 + 0x158));
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        else {
          *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(param_3 + 0x1f8);
          _objc_retain(puVar2);
          _objc_release(puVar2);
          func_0x00010af23424(puVar2,*(undefined8 *)(param_3 + 0x238));
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010af234ac();
          _objc_unsafeClaimAutoreleasedReturnValue();
          *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(param_3 + 0x240);
          _objc_retain();
        }
        _objc_release(puVar2);
        puVar4 = puVar2;
        func_0x00010af23338(puVar2,*(undefined8 *)(param_3 + 0x268));
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af23468();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010af23500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      if (*(long *)((long)puVar10 * 8) == 0) {
        uVar11 = 0xfffffffffffffffc;
LAB_1085620b0:
        uVar5 = param_4;
        func_0x00010bf529e0();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar11 < uVar5) {
          uVar11 = param_4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (uVar11 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined4 *)(uVar11 + 8);
          }
          func_0x00010c0df740(uVar12,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar11);
        }
      }
      else {
        lVar9 = *(long *)(*(long *)((long)puVar10 * 8) + 0x10);
        if ((lVar9 != 3) && (lVar9 != 2)) {
          uVar11 = lVar9 - 4;
          goto LAB_1085620b0;
        }
        func_0x00010c1d0640(puVar2);
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108562220; end: 108562397; -[SnapVideoFilter _generateImageProcessData] */

void FUN_108562220(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4a90;
  func_0x00010af23194();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010af231e4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af23228();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af2326c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af231b4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af232b0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af232f4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af2338c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af233e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release();
    func_0x00010af23424(0,*(undefined8 *)(param_1 + 0x238));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af234ac(0,*(undefined8 *)(param_1 + 0x158));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(param_1 + 0x1f8);
    _objc_retain(puVar1);
    _objc_release(puVar1);
    func_0x00010af23424(puVar1,*(undefined8 *)(param_1 + 0x238));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af234ac();
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(param_1 + 0x240);
    _objc_retain();
  }
  _objc_release(puVar1);
  puVar2 = puVar1;
  func_0x00010af23338(puVar1,*(undefined8 *)(param_1 + 0x268));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af23468();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af23500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108562398; end: 10856248b; -[SnapVideoFilter _newMp4UrlForCachedInputVideo] */

undefined * FUN_108562398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10856248c; end: 108562657; -[SnapVideoFilter _persistMediaToCM:] */

void FUN_10856248c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee7a80(param_1,param_2,param_3);
  if ((int)lVar1 == 0) {
    lVar1 = 0;
    goto LAB_10856262c;
  }
  lVar1 = *(long *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf55600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar8 = 0;
LAB_1085625d8:
    func_0x00010be56f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ee28d8);
    lVar1 = 0;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x128);
    lVar4 = lVar2;
    func_0x00010bfc5880(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    func_0x00010c099740(uVar7,param_2,lVar3,lVar4,&uStack_68);
    uVar8 = uStack_68;
    _objc_retain(uStack_68);
    _objc_release(lVar4);
    if ((uVar7 & 1) == 0) goto LAB_1085625d8;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_108553fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c126140(lVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_retain(lVar4);
      lVar1 = lVar4;
    }
    else {
      func_0x00010be56f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ee28f8);
      lVar1 = 0;
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10856262c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108562658; end: 10856271f; -[SnapVideoFilter _validateMediaURLandLogError:] */

undefined8 FUN_108562658(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc34b8;
  }
  else {
    uVar2 = param_3;
    FUN_108552f08();
    if ((uVar2 & 1) != 0) {
      uVar5 = 1;
      goto LAB_108562700;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110ee2918;
  }
  func_0x00010be56f80(param_1,param_2,ppuVar4);
  uVar5 = 0;
LAB_108562700:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108562720; end: 1085627d7; -[SnapVideoFilter _logPersistToCMError:] */

void FUN_108562720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126da0f8;
  _objc_retain(param_3);
  func_0x00010c13dd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c246000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085627d8; end: 1085629f7; -[SnapVideoFilter _retrieveMedia:] */

void FUN_1085627d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_58;
  
  FUN_108553fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  lVar2 = lVar1;
  func_0x00010c13e300(lVar1,param_2,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110ee2718);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar4,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x130),param_2,puVar4);
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfc5880(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0f5800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    puVar6 = puVar7;
    func_0x00010c099740(puVar7,param_2,lVar3,puVar5,&lStack_58);
    lVar1 = lStack_58;
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
    if (((int)puVar6 != 0) && (lVar1 == 0)) {
      _objc_retain(puVar4);
      puVar7 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1085629f8; end: 108562a0b; -[SnapVideoFilter isSpectaclesMedia] */

bool FUN_1085629f8(long param_1)

{
  return *(long *)(param_1 + 0x168) - 5U < 2;
}



/* Entry: 108562a0c; end: 108562abf; -[SnapVideoFilter setAudioOverrideAssets:] */

void FUN_108562a0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x1b8);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_108562aac;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
    *(ulong *)(param_1 + 0x1b8) = param_3;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  _objc_release(uVar3);
LAB_108562aac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108562ac0; end: 108562ad7; -[SnapVideoFilter delegate] */

void FUN_108562ac0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108562ad8; end: 108562adf; -[SnapVideoFilter adaptor] */

undefined8 FUN_108562ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 108562ae0; end: 108562ae7; -[SnapVideoFilter uuid] */

undefined8 FUN_108562ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108562ae8; end: 108562aef; -[SnapVideoFilter mediaSource] */

undefined8 FUN_108562ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 108562af0; end: 108562af7; -[SnapVideoFilter mediaDestinationInfo] */

undefined8 FUN_108562af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 108562af8; end: 108562aff; -[SnapVideoFilter videoProvider] */

undefined8 FUN_108562af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 108562b00; end: 108562b2f; -[SnapVideoFilter setVideoProvider:] */

void FUN_108562b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562b30; end: 108562b37; -[SnapVideoFilter snapImage] */

undefined8 FUN_108562b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 108562b38; end: 108562b67; -[SnapVideoFilter setSnapImage:] */

void FUN_108562b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562b68; end: 108562b6f; -[SnapVideoFilter imageDuration] */

undefined8 FUN_108562b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 108562b70; end: 108562b77; -[SnapVideoFilter setImageDuration:] */

void FUN_108562b70(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x188) = param_1;
  return;
}



/* Entry: 108562b78; end: 108562b7f; -[SnapVideoFilter frameRate] */

undefined8 FUN_108562b78(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 108562b80; end: 108562b87; -[SnapVideoFilter setFrameRate:] */

void FUN_108562b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 108562b88; end: 108562b8f; -[SnapVideoFilter bitrate] */

undefined8 FUN_108562b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 108562b90; end: 108562b97; -[SnapVideoFilter setBitrate:] */

void FUN_108562b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 108562b98; end: 108562b9f; -[SnapVideoFilter audioState] */

undefined8 FUN_108562b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 108562ba0; end: 108562ba7; -[SnapVideoFilter setAudioState:] */

void FUN_108562ba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562ba8; end: 108562baf; -[SnapVideoFilter audioOverrideMixingProportion] */

undefined8 FUN_108562ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 108562bb0; end: 108562bb7; -[SnapVideoFilter setAudioOverrideMixingProportion:] */

void FUN_108562bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562bb8; end: 108562bbf; -[SnapVideoFilter baseAudioTrackMixingProportion] */

undefined8 FUN_108562bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 108562bc0; end: 108562bc7; -[SnapVideoFilter setBaseAudioTrackMixingProportion:] */

void FUN_108562bc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562bc8; end: 108562bcf; -[SnapVideoFilter audioOverrideAssets] */

undefined8 FUN_108562bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 108562bd0; end: 108562bd7; -[SnapVideoFilter mixedAudioTracks] */

undefined8 FUN_108562bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 108562bd8; end: 108562bdf; -[SnapVideoFilter setMixedAudioTracks:] */

void FUN_108562bd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562be0; end: 108562be7; -[SnapVideoFilter filterName] */

undefined8 FUN_108562be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 108562be8; end: 108562bef; -[SnapVideoFilter setFilterName:] */

void FUN_108562be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562bf0; end: 108562bf7; -[SnapVideoFilter lensCommand] */

undefined8 FUN_108562bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 108562bf8; end: 108562c27; -[SnapVideoFilter setLensCommand:] */

void FUN_108562bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562c28; end: 108562c2f; -[SnapVideoFilter selectedFilterConfigs] */

undefined8 FUN_108562c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 108562c30; end: 108562c37; -[SnapVideoFilter setSelectedFilterConfigs:] */

void FUN_108562c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562c38; end: 108562c3f; -[SnapVideoFilter ucoConfigs] */

undefined8 FUN_108562c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 108562c40; end: 108562c47; -[SnapVideoFilter setUcoConfigs:] */

void FUN_108562c40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562c48; end: 108562c4f; -[SnapVideoFilter lensCommandMetadata] */

undefined8 FUN_108562c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 108562c50; end: 108562c7f; -[SnapVideoFilter setLensCommandMetadata:] */

void FUN_108562c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562c80; end: 108562c87; -[SnapVideoFilter spectaclesRectificationConfig] */

undefined8 FUN_108562c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 108562c88; end: 108562cb7; -[SnapVideoFilter setSpectaclesRectificationConfig:] */

void FUN_108562c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562cb8; end: 108562cbf; -[SnapVideoFilter spectaclesStereoDisparity] */

undefined8 FUN_108562cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 108562cc0; end: 108562cc7; -[SnapVideoFilter setSpectaclesStereoDisparity:] */

void FUN_108562cc0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1f8) = param_1;
  return;
}



/* Entry: 108562cc8; end: 108562ccf; -[SnapVideoFilter overlayImageFileSizeBits] */

undefined8 FUN_108562cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 108562cd0; end: 108562cd7; -[SnapVideoFilter setOverlayImageFileSizeBits:] */

void FUN_108562cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x200) = param_3;
  return;
}



/* Entry: 108562cd8; end: 108562cdf; -[SnapVideoFilter overlayImageURL] */

undefined8 FUN_108562cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 108562ce0; end: 108562d0f; -[SnapVideoFilter setOverlayImageURL:] */

void FUN_108562ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562d10; end: 108562d17; -[SnapVideoFilter overlayImage] */

undefined8 FUN_108562d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 108562d18; end: 108562d47; -[SnapVideoFilter setOverlayImage:] */

void FUN_108562d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562d48; end: 108562d4f; -[SnapVideoFilter overlayImagePNGData] */

undefined8 FUN_108562d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 108562d50; end: 108562d57; -[SnapVideoFilter setOverlayImagePNGData:] */

void FUN_108562d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562d58; end: 108562d5f; -[SnapVideoFilter useOverlayImageAsMask] */

undefined1 FUN_108562d58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x148);
}



/* Entry: 108562d60; end: 108562d67; -[SnapVideoFilter setUseOverlayImageAsMask:] */

void FUN_108562d60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x148) = param_3;
  return;
}



/* Entry: 108562d68; end: 108562d6f; -[SnapVideoFilter overlayImageForThumbnail] */

undefined8 FUN_108562d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 108562d70; end: 108562d9f; -[SnapVideoFilter setOverlayImageForThumbnail:] */

void FUN_108562d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562da0; end: 108562da7; -[SnapVideoFilter qualityLevel] */

undefined8 FUN_108562da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 108562da8; end: 108562daf; -[SnapVideoFilter highQuality] */

undefined1 FUN_108562da8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x149);
}



/* Entry: 108562db0; end: 108562db7; -[SnapVideoFilter setHighQuality:] */

void FUN_108562db0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x149) = param_3;
  return;
}



/* Entry: 108562db8; end: 108562dbf; -[SnapVideoFilter audioEnabled] */

undefined1 FUN_108562db8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14a);
}



/* Entry: 108562dc0; end: 108562dc7; -[SnapVideoFilter setAudioEnabled:] */

void FUN_108562dc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14a) = param_3;
  return;
}



/* Entry: 108562dc8; end: 108562dcf; -[SnapVideoFilter createTimeUtc] */

undefined8 FUN_108562dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 108562dd0; end: 108562dff; -[SnapVideoFilter setCreateTimeUtc:] */

void FUN_108562dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562e00; end: 108562e07; -[SnapVideoFilter spectaclesTranscodingConfig] */

undefined8 FUN_108562e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 108562e08; end: 108562e37; -[SnapVideoFilter setSpectaclesTranscodingConfig:] */

void FUN_108562e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562e38; end: 108562e4f; -[SnapVideoFilter magicMomentFrameTime] */

void FUN_108562e38(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x378);
  uVar1 = *(undefined8 *)(param_2 + 0x368);
  param_1[1] = *(undefined8 *)(param_2 + 0x370);
  *param_1 = uVar1;
  return;
}



/* Entry: 108562e50; end: 108562e67; -[SnapVideoFilter setMagicMomentFrameTime:] */

void FUN_108562e50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x378) = param_3[2];
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  *(undefined8 *)(param_1 + 0x368) = uVar1;
  return;
}



/* Entry: 108562e68; end: 108562e6f; -[SnapVideoFilter videoPlaybackRate] */

undefined8 FUN_108562e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 108562e70; end: 108562e77; -[SnapVideoFilter setVideoPlaybackRate:] */

void FUN_108562e70(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x240) = param_1;
  return;
}



/* Entry: 108562e78; end: 108562e7f; -[SnapVideoFilter videoTargetAspectRatio] */

undefined8 FUN_108562e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 108562e80; end: 108562e87; -[SnapVideoFilter setVideoTargetAspectRatio:] */

void FUN_108562e80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x248) = param_1;
  return;
}



/* Entry: 108562e88; end: 108562e8f; -[SnapVideoFilter videoTargetOrientation] */

undefined8 FUN_108562e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 108562e90; end: 108562e97; -[SnapVideoFilter setVideoTargetOrientation:] */

void FUN_108562e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x250) = param_3;
  return;
}



/* Entry: 108562e98; end: 108562e9f; -[SnapVideoFilter thumbnailOrientation] */

undefined8 FUN_108562e98(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 108562ea0; end: 108562ea7; -[SnapVideoFilter setThumbnailOrientation:] */

void FUN_108562ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 600) = param_3;
  return;
}



/* Entry: 108562ea8; end: 108562eaf; -[SnapVideoFilter timeRanges] */

undefined8 FUN_108562ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 108562eb0; end: 108562eb7; -[SnapVideoFilter setTimeRanges:] */

void FUN_108562eb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562eb8; end: 108562ebf; -[SnapVideoFilter croppingState] */

undefined8 FUN_108562eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}



/* Entry: 108562ec0; end: 108562eef; -[SnapVideoFilter setCroppingState:] */

void FUN_108562ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562ef0; end: 108562ef7; -[SnapVideoFilter croppingAspectRatio] */

undefined8 FUN_108562ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 108562ef8; end: 108562eff; -[SnapVideoFilter setCroppingAspectRatio:] */

void FUN_108562ef8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x270) = param_1;
  return;
}



/* Entry: 108562f00; end: 108562f07; -[SnapVideoFilter multiSnapNumSegments] */

undefined8 FUN_108562f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 108562f08; end: 108562f0f; -[SnapVideoFilter setMultiSnapNumSegments:] */

void FUN_108562f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x278) = param_3;
  return;
}



/* Entry: 108562f10; end: 108562f17; -[SnapVideoFilter multiSnapOriginalVideoDuration] */

undefined8 FUN_108562f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 108562f18; end: 108562f1f; -[SnapVideoFilter setMultiSnapOriginalVideoDuration:] */

void FUN_108562f18(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x280) = param_1;
  return;
}



/* Entry: 108562f20; end: 108562f27; -[SnapVideoFilter multiSnapTimeRange] */

undefined8 FUN_108562f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 108562f28; end: 108562f57; -[SnapVideoFilter setMultiSnapTimeRange:] */

void FUN_108562f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562f58; end: 108562f5f; -[SnapVideoFilter multiSnapSourceVideoProvider] */

undefined8 FUN_108562f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 108562f60; end: 108562f8f; -[SnapVideoFilter setMultiSnapSourceVideoProvider:] */

void FUN_108562f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108562f90; end: 108562f9b; -[SnapVideoFilter overlaySize] */

undefined1  [16] FUN_108562f90(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x348);
}



/* Entry: 108562f9c; end: 108562fa7; -[SnapVideoFilter setOverlaySize:] */

void FUN_108562f9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x348) = param_1;
  *(undefined8 *)(param_3 + 0x350) = param_2;
  return;
}



/* Entry: 108562fa8; end: 108562faf; -[SnapVideoFilter savesToCameraRoll] */

undefined1 FUN_108562fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14b);
}


