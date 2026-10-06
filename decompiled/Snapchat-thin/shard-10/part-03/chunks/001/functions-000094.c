/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107eb77e0; end: 107eb7cff; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107eb77e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x25;
  undefined *puVar22;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  long lStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112771024;
  puVar16 = PTR_PTR_1126bc830;
  func_0x00010bf5a940(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + lVar17));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar16,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c1a1e00(puVar16,param_2,uVar2);
  puVar1 = puVar16;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  uVar2 = 2;
  if (puVar1 < (undefined *)0x9) {
    if ((1L << ((ulong)puVar1 & 0x3f) & 0x16eU) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010c29e660(uVar2,param_2,2);
    }
  }
  else if (puVar1 != (undefined *)0x270f) goto LAB_107eb78c8;
  func_0x00010c222da0(puVar16,param_2,uVar2);
LAB_107eb78c8:
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_a0 = puVar16;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_88 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112771028;
  lVar17 = *(long *)(param_1 + lVar18);
  puStack_90 = puVar16;
  func_0x00010bf529e0();
  if (lVar17 != 0) {
    uVar20 = 0;
    lStack_98 = (long)_DAT_11277102c;
    do {
      uVar2 = *(undefined8 *)(param_1 + lStack_98);
      func_0x00010c0dfd40(uVar2,param_2,uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126bf8f8;
      uStack_78 = uVar2;
      func_0x00010c2aebe0(PTR_PTR_1126bf8f8,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar16;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = puVar3;
      _objc_release(puVar1);
      _objc_release(puVar16);
      unaff_x26 = PTR_PTR_1126bf8e8;
      func_0x00010bf5a9e0(PTR_PTR_1126bf8e8,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = &DAT_112771020;
      unaff_x27 = *(undefined **)(param_1 + _DAT_112771030);
      func_0x00010c0dfd40(unaff_x27,param_2,uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126bf900;
      func_0x00010c2aec40(PTR_PTR_1126bf900,param_2,unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar16;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar16);
      puVar1 = PTR_PTR_1126bf8f0;
      func_0x00010bf5aa20(PTR_PTR_1126bf8f0,param_2,unaff_x28);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126bc7f8;
      uVar2 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c0dfd40(uVar2,param_2,uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0(puVar16,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c1d7bc0(puVar16,param_2,*(undefined8 *)(param_1 + _DAT_112771020));
      puVar3 = unaff_x26;
      func_0x00010c0fd8e0(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar16,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c0fd920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar16,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c1a7000(puVar16,param_2,0);
      puVar3 = puVar16;
      func_0x00010c0fd8c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_88,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar16;
      func_0x00010c241220(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_90,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar16);
      _objc_release(puVar1);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      _objc_release(puStack_80);
      _objc_release(uStack_78);
      uVar20 = uVar20 + 1;
      uVar4 = *(ulong *)(param_1 + lVar18);
      func_0x00010bf529e0();
    } while (uVar20 < uVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  FUN_107ee8c84(uVar2);
  puVar1 = puStack_a0;
  func_0x00010c207320(puStack_a0,param_2,uVar2);
  puVar3 = puStack_90;
  puVar16 = puStack_90;
  func_0x00010b7043dc(puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  puVar22 = puStack_88;
  puVar16 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  puVar5 = puStack_88;
  func_0x00010bf529e0(puStack_88);
  func_0x00010bfed320(puVar16,param_2,0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e00(puVar1,param_2,puVar22,puVar16);
  _objc_release(puVar16);
  puVar16 = puVar1;
  func_0x00010c0f7a20(puVar1);
  func_0x00010c1da4e0(puVar1,param_2,(int)puVar16 + 1);
  puVar5 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + _DAT_112771020));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0fd860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = 1;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar7;
  func_0x00010bef7f40(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar22);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  puStack_e0 = puVar3;
  puStack_d8 = puVar22;
  puStack_c8 = puVar1;
  pcStack_a8 = FUN_107eb7d00;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x28;
  puStack_f8 = unaff_x27;
  puStack_f0 = unaff_x26;
  puStack_e8 = unaff_x25;
  puStack_d0 = puVar7;
  puStack_c0 = puVar6;
  puStack_b8 = puVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  _objc_retain(lVar17);
  puVar1 = PTR_PTR_1126af4c0;
  ppuVar15 = (undefined **)(long)_DAT_112771024;
  uVar2 = *(undefined8 *)(puVar8 + (long)ppuVar15);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_1d8 = lVar17;
  func_0x00010bfa70a0(puVar1,param_2,uVar2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  ppuVar19 = (undefined **)PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar8 + (long)ppuVar15);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar16;
  func_0x00010c0e00e0(puVar16,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar16;
  puStack_1f0 = puVar16;
  func_0x00010c0b4ca0(puVar16);
  func_0x00010c1fce60(ppuVar19,param_2,puVar3);
  ppuVar9 = ppuVar19;
  func_0x00010bf12220(ppuVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210e00(ppuVar19,param_2,ppuVar9);
  _objc_release(ppuVar9);
  lVar18 = *(long *)(puVar8 + (long)ppuVar15);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar18 != 0) {
    uVar2 = *(undefined8 *)(puVar8 + (long)ppuVar15);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(ppuVar19,param_2,uVar2);
    _objc_release(uVar2);
  }
  ppuVar9 = ppuVar19;
  func_0x00010c0f7a20(ppuVar19);
  ppuStack_1e8 = ppuVar19;
  func_0x00010c1da4e0(ppuVar19,param_2,(int)ppuVar9 + -1);
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puVar22 = *(undefined **)(puVar8 + _DAT_112771028);
  _objc_retain(puVar22);
  puVar12 = &uStack_1d0;
  puVar14 = auStack_190;
  puVar3 = puVar22;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar17 = *plStack_1c0;
    ppuVar15 = &PTR_PTR_1126af000;
    ppuVar19 = &PTR_PTR_1126bc000;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_1c0 != lVar17) {
          _objc_enumerationMutation(puVar22);
        }
        unaff_x27 = PTR_PTR_1126af4d0;
        uVar2 = *(undefined8 *)(lStack_1c8 + (long)puVar16 * 8);
        func_0x00010c241220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0(unaff_x27,param_2,uVar2,lStack_1d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        unaff_x28 = PTR_PTR_1126bc7f8;
        func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7000();
        func_0x00010c210e20(unaff_x28,param_2,puVar1);
        if (unaff_x27 != (undefined *)0x0) {
          func_0x00010befa120(puVar10,param_2,unaff_x27);
        }
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar12 = &uStack_1d0;
      puVar14 = auStack_190;
      puVar3 = puVar22;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar22);
  puVar21 = puVar10;
  func_0x00010bf51e00(puVar10);
  _objc_release(puVar10);
  _objc_release(puStack_1f0);
  _objc_release(ppuStack_1e8);
  _objc_release(puVar1);
  _objc_release(lStack_1d8);
  _objc_release(puStack_1e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_110) {
    ___stack_chk_fail();
    puVar13 = &uStack_310;
    pcStack_1f8 = FUN_107eb8040;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar21 = puVar12;
    puStack_240 = unaff_x28;
    puStack_238 = unaff_x27;
    puStack_230 = puVar10;
    lStack_228 = lVar17;
    ppuStack_220 = ppuVar19;
    puStack_218 = puVar1;
    puStack_210 = puVar16;
    ppuStack_208 = ppuVar15;
    ppuStack_200 = &puStack_b0;
    _objc_retain(puVar12);
    _objc_retain(puVar14);
    if (puVar12 != (undefined8 *)0x0) {
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      plStack_300 = (long *)0x0;
      puVar10 = puVar12;
      func_0x00010bf52a60();
      puVar21 = puVar13;
      if (puVar10 != (undefined8 *)0x0) {
        lVar17 = *plStack_300;
        do {
          puVar21 = (undefined8 *)0x0;
          do {
            if (*plStack_300 != lVar17) {
              _objc_enumerationMutation(puVar12);
            }
            puVar11 = puVar14;
            func_0x00010c13a8c0(puVar14,param_2,*(undefined8 *)(lStack_308 + (long)puVar21 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bb0c0();
            _objc_release(puVar11);
            puVar21 = (undefined8 *)((long)puVar21 + 1);
          } while (puVar10 != puVar21);
          puVar10 = puVar12;
          puVar21 = &uStack_310;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined8 *)0x0);
      }
    }
    _objc_release(puVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return puVar12;
    }
    ___stack_chk_fail();
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      pcStack_318 = FUN_107eb816c;
      puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_340 = 0xc2000000;
      pcStack_338 = FUN_107eb81d8;
      puStack_330 = &UNK_11085a2d8;
      puStack_328 = puVar12;
      ppuStack_320 = &ppuStack_200;
      func_0x00010c0b8600(puVar21,param_2,&puStack_348);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar21;
}



/* Entry: 107eb7d00; end: 107eb803f; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb7d00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined **ppuStack_148;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af4c0;
  ppuVar11 = (undefined **)(long)_DAT_112771024;
  uVar1 = *(undefined8 *)(param_1 + (long)ppuVar11);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = param_4;
  func_0x00010bfa70a0(puVar2,param_2,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  ppuVar12 = (undefined **)PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + (long)ppuVar11);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = param_3;
  lStack_150 = param_3;
  func_0x00010c0b4ca0(param_3);
  func_0x00010c1fce60(ppuVar12,param_2,lVar4);
  ppuVar3 = ppuVar12;
  func_0x00010bf12220(ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210e00(ppuVar12,param_2,ppuVar3);
  _objc_release(ppuVar3);
  lVar4 = *(long *)(param_1 + (long)ppuVar11);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + (long)ppuVar11);
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(ppuVar12,param_2,uVar1);
    _objc_release(uVar1);
  }
  ppuVar3 = ppuVar12;
  func_0x00010c0f7a20(ppuVar12);
  ppuStack_148 = ppuVar12;
  func_0x00010c1da4e0(ppuVar12,param_2,(int)ppuVar3 + -1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar14 = *(long *)(param_1 + _DAT_112771028);
  _objc_retain(lVar14);
  puVar8 = &uStack_130;
  puVar10 = auStack_f0;
  lVar4 = lVar14;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    param_4 = *plStack_120;
    ppuVar11 = &PTR_PTR_1126af000;
    ppuVar12 = &PTR_PTR_1126bc000;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != param_4) {
          _objc_enumerationMutation(lVar14);
        }
        unaff_x27 = PTR_PTR_1126af4d0;
        uVar1 = *(undefined8 *)(lStack_128 + param_3 * 8);
        func_0x00010c241220(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0(unaff_x27,param_2,uVar1,lStack_138);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        unaff_x28 = PTR_PTR_1126bc7f8;
        func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7000();
        func_0x00010c210e20(unaff_x28,param_2,puVar2);
        if (unaff_x27 != (undefined *)0x0) {
          func_0x00010befa120(puVar5,param_2,unaff_x27);
        }
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        param_3 = param_3 + 1;
      } while (lVar4 != param_3);
      puVar8 = &uStack_130;
      puVar10 = auStack_f0;
      lVar4 = lVar14;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar14);
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(lStack_150);
  _objc_release(ppuStack_148);
  _objc_release(puVar2);
  _objc_release(lStack_138);
  _objc_release(lStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_270;
    pcStack_158 = FUN_107eb8040;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar8;
    puStack_1a0 = unaff_x28;
    puStack_198 = unaff_x27;
    puStack_190 = puVar5;
    lStack_188 = param_4;
    ppuStack_180 = ppuVar12;
    puStack_178 = puVar2;
    lStack_170 = param_3;
    ppuStack_168 = ppuVar11;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    if (puVar8 != (undefined8 *)0x0) {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      puVar6 = puVar8;
      func_0x00010bf52a60();
      puVar13 = puVar9;
      if (puVar6 != (undefined8 *)0x0) {
        lVar4 = *plStack_260;
        do {
          puVar13 = (undefined8 *)0x0;
          do {
            if (*plStack_260 != lVar4) {
              _objc_enumerationMutation(puVar8);
            }
            puVar7 = puVar10;
            func_0x00010c13a8c0(puVar10,param_2,*(undefined8 *)(lStack_268 + (long)puVar13 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bb0c0();
            _objc_release(puVar7);
            puVar13 = (undefined8 *)((long)puVar13 + 1);
          } while (puVar6 != puVar13);
          puVar6 = puVar8;
          puVar13 = &uStack_270;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined8 *)0x0);
      }
    }
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    if (puVar13 != (undefined8 *)0x0) {
      pcStack_278 = FUN_107eb816c;
      puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a0 = 0xc2000000;
      pcStack_298 = FUN_107eb81d8;
      puStack_290 = &UNK_11085a2d8;
      puStack_288 = puVar8;
      ppuStack_280 = &puStack_160;
      func_0x00010c0b8600(puVar13,param_2,&puStack_2a8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb8040; end: 107eb816b; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107eb8040(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined1 *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar3 = puVar4;
    if (puVar1 != (undefined1 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = param_4;
          func_0x00010c13a8c0(param_4,param_2,*(undefined8 *)(lStack_118 + (long)puVar6 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar2);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = param_3;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (puVar3 != (undefined8 *)0x0) {
      pcStack_128 = FUN_107eb816c;
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_107eb81d8;
      puStack_140 = &UNK_11085a2d8;
      puStack_138 = param_3;
      puStack_130 = &stack0xfffffffffffffff0;
      func_0x00010c0b8600(puVar3,param_2,&puStack_158);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107eb816c; end: 107eb81d7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:] */

void FUN_107eb816c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107eb81d8;
    puStack_20 = &UNK_11085a2d8;
    uStack_18 = param_1;
    func_0x00010c0b8600(param_3,param_2,&puStack_38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb81d8; end: 107eb82eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb81d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = (long)_DAT_112771024;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  func_0x00010c079400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23f7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107eb82ec; end: 107eb82f3; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107eb82ec(void)

{
  return 1;
}



/* Entry: 107eb82f4; end: 107eb86e7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Possible PIC construction at 0x000107eb845c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107eb8460) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb82f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  lVar11 = (long)_DAT_112771028;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + (long)puVar13 * 8);
        uVar5 = uVar10;
        func_0x00010bf19ac0();
        if ((int)uVar5 == 1) goto code_r0x00010c241220;
        puVar13 = puVar13 + 1;
      } while (puVar4 != puVar13);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126d8270;
  _objc_alloc();
  func_0x00010c0093a0();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  FUN_107ee8930(uVar6,*(undefined8 *)(param_1 + _DAT_11277102c),
                *(undefined8 *)(param_1 + _DAT_112771030));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771024);
  func_0x00010bf97200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_107eb86f0;
  puStack_168 = &UNK_110a11150;
  uStack_140 = in_stack_00000020;
  uStack_138 = in_stack_00000028;
  lStack_160 = param_1;
  uStack_158 = param_3;
  uStack_150 = param_7;
  uStack_148 = param_6;
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  uVar10 = uVar6;
  FUN_107eecc84(param_3,uVar6,uVar7,0,puVar3,puVar4,param_6,param_7,param_4,0,0xb,uVar9,
                in_stack_00000020,&puStack_180);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar13 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eb86e8; end: 107eb86ef;  */

void FUN_107eb86e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eb86f0; end: 107eb87ef;  */

void FUN_107eb86f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf3e200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed78c0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107eb87f0; end: 107eb8aef; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb87f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_112771024;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_release(puVar3);
  lVar6 = (long)_DAT_112771028;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a11180);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e268d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a111a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28b8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e520(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21d8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28d8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_11277101c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar5 = *(long *)(param_1 + _DAT_112771038);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eb8af0; end: 107eb8b9f;  */

void FUN_107eb8af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eb8ba0; end: 107eb8cbb; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb8ba0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_112771028);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          bVar4 = false;
          goto LAB_107eb8c7c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107eb8c7c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar4;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar3 = *(long *)(lVar3 + _DAT_112771028);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_210;
    do {
      lVar6 = 0;
      do {
        if (*plStack_210 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_218 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          bVar4 = false;
          goto LAB_107eb8d98;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107eb8d98:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return bVar4;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(lVar3 + _DAT_112771024);
  func_0x00010c13f6e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar2 != 0;
}



/* Entry: 107eb8cbc; end: 107eb8dd7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb8cbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_112771028);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          bVar4 = false;
          goto LAB_107eb8d98;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107eb8d98:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar4;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(lVar3 + _DAT_112771024);
  func_0x00010c13f6e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar2 != 0;
}



/* Entry: 107eb8dd8; end: 107eb8e17; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isOperationFromRetryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb8dd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771024);
  func_0x00010c13f6e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107eb8e18; end: 107eb8eb7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107eb8e18(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010bf879c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + (long)_DAT_112771028);
    func_0x00010bfaea20(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110a111c0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107eb8eb8; end: 107eb8ebf; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate] */

undefined8 FUN_107eb8eb8(void)

{
  return 1;
}



/* Entry: 107eb8ec0; end: 107eb8ec7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately] */

undefined8 FUN_107eb8ec0(void)

{
  return 0;
}



/* Entry: 107eb8ec8; end: 107eb8ecf; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107eb8ec8(void)

{
  return 0;
}



/* Entry: 107eb8ed0; end: 107eb8ed7; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107eb8ed0(void)

{
  return 0;
}



/* Entry: 107eb8ed8; end: 107eb8edf; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107eb8ed8(void)

{
  return 0;
}



/* Entry: 107eb8ee0; end: 107eb8f0f; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb8ee0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771028);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb8f10; end: 107eb8f3f; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb8f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277102c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb8f40; end: 107eb8f6f; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb8f40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771030);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb8f70; end: 107eb8f7f; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE numberOfSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb8f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112771028),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107eb8f80; end: 107eb8faf; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb8f80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771034);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb8fb0; end: 107eb9047; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107eb8fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771024);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 107eb9048; end: 107eb9553; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE _updateEntryFromCloudFS:networker:dataObjectContext:snapsUploadInfo:queue:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb9048(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112771024;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf9e140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfbdda0(uVar3);
  FUN_107ee8bec((long)(int)uVar3);
  func_0x00010c196ba0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c196b20(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + lVar11);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c2711a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + _DAT_112771028);
  _objc_retain(lVar13);
  lVar4 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      uVar3 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(uVar3);
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    lVar4 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  func_0x00010c2046e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c15e520(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1fce80(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf8b0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c185380(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c07b240(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1b3980(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d8288;
  func_0x00010c2b1dc0(PTR_PTR_1126d8288);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_8);
  _objc_retain(param_9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ec2858;
  func_0x00010c25f400(param_4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar9);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar9);
  puVar6 = puVar5;
  func_0x00010c15f8c0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar6 == (undefined *)0x7d0) {
    puVar2 = puVar5;
    func_0x00010bf96fc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    (**(code **)(*(long *)(param_4 + 0x20) + 0x10))(*(long *)(param_4 + 0x20),puVar6);
  }
  else {
    lVar4 = *(long *)(param_4 + 0x28);
    func_0x00010c15f8c0(puVar5);
    puVar6 = puVar5;
    func_0x00010bf96fc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf148e0(puVar5);
    puVar8 = puVar5;
    func_0x00010bf66200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107eb9554; end: 107eb96c3;  */

void FUN_107eb9554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb96c4; end: 107eb970b;  */

void FUN_107eb96c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eb970c; end: 107eb97ab; -[SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb970c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771038,0);
  _objc_storeStrong(param_1 + _DAT_112771028,0);
  _objc_storeStrong(param_1 + _DAT_112771030,0);
  _objc_storeStrong(param_1 + _DAT_11277102c,0);
  _objc_storeStrong(param_1 + _DAT_112771034,0);
  _objc_storeStrong(param_1 + _DAT_112771024,0);
  _objc_storeStrong(param_1 + _DAT_112771020,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277101c,0);
  return;
}



/* Entry: 107eb97ac; end: 107eb9867; -[SCCloudCreateOrExtendEntryOperation initWithEntryPlaceholder:addSnapEntities:autosaveTimeUtc:snapsOrder:dataVaultEncryption:profile:userContext:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107eb97ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_6);
  func_0x00010c010440(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10);
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11277103c;
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 107eb9868; end: 107eb9bf3; -[SCCloudCreateOrExtendEntryOperation initWithEntryPlaceholder:addSnapEntities:autosaveTimeUtc:dataVaultEncryption:profile:userContext:memoriesExperimentService:] */

/* WARNING: Possible PIC construction at 0x000107eb9978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107eb997c) */
/* WARNING: Removing unreachable block (ram,0x000107eb99d8) */
/* WARNING: Removing unreachable block (ram,0x000107eb99ec) */
/* WARNING: Removing unreachable block (ram,0x000107eb9a08) */
/* WARNING: Removing unreachable block (ram,0x000107eb9968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107eb9868(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_f8 = PTR_PTR_1126fb948;
  puVar1 = &uStack_100;
  puVar3 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    lVar6 = param_4;
    func_0x00010bf52a60();
    puVar2 = puRam0000000000000000;
    if (lVar6 != 0) goto code_r0x00010c23f220;
    lVar6 = param_4;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771040);
    *(long *)((long)puVar1 + (long)_DAT_112771040) = lVar6;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771044;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771048;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277104c);
    *(long *)((long)puVar1 + (long)_DAT_11277104c) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771050);
    *(long *)((long)puVar1 + (long)_DAT_112771050) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771054);
    *(long *)((long)puVar1 + (long)_DAT_112771054) = lVar6;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771058;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277105c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277105c) = uVar4;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112771060;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112771064;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar3;
code_r0x00010c23f220:
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_snap_11266d6b0);
  return puVar2;
}



/* Entry: 107eb9bf4; end: 107eb9c0b;  */

void FUN_107eb9bf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107eb9c0c; end: 107eb9c13; -[SCCloudCreateOrExtendEntryOperation type] */

undefined8 FUN_107eb9c0c(void)

{
  return 8;
}



/* Entry: 107eb9c14; end: 107eb9c1b; -[SCCloudCreateOrExtendEntryOperation analyticsType] */

undefined8 FUN_107eb9c14(void)

{
  return 6;
}



/* Entry: 107eb9c1c; end: 107eb9c4b; -[SCCloudCreateOrExtendEntryOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb9c1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771040);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eb9c4c; end: 107eb9ce3; -[SCCloudCreateOrExtendEntryOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb9c4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771048);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uStack_30 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d82a8);
    func_0x00010c03ac40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb9ce4; end: 107eb9d5f; -[SCCloudCreateOrExtendEntryOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb9ce4(void)

{
  _objc_alloc(PTR_PTR_1126d82a8);
  func_0x00010c03ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107eb9d60; end: 107eb9ff3; -[SCCloudCreateOrExtendEntryOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107eb9d60(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5a60);
  if (uVar3 == 0 || (int)uVar4 == 0) {
    ppuVar2 = (undefined1 **)param_1;
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb948;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771040);
      *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771040) = uVar6;
      _objc_release(uVar5);
      uVar3 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771044);
      *(ulong *)((long)ppuVar2 + (long)_DAT_112771044) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771048);
      *(ulong *)((long)ppuVar2 + (long)_DAT_112771048) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11277104c;
      uVar6 = *(undefined8 *)((long)ppuVar2 + lVar8);
      *(ulong *)((long)ppuVar2 + lVar8) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010bf6f620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771050);
      *(ulong *)((long)ppuVar2 + (long)_DAT_112771050) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010c0ce260();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_112771054;
      uVar6 = *(undefined8 *)((long)ppuVar2 + lVar9);
      *(ulong *)((long)ppuVar2 + lVar9) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010bf12220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771058);
      *(ulong *)((long)ppuVar2 + (long)_DAT_112771058) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_11277105c);
      *(ulong *)((long)ppuVar2 + (long)_DAT_11277105c) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_11277103c);
      *(ulong *)((long)ppuVar2 + (long)_DAT_11277103c) = uVar3;
      _objc_release(uVar6);
      uVar3 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112771060);
      *(ulong *)((long)ppuVar2 + (long)_DAT_112771060) = uVar3;
      _objc_release(uVar6);
      uVar3 = *(ulong *)((long)ppuVar2 + lVar8);
      func_0x00010bf529e0();
      uVar4 = *(ulong *)((long)ppuVar2 + lVar9);
      func_0x00010bf529e0();
      if (uVar4 < uVar3) {
        uVar6 = *(undefined8 *)((long)ppuVar2 + lVar8);
        func_0x00010bf529e0();
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)((long)ppuVar2 + lVar9);
        *(undefined8 *)((long)ppuVar2 + lVar9) = uVar6;
        _objc_release(uVar5);
      }
      _objc_release(param_3);
    }
    _objc_retain(ppuVar2);
    puVar7 = (undefined1 *)ppuVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  return puVar7;
}



/* Entry: 107eb9ff4; end: 107eba67f; -[SCCloudCreateOrExtendEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eb9ff4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar7 = (long)_DAT_11277104c;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa7580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0();
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar2);
      }
      uVar13 = *(undefined8 *)((long)puVar11 * 8);
      func_0x00010c241220(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar13);
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126af4c0;
  lVar12 = (long)_DAT_112771048;
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf97200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar11 = *(undefined **)(param_1 + lVar12);
  }
  _objc_retain(puVar11);
  _objc_release(puVar4);
  _objc_release(uVar13);
  puVar4 = puVar11;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar4 == (undefined *)0x2) {
    uVar13 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126af4d0;
    func_0x00010bfa7520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar15);
        }
        uVar8 = *(undefined8 *)((long)puVar14 * 8);
        func_0x00010c241220(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar8);
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar4 = puVar15;
      func_0x00010bf52a60();
    }
    _objc_release(puVar15);
    _objc_release(uVar13);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  _objc_retain(param_4);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf97e80(uVar13);
  lVar9 = (long)_DAT_112771058;
  puVar15 = *(undefined **)(param_1 + lVar9);
  _objc_retain(puVar15);
  if (*(long *)(param_1 + lVar9) != 0) {
    puVar14 = puVar11;
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 != (undefined *)0x0) {
      lVar9 = *(long *)(param_1 + lVar9);
      puVar5 = puVar11;
      func_0x00010bf12220(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0();
      _objc_release(puVar5);
      _objc_release(puVar14);
      if (lVar9 == -1) {
        puVar14 = puVar11;
        func_0x00010bf12220(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        bVar10 = true;
        goto LAB_107eba420;
      }
    }
  }
  bVar10 = false;
  puVar14 = puVar15;
LAB_107eba420:
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar5 == (undefined *)0x0) {
    uVar13 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf97200(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 2;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar8);
    _objc_release(puVar15);
    _objc_release(uVar13);
    param_1 = (undefined *)0x0;
  }
  else {
    puVar15 = puVar4;
    func_0x00010bf529e0();
    puVar5 = *(undefined **)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (puVar15 != puVar5) {
      bVar10 = true;
    }
    if (bVar10) {
      lVar12 = *(long *)(param_1 + _DAT_11277103c);
      param_1 = PTR_PTR_1126d7f20;
      _objc_alloc(PTR_PTR_1126d7f20);
      if (lVar12 == 0) {
        func_0x00010c010440();
      }
      else {
        func_0x00010c010460();
      }
    }
    else {
      _objc_retain(param_1);
    }
  }
  _objc_release(puVar14);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 107eba680; end: 107eba687;  */

void FUN_107eba680(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 107eba688; end: 107eba887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eba688(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar6 != 0) goto LAB_107eba858;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11277105c);
  lVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c07b240();
  uVar4 = uVar7;
  func_0x00010c0719c0();
  if (iVar1 == (int)uVar4) {
    lVar2 = param_2;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126af4d0;
    if (lVar2 == 0) {
      lVar2 = param_2;
      FUN_107ee8f54(param_2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
      if ((int)lVar2 != 0) goto LAB_107eba7b8;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf8b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (puVar3 != (undefined *)0x0) {
LAB_107eba7b8:
        puVar3 = PTR_PTR_1126d7f18;
        _objc_alloc(PTR_PTR_1126d7f18);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112771050);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112771054);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00e960(puVar3);
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
        _objc_release(puVar3);
      }
    }
  }
  _objc_release(uVar7);
LAB_107eba858:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eba888; end: 107ebab63; -[SCCloudCreateOrExtendEntryOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107eba888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126af4c0;
  lVar10 = (long)_DAT_112771048;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = *(ulong *)(param_1 + lVar10);
  uVar9 = uVar8;
  func_0x00010bf97200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11277104c;
  FUN_107efdf8c(uVar8,puVar3,uVar9,*(undefined8 *)(param_1 + lVar1),puVar7,
                *(undefined8 *)(param_1 + _DAT_112771044),*(undefined8 *)(param_1 + _DAT_112771050),
                *(undefined8 *)(param_1 + _DAT_112771054),param_3,0x100);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar11 = (long)_DAT_11277103c;
  lVar4 = *(long *)(param_1 + lVar11);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar9 = *(ulong *)(param_1 + lVar11);
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c245800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071d00();
    _objc_release(uVar2);
    if ((uVar9 & 1) == 0) {
      func_0x00010c2062e0(uVar8);
    }
  }
  uVar9 = uVar8;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (uVar9 < 2) {
    if (puVar3 != (undefined *)0x0) {
LAB_107ebaa48:
      func_0x00010c1a1e00(uVar8);
      func_0x00010c222da0(uVar8);
      goto LAB_107ebaa60;
    }
    lVar10 = *(long *)(param_1 + lVar1);
    func_0x00010bf529e0();
    if (lVar10 != 1) goto LAB_107ebaa48;
    func_0x00010c1a1e00(uVar8);
    puVar5 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0ed100();
    if ((int)puVar6 != 2) {
      func_0x00010c0ed100(puVar5);
    }
    func_0x00010c222da0(uVar8);
    _objc_release(puVar5);
LAB_107ebaa98:
    uVar9 = uVar8;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (1 < uVar9) goto LAB_107ebab20;
    lVar10 = *(long *)(param_1 + lVar1);
    func_0x00010bf529e0();
    if (lVar10 == 1) {
      func_0x00010c1a1e00(uVar8);
      puVar5 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0ed100();
      if ((uint)puVar6 < 8) {
        func_0x00010c222da0(uVar8);
      }
      _objc_release(puVar5);
      goto LAB_107ebab20;
    }
  }
  else {
LAB_107ebaa60:
    if (puVar3 == (undefined *)0x0) goto LAB_107ebaa98;
    uVar9 = uVar8;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar9 != 0) goto LAB_107ebab20;
  }
  func_0x00010c1a1e00(uVar8);
  func_0x00010c222da0(uVar8);
LAB_107ebab20:
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_3);
  return 1;
}



/* Entry: 107ebab64; end: 107ebac87; -[SCCloudCreateOrExtendEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebab64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af4c0;
  lVar5 = (long)_DAT_112771048;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_4);
  func_0x00010bf97200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112771040);
    lVar2 = param_1;
    func_0x00010c0ac020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c293fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2938,uVar3,lVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010bfbdda0(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 107ebac88; end: 107ebb0a3; -[SCCloudCreateOrExtendEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Possible PIC construction at 0x000107ebadec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ebadf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebac88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  lVar12 = (long)_DAT_11277104c;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        uVar11 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        uVar6 = uVar11;
        func_0x00010bf19ac0();
        if ((int)uVar6 == 1) goto code_r0x00010c241220;
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126d8270;
  _objc_alloc();
  func_0x00010c0093a0();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  FUN_107ee8930(uVar7,*(undefined8 *)(param_1 + _DAT_112771050),
                *(undefined8 *)(param_1 + _DAT_112771054));
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112771048;
  uVar1 = (undefined4)*(undefined8 *)(param_1 + lVar12);
  func_0x00010bfbdda0();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_107ebb0ac;
  puStack_178 = &UNK_110a112b0;
  uStack_148 = in_stack_00000020;
  uStack_140 = in_stack_00000028;
  uStack_170 = uVar7;
  uStack_168 = param_3;
  lStack_160 = param_1;
  uStack_158 = param_7;
  uStack_150 = param_6;
  uStack_138 = uVar1;
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  uVar11 = uVar7;
  FUN_107eecc84(param_3,uVar7,uVar8,0,puVar4,puVar5,param_6,param_7,param_4,0,6,uVar10,
                in_stack_00000020,&puStack_190);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar14 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar11,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ebb0a4; end: 107ebb0ab;  */

void FUN_107ebb0a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ebb0ac; end: 107ebb25f;  */

void FUN_107ebb0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_107f59738(param_3,uVar8,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4aa0();
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f98a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed78a0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ebb260; end: 107ebb617; -[SCCloudCreateOrExtendEntryOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebb260(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x27;
  undefined *puVar15;
  undefined *unaff_x28;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = (long)_DAT_112771048;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af4c0;
  ppuVar3 = *(undefined ***)(param_1 + lVar11);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar15 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar15;
  func_0x00010bf529e0();
  puVar5 = PTR_PTR_1126bc830;
  puStack_148 = puVar4;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a20();
  func_0x00010c1da4e0(puVar5);
  lStack_140 = param_3;
  func_0x00010c0b4ca0(param_3);
  func_0x00010c1fce60(puVar5);
  if (puVar15 == (undefined *)0x0) {
    func_0x00010c07b240(*(undefined8 *)(param_1 + lVar11));
    func_0x00010c210ec0(puVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar5);
    _objc_release(uVar2);
  }
  puStack_158 = puVar5;
  func_0x00010c210e00(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar11 = (long)_DAT_11277104c;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar14 = *(long *)(param_1 + lVar11);
  _objc_retain(lVar14);
  uVar2 = 0x10;
  lVar11 = lVar14;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar12 = *plStack_120;
    ppuVar3 = &PTR_PTR_1126bc000;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar14);
        }
        unaff_x28 = PTR_PTR_1126af4d0;
        uVar2 = *(undefined8 *)(lStack_128 + param_3 * 8);
        func_0x00010c241220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (unaff_x28 != (undefined *)0x0) {
          puVar15 = PTR_PTR_1126bc7f8;
          func_0x00010bf35100(PTR_PTR_1126bc7f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7000();
          func_0x00010befa120(puVar4);
          _objc_release(puVar15);
        }
        _objc_release(unaff_x28);
        param_3 = param_3 + 1;
      } while (lVar11 != param_3);
      uVar2 = 0x10;
      lVar11 = lVar14;
      func_0x00010bf52a60();
      unaff_x27 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(lVar14);
  puVar1 = puStack_150;
  puVar6 = puStack_150;
  FUN_107ee8a94(puStack_150,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puStack_158;
  func_0x00010c12e860(puStack_158);
  puVar15 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar6);
  func_0x00010bfed320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  puVar10 = puVar15;
  func_0x00010c0670a0(puVar5);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puStack_148);
  _objc_release(lStack_140);
  _objc_release(param_4);
  _objc_release(lStack_138);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_290;
    puStack_190 = puVar5;
    puStack_178 = puVar1;
    pcStack_168 = FUN_107ebb618;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = (undefined8 *)puVar7;
    puStack_1c0 = unaff_x28;
    uStack_1b8 = unaff_x27;
    puStack_1b0 = puVar15;
    puStack_1a8 = puVar4;
    lStack_1a0 = param_3;
    ppuStack_198 = ppuVar3;
    puStack_188 = puVar6;
    uStack_180 = param_4;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(puVar10);
    _objc_retain(uVar2);
    if (puVar7 != (undefined *)0x0) {
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      lStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      plStack_280 = (long *)0x0;
      puVar4 = puVar7;
      func_0x00010bf52a60();
      puVar8 = puVar9;
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_280;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_280 != lVar11) {
              _objc_enumerationMutation(puVar7);
            }
            uVar13 = *(undefined8 *)(lStack_288 + (long)puVar15 * 8);
            puVar5 = puVar10;
            func_0x00010c13a8c0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bb0c0();
            _objc_release(puVar5);
            puVar5 = PTR_PTR_1126d82b0;
            func_0x00010c0c5180(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7ea40(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar2);
            _objc_release(puVar5);
            _objc_release(uVar13);
            puVar15 = puVar15 + 1;
          } while (puVar4 != puVar15);
          puVar4 = puVar7;
          puVar8 = &uStack_290;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
    }
    _objc_release(uVar2);
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    if (puVar8 != (undefined8 *)0x0) {
      func_0x00010c0b8600(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ebb618; end: 107ebb7b3; -[SCCloudCreateOrExtendEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ebb618(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar4 = puVar5;
    if (puVar1 != (undefined1 *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          uVar2 = param_4;
          func_0x00010c13a8c0(param_4,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar2);
          puVar3 = PTR_PTR_1126d82b0;
          func_0x00010c0c5180(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7ea40(puVar3,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(param_5,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(uVar6);
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = param_3;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (puVar4 != (undefined8 *)0x0) {
      pcStack_138 = FUN_107ebb7b4;
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_107ebb820;
      puStack_150 = &UNK_11085a2d8;
      puStack_148 = param_3;
      puStack_140 = &stack0xfffffffffffffff0;
      func_0x00010c0b8600(puVar4,param_2,&puStack_168);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107ebb7b4; end: 107ebb81f; -[SCCloudCreateOrExtendEntryOperation changedSnapContextsWithEntryUpdate:] */

void FUN_107ebb7b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107ebb820;
    puStack_20 = &UNK_11085a2d8;
    uStack_18 = param_1;
    func_0x00010c0b8600(param_3,param_2,&puStack_38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ebb820; end: 107ebb957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebb820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771060);
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = (long)_DAT_112771048;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010bf97200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c079400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23f7c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ebb958; end: 107ebb997; -[SCCloudCreateOrExtendEntryOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ebb958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0808c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ebb998; end: 107ebbfef; -[SCCloudCreateOrExtendEntryOperation _updateEntryFromCloudFS:networker:dataObjectContext:logger:queue:snapsUploadInfo:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebb998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

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
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126af4c0;
  lVar12 = (long)_DAT_112771048;
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf97200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar8 = puVar2;
  FUN_107ee8a94(puVar2,*(undefined8 *)(param_1 + _DAT_11277104c));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar3;
  FUN_107ee8a94(puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf97200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010bf9e140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010bf977c0(puVar1);
  func_0x00010c196b20(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bfbdda0(puVar1);
  FUN_107ee8bec((long)(int)puVar7);
  func_0x00010c196ba0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2046e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a8980(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c15e520(puVar1);
  func_0x00010c1fce80(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar1;
    func_0x00010bf8b0a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c185380(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x00010c07b240(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c1b3980(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_1 + lVar12);
    func_0x00010c2711a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c266aa0(puVar1);
    func_0x00010c1b3980(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c266b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216240(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (*(long *)(param_1 + _DAT_112771058) == 0) {
    puVar8 = puVar1;
    func_0x00010c266980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = puVar1;
      func_0x00010c266980(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c1b7800(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
  }
  else {
    func_0x00010c26f320();
    func_0x00010c1b7800(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar8 = PTR_PTR_1126d8288;
  func_0x00010c2b1dc0(PTR_PTR_1126d8288);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bf21f60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_retain(param_9);
  _objc_retain(param_10);
  ppuVar10 = &PTR____CFConstantStringClassReference_110ec2858;
  func_0x00010c25f400(param_4);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(param_9);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar10);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar10);
  puVar3 = puVar2;
  func_0x00010c15f8c0();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar3 == (undefined *)0x7d0) {
    puVar1 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_8 + 0x20) + 0x10))(*(long *)(param_8 + 0x20),puVar3);
  }
  else {
    lVar11 = *(long *)(param_8 + 0x28);
    func_0x00010c15f8c0(puVar2);
    puVar3 = puVar2;
    func_0x00010bf96fc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf148e0(puVar2);
    puVar4 = puVar2;
    func_0x00010bf66200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ebbff0; end: 107ebc15f;  */

void FUN_107ebbff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ebc160; end: 107ebc1a7;  */

void FUN_107ebc160(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ebc1a8; end: 107ebc4c3; -[SCCloudCreateOrExtendEntryOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebc1a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 6;
  func_0x00010bafc234(6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_112771048;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_release(puVar3);
  lVar6 = (long)_DAT_11277104c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a112e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e268d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a11300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28b8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e520(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21d8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28d8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771040));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar5 = *(long *)(param_1 + _DAT_112771060);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ebc4c4; end: 107ebc573;  */

void FUN_107ebc4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ebc574; end: 107ebc68f; -[SCCloudCreateOrExtendEntryOperation eligibleForOutOfOrderExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebc574(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11277104c);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          bVar4 = false;
          goto LAB_107ebc650;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107ebc650:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar4;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar3 = *(long *)(lVar3 + _DAT_11277104c);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_210;
    do {
      lVar6 = 0;
      do {
        if (*plStack_210 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_218 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          bVar4 = false;
          goto LAB_107ebc76c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107ebc76c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return bVar4;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(lVar3 + _DAT_112771048);
  func_0x00010c13f6e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar2 != 0;
}



/* Entry: 107ebc690; end: 107ebc7ab; -[SCCloudCreateOrExtendEntryOperation doesNotRequireMediaUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebc690(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11277104c);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar1 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          bVar4 = false;
          goto LAB_107ebc76c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  bVar4 = true;
LAB_107ebc76c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar4;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(lVar3 + _DAT_112771048);
  func_0x00010c13f6e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar2 != 0;
}



/* Entry: 107ebc7ac; end: 107ebc7eb; -[SCCloudCreateOrExtendEntryOperation isOperationFromRetryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebc7ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771048);
  func_0x00010c13f6e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107ebc7ec; end: 107ebc88b; -[SCCloudCreateOrExtendEntryOperation allMediaUploadsCompleteWithBoltDataUploader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebc7ec(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010bf879c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + (long)_DAT_11277104c);
    func_0x00010bfaea20(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110a11320);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107ebc88c; end: 107ebc893; -[SCCloudCreateOrExtendEntryOperation requiresSyncStatusUpdate] */

undefined8 FUN_107ebc88c(void)

{
  return 1;
}



/* Entry: 107ebc894; end: 107ebc89b; -[SCCloudCreateOrExtendEntryOperation needRunImmediately] */

undefined8 FUN_107ebc894(void)

{
  return 0;
}



/* Entry: 107ebc89c; end: 107ebcb7b; -[SCCloudCreateOrExtendEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107ebc89c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar8 = *(long *)(param_1 + _DAT_11277104c);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_150,auStack_108,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        puVar5 = PTR_PTR_1126af4d0;
        uVar4 = *(undefined8 *)(lStack_148 + lVar7 * 8);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0(puVar5,param_2,uVar4,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (puVar5 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar5);
          puVar6 = puVar5;
          func_0x00010c241220(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar6);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_150,auStack_108,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 != (undefined *)0x0) {
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107ebcb7c;
    puStack_170 = &UNK_110848ba8;
    _objc_retain(puVar1);
    puStack_168 = puVar1;
    _objc_retain(puVar2);
    puStack_160 = puVar2;
    _objc_retain(param_4);
    puStack_1b8 = puVar5;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_107ebcbd8;
    puStack_1a0 = &UNK_1108bbd78;
    uStack_158 = param_4;
    _objc_retain(puVar1);
    puStack_198 = puVar1;
    _objc_retain(param_3);
    lStack_190 = param_3;
    func_0x00010c0f8520(param_4,param_2,&puStack_188,param_6,&puStack_1b8);
    _objc_release(lStack_190);
    _objc_release(puStack_198);
    _objc_release(uStack_158);
    _objc_release(puStack_160);
    _objc_release(puStack_168);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_3 + 0x20));
  puVar1 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0(PTR_PTR_1126bc810,param_2,*(undefined8 *)(param_3 + 0x28),
                      *(undefined8 *)(param_3 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf00(PTR_PTR_1126bc818,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 107ebcb7c; end: 107ebcbd7;  */

void FUN_107ebcb7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0(PTR_PTR_1126bc810,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf00(PTR_PTR_1126bc818,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ebcbd8; end: 107ebcccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcbd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
      func_0x0001080194b4(*(undefined8 *)(lVar6 * 8),*(undefined8 *)(param_1 + 0x28));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar5 + _DAT_11277104c);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107ebccd0; end: 107ebccff; -[SCCloudCreateOrExtendEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebccd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277104c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebcd00; end: 107ebcd2f; -[SCCloudCreateOrExtendEntryOperation snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcd00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277104c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebcd30; end: 107ebcd5f; -[SCCloudCreateOrExtendEntryOperation detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcd30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771050);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebcd60; end: 107ebcd8f; -[SCCloudCreateOrExtendEntryOperation miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcd60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771054);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebcd90; end: 107ebcd9f; -[SCCloudCreateOrExtendEntryOperation numberOfSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcd90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277104c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107ebcda0; end: 107ebcdcf; -[SCCloudCreateOrExtendEntryOperation dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebcda0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277105c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebcdd0; end: 107ebce67; -[SCCloudCreateOrExtendEntryOperation isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ebcdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771048);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 107ebce68; end: 107ebcf37; -[SCCloudCreateOrExtendEntryOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebce68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771064,0);
  _objc_storeStrong(param_1 + _DAT_112771060,0);
  _objc_storeStrong(param_1 + _DAT_112771058,0);
  _objc_storeStrong(param_1 + _DAT_11277103c,0);
  _objc_storeStrong(param_1 + _DAT_11277105c,0);
  _objc_storeStrong(param_1 + _DAT_112771054,0);
  _objc_storeStrong(param_1 + _DAT_112771050,0);
  _objc_storeStrong(param_1 + _DAT_11277104c,0);
  _objc_storeStrong(param_1 + _DAT_112771048,0);
  _objc_storeStrong(param_1 + _DAT_112771044,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771040,0);
  return;
}



/* Entry: 107ebcf38; end: 107ebd173; -[SCCloudCreateOrExtendEntryOperationV2 initWithEntryPlaceholder:addSnapEntity:dataVaultEncryption:profile:userContext:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ebcf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fb950;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = param_5;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010bdc1800(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771068);
    *(long *)((long)puVar1 + (long)_DAT_112771068) = lVar4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277106c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771070;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771074);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771074) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf6f520();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771078);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771078) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf6f520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = param_4;
    FUN_107ee87e4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277107c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277107c) = uVar2;
    _objc_release(uVar3);
    lVar4 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771080);
    *(long *)((long)puVar1 + (long)_DAT_112771080) = lVar4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771084;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771088;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ebd174; end: 107ebd17b; -[SCCloudCreateOrExtendEntryOperationV2 type] */

undefined8 FUN_107ebd174(void)

{
  return 9;
}



/* Entry: 107ebd17c; end: 107ebd183; -[SCCloudCreateOrExtendEntryOperationV2 analyticsType] */

undefined8 FUN_107ebd17c(void)

{
  return 1;
}



/* Entry: 107ebd184; end: 107ebd1b3; -[SCCloudCreateOrExtendEntryOperationV2 requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebd184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771068);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ebd1b4; end: 107ebd24b; -[SCCloudCreateOrExtendEntryOperationV2 entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebd1b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771070);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uStack_30 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d82b8);
    func_0x00010c03abe0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ebd24c; end: 107ebd2b7; -[SCCloudCreateOrExtendEntryOperationV2 makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebd24c(void)

{
  _objc_alloc(PTR_PTR_1126d82b8);
  func_0x00010c03abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ebd2b8; end: 107ebd503; -[SCCloudCreateOrExtendEntryOperationV2 initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ebd2b8(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a68);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb950;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771068);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771068) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277106c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277106c) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf973c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771070);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771070) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c242480();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771074);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771074) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf6f600();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771078);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771078) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c0ce240();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_11277107c;
      uVar6 = *(undefined8 *)((long)ppuVar3 + lVar9);
      *(ulong *)((long)ppuVar3 + lVar9) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771080);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771080) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771084);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771084) = uVar4;
      _objc_release(uVar6);
      if (*(long *)((long)ppuVar3 + lVar9) == 0) {
        uVar5 = 1;
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)ppuVar3 + lVar9);
        *(undefined8 *)((long)ppuVar3 + lVar9) = uVar6;
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      _objc_release(param_3);
    }
    _objc_retain(ppuVar3);
    puVar8 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar8;
}



/* Entry: 107ebd504; end: 107ebd6f7; -[SCCloudCreateOrExtendEntryOperationV2 detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebd504(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = (long)_DAT_112771070;
  lVar2 = (long)_DAT_112771074;
  lVar3 = *(long *)(param_1 + lVar1);
  lVar8 = (long)_DAT_112771068;
  FUN_107ec673c(lVar3,*(undefined8 *)(param_1 + lVar2),*(undefined8 *)(param_1 + lVar8),param_3,
                param_6,param_5,param_4,8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    param_1 = (undefined *)0x0;
  }
  else {
    lVar7 = (long)_DAT_112771080;
    lVar6 = *(long *)(param_1 + lVar7);
    if (lVar6 == 0) {
      puVar4 = param_1;
      func_0x00010c0ac020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010c293fc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2958,
                          &PTR____CFConstantStringClassReference_110ec2978,puVar4,uVar5);
      _objc_release(uVar5);
      _objc_release(puVar4);
      lVar6 = *(long *)(param_1 + lVar7);
    }
    lVar7 = *(long *)(param_1 + lVar1);
    FUN_107ec6edc(lVar7,lVar6,*(undefined8 *)(param_1 + lVar8),param_5,param_4,8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      param_1 = (undefined *)0x0;
    }
    else if ((lVar3 == *(long *)(param_1 + lVar2)) && (lVar7 == *(long *)(param_1 + lVar1))) {
      _objc_retain(param_1);
    }
    else {
      puVar4 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      func_0x00010c00e960();
      param_1 = PTR_PTR_1126d7f30;
      _objc_alloc(PTR_PTR_1126d7f30);
      func_0x00010c010480();
      _objc_release(puVar4);
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ebd6f8; end: 107ebdf2b; -[SCCloudCreateOrExtendEntryOperationV2 executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ebd6f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  lVar15 = (long)_DAT_112771070;
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0(PTR_PTR_1126bf8c8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar13);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar7);
    _objc_release(puVar17);
  }
  else {
    puVar13 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf12220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500(puVar13);
  _objc_release(uVar1);
  func_0x00010c0f7a20(puVar13);
  func_0x00010c1da4e0(puVar13);
  lVar15 = (long)_DAT_112771074;
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  FUN_107f587dc(uVar1,*(undefined8 *)(param_1 + _DAT_112771078),
                *(undefined8 *)(param_1 + _DAT_11277107c),*(undefined8 *)(param_1 + _DAT_11277106c))
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
LAB_107ebd9e0:
    puVar7 = puVar13;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) goto LAB_107ebda24;
    puVar7 = *(undefined **)(param_1 + lVar15);
    func_0x00010bf59960(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(puVar13);
  }
  else {
    lVar4 = *(long *)(param_1 + lVar15);
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + lVar15);
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      func_0x00010bf59960(puVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf433a0();
      _objc_release(puVar17);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar7);
      if (lVar6 != 1) goto LAB_107ebda24;
      goto LAB_107ebd9e0;
    }
  }
  _objc_release(puVar7);
LAB_107ebda24:
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284fa0(puVar13);
  _objc_release(puVar7);
  puVar7 = puVar13;
  func_0x00010c245780(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010b704538(puVar7,uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar13);
  _objc_release(puVar17);
  _objc_release(uVar18);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126d82c0;
  func_0x00010c247f00(puVar13);
  func_0x00010c247520(uVar1);
  func_0x00010bf977a0(puVar7);
  func_0x00010c207320(puVar13);
  if (puVar2 == (undefined *)0x0) {
    uVar18 = uVar1;
    func_0x00010c0fd8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar13);
    _objc_release(puVar17);
    _objc_release(puVar7);
    _objc_release(uVar18);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined *)0x0;
    puVar17 = puVar7;
    func_0x00010b5fb890();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar13);
    _objc_release(puVar17);
    _objc_release(puVar7);
    puVar7 = *(undefined **)(param_1 + lVar15);
    func_0x00010c14be80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar13);
  }
  else {
    puVar7 = puVar13;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (puVar7 == (undefined *)0x0) {
      func_0x00010c1a1e00(puVar13);
      func_0x00010c222da0(puVar13);
    }
    puVar7 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0();
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    puVar17 = puVar7;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar17 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        uVar18 = *(undefined8 *)((long)puVar16 * 8);
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar18);
        puVar16 = puVar16 + 1;
      } while (puVar17 != puVar16);
      puVar17 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    if (*(long *)(param_1 + lVar15) == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = puVar7;
    FUN_107ee8a94(puVar7,puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(puVar3);
    puVar9 = puVar8;
    func_0x00010c0b8600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3a0(puVar13);
    puVar16 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puVar9);
    func_0x00010bfed320(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar13);
    _objc_release(puVar16);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    puVar16 = puVar11;
    func_0x00010b5fb890();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar17);
  }
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return 1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  puVar13 = *(undefined **)(*(long *)(param_3 + 0x20) + (long)_DAT_112771074);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar16;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 == puVar2) {
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0fd8c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    puVar7 = puVar16;
    func_0x00010c241220(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 107ebdf2c; end: 107ebe00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebdf2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771074);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fd8c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar3 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107ebe00c; end: 107ebe12f; -[SCCloudCreateOrExtendEntryOperationV2 isOperationValidBeforeRemoteSync:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ebe00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af4c0;
  lVar5 = (long)_DAT_112771070;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_4);
  func_0x00010bf97200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112771068);
    lVar2 = param_1;
    func_0x00010c0ac020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c293fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2938,uVar3,lVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010bfbdda0(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 107ebe130; end: 107ebeb6b; -[SCCloudCreateOrExtendEntryOperationV2 remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebe130(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_fffffffffffffdc0;
  undefined *puStack_1c8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar2 = PTR_PTR_1126bc810;
  lVar17 = (long)_DAT_112771074;
  uVar1 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf19ac0();
  if ((int)puVar4 == 1) {
    puVar4 = puVar2;
    func_0x00010c241220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126d8270;
  _objc_alloc();
  lVar10 = param_2;
  func_0x00010bf64980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0093a0();
  _objc_release(lVar10);
  uStack_88 = *(undefined8 *)(param_2 + lVar17);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_2 + _DAT_112771078);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(param_2 + _DAT_11277107c);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  FUN_107ee8930(puVar5,puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (in_stack_00000018 != 0) {
    puVar5 = PTR_PTR_1126d82c8;
    _objc_alloc();
    puVar6 = param_4;
    func_0x00010c0f98a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e920();
    uVar1 = *(undefined8 *)(param_2 + _DAT_11277108c);
    *(undefined **)(param_2 + _DAT_11277108c) = puVar5;
    _objc_release(uVar1);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  lVar19 = (long)_DAT_112771070;
  lVar10 = *(long *)(param_2 + lVar19);
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar10 == 8) {
    lVar17 = *(long *)(param_2 + lVar19);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(puVar6);
    if (lVar17 == 0) {
      puStack_1c8 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (puVar9 == (undefined *)0x8) {
        puVar9 = PTR_PTR_1126bc800;
        func_0x00010bfa7180();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar9;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        uStack_a0 = 0;
        puStack_1c8 = puVar12;
        func_0x000108020568();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        if (puStack_1c8 == (undefined *)0x0) {
          func_0x00010c0a1720(puVar6);
        }
        _objc_release(puVar9);
      }
      else {
        puStack_1c8 = (undefined *)0x0;
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(param_7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar17);
    ppuVar14 = *(undefined ***)(param_2 + lVar19);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + _DAT_11277108c);
    puVar5 = param_4;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_107ebeb6c;
    puStack_e8 = &UNK_110a11370;
    lStack_e0 = param_2;
    _objc_retain(puVar8);
    puStack_d8 = puVar8;
    puStack_d0 = param_4;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    _objc_retain(param_8);
    uStack_b8 = param_8;
    _objc_retain(in_stack_00000020);
    uStack_b0 = in_stack_00000020;
    _objc_retain(in_stack_00000028);
    uStack_a8 = in_stack_00000028;
    _objc_retain(param_4);
    puVar16 = puVar8;
    ppuVar15 = ppuVar14;
    FUN_107eecc84(param_4,puVar8,ppuVar14,puStack_1c8,puVar3,puVar4,param_7,param_8,param_5,uVar1,8,
                  puVar7,in_stack_00000020,&puStack_100);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar14);
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(puStack_d0);
    _objc_release(puStack_d8);
  }
  else {
    lVar10 = param_2;
    func_0x00010be1dd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbdda0(*(undefined8 *)(param_2 + lVar19));
    puVar5 = PTR_PTR_1126d81c0;
    _objc_retain(lVar10);
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    _objc_alloc(puVar5);
    func_0x00010c055ae0();
    puVar6 = puVar8;
    FUN_107f002c0(puVar8,puVar3,lVar10,1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(lVar10);
    puVar5 = puVar6;
    func_0x00010bf024c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c27dd80();
    _objc_release(puVar5);
    uVar11 = *(undefined8 *)(param_2 + lVar17);
    func_0x00010b5fa34c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c0b3760(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1620();
    _objc_release(puVar9);
    _objc_release(puVar5);
    puVar5 = param_4;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c06cfe0();
    _objc_release(puVar9);
    _objc_release(puVar5);
    puVar5 = param_4;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c077640();
    _objc_release(puVar9);
    _objc_release(puVar5);
    uVar1 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec01e4();
    _objc_release(uVar1);
    puStack_1c8 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar18 = *(undefined8 *)(param_2 + lVar17);
    uVar1 = *(undefined8 *)(param_2 + _DAT_11277108c);
    _objc_retain(uVar18);
    func_0x00010c27dd80(param_2);
    puVar9 = param_4;
    puVar16 = puVar4;
    func_0x000107efbe18(param_1,param_4,puVar4,param_7,param_5,param_8,uVar1,param_2,param_10,puVar6
                        ,puStack_1c8,
                        CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffdc0 >> 0x10),
                                          (char)puVar13),(char)puVar12));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_107ebec60;
    puStack_120 = &UNK_110a113a0;
    _objc_retain(puVar6);
    puStack_118 = puVar6;
    puStack_110 = puStack_1c8;
    _objc_retain(param_4);
    puStack_108 = param_4;
    _objc_retain(puStack_1c8);
    puVar12 = puVar9;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar5;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107ebecdc;
    puStack_170 = &UNK_110a11430;
    puStack_168 = param_4;
    uStack_160 = uVar11;
    puStack_140 = puVar7;
    _objc_retain(param_10);
    uStack_158 = param_10;
    uStack_150 = uVar18;
    puStack_148 = puVar6;
    _objc_retain(puVar6);
    _objc_retain(uVar11);
    _objc_retain(param_4);
    ppuVar15 = &puStack_188;
    puVar5 = puVar12;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_148);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(puStack_168);
    _objc_release(puVar12);
    _objc_release(puStack_108);
    _objc_release(puStack_110);
    _objc_release(puStack_118);
    _objc_release(uVar18);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar11);
  }
  _objc_release(param_4);
  _objc_release(puStack_1c8);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  uVar11 = *(undefined8 *)(param_5 + 0x28);
  _objc_retain(ppuVar15);
  _objc_retain(puVar16);
  func_0x00010bfb1920(uVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar15;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  ppuVar15 = ppuVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7880(uVar1);
  _objc_release(puVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 107ebeb6c; end: 107ebec5f;  */

void FUN_107ebeb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7880(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ebec60; end: 107ebecdb;  */

void FUN_107ebec60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0dc640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_107f10fbc(param_2,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ebecdc; end: 107ebeffb;  */

void FUN_107ebecdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2537c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1760(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a16c0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107ebeffc;
  uStack_70 = 0x107ebf00c;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107ebeffc;
  uStack_a0 = 0x107ebf00c;
  uStack_98 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar9);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0c0800(uVar1);
  puVar4 = PTR_PTR_1126af5d0;
  if (puStack_b8[5] == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ebeffc; end: 107ebf013;  */

void FUN_107ebeffc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ebf014; end: 107ebf1e7;  */

void FUN_107ebf014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b3760(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1660();
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126d82d0;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf97280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010400();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c279ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bface80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ebf1e8(param_2,1,uVar2,uVar6);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(lVar5);
  _objc_retain(uVar2);
  lVar4 = lVar5;
  func_0x00010c247520();
  if (((uint)lVar4 < 8) && ((1 << (ulong)((uint)lVar4 & 0x1f) & 0x8aU) != 0)) {
    uVar6 = uVar2;
    func_0x00010c0c7fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar4 = lVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c14a7c0(uVar3);
    }
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107ebf1e8; end: 107ebf327;  */

void FUN_107ebf1e8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0c6c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2413a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_2 == 0) {
    func_0x000107f19e1c(uVar4,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010befb600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    FUN_107f19eec(uVar4,uVar2,param_3,param_4);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ebf328; end: 107ebf42f;  */

void FUN_107ebf328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_107f18844(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1660();
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c279ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bface80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  FUN_107ebf1e8(uVar1,0,uVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ebf430; end: 107ebf933; -[SCCloudCreateOrExtendEntryOperationV2 commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebf430(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar20 = (long)_DAT_112771070;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af4c0;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a20();
  func_0x00010c1da4e0(puVar7);
  func_0x00010c0b4ca0(ppuVar3);
  func_0x00010c1fce60(puVar7);
  if (puVar6 == (undefined *)0x0) {
    func_0x00010c07b240(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c210ec0(puVar7);
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar7);
    _objc_release(uVar2);
  }
  lVar8 = *(long *)(param_1 + lVar20);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f40(puVar7);
    _objc_release(uVar2);
  }
  puVar6 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771074);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  ppuVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126d82d8;
  _objc_opt_class(PTR_PTR_1126d82d8);
  ppuVar12 = ppuVar10;
  _objc_opt_isKindOfClass(ppuVar10,puVar11);
  ppuVar1 = ppuVar10;
  if (((ulong)ppuVar12 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = ppuVar1;
  func_0x00010c0c6f20(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar10;
  func_0x00010bf7ef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4520(puVar9);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  puVar11 = puVar6;
  func_0x00010bfd9dc0();
  if ((int)puVar11 != 0) {
    ppuVar10 = ppuVar1;
    func_0x00010c0efe20(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar10;
    func_0x00010bf7ef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7560(puVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar10);
  }
  func_0x00010c210e20(puVar9);
  puVar11 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = puVar5;
  FUN_107ee8a94(puVar5,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e860(puVar7);
  puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0(puVar13);
  func_0x00010bfed320(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar14;
  func_0x00010c0670a0(puVar7);
  _objc_release(puVar14);
  ppuVar17 = &PTR____CFConstantStringClassReference_110ec3618;
  ppuVar12 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  ppuVar15 = ppuVar12;
  _objc_opt_isKindOfClass(ppuVar12,puVar14);
  ppuVar10 = ppuVar12;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar10 = (undefined **)0x0;
  }
  _objc_retain(ppuVar10);
  _objc_release(ppuVar12);
  if (ppuVar10 != (undefined **)0x0) {
    puVar18 = (undefined *)0x0;
    puVar14 = PTR_PTR_1126bc800;
    param_5 = param_4;
    func_0x00010bfa7180(PTR_PTR_1126bc800);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126bc828;
    func_0x00010bf35120(PTR_PTR_1126bc828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f40();
    _objc_release(puVar16);
    _objc_release(puVar14);
    ppuVar17 = ppuVar12;
  }
  _objc_release(ppuVar10);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar17);
  if (ppuVar17 != (undefined **)0x0) {
    _objc_retain(param_5);
    func_0x00010c13a8c0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb0c0();
    _objc_release(puVar18);
    puVar4 = PTR_PTR_1126d82b0;
    ppuVar3 = ppuVar17;
    func_0x00010c0c5180(ppuVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ea40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar17);
  return;
}



/* Entry: 107ebf934; end: 107ebf9f3; -[SCCloudCreateOrExtendEntryOperationV2 cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ebf934(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_5);
    func_0x00010c13a8c0(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb0c0();
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126d82b0;
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ea40(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_5,param_2,puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ebf9f4; end: 107ebfb73; -[SCCloudCreateOrExtendEntryOperationV2 changedSnapContextsWithEntryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebf9f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar6 = PTR_PTR_1126d8278;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771084);
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar22 = (long)_DAT_112771070;
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfbdda0();
  lVar22 = param_1;
  func_0x00010c079400();
  uVar20 = *(undefined8 *)(param_1 + _DAT_112771068);
  lVar18 = lVar3;
  uVar19 = uVar4;
  func_0x00010c23f7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = &puStack_60;
  uVar17 = 1;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar6 = puStack_60;
  _objc_retain(uStack_68);
  _objc_retain(puVar6);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107ebfe5c;
  puStack_f0 = &UNK_110a11490;
  puStack_e8 = puVar6;
  uStack_e0 = uStack_68;
  _objc_retain(uStack_68);
  _objc_retain(puVar6);
  _objc_retain(uVar20);
  _objc_retain(lVar22);
  _objc_retain(uVar5);
  _objc_retain(uVar19);
  _objc_retain(lVar18);
  _objc_retain(uVar17);
  _objc_retain(ppuVar16);
  ppuVar8 = &puStack_108;
  _objc_retainBlock();
  uVar2 = uVar17;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar17;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be1dd40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar1 + _DAT_11277108c);
  uVar11 = uVar17;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar17;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  FUN_107f01788(uVar4,uVar10,lVar3,lVar22,uVar20,0,ppuVar16,0,0,uVar19,lVar18,uVar21,uVar12,uVar5,
                uVar17,uVar15,ppuVar8);
  _objc_release(uVar20);
  _objc_release(lVar22);
  _objc_release(uVar5);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(ppuVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(ppuVar8);
  _objc_release(uStack_e0);
  _objc_release(puStack_e8);
  _objc_release(uStack_68);
  _objc_release(puVar6);
  return;
}



/* Entry: 107ebfb74; end: 107ebfe5b; -[SCCloudCreateOrExtendEntryOperationV2 _updateEntryForAddSnapEntity:dependencyProvider:thumbnailFileGenerator:dataVault:networker:snapsUploadInfo:snapRequestInfoResult:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ebfb74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107ebfe5c;
  puStack_80 = &UNK_110a11490;
  uStack_78 = param_11;
  uStack_70 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uVar2 = param_4;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be1dd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11277108c);
  uVar7 = param_4;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  FUN_107f01788(uVar3,uVar5,lVar6,param_8,param_9,0,param_3,0,0,param_6,param_5,uVar12,uVar8,param_7
                ,param_4,uVar11,ppuVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_10);
  _objc_release(param_11);
  return;
}



/* Entry: 107ebfe5c; end: 107ebff87;  */

void FUN_107ebfe5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0a00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ebff88; end: 107ebff93;  */

void FUN_107ebff88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ebff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ebff94; end: 107ec0053;  */

void FUN_107ebff94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99480(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_2,0,param_3,0,0,param_4,
                      &PTR____CFConstantStringClassReference_110ec2878);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


