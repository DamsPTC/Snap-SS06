/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056bbd10; end: 1056bbf7b; -[SCSnapDocMediaEditorImpl _updateMediaReferenceWithContentWriterAsync:mediaId:promise:] */

void FUN_1056bbd10(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be4f9a0(param_1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1056b7a24;
  uStack_60 = 0x1056b7a34;
  puVar2 = param_1;
  func_0x00010bde1520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = puVar2;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = 0;
  func_0x00010c2879c0();
  lVar1 = lStack_88;
  _objc_retain(lStack_88);
  _objc_release(uVar3);
  _objc_initWeak(auStack_90,param_1);
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_4);
  func_0x00010be97f00(param_1);
  func_0x00010bed1640(param_1);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_5);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    param_1 = PTR_PTR_1126bcf18;
    _objc_alloc(PTR_PTR_1126bcf18);
    func_0x00010c029580();
    func_0x00010c0d9840(uVar3);
  }
  else {
    func_0x00010be0b280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_5);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056bbf7c; end: 1056bc04b;  */

void FUN_1056bbf7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x0001079521d8(lVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar1;
    func_0x00010c23fe00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079521d8(lVar4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar2 != 0 && lVar4 != 0) {
      lVar3 = lVar2;
      func_0x00010c09d7e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bf020(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056bc04c; end: 1056bc067; -[SCSnapDocMediaEditorImpl _lockSnapdocLock] */

void FUN_1056bc04c(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = 0x78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c09fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_lock_1126058b8);
  return;
}



/* Entry: 1056bc068; end: 1056bc083; -[SCSnapDocMediaEditorImpl _unlockSnapdocLock] */

void FUN_1056bc068(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = 0x78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1056bc084; end: 1056bc15f; -[SCSnapDocMediaEditorImpl _errorWithCode:message:] */

undefined **
FUN_1056bc084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long lVar9;
  undefined **unaff_x25;
  undefined1 *puVar10;
  undefined **unaff_x26;
  long lVar11;
  long lVar12;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [128];
  long lStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010bf72080(puVar7,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110df6058;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar6 = &puStack_180;
    pcStack_58 = FUN_1056bc160;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar4);
    lStack_178 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lVar1 = *(long *)(puVar7 + 0x88);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = auStack_140;
    lVar12 = lVar9;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar11 = *plStack_170;
      lVar1 = lVar12;
      do {
        lVar12 = 0;
        do {
          if (*plStack_170 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          ppuVar8 = *(undefined ***)(lStack_178 + lVar12 * 8);
          unaff_x23 = ppuVar8;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c0c55e0();
          unaff_x26 = ppuVar4;
          func_0x00010c0c55e0();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x25 == unaff_x26) {
            _objc_retain(ppuVar8);
            goto LAB_1056bc2a8;
          }
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        puVar2 = auStack_140;
        lVar1 = lVar9;
        ppuVar6 = &puStack_180;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    ppuVar8 = (undefined **)0x0;
LAB_1056bc2a8:
    _objc_release(lVar9);
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c0) {
      ___stack_chk_fail();
      pcStack_188 = FUN_1056bc2f8;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_1d0 = unaff_x26;
      ppuStack_1c8 = unaff_x25;
      ppuStack_1c0 = unaff_x24;
      ppuStack_1b8 = unaff_x23;
      ppuStack_1b0 = ppuVar8;
      lStack_1a8 = lVar1;
      lStack_1a0 = lVar9;
      ppuStack_198 = ppuVar4;
      ppuStack_190 = &puStack_60;
      _objc_retain(ppuVar6);
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined1 *)0x0) {
        lVar9 = *plStack_290;
        do {
          puVar10 = (undefined1 *)0x0;
          do {
            if (*plStack_290 != lVar9) {
              _objc_enumerationMutation(puVar2);
            }
            ppuVar8 = *(undefined ***)(lStack_298 + (long)puVar10 * 8);
            ppuVar4 = ppuVar8;
            func_0x00010c0c55e0();
            ppuVar5 = ppuVar6;
            func_0x00010c0c55e0();
            if (ppuVar4 == ppuVar5) {
              _objc_retain(ppuVar8);
              goto LAB_1056bc3ec;
            }
            puVar10 = puVar10 + 1;
          } while (puVar3 != puVar10);
          puVar3 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,&uStack_2a0,auStack_258,0x10);
        } while (puVar3 != (undefined1 *)0x0);
      }
      ppuVar8 = (undefined **)0x0;
LAB_1056bc3ec:
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _os_unfair_lock_lock(ppuVar6 + 0xe);
        puVar7 = ppuVar6[0xd];
        ppuVar6[0xd] = puVar7 + 1;
        _os_unfair_lock_unlock(ppuVar6 + 0xe);
        return (undefined **)(puVar7 + 1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 1056bc160; end: 1056bc2f7; -[SCSnapDocMediaEditorImpl _layerWithMediaId:] */

undefined1 * FUN_1056bc160(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  long lVar8;
  undefined1 *unaff_x25;
  undefined1 *puVar9;
  undefined1 *unaff_x26;
  long lVar10;
  long lVar11;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  long lStack_150;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar2 = auStack_f0;
  lVar11 = lVar8;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_120;
    lVar1 = lVar11;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        puVar7 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        unaff_x23 = puVar7;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0c55e0();
        unaff_x26 = param_3;
        func_0x00010c0c55e0();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if (unaff_x25 == unaff_x26) {
          _objc_retain(puVar7);
          goto LAB_1056bc2a8;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar2 = auStack_f0;
      lVar1 = lVar8;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_1056bc2a8:
  _objc_release(lVar8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1056bc2f8;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = puVar7;
    lStack_158 = lVar1;
    lStack_150 = lVar8;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar8 = *plStack_240;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar8) {
            _objc_enumerationMutation(puVar2);
          }
          puVar7 = *(undefined1 **)(lStack_248 + (long)puVar9 * 8);
          puVar4 = puVar7;
          func_0x00010c0c55e0();
          puVar5 = (undefined1 *)puVar6;
          func_0x00010c0c55e0();
          if (puVar4 == puVar5) {
            _objc_retain(puVar7);
            goto LAB_1056bc3ec;
          }
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_250,auStack_208,0x10);
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar7 = (undefined1 *)0x0;
LAB_1056bc3ec:
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _os_unfair_lock_lock((undefined1 *)((long)puVar6 + 0x70));
      lVar8 = *(long *)((long)puVar6 + 0x68);
      *(undefined1 **)((long)puVar6 + 0x68) = (undefined1 *)(lVar8 + 1);
      _os_unfair_lock_unlock((undefined1 *)((long)puVar6 + 0x70));
      return (undefined1 *)(lVar8 + 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 1056bc2f8; end: 1056bc437; -[SCSnapDocMediaEditorImpl _mediaReferenceWithId:snapDoc:] */

long FUN_1056bc2f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        lVar4 = *(long *)(lStack_118 + lVar6 * 8);
        lVar2 = lVar4;
        func_0x00010c0c55e0();
        lVar3 = param_3;
        func_0x00010c0c55e0();
        if (lVar2 == lVar3) {
          _objc_retain(lVar4);
          goto LAB_1056bc3ec;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  lVar4 = 0;
LAB_1056bc3ec:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return lVar4;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(param_3 + 0x70);
  lVar1 = *(long *)(param_3 + 0x68) + 1;
  *(long *)(param_3 + 0x68) = lVar1;
  _os_unfair_lock_unlock(param_3 + 0x70);
  return lVar1;
}



/* Entry: 1056bc438; end: 1056bc473; -[SCSnapDocMediaEditorImpl _incrementAndGetMediaListID] */

long FUN_1056bc438(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x70);
  lVar1 = *(long *)(param_1 + 0x68) + 1;
  *(long *)(param_1 + 0x68) = lVar1;
  _os_unfair_lock_unlock(param_1 + 0x70);
  return lVar1;
}



/* Entry: 1056bc474; end: 1056bc56b; +[SCSnapDocMediaEditorImpl _removeClaimForMediaReferences:snapDocKey:snapDocManager:performer:] */

void FUN_1056bc474(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1056bc56c;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_5);
    uStack_48 = param_5;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(param_6,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056bc56c; end: 1056bc57f;  */

void FUN_1056bc56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeClaimForKey_mediaReference_112628808,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1056bc580; end: 1056bc587; -[SCSnapDocMediaEditorImpl mediaChangeObservable] */

undefined8 FUN_1056bc580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1056bc588; end: 1056bc58f; -[SCSnapDocMediaEditorImpl shouldKeepClaimOnDealloc] */

undefined1 FUN_1056bc588(long param_1)

{
  return *(undefined1 *)(param_1 + 0x85);
}



/* Entry: 1056bc590; end: 1056bc597; -[SCSnapDocMediaEditorImpl setShouldKeepClaimOnDealloc:] */

void FUN_1056bc590(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x85) = param_3;
  return;
}



/* Entry: 1056bc598; end: 1056bc59f; -[SCSnapDocMediaEditorImpl snapDoc] */

undefined8 FUN_1056bc598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1056bc5a0; end: 1056bc5a7; -[SCSnapDocMediaEditorImpl serialSnapDocUpdatePerformer] */

undefined8 FUN_1056bc5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056bc5a8; end: 1056bc5d7; -[SCSnapDocMediaEditorImpl setSerialSnapDocUpdatePerformer:] */

void FUN_1056bc5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056bc5d8; end: 1056bc68b; -[SCSnapDocMediaEditorImpl .cxx_destruct] */

void FUN_1056bc5d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 1056bc68c; end: 1056bc6ff; -[SCSnapDocMetadataEditorImpl initWithSnapDoc:] */

undefined1 * FUN_1056bc68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9a20;
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



/* Entry: 1056bc700; end: 1056bc72f; -[SCSnapDocMetadataEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056bc700(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056bc730; end: 1056bc78f; -[SCSnapDocMetadataEditorImpl playbackCharacteristics] */

void FUN_1056bc730(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056bc790; end: 1056bc7df; -[SCSnapDocMetadataEditorImpl setPlaybackCharacteristics:] */

void FUN_1056bc790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056bc7e0; end: 1056bc89b; -[SCSnapDocMetadataEditorImpl location] */

void FUN_1056bc7e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
    _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c09ea00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b3c0();
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar5 = param_1;
    func_0x00010c09ea00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b55a0();
    func_0x00010c021a60(param_1,uVar5,puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056bc89c; end: 1056bc95b; -[SCSnapDocMetadataEditorImpl setLocation:] */

void FUN_1056bc89c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcf28;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010bf51c80(param_5);
  func_0x00010c1b9520(puVar1);
  func_0x00010bf51c80(param_5);
  func_0x00010c1c0e80(param_2,puVar1);
  func_0x00010bf01f00(param_5);
  func_0x00010c167920(puVar1);
  func_0x00010bfe4080(param_5);
  func_0x00010c1a90c0(puVar1);
  func_0x00010c249ca0(param_5);
  _objc_release(param_5);
  func_0x00010c207c40(param_2,puVar1);
  func_0x00010c1bf6c0(*(undefined8 *)(param_3 + 8),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056bc95c; end: 1056bc963; -[SCSnapDocMetadataEditorImpl weatherInfo] */

void FUN_1056bc95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_weatherInfo_112686578);
  return;
}



/* Entry: 1056bc964; end: 1056bc96b; -[SCSnapDocMetadataEditorImpl setWeatherInfo:] */

void FUN_1056bc964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c224bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setWeatherInfo__112666d18);
  return;
}



/* Entry: 1056bc96c; end: 1056bc973; -[SCSnapDocMetadataEditorImpl batteryStatus] */

void FUN_1056bc96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_batteryStatus_1125a3770)
  ;
  return;
}



/* Entry: 1056bc974; end: 1056bc97b; -[SCSnapDocMetadataEditorImpl setBatteryStatus:] */

void FUN_1056bc974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBatteryStatus__1126398f8);
  return;
}



