/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10662f3b0; end: 10662f647; -[SCUnifiedProfileSectionController _subscribeTo:withActionHandler:] */

void FUN_10662f3b0(long param_1,undefined **param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar7 = *plStack_160;
    do {
      lVar6 = 0;
      do {
        if (*plStack_160 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_168 + lVar6 * 8);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(param_4);
        _objc_retain(uVar5);
        puStack_130 = puVar1;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_10662ec44;
        puStack_118 = &UNK_1108bdb80;
        uStack_110 = uVar5;
        uStack_108 = param_4;
        _objc_retain(param_4);
        _objc_retain(uVar5);
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uStack_108);
        _objc_release(uStack_110);
        _objc_release(param_4);
        _objc_release(uVar5);
        _objc_initWeak(&puStack_130,param_1);
        uVar5 = uVar4;
        func_0x00010c0e0ea0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &puStack_130;
        _objc_copyWeak(auStack_178,param_2);
        uVar3 = uVar5;
        func_0x00010c25ff60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar3);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_178);
        _objc_destroyWeak(&puStack_130);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&puStack_130);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be6a5a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10662f648; end: 10662f69b;  */

void FUN_10662f648(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10662f69c; end: 10662f763; -[SCUnifiedProfileSectionController _onNextSections:from:] */

void FUN_10662f69c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x40);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x48));
  _os_unfair_lock_unlock(param_1 + 0x40);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10662f764;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10662f764; end: 10662f77f;  */

void FUN_10662f764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f91111111111111,*(undefined8 *)(param_1 + 0x20),
             PTR_s_performSelector_withObject_after_11261bdf0,PTR_s_triggerReloadSections_1125315c8,
             0);
  return;
}



/* Entry: 10662f780; end: 10662f7bf; -[SCUnifiedProfileSectionController triggerReloadSections] */

void FUN_10662f780(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s_triggerReloadSections_1125315c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010be8a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadAllSections__112580348,0);
  return;
}



/* Entry: 10662f7c0; end: 10662fe9f; -[SCUnifiedProfileSectionController _sectionsByOrder:] */

void FUN_10662f7c0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 uStack_290;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined *puStack_230;
  int iStack_224;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  iStack_224 = param_3;
  lStack_200 = param_1;
  _objc_opt_new();
  lVar12 = 0;
  do {
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d04c0(puVar11);
    _objc_release(puVar14);
    lVar1 = lStack_200;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x41);
  _os_unfair_lock_lock(lStack_200 + 0x40);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar12 = *(long *)(lVar1 + 0x48);
  _objc_retain(lVar12);
  lStack_258 = lVar12;
  func_0x00010bf52a60();
  lStack_248 = lVar12;
  puStack_220 = puVar11;
  if (lVar12 != 0) {
    lStack_250 = *plStack_1a0;
    do {
      lStack_240 = 0;
      do {
        if (*plStack_1a0 != lStack_250) {
          _objc_enumerationMutation(lStack_258);
        }
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar12 = *(long *)(lStack_200 + 0x48);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar12;
        func_0x00010bf52a60();
        if (lVar1 != 0) {
          lStack_218 = *plStack_1e0;
          lStack_238 = lVar12;
          do {
            lVar13 = 0;
            puStack_230 = PTR_s_configuration_1125af300;
            puStack_208 = PTR_s_supportsDynamicReload_1126767d8;
            lStack_210 = lVar1;
            do {
              if (*plStack_1e0 != lStack_218) {
                _objc_enumerationMutation(lStack_238);
              }
              lVar12 = *(long *)(lStack_1e8 + lVar13 * 8);
              if (lVar12 == 0) {
                puVar14 = (undefined *)0x0;
                puVar11 = (undefined *)0x0;
              }
              else {
                puVar14 = *(undefined **)(lVar12 + 8);
                _objc_retain(puVar14);
                puVar11 = *(undefined **)(lVar12 + 0x10);
              }
              _objc_retain(puVar11);
              puStack_1f8 = puVar11;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              if (iStack_224 != 0) {
                puVar4 = puVar11;
                func_0x00010bf46560();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar14;
                _objc_opt_respondsToSelector(puVar14,puStack_230);
                puVar3 = puVar4;
                if (((ulong)puVar2 & 1) != 0) {
                  puVar2 = puVar14;
                  func_0x00010bf46560();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puVar11;
                  if (puVar2 != (undefined *)0x0) {
                    puVar3 = puVar14;
                  }
                  func_0x00010bf46560();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar4);
                  _objc_release(puVar2);
                }
                puVar4 = PTR_PTR_1126b1220;
                _objc_opt_class(PTR_PTR_1126b1220);
                puVar2 = puVar3;
                _objc_opt_isKindOfClass(puVar3,puVar4);
                if (((ulong)puVar2 & 1) == 0) {
                  puVar4 = PTR_PTR_1126b1220;
                  _objc_alloc();
                  func_0x00010c0ec9a0(puVar14);
                  func_0x00010c0322a0();
                }
                else {
                  _objc_retain(puVar3);
                  puVar4 = puVar3;
                }
                _objc_release(puVar11);
                _objc_release(puVar3);
                puVar11 = puVar4;
              }
              puVar3 = puVar11;
              func_0x00010c0ec9a0();
              puVar4 = *(undefined **)(lStack_200 + 0x58);
              if (puVar4 != (undefined *)0x0) {
                (**(code **)(puVar4 + 0x10))(puVar4,puVar3);
                puVar3 = puVar4;
              }
              puVar4 = PTR_PTR_1126b1308;
              _objc_alloc(PTR_PTR_1126b1308);
              puVar2 = puStack_1f8;
              func_0x00010c1554e0(puStack_1f8);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar11;
              func_0x00010bf46560(puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c042ce0(puVar4);
              _objc_release(puVar5);
              _objc_release(puVar2);
              puVar2 = puVar14;
              _objc_opt_respondsToSelector(puVar14,puStack_208);
              puVar5 = puVar4;
              if ((((ulong)puVar2 & 1) == 0) ||
                 (puVar2 = puVar14, func_0x00010c2636c0(), (int)puVar2 == 0)) goto LAB_10662fcdc;
              puVar2 = puStack_1f8;
              func_0x00010c1554e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar14;
              func_0x00010c1554e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar2 == puVar9) {
LAB_10662fccc:
                _objc_release(puVar9);
LAB_10662fcd4:
                _objc_release(puVar2);
              }
              else {
                puVar6 = puStack_1f8;
                func_0x00010c1554e0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar14;
                func_0x00010c1554e0(puVar14);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar6;
                func_0x00010c071ae0();
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar9);
                _objc_release(puVar2);
                if (((ulong)puVar8 & 1) == 0) {
                  puVar2 = puVar14;
                  func_0x00010c0ec9a0();
                  puVar9 = *(undefined **)(lStack_200 + 0x58);
                  if (puVar9 != (undefined *)0x0) {
                    (**(code **)(puVar9 + 0x10))();
                    puVar2 = puVar9;
                  }
                  if (puVar3 == puVar2) {
                    puVar2 = puVar14;
                    func_0x00010c1554e0();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar2 != (undefined *)0x0) {
                      lVar12 = lStack_200 + 0x60;
                      _objc_loadWeakRetained(lVar12);
                      puVar3 = puVar14;
                      func_0x00010beee460(puVar14);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befbae0(lVar12);
                      _objc_release(puVar3);
                      _objc_release(lVar12);
                      puVar5 = puVar14;
                      func_0x00010beee460(puVar14);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_retain(puVar2);
                      puVar9 = puVar2;
                      func_0x00010010fab4(puVar2,PTR_DAT_1126a4e90);
                      puVar3 = puVar2;
                      if ((int)puVar9 == 0) {
                        puVar3 = (undefined *)0x0;
                      }
                      _objc_retain(puVar3);
                      _objc_release(puVar2);
                      func_0x00010c161980(puVar3);
                      _objc_release(puVar3);
                      _objc_release(puVar5);
                      puVar3 = puVar14;
                      _objc_opt_respondsToSelector(puVar14,puStack_230);
                      if (((ulong)puVar3 & 1) == 0) {
LAB_10662fc8c:
                        puVar9 = (undefined *)0x0;
                        FUN_106639468(0,0);
                        _objc_retainAutoreleasedReturnValue();
                      }
                      else {
                        puVar9 = puVar14;
                        func_0x00010bf46560();
                        _objc_retainAutoreleasedReturnValue();
                        if (puVar9 == (undefined *)0x0) goto LAB_10662fc8c;
                      }
                      puVar5 = PTR_PTR_1126b1308;
                      _objc_alloc(PTR_PTR_1126b1308);
                      func_0x00010c042ce0();
                      _objc_release(puVar4);
                      goto LAB_10662fccc;
                    }
                    goto LAB_10662fcd4;
                  }
                }
              }
LAB_10662fcdc:
              puVar3 = puVar5;
              func_0x00010c1554e0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010beaca00(lStack_200);
              _objc_release(puVar3);
              puVar3 = puStack_220;
              func_0x00010c0dfd40(puStack_220);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar3);
              _objc_release(puVar5);
              _objc_release(puVar11);
              _objc_release(puStack_1f8);
              _objc_release(puVar14);
              lVar12 = lStack_238;
              lVar13 = lVar13 + 1;
            } while (lStack_210 != lVar13);
            lVar1 = lStack_238;
            func_0x00010bf52a60();
          } while (lVar1 != 0);
        }
        _objc_release(lVar12);
        lStack_240 = lStack_240 + 1;
      } while (lStack_240 != lStack_248);
      lVar12 = lStack_258;
      func_0x00010bf52a60();
      lStack_248 = lVar12;
    } while (lVar12 != 0);
  }
  _objc_release(lStack_258);
  puVar11 = puStack_220;
  uVar10 = 0x38;
  puVar14 = puStack_220;
  func_0x00010c296f80(puStack_220);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(lStack_200 + 0x40);
  puVar3 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_200 + 0x40);
  puVar14 = puVar3;
  __Unwind_Resume(puVar3);
  puStack_278 = puVar11;
  pcStack_268 = FUN_10662fea0;
  puStack_280 = puVar3;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_288,puVar14);
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_10662ff30;
  puStack_2a0 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_298,auStack_288);
  uStack_290 = uVar10;
  func_0x000100162d98("APPSTORE",&puStack_2b8);
  _objc_destroyWeak(auStack_298);
  _objc_destroyWeak(auStack_288);
  return;
}



