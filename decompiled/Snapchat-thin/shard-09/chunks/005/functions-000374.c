/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eb8900; end: 106eb8907;  */

void FUN_106eb8900(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentName_1125b0cd0);
  return;
}



/* Entry: 106eb8908; end: 106eb8a0f;  */

undefined8 FUN_106eb8908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf4cca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4cca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106eb8a10; end: 106eb8adb;  */

void FUN_106eb8a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eb8adc; end: 106eb8d8f; -[SCSpectaclesMediaListReconciler updateContentWithMediaList] */

void FUN_106eb8adc(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uStack_970;
  long lStack_968;
  long *plStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 auStack_930 [16];
  long lStack_8b0;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  undefined **ppuStack_838;
  undefined8 uStack_830;
  long lStack_828;
  undefined8 *puStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7f0 [128];
  long lStack_770;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [128];
  undefined1 auStack_600 [128];
  long lStack_580;
  undefined1 ***pppuStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_488 [128];
  undefined1 auStack_408 [128];
  long lStack_388;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [128];
  long lStack_258;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar1 = param_1;
  func_0x00010bf4c980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_1a0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x22 = *(undefined ***)(lStack_1a8 + (long)unaff_x27 * 8);
        ppuVar15 = param_1;
        func_0x00010be3f220(param_1,param_2,unaff_x22);
        if (((ulong)ppuVar15 & 1) == 0) {
          ppuVar15 = unaff_x22;
          func_0x00010bf4cca0(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = param_1;
          func_0x00010bde7960(param_1,param_2,3,ppuVar15);
          _objc_release(ppuVar15);
          unaff_x25 = unaff_x22;
          func_0x00010bf4cca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = param_1;
          func_0x00010bde7960(param_1,param_2,4,unaff_x25);
          _objc_release(unaff_x25);
          ppuVar15 = unaff_x22;
          func_0x00010c27dd80();
          if (ppuVar15 == (undefined **)0x1) {
            if (((ulong)unaff_x24 & 1) == 0) {
              uVar11 = 2;
              goto LAB_106eb8c10;
            }
          }
          else if ((ppuVar15 == (undefined **)0x0) && (((ulong)unaff_x23 & 1) == 0)) {
            uVar11 = 1;
LAB_106eb8c10:
            ppuVar15 = unaff_x22;
            func_0x00010c080760(unaff_x22,param_2,uVar11);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x00010c0bbc00(unaff_x22);
            }
          }
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  ppuVar1 = param_1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_1e0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x22 = *(undefined ***)(lStack_1e8 + (long)unaff_x27 * 8);
        unaff_x23 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x22;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x23;
        func_0x00010c0e00e0(unaff_x23,param_2,unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8120(param_1,param_2,unaff_x22,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_1f0,auStack_168,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  func_0x00010bdfa1c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_106eb8d90;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  puStack_310 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  ppuVar1 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010c12a180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60(ppuVar2,param_2,&uStack_320,auStack_2d8,0x10);
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_310;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_310 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined ***)(lStack_318 + (long)unaff_x26 * 8);
        unaff_x24 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        ppuVar15 = param_1;
        func_0x00010bde7960(param_1,param_2,3,unaff_x23);
        if (((((ulong)ppuVar15 & 1) != 0) ||
            (ppuVar15 = param_1, func_0x00010bde7960(param_1,param_2,4,unaff_x23),
            (int)ppuVar15 != 0)) &&
           (ppuVar15 = param_1, func_0x00010bde7960(param_1,param_2,5,unaff_x23),
           ((ulong)ppuVar15 & 1) == 0)) {
          func_0x00010c1ab540(unaff_x22,param_2,0);
        }
        _objc_release(unaff_x22);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_320,auStack_2d8,0x10);
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_106eb8f2c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  ppuStack_330 = &puStack_200;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  puStack_4c0 = (undefined8 *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  ppuVar15 = ppuVar2;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar15;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_4c0;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar15);
        }
        unaff_x23 = *(undefined ***)(lStack_4c8 + (long)unaff_x25 * 8);
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1,param_2,unaff_x23);
        _objc_release(unaff_x23);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar14 != unaff_x25);
      ppuVar14 = ppuVar15;
      func_0x00010bf52a60(ppuVar15,param_2,&uStack_4d0,auStack_408,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(ppuVar15);
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  puStack_500 = (undefined8 *)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  func_0x00010bf4c980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_500;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_500 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined ***)(lStack_508 + (long)unaff_x27 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar1;
        func_0x00010bf4b900(ppuVar1,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if (((ulong)unaff_x25 & 1) == 0) {
          func_0x00010befa120(ppuVar15,param_2,unaff_x23);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar14 != unaff_x27);
      ppuVar14 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_510,auStack_488,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar15;
  func_0x00010bf51e00();
  _objc_release(ppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    pcStack_518 = FUN_106eb9174;
    lStack_580 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    pppuStack_520 = &ppuStack_330;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    puStack_6b0 = (undefined8 *)0x0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    ppuVar15 = ppuVar1;
    func_0x00010bf52760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar15;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_6b0;
      unaff_x25 = &PTR_PTR_1126d2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_6b0 != unaff_x24) {
            _objc_enumerationMutation(ppuVar15);
          }
          unaff_x23 = (undefined **)PTR_PTR_1126d2ff8;
          _objc_alloc();
          func_0x00010c0038a0();
          func_0x00010befa120(ppuVar14,param_2,unaff_x23);
          _objc_release(unaff_x23);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar2 != unaff_x26);
        ppuVar2 = ppuVar15;
        func_0x00010bf52a60(ppuVar15,param_2,&uStack_6c0,auStack_600,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar15);
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    lStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    puStack_6f0 = (undefined8 *)0x0;
    ppuVar17 = ppuVar1;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar17;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_6f0;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_6f0 != unaff_x27) {
            _objc_enumerationMutation(ppuVar17);
          }
          unaff_x24 = *(undefined ***)(lStack_6f8 + (long)ppuVar15 * 8);
          ppuVar3 = ppuVar1;
          func_0x00010bf4c560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf4cca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar3;
          func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(ppuVar3);
          unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
          ppuVar3 = unaff_x24;
          func_0x00010c27dd80(unaff_x24);
          puVar4 = (undefined *)unaff_x25;
          func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
          if (unaff_x23 != (undefined **)0x0) {
            if (puVar4 == (undefined *)0x5) {
              ppuVar3 = unaff_x24;
              func_0x00010c27dd80();
              if (ppuVar3 == (undefined **)0xb) {
                ppuVar5 = unaff_x23;
                func_0x00010c070dc0(unaff_x23,param_2,1);
                ppuVar3 = &PTR_PTR_1126d3088;
                if (((ulong)ppuVar5 & 1) != 0) goto LAB_106eb93a0;
              }
            }
            else {
              ppuVar5 = unaff_x23;
              func_0x00010c080760(unaff_x23,param_2,puVar4);
              ppuVar3 = &PTR_PTR_1126d30f8;
              if ((int)ppuVar5 != 0) {
LAB_106eb93a0:
                unaff_x24 = (undefined **)*ppuVar3;
                _objc_alloc();
                func_0x00010c002b20();
                func_0x00010befa120(ppuVar14,param_2,unaff_x24);
                _objc_release(unaff_x24);
              }
            }
          }
          _objc_release(unaff_x23);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar2 != ppuVar15);
        ppuVar2 = ppuVar17;
        func_0x00010bf52a60(ppuVar17,param_2,&uStack_700,auStack_680,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar17);
    ppuVar2 = ppuVar14;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_580) {
      ___stack_chk_fail();
      pcStack_708 = FUN_106eb945c;
      lStack_770 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_760 = ppuVar17;
      ppuStack_758 = unaff_x27;
      ppuStack_750 = unaff_x26;
      ppuStack_748 = unaff_x25;
      ppuStack_740 = unaff_x24;
      ppuStack_738 = unaff_x23;
      ppuStack_730 = unaff_x22;
      ppuStack_728 = ppuVar15;
      ppuStack_720 = ppuVar2;
      ppuStack_718 = ppuVar14;
      pppuStack_710 = &pppuStack_520;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_828 = 0;
      uStack_830 = 0;
      uStack_818 = 0;
      puStack_820 = (undefined8 *)0x0;
      uStack_808 = 0;
      uStack_810 = 0;
      uStack_7f8 = 0;
      uStack_800 = 0;
      ppuVar15 = ppuVar1;
      ppuStack_838 = ppuVar3;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar15;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        unaff_x27 = (undefined **)*puStack_820;
        ppuVar17 = &PTR_PTR_1126d2000;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_820 != unaff_x27) {
              _objc_enumerationMutation(ppuVar15);
            }
            unaff_x24 = *(undefined ***)(lStack_828 + (long)ppuVar14 * 8);
            ppuVar3 = ppuVar1;
            func_0x00010bf4c560();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            func_0x00010bf4cca0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar3;
            func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppuVar3);
            unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
            ppuVar3 = unaff_x24;
            func_0x00010c27dd80(unaff_x24);
            ppuVar5 = unaff_x25;
            func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
            if ((unaff_x23 != (undefined **)0x0 && ppuVar5 != (undefined **)0x5) &&
               (ppuVar3 = unaff_x23, func_0x00010c070dc0(unaff_x23,param_2,ppuVar5),
               unaff_x24 = ppuVar5, ((ulong)ppuVar3 & 1) == 0)) {
              unaff_x24 = ppuVar1;
              func_0x00010be5b080(ppuVar1,param_2,unaff_x23,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x24 != (undefined **)0x0) {
                func_0x00010befa120(ppuStack_838,param_2,unaff_x24);
              }
              _objc_release(unaff_x24);
            }
            _objc_release(unaff_x23);
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          } while (ppuVar2 != ppuVar14);
          ppuVar2 = ppuVar15;
          func_0x00010bf52a60(ppuVar15,param_2,&uStack_830,auStack_7f0,0x10);
          unaff_x22 = (undefined **)0x0;
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar15);
      ppuVar1 = ppuStack_838;
      ppuVar2 = ppuStack_838;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_770) {
        ___stack_chk_fail();
        ppuStack_858 = ppuVar1;
        pcStack_848 = FUN_106eb9664;
        lStack_8b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        ppuStack_8a0 = ppuVar17;
        ppuStack_898 = unaff_x27;
        ppuStack_890 = unaff_x26;
        ppuStack_888 = unaff_x25;
        ppuStack_880 = unaff_x24;
        ppuStack_878 = unaff_x23;
        ppuStack_870 = unaff_x22;
        ppuStack_868 = ppuVar15;
        ppuStack_860 = ppuVar2;
        pppuStack_850 = &pppuStack_710;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_968 = 0;
        uStack_970 = 0;
        uStack_958 = 0;
        plStack_960 = (long *)0x0;
        uStack_948 = 0;
        uStack_950 = 0;
        uStack_938 = 0;
        uStack_940 = 0;
        ppuVar2 = ppuVar14;
        func_0x00010c0c5580();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = &uStack_970;
        puVar13 = auStack_930;
        ppuVar15 = ppuVar2;
        func_0x00010bf52a60();
        if (ppuVar15 != (undefined **)0x0) {
          lVar18 = *plStack_960;
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if (*plStack_960 != lVar18) {
                _objc_enumerationMutation(ppuVar2);
              }
              ppuVar16 = *(undefined ***)(lStack_968 + (long)ppuVar17 * 8);
              ppuVar3 = ppuVar14;
              func_0x00010bf4c560();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar16;
              func_0x00010bf4cca0(ppuVar16);
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar3;
              func_0x00010c0e00e0(ppuVar3,param_2,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              if (ppuVar6 == (undefined **)0x0) {
                ppuVar3 = ppuVar14;
                func_0x00010bf52760();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar16;
                func_0x00010bf4cca0(ppuVar16);
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar3;
                func_0x00010bf4b900(ppuVar3,param_2,ppuVar5);
                if (((ulong)ppuVar7 & 1) == 0) {
                  ppuVar7 = ppuVar16;
                  func_0x00010c27dd80();
                  _objc_release(ppuVar5);
                  _objc_release(ppuVar3);
                  if (ppuVar7 != (undefined **)0x6) goto LAB_106eb9834;
                  puVar4 = PTR_PTR_1126d3100;
                  _objc_alloc(PTR_PTR_1126d3100);
                  func_0x00010bf4cca0(ppuVar16);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar5 = ppuVar14;
                  func_0x00010c0c5580(ppuVar14);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0038c0(puVar4,param_2,ppuVar16,ppuVar5);
                  func_0x00010befa120(ppuVar1,param_2,puVar4);
                  _objc_release(puVar4);
                  ppuVar3 = ppuVar16;
                }
                _objc_release(ppuVar5);
                _objc_release(ppuVar3);
              }
LAB_106eb9834:
              _objc_release(ppuVar6);
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar15 != ppuVar17);
            puVar12 = &uStack_970;
            puVar13 = auStack_930;
            ppuVar15 = ppuVar2;
            func_0x00010bf52a60();
          } while (ppuVar15 != (undefined **)0x0);
        }
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar1;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8b0) {
          ___stack_chk_fail();
          _objc_retain(puVar12);
          _objc_retain(puVar13);
          puVar4 = PTR_PTR_1126d2f58;
          puVar8 = puVar12;
          func_0x00010c27dd80(puVar12);
          func_0x00010bf443e0(puVar4,param_2,puVar8);
          if (((puVar13 != (undefined8 *)0x0) && (puVar4 != (undefined *)0x5)) &&
             (puVar8 = puVar13, func_0x00010c080760(puVar13,param_2,puVar4),
             ((ulong)puVar8 & 1) == 0)) {
            puVar8 = puVar13;
            func_0x00010be15900(puVar13,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c12a120();
            puVar10 = puVar12;
            func_0x00010c23d0a0();
            if (puVar9 != puVar10) {
              puVar9 = puVar12;
              func_0x00010c23d0a0(puVar12);
              func_0x00010c1ea280(puVar8,param_2,puVar9);
            }
            _objc_release(puVar8);
          }
          _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar12);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106eb8d90; end: 106eb8f2b; -[SCSpectaclesMediaListReconciler _deleteImuFileFromContentIfRemoteFileMissingImuData] */

void FUN_106eb8d90(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_780;
  long lStack_778;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 auStack_740 [16];
  long lStack_6c0;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined8 ***pppuStack_660;
  code *pcStack_658;
  undefined **ppuStack_648;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_600 [128];
  long lStack_580;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined1 ***pppuStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [128];
  undefined1 auStack_410 [128];
  long lStack_390;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [128];
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010c12a180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60(ppuVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined ***)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x24 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        ppuVar14 = param_1;
        func_0x00010bde7960(param_1,param_2,3,unaff_x23);
        if (((((ulong)ppuVar14 & 1) != 0) ||
            (ppuVar14 = param_1, func_0x00010bde7960(param_1,param_2,4,unaff_x23),
            (int)ppuVar14 != 0)) &&
           (ppuVar14 = param_1, func_0x00010bde7960(param_1,param_2,5,unaff_x23),
           ((ulong)ppuVar14 & 1) == 0)) {
          func_0x00010c1ab540(unaff_x22,param_2,0);
        }
        _objc_release(unaff_x22);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106eb8f2c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  ppuVar14 = ppuVar2;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_2d0;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_2d0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar14);
        }
        unaff_x23 = *(undefined ***)(lStack_2d8 + (long)unaff_x25 * 8);
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1,param_2,unaff_x23);
        _objc_release(unaff_x23);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar13 != unaff_x25);
      ppuVar13 = ppuVar14;
      func_0x00010bf52a60(ppuVar14,param_2,&uStack_2e0,auStack_218,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  puStack_310 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  func_0x00010bf4c980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_310;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_310 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined ***)(lStack_318 + (long)unaff_x27 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar1;
        func_0x00010bf4b900(ppuVar1,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if (((ulong)unaff_x25 & 1) == 0) {
          func_0x00010befa120(ppuVar14,param_2,unaff_x23);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar13 != unaff_x27);
      ppuVar13 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_320,auStack_298,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar14;
  func_0x00010bf51e00();
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    pcStack_328 = FUN_106eb9174;
    lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_330 = &puStack_140;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    puStack_4c0 = (undefined8 *)0x0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    ppuVar14 = ppuVar1;
    func_0x00010bf52760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar14;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_4c0;
      unaff_x25 = &PTR_PTR_1126d2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_4c0 != unaff_x24) {
            _objc_enumerationMutation(ppuVar14);
          }
          unaff_x23 = (undefined **)PTR_PTR_1126d2ff8;
          _objc_alloc();
          func_0x00010c0038a0();
          func_0x00010befa120(ppuVar13,param_2,unaff_x23);
          _objc_release(unaff_x23);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar2 != unaff_x26);
        ppuVar2 = ppuVar14;
        func_0x00010bf52a60(ppuVar14,param_2,&uStack_4d0,auStack_410,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    lStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    puStack_500 = (undefined8 *)0x0;
    ppuVar16 = ppuVar1;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_500;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_500 != unaff_x27) {
            _objc_enumerationMutation(ppuVar16);
          }
          unaff_x24 = *(undefined ***)(lStack_508 + (long)ppuVar14 * 8);
          ppuVar3 = ppuVar1;
          func_0x00010bf4c560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf4cca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar3;
          func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(ppuVar3);
          unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
          ppuVar3 = unaff_x24;
          func_0x00010c27dd80(unaff_x24);
          puVar4 = (undefined *)unaff_x25;
          func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
          if (unaff_x23 != (undefined **)0x0) {
            if (puVar4 == (undefined *)0x5) {
              ppuVar3 = unaff_x24;
              func_0x00010c27dd80();
              if (ppuVar3 == (undefined **)0xb) {
                ppuVar5 = unaff_x23;
                func_0x00010c070dc0(unaff_x23,param_2,1);
                ppuVar3 = &PTR_PTR_1126d3088;
                if (((ulong)ppuVar5 & 1) != 0) goto LAB_106eb93a0;
              }
            }
            else {
              ppuVar5 = unaff_x23;
              func_0x00010c080760(unaff_x23,param_2,puVar4);
              ppuVar3 = &PTR_PTR_1126d30f8;
              if ((int)ppuVar5 != 0) {
LAB_106eb93a0:
                unaff_x24 = (undefined **)*ppuVar3;
                _objc_alloc();
                func_0x00010c002b20();
                func_0x00010befa120(ppuVar13,param_2,unaff_x24);
                _objc_release(unaff_x24);
              }
            }
          }
          _objc_release(unaff_x23);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar2 != ppuVar14);
        ppuVar2 = ppuVar16;
        func_0x00010bf52a60(ppuVar16,param_2,&uStack_510,auStack_490,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    ppuVar2 = ppuVar13;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_390) {
      ___stack_chk_fail();
      pcStack_518 = FUN_106eb945c;
      lStack_580 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_570 = ppuVar16;
      ppuStack_568 = unaff_x27;
      ppuStack_560 = unaff_x26;
      ppuStack_558 = unaff_x25;
      ppuStack_550 = unaff_x24;
      ppuStack_548 = unaff_x23;
      ppuStack_540 = unaff_x22;
      ppuStack_538 = ppuVar14;
      ppuStack_530 = ppuVar2;
      ppuStack_528 = ppuVar13;
      pppuStack_520 = &ppuStack_330;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_638 = 0;
      uStack_640 = 0;
      uStack_628 = 0;
      puStack_630 = (undefined8 *)0x0;
      uStack_618 = 0;
      uStack_620 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      ppuVar14 = ppuVar1;
      ppuStack_648 = ppuVar3;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        unaff_x27 = (undefined **)*puStack_630;
        ppuVar16 = &PTR_PTR_1126d2000;
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_630 != unaff_x27) {
              _objc_enumerationMutation(ppuVar14);
            }
            unaff_x24 = *(undefined ***)(lStack_638 + (long)ppuVar13 * 8);
            ppuVar3 = ppuVar1;
            func_0x00010bf4c560();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            func_0x00010bf4cca0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar3;
            func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppuVar3);
            unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
            ppuVar3 = unaff_x24;
            func_0x00010c27dd80(unaff_x24);
            ppuVar5 = unaff_x25;
            func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
            if ((unaff_x23 != (undefined **)0x0 && ppuVar5 != (undefined **)0x5) &&
               (ppuVar3 = unaff_x23, func_0x00010c070dc0(unaff_x23,param_2,ppuVar5),
               unaff_x24 = ppuVar5, ((ulong)ppuVar3 & 1) == 0)) {
              unaff_x24 = ppuVar1;
              func_0x00010be5b080(ppuVar1,param_2,unaff_x23,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x24 != (undefined **)0x0) {
                func_0x00010befa120(ppuStack_648,param_2,unaff_x24);
              }
              _objc_release(unaff_x24);
            }
            _objc_release(unaff_x23);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar2 != ppuVar13);
          ppuVar2 = ppuVar14;
          func_0x00010bf52a60(ppuVar14,param_2,&uStack_640,auStack_600,0x10);
          unaff_x22 = (undefined **)0x0;
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar1 = ppuStack_648;
      ppuVar2 = ppuStack_648;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_580) {
        ___stack_chk_fail();
        ppuStack_668 = ppuVar1;
        pcStack_658 = FUN_106eb9664;
        lStack_6c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        ppuStack_6b0 = ppuVar16;
        ppuStack_6a8 = unaff_x27;
        ppuStack_6a0 = unaff_x26;
        ppuStack_698 = unaff_x25;
        ppuStack_690 = unaff_x24;
        ppuStack_688 = unaff_x23;
        ppuStack_680 = unaff_x22;
        ppuStack_678 = ppuVar14;
        ppuStack_670 = ppuVar2;
        pppuStack_660 = &pppuStack_520;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_778 = 0;
        uStack_780 = 0;
        uStack_768 = 0;
        plStack_770 = (long *)0x0;
        uStack_758 = 0;
        uStack_760 = 0;
        uStack_748 = 0;
        uStack_750 = 0;
        ppuVar2 = ppuVar13;
        func_0x00010c0c5580();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = &uStack_780;
        puVar12 = auStack_740;
        ppuVar14 = ppuVar2;
        func_0x00010bf52a60();
        if (ppuVar14 != (undefined **)0x0) {
          lVar17 = *plStack_770;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_770 != lVar17) {
                _objc_enumerationMutation(ppuVar2);
              }
              ppuVar15 = *(undefined ***)(lStack_778 + (long)ppuVar16 * 8);
              ppuVar3 = ppuVar13;
              func_0x00010bf4c560();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar15;
              func_0x00010bf4cca0(ppuVar15);
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar3;
              func_0x00010c0e00e0(ppuVar3,param_2,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              if (ppuVar6 == (undefined **)0x0) {
                ppuVar3 = ppuVar13;
                func_0x00010bf52760();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar15;
                func_0x00010bf4cca0(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar3;
                func_0x00010bf4b900(ppuVar3,param_2,ppuVar5);
                if (((ulong)ppuVar7 & 1) == 0) {
                  ppuVar7 = ppuVar15;
                  func_0x00010c27dd80();
                  _objc_release(ppuVar5);
                  _objc_release(ppuVar3);
                  if (ppuVar7 != (undefined **)0x6) goto LAB_106eb9834;
                  puVar4 = PTR_PTR_1126d3100;
                  _objc_alloc(PTR_PTR_1126d3100);
                  func_0x00010bf4cca0(ppuVar15);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar5 = ppuVar13;
                  func_0x00010c0c5580(ppuVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0038c0(puVar4,param_2,ppuVar15,ppuVar5);
                  func_0x00010befa120(ppuVar1,param_2,puVar4);
                  _objc_release(puVar4);
                  ppuVar3 = ppuVar15;
                }
                _objc_release(ppuVar5);
                _objc_release(ppuVar3);
              }
LAB_106eb9834:
              _objc_release(ppuVar6);
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar14 != ppuVar16);
            puVar11 = &uStack_780;
            puVar12 = auStack_740;
            ppuVar14 = ppuVar2;
            func_0x00010bf52a60();
          } while (ppuVar14 != (undefined **)0x0);
        }
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar1;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c0) {
          ___stack_chk_fail();
          _objc_retain(puVar11);
          _objc_retain(puVar12);
          puVar4 = PTR_PTR_1126d2f58;
          puVar8 = puVar11;
          func_0x00010c27dd80(puVar11);
          func_0x00010bf443e0(puVar4,param_2,puVar8);
          if (((puVar12 != (undefined8 *)0x0) && (puVar4 != (undefined *)0x5)) &&
             (puVar8 = puVar12, func_0x00010c080760(puVar12,param_2,puVar4),
             ((ulong)puVar8 & 1) == 0)) {
            puVar8 = puVar12;
            func_0x00010be15900(puVar12,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c12a120();
            puVar10 = puVar11;
            func_0x00010c23d0a0();
            if (puVar9 != puVar10) {
              puVar9 = puVar11;
              func_0x00010c23d0a0(puVar11);
              func_0x00010c1ea280(puVar8,param_2,puVar9);
            }
            _objc_release(puVar8);
          }
          _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106eb8f2c; end: 106eb9173; -[SCSpectaclesMediaListReconciler contentToDelete] */

void FUN_106eb8f2c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_650;
  long lStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 auStack_610 [16];
  long lStack_590;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 uStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined1 ***pppuStack_530;
  code *pcStack_528;
  undefined **ppuStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [128];
  long lStack_450;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined1 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [128];
  undefined1 auStack_2e0 [128];
  long lStack_260;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar14 = param_1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_1a0;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar14);
        }
        unaff_x23 = *(undefined ***)(lStack_1a8 + (long)unaff_x25 * 8);
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1,param_2,unaff_x23);
        _objc_release(unaff_x23);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar2 != unaff_x25);
      ppuVar2 = ppuVar14;
      func_0x00010bf52a60(ppuVar14,param_2,&uStack_1b0,auStack_e8,0x10);
      unaff_x22 = 0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  func_0x00010bf4c980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_1e0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined ***)(lStack_1e8 + (long)unaff_x27 * 8);
        unaff_x24 = unaff_x23;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar1;
        func_0x00010bf4b900(ppuVar1,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if (((ulong)unaff_x25 & 1) == 0) {
          func_0x00010befa120(ppuVar14,param_2,unaff_x23);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1f0,auStack_168,0x10);
      unaff_x22 = 0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_1);
  ppuVar2 = ppuVar14;
  func_0x00010bf51e00();
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_106eb9174;
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_200 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    puStack_390 = (undefined8 *)0x0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    ppuVar14 = ppuVar1;
    func_0x00010bf52760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar14;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_390;
      unaff_x25 = &PTR_PTR_1126d2000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_390 != unaff_x24) {
            _objc_enumerationMutation(ppuVar14);
          }
          unaff_x23 = (undefined **)PTR_PTR_1126d2ff8;
          _objc_alloc();
          func_0x00010c0038a0();
          func_0x00010befa120(ppuVar13,param_2,unaff_x23);
          _objc_release(unaff_x23);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar2 != unaff_x26);
        ppuVar2 = ppuVar14;
        func_0x00010bf52a60(ppuVar14,param_2,&uStack_3a0,auStack_2e0,0x10);
        unaff_x22 = 0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    puStack_3d0 = (undefined8 *)0x0;
    ppuVar16 = ppuVar1;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_3d0;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_3d0 != unaff_x27) {
            _objc_enumerationMutation(ppuVar16);
          }
          unaff_x24 = *(undefined ***)(lStack_3d8 + (long)ppuVar14 * 8);
          ppuVar3 = ppuVar1;
          func_0x00010bf4c560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf4cca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar3;
          func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(ppuVar3);
          unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
          ppuVar3 = unaff_x24;
          func_0x00010c27dd80(unaff_x24);
          puVar4 = (undefined *)unaff_x25;
          func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
          if (unaff_x23 != (undefined **)0x0) {
            if (puVar4 == (undefined *)0x5) {
              ppuVar3 = unaff_x24;
              func_0x00010c27dd80();
              if (ppuVar3 == (undefined **)0xb) {
                ppuVar5 = unaff_x23;
                func_0x00010c070dc0(unaff_x23,param_2,1);
                ppuVar3 = &PTR_PTR_1126d3088;
                if (((ulong)ppuVar5 & 1) != 0) goto LAB_106eb93a0;
              }
            }
            else {
              ppuVar5 = unaff_x23;
              func_0x00010c080760(unaff_x23,param_2,puVar4);
              ppuVar3 = &PTR_PTR_1126d30f8;
              if ((int)ppuVar5 != 0) {
LAB_106eb93a0:
                unaff_x24 = (undefined **)*ppuVar3;
                _objc_alloc();
                func_0x00010c002b20();
                func_0x00010befa120(ppuVar13,param_2,unaff_x24);
                _objc_release(unaff_x24);
              }
            }
          }
          _objc_release(unaff_x23);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar2 != ppuVar14);
        ppuVar2 = ppuVar16;
        func_0x00010bf52a60(ppuVar16,param_2,&uStack_3e0,auStack_360,0x10);
        unaff_x22 = 0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    ppuVar2 = ppuVar13;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
      ___stack_chk_fail();
      pcStack_3e8 = FUN_106eb945c;
      lStack_450 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_440 = ppuVar16;
      ppuStack_438 = unaff_x27;
      ppuStack_430 = unaff_x26;
      ppuStack_428 = unaff_x25;
      ppuStack_420 = unaff_x24;
      ppuStack_418 = unaff_x23;
      uStack_410 = unaff_x22;
      ppuStack_408 = ppuVar14;
      ppuStack_400 = ppuVar2;
      ppuStack_3f8 = ppuVar13;
      ppuStack_3f0 = &puStack_200;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      puStack_500 = (undefined8 *)0x0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      ppuVar14 = ppuVar1;
      ppuStack_518 = ppuVar3;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        unaff_x27 = (undefined **)*puStack_500;
        ppuVar16 = &PTR_PTR_1126d2000;
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_500 != unaff_x27) {
              _objc_enumerationMutation(ppuVar14);
            }
            unaff_x24 = *(undefined ***)(lStack_508 + (long)ppuVar13 * 8);
            ppuVar3 = ppuVar1;
            func_0x00010bf4c560();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            func_0x00010bf4cca0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar3;
            func_0x00010c0e00e0(ppuVar3,param_2,unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppuVar3);
            unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
            ppuVar3 = unaff_x24;
            func_0x00010c27dd80(unaff_x24);
            ppuVar5 = unaff_x25;
            func_0x00010bf443e0(unaff_x25,param_2,ppuVar3);
            if ((unaff_x23 != (undefined **)0x0 && ppuVar5 != (undefined **)0x5) &&
               (ppuVar3 = unaff_x23, func_0x00010c070dc0(unaff_x23,param_2,ppuVar5),
               unaff_x24 = ppuVar5, ((ulong)ppuVar3 & 1) == 0)) {
              unaff_x24 = ppuVar1;
              func_0x00010be5b080(ppuVar1,param_2,unaff_x23,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x24 != (undefined **)0x0) {
                func_0x00010befa120(ppuStack_518,param_2,unaff_x24);
              }
              _objc_release(unaff_x24);
            }
            _objc_release(unaff_x23);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar2 != ppuVar13);
          ppuVar2 = ppuVar14;
          func_0x00010bf52a60(ppuVar14,param_2,&uStack_510,auStack_4d0,0x10);
          unaff_x22 = 0;
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar1 = ppuStack_518;
      ppuVar2 = ppuStack_518;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_450) {
        ___stack_chk_fail();
        ppuStack_538 = ppuVar1;
        pcStack_528 = FUN_106eb9664;
        lStack_590 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        ppuStack_580 = ppuVar16;
        ppuStack_578 = unaff_x27;
        ppuStack_570 = unaff_x26;
        ppuStack_568 = unaff_x25;
        ppuStack_560 = unaff_x24;
        ppuStack_558 = unaff_x23;
        uStack_550 = unaff_x22;
        ppuStack_548 = ppuVar14;
        ppuStack_540 = ppuVar2;
        pppuStack_530 = &ppuStack_3f0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_648 = 0;
        uStack_650 = 0;
        uStack_638 = 0;
        plStack_640 = (long *)0x0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        uStack_620 = 0;
        ppuVar14 = ppuVar13;
        func_0x00010c0c5580();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = &uStack_650;
        puVar12 = auStack_610;
        ppuVar2 = ppuVar14;
        func_0x00010bf52a60();
        if (ppuVar2 != (undefined **)0x0) {
          lVar17 = *plStack_640;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_640 != lVar17) {
                _objc_enumerationMutation(ppuVar14);
              }
              ppuVar15 = *(undefined ***)(lStack_648 + (long)ppuVar16 * 8);
              ppuVar3 = ppuVar13;
              func_0x00010bf4c560();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar15;
              func_0x00010bf4cca0(ppuVar15);
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar3;
              func_0x00010c0e00e0(ppuVar3,param_2,ppuVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              if (ppuVar6 == (undefined **)0x0) {
                ppuVar3 = ppuVar13;
                func_0x00010bf52760();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar15;
                func_0x00010bf4cca0(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar3;
                func_0x00010bf4b900(ppuVar3,param_2,ppuVar5);
                if (((ulong)ppuVar7 & 1) == 0) {
                  ppuVar7 = ppuVar15;
                  func_0x00010c27dd80();
                  _objc_release(ppuVar5);
                  _objc_release(ppuVar3);
                  if (ppuVar7 != (undefined **)0x6) goto LAB_106eb9834;
                  puVar4 = PTR_PTR_1126d3100;
                  _objc_alloc(PTR_PTR_1126d3100);
                  func_0x00010bf4cca0(ppuVar15);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar5 = ppuVar13;
                  func_0x00010c0c5580(ppuVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0038c0(puVar4,param_2,ppuVar15,ppuVar5);
                  func_0x00010befa120(ppuVar1,param_2,puVar4);
                  _objc_release(puVar4);
                  ppuVar3 = ppuVar15;
                }
                _objc_release(ppuVar5);
                _objc_release(ppuVar3);
              }
LAB_106eb9834:
              _objc_release(ppuVar6);
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar2 != ppuVar16);
            puVar11 = &uStack_650;
            puVar12 = auStack_610;
            ppuVar2 = ppuVar14;
            func_0x00010bf52a60();
          } while (ppuVar2 != (undefined **)0x0);
        }
        _objc_release(ppuVar14);
        ppuVar2 = ppuVar1;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_590) {
          ___stack_chk_fail();
          _objc_retain(puVar11);
          _objc_retain(puVar12);
          puVar4 = PTR_PTR_1126d2f58;
          puVar8 = puVar11;
          func_0x00010c27dd80(puVar11);
          func_0x00010bf443e0(puVar4,param_2,puVar8);
          if (((puVar12 != (undefined8 *)0x0) && (puVar4 != (undefined *)0x5)) &&
             (puVar8 = puVar12, func_0x00010c080760(puVar12,param_2,puVar4),
             ((ulong)puVar8 & 1) == 0)) {
            puVar8 = puVar12;
            func_0x00010be15900(puVar12,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c12a120();
            puVar10 = puVar11;
            func_0x00010c23d0a0();
            if (puVar9 != puVar10) {
              puVar9 = puVar11;
              func_0x00010c23d0a0(puVar11);
              func_0x00010c1ea280(puVar8,param_2,puVar9);
            }
            _objc_release(puVar8);
          }
          _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106eb9174; end: 106eb945b; -[SCSpectaclesMediaListReconciler necessaryDeletionLogicTasks] */

void FUN_106eb9174(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 auStack_420 [16];
  long lStack_3a0;
  undefined **ppuStack_390;
  long lStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  long lStack_260;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar14 = param_1;
  func_0x00010bf52760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_1a0;
    unaff_x25 = &PTR_PTR_1126d2000;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar14);
        }
        unaff_x23 = (undefined **)PTR_PTR_1126d2ff8;
        _objc_alloc();
        func_0x00010c0038a0();
        func_0x00010befa120(ppuVar1,param_2,unaff_x23);
        _objc_release(unaff_x23);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar16 != unaff_x26);
      ppuVar16 = ppuVar14;
      func_0x00010bf52a60(ppuVar14,param_2,&uStack_1b0,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (ppuVar16 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  ppuVar16 = param_1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar16;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    unaff_x27 = *plStack_1e0;
    do {
      ppuVar14 = (undefined **)0x0;
      do {
        if (*plStack_1e0 != unaff_x27) {
          _objc_enumerationMutation(ppuVar16);
        }
        unaff_x24 = *(undefined ***)(lStack_1e8 + (long)ppuVar14 * 8);
        ppuVar2 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x24;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppuVar2;
        func_0x00010c0e00e0(ppuVar2,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        _objc_release(ppuVar2);
        unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
        ppuVar2 = unaff_x24;
        func_0x00010c27dd80(unaff_x24);
        puVar3 = (undefined *)unaff_x25;
        func_0x00010bf443e0(unaff_x25,param_2,ppuVar2);
        if (unaff_x23 != (undefined **)0x0) {
          if (puVar3 == (undefined *)0x5) {
            ppuVar2 = unaff_x24;
            func_0x00010c27dd80();
            if (ppuVar2 == (undefined **)0xb) {
              ppuVar4 = unaff_x23;
              func_0x00010c070dc0(unaff_x23,param_2,1);
              ppuVar2 = &PTR_PTR_1126d3088;
              if (((ulong)ppuVar4 & 1) != 0) goto LAB_106eb93a0;
            }
          }
          else {
            ppuVar4 = unaff_x23;
            func_0x00010c080760(unaff_x23,param_2,puVar3);
            ppuVar2 = &PTR_PTR_1126d30f8;
            if ((int)ppuVar4 != 0) {
LAB_106eb93a0:
              unaff_x24 = (undefined **)*ppuVar2;
              _objc_alloc();
              func_0x00010c002b20();
              func_0x00010befa120(ppuVar1,param_2,unaff_x24);
              _objc_release(unaff_x24);
            }
          }
        }
        _objc_release(unaff_x23);
        ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      } while (ppuVar13 != ppuVar14);
      ppuVar13 = ppuVar16;
      func_0x00010bf52a60(ppuVar16,param_2,&uStack_1f0,auStack_170,0x10);
      unaff_x22 = 0;
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar16);
  ppuVar13 = ppuVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_106eb945c;
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_250 = ppuVar16;
    lStack_248 = unaff_x27;
    ppuStack_240 = unaff_x26;
    ppuStack_238 = unaff_x25;
    ppuStack_230 = unaff_x24;
    ppuStack_228 = unaff_x23;
    uStack_220 = unaff_x22;
    ppuStack_218 = ppuVar14;
    ppuStack_210 = ppuVar13;
    ppuStack_208 = ppuVar1;
    puStack_200 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    ppuVar14 = ppuVar2;
    ppuStack_328 = ppuVar4;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar14;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x27 = *plStack_310;
      ppuVar16 = &PTR_PTR_1126d2000;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_310 != unaff_x27) {
            _objc_enumerationMutation(ppuVar14);
          }
          unaff_x24 = *(undefined ***)(lStack_318 + (long)ppuVar13 * 8);
          ppuVar4 = ppuVar2;
          func_0x00010bf4c560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010bf4cca0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar4;
          func_0x00010c0e00e0(ppuVar4,param_2,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(ppuVar4);
          unaff_x25 = (undefined **)PTR_PTR_1126d2f58;
          ppuVar4 = unaff_x24;
          func_0x00010c27dd80(unaff_x24);
          ppuVar5 = unaff_x25;
          func_0x00010bf443e0(unaff_x25,param_2,ppuVar4);
          if ((unaff_x23 != (undefined **)0x0 && ppuVar5 != (undefined **)0x5) &&
             (ppuVar4 = unaff_x23, func_0x00010c070dc0(unaff_x23,param_2,ppuVar5),
             unaff_x24 = ppuVar5, ((ulong)ppuVar4 & 1) == 0)) {
            unaff_x24 = ppuVar2;
            func_0x00010be5b080(ppuVar2,param_2,unaff_x23,ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x00010befa120(ppuStack_328,param_2,unaff_x24);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar1 != ppuVar13);
        ppuVar1 = ppuVar14;
        func_0x00010bf52a60(ppuVar14,param_2,&uStack_320,auStack_2e0,0x10);
        unaff_x22 = 0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    ppuVar1 = ppuStack_328;
    ppuVar13 = ppuStack_328;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
      ___stack_chk_fail();
      ppuStack_348 = ppuVar1;
      pcStack_338 = FUN_106eb9664;
      lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_390 = ppuVar16;
      lStack_388 = unaff_x27;
      ppuStack_380 = unaff_x26;
      ppuStack_378 = unaff_x25;
      ppuStack_370 = unaff_x24;
      ppuStack_368 = unaff_x23;
      uStack_360 = unaff_x22;
      ppuStack_358 = ppuVar14;
      ppuStack_350 = ppuVar13;
      ppuStack_340 = &puStack_200;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      ppuVar14 = ppuVar2;
      func_0x00010c0c5580();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = &uStack_460;
      puVar12 = auStack_420;
      ppuVar16 = ppuVar14;
      func_0x00010bf52a60();
      if (ppuVar16 != (undefined **)0x0) {
        lVar17 = *plStack_450;
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if (*plStack_450 != lVar17) {
              _objc_enumerationMutation(ppuVar14);
            }
            ppuVar15 = *(undefined ***)(lStack_458 + (long)ppuVar13 * 8);
            ppuVar4 = ppuVar2;
            func_0x00010bf4c560();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar15;
            func_0x00010bf4cca0(ppuVar15);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar4;
            func_0x00010c0e00e0(ppuVar4,param_2,ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
            _objc_release(ppuVar4);
            if (ppuVar6 == (undefined **)0x0) {
              ppuVar4 = ppuVar2;
              func_0x00010bf52760();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar15;
              func_0x00010bf4cca0(ppuVar15);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar4;
              func_0x00010bf4b900(ppuVar4,param_2,ppuVar5);
              if (((ulong)ppuVar7 & 1) == 0) {
                ppuVar7 = ppuVar15;
                func_0x00010c27dd80();
                _objc_release(ppuVar5);
                _objc_release(ppuVar4);
                if (ppuVar7 != (undefined **)0x6) goto LAB_106eb9834;
                puVar3 = PTR_PTR_1126d3100;
                _objc_alloc(PTR_PTR_1126d3100);
                func_0x00010bf4cca0(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar2;
                func_0x00010c0c5580(ppuVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0038c0(puVar3,param_2,ppuVar15,ppuVar5);
                func_0x00010befa120(ppuVar1,param_2,puVar3);
                _objc_release(puVar3);
                ppuVar4 = ppuVar15;
              }
              _objc_release(ppuVar5);
              _objc_release(ppuVar4);
            }
LAB_106eb9834:
            _objc_release(ppuVar6);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar16 != ppuVar13);
          puVar11 = &uStack_460;
          puVar12 = auStack_420;
          ppuVar16 = ppuVar14;
          func_0x00010bf52a60();
        } while (ppuVar16 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      ppuVar13 = ppuVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a0) {
        ___stack_chk_fail();
        _objc_retain(puVar11);
        _objc_retain(puVar12);
        puVar3 = PTR_PTR_1126d2f58;
        puVar8 = puVar11;
        func_0x00010c27dd80(puVar11);
        func_0x00010bf443e0(puVar3,param_2,puVar8);
        if (((puVar12 != (undefined8 *)0x0) && (puVar3 != (undefined *)0x5)) &&
           (puVar8 = puVar12, func_0x00010c080760(puVar12,param_2,puVar3), ((ulong)puVar8 & 1) == 0)
           ) {
          puVar8 = puVar12;
          func_0x00010be15900(puVar12,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c12a120();
          puVar10 = puVar11;
          func_0x00010c23d0a0();
          if (puVar9 != puVar10) {
            puVar9 = puVar11;
            func_0x00010c23d0a0(puVar11);
            func_0x00010c1ea280(puVar8,param_2,puVar9);
          }
          _objc_release(puVar8);
        }
        _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar11);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 106eb945c; end: 106eb9663; -[SCSpectaclesMediaListReconciler necessaryMediaTransferTasks] */

void FUN_106eb945c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar15;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  long lVar16;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 auStack_230 [16];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
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
  puVar2 = param_1;
  puStack_138 = puVar1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &PTR_PTR_1126d2000;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)puVar13 * 8);
        puVar3 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x24;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        _objc_release(puVar3);
        unaff_x25 = PTR_PTR_1126d2f58;
        puVar3 = unaff_x24;
        func_0x00010c27dd80(unaff_x24);
        puVar14 = unaff_x25;
        func_0x00010bf443e0(unaff_x25,param_2,puVar3);
        if ((unaff_x23 != (undefined *)0x0 && puVar14 != (undefined *)0x5) &&
           (puVar3 = unaff_x23, func_0x00010c070dc0(unaff_x23,param_2,puVar14), unaff_x24 = puVar14,
           ((ulong)puVar3 & 1) == 0)) {
          unaff_x24 = param_1;
          func_0x00010be5b080(param_1,param_2,unaff_x23,puVar14);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 != (undefined *)0x0) {
            func_0x00010befa120(puStack_138,param_2,unaff_x24);
          }
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar1 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar1 = puStack_138;
  puVar13 = puStack_138;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_158 = puVar1;
    pcStack_148 = FUN_106eb9664;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_1a0 = unaff_x28;
    lStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    puStack_168 = puVar2;
    puStack_160 = puVar13;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar2 = puVar3;
    func_0x00010c0c5580();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_270;
    puVar12 = auStack_230;
    puVar13 = puVar2;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar16 = *plStack_260;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar16) {
            _objc_enumerationMutation(puVar2);
          }
          puVar15 = *(undefined **)(lStack_268 + (long)puVar14 * 8);
          puVar4 = puVar3;
          func_0x00010bf4c560();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar15;
          func_0x00010bf4cca0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0e00e0(puVar4,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (puVar6 == (undefined *)0x0) {
            puVar4 = puVar3;
            func_0x00010bf52760();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar15;
            func_0x00010bf4cca0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            func_0x00010bf4b900(puVar4,param_2,puVar5);
            if (((ulong)puVar7 & 1) == 0) {
              puVar7 = puVar15;
              func_0x00010c27dd80();
              _objc_release(puVar5);
              _objc_release(puVar4);
              if (puVar7 != (undefined *)0x6) goto LAB_106eb9834;
              puVar4 = PTR_PTR_1126d3100;
              _objc_alloc(PTR_PTR_1126d3100);
              func_0x00010bf4cca0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010c0c5580(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0038c0(puVar4,param_2,puVar15,puVar5);
              func_0x00010befa120(puVar1,param_2,puVar4);
              _objc_release(puVar4);
              puVar4 = puVar15;
            }
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
LAB_106eb9834:
          _objc_release(puVar6);
          puVar14 = puVar14 + 1;
        } while (puVar13 != puVar14);
        puVar11 = &uStack_270;
        puVar12 = auStack_230;
        puVar13 = puVar2;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar13 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      _objc_retain(puVar11);
      _objc_retain(puVar12);
      puVar1 = PTR_PTR_1126d2f58;
      puVar8 = puVar11;
      func_0x00010c27dd80(puVar11);
      func_0x00010bf443e0(puVar1,param_2,puVar8);
      if (((puVar12 != (undefined8 *)0x0) && (puVar1 != (undefined *)0x5)) &&
         (puVar8 = puVar12, func_0x00010c080760(puVar12,param_2,puVar1), ((ulong)puVar8 & 1) == 0))
      {
        puVar8 = puVar12;
        func_0x00010be15900(puVar12,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c12a120();
        puVar10 = puVar11;
        func_0x00010c23d0a0();
        if (puVar9 != puVar10) {
          puVar9 = puVar11;
          func_0x00010c23d0a0(puVar11);
          func_0x00010c1ea280(puVar8,param_2,puVar9);
        }
        _objc_release(puVar8);
      }
      _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106eb9664; end: 106eb98cb; -[SCSpectaclesMediaListReconciler necessaryMetadataTasks] */

void FUN_106eb9664(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  uVar2 = param_1;
  func_0x00010c0c5580();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_130;
  puVar13 = auStack_f0;
  uVar3 = uVar2;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar16 = *plStack_120;
    do {
      uVar14 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(uVar2);
        }
        uVar15 = *(ulong *)(lStack_128 + uVar14 * 8);
        uVar4 = param_1;
        func_0x00010bf4c560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar15;
        func_0x00010bf4cca0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0e00e0(uVar4,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (uVar6 == 0) {
          uVar4 = param_1;
          func_0x00010bf52760();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar15;
          func_0x00010bf4cca0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010bf4b900(uVar4,param_2,uVar5);
          if ((uVar7 & 1) == 0) {
            uVar7 = uVar15;
            func_0x00010c27dd80();
            _objc_release(uVar5);
            _objc_release(uVar4);
            if (uVar7 != 6) goto LAB_106eb9834;
            puVar8 = PTR_PTR_1126d3100;
            _objc_alloc(PTR_PTR_1126d3100);
            func_0x00010bf4cca0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_1;
            func_0x00010c0c5580(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0038c0(puVar8,param_2,uVar15,uVar5);
            func_0x00010befa120(puVar1,param_2,puVar8);
            _objc_release(puVar8);
            uVar4 = uVar15;
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
LAB_106eb9834:
        _objc_release(uVar6);
        uVar14 = uVar14 + 1;
      } while (uVar3 != uVar14);
      puVar12 = &uStack_130;
      puVar13 = auStack_f0;
      uVar3 = uVar2;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  puVar8 = puVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  puVar1 = PTR_PTR_1126d2f58;
  puVar9 = puVar12;
  func_0x00010c27dd80(puVar12);
  func_0x00010bf443e0(puVar1,param_2,puVar9);
  if (((puVar13 != (undefined8 *)0x0) && (puVar1 != (undefined *)0x5)) &&
     (puVar9 = puVar13, func_0x00010c080760(puVar13,param_2,puVar1), ((ulong)puVar9 & 1) == 0)) {
    puVar9 = puVar13;
    func_0x00010be15900(puVar13,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c12a120();
    puVar11 = puVar12;
    func_0x00010c23d0a0();
    if (puVar10 != puVar11) {
      puVar10 = puVar12;
      func_0x00010c23d0a0(puVar12);
      func_0x00010c1ea280(puVar9,param_2,puVar10);
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106eb98cc; end: 106eb9997; -[SCSpectaclesMediaListReconciler _updateFilesizeIfNecessaryForFile:content:] */

void FUN_106eb98cc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d2f58;
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010bf443e0(puVar2,param_2,uVar1);
  if (((param_4 != 0) && (puVar2 != (undefined *)0x5)) &&
     (uVar1 = param_4, func_0x00010c080760(param_4,param_2,puVar2), (uVar1 & 1) == 0)) {
    uVar1 = param_4;
    func_0x00010be15900(param_4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c12a120();
    uVar4 = param_3;
    func_0x00010c23d0a0();
    if (uVar3 != uVar4) {
      uVar3 = param_3;
      func_0x00010c23d0a0(param_3);
      func_0x00010c1ea280(uVar1,param_2,uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb9998; end: 106eb9a57; -[SCSpectaclesMediaListReconciler _containsFileType:contentName:] */

undefined8
FUN_106eb9998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c12a180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_106eb9a58;
  puStack_40 = &UNK_110982228;
  uVar2 = uVar1;
  uStack_38 = param_3;
  func_0x00010bf04920(uVar1,param_2,&puStack_58);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106eb9a58; end: 106eb9a87;  */

bool FUN_106eb9a58(long param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 106eb9a88; end: 106eb9ae3; -[SCSpectaclesMediaListReconciler _isContentFullySynced:] */

uint FUN_106eb9a88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w20;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (lVar1 != 1) goto LAB_106eb9acc;
    uVar2 = 2;
  }
  lVar1 = param_3;
  func_0x00010c080760(param_3,param_2,uVar2);
  unaff_w20 = (uint)lVar1;
LAB_106eb9acc:
  _objc_release(param_3);
  return unaff_w20 & 1;
}



/* Entry: 106eb9ae4; end: 106eb9b53; -[SCSpectaclesMediaListReconciler _lowTrafficMediaTaskForContent:component:] */

void FUN_106eb9ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    ppuVar2 = &PTR_PTR_1126d3108;
  }
  else {
    if (param_4 != 3) {
      puVar1 = (undefined *)0x0;
      goto LAB_106eb9b3c;
    }
    ppuVar2 = &PTR_PTR_1126d3110;
  }
  puVar1 = *ppuVar2;
  _objc_alloc(puVar1);
  func_0x00010c002b20();
LAB_106eb9b3c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106eb9b54; end: 106eb9c87; -[SCSpectaclesMediaListReconciler _sanityCheckForMediaList] */

long FUN_106eb9b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010c12a180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010bde7960(param_1,param_2,6,uVar3);
        func_0x00010bde7960(param_1,param_2,1,uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + 8);
}



/* Entry: 106eb9c88; end: 106eb9c8f; -[SCSpectaclesMediaListReconciler mediaList] */

undefined8 FUN_106eb9c88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106eb9c90; end: 106eb9cbf; -[SCSpectaclesMediaListReconciler setMediaList:] */

void FUN_106eb9c90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb9cc0; end: 106eb9cc7; -[SCSpectaclesMediaListReconciler contentList] */

undefined8 FUN_106eb9cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106eb9cc8; end: 106eb9cf7; -[SCSpectaclesMediaListReconciler setContentList:] */

void FUN_106eb9cc8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb9cf8; end: 106eb9cff; -[SCSpectaclesMediaListReconciler contentForName] */

undefined8 FUN_106eb9cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eb9d00; end: 106eb9d2f; -[SCSpectaclesMediaListReconciler setContentForName:] */

void FUN_106eb9d00(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb9d30; end: 106eb9d37; -[SCSpectaclesMediaListReconciler remoteFilesForName] */

undefined8 FUN_106eb9d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eb9d38; end: 106eb9d67; -[SCSpectaclesMediaListReconciler setRemoteFilesForName:] */

void FUN_106eb9d38(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eb9d68; end: 106eb9d6f; -[SCSpectaclesMediaListReconciler corruptedContentNames] */

undefined8 FUN_106eb9d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106eb9d70; end: 106eb9d9f; -[SCSpectaclesMediaListReconciler setCorruptedContentNames:] */

void FUN_106eb9d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb9da0; end: 106eb9df3; -[SCSpectaclesMediaListReconciler .cxx_destruct] */

void FUN_106eb9da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eb9df4; end: 106eb9edb; -[SCSpectaclesMutableTransferSession initWithDevice:transferType:] */

undefined1 *
FUN_106eb9df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7ae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106eb9edc; end: 106eba147; -[SCSpectaclesMutableTransferSession _groupedContentForTransferTasks:] */

void FUN_106eb9edc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lStack_128 + (long)puVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bf4c0c0();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 != 5) {
          lVar3 = lVar6;
          func_0x00010bf4c0c0(lVar6);
          func_0x00010c0df840(puVar4,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (puVar5 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar3 = lVar6;
            func_0x00010bf4c0c0(lVar6);
            func_0x00010c0df840(puVar4,param_2,lVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,puVar5,puVar4);
            _objc_release(puVar4);
            _objc_release(puVar5);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar3 = lVar6;
          func_0x00010bf4c0c0(lVar6);
          func_0x00010c0df840(puVar4,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5,param_2,lVar6);
          _objc_release(lVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = param_3 + 8;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c26a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf00cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24aa0(param_3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106eba148; end: 106eba1eb; -[SCSpectaclesMutableTransferSession _untransferredContentByComponent] */

void FUN_106eba148(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf638a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26a8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf00cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24aa0(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106eba1ec; end: 106eba297; -[SCSpectaclesMutableTransferSession _transferredContentByComponent] */

void FUN_106eba1ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfaea20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110982268);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24aa0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106eba298; end: 106eba2db; -[SCSpectaclesMutableTransferSession _currentlyTransferringContent] */

void FUN_106eba298(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf60780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eba2dc; end: 106eba33f; -[SCSpectaclesMutableTransferSession _component] */

long FUN_106eba2dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf60780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 5;
  }
  else {
    func_0x00010bf60780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf4c0c0();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 106eba340; end: 106eba3db; -[SCSpectaclesMutableTransferSession _progress] */

undefined8 FUN_106eba340(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010bf60780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf60780(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3a00(param_2);
    func_0x00010bf88ee0(lVar2,param_3,param_2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 106eba3dc; end: 106eba49f; -[SCSpectaclesMutableTransferSession markTaskComplete:] */

void FUN_106eba3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf638a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26a8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eba4a0; end: 106eba503; -[SCSpectaclesMutableTransferSession completedTasks] */

void FUN_106eba4a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eba504; end: 106eba60f; -[SCSpectaclesMutableTransferSession transferSession] */

void FUN_106eba504(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_PTR_1126d3118;
  _objc_alloc();
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = param_1;
  func_0x00010bed2240(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010becebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bdf75e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bde3a00();
  func_0x00010be82e40(param_1);
  func_0x00010c00bd00(puVar3,param_2,lVar4,uVar9,uVar10,uVar2,uVar1,lVar5,lVar6,lVar7,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106eba610; end: 106eba617; -[SCSpectaclesMutableTransferSession transferChannel] */

undefined8 FUN_106eba610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106eba618; end: 106eba61f; -[SCSpectaclesMutableTransferSession setTransferChannel:] */

void FUN_106eba618(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106eba620; end: 106eba627; -[SCSpectaclesMutableTransferSession currentTransferTask] */

undefined8 FUN_106eba620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106eba628; end: 106eba657; -[SCSpectaclesMutableTransferSession setCurrentTransferTask:] */

void FUN_106eba628(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eba658; end: 106eba65f; -[SCSpectaclesMutableTransferSession batchID] */

undefined8 FUN_106eba658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106eba660; end: 106eba6af; -[SCSpectaclesMutableTransferSession .cxx_destruct] */

void FUN_106eba660(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106eba6b0; end: 106eba803; -[SCSpectaclesTaskExecutor initWithClient:taskQueue:transferChannel:delegate:] */

undefined8 *
FUN_106eba6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_6);
  puStack_50 = PTR_PTR_1126f7ae8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    func_0x00010c1c7280(puVar1[1]);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    puVar3 = auStack_48;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 4,puVar3);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[2]);
    func_0x00010bddd900(puVar1);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106eba804; end: 106eba8ab; -[SCSpectaclesTaskExecutor cancel] */

void FUN_106eba804(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eba8ac; end: 106eba8db;  */

void FUN_106eba8ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eba8dc; end: 106eba9bf; -[SCSpectaclesTaskExecutor cancelTaskIfRunning:] */

void FUN_106eba8dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) == param_3) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106eba9c0; end: 106ebaa1b;  */

void FUN_106eba9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x30) == *(long *)(param_1 + 0x20)) {
      *(undefined8 *)(lVar1 + 0x30) = 0;
      _objc_release();
      func_0x00010becf280(lVar1,param_2,0);
      func_0x00010bddd900(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ebaa1c; end: 106ebaa23; -[SCSpectaclesTaskExecutor _transitionToState:] */

void FUN_106ebaa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106ebaa24; end: 106ebab0f; -[SCSpectaclesTaskExecutor communicationClient:didReceiveNetworkResponse:] */

void FUN_106ebaa24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ebab10; end: 106ebac7b;  */

void FUN_106ebab10(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [8];
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) == 2)) {
    func_0x00010becf280(lVar3);
    iVar2 = (int)*(undefined8 *)(lVar3 + 0x30);
    func_0x00010bfd2500();
    if (iVar2 == 0) {
      uVar5 = *(ulong *)(lVar3 + 0x30);
      uVar1 = *(long *)(lVar3 + 0x38) + 1;
      *(ulong *)(lVar3 + 0x38) = uVar1;
      func_0x00010c0c2a80();
      if (uVar5 < uVar1) {
        func_0x00010be5d360(lVar3);
        func_0x00010becf280(lVar3);
        func_0x00010be819c0(lVar3);
      }
      else {
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        _objc_copyWeak(auStack_38,param_1 + 0x28);
        func_0x00010c137640(*(undefined8 *)(lVar3 + 0x30));
        func_0x00010c0f7fe0(uVar6);
        _objc_destroyWeak(auStack_38);
      }
    }
    else {
      lVar4 = lVar3 + 0x20;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c26a780();
      _objc_release(lVar4);
      lVar4 = *(long *)(lVar3 + 0x40) + -1;
      *(long *)(lVar3 + 0x40) = lVar4;
      if (lVar4 == 0) {
        func_0x00010becf280(lVar3);
        func_0x00010be81960(lVar3);
      }
      else {
        func_0x00010becf280(lVar3);
      }
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106ebac7c; end: 106ebacc7;  */

void FUN_106ebac7c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 3)) {
    func_0x00010becf280(param_1,param_2,1);
    func_0x00010be81960(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ebacc8; end: 106ebad8b; -[SCSpectaclesTaskExecutor communicationClientDidTimeOut:] */

void FUN_106ebacc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ebad8c; end: 106ebae2b;  */

void FUN_106ebad8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 2)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8aeb8,2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26a740(lVar1,param_2,param_1,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010becf280(param_1,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ebae2c; end: 106ebaed3; -[SCSpectaclesTaskExecutor _checkForTasksIfIdle] */

void FUN_106ebae2c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ebaed4; end: 106ebaf1b;  */

void FUN_106ebaed4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    func_0x00010becf280(param_1,param_2,1);
    func_0x00010be819c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ebaf1c; end: 106ebafcb; -[SCSpectaclesTaskExecutor _processNextTask] */

void FUN_106ebaf1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0d9f80(lVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c26a7a0();
    _objc_release(lVar3);
    func_0x00010becf280(param_1,param_2,0);
  }
  else {
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c26a760();
    _objc_release(lVar3);
    func_0x00010be81960(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ebafcc; end: 106ebb0ff; -[SCSpectaclesTaskExecutor _processNextRequestForCurrentTask] */

/* WARNING: Possible PIC construction at 0x000106ebb030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106ebb034) */

void FUN_106ebafcc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c072f20();
  lVar3 = *(long *)(param_1 + 0x30);
  if ((uVar2 & 1) == 0) {
    func_0x00010c0d9d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010c072f20();
    if ((uVar2 & 1) == 0) {
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x00010bf9c300();
        *(long *)(param_1 + 0x40) = lVar4;
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010c06f000();
        if (iVar1 == 0) {
          lVar4 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar4);
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26a740(lVar4);
          _objc_release(puVar5);
          _objc_release(lVar4);
        }
        else {
          func_0x00010c15c6e0(*(undefined8 *)(param_1 + 8));
        }
        func_0x00010becf280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
      goto LAB_106ebb06c;
    }
  }
  else {
    func_0x00010c072f20();
    if ((int)lVar3 == 0) {
LAB_106ebb06c:
      func_0x00010be5d360(param_1);
      goto code_r0x00010be819c0;
    }
  }
  func_0x00010be5d340(param_1);
code_r0x00010be819c0:
                    /* WARNING: Could not recover jumptable at 0x00010be819d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextTask_11257e010);
  return;
}



/* Entry: 106ebb100; end: 106ebb14f; -[SCSpectaclesTaskExecutor _markCurrentTaskComplete] */

void FUN_106ebb100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e960(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x30));
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c26a700();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ebb150; end: 106ebb1c7; -[SCSpectaclesTaskExecutor _markCurrentTaskFailedWithError:] */

void FUN_106ebb150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c12e960(uVar2,param_2,uVar3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c26a720();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ebb1c8; end: 106ebb1cb; -[SCSpectaclesTaskExecutor taskQueue:didAddNewTaskToQueue:] */

void FUN_106ebb1c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkForTasksIfIdle_112554fe0);
  return;
}



/* Entry: 106ebb1cc; end: 106ebb1d3; -[SCSpectaclesTaskExecutor transferChannel] */

undefined8 FUN_106ebb1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ebb1d4; end: 106ebb223; -[SCSpectaclesTaskExecutor .cxx_destruct] */

void FUN_106ebb1d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ebb224; end: 106ebb6cb;  */

long * FUN_106ebb224(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  long lVar8;
  undefined8 unaff_x27;
  long lVar9;
  undefined **unaff_x28;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  long lStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long *plStack_378;
  long *plStack_370;
  long lStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  undefined8 uStack_228;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  plVar1 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_1);
  lStack_218 = param_1;
  func_0x00010bf52a60();
  lStack_208 = param_1;
  if (param_1 != 0) {
    lStack_210 = *plStack_1a0;
    unaff_x28 = &PTR_PTR_1126d3000;
    lStack_208 = param_1;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lStack_210) {
          _objc_enumerationMutation(lStack_218);
        }
        puVar2 = PTR_PTR_1126d2f58;
        unaff_x22 = *(undefined **)(lStack_1a8 + lVar6 * 8);
        _objc_retain(unaff_x22);
        _objc_opt_class(puVar2);
        puVar7 = unaff_x22;
        _objc_opt_isKindOfClass(unaff_x22,puVar2);
        unaff_x23 = unaff_x22;
        if (((ulong)puVar7 & 1) == 0) {
          unaff_x23 = (undefined *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x22);
        if (unaff_x23 != (undefined *)0x0) {
          puVar2 = unaff_x22;
          func_0x00010c27dd80();
          ppuVar5 = &PTR_PTR_1126d3120;
          if (puVar2 == (undefined *)0x1) {
LAB_106ebb34c:
            puVar2 = *ppuVar5;
            _objc_alloc(puVar2);
            func_0x00010c002d00();
            func_0x00010befa120(plVar1);
            _objc_release(puVar2);
          }
          else {
            puVar2 = unaff_x22;
            func_0x00010c27dd80();
            if (puVar2 == (undefined *)0x0) {
              ppuVar5 = &PTR_PTR_1126d3128;
              goto LAB_106ebb34c;
            }
          }
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          unaff_x24 = unaff_x22;
          puStack_200 = unaff_x23;
          lStack_1f8 = lVar6;
          func_0x00010bfc0dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x24;
          func_0x00010bf52a60();
          if (puVar2 != (undefined *)0x0) {
            lVar6 = *plStack_1e0;
            do {
              puVar7 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar6) {
                  _objc_enumerationMutation(unaff_x24);
                }
                lVar8 = *(long *)(lStack_1e8 + (long)puVar7 * 8);
                func_0x00010bf0b760();
                if (lVar8 == -0x4524111) {
LAB_106ebb400:
                  func_0x00010c137620(unaff_x22);
LAB_106ebb408:
                  unaff_x27 = 3;
                }
                else {
                  if (lVar8 == 4) goto LAB_106ebb408;
                  if (lVar8 == 3) goto LAB_106ebb400;
                  unaff_x27 = 5;
                }
                unaff_x26 = PTR_PTR_1126d3130;
                _objc_alloc();
                func_0x00010c002b40();
                func_0x00010befa120(plVar1);
                _objc_release(unaff_x26);
                puVar7 = puVar7 + 1;
              } while (puVar2 != puVar7);
              puVar2 = unaff_x24;
              func_0x00010bf52a60();
              unaff_x25 = 0;
            } while (puVar2 != (undefined *)0x0);
          }
          _objc_release(unaff_x24);
          lVar6 = lStack_1f8;
          unaff_x23 = puStack_200;
        }
        _objc_release(unaff_x23);
        lVar6 = lVar6 + 1;
      } while (lVar6 != lStack_208);
      lVar6 = lStack_218;
      func_0x00010bf52a60();
      lStack_208 = lVar6;
    } while (lVar6 != 0);
  }
  lVar6 = lStack_218;
  _objc_release(lStack_218);
  plVar3 = plVar1;
  func_0x00010bf51e00();
  _objc_release(plVar1);
  lVar8 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_238 = lVar6;
    uStack_228 = 0x106ebb518;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_280 = unaff_x28;
    uStack_278 = unaff_x27;
    puStack_270 = unaff_x26;
    uStack_268 = unaff_x25;
    puStack_260 = unaff_x24;
    puStack_258 = unaff_x23;
    puStack_250 = unaff_x22;
    plStack_248 = plVar3;
    plStack_240 = plVar1;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain();
    plVar1 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    puStack_340 = (undefined8 *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    _objc_retain(lVar8);
    lVar6 = lVar8;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      unaff_x24 = (undefined *)*puStack_340;
      do {
        lVar9 = 0;
        do {
          if ((undefined *)*puStack_340 != unaff_x24) {
            _objc_enumerationMutation(lVar8);
          }
          puVar2 = PTR_PTR_1126d2f58;
          unaff_x22 = *(undefined **)(lStack_348 + lVar9 * 8);
          _objc_retain(unaff_x22);
          _objc_opt_class(puVar2);
          puVar7 = unaff_x22;
          _objc_opt_isKindOfClass(unaff_x22,puVar2);
          unaff_x23 = unaff_x22;
          if (((ulong)puVar7 & 1) == 0) {
            unaff_x23 = (undefined *)0x0;
          }
          _objc_retain(unaff_x23);
          _objc_release(unaff_x22);
          if ((unaff_x23 != (undefined *)0x0) &&
             (puVar2 = unaff_x22, func_0x00010c0c6c20(), (int)puVar2 == 0xc)) {
            unaff_x22 = PTR_PTR_1126d3138;
            _objc_alloc();
            func_0x00010c002b20();
            func_0x00010befa120(plVar1);
            _objc_release(unaff_x22);
          }
          _objc_release(unaff_x23);
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar6 = lVar8;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar8);
    plVar3 = plVar1;
    func_0x00010bf51e00();
    _objc_release(plVar1);
    lVar6 = lVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      pcStack_358 = FUN_106ebb6cc;
      puStack_398 = PTR_PTR_1126f7af0;
      plVar4 = &lStack_3a0;
      lStack_3a0 = lVar6;
      puStack_390 = unaff_x24;
      puStack_388 = unaff_x23;
      puStack_380 = unaff_x22;
      plStack_378 = plVar3;
      plStack_370 = plVar1;
      lStack_368 = lVar8;
      ppuStack_360 = &puStack_230;
      _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
      if (plVar4 != (long *)0x0) {
        puVar2 = PTR_PTR_1126d3140;
        _objc_opt_new();
        lVar6 = plVar4[1];
        plVar4[1] = (long)puVar2;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        lVar6 = plVar4[2];
        plVar4[2] = (long)puVar2;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        lVar6 = plVar4[3];
        plVar4[3] = (long)puVar2;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        lVar6 = plVar4[4];
        plVar4[4] = (long)puVar2;
        _objc_release(lVar6);
        lVar6 = plVar4[5];
        plVar4[5] = 0;
        _objc_release(lVar6);
        _objc_initWeak(auStack_3a8,plVar4);
        puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        _objc_alloc();
        _objc_copyWeak(auStack_3b0,auStack_3a8);
        func_0x00010c020aa0();
        lVar6 = plVar4[6];
        plVar4[6] = (long)puVar2;
        _objc_release(lVar6);
        plVar1 = plVar4;
        func_0x00010bdfb080();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = plVar4[7];
        plVar4[7] = (long)plVar1;
        _objc_release(lVar6);
        plVar1 = plVar4;
        func_0x00010bdfb080();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = plVar4[8];
        plVar4[8] = (long)plVar1;
        _objc_release(lVar6);
        plVar1 = plVar4;
        func_0x00010bdfb080();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = plVar4[9];
        plVar4[9] = (long)plVar1;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        _objc_alloc();
        func_0x00010c020aa0();
        lVar6 = plVar4[0xb];
        plVar4[0xb] = (long)puVar2;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        _objc_alloc();
        func_0x00010c020aa0();
        lVar6 = plVar4[0xc];
        plVar4[0xc] = (long)puVar2;
        _objc_release(lVar6);
        puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        _objc_alloc();
        func_0x00010c020aa0();
        lVar6 = plVar4[10];
        plVar4[10] = (long)puVar2;
        _objc_release(lVar6);
        _objc_destroyWeak(auStack_3b0);
        _objc_destroyWeak(auStack_3a8);
      }
      return plVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return plVar3;
}



/* Entry: 106ebb6cc; end: 106ebb94f; -[SCSpectaclesTaskQueue initWithSortingInDescendingOrder:] */

undefined8 * FUN_106ebb6cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f7af0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3140;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_alloc();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c020aa0();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bdfb080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bdfb080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bdfb080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_alloc();
    func_0x00010c020aa0();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_alloc();
    func_0x00010c020aa0();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    _objc_alloc();
    func_0x00010c020aa0();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return puVar1;
}



/* Entry: 106ebb950; end: 106ebbaef;  */

undefined * FUN_106ebb950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0c9460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0c9460(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf4bc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0c9460(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf433a0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar6;
}



/* Entry: 106ebbaf0; end: 106ebbcaf;  */

undefined * FUN_106ebbaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c26f500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c26f500(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf43460(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 106ebbcb0; end: 106ebbe03;  */

undefined * FUN_106ebbcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010c27dd80(param_2);
    func_0x00010c27dd80(param_3);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf433a0(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 106ebbe04; end: 106ebc15b; -[SCSpectaclesTaskQueue nextTaskForTransferChannel:] */

undefined * FUN_106ebbe04(long param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *unaff_x22;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 auStack_648 [128];
  long lStack_5c8;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_418 [128];
  undefined1 auStack_398 [128];
  long lStack_318;
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
  long lStack_68;
  
  puVar4 = &uStack_2b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar2 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_230;
  lVar10 = lVar2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar12 = *plStack_220;
    do {
      lVar16 = 0;
      do {
        if (*plStack_220 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x22 = *(undefined **)(lStack_228 + lVar16 * 8);
        puVar13 = unaff_x22;
        func_0x00010c27a200();
        if (puVar13 == param_3) {
          _objc_retain(unaff_x22);
          bVar1 = false;
          goto LAB_106ebbf00;
        }
        lVar16 = lVar16 + 1;
      } while (lVar10 != lVar16);
      puVar9 = &uStack_230;
      lVar10 = lVar2;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  bVar1 = true;
LAB_106ebbf00:
  _objc_release(lVar2);
  _objc_sync_exit(lVar17);
  lVar2 = lVar17;
  _objc_release();
  puVar13 = unaff_x22;
  if (bVar1) {
    lVar17 = param_1;
    func_0x00010c0db320();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lVar2 = param_1;
    func_0x00010c0db320();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_270;
    lVar10 = lVar2;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar12 = *plStack_260;
      do {
        lVar16 = 0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          puVar13 = *(undefined **)(lStack_268 + lVar16 * 8);
          puVar3 = puVar13;
          func_0x00010c27a200();
          if (puVar3 == param_3) {
            _objc_retain(puVar13);
            bVar1 = false;
            goto LAB_106ebbfe8;
          }
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        puVar9 = &uStack_270;
        lVar10 = lVar2;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    bVar1 = true;
    puVar13 = unaff_x22;
LAB_106ebbfe8:
    _objc_release(lVar2);
    _objc_sync_exit(lVar17);
    lVar2 = lVar17;
    _objc_release();
    if (bVar1) {
      lVar17 = param_1;
      func_0x00010c0b5a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      func_0x00010c0b5a00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar10 = *plStack_2a0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_2a0 != lVar10) {
              _objc_enumerationMutation(param_1);
            }
            puVar13 = *(undefined **)(lStack_2a8 + lVar12 * 8);
            puVar3 = puVar13;
            func_0x00010c27a200();
            if (puVar3 == param_3) {
              _objc_retain(puVar13);
              goto LAB_106ebc0c8;
            }
            lVar12 = lVar12 + 1;
          } while (lVar2 != lVar12);
          lVar2 = param_1;
          puVar4 = &uStack_2b0;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      puVar13 = (undefined *)0x0;
LAB_106ebc0c8:
      _objc_release(param_1);
      _objc_sync_exit(lVar17);
      lVar2 = lVar17;
      _objc_release();
      puVar9 = puVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(lVar17);
    __Unwind_Resume();
    puVar4 = &uStack_560;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2;
    func_0x00010bfe2f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    lStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    plStack_4d0 = (long *)0x0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    lVar10 = lVar2;
    func_0x00010bfe2f60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar16 = *plStack_4d0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_4d0 != lVar16) {
            _objc_enumerationMutation(lVar10);
          }
          puVar14 = *(undefined8 **)(lStack_4d8 + lVar18 * 8);
          puVar11 = puVar14;
          func_0x00010c27a200();
          if (puVar11 == puVar9) {
            func_0x00010befa120(puVar3,param_2,puVar14);
          }
          lVar18 = lVar18 + 1;
        } while (lVar12 != lVar18);
        lVar12 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_4e0,auStack_398,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(lVar10);
    _objc_sync_exit(lVar17);
    _objc_release(lVar17);
    lVar17 = lVar2;
    func_0x00010c0db320(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    lStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    plStack_510 = (long *)0x0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    lVar10 = lVar2;
    func_0x00010c0db320();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar16 = *plStack_510;
      do {
        lVar18 = 0;
        do {
          if (*plStack_510 != lVar16) {
            _objc_enumerationMutation(lVar10);
          }
          puVar14 = *(undefined8 **)(lStack_518 + lVar18 * 8);
          puVar11 = puVar14;
          func_0x00010c27a200();
          if (puVar11 == puVar9) {
            func_0x00010befa120(puVar3,param_2,puVar14);
          }
          lVar18 = lVar18 + 1;
        } while (lVar12 != lVar18);
        lVar12 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_520,auStack_418,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(lVar10);
    _objc_sync_exit(lVar17);
    _objc_release(lVar17);
    lVar17 = lVar2;
    func_0x00010c0b5a00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    lStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    plStack_550 = (long *)0x0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    func_0x00010c0b5a00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar12 = *plStack_550;
      do {
        lVar16 = 0;
        do {
          if (*plStack_550 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          puVar11 = *(undefined8 **)(lStack_558 + lVar16 * 8);
          puVar4 = puVar11;
          func_0x00010c27a200();
          if (puVar4 == puVar9) {
            func_0x00010befa120(puVar3,param_2,puVar11);
          }
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        lVar10 = lVar2;
        puVar4 = &uStack_560;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar2);
    _objc_sync_exit(lVar17);
    _objc_release(lVar17);
    puVar13 = puVar3;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
      ___stack_chk_fail();
      _objc_sync_exit(puVar13);
      __Unwind_Resume();
      lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar3;
      func_0x00010bfe2f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      puVar13 = puVar3;
      func_0x00010bfe2f60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar13;
      func_0x00010bf529e0();
      _objc_release(puVar13);
      if (puVar6 == (undefined *)0x0) {
        _objc_sync_exit(puVar5);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar3;
        func_0x00010c0db320(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_sync_enter();
        lStack_688 = 0;
        uStack_690 = 0;
        uStack_678 = 0;
        plStack_680 = (long *)0x0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_658 = 0;
        uStack_660 = 0;
        puVar6 = puVar3;
        func_0x00010c0db320();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar17 = *plStack_680;
          do {
            puVar19 = (undefined *)0x0;
            do {
              if (*plStack_680 != lVar17) {
                _objc_enumerationMutation(puVar6);
              }
              puVar15 = *(undefined **)(lStack_688 + (long)puVar19 * 8);
              puVar8 = puVar15;
              func_0x00010c27a200();
              if ((undefined8 *)puVar8 == puVar4) {
                func_0x00010befa120(puVar5,param_2,puVar15);
              }
              puVar19 = puVar19 + 1;
            } while (puVar7 != puVar19);
            puVar7 = puVar6;
            func_0x00010bf52a60(puVar6,param_2,&uStack_690,auStack_648,0x10);
          } while (puVar7 != (undefined *)0x0);
        }
        _objc_release(puVar6);
        _objc_sync_exit(puVar13);
        _objc_release(puVar13);
        puVar13 = puVar5;
        func_0x00010bf529e0();
        if (puVar13 == (undefined *)0x0) {
          puVar4 = (undefined8 *)puVar3;
          func_0x00010c0b5a00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_sync_enter();
          func_0x00010c0b5a00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar3;
          func_0x00010bf51e00();
          _objc_release(puVar3);
          _objc_sync_exit(puVar4);
          _objc_release(puVar4);
        }
        else {
          puVar13 = puVar5;
          func_0x00010bf51e00(puVar5);
        }
        _objc_release();
      }
      else {
        func_0x00010bfe2f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar3;
        func_0x00010bf51e00();
        _objc_release(puVar3);
        _objc_sync_exit(puVar5);
        _objc_release();
        puVar4 = (undefined8 *)puVar3;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
        ___stack_chk_fail();
        _objc_sync_exit(puVar4);
        __Unwind_Resume(puVar5);
        func_0x00010c0d9f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        return (undefined *)(ulong)(puVar5 != (undefined *)0x0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 106ebc15c; end: 106ebc4c3; -[SCSpectaclesTaskQueue allTasksForTransferChannel:] */

undefined * FUN_106ebc15c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_398 [128];
  long lStack_318;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar8 = &uStack_2b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar2 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar13 = *plStack_220;
    do {
      lVar15 = 0;
      do {
        if (*plStack_220 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar10 = *(long *)(lStack_228 + lVar15 * 8);
        lVar9 = lVar10;
        func_0x00010c27a200();
        if (lVar9 == param_3) {
          func_0x00010befa120(puVar1,param_2,lVar10);
        }
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_230,auStack_e8,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(lVar2);
  _objc_sync_exit(lVar14);
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lVar2 = param_1;
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar13 = *plStack_260;
    do {
      lVar15 = 0;
      do {
        if (*plStack_260 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar10 = *(long *)(lStack_268 + lVar15 * 8);
        lVar9 = lVar10;
        func_0x00010c27a200();
        if (lVar9 == param_3) {
          func_0x00010befa120(puVar1,param_2,lVar10);
        }
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_270,auStack_168,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(lVar2);
  _objc_sync_exit(lVar14);
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  func_0x00010c0b5a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_2a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2a0 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)(lStack_2a8 + lVar13 * 8);
        lVar15 = lVar9;
        func_0x00010c27a200();
        if (lVar15 == param_3) {
          func_0x00010befa120(puVar1,param_2,lVar9);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = param_1;
      puVar8 = &uStack_2b0;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_sync_exit(lVar14);
  _objc_release(lVar14);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(puVar3);
    __Unwind_Resume();
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar1;
    func_0x00010bfe2f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    puVar3 = puVar1;
    func_0x00010bfe2f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) {
      _objc_sync_exit(puVar4);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0db320(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      lStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      puVar5 = puVar1;
      func_0x00010c0db320();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar14 = *plStack_3d0;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_3d0 != lVar14) {
              _objc_enumerationMutation(puVar5);
            }
            puVar12 = *(undefined **)(lStack_3d8 + (long)puVar16 * 8);
            puVar7 = puVar12;
            func_0x00010c27a200();
            if ((undefined8 *)puVar7 == puVar8) {
              func_0x00010befa120(puVar4,param_2,puVar12);
            }
            puVar16 = puVar16 + 1;
          } while (puVar6 != puVar16);
          puVar6 = puVar5;
          func_0x00010bf52a60(puVar5,param_2,&uStack_3e0,auStack_398,0x10);
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      _objc_sync_exit(puVar3);
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010bf529e0();
      if (puVar3 == (undefined *)0x0) {
        puVar8 = (undefined8 *)puVar1;
        func_0x00010c0b5a00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_sync_enter();
        func_0x00010c0b5a00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf51e00();
        _objc_release(puVar1);
        _objc_sync_exit(puVar8);
        _objc_release(puVar8);
      }
      else {
        puVar3 = puVar4;
        func_0x00010bf51e00(puVar4);
      }
      _objc_release();
    }
    else {
      func_0x00010bfe2f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf51e00();
      _objc_release(puVar1);
      _objc_sync_exit(puVar4);
      _objc_release();
      puVar8 = (undefined8 *)puVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
      ___stack_chk_fail();
      _objc_sync_exit(puVar8);
      __Unwind_Resume(puVar4);
      func_0x00010c0d9f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      return (undefined *)(ulong)(puVar4 != (undefined *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 106ebc4c4; end: 106ebc75b; -[SCSpectaclesTaskQueue batchableTasksForTransferChannel:] */

undefined * FUN_106ebc4c4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
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
  puVar1 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  puVar2 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0db320(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_1;
    func_0x00010c0db320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar3);
          }
          puVar6 = *(undefined **)(lStack_128 + (long)puVar8 * 8);
          puVar5 = puVar6;
          func_0x00010c27a200();
          if (puVar5 == param_3) {
            func_0x00010befa120(puVar1,param_2,puVar6);
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_sync_exit(puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      param_3 = param_1;
      func_0x00010c0b5a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      func_0x00010c0b5a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf51e00();
      _objc_release(param_1);
      _objc_sync_exit(param_3);
      _objc_release(param_3);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf51e00(puVar1);
    }
    _objc_release();
  }
  else {
    func_0x00010bfe2f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf51e00();
    _objc_release(param_1);
    _objc_sync_exit(puVar1);
    _objc_release();
    param_3 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_3);
  __Unwind_Resume(puVar1);
  func_0x00010c0d9f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined *)(ulong)(puVar1 != (undefined *)0x0);
}



/* Entry: 106ebc75c; end: 106ebc78f; -[SCSpectaclesTaskQueue hasTaskForTransferChannel:] */

bool FUN_106ebc75c(long param_1)

{
  func_0x00010c0d9f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106ebc790; end: 106ebc833; -[SCSpectaclesTaskQueue addTask:] */

undefined8 FUN_106ebc790(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if (uVar1 < 0x17) {
    if ((1L << (uVar1 & 0x3f) & 0x4bb203U) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0x44dc0U) == 0) {
        func_0x00010be85820(param_1,param_2,param_3);
      }
      else {
        func_0x00010be857c0();
      }
    }
    else {
      func_0x00010be85700(param_1,param_2,param_3);
    }
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106ebc834; end: 106ebc88b; -[SCSpectaclesTaskQueue addTaskIfNotFinished:] */

undefined8 FUN_106ebc834(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c072f20();
  if ((uVar1 & 1) == 0) {
    func_0x00010befbda0(param_1,param_2,param_3);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106ebc88c; end: 106ebc9bf; -[SCSpectaclesTaskQueue removeTask:] */

void FUN_106ebc88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar2);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar2);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ebc9c0; end: 106ebcacf; -[SCSpectaclesTaskQueue removeAllTasks] */

void FUN_106ebc9c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar2);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar2);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebcad0; end: 106ebcc37; -[SCSpectaclesTaskQueue _allTasks] */

void FUN_106ebcad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar3 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar3 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ebcc38; end: 106ebcdaf; -[SCSpectaclesTaskQueue allContentForMediaTasks] */

void FUN_106ebcc38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      puVar4 = PTR_PTR_1126d3148;
      _objc_opt_class(PTR_PTR_1126d3148);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      if ((uVar5 & 1) != 0) {
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bdca120(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ebcdb0; end: 106ebce5f; -[SCSpectaclesTaskQueue allTasksOfType:] */

void FUN_106ebcdb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8aef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bdca120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106ebce60; end: 106ebcf57; -[SCSpectaclesTaskQueue removeAllTasksOfType:] */

long FUN_106ebce60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lVar1 = param_1;
  func_0x00010bf00be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c12e960(param_1,param_2,*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf00be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106ebcf58; end: 106ebcf93; -[SCSpectaclesTaskQueue numberOfRemainingTaskType:] */

undefined8 FUN_106ebcf58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf00be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ebcf94; end: 106ebd0cf; -[SCSpectaclesTaskQueue numberOfRemainingTransferTasksForContentComponent:] */

long FUN_106ebcf94(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdca120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        puVar2 = PTR_PTR_1126d3148;
        _objc_opt_class(PTR_PTR_1126d3148);
        uVar3 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar2);
        if (((uVar3 & 1) != 0) && (func_0x00010bf4c0c0(), uVar8 == param_3)) {
          lVar7 = lVar7 + 1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar4 = param_1;
    func_0x00010c0df200();
    lVar1 = param_1;
    func_0x00010c0df200(param_1);
    lVar6 = param_1;
    func_0x00010c0df200(param_1);
    lVar7 = param_1;
    func_0x00010c0df200(param_1);
    lVar9 = param_1;
    func_0x00010c0df200(param_1);
    lVar5 = param_1;
    func_0x00010c0df200(param_1);
    func_0x00010c0df200(param_1);
    return lVar1 + lVar4 + lVar6 + lVar7 + lVar9 + lVar5 + param_1;
  }
  return lVar7;
}



/* Entry: 106ebd0d0; end: 106ebd167; -[SCSpectaclesTaskQueue numberOfRemainingTransferTasks] */

long FUN_106ebd0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c0df200(param_1,param_2,0);
  lVar2 = param_1;
  func_0x00010c0df200(param_1,param_2,1);
  lVar3 = param_1;
  func_0x00010c0df200(param_1,param_2,2);
  lVar4 = param_1;
  func_0x00010c0df200(param_1,param_2,0x15);
  lVar5 = param_1;
  func_0x00010c0df200(param_1,param_2,5);
  lVar6 = param_1;
  func_0x00010c0df200(param_1,param_2,4);
  func_0x00010c0df200(param_1,param_2,0x14);
  return lVar2 + lVar1 + lVar3 + lVar4 + lVar5 + lVar6 + param_1;
}



/* Entry: 106ebd168; end: 106ebd20b; -[SCSpectaclesTaskQueue prioritize:] */

void FUN_106ebd168(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  lVar2 = param_1;
  func_0x00010c0c9460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 != lVar2) {
    func_0x00010c1c6320(param_1,param_2,param_3);
    func_0x00010be95000(param_1);
  }
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ebd20c; end: 106ebd29f; -[SCSpectaclesTaskQueue allTransferTasks] */

void FUN_106ebd20c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ebd2a0; end: 106ebd2ef;  */

uint FUN_106ebd2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d3078;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 106ebd2f0; end: 106ebd527; -[SCSpectaclesTaskQueue transferTaskForContent:component:] */

void FUN_106ebd2f0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(ulong *)(lVar10 * 8);
      puVar4 = PTR_PTR_1126d3078;
      _objc_opt_class(PTR_PTR_1126d3078);
      uVar5 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar4);
      if ((uVar5 & 1) != 0) {
        _objc_retain(uVar11);
        uVar5 = uVar11;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010bf4cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c071ae0();
        if ((int)uVar8 == 0) {
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        else {
          uVar8 = uVar11;
          func_0x00010bf4c0c0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (uVar8 == param_4) goto LAB_106ebd49c;
        }
        _objc_release(uVar11);
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
LAB_106ebd49c:
  _objc_release(param_1);
  _objc_sync_exit(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_sync_exit(lVar2);
    __Unwind_Resume(param_3);
    _objc_alloc(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8);
    func_0x00010c020aa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ebd528; end: 106ebd59b; -[SCSpectaclesTaskQueue _descriptorForTaskType:] */

void FUN_106ebd528(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8);
  func_0x00010c020aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ebd59c; end: 106ebd65b;  */

undefined * FUN_106ebd59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c27dd80(param_2);
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106ebd65c; end: 106ebd7f7; -[SCSpectaclesTaskQueue _resortNormalQueue] */

ulong FUN_106ebd65c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c9480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_a0 = uVar2;
  func_0x00010c26db20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  uStack_98 = uVar3;
  func_0x00010bf038e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_90 = uVar4;
  func_0x00010bfead20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_88 = uVar5;
  func_0x00010bfc0e80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_80 = uVar6;
  func_0x00010bf65740();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uVar7;
  func_0x00010c26f1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c246bc0(uVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  uVar2 = uVar1;
  func_0x00010bfe2f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar3 = uVar1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010bfe2f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
    func_0x00010c26a8e0(*(undefined8 *)(uVar1 + 8),param_2,uVar1,puVar9);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar9);
  return (ulong)((uint)uVar4 ^ 1);
}



/* Entry: 106ebd7f8; end: 106ebd8d7; -[SCSpectaclesTaskQueue _queueHighPriorityTask:] */

uint FUN_106ebd7f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe2f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010bfe2f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bfe2f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar2);
    func_0x00010c26a8e0(*(undefined8 *)(param_1 + 8),param_2,param_1,param_3);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 106ebd8d8; end: 106ebd9bf; -[SCSpectaclesTaskQueue _queueNormalTask:] */

uint FUN_106ebd8d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0db320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010c0db320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0db320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar2);
    func_0x00010be95000(param_1);
    func_0x00010c26a8e0(*(undefined8 *)(param_1 + 8),param_2,param_1,param_3);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 106ebd9c0; end: 106ebda9f; -[SCSpectaclesTaskQueue _queueLowPriorityTask:] */

uint FUN_106ebd9c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010c0b5a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0b5a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar2);
    func_0x00010c26a8e0(*(undefined8 *)(param_1 + 8),param_2,param_1,param_3);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 106ebdaa0; end: 106ebdaa7; -[SCSpectaclesTaskQueue addListener:] */

void FUN_106ebdaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106ebdaa8; end: 106ebdaaf; -[SCSpectaclesTaskQueue removeListener:] */

void FUN_106ebdaa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106ebdab0; end: 106ebdab7; -[SCSpectaclesTaskQueue highPriorityQueue] */

undefined8 FUN_106ebdab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ebdab8; end: 106ebdae7; -[SCSpectaclesTaskQueue setHighPriorityQueue:] */

void FUN_106ebdab8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ebdae8; end: 106ebdaef; -[SCSpectaclesTaskQueue normalPriorityQueue] */

undefined8 FUN_106ebdae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ebdaf0; end: 106ebdb1f; -[SCSpectaclesTaskQueue setNormalPriorityQueue:] */

void FUN_106ebdaf0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ebdb20; end: 106ebdb27; -[SCSpectaclesTaskQueue lowPriorityQueue] */

undefined8 FUN_106ebdb20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ebdb28; end: 106ebdb57; -[SCSpectaclesTaskQueue setLowPriorityQueue:] */

void FUN_106ebdb28(long param_1,undefined8 param_2,undefined8 param_3)

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