/* Entry: 1056bc97c; end: 1056bca03; -[SCSnapDocMetadataEditorImpl createdTime] */

void FUN_1056bc97c(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdd660();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (iVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c270d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23fb40();
    func_0x00010bf655e0((double)uVar3 / 1000.0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056bca04; end: 1056bca8b; -[SCSnapDocMetadataEditorImpl setCreatedTime:] */

void FUN_1056bca04(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcf30;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c203d40(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c216040(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056bca8c; end: 1056bca93; -[SCSnapDocMetadataEditorImpl captureSessionId] */

void FUN_1056bca8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_captureSessionId_1125a9e28);
  return;
}



/* Entry: 1056bca94; end: 1056bca9b; -[SCSnapDocMetadataEditorImpl setCaptureSessionId:] */

void FUN_1056bca94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c179290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCaptureSessionId__11263bec0);
  return;
}



/* Entry: 1056bca9c; end: 1056bcadb; -[SCSnapDocMetadataEditorImpl captureMode] */

undefined8 FUN_1056bca9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30e80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056bcadc; end: 1056bcb17; -[SCSnapDocMetadataEditorImpl setCaptureMode:] */

void FUN_1056bcadc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056bcb18; end: 1056bcc0b; -[SCSnapDocMetadataEditorImpl contextAttachmentContextClientInfo] */

void FUN_1056bcb18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010bde82a0();
  if (lVar1 == 0x7fffffffffffffff) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0d7e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf51e00();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1056bcc0c; end: 1056bcdd7; -[SCSnapDocMetadataEditorImpl updateContextClientInfo:] */

void FUN_1056bcc0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde82a0();
  if (lVar1 == 0x7fffffffffffffff) {
    puVar3 = PTR_PTR_1126b5c10;
    _objc_opt_new();
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126b5c10;
    _objc_opt_new(PTR_PTR_1126b5c10);
    puVar2 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1056bcdbc;
    puVar4 = PTR_PTR_1126b25f0;
    _objc_opt_new(PTR_PTR_1126b25f0);
    puVar2 = puVar4;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4e0();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010bf0d7e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010bf0d7e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar7);
    _objc_release(param_3);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_1056bcdbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1056bcdd8; end: 1056bcee3; -[SCSnapDocMetadataEditorImpl exportedContentMetadata] */

void FUN_1056bcdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010be969e0(param_1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010be96780(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bcf38;
  _objc_alloc_init(PTR_PTR_1126bcf38);
  puVar3 = PTR_PTR_1126bcf40;
  _objc_alloc_init(PTR_PTR_1126bcf40);
  lVar4 = param_1;
  func_0x00010c067fc0();
  if (lVar4 != 0) {
    puVar5 = puVar3;
    func_0x00010c094680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar5);
  }
  if (lVar1 != 0) {
    func_0x00010c1ca440(puVar3,param_2,lVar1);
  }
  func_0x00010c176b80(puVar3,param_2,0);
  puVar5 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dea0(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1ad820(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056bcee4; end: 1056bcf4b; -[SCSnapDocMetadataEditorImpl fileEmbeddedMetadata] */

void FUN_1056bcee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9d3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056bcf4c; end: 1056bd167; -[SCSnapDocMetadataEditorImpl _retrieveMusicTrackIdFromSnapDoc:] */

ulong FUN_1056bcf4c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar10 = 0;
    do {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar4 = uVar9;
      func_0x00010bf0d0a0();
      if ((int)uVar4 == 1) {
        uVar4 = uVar9;
        func_0x00010bf4e080();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar3;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 != 0) {
          uVar5 = uVar3;
          func_0x00010c27f9c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfd95a0();
          if ((uVar6 & 1) == 0) {
            _objc_release(uVar5);
            _objc_release(uVar4);
          }
          else {
            uVar6 = uVar3;
            func_0x00010c27f9c0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0d3a00();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c277e80();
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            if (uVar8 != 0) {
              uVar10 = uVar3;
              func_0x00010c27f9c0(uVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar10;
              func_0x00010c0d3a00();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c277e80();
              _objc_release(uVar4);
              _objc_release(uVar10);
              _objc_release(uVar3);
              _objc_release(uVar9);
              return uVar5;
            }
          }
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar9);
      uVar10 = uVar10 + 1;
      uVar9 = *(ulong *)(param_1 + 8);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010bf0d820();
      _objc_release(uVar9);
    } while (uVar10 < uVar4);
  }
  return 0;
}



/* Entry: 1056bd168; end: 1056bd22f; -[SCSnapDocMetadataEditorImpl _retrieveLensIdFromSnapDoc:] */

void FUN_1056bd168(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd84e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (0 < lVar2) {
      lVar1 = param_3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ea0();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_1056bd210;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1056bd210:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056bd230; end: 1056bd31f; -[SCSnapDocMetadataEditorImpl _contextAttachmentIndex] */

ulong FUN_1056bd230(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar9 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf0d0a0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar6 == 1) {
        return uVar9;
      }
      uVar9 = uVar9 + 1;
      uVar7 = *(ulong *)(param_1 + 8);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf0d820();
      _objc_release(uVar7);
    } while (uVar9 < uVar8);
  }
  return 0x7fffffffffffffff;
}



/* Entry: 1056bd320; end: 1056bd32b; -[SCSnapDocMetadataEditorImpl .cxx_destruct] */

void FUN_1056bd320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056bd32c; end: 1056bd3bb; -[SCSnapDocEditorTaskItem initWithSDOMCommands:future:] */

long FUN_1056bd32c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_2 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = param_5;
    _objc_release(uVar1);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x18) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 1056bd3bc; end: 1056bd3c3; -[SCSnapDocEditorTaskItem sdomCommands] */

undefined8 FUN_1056bd3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056bd3c4; end: 1056bd3cb; -[SCSnapDocEditorTaskItem promise] */

undefined8 FUN_1056bd3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056bd3cc; end: 1056bd3d3; -[SCSnapDocEditorTaskItem startTime] */

undefined8 FUN_1056bd3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056bd3d4; end: 1056bd403; -[SCSnapDocEditorTaskItem .cxx_destruct] */

void FUN_1056bd3d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056bd404; end: 1056bd53f; -[SCSnapDocSdomEditorImpl initWithSnapDoc:mediaEditor:valdiRuntimeProvider:capabilitiesManager:] */

undefined1 *
FUN_1056bd404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9a28;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bcf48;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056bd540; end: 1056bd56f; -[SCSnapDocSdomEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056bd540(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056bd570; end: 1056bd687; -[SCSnapDocSdomEditorImpl applySDOMCommands:] */

void FUN_1056bd570(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bfaea20(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108a81e8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar3 = PTR_PTR_1126bcf50;
    _objc_alloc(PTR_PTR_1126bcf50);
    func_0x00010c041060();
    _os_unfair_lock_lock(param_1 + 0x30);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,puVar3);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      func_0x00010be0bc60(param_1);
    }
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x30);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056bd688; end: 1056bd6f7;  */

bool FUN_1056bd688(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  if (param_2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_2);
    func_0x00010c0ddbe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_2 != puVar2;
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 1056bd6f8; end: 1056bd7d3; -[SCSnapDocSdomEditorImpl _executePendingCommands] */

void FUN_1056bd6f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010bfc69a0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1056bd7d4; end: 1056bda3f;  */

void FUN_1056bd7d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  
  ppuVar9 = &puStack_100;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _os_unfair_lock_lock(lVar2 + 0x30);
    lVar3 = *(long *)(lVar2 + 0x38);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      *(undefined1 *)(lVar2 + 0x40) = 0;
      _os_unfair_lock_unlock(lVar2 + 0x30);
    }
    else {
      ppuVar4 = *(undefined ***)(lVar2 + 0x38);
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(lVar2 + 0x38));
      _os_unfair_lock_unlock(lVar2 + 0x30);
      ppuVar5 = ppuVar4;
      func_0x00010c153160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c117d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010bf529e0();
      if (ppuVar7 == (undefined **)0x1) {
        ppuVar8 = ppuVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar8;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
      }
      else {
        ppuVar7 = &PTR____CFConstantStringClassReference_110df6238;
      }
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1056bda40;
      puStack_a0 = &UNK_1108a8208;
      lStack_98 = lVar2;
      _objc_retain(ppuVar4);
      uStack_78 = *(undefined8 *)(param_1 + 0x28);
      ppuStack_90 = ppuVar4;
      _objc_retain(ppuVar7);
      ppuStack_88 = ppuVar7;
      _objc_retain(ppuVar6);
      ppuVar8 = &puStack_b8;
      ppuStack_80 = ppuVar6;
      _objc_retainBlock(ppuVar8);
      puStack_100 = puVar1;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x1056bdb38;
      puStack_e8 = &UNK_1108a8238;
      uStack_c0 = *(undefined8 *)(param_1 + 0x28);
      lStack_e0 = lVar2;
      ppuStack_d8 = ppuVar4;
      ppuStack_d0 = ppuVar7;
      ppuStack_c8 = ppuVar6;
      _objc_retain(ppuVar6);
      _objc_retain(ppuVar7);
      _objc_retain(ppuVar4);
      _objc_retainBlock(&puStack_100);
      func_0x00010be0b8c0(lVar2);
      _objc_release(ppuVar9);
      _objc_release(ppuStack_c8);
      _objc_release(ppuStack_d0);
      _objc_release(ppuStack_d8);
      _objc_release(ppuVar8);
      _objc_release(ppuStack_80);
      _objc_release(ppuStack_88);
      _objc_release(ppuStack_90);
      _objc_release(ppuVar6);
      _objc_release(ppuVar7);
      _objc_release(ppuVar4);
      _objc_release(ppuVar5);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056bda40; end: 1056bdbd3;  */

void FUN_1056bda40(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008360();
  _objc_retain(0);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c250f20(*(undefined8 *)(param_2 + 0x28));
  if (puVar1 == (undefined *)0x0) {
    func_0x00010be901a0(param_1,*(undefined8 *)(param_2 + 0x40),uVar2);
    func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x38));
  }
  else {
    func_0x00010be901a0(param_1,*(undefined8 *)(param_2 + 0x40),uVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x38));
  }
  func_0x00010be0bc60(*(undefined8 *)(param_2 + 0x20));
  _objc_release(0);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056bdbd4; end: 1056bdd47; -[SCSnapDocSdomEditorImpl _executeCommand:inRuntime:completionBlock:errorBlock:] */

void FUN_1056bdbd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bcf58;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfbc0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bcf60;
  _objc_alloc_init(PTR_PTR_1126bcf60);
  func_0x00010c1c4b40();
  puVar3 = puVar1;
  func_0x00010bf58960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bcf68;
  _objc_alloc(PTR_PTR_1126bcf68);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa140(puVar4);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar3;
  func_0x00010c28a0a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar6 + 0x10))();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056bdd48; end: 1056bddbf;  */