/* Entry: 10662fea0; end: 10662ff2f; -[SCUnifiedProfileSectionController _reloadAllSections:] */

void FUN_10662fea0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10662ff30;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10662ff30; end: 10662ff9b;  */

void FUN_10662ff30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be9d140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7100();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10662ff9c; end: 1066300d7; -[SCUnifiedProfileSectionController _setupFirstViewBindAnnouncer:sectionOrder:] */

void FUN_10662ff9c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1108;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010bef9980(param_3);
  }
  lVar4 = param_1;
  func_0x00010be22660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar2 = PTR_PTR_1126b4330;
      _objc_alloc(PTR_PTR_1126b4330);
      func_0x00010bff3180();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar2);
    }
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066300d8; end: 1066301b7; -[SCUnifiedProfileSectionController _setSectionWithConfigurations:] */

void FUN_1066300d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if ((*(byte *)(param_2 + 0x69) & 1) == 0) {
      lVar1 = *(long *)(param_2 + 0xb0);
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        lVar1 = param_2;
        func_0x00010be60480(param_2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10663b178();
        _objc_release(lVar1);
        _CFAbsoluteTimeGetCurrent();
        *(undefined8 *)(param_2 + 0xb8) = param_1;
      }
    }
    *(undefined1 *)(param_2 + 0x69) = 1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = param_4;
    _objc_release(uVar2);
  }
  else {
    *(undefined1 *)(param_2 + 0x69) = 0;
    _objc_retain(&PTR____CFConstantStringClassReference_110e57c98);
    uVar2 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined ***)(param_2 + 0xc0) = &PTR____CFConstantStringClassReference_110e57c98;
    _objc_release(uVar2);
    func_0x00010bea61c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066301b8; end: 1066302af; -[SCUnifiedProfileSectionController _setOrUpdateSectionWithConfigurations:] */

