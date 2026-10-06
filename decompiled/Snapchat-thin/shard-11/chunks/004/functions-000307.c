/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085df45c; end: 1085e0103;  */

void FUN_1085df45c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar9 = 0;
  if (lVar2 != 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(lVar2 + 0x28);
    _objc_retain(lVar10);
    _objc_retain(lVar8);
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x2020000000;
    uStack_188 = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        lVar15 = *(long *)(lVar13 * 8);
        lVar14 = lVar15;
        func_0x00010c12a500();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar14;
        func_0x00010bf529e0();
        _objc_release(lVar14);
        if (lVar4 != 0) {
          lVar14 = lVar15;
          func_0x00010c12a500(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar14;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          puVar5 = PTR_PTR_1126da590;
          _objc_alloc(PTR_PTR_1126da590);
          func_0x00010c034300();
          func_0x00010bf50280(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar15);
          _objc_release(puVar5);
          _objc_release(lVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar9 != lVar13);
      lVar9 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    lVar9 = lVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010bf51e00();
    _objc_release(lVar9);
    lVar9 = lVar13;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 == (undefined *)0x0) {
          *(undefined1 *)(puStack_198 + 3) = 1;
          func_0x00010c12d3e0(lVar8);
        }
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    _objc_retain(lVar8);
    func_0x00010bf97ce0(puVar3);
    bVar1 = *(byte *)(puStack_198 + 3);
    _objc_release(lVar8);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(lVar8);
    _objc_release(lVar10);
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar2 + 8);
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      func_0x00010bf51e00(uVar6);
      func_0x00010c0d9840(uVar11);
      _objc_release(uVar6);
    }
    lVar12 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(lVar2 + 0x30);
    _objc_retain(lVar12);
    _objc_retain(lVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    _objc_retain(lVar12);
    lVar9 = lVar12;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar10 = *plStack_170;
      do {
        lVar13 = 0;
        do {
          if (*plStack_170 != lVar10) {
            _objc_enumerationMutation(lVar12);
          }
          lVar15 = *(long *)(lStack_178 + lVar13 * 8);
          lVar14 = lVar15;
          func_0x00010c12a320();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar14;
          func_0x00010bf529e0();
          _objc_release(lVar14);
          if (lVar4 != 0) {
            func_0x00010bf50280(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(lVar15);
          }
          lVar13 = lVar13 + 1;
        } while (lVar9 != lVar13);
        lVar9 = lVar12;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar12);
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar3);
    func_0x00010c1063a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfaeb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar10 = lVar9;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      func_0x00010c0ce860(lVar8);
    }
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(lVar8);
    func_0x00010c1063a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bfaeb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c280520(lVar8);
    }
    _objc_release(puVar7);
    _objc_release(lVar8);
    _objc_release(lVar9);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(lVar12);
    if (puVar5 != (undefined *)0x0 || lVar10 != 0) {
      uVar11 = *(undefined8 *)(lVar2 + 0x10);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      func_0x00010bf51e00(uVar6);
      func_0x00010c0d9840(uVar11);
      _objc_release(uVar6);
    }
    lVar10 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(lVar2 + 0x38);
    _objc_retain(lVar10);
    _objc_retain(lVar8);
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x2020000000;
    uStack_188 = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        lVar15 = *(long *)(lVar13 * 8);
        lVar14 = lVar15;
        func_0x00010c12a340();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar14;
        func_0x00010bf529e0();
        _objc_release(lVar14);
        if (lVar4 != 0) {
          lVar14 = lVar15;
          func_0x00010c12a340(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar14;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          puVar5 = PTR_PTR_1126da5a0;
          _objc_alloc(PTR_PTR_1126da5a0);
          func_0x00010c034300();
          func_0x00010bf50280(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar15);
          _objc_release(puVar5);
          _objc_release(lVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar9 != lVar13);
      lVar9 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    lVar9 = lVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010bf51e00();
    _objc_release(lVar9);
    lVar9 = lVar13;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 == (undefined *)0x0) {
          *(undefined1 *)(puStack_198 + 3) = 1;
          func_0x00010c12d3e0(lVar8);
        }
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    _objc_retain(lVar8);
    func_0x00010bf97ce0(puVar3);
    bVar1 = *(byte *)(puStack_198 + 3);
    _objc_release(lVar8);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(lVar8);
    _objc_release(lVar10);
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar2 + 0x18);
      uVar6 = *(undefined8 *)(lVar2 + 0x38);
      func_0x00010bf51e00(uVar6);
      func_0x00010c0d9840(uVar11);
      _objc_release(uVar6);
    }
    lVar9 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(lVar2 + 0x40);
    _objc_retain(lVar9);
    _objc_retain(lVar10);
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x2020000000;
    uStack_188 = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar9);
    lVar12 = lVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        lVar15 = *(long *)(lVar13 * 8);
        lVar14 = lVar15;
        func_0x00010c12a1e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar14;
        func_0x00010bf529e0();
        _objc_release(lVar14);
        if (lVar4 != 0) {
          lVar14 = lVar15;
          func_0x00010c12a1e0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar14;
          func_0x00010bf43280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          puVar5 = PTR_PTR_1126da5b0;
          _objc_alloc(PTR_PTR_1126da5b0);
          func_0x00010c034300();
          func_0x00010bf50280(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar15);
          _objc_release(puVar5);
          _objc_release(lVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
      lVar12 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    lVar13 = lVar10;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar13;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar13);
        }
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 == (undefined *)0x0) {
          *(undefined1 *)(puStack_198 + 3) = 1;
          func_0x00010c12d3e0(lVar10);
        }
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    _objc_retain(lVar10);
    func_0x00010bf97ce0(puVar3);
    bVar1 = *(byte *)(puStack_198 + 3);
    _objc_release(lVar10);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(lVar10);
    _objc_release();
    if ((bVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar9 = *(long *)(lVar2 + 0x40);
      func_0x00010bf51e00();
      func_0x00010c0d9840(uVar6);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1a0,8);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(lVar9 + 8);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1085e0104; end: 1085e012b; -[SCPresenceStateProvider typingConversations] */

void FUN_1085e0104(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e012c; end: 1085e0153; -[SCPresenceStateProvider peekingConversations] */

void FUN_1085e012c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e0154; end: 1085e017b; -[SCPresenceStateProvider presentConversations] */

void FUN_1085e0154(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e017c; end: 1085e01a3; -[SCPresenceStateProvider gameConversations] */

void FUN_1085e017c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e01a4; end: 1085e0227; -[SCPresenceStateProvider .cxx_destruct] */

void FUN_1085e01a4(long param_1)

{
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



/* Entry: 1085e0228; end: 1085e03e3; -[SCTAudioServicesImpl initWithSoundEffects:mutableAudioSession:identityServices:grapheneLogger:plusFeatureGating:] */

undefined1 *
FUN_1085e0228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fd008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085e03e4; end: 1085e0493; -[SCTAudioServicesImpl audioConfigurationToken] */

void FUN_1085e03e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbfcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126b6e10;
    _objc_alloc();
    func_0x00010c053e20();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1085e0494; end: 1085e04c3; -[SCTAudioServicesImpl setAudioConfigurationToken:] */

void FUN_1085e0494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e04c4; end: 1085e0587; -[SCTAudioServicesImpl dealloc] */

void FUN_1085e04c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256840();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf0ef40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1288c0(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126fd008;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085e0588; end: 1085e0713; -[SCTAudioServicesImpl updateAudioSessionConfigMode:isForCallKit:avoidExternalAudioMixing:completion:] */

void FUN_1085e0588(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_1085e0714;
  puStack_68 = &UNK_110a5a300;
  ppuVar2 = &puStack_80;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_57 = param_5;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1085e0780;
  puStack_a0 = &UNK_110a5a320;
  lStack_98 = param_1;
  uStack_90 = param_6;
  uStack_88 = param_2;
  _objc_retain(param_6);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock(ppuVar3);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ef40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283840(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 1085e0714; end: 1085e077f;  */

void FUN_1085e0714(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c128460(param_2);
    func_0x00010c1284e0(param_2);
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c134d20(param_2);
  }
  else {
    func_0x00010c134da0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e0780; end: 1085e07f3;  */

void FUN_1085e0780(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a13c0();
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e07f4; end: 1085e0917; -[SCTAudioServicesImpl updateProximityMonitoring:completion:] */

void FUN_1085e07f4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_1085e0918;
  puStack_60 = &UNK_110a5a350;
  uStack_58 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ef40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288e80(lVar3,param_2,lVar4,ppuVar1,lVar5,param_4);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1085e0918; end: 1085e092f;  */

void FUN_1085e0918(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c136330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_requestProximityRouting_11262b2e8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c128690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_releaseProximityRouting_112627bc0);
  return;
}



/* Entry: 1085e0930; end: 1085e09af; -[SCTAudioServicesImpl applyAudioRoute:completion:] */

void FUN_1085e0930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f83a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e09b0; end: 1085e0a0f; -[SCTAudioServicesImpl availableRoutes] */

void FUN_1085e09b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf129a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085e0a10; end: 1085e0a6f; -[SCTAudioServicesImpl currentAudioRoute] */

void FUN_1085e0a10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085e0a70; end: 1085e0b33; -[SCTAudioServicesImpl processIncomingCallNotificationShown:forTalkContextId:] */

void FUN_1085e0a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,puVar1,param_4);
  }
  uVar2 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bedebe0(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e0b34; end: 1085e0cc7; -[SCTAudioServicesImpl processIncomingCallNotificationRemoved:] */

void FUN_1085e0b34(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  puVar4 = &uStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1085e0cc8;
  puStack_f0 = &UNK_110a5a370;
  _objc_retain(param_3);
  lStack_e8 = param_3;
  _objc_retain(puVar1);
  puStack_e0 = puVar1;
  func_0x00010bf97ce0(uVar5);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar6 = *plStack_140;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38));
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar1;
      puVar4 = &uStack_150;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010bedebe0(param_1);
  _objc_release(puStack_e0);
  _objc_release(lStack_e8);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(puVar4);
  func_0x00010c0dc140(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(puVar4);
  _objc_release(uVar5);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  if (puVar3 == (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e0cc8; end: 1085e0d57;  */

void FUN_1085e0cc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0dc140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(param_3);
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar1 == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e0d58; end: 1085e0d8b; -[SCTAudioServicesImpl processCallForTalkContextId:visibilityChanged:] */

void FUN_1085e0d58(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    func_0x00010befa120();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRingingIfNeeded_1125954a0);
  return;
}



/* Entry: 1085e0d8c; end: 1085e0dc3; -[SCTAudioServicesImpl playSound:] */

void FUN_1085e0d8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e0dc4; end: 1085e0e2f; -[SCTAudioServicesImpl lockRingingWithLabel:] */

void FUN_1085e0dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c09fca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e0e30; end: 1085e0e7f; -[SCTAudioServicesImpl unlockRingingWithToken:] */

void FUN_1085e0e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280d40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e0e80; end: 1085e0fcb; -[SCTAudioServicesImpl startRingingInTalkContext:incoming:] */

void FUN_1085e0e80(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar2;
  
  uVar2 = param_3;
  _objc_retain();
  iVar1 = (int)uVar2;
  FUN_108614d48();
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c06c3c0();
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_1085e0fb4;
  }
  if (param_4 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = param_3;
    func_0x00010bf4e8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf5e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06d260(uVar5,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar5);
  if ((int)uVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = param_3;
    func_0x00010bf4e8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bedebe0(param_1);
LAB_1085e0fb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e0fcc; end: 1085e106f; -[SCTAudioServicesImpl stopRingingInTalkContext:] */

void FUN_1085e0fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d360(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRingingIfNeeded_1125954a0);
  return;
}



/* Entry: 1085e1070; end: 1085e12db; -[SCTAudioServicesImpl _updateRingingIfNeeded] */

void FUN_1085e1070(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined2 uStack_68;
  undefined1 uStack_66;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = param_1;
  func_0x00010be22280();
  if ((lVar4 == 3 && param_2 != 0) && (uVar5 & 0x10000) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x60);
    lVar2 = param_2;
    func_0x00010bf4e8a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar2);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      lVar2 = param_2;
      func_0x00010bf4e8a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(lVar2);
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf5e540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf517c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_58);
      uStack_66 = (undefined1)(uVar5 >> 0x10);
      uStack_68 = (undefined2)uVar5;
      _objc_retain(param_2);
      lStack_60 = param_2;
      func_0x00010bfa6120(uVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar7);
      _objc_release(lStack_60);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_58);
    }
  }
  else {
    _objc_retain(param_2);
    func_0x00010bedec00(param_1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1085e12dc; end: 1085e13ff;  */

void FUN_1085e12dc(long param_1,undefined8 param_2)

{
  uint3 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar5 = param_2;
  _objc_retain(param_2);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar6 = *(undefined8 *)(uVar2 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf4e8a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar6);
    _objc_release(uVar3);
    uVar4 = uVar2;
    func_0x00010be22280(uVar2);
    uVar1 = *(uint3 *)(param_1 + 0x28);
    uVar7 = (uint)uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    _objc_retain(uVar5);
    FUN_1085fb490((ulong)uVar1,uVar3,uVar4 & 0xffffff,uVar5);
    if (uVar7 == 0) {
      func_0x00010bedebe0(uVar2);
    }
    else {
      _objc_retain(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bedec00(uVar2);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e1400; end: 1085e1473;  */

void FUN_1085e1400(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



/* Entry: 1085e1474; end: 1085e16f7; -[SCTAudioServicesImpl _getRequiredRingingState] */

undefined1  [16] FUN_1085e1474(long param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong uVar16;
  long lVar17;
  long unaff_x28;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bStack_2ab;
  byte bStack_2aa;
  byte bStack_2a9;
  undefined1 auStack_280 [8];
  undefined1 uStack_278;
  undefined1 uStack_277;
  undefined1 uStack_276;
  undefined1 *puStack_270;
  byte abStack_268 [8];
  long lStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  ulong uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar14 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar14);
  lVar2 = lVar14;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    _objc_release(lVar14);
    uVar16 = 0;
    lVar17 = 0;
    uVar12 = 0;
  }
  else {
    lVar17 = 0;
    bVar10 = false;
    uVar16 = 0;
    uStack_200 = 0;
    unaff_x28 = *plStack_1a0;
    lStack_1f8 = lVar14;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != unaff_x28) {
          _objc_enumerationMutation(lStack_1f8);
        }
        unaff_x23 = *(long *)(lStack_1a8 + lVar14 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010bf4e8a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_1;
        func_0x00010bdd9d40();
        _objc_release(unaff_x24);
        if ((int)unaff_x25 != 0) {
          _objc_retain(unaff_x23);
          _objc_release(lVar17);
          uVar11 = (uint)*(undefined8 *)(param_1 + 0x58);
          unaff_x24 = unaff_x23;
          func_0x00010bf4e8a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(unaff_x24);
          uVar16 = (ulong)(uVar11 | (uint)uVar16);
          bVar10 = true;
          uStack_200 = 1;
          lVar17 = unaff_x23;
        }
        lVar15 = lStack_1f8;
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar8 = &uStack_1b0;
      puVar7 = auStack_f0;
      lVar14 = 0x10;
      lVar2 = lStack_1f8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar2 = lVar15;
    _objc_release();
    unaff_x22 = 0;
    uVar12 = uStack_200;
    if (bVar10) {
      uVar9 = 0x10000;
      goto LAB_1085e16a0;
    }
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar15 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar15);
  puVar8 = &uStack_1f0;
  puVar7 = auStack_170;
  lVar14 = 0x10;
  lVar2 = lVar15;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *plStack_1e0;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_1e0 != unaff_x23) {
          _objc_enumerationMutation(lVar15);
        }
        uVar11 = (uint)*(undefined8 *)(param_1 + 0x58);
        func_0x00010bf4b900();
        uVar16 = (ulong)(uVar11 | (uint)uVar16);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      puVar8 = &uStack_1f0;
      puVar7 = auStack_170;
      lVar14 = 0x10;
      lVar2 = lVar15;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar12 = 1;
    unaff_x22 = 0;
  }
  lVar2 = lVar15;
  _objc_release();
  uVar9 = 0;
LAB_1085e16a0:
  uVar1 = 0x100;
  if ((uVar16 & 1) == 0) {
    uVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar18._0_8_ = uVar1 | uVar9 | uVar12 & 1;
    auVar18._8_8_ = lVar17;
    return auVar18;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_1085e16f8;
  lStack_260 = unaff_x28;
  lStack_258 = lVar17;
  uStack_250 = uVar16;
  lStack_248 = unaff_x25;
  lStack_240 = unaff_x24;
  lStack_238 = unaff_x23;
  uStack_230 = unaff_x22;
  lStack_228 = lVar15;
  uStack_220 = uVar12;
  lStack_218 = param_1;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(lVar14);
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  uVar13 = (uint)puVar8;
  uVar11 = uVar13 >> 0x10 & 0xff;
  if (((ulong)puVar3 & 1) == 0) {
    pbVar6 = abStack_268;
    _objc_initWeak(pbVar6,lVar2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    param_2 = abStack_268;
    _objc_copyWeak(auStack_280,param_2);
    uStack_278 = SUB81(puVar8,0);
    uStack_277 = (undefined1)((ulong)puVar8 >> 8);
    uStack_276 = (undefined1)((ulong)puVar8 >> 0x10);
    _objc_retain(puVar7);
    puStack_270 = puVar7;
    _objc_retain(lVar14);
    func_0x00010c0f7fc0(pbVar6);
    _objc_release(pbVar6);
    _objc_release(lVar14);
    _objc_release(puStack_270);
    _objc_destroyWeak(auStack_280);
    _objc_destroyWeak(abStack_268);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07cba0();
    _objc_retain(0);
    _objc_release(uVar4);
    if (((((uint)uVar5 != (uVar13 & 0xff)) || (bStack_2aa != uVar11)) ||
        ((uVar13 & (uint)uVar5 &
         (uint)(((uint)abStack_268[0] != (uVar13 >> 8 & 0xff) || uVar11 != bStack_2a9) ||
               lVar14 != 0)) != 0)) || (((uVar13 ^ 1) & (uint)bStack_2ab & 1) != 0)) {
      uVar5 = *(undefined8 *)(lVar2 + 8);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256840();
      }
      else {
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141180();
      }
      _objc_release(uVar5);
    }
    _objc_release(0);
  }
  _objc_release(lVar14);
  _objc_release(puVar7);
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 1085e16f8; end: 1085e195b; -[SCTAudioServicesImpl _updateRingingWithRequiredState:customRingtoneId:] */

void FUN_1085e16f8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte bStack_ab;
  byte bStack_aa;
  byte bStack_a9;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined8 uStack_70;
  byte abStack_68 [8];
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  uVar1 = param_3 >> 0x10 & 0xff;
  if (((ulong)puVar2 & 1) == 0) {
    pbVar5 = abStack_68;
    _objc_initWeak(pbVar5,param_1);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,abStack_68);
    uStack_78 = (undefined1)param_3;
    uStack_77 = (undefined1)(param_3 >> 8);
    uStack_76 = (undefined1)(param_3 >> 0x10);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(pbVar5);
    _objc_release(pbVar5);
    _objc_release(param_5);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(abStack_68);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07cba0();
    _objc_retain(0);
    _objc_release(uVar3);
    if (((((uint)uVar4 != (param_3 & 0xff)) || (bStack_aa != uVar1)) ||
        ((param_3 & (uint)uVar4 &
         (uint)(((uint)abStack_68[0] != (param_3 >> 8 & 0xff) || uVar1 != bStack_a9) || param_5 != 0
               )) != 0)) || (((param_3 ^ 1) & (uint)bStack_ab & 1) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      if ((param_3 & 1) == 0) {
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256840();
      }
      else {
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141180();
      }
      _objc_release(uVar4);
    }
    _objc_release(0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e195c; end: 1085e19bf;  */

void FUN_1085e195c(long param_1,undefined8 param_2)

{
  uint3 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar1 = *(uint3 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    func_0x00010bedec00(lVar2,param_2,(ulong)uVar1,uVar3,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085e19c0; end: 1085e1a43;  */

void FUN_1085e19c0(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined2 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return;
}



/* Entry: 1085e1a44; end: 1085e1abf; -[SCTAudioServicesImpl _canPlayIncomingCallRingtoneForTalkContextId:] */

undefined8 FUN_1085e1a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b900(uVar3,param_2,param_3);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1085e1ac0; end: 1085e1b37; -[SCTAudioServicesImpl _generateRingingSituationMessage:incoming:bestFriend:] */

void FUN_1085e1ac0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ee5238);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085e1b38; end: 1085e1bdb; -[SCTAudioServicesImpl .cxx_destruct] */

void FUN_1085e1b38(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085e1bdc; end: 1085e1f3f; -[SCTLazyIdentityServices initWithUserId:snapchatterPublicInfoFetcher:snapchattersDataTracker:snapchattersUserInfoRepository:groupsDataCreator:groupsDataFetcher:groupsDataTracker:conversationManager:usernameProvider:displayNameProvider:bitmojiAvatarIdProvider:lazyUserSnapPrivacyProvider:grapheneLogger:featureSettingsService:] */

undefined8 *
FUN_1085e1bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126fd010;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
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
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
  }
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



/* Entry: 1085e1f40; end: 1085e1fc3; -[SCTLazyIdentityServices remoteParticipantsForConvoId:injectBots:completion:] */

void FUN_1085e1f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a2e0(param_1,param_2,param_3,param_4,uVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e1fc4; end: 1085e2153; -[SCTLazyIdentityServices remoteParticipantsForConvoId:injectBots:performer:completion:] */

void FUN_1085e1fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_68 = param_2;
    _objc_retain(param_6);
    _objc_retain(param_3);
    uStack_60 = param_4;
    _objc_retain(param_5);
    func_0x00010be10a40(param_1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be8b1e0(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e2154; end: 1085e21cf;  */

void FUN_1085e2154(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar1 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    func_0x00010be8b1e0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e21d0; end: 1085e24e7; -[SCTLazyIdentityServices _remoteParticipantsForConvoId:metadata:injectBots:performer:completion:] */

ulong FUN_1085e21d0(long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5,
                   undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010c074920();
  if ((int)uVar1 != 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085e24e8;
    puStack_a0 = &UNK_110a5a470;
    uStack_80 = (undefined1)param_5;
    lStack_98 = param_1;
    _objc_retain(param_6);
    uStack_90 = param_6;
    uStack_88 = param_7;
    _objc_retain(param_7);
    ppuVar9 = &puStack_b8;
    _objc_retainBlock();
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c11de00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(ppuVar9);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    uVar8 = param_7;
    goto LAB_1085e248c;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c12a5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = puVar3;
  if (param_5 == 0) {
LAB_1085e239c:
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c12a5a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e12b58;
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) goto LAB_1085e239c;
    _objc_retain(&PTR____CFConstantStringClassReference_110e12b58);
    func_0x00010bf09f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(ppuVar9);
  _objc_retain(uVar2);
  func_0x00010bfaa480(param_1);
  _objc_release(param_7);
  _objc_release(ppuVar9);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(ppuVar9);
  _objc_release(param_7);
  _objc_release(puVar5);
LAB_1085e248c:
  _objc_release(uVar8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar7 = *(ulong *)(*(long *)(param_3 + 0x20) + 8);
  uVar1 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_1086008e0(uVar7,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  *(long *)(*(long *)(param_3 + 0x20) + 0x78) = *(long *)(*(long *)(param_3 + 0x20) + 0x78) + -1;
  uVar1 = uVar7;
  func_0x00010bf04920();
  if ((*(char *)(param_3 + 0x38) == '\x01') && ((uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    func_0x00010bfaa480(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(param_2);
  }
  else {
    uVar4 = uVar7;
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),uVar7);
  }
  _objc_release(uVar7);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  return uVar1;
}



/* Entry: 1085e24e8; end: 1085e268f;  */

ulong FUN_1085e24e8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_1086008e0(uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  *(long *)(*(long *)(param_1 + 0x20) + 0x78) = *(long *)(*(long *)(param_1 + 0x20) + 0x78) + -1;
  uVar1 = uVar5;
  func_0x00010bf04920();
  if ((*(char *)(param_1 + 0x38) == '\x01') && ((uVar1 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010bfaa480(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(param_2);
  }
  else {
    uVar3 = uVar5;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar5);
  }
  _objc_release(uVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 1085e2690; end: 1085e26db;  */

undefined8 FUN_1085e2690(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1085e26dc; end: 1085e279b;  */

void FUN_1085e26dc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ecc20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x000108600738(param_2,uVar2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf09f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e279c; end: 1085e295f;  */

void FUN_1085e279c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar3 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_108600b58(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cf818;
    func_0x00010c12a5c0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  return;
}



/* Entry: 1085e2960; end: 1085e2a5f;  */

void FUN_1085e2960(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c12a5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c12a5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  uVar5 = param_2;
  FUN_108600578(param_2,uVar3,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1085e2a60; end: 1085e2b4b; -[SCTLazyIdentityServices remoteParticipantsObservableForConvoId:injectBots:] */

void FUN_1085e2a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf50680(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x80);
  func_0x00010c0dff20(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126da5b8;
    _objc_alloc(PTR_PTR_1126da5b8);
    func_0x00010c05af00();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x80),param_2,puVar2,param_3);
  }
  puVar3 = puVar2;
  func_0x00010c0e0660(puVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085e2b4c; end: 1085e2c73; -[SCTLazyIdentityServices localParticipantObservableForConvoId:] */

void FUN_1085e2b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf50680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085fd200(uVar7,param_3,lVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1085e2c74; end: 1085e2dc7; -[SCTLazyIdentityServices fetchSnapchatterByUserId:performer:completion:] */

void FUN_1085e2c74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    param_2 = 0;
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bfaa480(param_1);
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e2dc8; end: 1085e2e0b;  */

void FUN_1085e2dc8(long param_1,undefined8 param_2)

{
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e2e0c; end: 1085e2f3b; -[SCTLazyIdentityServices fetchSnapchattersByUserId:performer:completion:] */

void FUN_1085e2e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar2 = param_4;
    func_0x00010c11de00(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010c09d7c0(lVar1);
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e2f3c; end: 1085e2f57;  */

void FUN_1085e2f3c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001085e2f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  return;
}



/* Entry: 1085e2f58; end: 1085e3143; -[SCTLazyIdentityServices fetchSnapchattersFromConvoId:metadata:excludeSelf:performer:completion:] */

void FUN_1085e2f58(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined *param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar4 = param_4;
  func_0x00010c074920();
  if ((int)uVar4 == 0) {
    uVar4 = param_4;
    func_0x00010c12a5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa480(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085e3144;
    puStack_90 = &UNK_110a5a500;
    uStack_88 = uVar4;
    lStack_80 = param_1;
    uStack_68 = param_5;
    _objc_retain(param_6);
    puStack_78 = param_6;
    _objc_retain(param_7);
    uStack_70 = param_7;
    _objc_retain(uVar4);
    ppuVar1 = &puStack_a8;
    _objc_retainBlock(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_6;
    func_0x00010c11de00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    _objc_release(uStack_70);
    puVar3 = puStack_78;
  }
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000107c31908();
  _objc_release(param_2);
  func_0x00010bfaa480(*(undefined8 *)(param_3 + 0x28));
  _objc_release(uVar4);
  return;
}



/* Entry: 1085e3144; end: 1085e3283;  */

void FUN_1085e3144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107c31908();
  _objc_release(param_2);
  func_0x00010bfaa480(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  return;
}



/* Entry: 1085e3284; end: 1085e34af; -[SCTLazyIdentityServices displayNameForConvoId:convoMetadata:performer:completion:] */

void FUN_1085e3284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_4;
  func_0x00010c074920();
  if ((int)uVar5 == 0) {
    uVar5 = param_4;
    func_0x00010c12a5a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010bfaa420(param_1);
    _objc_release(uVar5);
    lVar2 = param_6;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar6);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0ecc20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    lVar3 = lVar1;
    func_0x00010bfb2040(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar1 = lVar3;
    func_0x00010bf85d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000108ef3728(lVar2,uVar5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar6);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e34b0; end: 1085e3533;  */

bool FUN_1085e34b0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 1085e3534; end: 1085e35eb; -[SCTLazyIdentityServices isBestFriendConvoId:] */

undefined8 FUN_1085e3534(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf197c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12a5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b900(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1085e35ec; end: 1085e36f7; -[SCTLazyIdentityServices isMutualFriendForConvoId:performer:completion:] */

void FUN_1085e35ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c12a5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010bfaa420(param_1);
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e36f8; end: 1085e3757;  */

void FUN_1085e36f8(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) || (lVar1 = param_2, func_0x000100bf119c(), (int)lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000100bec434(param_2);
    uVar2 = (uint)lVar1 ^ 1;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e3758; end: 1085e3863; -[SCTLazyIdentityServices isBotForConvoId:performer:completion:] */

void FUN_1085e3758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c12a5a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010bfaa420(param_1);
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e3864; end: 1085e389b;  */

void FUN_1085e3864(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    func_0x000100bf0c60(param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001085e3898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 1085e389c; end: 1085e3a87; -[SCTLazyIdentityServices canReceiveMessageFrom:performer:completion:] */

void FUN_1085e389c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **unaff_x26;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c11de00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085e3a88;
    puStack_90 = &UNK_110a5a530;
    unaff_x26 = &puStack_a8;
    puVar6 = auStack_68;
    _objc_copyWeak(auStack_78);
    _objc_retain(param_5);
    lStack_80 = param_5;
    uStack_70 = param_2;
    _objc_retain(param_3);
    lStack_88 = param_3;
    func_0x00010c09d7c0(lVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lStack_88);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 6);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  else {
    puVar4 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar4 == (undefined1 *)0x0) ||
       (puVar7 = puVar4, func_0x00010c06d560(), ((ulong)puVar7 & 1) != 0)) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = puVar4;
      func_0x000100bf0c60(puVar4,0);
      if ((((ulong)puVar7 & 1) == 0) && (lVar5 = lVar1, func_0x00010be451c0(), (int)lVar5 != 0)) {
        puVar7 = puVar4;
        func_0x000100bf119c(puVar4);
      }
      else {
        puVar7 = (undefined1 *)0x1;
      }
    }
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),puVar7);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1085e3a88; end: 1085e3b57;  */

void FUN_1085e3a88(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    uVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar4 = uVar2, func_0x00010c06d560(), (uVar4 & 1) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2;
      func_0x000100bf0c60(uVar2,0);
      if (((uVar4 & 1) == 0) && (lVar3 = lVar1, func_0x00010be451c0(), (int)lVar3 != 0)) {
        uVar4 = uVar2;
        func_0x000100bf119c(uVar2);
      }
      else {
        uVar4 = 1;
      }
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e3b58; end: 1085e3bdf; -[SCTLazyIdentityServices _isUserSnapPrivacyFriends] */

undefined8 FUN_1085e3b58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b29b8;
  func_0x00010bfb9b80(PTR_PTR_1126b29b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071ae0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1085e3be0; end: 1085e3ca3; -[SCTLazyIdentityServices isCallingNotificationsMutedForConvoId:completion:] */

void FUN_1085e3be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010beee460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085e3ca4;
  puStack_40 = &UNK_110a5a560;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa5780(uVar1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e3ca4; end: 1085e3d1f;  */

void FUN_1085e3ca4(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  double dVar2;
  
  if ((param_2 & 1) != 0) {
    dVar2 = (double)param_3 / 1000.0;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0.0 < dVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001085e3d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1085e3d20; end: 1085e3ea7; -[SCTLazyIdentityServices ensureServerConversation:completion:] */

void FUN_1085e3d20(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_2;
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bf56660(lVar3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e3ea8; end: 1085e3f23;  */

void FUN_1085e3ea8(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085e3f24;
  puStack_38 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1085e3f24; end: 1085e3f37;  */

void FUN_1085e3f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e3f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085e3f38; end: 1085e3fb3; -[SCTLazyIdentityServices setConversationMetadata:forConvoId:] */

void FUN_1085e3f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e3fb4; end: 1085e403b; -[SCTLazyIdentityServices conversationMetadataForConvoId:] */

void FUN_1085e3fb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf818;
    func_0x00010bf51820(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085e403c; end: 1085e4073; -[SCTLazyIdentityServices hasConversationMetadataForConvoId:] */

bool FUN_1085e403c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1085e4074; end: 1085e40e7; -[SCTLazyIdentityServices fetchConversationMetadataForConvoId:completion:] */

void FUN_1085e4074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be10a40(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e40e8; end: 1085e42cf; -[SCTLazyIdentityServices _fetchConversationMetadataForConvoId:performer:completion:] */

void FUN_1085e40e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1085e42d0;
  puStack_90 = &UNK_110a5a5c0;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  ppuVar1 = &puStack_a8;
  uStack_88 = param_3;
  uStack_80 = param_5;
  uStack_70 = param_2;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_68);
  uStack_b0 = param_2;
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(ppuVar1);
  func_0x00010bfa5f20(uVar2);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e42d0; end: 1085e4453;  */

void FUN_1085e42d0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c183be0();
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e4454; end: 1085e4463;  */

void FUN_1085e4454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085e4464; end: 1085e4613; -[SCTLazyIdentityServices fetchDestinationInfoForConvoId:completion:] */

void FUN_1085e4464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085e4614;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x000107c312cc("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010beee460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_70);
    uStack_78 = param_2;
    _objc_retain(puVar1);
    _objc_retain(param_4);
    func_0x00010bfa5f80(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e4614; end: 1085e4623;  */

void FUN_1085e4614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e4620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1085e4624; end: 1085e46f7;  */

void FUN_1085e4624(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    FUN_108605f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085e46f8;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  lStack_40 = lVar1;
  uStack_38 = uVar2;
  _objc_retain(lVar1);
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(lStack_40);
  _objc_release(uStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 1085e46f8; end: 1085e4707;  */

void FUN_1085e46f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e4704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085e4708; end: 1085e47e3; -[SCTLazyIdentityServices isUserInGroupWithConvoId:completion:] */

void FUN_1085e4708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfc6120(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e47e4; end: 1085e47f7;  */

void FUN_1085e47e4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e47f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2 != 0);
  return;
}



/* Entry: 1085e47f8; end: 1085e49b7; -[SCTLazyIdentityServices userLeftGroupObservableForConvoId:joinedGroupTimeout:] */

void FUN_1085e47f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085e49b8;
  puStack_70 = &UNK_110932cd8;
  _objc_retain(param_4);
  uVar3 = uVar2;
  uStack_68 = param_4;
  func_0x00010c0b8600(uVar2,param_3,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bfad7a0(uVar3,param_3,&PTR___NSConcreteGlobalBlock_110a5a680);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0.0) {
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  else {
    uVar1 = uVar3;
    func_0x00010bfad7a0(uVar3,param_3,&PTR___NSConcreteGlobalBlock_110a5a6a0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar5 = uVar4;
    func_0x00010c270520(param_1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e49b8; end: 1085e4a17;  */

void FUN_1085e49b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085e4a18; end: 1085e4a33;  */

uint FUN_1085e4a18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1085e4a34; end: 1085e4a3b;  */

void FUN_1085e4a34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1085e4a3c; end: 1085e4b53;  */

void FUN_1085e4a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (*(char *)(puStack_48 + 3) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_new(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar2);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085e4b54; end: 1085e4b67;  */

void FUN_1085e4b54(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1085e4b68; end: 1085e4caf; -[SCTLazyIdentityServices fetchCustomRingtoneIdForConvoId:performer:completion:] */

void FUN_1085e4b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010beee460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfa5f80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e4cb0; end: 1085e4db3;  */

void FUN_1085e4cb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf61b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = param_2;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be94c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1085e4db4; end: 1085e4dc3;  */

void FUN_1085e4db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085e4dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085e4dc4; end: 1085e4e63; -[SCTLazyIdentityServices _resolveRingtoneId:] */

void FUN_1085e4dc4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2a30;
  func_0x00010bf61b20(PTR_PTR_1126b2a30,param_2,param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf61b00();
    func_0x00010c0df840(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085e4e64; end: 1085e4f3b; -[SCTLazyIdentityServices .cxx_destruct] */

void FUN_1085e4e64(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1085e4f3c; end: 1085e4f8b; -[SCTLocalScreenShareInfo initActiveWithAudio:] */

void FUN_1085e4f3c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd018;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 1;
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1085e4f8c; end: 1085e4fd7; -[SCTLocalScreenShareInfo initWithState:] */

void FUN_1085e4f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd018;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 1085e4fd8; end: 1085e5087; -[SCTLocalScreenShareInfo isEqual:] */

bool FUN_1085e4fd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
  }
  else {
    puVar3 = PTR_PTR_1126da5c0;
    _objc_opt_class(PTR_PTR_1126da5c0);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar4 & 1) == 0) {
      bVar2 = false;
    }
    else {
      _objc_retain(param_3);
      uVar5 = *(ulong *)(param_1 + 0x10);
      uVar4 = param_3;
      func_0x00010c252440();
      if (uVar5 == uVar4) {
        bVar1 = *(byte *)(param_1 + 8);
        uVar4 = param_3;
        func_0x00010c2a8ba0(param_3);
        bVar2 = (uint)bVar1 == (uint)uVar4;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 1085e5088; end: 1085e508f; -[SCTLocalScreenShareInfo state] */

undefined8 FUN_1085e5088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085e5090; end: 1085e5097; -[SCTLocalScreenShareInfo withAudio] */

undefined1 FUN_1085e5090(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085e5098; end: 1085e51f3; -[SCTParticipantState initWithUsername:userId:displayName:presenceColor:bitmojiAvatarId:petImageURL:isAiChatbot:] */

undefined1 *
FUN_1085e5098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fd020;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