void FUN_1056bdd48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bcf70;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bffa140(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056bddc0; end: 1056bdf5f; -[SCSnapDocSdomEditorImpl validate] */

void FUN_1056bddc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bcf78;
  _objc_opt_new(PTR_PTR_1126bcf78);
  func_0x00010c203f00();
  func_0x00010c2002c0(puVar2,param_2,1);
  puVar3 = PTR_PTR_1126bcf80;
  _objc_opt_new(PTR_PTR_1126bcf80);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c240200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c46a0();
  func_0x00010c1c43a0(puVar3,param_2,uVar5);
  _objc_release(uVar4);
  func_0x00010c1c43c0(puVar2,param_2,puVar3);
  puVar6 = PTR_PTR_1126bcf88;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa140(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010bdf2b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056bdf60;
  puStack_58 = &UNK_1108a82d8;
  puStack_50 = puVar6;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  func_0x00010c297260(param_1,param_2,&puStack_70,0);
  _objc_release(param_1);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puStack_50);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056bdf60; end: 1056be06b;  */

void FUN_1056bdf60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_2 != 0) {
    func_0x00010c296ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1056be06c;
    puStack_60 = &UNK_110842e18;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1056be07c;
    puStack_88 = &UNK_1108450c8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar2;
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    (**(code **)(param_2 + 0x10))(param_2,uVar1,&puStack_78,&puStack_a0);
    _objc_release(param_2);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 1056be06c; end: 1056be08b;  */

void FUN_1056be06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1056be08c; end: 1056be1a7; -[SCSnapDocSdomEditorImpl getSnapDocTextualView] */

void FUN_1056be08c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bcf68;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa140(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010bdf2b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056be1a8;
  puStack_48 = &UNK_1108a82d8;
  puStack_40 = puVar2;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010c297260(param_1,param_2,&puStack_60,0);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056be1a8; end: 1056be2bb;  */

void FUN_1056be1a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_2 != 0) {
    func_0x00010bfca640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1056be2bc;
    puStack_60 = &UNK_110850cc8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1056be2c8;
    puStack_88 = &UNK_1108450c8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar2;
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    (**(code **)(param_2 + 0x10))(0x405e000000000000,param_2,uVar1,&puStack_78,&puStack_a0);
    _objc_release(param_2);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 1056be2bc; end: 1056be2c7;  */

void FUN_1056be2bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1056be2c8; end: 1056be31b;  */

void FUN_1056be2c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110df6218,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056be31c; end: 1056be433; -[SCSnapDocSdomEditorImpl _createSDOMService] */

void FUN_1056be31c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bfc69a0(uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056be434; end: 1056be543;  */

void FUN_1056be434(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126bcf58;
    func_0x00010bfbc0e0(PTR_PTR_1126bcf58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bcf60;
    _objc_alloc_init(PTR_PTR_1126bcf60);
    func_0x00010c1c4b40();
    func_0x00010c178420(puVar2);
    puVar3 = puVar4;
    func_0x00010bf58960(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056be544; end: 1056be5d3; -[SCSnapDocSdomEditorImpl addBlobToLocalCacheWithBlob:onSuccess:onError:] */

void FUN_1056be544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3080;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf64b00(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6c80(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056be5d4; end: 1056be68b; -[SCSnapDocSdomEditorImpl addFileToLocalCacheWithFilePath:onSuccess:onError:] */

void FUN_1056be5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b3080;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfad300(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad3e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bdc6c80(param_1,param_2,puVar2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1056be68c; end: 1056be697; -[SCSnapDocSdomEditorImpl removeCachedContentWithCacheKeys:onSuccess:onError:] */

void FUN_1056be68c(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001056be694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3);
  return;
}



/* Entry: 1056be698; end: 1056be7f3; -[SCSnapDocSdomEditorImpl calculateMediaEffectCapabilitiesWithSnapDoc:onSuccess:onError:] */

void FUN_1056be698(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008360();
  uVar5 = 0;
  _objc_retain(0);
  _objc_release(uVar2);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf6e340(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    uVar5 = uVar2;
    func_0x00010bf27980(uVar2);
    _objc_release(uVar2);
    func_0x00010af28d88(uVar5);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  (*pcVar4)(lVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056be7f4; end: 1056be937; -[SCSnapDocSdomEditorImpl isCompatibleWithClientWithSnapDoc:onSuccess:onError:] */

void FUN_1056be7f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008360();
  uVar3 = 0;
  _objc_retain(0);
  _objc_release(uVar2);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf6e340(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    (**(code **)(param_5 + 0x10))(param_5,uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    uVar2 = uVar3;
    func_0x00010c06ed40(uVar3);
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
  }
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056be938; end: 1056bea0f; -[SCSnapDocSdomEditorImpl _addFileToLocalCacheWithMediaInput:onSuccess:onError:] */

void FUN_1056be938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c09d800(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056bea10;
  puStack_48 = &UNK_1108a8308;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297260(uVar1,param_2,&puStack_60,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056bea10; end: 1056bea67;  */

void FUN_1056bea10(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001056bea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056bea68; end: 1056beb23; -[SCSnapDocSdomEditorImpl _reportSDOMGrapheneMetricsWithStartTime:commandType:didSuccess:] */

void FUN_1056bea68(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  FUN_1056becd4(*(undefined8 *)(param_2 + 0x28),param_4,(long)((dVar4 - param_1) * 1000.0));
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1056befbc(uVar3,param_4,puVar2,1);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056beb24; end: 1056bebff; -[SCSnapDocSdomEditorImpl _reportSDOMGrapheneMetricsWithCommandStartTime:executionStartTime:commandType:didSucceed:] */

void FUN_1056beb24(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  _CACurrentMediaTime();
  FUN_1056becd4(*(undefined8 *)(param_3 + 0x28),param_5,(long)((dVar4 - param_2) * 1000.0));
  FUN_1056bee48(*(undefined8 *)(param_3 + 0x28),param_5,(long)((dVar4 - param_1) * 1000.0));
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1056befbc(uVar3,param_5,puVar2,1);
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056bec00; end: 1056bec5f; -[SCSnapDocSdomEditorImpl .cxx_destruct] */

void FUN_1056bec00(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056bec60; end: 1056becd3; -[SCGrapheneSdomSnapDocEditingMetric2 init] */

undefined1 * FUN_1056bec60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9a30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056becd4; end: 1056bee47;  */

void FUN_1056becd4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108a8338;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108a8338,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2e7f95;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_1108a8388;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108a8388,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108a83d8,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar8 = 0;
    do {
      if ((&cStack_149)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar6);
  puVar1 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
  if (puRam00000001136bd6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136bd6d0 = puVar1;
  }
  return;
}



/* Entry: 1056bee48; end: 1056befbb;  */

void FUN_1056bee48(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108a8388;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108a8388,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar4;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2e7f95;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f2e7f95;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108a83d8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  if (puRam00000001136bd6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136bd6d0 = puVar1;
  }
  return;
}



/* Entry: 1056befbc; end: 1056bf1eb;  */

void FUN_1056befbc(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2e7f95;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108a83d8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  if (puRam00000001136bd6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001136bd6d0 = puVar1;
  }
  return;
}



/* Entry: 1056bf1ec; end: 1056bf253; +[SCSDOMValidateSnapDocRequest descriptor] */

void FUN_1056bf1ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a57840,
                        &PTR____CFConstantStringClassReference_110df6278,&PTR_DAT_1130f29f0,
                        &PTR_s_snapDoc_1130f2a28,3,0x18,0x1c);
    puRam00000001136bd6d0 = puVar1;
  }
  return;
}



/* Entry: 1056bf254; end: 1056bf2cf; +[SCSDOMValidateSnapDocRequest_MediaContextTypeWrapper descriptor] */

undefined * FUN_1056bf254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a57890,
                        &PTR____CFConstantStringClassReference_110df6298,&PTR_DAT_1130f29f0,
                        &PTR_DAT_1130f2a08,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bd6d8 = puVar1;
  }
  return puRam00000001136bd6d8;
}



/* Entry: 1056bf2d0; end: 1056bf37b; +[SCPlaybackLayerTypeUtil typeOfPlaybackLayer:] */

undefined8 FUN_1056bf2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08c3a0();
  uVar2 = param_3;
  if ((int)uVar1 == 4) {
    func_0x00010bf5cc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed09a0(param_1,param_2,uVar2);
  }
  else {
    if ((int)uVar1 != 1) {
      param_1 = 0xc;
      goto LAB_1056bf360;
    }
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed09e0(param_1,param_2,uVar2);
  }
  _objc_release(uVar2);
LAB_1056bf360:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1056bf37c; end: 1056bf463; +[SCPlaybackLayerTypeUtil _typeOfCTItemInstance:] */

undefined8 FUN_1056bf37c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96ee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = 2;
  switch(uVar3 & 0xffffffff) {
  case 0:
    func_0x00010bed09c0(param_1,param_2,param_3);
    uVar4 = param_1;
    break;
  case 7:
    uVar4 = 8;
    break;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar4 = 0xc;
    break;
  case 0xb:
    uVar4 = 4;
    break;
  case 0x10:
    uVar4 = 1;
    break;
  case 0x14:
    uVar4 = 3;
    break;
  case 0x16:
    uVar4 = 5;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1056bf464; end: 1056bf4bb; +[SCPlaybackLayerTypeUtil _typeOfCTItemInstanceByMetadata:] */

undefined8 FUN_1056bf464(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0cc820();
  _objc_release(param_3);
  if ((uint)uVar1 < 0x10) {
    uVar2 = *(undefined8 *)(&UNK_10ddb90e8 + (uVar1 & 0xffffffff) * 8);
  }
  else {
    uVar2 = 10;
  }
  return uVar2;
}



/* Entry: 1056bf4bc; end: 1056bf5b7; +[SCPlaybackLayerTypeUtil _typeOfMediaMetadata:] */

undefined8 FUN_1056bf4bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf0b760();
  uVar1 = 2;
  switch(param_3 & 0xffffffff) {
  case 1:
  case 4:
  case 10:
    break;
  case 2:
    uVar1 = 8;
    break;
  case 3:
    uVar1 = 0xb;
    break;
  case 5:
    uVar1 = 0;
    break;
  case 6:
    uVar1 = 9;
    break;
  case 0xe:
    uVar1 = 7;
    break;
  case 0x11:
    uVar1 = 6;
    break;
  default:
    if ((int)param_3 != -0x4524111) {
      return 2;
    }
  case 0:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 1056bf5b8; end: 1056bf5f3; -[SCVideoTrackingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056bf5b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727a70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727a6c);
  return;
}



/* Entry: 1056bf5f4; end: 1056bf63f; -[SCVideoTargetTrajectoryFactory newTargetTrajectoryWithVideoTrackedImageTrajectory:] */

undefined * FUN_1056bf5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcfb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061200();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056bf640; end: 1056bf757; -[SCVideoTargetTrajectoryManager initTouchPointTrackingWithConfig:imageProcessor:] */

undefined1 * FUN_1056bf640(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(ulong *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126bcfb8;
    _objc_alloc();
    func_0x00010c000dc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar4 = param_3;
    func_0x00010bf20800();
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
      _objc_release(uVar2);
    }
    func_0x00010bf20800(param_3);
    func_0x00010c1eac60(*(undefined8 *)((long)puVar1 + 0x18));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056bf758; end: 1056bf897; -[SCVideoTargetTrajectoryManager initWithTrajectory:imageProcessor:] */

undefined1 * FUN_1056bf758(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9a38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(ulong *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar5);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126bcfb8;
    _objc_alloc();
    func_0x00010c061200();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    uVar2 = param_3;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf20800();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined8 *)((long)puVar1 + 0x10) = uVar6;
      _objc_release(uVar5);
    }
    func_0x00010c1eac60(*(undefined8 *)((long)puVar1 + 0x18));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056bf898; end: 1056bf8c7; -[SCVideoTargetTrajectoryManager switchToAlternateTrajectoryBasedOnBounceState:] */

void FUN_1056bf898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d9560();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056bf8c8; end: 1056bf8f7; -[SCVideoTargetTrajectoryManager switchToOriginalTargetTrajectory] */

void FUN_1056bf8c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056bf8f8; end: 1056bf8ff; -[SCVideoTargetTrajectoryManager isTrackingComplete] */

void FUN_1056bf8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0816f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isTrajectoryComplete_1125fdfc8);
  return;
}



/* Entry: 1056bf900; end: 1056bf937; -[SCVideoTargetTrajectoryManager configType] */

ulong FUN_1056bf900(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bcfc0;
  _objc_opt_class(PTR_PTR_1126bcfc0);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  return uVar2 & 1;
}



/* Entry: 1056bf938; end: 1056bf947; -[SCVideoTargetTrajectoryManager usingBounceTrajectory] */

bool FUN_1056bf938(long param_1)

{
  return *(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10);
}



/* Entry: 1056bf948; end: 1056bf957; -[SCVideoTargetTrajectoryManager hasNonBounceTrajectory] */

bool FUN_1056bf948(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 1056bf958; end: 1056bf967; -[SCVideoTargetTrajectoryManager hasTargetTrajectoryForImageProcessor:] */

bool FUN_1056bf958(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}



/* Entry: 1056bf968; end: 1056bf96f; -[SCVideoTargetTrajectoryManager isTrajectoryCompleteForImageProcessor:] */

void FUN_1056bf968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0816f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isTrajectoryComplete_1125fdfc8);
  return;
}



/* Entry: 1056bf970; end: 1056bf977; -[SCVideoTargetTrajectoryManager minTrackedFrameTimeInSecondsForImageProcessor:] */

void FUN_1056bf970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cdd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_minTrackedFrameTimeInSeconds_112611178);
  return;
}



/* Entry: 1056bf978; end: 1056bf97f; -[SCVideoTargetTrajectoryManager maxTrackedFrameTimeInSecondsForImageProcessor:] */

void FUN_1056bf978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_maxTrackedFrameTimeInSeconds_11260e638);
  return;
}



/* Entry: 1056bf980; end: 1056bf9b7; -[SCVideoTargetTrajectoryManager imageProcessor:addTransform:atTime:] */

void FUN_1056bf980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_5[1];
  uStack_30 = *param_5;
  uStack_20 = param_5[2];
  func_0x00010befc620(*(undefined8 *)(param_1 + 0x18),param_2,param_4,&uStack_30);
  return;
}



/* Entry: 1056bf9b8; end: 1056bfa1b; -[SCVideoTargetTrajectoryManager imageProcessor:outputTransform:] */

void FUN_1056bf9b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06c000(uVar2);
  func_0x00010c2796e0(lVar1,param_2,param_1,param_4,uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


