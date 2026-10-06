/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108be7bf4; end: 108be7c07; -[SCFriendingContactsGrapheneLogger logContactsUploadWithEmails] */

/* WARNING: Removing unreachable block (ram,0x000108bf6cf8) */

void FUN_108be7bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined **ppuStack_388;
  undefined8 *puStack_380;
  undefined **ppuStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110eec6b8;
  puVar11 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(&PTR____CFConstantStringClassReference_110eec6b8);
  if (lVar3 != 0) {
    plVar15 = *(long **)(lVar3 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110eec6b8);
    ppuVar4 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110eec6b8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110eec6b8);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7a20;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7a20,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar11 = puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar11 = puVar6;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110eec6b8);
  _objc_release(&PTR____CFConstantStringClassReference_110eec6b8);
  __Unwind_Resume();
  pcStack_88 = FUN_108bf6e08;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_e0,puVar6);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar9 = (undefined **)&UNK_110ab7b70;
    unaff_x23 = &uStack_118;
    puVar6 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7b70,puVar6,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar3 = 0;
    puVar16 = auStack_f8;
    puVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar4);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar13 = &uStack_1a0;
  pcStack_128 = FUN_108bf7038;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  puVar12 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  ppuStack_148 = ppuVar5;
  puStack_140 = puVar11;
  ppuStack_138 = ppuVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar9);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar9;
      _objc_retainAutorelease(ppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,ppuVar5);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    ppuVar10 = (undefined **)&UNK_110ab7bc0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7bc0,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar12 = puVar13;
    puVar14 = puVar6;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar12 = puVar13;
      puVar14 = puVar6;
      puVar16 = &uStack_1a0;
    }
  }
  ppuVar5 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar6 = &uStack_220;
  pcStack_1a8 = FUN_108bf71ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar10;
  puVar11 = puVar12;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar15;
  ppuStack_1c0 = ppuVar5;
  ppuStack_1b8 = ppuVar9;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(ppuVar10);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar10);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,ppuVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    ppuVar4 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c10,&uStack_220,puVar12);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar11 = puVar6;
    puVar14 = puVar12;
    puVar16 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar11 = puVar6;
      puVar14 = puVar12;
      puVar16 = &uStack_220;
    }
  }
  ppuVar5 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar10);
  _objc_release(ppuVar10);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  pcStack_228 = FUN_108bf7320;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar12 = puVar14;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar16;
  plStack_248 = plVar15;
  ppuStack_240 = ppuVar5;
  ppuStack_238 = ppuVar10;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_280,puVar6);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    ppuVar9 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c60,puVar6,puVar14);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar3 = 0;
    puVar16 = auStack_298;
    puVar12 = puVar14;
    do {
      if ((&cStack_269)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar11);
    _objc_release(ppuVar4);
    ppuVar7 = ppuVar5;
    __Unwind_Resume();
    pcStack_2c8 = FUN_108bf7550;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    puVar14 = puVar6;
    puVar13 = puVar12;
    puStack_300 = unaff_x24;
    puStack_2f8 = unaff_x23;
    puStack_2f0 = puVar16;
    ppuStack_2e8 = ppuVar5;
    puStack_2e0 = puVar11;
    ppuStack_2d8 = ppuVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(ppuVar9);
    _objc_retain(puVar6);
    puVar11 = (undefined8 *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar7[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      unaff_x24 = auStack_338;
      func_0x000107c278b8(auStack_338,ppuVar5);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar11 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_320,puVar11);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
      ppuVar10 = (undefined **)&UNK_110ab7cb0;
      unaff_x23 = &uStack_358;
      puVar14 = &uStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7cb0,puVar14,puVar12);
      puStack_340 = unaff_x23;
      func_0x000107c278ac(&puStack_340);
      lVar3 = 0;
      puVar11 = auStack_338;
      puVar13 = puVar12;
      do {
        if ((&cStack_309)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar6);
    ppuVar5 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
    ppuVar4 = ppuVar5;
    __Unwind_Resume();
    pcStack_368 = FUN_108bf7780;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3a0 = unaff_x24;
    puStack_398 = unaff_x23;
    puStack_390 = puVar11;
    ppuStack_388 = ppuVar5;
    puStack_380 = puVar6;
    ppuStack_378 = ppuVar9;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(ppuVar10);
    _objc_retain(puVar14);
    if (ppuVar4 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar4[1];
      _objc_retain(ppuVar10);
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar10);
      func_0x000107c278b8(auStack_3d8,ppuVar5);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar11 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x000107c278b8(auStack_3c0,puVar11);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7d00,&uStack_3f8,puVar13);
      puStack_3e0 = &uStack_3f8;
      func_0x000107c278ac(&puStack_3e0);
      lVar3 = 0;
      do {
        if ((&cStack_3a9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar14);
    ppuVar5 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar14);
      _objc_release(ppuVar10);
      __Unwind_Resume();
      func_0x000100c55f24(&plStack_460,ppuVar5 + 9);
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0();
      lVar3 = *plStack_460;
      if (plStack_460[1] != lVar3) {
        lVar17 = 0;
        uVar18 = 0;
        do {
          lVar3 = lVar3 + lVar17;
          _objc_loadWeakRetained();
          if ((lVar3 != 0) &&
             (func_0x00010bf06ba0(puVar8), uVar18 != (plStack_460[1] - *plStack_460 >> 3) - 1U)) {
            func_0x00010bf070e0(puVar8);
          }
          _objc_release(lVar3);
          uVar18 = uVar18 + 1;
          lVar3 = *plStack_460;
          lVar17 = lVar17 + 8;
        } while (uVar18 < (ulong)(plStack_460[1] - lVar3 >> 3));
      }
      func_0x00010bf070e0(puVar8);
      if (plStack_458 != (long *)0x0) {
        plVar15 = plStack_458 + 1;
        do {
          lVar3 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108be7c08; end: 108be7c1b; -[SCFriendingContactsGrapheneLogger logCOntactsUploadWillMetadata] */

/* WARNING: Removing unreachable block (ram,0x000108bf6cf8) */

void FUN_108be7c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined **ppuStack_388;
  undefined8 *puStack_380;
  undefined **ppuStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110eec6d8;
  puVar11 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(&PTR____CFConstantStringClassReference_110eec6d8);
  if (lVar3 != 0) {
    plVar15 = *(long **)(lVar3 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110eec6d8);
    ppuVar4 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110eec6d8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110eec6d8);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7a20;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7a20,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar11 = puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar11 = puVar6;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110eec6d8);
  _objc_release(&PTR____CFConstantStringClassReference_110eec6d8);
  __Unwind_Resume();
  pcStack_88 = FUN_108bf6e08;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_e0,puVar6);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar9 = (undefined **)&UNK_110ab7b70;
    unaff_x23 = &uStack_118;
    puVar6 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7b70,puVar6,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar3 = 0;
    puVar16 = auStack_f8;
    puVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar4);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar13 = &uStack_1a0;
  pcStack_128 = FUN_108bf7038;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  puVar12 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  ppuStack_148 = ppuVar5;
  puStack_140 = puVar11;
  ppuStack_138 = ppuVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar9);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar9;
      _objc_retainAutorelease(ppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,ppuVar5);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    ppuVar10 = (undefined **)&UNK_110ab7bc0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7bc0,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar12 = puVar13;
    puVar14 = puVar6;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar12 = puVar13;
      puVar14 = puVar6;
      puVar16 = &uStack_1a0;
    }
  }
  ppuVar5 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar6 = &uStack_220;
  pcStack_1a8 = FUN_108bf71ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar10;
  puVar11 = puVar12;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar15;
  ppuStack_1c0 = ppuVar5;
  ppuStack_1b8 = ppuVar9;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(ppuVar10);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar10);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,ppuVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    ppuVar4 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c10,&uStack_220,puVar12);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar11 = puVar6;
    puVar14 = puVar12;
    puVar16 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar11 = puVar6;
      puVar14 = puVar12;
      puVar16 = &uStack_220;
    }
  }
  ppuVar5 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar10);
  _objc_release(ppuVar10);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  pcStack_228 = FUN_108bf7320;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar12 = puVar14;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar16;
  plStack_248 = plVar15;
  ppuStack_240 = ppuVar5;
  ppuStack_238 = ppuVar10;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_280,puVar6);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    ppuVar9 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c60,puVar6,puVar14);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar3 = 0;
    puVar16 = auStack_298;
    puVar12 = puVar14;
    do {
      if ((&cStack_269)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar11);
    _objc_release(ppuVar4);
    ppuVar7 = ppuVar5;
    __Unwind_Resume();
    pcStack_2c8 = FUN_108bf7550;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    puVar14 = puVar6;
    puVar13 = puVar12;
    puStack_300 = unaff_x24;
    puStack_2f8 = unaff_x23;
    puStack_2f0 = puVar16;
    ppuStack_2e8 = ppuVar5;
    puStack_2e0 = puVar11;
    ppuStack_2d8 = ppuVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(ppuVar9);
    _objc_retain(puVar6);
    puVar11 = (undefined8 *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar7[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      unaff_x24 = auStack_338;
      func_0x000107c278b8(auStack_338,ppuVar5);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar11 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_320,puVar11);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
      ppuVar10 = (undefined **)&UNK_110ab7cb0;
      unaff_x23 = &uStack_358;
      puVar14 = &uStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7cb0,puVar14,puVar12);
      puStack_340 = unaff_x23;
      func_0x000107c278ac(&puStack_340);
      lVar3 = 0;
      puVar11 = auStack_338;
      puVar13 = puVar12;
      do {
        if ((&cStack_309)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar6);
    ppuVar5 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
    ppuVar4 = ppuVar5;
    __Unwind_Resume();
    pcStack_368 = FUN_108bf7780;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3a0 = unaff_x24;
    puStack_398 = unaff_x23;
    puStack_390 = puVar11;
    ppuStack_388 = ppuVar5;
    puStack_380 = puVar6;
    ppuStack_378 = ppuVar9;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(ppuVar10);
    _objc_retain(puVar14);
    if (ppuVar4 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar4[1];
      _objc_retain(ppuVar10);
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar10);
      func_0x000107c278b8(auStack_3d8,ppuVar5);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar11 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x000107c278b8(auStack_3c0,puVar11);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7d00,&uStack_3f8,puVar13);
      puStack_3e0 = &uStack_3f8;
      func_0x000107c278ac(&puStack_3e0);
      lVar3 = 0;
      do {
        if ((&cStack_3a9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar14);
    ppuVar5 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar14);
      _objc_release(ppuVar10);
      __Unwind_Resume();
      func_0x000100c55f24(&plStack_460,ppuVar5 + 9);
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0();
      lVar3 = *plStack_460;
      if (plStack_460[1] != lVar3) {
        lVar17 = 0;
        uVar18 = 0;
        do {
          lVar3 = lVar3 + lVar17;
          _objc_loadWeakRetained();
          if ((lVar3 != 0) &&
             (func_0x00010bf06ba0(puVar8), uVar18 != (plStack_460[1] - *plStack_460 >> 3) - 1U)) {
            func_0x00010bf070e0(puVar8);
          }
          _objc_release(lVar3);
          uVar18 = uVar18 + 1;
          lVar3 = *plStack_460;
          lVar17 = lVar17 + 8;
        } while (uVar18 < (ulong)(plStack_460[1] - lVar3 >> 3));
      }
      func_0x00010bf070e0(puVar8);
      if (plStack_458 != (long *)0x0) {
        plVar15 = plStack_458 + 1;
        do {
          lVar3 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108be7c1c; end: 108be7c2f; -[SCFriendingContactsGrapheneLogger logContactsUploadFallbackToDefault] */

/* WARNING: Removing unreachable block (ram,0x000108bf6cf8) */

void FUN_108be7c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  ulong uVar18;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined **ppuStack_388;
  undefined8 *puStack_380;
  undefined **ppuStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110ddf878;
  puVar11 = (undefined8 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  _objc_retain(&PTR____CFConstantStringClassReference_110ddf878);
  if (lVar3 != 0) {
    plVar15 = *(long **)(lVar3 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110ddf878);
    ppuVar4 = ppuVar5;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110ddf878);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110ddf878);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar4 = (undefined **)&UNK_110ab7a20;
    param_4 = (undefined8 *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7a20,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar11 = puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar11 = puVar6;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110ddf878);
  _objc_release(&PTR____CFConstantStringClassReference_110ddf878);
  __Unwind_Resume();
  pcStack_88 = FUN_108bf6e08;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar5[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_e0,puVar6);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar9 = (undefined **)&UNK_110ab7b70;
    unaff_x23 = &uStack_118;
    puVar6 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7b70,puVar6,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar3 = 0;
    puVar16 = auStack_f8;
    puVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar4);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar13 = &uStack_1a0;
  pcStack_128 = FUN_108bf7038;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  puVar12 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  ppuStack_148 = ppuVar5;
  puStack_140 = puVar11;
  ppuStack_138 = ppuVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar9);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar9;
      _objc_retainAutorelease(ppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,ppuVar5);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    ppuVar10 = (undefined **)&UNK_110ab7bc0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7bc0,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar12 = puVar13;
    puVar14 = puVar6;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar12 = puVar13;
      puVar14 = puVar6;
      puVar16 = &uStack_1a0;
    }
  }
  ppuVar5 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  puVar6 = &uStack_220;
  pcStack_1a8 = FUN_108bf71ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar10;
  puVar11 = puVar12;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar15;
  ppuStack_1c0 = ppuVar5;
  ppuStack_1b8 = ppuVar9;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(ppuVar10);
  plVar15 = (long *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar10);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,ppuVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    ppuVar4 = (undefined **)&UNK_110ab7c10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c10,&uStack_220,puVar12);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar11 = puVar6;
    puVar14 = puVar12;
    puVar16 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar11 = puVar6;
      puVar14 = puVar12;
      puVar16 = &uStack_220;
    }
  }
  ppuVar5 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar10);
  _objc_release(ppuVar10);
  ppuVar7 = ppuVar5;
  __Unwind_Resume();
  pcStack_228 = FUN_108bf7320;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar4;
  puVar6 = puVar11;
  puVar12 = puVar14;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar16;
  plStack_248 = plVar15;
  ppuStack_240 = ppuVar5;
  ppuStack_238 = ppuVar10;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  puVar16 = (undefined8 *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar15 = (long *)ppuVar7[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f508987;
    }
    else {
      ppuVar5 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,ppuVar5);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f508987;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_280,puVar6);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    ppuVar9 = (undefined **)&UNK_110ab7c60;
    unaff_x23 = &uStack_2b8;
    puVar6 = &uStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7c60,puVar6,puVar14);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar3 = 0;
    puVar16 = auStack_298;
    puVar12 = puVar14;
    do {
      if ((&cStack_269)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar11);
    _objc_release(ppuVar4);
    ppuVar7 = ppuVar5;
    __Unwind_Resume();
    pcStack_2c8 = FUN_108bf7550;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    puVar14 = puVar6;
    puVar13 = puVar12;
    puStack_300 = unaff_x24;
    puStack_2f8 = unaff_x23;
    puStack_2f0 = puVar16;
    ppuStack_2e8 = ppuVar5;
    puStack_2e0 = puVar11;
    ppuStack_2d8 = ppuVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(ppuVar9);
    _objc_retain(puVar6);
    puVar11 = (undefined8 *)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar7[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      unaff_x24 = auStack_338;
      func_0x000107c278b8(auStack_338,ppuVar5);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar11 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_320,puVar11);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
      ppuVar10 = (undefined **)&UNK_110ab7cb0;
      unaff_x23 = &uStack_358;
      puVar14 = &uStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7cb0,puVar14,puVar12);
      puStack_340 = unaff_x23;
      func_0x000107c278ac(&puStack_340);
      lVar3 = 0;
      puVar11 = auStack_338;
      puVar13 = puVar12;
      do {
        if ((&cStack_309)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar6);
    ppuVar5 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
    ppuVar4 = ppuVar5;
    __Unwind_Resume();
    pcStack_368 = FUN_108bf7780;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3a0 = unaff_x24;
    puStack_398 = unaff_x23;
    puStack_390 = puVar11;
    ppuStack_388 = ppuVar5;
    puStack_380 = puVar6;
    ppuStack_378 = ppuVar9;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(ppuVar10);
    _objc_retain(puVar14);
    if (ppuVar4 != (undefined **)0x0) {
      plVar15 = (long *)ppuVar4[1];
      _objc_retain(ppuVar10);
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar5 = (undefined **)&UNK_10f508987;
      }
      else {
        ppuVar5 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar10);
      func_0x000107c278b8(auStack_3d8,ppuVar5);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&UNK_10f508987;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar11 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x000107c278b8(auStack_3c0,puVar11);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110ab7d00,&uStack_3f8,puVar13);
      puStack_3e0 = &uStack_3f8;
      func_0x000107c278ac(&puStack_3e0);
      lVar3 = 0;
      do {
        if ((&cStack_3a9)[lVar3] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
    _objc_release(puVar14);
    ppuVar5 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar14);
      _objc_release(ppuVar10);
      __Unwind_Resume();
      func_0x000100c55f24(&plStack_460,ppuVar5 + 9);
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0();
      lVar3 = *plStack_460;
      if (plStack_460[1] != lVar3) {
        lVar17 = 0;
        uVar18 = 0;
        do {
          lVar3 = lVar3 + lVar17;
          _objc_loadWeakRetained();
          if ((lVar3 != 0) &&
             (func_0x00010bf06ba0(puVar8), uVar18 != (plStack_460[1] - *plStack_460 >> 3) - 1U)) {
            func_0x00010bf070e0(puVar8);
          }
          _objc_release(lVar3);
          uVar18 = uVar18 + 1;
          lVar3 = *plStack_460;
          lVar17 = lVar17 + 8;
        } while (uVar18 < (ulong)(plStack_460[1] - lVar3 >> 3));
      }
      func_0x00010bf070e0(puVar8);
      if (plStack_458 != (long *)0x0) {
        plVar15 = plStack_458 + 1;
        do {
          lVar3 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108be7c30; end: 108be7c3b; -[SCFriendingContactsGrapheneLogger .cxx_destruct] */

void FUN_108be7c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be7c3c; end: 108be7c47; -[SCFriendsFetchBlizzardLogger .cxx_destruct] */

void FUN_108be7c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be7c48; end: 108be7c9b; -[SCSnapchattersGrapheneLogger logRemoteSnapchatterMismatchCount:] */

void FUN_108be7c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a060(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be7c9c; end: 108be7ce3; -[SCSnapchattersGrapheneLogger logRemoteSnapchatterNetworkError] */

void FUN_108be7c9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a080(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be7ce4; end: 108be7d2b; -[SCSnapchattersGrapheneLogger logFetchedSnapchatterNullError] */

void FUN_108be7ce4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c244540(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be7d2c; end: 108be7d7f; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheEntriesCount:] */

void FUN_108be7d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a000(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be7d80; end: 108be7e23; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterUnexpectedUserIdsCount:requestSource:] */

void FUN_108be7d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a0e0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_108be7e24(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be7e24; end: 108be7e4b;  */

undefined ** FUN_108be7e24(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return (undefined **)(&PTR_PTR_110ab7290)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd9778;
}



/* Entry: 108be7e4c; end: 108be7ee7; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterFetchWithType:] */

void FUN_108be7e4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a040(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be7ee8; end: 108be7f8b; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheHitCount:requestSource:] */

void FUN_108be7ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c129fe0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_108be7e24(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be7f8c; end: 108be802f; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterFetchedTotalCount:requestSource:] */

void FUN_108be7f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a0c0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_108be7e24(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be8030; end: 108be80d3; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheMissCount:requestSource:] */

void FUN_108be8030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a020(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_108be7e24(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be80d4; end: 108be8127; -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterRemovedCacheCount:] */

void FUN_108be80d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c12a0a0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be8128; end: 108be817b; -[SCSnapchattersGrapheneLogger logSuggestionSyncGapPeriod:] */

void FUN_108be8128(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c2625e0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be817c; end: 108be8263; -[SCSnapchattersGrapheneLogger logSuggestionSyncWithType:result:] */

void FUN_108be817c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eec778;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec758;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eec798;
  if (param_4 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = PTR_PTR_1126db0d8;
  func_0x00010c2625c0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108be8264; end: 108be8363; -[SCSnapchattersGrapheneLogger logSuggestionsSyncLatency:fetchRequest:] */

void FUN_108be8264(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  if (0.0 < param_1) {
    puVar1 = PTR_PTR_1126db0d8;
    func_0x00010c262600(PTR_PTR_1126db0d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uVar2 = param_4;
    func_0x00010c076fa0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010c07aa00();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_4;
        func_0x00010c27c360();
        ppuVar4 = &PTR____CFConstantStringClassReference_110eeca18;
        if (uVar2 != 1) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110df3478;
        }
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e3cd18;
      }
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110eec9f8;
    }
    _objc_release(param_4);
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dbfab8,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar3,(long)param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108be8364; end: 108be8397;  */

void FUN_108be8364(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108be8398; end: 108be83eb; -[SCSnapchattersGrapheneLogger logFetchSuggestionLatency:] */

void FUN_108be8398(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c262440(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be83ec; end: 108be843f; -[SCSnapchattersGrapheneLogger logSearchNonFriendsLatency:] */

void FUN_108be83ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c0dad40(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be8440; end: 108be85d3; -[SCSnapchattersGrapheneLogger logFetchContactsLatencyMs:type:includingContactUpload:] */

void FUN_108be8440(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbfff8;
  if (param_4 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1d3b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eec8b8;
  if (param_4 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eec898;
  if (param_4 != 0) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = PTR_PTR_1126db0d8;
  func_0x00010bf4a960(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dad058,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010befbfe0(*(undefined8 *)(param_1 + 8),param_2,puVar3,param_3);
  puVar4 = PTR_PTR_1126db0d8;
  if (param_4 == 1) {
    func_0x00010c125820(PTR_PTR_1126db0d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 == 0 || (param_4 == 2 || param_4 == 1)) goto LAB_108be85b4;
    func_0x00010c125840(PTR_PTR_1126db0d8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010befbfe0(*(undefined8 *)(param_1 + 8),param_2,puVar5,param_3);
  _objc_release(puVar5);
LAB_108be85b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108be85d4; end: 108be861b; -[SCSnapchattersGrapheneLogger logNullSuggestionFromBackend] */

void FUN_108be85d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c0ddc20(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be861c; end: 108be8663; -[SCSnapchattersGrapheneLogger logOutgoingSnapchattersFetchBeforeDataFullySynced] */

void FUN_108be861c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c0ee8c0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be8664; end: 108be871f; -[SCSnapchattersGrapheneLogger logFetchContactsWithContactsPermission:isContactSyncEnabled:] */

void FUN_108be8664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bf4a980(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108be8720; end: 108be885f; -[SCSnapchattersGrapheneLogger logEmptyResponseInFindFriendsWithPhoneVerified:contactBookIncluded:] */

void FUN_108be8720(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126db0d8;
  func_0x00010bfaf220(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd96b8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dadab8;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110eec8f8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110eec918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108be8860; end: 108be8987; -[SCSnapchattersGrapheneLogger logErrorInFindFriendsWithErrorCode:] */

void FUN_108be8860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bfaf240(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108be8988; end: 108be8a03; -[SCSnapchattersGrapheneLogger logEmptyContactsInFindFriendsWithPhoneVerified:contactBookIncluded:] */

void FUN_108be8988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bfaf260(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be168c0(param_1,param_2,puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108be8a04; end: 108be8a7f; -[SCSnapchattersGrapheneLogger logEmptySuggestionsInFindFriendsWithPhoneVerified:contactBookIncluded:] */

void FUN_108be8a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bfaf280(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be168c0(param_1,param_2,puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108be8a80; end: 108be8afb; -[SCSnapchattersGrapheneLogger logFindFriendsFetchInRegWithPhoneVerified:contactBookIncluded:] */

void FUN_108be8a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bfaf2a0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be168c0(param_1,param_2,puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108be8afc; end: 108be8c03; -[SCSnapchattersGrapheneLogger logFindFriendsContactBookSize:phoneVerified:] */

void FUN_108be8afc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126db0d8;
  func_0x00010bf49c20(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110eec938,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be8c04; end: 108be8ccb; -[SCSnapchattersGrapheneLogger logFindFriendsContactBookUploaded:] */

void FUN_108be8c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bf4aac0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be8ccc; end: 108be8d93; -[SCSnapchattersGrapheneLogger logFindFriendsContactsReceived:] */

void FUN_108be8ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010bf4aa60(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be8d94; end: 108be8ecb; -[SCSnapchattersGrapheneLogger logMultiAddFriendWithDataRequest:placement:] */

void FUN_108be8d94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
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
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar6 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar6,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        func_0x00010befb8c0();
        FUN_10901fb98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0bc0(param_1,param_2,uVar2,param_4);
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar6 = auStack_d8;
      lVar1 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126db0d8;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  func_0x00010bef8700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110df9a98,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_3 + 8),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108be8ecc; end: 108be8f97; -[SCSnapchattersGrapheneLogger logAddFriendWithSource:placement:] */

void FUN_108be8ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef8700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110df9a98,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be8f98; end: 108be8feb; -[SCSnapchattersGrapheneLogger logFriendsSyncAddedMeReceived:] */

void FUN_108be8f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010befcc80(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be8fec; end: 108be9073; -[SCSnapchattersGrapheneLogger logFriendsSyncStaleDroppedWithPath:] */

void FUN_108be8fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  _objc_retain(param_3);
  func_0x00010c24d560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be9074; end: 108be9127; -[SCSnapchattersGrapheneLogger logUserScoreRequestWithEndpoint:] */

void FUN_108be9074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  _objc_retain(param_3);
  func_0x00010c2935e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0a318,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be9128; end: 108be929b; -[SCSnapchattersGrapheneLogger logUserScoreResponseWithEndpoint:success:statusCode:] */

void FUN_108be9128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126db0d8;
  _objc_retain(param_3);
  func_0x00010c2935e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0a318,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dde9d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108be929c; end: 108be92df; -[SCSnapchattersGrapheneLogger logUserNameCalled] */

void FUN_108be929c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c244380(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be92e0; end: 108be9367; -[SCSnapchattersGrapheneLogger logDeleteProcessType:] */

void FUN_108be92e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0d8;
  _objc_retain(param_3);
  func_0x00010bf0c3a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be9368; end: 108be9487; -[SCSnapchattersGrapheneLogger _setIncomingFriendsRepository:] */

void FUN_108be9368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108be9488; end: 108be94cf;  */

void FUN_108be9488(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a1e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108be94d0; end: 108be95bf; -[SCSnapchattersGrapheneLogger _logUnviewedIncomingFriends:] */

void FUN_108be94d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar3 = *(undefined **)(param_1 + 0x20);
  if (lVar1 == 0) {
    *(undefined **)(param_1 + 0x20) = PTR____NSArray0__struct_11034ab48;
  }
  else {
    func_0x00010c071b60(puVar3,param_2,param_3);
    if (((ulong)puVar3 & 1) != 0) goto LAB_108be95a8;
    puVar3 = PTR_PTR_1126db0d8;
    func_0x00010c282e00(PTR_PTR_1126db0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bef9180(uVar4,param_2,puVar3,lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126db0d8;
      func_0x00010c282de0(PTR_PTR_1126db0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
      _objc_release(puVar2);
    }
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
LAB_108be95a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be95c0; end: 108be96e7; -[SCSnapchattersGrapheneLogger _findFriendsMetricDimensionsWithMetric:phoneVerified:contactBookIncluded:] */

void FUN_108be95c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(param_3);
  func_0x00010bf5f320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dae898,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd96b8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dadab8;
  }
  uVar5 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110eec8f8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  uVar4 = uVar5;
  func_0x00010c2ac460(uVar5,param_2,&PTR____CFConstantStringClassReference_110eec918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108be96e8; end: 108be972b; -[SCSnapchattersGrapheneLogger .cxx_destruct] */

void FUN_108be96e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be972c; end: 108be97cb; -[SCSnapchattersReliablePinningLogger initWithGrapheneRegistry:] */

undefined1 * FUN_108be972c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdcb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c128860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108be97cc; end: 108be982f; -[SCSnapchattersReliablePinningLogger logPinnedSuggestionsCount:] */

void FUN_108be97cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0fc480(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be9830; end: 108be9893; -[SCSnapchattersReliablePinningLogger logSuggestionsHitCount:] */

void FUN_108be9830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010bfe3980(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be9894; end: 108be98f7; -[SCSnapchattersReliablePinningLogger logSuggestionsMissCount:] */

void FUN_108be9894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0cea20(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be98f8; end: 108be996b; -[SCSnapchattersReliablePinningLogger logTopSuggestionPinnedInLegacyPath] */

void FUN_108be98f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0fc380(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be996c; end: 108be99df; -[SCSnapchattersReliablePinningLogger logTopSuggestionNotPinnedInLegacyPath] */

void FUN_108be996c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0db940(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be99e0; end: 108be9a53; -[SCSnapchattersReliablePinningLogger logRecentlyJoinerPinnedInLegacyPath] */

void FUN_108be99e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0fc380(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be9a54; end: 108be9ac7; -[SCSnapchattersReliablePinningLogger logRecentlyJoinerNotPinnedInLegacyPath] */

void FUN_108be9a54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0db940(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be9ac8; end: 108be9b2b; -[SCSnapchattersReliablePinningLogger logPersistedCountOfPinnedUserIds:] */

void FUN_108be9ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c0864a0(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be9b2c; end: 108be9c5b; -[SCSnapchattersReliablePinningLogger logUserIdCount:snapchatterCount:] */

void FUN_108be9b2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010c137320(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  puVar2 = PTR_PTR_1126db0e0;
  func_0x00010c13fce0(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
  puVar1 = PTR_PTR_1126db0e0;
  func_0x00010bf7ed20(PTR_PTR_1126db0e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3 - param_4);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3 - param_4);
  puVar2 = PTR_PTR_1126db0e0;
  if (param_3 == param_4) {
    func_0x00010bfe3960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0cea00(PTR_PTR_1126db0e0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108be9c5c; end: 108be9c67; -[SCSnapchattersReliablePinningLogger .cxx_destruct] */

void FUN_108be9c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be9c68; end: 108be9e63;  */

void FUN_108be9c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126db0e8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0fb120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda2e0();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdb6a0();
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf8db80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfdc640(uVar10);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304e0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010c271c60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108be9e64; end: 108bea44f; -[SCSnapchattersContactService fetchContactSnapchattersWithAddressBook:contactMetaDataMap:phoneContacts:shouldIncludeEarlyUploadHeader:removeFromSuggestions:callbackQueue:completionBlock:] */

void FUN_108be9e64(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar12 = PTR_PTR_1126db0f0;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar10 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 != (undefined *)0x0) {
    puVar10 = param_3;
  }
  _objc_retain(puVar10);
  _objc_release(param_3);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar11);
  func_0x00010c1d03c0(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar15);
  func_0x00010c200cc0(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b1660(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c206c40(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar11;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea4e0(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    func_0x00010c071480(lVar2);
    func_0x00010c0df6e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194ca0(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
  puVar11 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x00010bf10fe0();
  if (puVar11 < (undefined *)0x3) {
    uVar3 = 0;
  }
  else if (puVar11 == (undefined *)0x3) {
    iVar1 = 2;
    func_0x000107c31924(2,0x12,0,0);
    uVar3 = 0xffffffff9bc40116;
    if (iVar1 != 0) {
      uVar3 = 0xffffffffe47b87d0;
    }
  }
  else {
    uVar3 = 0xffffffff8b6797ca;
  }
  func_0x00010b784a84(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181280(puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar11;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010c0d3c80();
  _objc_release(puVar15);
  _objc_release(puVar11);
  if (param_5 == 0) {
    if (param_4 == 0) goto LAB_108bea22c;
    puVar11 = param_1;
    func_0x00010be223e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_5;
    func_0x000107c31908(param_5,&PTR___NSConcreteGlobalBlock_110ab7338);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar11);
    _objc_release(puVar15);
    _objc_release(lVar5);
  }
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar11);
LAB_108bea22c:
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108bea450;
  puStack_a0 = &UNK_110ab7358;
  _objc_retain(param_9);
  uStack_98 = param_9;
  ppuVar6 = &puStack_b8;
  _objc_retainBlock();
  if (param_6 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110eecad8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110eecaf8;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_c0,param_1);
  puStack_108 = puVar11;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108bea548;
  puStack_f0 = &UNK_110880308;
  puVar9 = auStack_c0;
  _objc_copyWeak(auStack_c8,puVar9);
  _objc_retain(puVar4);
  puStack_e8 = puVar4;
  _objc_retain(puVar15);
  puStack_e0 = puVar15;
  _objc_retain(param_8);
  uStack_d8 = param_8;
  _objc_retain(ppuVar6);
  ppuVar7 = &puStack_108;
  ppuStack_d0 = ppuVar6;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = (undefined *)0x6;
  ppuVar13 = ppuVar7;
  func_0x00010bfca740();
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuStack_d0);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar15);
  _objc_release(ppuVar6);
  _objc_release(uStack_98);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    __Unwind_Resume();
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    _objc_retain(ppuVar13);
    lVar2 = *(long *)(puVar10 + 0x20);
    if (lVar2 != 0) {
      if (ppuVar13 == (undefined **)0x0) {
        puVar12 = PTR_PTR_1126bc0e8;
        func_0x00010c072220();
        if ((int)puVar12 == 0) {
          lVar2 = *(long *)(puVar10 + 0x20);
          puVar10 = PTR_PTR_1126db0f8;
          _objc_alloc(PTR_PTR_1126db0f8);
          func_0x00010c0206e0();
          pcVar14 = *(code **)(lVar2 + 0x10);
          puVar12 = (undefined *)0x0;
          puVar15 = puVar10;
        }
        else {
          puVar12 = puVar11;
          FUN_108beecdc(puVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = *(long *)(puVar10 + 0x20);
          pcVar14 = *(code **)(lVar2 + 0x10);
          puVar10 = (undefined *)0x0;
          puVar15 = puVar12;
        }
        (*pcVar14)(lVar2,puVar10,puVar12);
        _objc_release(puVar15);
      }
      else {
        (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar13);
      }
    }
    _objc_release(ppuVar13);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 108bea450; end: 108bea547;  */

void FUN_108bea450(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126bc0e8;
      func_0x00010c072220();
      if ((int)puVar2 == 0) {
        lVar1 = *(long *)(param_1 + 0x20);
        puVar2 = PTR_PTR_1126db0f8;
        _objc_alloc(PTR_PTR_1126db0f8);
        func_0x00010c0206e0();
        pcVar4 = *(code **)(lVar1 + 0x10);
        puVar3 = (undefined *)0x0;
        puVar5 = puVar2;
      }
      else {
        puVar3 = param_3;
        FUN_108beecdc(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = *(long *)(param_1 + 0x20);
        pcVar4 = *(code **)(lVar1 + 0x10);
        puVar2 = (undefined *)0x0;
        puVar5 = puVar3;
      }
      (*pcVar4)(lVar1,puVar2,puVar3);
      _objc_release(puVar5);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,0,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bea548; end: 108bea5db;  */

void FUN_108bea548(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6600();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bea5dc; end: 108bea7eb; -[SCSnapchattersContactService fetchServerContactsWithCallbackQueue:completionBlock:] */

void FUN_108bea5dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eac7f8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108bea7ec;
  puStack_88 = &UNK_110ab7358;
  _objc_retain(param_4);
  ppuVar2 = &puStack_a0;
  uStack_80 = param_4;
  _objc_retainBlock();
  _objc_initWeak(auStack_a8,param_1);
  puStack_e8 = puVar9;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108beaac4;
  puStack_d0 = &UNK_1108b2198;
  puVar8 = auStack_a8;
  _objc_copyWeak(auStack_b0,puVar8);
  _objc_retain(puVar1);
  puStack_c8 = puVar1;
  _objc_retain(param_3);
  lStack_c0 = param_3;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_e8;
  ppuStack_b8 = ppuVar2;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined *)0x6;
  ppuVar10 = ppuVar3;
  func_0x00010bfca740();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_b8);
  _objc_release(lStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(ppuVar10);
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar5 != 0) {
    if (ppuVar10 == (undefined **)0x0) {
      puVar1 = PTR_PTR_1126bc0e8;
      func_0x00010c072220();
      if ((int)puVar1 == 0) {
        puVar1 = PTR_PTR_1126db100;
        _objc_alloc(PTR_PTR_1126db100);
        func_0x00010c0206e0();
        puVar6 = puVar1;
        func_0x00010bf4a840();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x000107c31908();
        _objc_release(puVar6);
        (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar7,0);
        _objc_release(puVar7);
      }
      else {
        puVar1 = puVar9;
        FUN_108beecdc(puVar9);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,puVar1);
      }
      _objc_release(puVar1);
    }
    else {
      (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar10);
    }
  }
  _objc_release(ppuVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 108bea7ec; end: 108bea91b;  */

void FUN_108bea7ec(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126bc0e8;
      func_0x00010c072220();
      if ((int)puVar2 == 0) {
        puVar2 = PTR_PTR_1126db100;
        _objc_alloc(PTR_PTR_1126db100);
        func_0x00010c0206e0();
        puVar3 = puVar2;
        func_0x00010bf4a840();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x000107c31908();
        _objc_release(puVar3);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar4,0);
        _objc_release(puVar4);
      }
      else {
        puVar2 = param_3;
        FUN_108beecdc(param_3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
      }
      _objc_release(puVar2);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,0,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bea91c; end: 108beaac3;  */

void FUN_108bea91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126db108;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf867c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08a780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = param_3;
  func_0x00010bfdc9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar8 = param_3;
  func_0x00010bfda2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar9 = param_3;
  func_0x00010bfdb6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf1f3c0();
  func_0x00010c05f700(param_1,puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108beaac4; end: 108beab57;  */

void FUN_108beaac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6620();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108beab58; end: 108bead67; -[SCSnapchattersContactService deleteAllContactsWithCallbackQueue:completionBlock:] */

void FUN_108beab58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  code *pcVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eecab8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108bead68;
  puStack_88 = &UNK_110ab7358;
  _objc_retain(param_4);
  ppuVar7 = &puStack_a0;
  uStack_80 = param_4;
  _objc_retainBlock();
  _objc_initWeak(auStack_a8,param_1);
  puStack_e8 = puVar5;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108beae3c;
  puStack_d0 = &UNK_1108b2198;
  puVar6 = auStack_a8;
  _objc_copyWeak(auStack_b0,puVar6);
  _objc_retain(puVar1);
  puStack_c8 = puVar1;
  _objc_retain(param_3);
  lStack_c0 = param_3;
  _objc_retain(ppuVar7);
  ppuVar2 = &puStack_e8;
  ppuStack_b8 = ppuVar7;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 6;
  ppuVar9 = ppuVar2;
  func_0x00010bfca740();
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_b8);
  _objc_release(lStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar7);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  lVar4 = *(long *)(param_3 + 0x20);
  if (lVar4 != 0) {
    if (ppuVar9 == (undefined **)0x0) {
      puVar5 = PTR_PTR_1126bc0e8;
      func_0x00010c072220();
      lVar4 = *(long *)(param_3 + 0x20);
      if ((int)puVar5 != 0) {
        uVar3 = uVar8;
        FUN_108beecdc(uVar8);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
        _objc_release(uVar3);
        goto LAB_108beae14;
      }
      pcVar10 = *(code **)(lVar4 + 0x10);
      ppuVar7 = (undefined **)0x0;
    }
    else {
      pcVar10 = *(code **)(lVar4 + 0x10);
      ppuVar7 = ppuVar9;
    }
    (*pcVar10)(lVar4,ppuVar7);
  }
LAB_108beae14:
  _objc_release(ppuVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 108bead68; end: 108beae3b;  */

void FUN_108bead68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126bc0e8;
      func_0x00010c072220();
      lVar1 = *(long *)(param_1 + 0x20);
      if ((int)puVar2 != 0) {
        uVar3 = param_3;
        FUN_108beecdc(param_3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
        _objc_release(uVar3);
        goto LAB_108beae14;
      }
      pcVar5 = *(code **)(lVar1 + 0x10);
      lVar4 = 0;
    }
    else {
      pcVar5 = *(code **)(lVar1 + 0x10);
      lVar4 = param_4;
    }
    (*pcVar5)(lVar1,lVar4);
  }
LAB_108beae14:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108beae3c; end: 108beaecf;  */

void FUN_108beae3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6620();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108beaed0; end: 108beaefb; -[SCSnapchattersContactService _submitRequestWithSnapToken:error:baseUrlString:endpoint:parameters:headers:completionQueue:completionBlock:] */

void FUN_108beaed0(void)

{
  func_0x00010bec6600();
  return;
}



/* Entry: 108beaefc; end: 108beb20b; -[SCSnapchattersContactService _submitRequestWithSnapToken:error:baseUrlString:endpoint:parameters:headers:authenticated:completionQueue:completionBlock:] */

void FUN_108beaefc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,undefined *param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if ((param_4 == 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar1 = param_3;
    func_0x00010c08fa60();
    puVar3 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar3 = puVar2;
      func_0x00010c1d0640();
    }
    func_0x000108c073cc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar2);
    }
    if (param_8 != 0) {
      func_0x00010bef7f60(puVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar5 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_12);
    _objc_retain(param_12);
    func_0x00010c25f700(uVar6);
    _objc_release(puVar5);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108beb20c;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_12);
    puStack_80 = param_12;
    _objc_retain(param_4);
    lStack_88 = param_4;
    func_0x000107c27d8c(param_11,&puStack_a8);
    _objc_release(lStack_88);
    puVar2 = puStack_80;
  }
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108beb20c; end: 108beb24f;  */

void FUN_108beb20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108beb220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108beb250; end: 108beb52b; -[SCSnapchattersContactService _getSOJUContactMetaDataJsonFrom:] */

void FUN_108beb250(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar14 = *(undefined8 *)(lVar13 * 8);
      puVar5 = PTR_PTR_1126db0e8;
      _objc_alloc(PTR_PTR_1126db0e8);
      uVar6 = uVar14;
      func_0x00010c0fb120(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010bf85d80(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfda2e0(uVar14);
      func_0x00010c0df6e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfdb6a0(uVar14);
      func_0x00010c0df6e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar14;
      func_0x00010bf8db80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfdc640(uVar14);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304e0(puVar5);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar8 = puVar5;
      func_0x00010c271c60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar5);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
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



/* Entry: 108beb52c; end: 108beb567; -[SCSnapchattersContactService .cxx_destruct] */

void FUN_108beb52c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108beb568; end: 108beb957; -[SCSnapchattersFetchService fetchAtlasFriendsWithDeltaFriendToken:isPostLoginRequest:callbackQueue:completionBlock:] */

void FUN_108beb568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

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
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126db118;
  _objc_retain(param_3);
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0eeaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216b20();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c135080(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e880();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c135080(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df240();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108beb958;
  puStack_b0 = &UNK_110ab73c8;
  _objc_retain(param_5);
  lStack_a8 = param_5;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_opt_class(PTR_PTR_1126db028);
  func_0x00010c0199c0();
  puVar4 = PTR_PTR_1126ae748;
  puStack_d8 = puVar3;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x000108be7b44();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c08fa60();
  if (puVar5 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dd9d18;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dbeff8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eecb78;
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar8;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf18ba0();
  _objc_release(puVar5);
  uVar10 = *(undefined8 *)(lStack_d0 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puStack_d8;
  func_0x00010c27f2c0(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar10);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_release(puVar2);
  _objc_release(param_6);
  lVar11 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_108beb958;
  puStack_110 = puVar7;
  puStack_108 = puVar2;
  uStack_100 = param_6;
  lStack_f8 = param_5;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar6);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_108beba20;
  puStack_130 = &UNK_11084a9e8;
  uVar10 = *(undefined8 *)(lVar11 + 0x20);
  uVar1 = *(undefined8 *)(lVar11 + 0x28);
  puStack_128 = puVar6;
  _objc_retain(uVar1);
  uStack_120 = param_2;
  uStack_118 = uVar1;
  _objc_retain(param_2);
  _objc_retain(puVar6);
  func_0x000107c27d8c(uVar10,&puStack_148);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(puStack_128);
  _objc_release(param_2);
  _objc_release(puVar6);
  return;
}



/* Entry: 108beb958; end: 108beba1f;  */

void FUN_108beb958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108beba20;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_3;
  _objc_retain(uVar2);
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108beba20; end: 108beba47;  */

void FUN_108beba20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108beba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108beba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108beba48; end: 108beba77; -[SCSnapchattersFetchService .cxx_destruct] */

void FUN_108beba48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108beba78; end: 108bebb47; -[SCSnapchattersSnapTokenProvider initWithSnapTokenProvider:grapheneRegistry:] */

undefined1 *
FUN_108beba78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdcc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bebb48; end: 108bebbb7;  */

void FUN_108bebb48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f50803c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x17);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bebbb8; end: 108bebd9b; -[SCSnapchattersSnapTokenProvider getSnapTokenForAccessType:callback:] */

void FUN_108bebbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108bebd9c;
  puStack_90 = &UNK_1108492c0;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 108bebd9c; end: 108bebe43;  */

void FUN_108bebd9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bebe44; end: 108bebf33; -[SCSnapchattersSnapTokenProvider _logRetrieveSnapTokenWithError:] */

void FUN_108bebe44(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db0d8;
  func_0x00010c13efe0(PTR_PTR_1126db0d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf3ec40();
    if (uVar2 < 8) {
      ppuVar6 = (undefined **)(&PTR_PTR_110ab7440)[uVar2];
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110db8b78;
    }
  }
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dce878,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c244c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bebf34; end: 108bebf6f; -[SCSnapchattersSnapTokenProvider .cxx_destruct] */

void FUN_108bebf34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bebf70; end: 108bec15f;  */

void FUN_108bebf70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar2 = lVar1;
  func_0x00010c282820();
  if (lVar2 == 1) {
    uVar3 = 0xffffffff8e5d0897;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c282820();
    if (lVar2 != 2) {
      uVar3 = 0;
      goto LAB_108bec000;
    }
    uVar3 = 0xffffffff9af5fb41;
  }
  func_0x00010b787c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_108bec000:
  puVar4 = PTR_PTR_1126bee18;
  _objc_opt_new(PTR_PTR_1126bee18);
  uVar5 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c21f780(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x00010c2622e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fb80(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c17a400(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c190060(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a81e0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ca5e0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1aefe0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108bec160; end: 108bec3b7; -[SCSnapchattersSuggestServiceImpl fetchSuggestionWithIsPrefetchForNotification:isLoginOrSignup:isOnDemand:fetchRequestId:callbackQueue:completionBlock:] */

void FUN_108bec160(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puVar1 = PTR_PTR_1126bee10;
  _objc_opt_new(PTR_PTR_1126bee10);
  func_0x00010c161620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c088660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8b60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c19b4c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d0e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar6 = param_1;
  func_0x00010be949c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(in_x7);
  func_0x00010bec65c0(param_1);
  _objc_release(in_x7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 108bec3b8; end: 108bec433;  */

void FUN_108bec3b8(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29940();
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bec434; end: 108bec593; -[SCSnapchattersSuggestServiceImpl fetchHiddenSuggestionWithCallbackQueue:completionBlock:] */

void FUN_108bec434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bee10;
  _objc_opt_new(PTR_PTR_1126bee10);
  func_0x00010c161620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bec65c0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bec594; end: 108bec60f;  */

void FUN_108bec594(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29940();
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bec610; end: 108bec703; -[SCSnapchattersSuggestServiceImpl hideSuggestedSnapchatter:placement:callbackQueue:completionBlock:] */

void FUN_108bec610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar1;
  uVar9 = param_5;
  uVar10 = param_6;
  func_0x00010bfe2a80(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  puVar2 = PTR_PTR_1126bee10;
  _objc_opt_new(PTR_PTR_1126bee10);
  func_0x00010c161620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10901fab4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcc20(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1a84e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar3);
  _objc_retain(puVar8);
  puVar3 = puVar8;
  func_0x00010bf002e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108bebf70;
  puStack_e0 = &UNK_110ab7480;
  puStack_d8 = puVar8;
  _objc_retain(puVar8);
  puVar4 = puVar3;
  func_0x000107c31908(puVar3,&puStack_f8);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x000107c31908(puVar4,&PTR___NSConcreteGlobalBlock_110ab74d0);
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puStack_d8);
  _objc_release(puVar8);
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar7);
  _objc_initWeak(&puStack_f8,puVar1);
  _objc_retain(uVar10);
  _objc_copyWeak(auStack_100,&puStack_f8);
  func_0x00010bec65c0(puVar1);
  _objc_destroyWeak(auStack_100);
  _objc_release(uVar10);
  _objc_destroyWeak(&puStack_f8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 108bec704; end: 108beca17; -[SCSnapchattersSuggestServiceImpl hideSuggestionsWithFeedback:placement:callbackQueue:completionBlock:] */

void FUN_108bec704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bee10;
  _objc_opt_new(PTR_PTR_1126bee10);
  func_0x00010c161620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10901fab4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcc20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1a84e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar2);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108bebf70;
  puStack_80 = &UNK_110ab7480;
  uStack_78 = param_3;
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x000107c31908(uVar5,&puStack_98);
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x000107c31908(uVar6,&PTR___NSConcreteGlobalBlock_110ab74d0);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_78);
  _objc_release(param_3);
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar3);
  _objc_initWeak(&puStack_98,param_1);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_a0,&puStack_98);
  func_0x00010bec65c0(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_6);
  _objc_destroyWeak(&puStack_98);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108beca18; end: 108beca9f;  */

void FUN_108beca18(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(in_x5);
    _objc_retain(in_x4);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2a800();
    _objc_release(in_x5);
    _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108becaa0; end: 108becc33; -[SCSnapchattersSuggestServiceImpl hideAllSuggestionWithPlacement:callbackQueue:completionBlock:] */

void FUN_108becaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bee10;
  _objc_opt_new(PTR_PTR_1126bee10);
  func_0x00010c161620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10901fab4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcc20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010bec65c0(param_1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108becc34; end: 108beccaf;  */

void FUN_108becc34(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a800();
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108beccb0; end: 108becf3b; -[SCSnapchattersSuggestServiceImpl _submitRequestToSuggestFriendEndpoint:parameters:callbackQueue:completionBlock:] */

void FUN_108beccb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_108c073c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dadcb8);
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110de1918);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108becf3c;
  puStack_70 = &UNK_110884ec8;
  uStack_68 = param_4;
  _objc_retain(param_4);
  uVar7 = uVar6;
  func_0x00010bf225e0(uVar6,param_2,1,puVar4,puVar1,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar8 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar10);
  _objc_release(uVar7);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108becf3c; end: 108becf87;  */

void FUN_108becf3c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290d20(param_2);
  func_0x00010c28fde0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108becf88; end: 108bed0c7; -[SCSnapchattersSuggestServiceImpl _handleFetchResultWithOutcome:data:error:completionBlock:] */

void FUN_108becf88(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
LAB_108bed03c:
    if (param_5 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,param_5);
      goto LAB_108bed088;
    }
    puVar2 = puVar4;
    FUN_108beecdc(puVar4);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(param_6 + 0x10);
    puVar1 = (undefined *)0x0;
    puVar5 = puVar2;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if ((param_3 != 0) || (puVar4 == (undefined *)0x0)) goto LAB_108bed03c;
    puVar1 = PTR_PTR_1126db120;
    _objc_alloc(PTR_PTR_1126db120);
    func_0x00010c0206e0();
    pcVar3 = *(code **)(param_6 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar5 = puVar1;
  }
  (*pcVar3)(param_6,puVar1,puVar2);
  _objc_release(puVar5);
LAB_108bed088:
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bed0c8; end: 108bed1e3; -[SCSnapchattersSuggestServiceImpl _handleHideResultWithOutcome:data:error:completionBlock:] */

void FUN_108bed0c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
LAB_108bed160:
    if (param_5 == 0) {
      puVar1 = puVar4;
      FUN_108beecdc(puVar4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      _objc_release(puVar1);
      goto LAB_108bed1a4;
    }
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_5;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if ((param_3 != 0) || (puVar4 == (undefined *)0x0)) goto LAB_108bed160;
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = 0;
  }
  (*pcVar3)(param_6,lVar2);
LAB_108bed1a4:
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bed1e4; end: 108bed21f; -[SCSnapchattersSuggestServiceImpl _resolveEndPointWithIsPrefetchForNotification:isLoginOrSignup:isOnDemand:] */

undefined **
FUN_108bed1e4(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110eeccb8;
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eecc98;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eecc78;
  if (param_4 == 0) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eecc58;
  if (param_3 == 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108bed220; end: 108bed25b; -[SCSnapchattersSuggestServiceImpl .cxx_destruct] */

void FUN_108bed220(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