void FUN_1066301b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_3);
  dVar4 = *(double *)(param_1 + 0xa0);
  if (dVar4 == 0.0) {
    _CFAbsoluteTimeGetCurrent();
    *(double *)(param_1 + 0xa0) = dVar4;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e57c98;
    if (*(undefined ***)(param_1 + 0xc0) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0xc0);
    }
    _objc_retain(ppuVar1);
    lVar2 = param_1;
    func_0x00010be60480(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10663aeb8();
    _objc_release(ppuVar1);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010bdd8960(param_1);
    func_0x00010c1f91a0(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x00010c1d6020(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066302b0; end: 1066304b7; -[SCUnifiedProfileSectionController _calculateTransparentBackgroundSections:maxCount:] */

long FUN_1066302b0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010010fab4();
        uVar1 = uVar4;
        if ((int)uVar5 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        uVar6 = param_1;
        func_0x00010be22660();
        _objc_retainAutoreleasedReturnValue();
        if (uVar6 != 0) {
          uVar7 = uVar6;
          func_0x00010c071ae0();
          if (((uVar7 & 1) != 0) || (uVar7 = uVar6, func_0x00010c071ae0(), (int)uVar7 != 0)) {
            lVar9 = lVar9 + 1;
          }
          uVar7 = uVar6;
          func_0x00010c071ae0();
          if ((((uVar7 & 1) != 0) || (uVar7 = uVar6, func_0x00010c071ae0(), (uVar7 & 1) != 0)) ||
             (param_4 <= lVar9)) {
            _objc_release(uVar6);
            _objc_release(uVar1);
            goto LAB_106630468;
          }
        }
        _objc_release(uVar6);
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_106630468:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    return param_3;
  }
  return lVar9;
}



/* Entry: 1066304b8; end: 1066304cb; -[SCUnifiedProfileSectionController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_1066304b8(void)

{
  return 0x4008000000000000;
}



/* Entry: 1066304cc; end: 1066304cf; -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_1066304cc(void)

{
  return;
}



/* Entry: 1066304d0; end: 106630547; -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_1066304d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 200;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b720();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106630548; end: 1066305bf; -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_106630548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 200;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d8a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066305c0; end: 1066305c3; -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_1066305c0(void)

{
  return;
}



/* Entry: 1066305c4; end: 106630933; -[SCUnifiedProfileSectionController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_1066305c4(long param_1,undefined8 param_2,undefined **param_3,undefined4 param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **unaff_x21;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x25;
  long unaff_x26;
  long lVar14;
  double dVar15;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined4 uStack_134;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_134 = param_4;
  _objc_retain(param_3);
  dVar15 = *(double *)(param_1 + 0xa0);
  if (dVar15 <= 0.0) {
    lStack_140 = 0;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    lStack_140 = (long)((dVar15 - *(double *)(param_1 + 0xa0)) * 1000.0);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  ppuVar2 = param_3;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_130;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar14 = *plStack_120;
    unaff_x21 = &PTR_DAT_1126a5000;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x26 = *(long *)(lStack_128 + (long)ppuVar11 * 8);
        unaff_x25 = param_1;
        func_0x00010be22660();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = unaff_x25;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          _os_unfair_lock_lock(param_1 + 0x18);
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27bc40();
          _objc_release(uVar4);
          _os_unfair_lock_unlock(param_1 + 0x18);
        }
        puVar10 = PTR_DAT_1126a5560;
        _objc_retain(unaff_x26);
        lVar5 = unaff_x26;
        func_0x00010010fab4(unaff_x26,puVar10);
        _objc_release(unaff_x26);
        uVar1 = (uint)lVar5 ^ 1;
        if (unaff_x26 == 0) {
          uVar1 = 1;
        }
        if ((uVar1 & 1) == 0) {
          func_0x00010bf7e620(unaff_x26);
        }
        _objc_release(unaff_x25);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar3 != ppuVar11);
      ppuVar11 = &puStack_130;
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  lVar14 = 0;
  _objc_release(ppuVar2);
  lVar5 = *(long *)(param_1 + 0xb0);
  func_0x00010c08fa60();
  if (((lVar5 != 0) && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) &&
     (0.0 < *(double *)(param_1 + 0xa0))) {
    ppuVar11 = param_3;
    func_0x00010c156b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(ppuVar11);
    unaff_x25 = param_1;
    func_0x00010be60480();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = (undefined **)(param_1 + 0xb0);
    FUN_10663a798();
    _objc_release(unaff_x25);
    lVar14 = param_1;
    func_0x00010be60480(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10663a9c8();
    _objc_release(lVar14);
    ppuVar11 = param_3;
    func_0x00010c156b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    FUN_106631688();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    lVar14 = param_1;
    func_0x00010be60480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)*unaff_x21;
    FUN_10663abf8();
    _objc_release(lVar14);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    _objc_release(ppuVar2);
  }
  uVar6 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  _objc_opt_respondsToSelector();
  _objc_release(uVar6);
  if ((uVar7 & 1) != 0) {
    uVar6 = param_1 + 200;
    _objc_loadWeakRetained();
    func_0x00010bf7e680();
    _objc_release(uVar6);
    ppuVar11 = param_3;
    func_0x00010bedf500(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  ppuVar2 = param_3;
  __Unwind_Resume();
  pcStack_148 = FUN_106630934;
  lStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  lStack_180 = lVar14;
  uStack_178 = uVar7;
  uStack_170 = uVar6;
  ppuStack_168 = unaff_x21;
  lStack_160 = param_1;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  ppuVar3 = ppuVar11;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) goto LAB_106630c2c;
  ppuVar8 = ppuVar2;
  func_0x00010be9d140();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 == (undefined **)0x0) {
LAB_106630ae8:
    puVar10 = ppuVar2[0x16];
    func_0x00010c08fa60();
    if (puVar10 != (undefined *)0x0) {
      ppuVar9 = ppuVar2;
      func_0x00010be60480(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_10663b5d8();
      _objc_release(ppuVar9);
    }
    _objc_retain(&PTR____CFConstantStringClassReference_110e57cb8);
    puVar10 = ppuVar2[0x18];
    ppuVar2[0x18] = (undefined *)&PTR____CFConstantStringClassReference_110e57cb8;
    _objc_release(puVar10);
    func_0x00010be8a6a0(ppuVar2);
  }
  else {
    ppuVar9 = ppuVar8;
    func_0x00010bf529e0();
    ppuVar12 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar9 != ppuVar12) goto LAB_106630ae8;
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x2020000000;
    uStack_198 = 0;
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x2020000000;
    uStack_1b8 = 0;
    _objc_retain(ppuVar3);
    func_0x00010bf97e80(ppuVar8);
    if (*(char *)(puStack_1a8 + 3) == '\x01') {
      puVar10 = ppuVar2[0x16];
      func_0x00010c08fa60();
      if (puVar10 != (undefined *)0x0) {
        ppuVar9 = ppuVar2;
        func_0x00010be60480(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10663b5d8();
        _objc_release(ppuVar9);
        ppuVar12 = (undefined **)puStack_1c8[3];
        ppuVar9 = ppuVar8;
        func_0x00010bf529e0();
        if (ppuVar12 < ppuVar9) {
          ppuVar12 = ppuVar8;
          func_0x00010c0dfd40(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar12;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar13;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          _objc_release(ppuVar12);
        }
        else {
          ppuVar9 = &PTR____CFConstantStringClassReference_110e53938;
        }
        ppuVar13 = (undefined **)puStack_1c8[3];
        ppuVar12 = ppuVar3;
        func_0x00010bf529e0();
        if (ppuVar13 < ppuVar12) {
          ppuVar13 = ppuVar3;
          func_0x00010c0dfd40(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar13;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
        }
        else {
          ppuVar12 = &PTR____CFConstantStringClassReference_110e53938;
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar9);
      }
      _objc_retain(&PTR____CFConstantStringClassReference_110e57cb8);
      puVar10 = ppuVar2[0x18];
      ppuVar2[0x18] = (undefined *)&PTR____CFConstantStringClassReference_110e57cb8;
      _objc_release(puVar10);
      func_0x00010be8a6a0(ppuVar2);
    }
    _objc_release(ppuVar3);
    __Block_object_dispose(&uStack_1d0,8);
    __Block_object_dispose(&uStack_1b0,8);
  }
  _objc_release(ppuVar8);
LAB_106630c2c:
  _objc_release(ppuVar3);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 106630934; end: 106630c83; -[SCUnifiedProfileSectionController _updateSectionsOrderingIfNecesseryWithUpdater:] */

void FUN_106630934(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) goto LAB_106630c2c;
  ppuVar2 = param_1;
  func_0x00010be9d140();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
LAB_106630ae8:
    puVar4 = param_1[0x16];
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      ppuVar3 = param_1;
      func_0x00010be60480(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10663b5d8();
      _objc_release(ppuVar3);
    }
    _objc_retain(&PTR____CFConstantStringClassReference_110e57cb8);
    puVar4 = param_1[0x18];
    param_1[0x18] = (undefined *)&PTR____CFConstantStringClassReference_110e57cb8;
    _objc_release(puVar4);
    func_0x00010be8a6a0(param_1);
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x00010bf529e0();
    ppuVar5 = ppuVar1;
    func_0x00010bf529e0();
    if (ppuVar3 != ppuVar5) goto LAB_106630ae8;
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    _objc_retain(ppuVar1);
    func_0x00010bf97e80(ppuVar2);
    if (*(char *)(puStack_68 + 3) == '\x01') {
      puVar4 = param_1[0x16];
      func_0x00010c08fa60();
      if (puVar4 != (undefined *)0x0) {
        ppuVar3 = param_1;
        func_0x00010be60480(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_10663b5d8();
        _objc_release(ppuVar3);
        ppuVar5 = (undefined **)puStack_88[3];
        ppuVar3 = ppuVar2;
        func_0x00010bf529e0();
        if (ppuVar5 < ppuVar3) {
          ppuVar5 = ppuVar2;
          func_0x00010c0dfd40(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar6;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
        }
        else {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e53938;
        }
        ppuVar6 = (undefined **)puStack_88[3];
        ppuVar5 = ppuVar1;
        func_0x00010bf529e0();
        if (ppuVar6 < ppuVar5) {
          ppuVar6 = ppuVar1;
          func_0x00010c0dfd40(ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar6;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
        }
        else {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e53938;
        }
        _objc_release(ppuVar5);
        _objc_release(ppuVar3);
      }
      _objc_retain(&PTR____CFConstantStringClassReference_110e57cb8);
      puVar4 = param_1[0x18];
      param_1[0x18] = (undefined *)&PTR____CFConstantStringClassReference_110e57cb8;
      _objc_release(puVar4);
      func_0x00010be8a6a0(param_1);
    }
    _objc_release(ppuVar1);
    __Block_object_dispose(&uStack_90,8);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(ppuVar2);
LAB_106630c2c:
  _objc_release(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106630c84; end: 106630d3f;  */

void FUN_106630c84(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  lVar3 = param_2;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != lVar2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106630d40; end: 106630d7f; -[SCUnifiedProfileSectionController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_106630d40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106630d80; end: 106630f17; -[SCUnifiedProfileSectionController dismissTransitionShouldBeginWithView:touchLocation:] */

undefined **
FUN_106630d80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined *puStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  long lStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = *(long *)(param_3 + 8);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x24 = (undefined **)*plStack_130;
    unaff_x25 = &PTR_DAT_1126a5000;
    do {
      unaff_x26 = 0;
      do {
        if ((undefined **)*plStack_130 != unaff_x24) {
          _objc_enumerationMutation(lVar3);
        }
        puVar2 = PTR_DAT_1126a5568;
        unaff_x22 = *(undefined ***)(lStack_138 + unaff_x26 * 8);
        _objc_retain(unaff_x22);
        ppuVar9 = unaff_x22;
        func_0x00010010fab4(unaff_x22,puVar2);
        unaff_x23 = unaff_x22;
        if ((int)ppuVar9 == 0) {
          unaff_x23 = (undefined **)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x22);
        if ((unaff_x23 != (undefined **)0x0) &&
           (ppuVar9 = unaff_x22, func_0x00010bf848c0(param_1,param_2), ((ulong)ppuVar9 & 1) == 0)) {
          _objc_release(unaff_x22);
          ppuVar9 = (undefined **)0x0;
          goto LAB_106630ec4;
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar4 != unaff_x26);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  ppuVar9 = (undefined **)0x1;
LAB_106630ec4:
  _objc_release(lVar3);
  lVar4 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106630f18;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar5 = *(undefined ***)(lVar4 + 8);
  lStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  ppuStack_170 = unaff_x22;
  ppuStack_168 = ppuVar9;
  lStack_160 = lVar3;
  lStack_158 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar7 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_250;
    unaff_x24 = &PTR_DAT_1126a5000;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x23) {
          _objc_enumerationMutation(ppuVar5);
        }
        puVar2 = PTR_DAT_1126a5568;
        ppuVar9 = *(undefined ***)(lStack_258 + (long)unaff_x25 * 8);
        _objc_retain(ppuVar9);
        ppuVar6 = ppuVar9;
        func_0x00010010fab4(ppuVar9,puVar2);
        unaff_x22 = ppuVar9;
        if ((int)ppuVar6 == 0) {
          unaff_x22 = (undefined **)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(ppuVar9);
        func_0x00010bf848e0(unaff_x22);
        _objc_release(unaff_x22);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar7 != unaff_x25);
      ppuVar7 = ppuVar5;
      func_0x00010bf52a60();
      lVar3 = 0;
    } while (ppuVar7 != (undefined **)0x0);
  }
  ppuVar7 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_380;
  pcStack_268 = FUN_106631054;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_378 = 0;
  puStack_380 = (undefined *)0x0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  ppuVar7 = (undefined **)ppuVar7[1];
  lStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  ppuStack_2a0 = unaff_x24;
  ppuStack_298 = unaff_x23;
  ppuStack_290 = unaff_x22;
  ppuStack_288 = ppuVar9;
  lStack_280 = lVar3;
  ppuStack_278 = ppuVar5;
  ppuStack_270 = &puStack_150;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar7;
  func_0x00010bf52a60();
  if (ppuVar9 != (undefined **)0x0) {
    lVar3 = *plStack_370;
    do {
      ppuVar5 = (undefined **)0x0;
      do {
        if (*plStack_370 != lVar3) {
          _objc_enumerationMutation(ppuVar7);
        }
        puVar2 = PTR_DAT_1126a5568;
        uVar10 = *(undefined8 *)(lStack_378 + (long)ppuVar5 * 8);
        _objc_retain(uVar10);
        uVar8 = uVar10;
        func_0x00010010fab4(uVar10,puVar2);
        uVar1 = uVar10;
        if ((int)uVar8 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        func_0x00010bf848a0(uVar1);
        _objc_release(uVar1);
        ppuVar5 = (undefined **)((long)ppuVar5 + 1);
      } while (ppuVar9 != ppuVar5);
      ppuVar9 = ppuVar7;
      ppuVar6 = &puStack_380;
      func_0x00010bf52a60();
    } while (ppuVar9 != (undefined **)0x0);
  }
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar9 = ppuVar6;
  _objc_opt_respondsToSelector(ppuVar6,PTR_s_sectionInfo_112633260);
  if (((ulong)ppuVar9 & 1) == 0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar7 = ppuVar6;
    func_0x00010c156100();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar9 = ppuVar7;
      func_0x000108f6e6d0(ppuVar7,&PTR____CFConstantStringClassReference_110e57258);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return ppuVar9;
}



/* Entry: 106630f18; end: 106631053; -[SCUnifiedProfileSectionController dismissTransitionWillBegin] */

void FUN_106630f18(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar3);
      }
      puVar2 = PTR_DAT_1126a5568;
      uVar10 = *(undefined8 *)(lVar12 * 8);
      _objc_retain(uVar10);
      uVar5 = uVar10;
      func_0x00010010fab4(uVar10,puVar2);
      uVar1 = uVar10;
      if ((int)uVar5 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      func_0x00010bf848e0(uVar1);
      _objc_release(uVar1);
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar6 = *(long *)(lVar3 + 8);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar3 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar3) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR_DAT_1126a5568;
        uVar10 = *(undefined8 *)(lStack_238 + lVar9 * 8);
        _objc_retain(uVar10);
        uVar5 = uVar10;
        func_0x00010010fab4(uVar10,puVar2);
        uVar1 = uVar10;
        if ((int)uVar5 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        func_0x00010bf848a0(uVar1);
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar6;
      puVar8 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar11 = (undefined1 *)puVar8;
  _objc_opt_respondsToSelector(puVar8,PTR_s_sectionInfo_112633260);
  if (((ulong)puVar11 & 1) == 0) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined1 *)puVar8;
    func_0x00010c156100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11 = puVar7;
      func_0x000108f6e6d0(puVar7,&PTR____CFConstantStringClassReference_110e57258);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106631054; end: 10663118f; -[SCUnifiedProfileSectionController dismissTransitionDidEnd] */

void FUN_106631054(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        puVar2 = PTR_DAT_1126a5568;
        uVar8 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        _objc_retain(uVar8);
        uVar5 = uVar8;
        func_0x00010010fab4(uVar8,puVar2);
        uVar1 = uVar8;
        if ((int)uVar5 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        func_0x00010bf848a0(uVar1);
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar9 = (undefined1 *)puVar7;
  _objc_opt_respondsToSelector(puVar7,PTR_s_sectionInfo_112633260);
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)puVar7;
    func_0x00010c156100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = puVar6;
      func_0x000108f6e6d0(puVar6,&PTR____CFConstantStringClassReference_110e57258);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106631190; end: 106631227; -[SCUnifiedProfileSectionController _getSectionTypeWithSection:] */

void FUN_106631190(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_sectionInfo_112633260);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c156100();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000108f6e6d0(uVar1,&PTR____CFConstantStringClassReference_110e57258);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106631228; end: 10663123b; -[SCUnifiedProfileSectionController _processProfileViewVisibility:] */

void FUN_106631228(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x68) = param_3 ^ 1;
  if (((param_3 ^ 1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be95e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumePausedUpdateIfNecessary_112583120);
    return;
  }
  return;
}



/* Entry: 10663123c; end: 106631303; -[SCUnifiedProfileSectionController _resumePausedUpdateIfNecessary] */

void FUN_10663123c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x69) == '\x01') {
    *(undefined1 *)(param_1 + 0x69) = 0;
    lVar1 = *(long *)(param_1 + 0xb0);
    func_0x00010c08fa60();
    if ((lVar1 != 0) && (0.0 < *(double *)(param_1 + 0xb8))) {
      _CFAbsoluteTimeGetCurrent();
      lVar1 = param_1;
      func_0x00010be60480(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10663b3a8();
      _objc_release(lVar1);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    _objc_retain(&PTR____CFConstantStringClassReference_110e57cd8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined ***)(param_1 + 0xc0) = &PTR____CFConstantStringClassReference_110e57cd8;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea61d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setOrUpdateSectionWithConfigura_112587218,
               *(undefined8 *)(param_1 + 0x70));
    return;
  }
  return;
}



/* Entry: 106631304; end: 1066313c7; -[SCUnifiedProfileSectionController sectionTypeAtIndex:] */

void FUN_106631304(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = param_1[1];
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 < 0) || (puVar2 = puVar1, func_0x00010bf529e0(), (long)puVar2 <= param_3)) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0dfd40(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be22660(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      _objc_retain(param_1);
      ppuVar3 = param_1;
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1066313c8; end: 10663142b; -[SCUnifiedProfileSectionController _metricsLogger] */

void FUN_1066313c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126cc380;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x90);
    }
    _objc_retain(lVar3);
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10663142c; end: 10663156f; -[SCUnifiedProfileSectionController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10663142c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c0720c0();
  ppuVar5 = &PTR_PTR_110930a48;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) goto LAB_10663154c;
    ppuVar5 = &PTR_PTR_110930a50;
  }
  puVar4 = *ppuVar5;
  _objc_retain(puVar4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
  if (*(undefined ***)(param_1 + 0xb0) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_1 + 0xb0);
  }
  _objc_retain(ppuVar5);
  ppuVar3 = param_5;
  func_0x000108f6e6d0(param_5,&PTR____CFConstantStringClassReference_110e57278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  func_0x00010be60480(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10663b898();
  _objc_release(ppuVar1);
  _objc_release(param_1);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
LAB_10663154c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106631570; end: 106631577; -[SCUnifiedProfileSectionController shouldEmitMetrics] */

undefined1 FUN_106631570(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 106631578; end: 10663158f; -[SCUnifiedProfileSectionController delegate] */

void FUN_106631578(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106631590; end: 10663159b; -[SCUnifiedProfileSectionController setDelegate:] */

void FUN_106631590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 10663159c; end: 1066315a3; -[SCUnifiedProfileSectionController profileTypeForMetrics] */

undefined8 FUN_10663159c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1066315a4; end: 1066315ab; -[SCUnifiedProfileSectionController setProfileTypeForMetrics:] */

void FUN_1066315a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066315ac; end: 106631687; -[SCUnifiedProfileSectionController .cxx_destruct] */

void FUN_1066315ac(long param_1)

{
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106631688; end: 1066319af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106631688(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  byte *pbVar8;
  undefined *unaff_x20;
  byte *unaff_x21;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  byte *pbStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar2 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df2558;
  }
  else {
    func_0x00010bf529e0(param_1);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    param_3 = &puStack_130;
    puVar2 = param_1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
          _objc_opt_class(uVar4);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar4);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        param_3 = &puStack_130;
        puVar2 = param_1;
        func_0x00010bf52a60();
        unaff_x21 = (byte *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_1);
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110df2558;
    }
    else {
      puVar10 = puVar3;
      func_0x00010bf529e0();
      puVar2 = puVar10;
      if ((undefined *)0xf < puVar10) {
        puVar2 = (undefined *)0x10;
      }
      unaff_x21 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          puVar5 = puVar3;
          func_0x00010c0dfd40(puVar3);
          _objc_retainAutoreleasedReturnValue();
          pbVar8 = unaff_x21;
          func_0x00010c08fa60();
          if (pbVar8 != (byte *)0x0) {
            func_0x00010bf070e0(unaff_x21);
          }
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174b30;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = &PTR____CFConstantStringClassReference_110dbff78;
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar7 = ppuVar6;
          }
          func_0x00010bf070e0(unaff_x21);
          _objc_release(ppuVar7);
          _objc_release(puVar5);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
      }
      puVar2 = puVar3;
      func_0x00010bf529e0();
      if ((undefined *)0x10 < puVar2) {
        puVar2 = puVar3;
        func_0x00010bf529e0();
        if (puVar2 + -0x10 < (undefined *)0xa) {
          puStack_140 = puVar2 + -0x10;
          func_0x00010bf06ba0(unaff_x21);
        }
        else {
          func_0x00010bf070e0(unaff_x21);
        }
      }
      pbVar8 = unaff_x21;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      bVar1 = *pbVar8;
      puStack_140 = (undefined *)0xcbf29ce484222325;
      while (bVar1 != 0) {
        pbVar8 = pbVar8 + 1;
        puStack_140 = (undefined *)(((ulong)puStack_140 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar8;
      }
      param_3 = &PTR____CFConstantStringClassReference_110e572f8;
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    unaff_x20 = puVar3;
  }
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_180;
  pcStack_148 = FUN_1066319b0;
  ppuStack_170 = ppuVar7;
  pbStack_168 = unaff_x21;
  puStack_160 = unaff_x20;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_178 = PTR_PTR_1126f22a0;
  puStack_180 = puVar3;
  _objc_msgSendSuper2(&puStack_180,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar6 + (long)_DAT_11274c7c8),param_3);
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar9 = (long)_DAT_11274c7cc;
    uVar4 = *(undefined8 *)((long)ppuVar6 + lVar9);
    *(undefined **)((long)ppuVar6 + lVar9) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)ppuVar6 + lVar9));
  }
  _objc_release(param_3);
  return ppuVar6;
}



/* Entry: 1066319b0; end: 106631a6b; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition initWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066319b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f22a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274c7c8),param_3);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11274c7cc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106631a6c; end: 106631adb; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition recognizeGestureOnView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106631a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274c7cc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar1);
  func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106631adc; end: 106631aeb; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition isInteractiveTransitionInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106631adc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274c7d0);
}



/* Entry: 106631aec; end: 106631dfb; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition _handleGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106631aec(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar2);
  dVar4 = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,lVar2);
  dVar5 = dVar4;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    if (*(char *)(param_3 + _DAT_11274c7d0) == '\x01') {
      *(undefined1 *)(param_3 + _DAT_11274c7d0) = 0;
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5,param_4,lVar1);
      _objc_release(lVar1);
      dVar4 = -dVar5;
      if (0.0 <= dVar5) {
        dVar4 = dVar5;
      }
      dVar4 = dVar4 / 2000.0;
      if (dVar4 <= 1.0) {
        dVar4 = 1.0;
      }
      dVar5 = 2.0;
      if (dVar4 <= 2.0) {
        dVar5 = dVar4;
      }
      func_0x00010c17fc20(dVar5,param_3);
      if ((*(char *)(param_3 + _DAT_11274c7d8) == '\x01') &&
         (lVar1 = param_5, func_0x00010c252440(), lVar1 != 4)) {
        lVar1 = param_3 + _DAT_11274c7d4;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c264880();
        _objc_release(lVar1);
        func_0x00010bfaf8e0(param_3);
      }
      else {
        func_0x00010c17fc20(0x3fe0000000000000,param_3);
        lVar1 = param_3 + _DAT_11274c7d4;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c264860();
        _objc_release(lVar1);
        func_0x00010bf2e5a0(param_3);
      }
    }
  }
  else if (lVar1 == 2) {
    if (*(char *)(param_3 + _DAT_11274c7d0) == '\x01') {
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      _objc_release(lVar1);
      fVar6 = 0.0;
      if (0.0 <= param_2) {
        fVar6 = (float)(ABS(param_2) / param_1);
      }
      fVar6 = (float)NEON_fminnm(fVar6,0x3f800000);
      if ((double)fVar6 <= 0.3333333333333333) {
        bVar3 = 0.0 <= param_2 && (300.0 <= ABS(dVar4) && 0.0 <= dVar4);
      }
      else {
        bVar3 = true;
      }
      *(bool *)(param_3 + _DAT_11274c7d8) = bVar3;
      dVar4 = (double)fVar6;
      if (1.0 <= fVar6) {
        dVar4 = 0.99;
      }
      func_0x00010c286a00(dVar4,param_3);
    }
  }
  else if (lVar1 == 1) {
    *(undefined1 *)(param_3 + _DAT_11274c7d0) = 1;
    lVar1 = param_3 + _DAT_11274c7c8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf84b00();
    _objc_release(lVar1);
    param_3 = param_3 + _DAT_11274c7d4;
    _objc_loadWeakRetained(param_3);
    func_0x00010c264840();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106631dfc; end: 106631e03; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition completionCurve] */

undefined8 FUN_106631dfc(void)

{
  return 3;
}



/* Entry: 106631e04; end: 106631f0f; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106631e04(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,uVar1);
  _objc_release(uVar1);
  lVar4 = 0;
  if ((ABS(param_1) <= ABS(param_2)) && (0.0 <= param_2)) {
    uVar2 = param_3 + _DAT_11274c7c8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c06d1e0();
    if (((uVar2 & 1) == 0) && (uVar2 = uVar3, func_0x00010c06d1a0(), (uVar2 & 1) == 0)) {
      param_3 = param_3 + _DAT_11274c7d4;
      _objc_loadWeakRetained(param_3);
      lVar4 = param_3;
      func_0x00010c264820();
      _objc_release(param_3);
    }
    else {
      lVar4 = 0;
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return lVar4;
}



/* Entry: 106631f10; end: 106631f8b; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106631f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274c7d4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c264800();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106631f8c; end: 106631fab; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106631f8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274c7d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106631fac; end: 106631fbf; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106631fac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274c7d4,param_3);
  return;
}



/* Entry: 106631fc0; end: 106632007; -[SCUnifiedProfileSwipeDownDismissInteractiveTransition .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106631fc0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c7d4);
  _objc_storeStrong(param_1 + _DAT_11274c7cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c7c8);
  return;
}



/* Entry: 106632008; end: 1066320d7; -[SCUnifiedProfileTransitionAnimator init] */

undefined1 * FUN_106632008(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f22a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066320d8; end: 10663213f; -[SCUnifiedProfileTransitionAnimator animateAlongsideTransition:completion:] */

void FUN_1066320d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106632140; end: 1066321d7; -[SCUnifiedProfileTransitionAnimator transitionDuration:] */

undefined8 FUN_106632140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06c000();
  uVar3 = 0;
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c29c220(param_3,param_2,
                        *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    uVar3 = 0x3fd99999a0000000;
    if ((int)uVar2 == 0) {
      uVar3 = 0x3fc99999a0000000;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066321d8; end: 1066326ab; -[SCUnifiedProfileTransitionAnimator animateTransition:] */

void FUN_1066321d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_7);
  uVar14 = *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  uVar16 = *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48;
  uVar1 = uVar14;
  if (*(char *)(param_5 + 0x28) == '\0') {
    uVar1 = uVar16;
  }
  _objc_retain(uVar1);
  uVar5 = param_7;
  func_0x00010c29c220(param_7,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_5 + 0x28) == '\0') {
    uVar16 = uVar14;
  }
  _objc_retain(uVar16);
  uVar6 = param_7;
  func_0x00010c29c220(param_7,param_6,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)PTR__UITransitionContextToViewKey_110345e60;
  uVar17 = *(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50;
  uVar14 = uVar15;
  if (*(char *)(param_5 + 0x28) == '\0') {
    uVar14 = uVar17;
  }
  _objc_retain(uVar14);
  uVar7 = param_7;
  func_0x00010c29ce60(param_7,param_6,uVar14);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_5 + 0x28) == '\0') {
    uVar17 = uVar15;
  }
  _objc_retain(uVar17);
  uVar15 = param_7;
  func_0x00010c29ce60(param_7,param_6,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_5 + 0x28) == '\x01') {
    lVar9 = *(long *)(param_5 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_5 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf20c00(uVar8);
    uVar10 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80(uVar8,param_6,uVar10,uVar15);
    _objc_release(uVar10);
    func_0x00010beaf2c0(param_5,param_6,uVar5);
    func_0x00010befbb60(uVar8,param_6,uVar7);
    func_0x00010c1cbe20(uVar7);
    func_0x00010bf20c00(uVar7);
    _CGAffineTransformMakeTranslation(&uStack_b8,0,param_4);
    lVar9 = param_5 + 0x20;
    _objc_loadWeakRetained(lVar9);
    uStack_e8 = uStack_b0;
    uStack_f0 = uStack_b8;
    uStack_d8 = uStack_a0;
    uStack_e0 = uStack_a8;
    uStack_c8 = uStack_90;
    uStack_d0 = uStack_98;
    func_0x00010c219960();
    _objc_release(lVar9);
    param_1 = uStack_98;
  }
  else {
    func_0x00010c066fa0(uVar8,param_6,uVar15,0);
    func_0x00010bfaef80(param_7,param_6,uVar6);
    func_0x00010c19f0e0(uVar15);
  }
  func_0x00010bf17b00(uVar6,param_6,(*(byte *)(param_5 + 0x28) ^ 0xff) & 1,1);
  uVar10 = uVar7;
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd60();
  _objc_release(uVar10);
  uVar2 = *(undefined1 *)(param_5 + 0x28);
  func_0x00010c27a940(param_5,param_6,param_7);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1066326ac;
  puStack_108 = &UNK_110841f80;
  lStack_100 = param_5;
  _objc_retain(param_7);
  ppuVar11 = &puStack_120;
  uStack_f8 = param_7;
  _objc_retainBlock();
  puStack_160 = puVar3;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1066327c4;
  puStack_148 = &UNK_110856e10;
  lStack_140 = param_5;
  uStack_128 = uVar2;
  _objc_retain(param_7);
  uStack_138 = param_7;
  _objc_retain(uVar6);
  ppuVar12 = &puStack_160;
  uStack_130 = uVar6;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(char *)(param_5 + 0x28) == '\x01') {
    puStack_188 = puVar3;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106632864;
    puStack_170 = &UNK_110849530;
    _objc_retain(ppuVar11);
    ppuStack_168 = ppuVar11;
    func_0x00010bf03460(param_1,0,0x3ff0000000000000,0x3ff0000000000000,puVar4,param_6,0x30002,
                        &puStack_188,ppuVar12);
    ppuVar13 = ppuStack_168;
  }
  else {
    puStack_1b0 = puVar3;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x106632870;
    puStack_198 = &UNK_110842508;
    _objc_retain(ppuVar12);
    ppuStack_190 = ppuVar12;
    func_0x00010bf03440(param_1,0,puVar4,param_6,0x30002,ppuVar11,&puStack_1b0);
    ppuVar13 = ppuStack_190;
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(ppuVar11);
  _objc_release(uStack_f8);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(uVar17);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 1066326ac; end: 1066327c3;  */

void FUN_1066326ac(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_2 + 0x28));
    lVar4 = *(long *)(param_2 + 0x20);
  }
  bVar1 = *(byte *)(lVar4 + 0x28);
  if (bVar1 == 1) {
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    unaff_x20 = lVar4 + 0x20;
    _objc_loadWeakRetained(unaff_x20);
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _CGAffineTransformMakeTranslation(&uStack_70,0,param_1);
    lVar4 = *(long *)(param_2 + 0x20);
  }
  lVar4 = lVar4 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c219960();
  _objc_release(lVar4);
  if ((bVar1 & 1) == 0) {
    _objc_release(unaff_x20);
  }
  uVar5 = 0x3fd999999999999a;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x28) == '\0') {
    uVar5 = 0;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 1066327c4; end: 106632863;  */

void FUN_1066327c4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x38) == *(char *)(lVar2 + 0x28)) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x28));
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c27ac00();
    if (iVar1 != 0) {
      func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c27ac00(uVar3);
    func_0x00010bf43bc0(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106632864; end: 10663287b;  */

void FUN_106632864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010663286c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10663287c; end: 106632937; -[SCUnifiedProfileTransitionAnimator _setupProfileTransitioning:] */

void FUN_10663287c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  else {
    uVar3 = param_3;
    func_0x00010c29c580(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = uVar2;
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x20,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106632938; end: 10663293f; -[SCUnifiedProfileTransitionAnimator presenting] */

undefined1 FUN_106632938(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 106632940; end: 106632947; -[SCUnifiedProfileTransitionAnimator setPresenting:] */

void FUN_106632940(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106632948; end: 10663298b; -[SCUnifiedProfileTransitionAnimator .cxx_destruct] */

void FUN_106632948(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10663298c; end: 106632a53; -[SCUnifiedProfileTransitionCoordinator initWithSourcePageViewName:attributionServices:] */

undefined1 *
FUN_10663298c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f22b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + 0x40) = param_3;
    puVar3 = PTR_PTR_1126cc438;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar2 + 0x28) = 0;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 106632a54; end: 106632b23; -[SCUnifiedProfileTransitionCoordinator isProfilePresented] */

uint FUN_106632a54(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c06d1e0();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c06d1a0();
    uVar7 = (uint)lVar5;
    _objc_release(lVar4);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(uVar2);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = lVar6 == param_1 | uVar7;
  }
  return uVar1 & 1;
}



/* Entry: 106632b24; end: 106632b2f; -[SCUnifiedProfileTransitionCoordinator presentProfileFromViewController:animated:profileType:] */

void FUN_106632b24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10dd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentProfileFromViewController_112621170);
  return;
}



/* Entry: 106632b30; end: 106632c47; -[SCUnifiedProfileTransitionCoordinator presentProfileFromViewController:animated:profileType:notification:completion:] */

void FUN_106632b30(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c07b420();
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = param_5;
    _objc_storeWeak(param_1 + 8,param_3);
    puVar2 = PTR_PTR_1126cc440;
    _objc_alloc();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038ea0();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar4);
    _objc_release(lVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
    puVar2 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar2);
    func_0x00010be7ac20(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106632c48; end: 106632dd7; -[SCUnifiedProfileTransitionCoordinator _presentConfiguredPresentedViewControllerWithAnimated:notification:completion:] */

void FUN_106632c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bde60a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x10,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    func_0x00010c10eda0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bdca860(param_1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106632dd8; end: 106632e2f;  */

void FUN_106632dd8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c27aba0();
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106632e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106632e30; end: 106632ea7; -[SCUnifiedProfileTransitionCoordinator transitionToProfileNotificationWhenReady:] */

void FUN_106632e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010010fab4();
  lVar1 = param_1;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  func_0x00010bfd19c0(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106632ea8; end: 106632ff7; -[SCUnifiedProfileTransitionCoordinator dismissProfileViewControllerAnimated:completion:] */

void FUN_106632ea8(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2514c0(uVar1);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106632ff8;
  puStack_58 = &UNK_11084aaa8;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retainBlock();
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  if (param_3 == 0) {
    func_0x00010bf84b00();
    _objc_release(lVar3);
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    func_0x00010bf84b00();
    _objc_release(lVar3);
  }
  func_0x00010bdca860(param_1);
  _objc_storeWeak(param_1 + 0x10,0);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106632ff8; end: 10663303b;  */

void FUN_106632ff8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010663302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10663303c; end: 10663313f; -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerGestureRecognizerShouldBegin:] */

ulong FUN_10663303c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar4 = uVar5;
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar5;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cc448;
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = uVar4;
    func_0x00010bf2cf80(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
  return uVar5;
}



/* Entry: 106633140; end: 1066332ef; -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerGestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

ulong FUN_106633140(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126cc450;
        uVar9 = *(ulong *)(lVar10 * 8);
        _objc_retain(uVar9);
        _objc_opt_class(puVar3);
        uVar4 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar3);
        uVar8 = uVar9;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar9);
        if (uVar8 != 0) {
          uVar4 = uVar9;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar4;
          func_0x00010c0f36c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = (ulong)(uVar8 == param_4);
          _objc_release();
          _objc_release(uVar4);
          _objc_release(uVar9);
          goto LAB_1066332a0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar8 = 0;
  }
LAB_1066332a0:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar5 = param_4 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(param_4 + 0x48);
  func_0x00010bf5f860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2514c0(uVar6);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdca870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s__animateAlongSideWithTransitionT_1125503b8,2,1);
  return param_4;
}



/* Entry: 1066332f0; end: 10663339f; -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillBeginDismiss] */

void FUN_1066332f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2514c0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdca870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateAlongSideWithTransitionT_1125503b8,2,1);
  return;
}



/* Entry: 1066333a0; end: 10663340b; -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillFinishDismiss] */

void FUN_1066333a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,0);
  return;
}



/* Entry: 10663340c; end: 1066334a7; -[SCUnifiedProfileTransitionCoordinator swipeDownDismissControllerWillCancelDismiss] */

void FUN_10663340c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5f860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(long *)(param_1 + 0x28) - 1;
  if (uVar5 < 3) {
    uVar4 = *(undefined8 *)(&UNK_10dddd178 + uVar5 * 8);
  }
  else {
    uVar4 = 0xea;
  }
  func_0x00010c24fc80(uVar3,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066334a8; end: 10663371b; -[SCUnifiedProfileTransitionCoordinator _configuredPresentedViewController] */

void FUN_1066334a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong unaff_x24;
  long lVar11;
  long lVar12;
  undefined1 auStack_188 [8];
  undefined1 *puStack_180;
  undefined1 auStack_178 [8];
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c8b80(uVar2);
  func_0x00010c219b20(uVar2);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar4 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x18,uVar4);
  }
  else {
    uVar5 = uVar2;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x18,uVar5);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar12 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar6 = lVar12;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  iVar9 = (int)auStack_f0;
  lVar7 = lVar6;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar6);
        }
        puVar3 = PTR_PTR_1126cc450;
        unaff_x24 = *(ulong *)(lStack_128 + lVar12 * 8);
        _objc_retain(unaff_x24);
        _objc_opt_class(puVar3);
        uVar5 = unaff_x24;
        _objc_opt_isKindOfClass(unaff_x24,puVar3);
        uVar4 = unaff_x24;
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(unaff_x24);
        if (uVar4 != 0) {
          _objc_storeWeak(param_1 + 0x20,unaff_x24);
        }
        _objc_release(uVar4);
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
      iVar9 = (int)auStack_f0;
      lVar7 = lVar6;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
      lVar12 = 0;
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  uVar4 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10663371c;
  lVar7 = uVar4 + 0x10;
  uStack_170 = unaff_x24;
  lStack_168 = lVar12;
  lStack_160 = lVar6;
  uStack_158 = uVar1;
  lStack_150 = param_1;
  uStack_148 = uVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  lVar12 = lVar7;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if ((iVar9 != 0) && (lVar12 != 0)) {
    _objc_initWeak(auStack_178,uVar4);
    uVar10 = *(undefined8 *)(uVar4 + 0x30);
    _objc_copyWeak(auStack_188,auStack_178);
    puStack_180 = (undefined1 *)puVar8;
    func_0x00010bf02c20(uVar10);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_178);
    return;
  }
  func_0x00010be82dc0(uVar4);
  lVar12 = uVar4 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar12;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar7 = uVar4 + 8;
    _objc_loadWeakRetained(lVar7);
  }
  else {
    _objc_retain(lVar6);
    lVar7 = lVar6;
  }
  _objc_release(lVar6);
  _objc_release(lVar12);
  func_0x00010bf17b00(lVar7);
  func_0x00010bf941a0(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10663371c; end: 1066338ab; -[SCUnifiedProfileTransitionCoordinator _animateAlongSideWithTransitionType:animated:] */

void FUN_10663371c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((param_4 != 0) && (lVar2 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    func_0x00010bf02c20(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    return;
  }
  func_0x00010be82dc0(param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf17b00(param_1);
  func_0x00010bf941a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066338ac; end: 1066338af;  */

void FUN_1066338ac(void)

{
  return;
}



/* Entry: 1066338b0; end: 106633917;  */

void FUN_1066338b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27ac00(param_2);
  _objc_release(param_2);
  func_0x00010be82dc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106633918; end: 1066339a7; -[SCUnifiedProfileTransitionCoordinator _profileTransitionDidCompleteWithTransitionType:isCancelled:] */

void FUN_106633918(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_4 & 1) == 0) {
    if (param_3 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c123020(uVar2,param_2,lVar1);
      _objc_release(lVar1);
    }
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27a7e0();
  }
  else {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27a7c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066339a8; end: 1066339e7; -[SCUnifiedProfileTransitionCoordinator interactionControllerForDismissal:] */

void FUN_1066339a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c075bc0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066339e8; end: 106633a1f; -[SCUnifiedProfileTransitionCoordinator animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_1066339e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1e1480(*(undefined8 *)(param_1 + 0x30),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106633a20; end: 106633a57; -[SCUnifiedProfileTransitionCoordinator animationControllerForDismissedController:] */

void FUN_106633a20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1e1480(*(undefined8 *)(param_1 + 0x30),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106633a58; end: 106633a6f; -[SCUnifiedProfileTransitionCoordinator dataSource] */

void FUN_106633a58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106633a70; end: 106633a7b; -[SCUnifiedProfileTransitionCoordinator setDataSource:] */

void FUN_106633a70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106633a7c; end: 106633a93; -[SCUnifiedProfileTransitionCoordinator delegate] */

void FUN_106633a7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106633a94; end: 106633a9f; -[SCUnifiedProfileTransitionCoordinator setDelegate:] */

void FUN_106633a94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106633aa0; end: 106633b0b; -[SCUnifiedProfileTransitionCoordinator .cxx_destruct] */

void FUN_106633aa0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106633b0c; end: 106633b6f; -[SCProfilePageActionHandler init] */

undefined1 * FUN_106633b0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f22b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106633b70; end: 106633c4b; -[SCProfilePageActionHandler addSubActionHandler:] */

void FUN_106633b70(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_3 != param_1)) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106633c4c;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(lStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106633c4c; end: 106633c7f;  */

void FUN_106633c4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106633c80; end: 106633d27; -[SCProfilePageActionHandler _addSubActionHandlerOnMainThread:] */

void FUN_106633c80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_3 != param_1)) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    puVar2 = PTR_DAT_1126a4e80;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar1 = param_3;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_3);
    func_0x00010c1e1580(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106633d28; end: 106633e8f; -[SCProfilePageActionHandler setUnifiedProfileViewController:] */

undefined1 * FUN_106633d28(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  puVar6 = auStack_e8;
  uVar7 = 0x10;
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        puVar1 = PTR_DAT_1126a4e80;
        uVar9 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        _objc_retain(uVar9);
        uVar3 = uVar9;
        func_0x00010010fab4(uVar9,puVar1);
        uVar7 = uVar9;
        if ((int)uVar3 == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar9);
        func_0x00010c1e1580(uVar7);
        _objc_release(uVar7);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar6 = auStack_e8;
      uVar7 = 0x10;
      lVar2 = lVar8;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  lVar13 = *(long *)(param_3 + 8);
  _objc_retain(lVar13);
  lVar8 = lVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar10 = (undefined1 *)0x0;
  if (lVar8 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar13);
        }
        uVar4 = *(ulong *)(lVar12 * 8);
        func_0x00010bfd0140();
        if ((uVar4 & 1) != 0) {
          puVar10 = (undefined1 *)0x1;
          goto LAB_106633f88;
        }
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar13;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_106633f88:
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar6 = (undefined1 *)((long)puVar5 + 0x10);
    _objc_loadWeakRetained(puVar6);
    puVar10 = puVar6;
    func_0x00010c280080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return puVar6;
  }
  return puVar10;
}



/* Entry: 106633e90; end: 106633fe3; -[SCProfilePageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_106633e90(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar5 * 8);
        func_0x00010bfd0140(uVar2,param_2,param_3,param_4,param_5);
        if ((uVar2 & 1) != 0) {
          lVar4 = 1;
          goto LAB_106633f88;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
    lVar4 = 0;
  }
LAB_106633f88:
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  lVar4 = param_3;
  func_0x00010c280080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 106633fe4; end: 10663402b; -[SCProfilePageActionHandler contentWillDisplay] */

void FUN_106633fe4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c280080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10663402c; end: 106634073; -[SCProfilePageActionHandler contentDidTearDown] */

void FUN_10663402c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c280080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106634074; end: 10663408b; -[SCProfilePageActionHandler unifiedProfileViewController] */

void FUN_106634074(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10663408c; end: 106634093; -[SCProfilePageActionHandler loggingService] */

undefined8 FUN_10663408c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106634094; end: 1066340c3; -[SCProfilePageActionHandler setLoggingService:] */

void FUN_106634094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066340c4; end: 1066340fb; -[SCProfilePageActionHandler .cxx_destruct] */

void FUN_1066340c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066340fc; end: 1066341d7; -[SCUnifiedProfileNavigationController handleNotificationWhenReady:] */

void FUN_1066340fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (1 < uVar2) {
    func_0x00010c103980(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4ef0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bfd19c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066341d8; end: 1066341e3; -[SCUnifiedProfileNavigationControllerPushOperationAnimator transitionDuration:] */

undefined8 FUN_1066341d8(void)

{
  return 0x3fd3333340000000;
}



/* Entry: 1066341e4; end: 106634377; -[SCUnifiedProfileNavigationControllerPushOperationAnimator animateTransition:] */

void FUN_1066341e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
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
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar4);
  func_0x00010bf20c00(uVar3);
  _CGRectGetWidth();
  _CGAffineTransformMakeTranslation(&uStack_90);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960(uVar4,param_2,&uStack_c0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106634378;
  puStack_d0 = &UNK_110842e18;
  uStack_c8 = uVar4;
  _objc_retain(uVar4);
  ppuVar5 = &puStack_e8;
  _objc_retainBlock(ppuVar5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar6 = uStack_70;
  func_0x00010c27a940(param_1,param_2,param_3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106634434;
  puStack_f8 = &UNK_110841f20;
  uStack_f0 = param_3;
  _objc_retain(param_3);
  func_0x00010bf02ee0(uVar6,0,puVar2,param_2,0,ppuVar5,&puStack_110);
  _objc_release(uStack_f0);
  _objc_release(ppuVar5);
  _objc_release(uStack_c8);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}


