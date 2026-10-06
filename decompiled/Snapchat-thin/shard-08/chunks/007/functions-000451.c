/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106465758; end: 10646582b; -[SCContextActionBarDataFetcher .cxx_destruct] */

void FUN_106465758(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10646582c; end: 106465dbf; -[SCContextActionBarFetchProcessor actionBarDataFetcher:didReceiveResponse:sessionParams:snapIdentity:contextSessionId:isFromSendSide:isCurrentUserSnap:conversationIdForStory:] */

void FUN_10646582c(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined4 param_10,long param_11)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uStack_19c;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
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
  uVar12 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  lVar1 = param_11;
  func_0x00010c08fa60();
  uVar14 = (undefined1)uVar12;
  if (lVar1 != 0) {
    func_0x00010bec3fc0(param_1);
    goto LAB_106465d08;
  }
  uVar2 = param_5;
  func_0x000108436cf8();
  if ((int)uVar2 == 0) {
    uStack_19c = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7fe80();
    uStack_19c = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
  }
  uVar2 = param_5;
  func_0x000108436df0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x000108436f3c();
  uVar14 = (undefined1)uVar12;
  if (((param_9 & 1) == 0) && ((uVar5 & 1) == 0)) {
    uVar5 = uVar2;
    func_0x00010c08fa60();
    uVar14 = (undefined1)uVar12;
    if (uVar5 == 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar1 = param_4;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010beef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar6;
      func_0x00010bf52a60();
      uVar14 = (undefined1)uVar12;
      if (lVar1 != 0) {
        lVar17 = *plStack_120;
        do {
          lVar16 = 0;
          do {
            if (*plStack_120 != lVar17) {
              _objc_enumerationMutation(lVar6);
            }
            uVar15 = *(ulong *)(lStack_128 + lVar16 * 8);
            uVar5 = uVar15;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            func_0x00010beeed20();
            if ((int)uVar7 == 0xe) {
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar15;
              func_0x00010c08fba0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c074340();
              _objc_release(uVar7);
              _objc_release(uVar15);
              _objc_release(uVar5);
              uVar14 = (undefined1)uVar12;
              if ((uVar8 & 1) != 0) goto LAB_106465a94;
            }
            else {
              _objc_release(uVar5);
            }
            lVar16 = lVar16 + 1;
          } while (lVar1 != lVar16);
          lVar1 = lVar6;
          func_0x00010bf52a60();
          uVar14 = (undefined1)uVar12;
        } while (lVar1 != 0);
      }
LAB_106465a94:
      _objc_release(lVar6);
    }
  }
  uVar5 = param_5;
  func_0x00010c08bda0();
  if ((uVar5 < 0x24) && ((1L << (uVar5 & 0x3f) & 0x800067e00U) != 0)) {
    uStack_19c = uStack_19c ^ 1;
    if (param_6 == 0) {
      uStack_19c = 1;
    }
    if ((uStack_19c & 1) == 0) {
LAB_106465ae8:
      puStack_148 = &uStack_150;
      uStack_150 = 0;
      uStack_140 = 0x2020000000;
      uStack_138 = 0;
      uVar5 = param_5;
      func_0x00010bfa29a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bed40();
      _objc_release(uVar5);
      uVar5 = param_5;
      func_0x00010c08bda0();
      if (((*(byte *)(puStack_148 + 3) & 1) != 0) || (uVar5 == 0x10)) {
        puVar9 = PTR_PTR_1126b5ba8;
        _objc_alloc();
        func_0x00010c0044c0();
        puVar10 = puVar9;
        func_0x00010c131ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar10 = puVar11;
        func_0x00010c08fa60();
        if (puVar10 != (undefined *)0x0) {
          lVar1 = param_6;
          func_0x00010bf36f80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar1;
          func_0x00010c08fa60();
          _objc_release(lVar1);
          if (lVar6 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = param_4;
            func_0x00010c105080();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar1;
            func_0x0001070bba30();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = param_6;
            func_0x00010bf36f80(param_6);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c131ec0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar10;
            func_0x00010c290fa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x000108436674();
            uVar14 = (char)param_8;
            func_0x00010c257460(uVar12);
            _objc_release(puVar13);
            _objc_release(puVar10);
            _objc_release(lVar17);
            _objc_release(lVar6);
            _objc_release(lVar1);
            _objc_release(uVar12);
          }
        }
        _objc_release(puVar11);
        _objc_release(puVar9);
      }
      __Block_object_dispose(&uStack_150,8);
    }
  }
  else {
    lVar1 = param_4;
    func_0x00010bfda6e0();
    if ((param_6 != 0) && ((((uint)lVar1 | uStack_19c) & 1) != 0)) goto LAB_106465ae8;
  }
  _objc_release(uVar2);
LAB_106465d08:
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_150,8);
    __Unwind_Resume();
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = uVar14;
    return;
  }
  return;
}



/* Entry: 106465dc0; end: 106465dcf;  */

void FUN_106465dc0(long param_1)

{
  undefined1 in_w7;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w7;
  return;
}



/* Entry: 106465dd0; end: 106465f8b; -[SCContextActionBarFetchProcessor _storeFriendStoryLensPostSnapActionsInResponse:sessionParams:contextSessionId:conversationId:] */

void FUN_106465dd0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b5ba8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0044c0();
  lVar2 = param_4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (((lVar3 != 0) && (lVar3 = param_6, func_0x00010c08fa60(), lVar3 != 0)) &&
     (lVar3 = param_3, func_0x00010bfda6e0(), (int)lVar3 != 0)) {
    lVar3 = param_3;
    func_0x00010c105080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070bbab0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c131ec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257460(uVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106465f8c; end: 106465fbb; -[SCContextActionBarFetchProcessor .cxx_destruct] */

void FUN_106465f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106465fbc; end: 1064663a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106465fbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar25;
  undefined8 uVar26;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be5d8;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112747e88;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112747e90;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112747e94;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf534e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112747e98;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe2c0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar25 = PTR_PTR_1126cab30;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112747e9c;
    _objc_loadWeakRetained();
    lVar10 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112747e88;
    _objc_loadWeakRetained();
    lVar11 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112747e90;
    _objc_loadWeakRetained();
    lVar8 = param_1 + _DAT_112747ea0;
    _objc_loadWeakRetained();
    lVar12 = lVar8;
    func_0x00010bfe4c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112747ea0;
    _objc_loadWeakRetained();
    lVar13 = lVar3;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112747e8c;
    _objc_loadWeakRetained();
    lVar14 = lVar5;
    func_0x00010c0e8180();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112747eb8;
    _objc_loadWeakRetained();
    lVar15 = lVar7;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112747ebc;
    _objc_loadWeakRetained();
    lVar16 = lVar9;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_112747ec0;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf9c6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_112747ea4;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_112747ea8;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + _DAT_112747e80);
    lVar23 = param_1 + _DAT_112747eac;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c119b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d340(puVar25,param_2,lVar10,lVar11,lVar6,lVar12,lVar13,lVar14,puVar1,lVar15,
                        lVar16,lVar18,lVar20,lVar22,uVar26,lVar24);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar5);
    _objc_release(lVar13);
    _objc_release(lVar3);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1064663a4; end: 106466493; -[SCContextActionBarServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064663a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747ec0);
  _objc_destroyWeak(param_1 + _DAT_112747ebc);
  _objc_destroyWeak(param_1 + _DAT_112747eb8);
  _objc_destroyWeak(param_1 + _DAT_112747eb4);
  _objc_destroyWeak(param_1 + _DAT_112747eb0);
  _objc_destroyWeak(param_1 + _DAT_112747eac);
  _objc_destroyWeak(param_1 + _DAT_112747ea8);
  _objc_destroyWeak(param_1 + _DAT_112747ea4);
  _objc_destroyWeak(param_1 + _DAT_112747ea0);
  _objc_destroyWeak(param_1 + _DAT_112747e9c);
  _objc_destroyWeak(param_1 + _DAT_112747e98);
  _objc_destroyWeak(param_1 + _DAT_112747e94);
  _objc_destroyWeak(param_1 + _DAT_112747e90);
  _objc_destroyWeak(param_1 + _DAT_112747e8c);
  _objc_destroyWeak(param_1 + _DAT_112747e88);
  _objc_destroyWeak(param_1 + _DAT_112747e84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747e80,0);
  return;
}



/* Entry: 106466494; end: 106466507; -[SCContextLinkfireURLInterceptor initWithFeatureSettingsService:] */

undefined1 * FUN_106466494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1450;
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



/* Entry: 106466508; end: 10646668f; -[SCContextLinkfireURLInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

undefined8
FUN_106466508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000008);
  if ((param_6 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4e9c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099940();
        _objc_release(lVar4);
        _objc_initWeak(auStack_48,param_1);
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        func_0x00010c237080(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        uVar5 = 1;
        goto LAB_1064665a0;
      }
    }
  }
  uVar5 = 0;
LAB_1064665a0:
  _objc_release(in_stack_00000008);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106466690; end: 10646670f;  */

void FUN_106466690(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c099920(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106466710; end: 1064669f3; -[SCContextLinkfireURLInterceptor showDisclaimerAgreementWithCompletion:] */

void FUN_106466710(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_90,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  FUN_106466ecc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106466ee4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c099900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c10eda0(uVar9);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(uVar10);
  lVar8 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(lVar8 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183160();
    _objc_release(uVar9);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf84b00(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar10);
  return;
}



/* Entry: 1064669f4; end: 106466ac3;  */

void FUN_1064669f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183160();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106466ac4; end: 106466adb;  */

void FUN_106466ac4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106466ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 106466adc; end: 106466b53;  */

void FUN_106466adc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106466b54; end: 106466b6b;  */

void FUN_106466b54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106466b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106466b6c; end: 106466b83; -[SCContextLinkfireURLInterceptor interceptorDelegate] */

void FUN_106466b6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106466b84; end: 106466b8f; -[SCContextLinkfireURLInterceptor setInterceptorDelegate:] */

void FUN_106466b84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106466b90; end: 106466ba7; -[SCContextLinkfireURLInterceptor interceptorDataSource] */

void FUN_106466b90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106466ba8; end: 106466bb3; -[SCContextLinkfireURLInterceptor setInterceptorDataSource:] */

void FUN_106466ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106466bb4; end: 106466bcb; -[SCContextLinkfireURLInterceptor delegate] */

void FUN_106466bb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106466bcc; end: 106466bd7; -[SCContextLinkfireURLInterceptor setDelegate:] */

void FUN_106466bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106466bd8; end: 106466c13; -[SCContextLinkfireURLInterceptor .cxx_destruct] */

void FUN_106466bd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106466c14; end: 106466c1f; -[SCFeatureSettingsService getContextLinkfireDisclaimerAccepted] */

void FUN_106466c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e502b8);
  return;
}



/* Entry: 106466c20; end: 106466c2b; -[SCFeatureSettingsService contextLinkfireDisclaimerAcceptedServerParam] */

undefined ** FUN_106466c20(void)

{
  return &PTR____CFConstantStringClassReference_110e502b8;
}



/* Entry: 106466c2c; end: 106466c3b; -[SCFeatureSettingsService setContextLinkfireDisclaimerAccepted:] */

void FUN_106466c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e502b8,param_3);
  return;
}



/* Entry: 106466c3c; end: 106466c43; -[SCFeatureSettingsService context_linkfire_disclaimer_accepted_client_value:] */

undefined * FUN_106466c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106466c44; end: 106466c4b; -[SCFeatureSettingsService context_linkfire_disclaimer_accepted_server_value:] */

void FUN_106466c44(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106466c4c; end: 106466c5b; -[SCFeatureSettingsService contextLinkfireDisclaimerAccepted] */

void FUN_106466c4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e502b8,0);
  return;
}



/* Entry: 106466c5c; end: 106466ccf; -[SCContextCompositeURLInterceptor initWithInterceptors:] */

undefined1 * FUN_106466c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1458;
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



/* Entry: 106466cd0; end: 106466e4f; -[SCContextCompositeURLInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

long FUN_106466cd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_11);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_120;
    lVar6 = 1;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_128 + lVar5 * 8);
        func_0x00010c068f20(uVar2,param_2,param_3,1,param_5,param_6,param_7,param_8,param_9);
        if ((uVar2 & 1) != 0) goto LAB_106466df8;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  lVar6 = 0;
LAB_106466df8:
  _objc_release(lVar3);
  _objc_release(param_11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_3;
}



/* Entry: 106466e50; end: 106466e67; -[SCContextCompositeURLInterceptor interceptorDelegate] */

void FUN_106466e50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106466e68; end: 106466e73; -[SCContextCompositeURLInterceptor setInterceptorDelegate:] */

void FUN_106466e68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106466e74; end: 106466e8b; -[SCContextCompositeURLInterceptor interceptorDataSource] */

void FUN_106466e74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106466e8c; end: 106466e97; -[SCContextCompositeURLInterceptor setInterceptorDataSource:] */

void FUN_106466e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106466e98; end: 106466ecb; -[SCContextCompositeURLInterceptor .cxx_destruct] */

void FUN_106466e98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106466ecc; end: 106466efb;  */

void FUN_106466ecc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e502d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e502d8,
                      &PTR____CFConstantStringClassReference_110e502f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106466efc; end: 106466fdf; -[SCContextPostSnapServiceProvider provide] */

void FUN_106466efc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cab48;
  _objc_alloc(PTR_PTR_1126cab48);
  func_0x00010c037dc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106466fe0; end: 1064671a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106466fe0(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126cab40;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112747ef0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010beee700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112747ee4;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0b3860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112747ee8;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112747eec;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112747ef4;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112747ef8;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0740(puVar13,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1064671a4; end: 106467217; -[SCContextPostSnapServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064671a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747ef8);
  _objc_destroyWeak(param_1 + _DAT_112747ef4);
  _objc_destroyWeak(param_1 + _DAT_112747ef0);
  _objc_destroyWeak(param_1 + _DAT_112747eec);
  _objc_destroyWeak(param_1 + _DAT_112747ee8);
  _objc_destroyWeak(param_1 + _DAT_112747ee4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747ee0);
  return;
}



/* Entry: 106467218; end: 10646795f; -[SCContextPostSnapButtonView initWithFrame:imageDownloader:imagePerformer:actionHandler:baseViewController:circumstanceEngine:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106467218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_c0 = PTR_PTR_1126f1460;
  puVar14 = &uStack_c8;
  uStack_c8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar14,PTR_s_initWithFrame__1125e2948);
  if (puVar14 != (undefined8 *)0x0) {
    lVar16 = (long)_DAT_112747efc;
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined8 *)((long)puVar14 + lVar16) = param_9;
    _objc_release(uVar1);
    _objc_storeWeak((long)puVar14 + (long)_DAT_112747f00,param_10);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar14);
    _objc_release(puVar2);
    func_0x00010c161080(puVar14);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar17 = (long)_DAT_112747f04;
    uVar1 = *(undefined8 *)((long)puVar14 + lVar17);
    *(undefined **)((long)puVar14 + lVar17) = puVar2;
    _objc_release(uVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c16e060(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c207380(0x4014000000000000,*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010befbb60(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar1;
    uVar5 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010bf1ff80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c2a5060(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf49520(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar1 = param_11;
    FUN_10646addc(0x4036000000000000,0x4036000000000000,0x4037000000000000,0x4037000000000000,
                  param_11,param_7,param_8,0,0,0,param_12);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112747f08;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined8 *)((long)puVar14 + lVar16) = uVar1;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar14 + lVar16));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar2 = PTR_PTR_1126cab50;
    _objc_alloc_init();
    lVar16 = (long)_DAT_112747f0c;
    uVar1 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar2;
    _objc_release(uVar1);
    func_0x00010c1de920(0x4028000000000000,*(undefined8 *)((long)puVar14 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar14 + lVar16));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c2a5060(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar15;
    func_0x00010bf49540(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar15);
    puVar2 = PTR_PTR_1126ae720;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar17);
    _objc_retain(param_11);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_12);
    _objc_retain(uVar15);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_112747f10);
    *(undefined **)((long)puVar14 + (long)_DAT_112747f10) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_112747f14);
    *(undefined **)((long)puVar14 + (long)_DAT_112747f14) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_112747f18);
    *(undefined **)((long)puVar14 + (long)_DAT_112747f18) = puVar2;
    _objc_release(uVar1);
    func_0x00010c198080(puVar14);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar16 = (long)_DAT_112747f1c;
    uVar1 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar2;
    _objc_release(uVar1);
    func_0x00010c1ec5c0(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010bef9040(puVar14);
    _objc_release(param_12);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_11);
    _objc_release(uVar15);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined8 **)(param_7 + 0x20);
  FUN_10646addc(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,puVar14,
                *(undefined8 *)(param_7 + 0x28),*(undefined8 *)(param_7 + 0x30),0,0,0,
                *(undefined8 *)(param_7 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar14);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar14);
  func_0x00010bef6d60(*(undefined8 *)(param_7 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 106467960; end: 106467b57;  */

void FUN_106467960(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10646addc(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,uVar1,
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0,0,0,
                *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(uVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106467b58; end: 1064680c3; -[SCContextPostSnapButtonView configureForAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106467b58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112747f20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112747f24;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_4;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_112747f0c;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  lVar5 = param_3;
  func_0x00010c09e8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47960(uVar1,param_2,lVar5);
  _objc_release(lVar5);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1,param_2,uVar1);
  _objc_release(uVar1);
  lVar5 = param_3;
  func_0x00010c155120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = param_3;
    func_0x00010c154f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) goto LAB_106467c58;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747f14);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747f10);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747f18);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_106467e64:
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  else {
    _objc_release();
LAB_106467c58:
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747f14);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar6 = (long)_DAT_112747f10;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar7 = (long)_DAT_112747f18;
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar5 = param_3;
    func_0x00010c154f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c154f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x0001070bd410();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47900(uVar1,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar1);
    }
    lVar5 = param_3;
    func_0x00010c155120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c155120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47960(uVar1,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106467e64;
    }
  }
  lVar5 = param_3;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = (long)_DAT_112747f08;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  if (lVar5 != 0) {
    lVar7 = param_3;
    func_0x00010bfe5400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x0001070bd410();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47900(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar7);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
  }
  func_0x00010c1a7f60(uVar1,param_2,lVar5 == 0);
  lVar5 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010beeed20();
  if ((int)lVar7 == 0xe) {
    lVar7 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c08fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07d340();
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar5);
    if ((int)lVar3 != 0) {
      func_0x00010c228e40(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112747f28),param_2,0);
      goto LAB_106468094;
    }
  }
  else {
    _objc_release(lVar5);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112747f28),param_2,1);
  lVar5 = param_3;
  func_0x00010c25e260();
  if (lVar5 == 2) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x62);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x57);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x57);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_3;
    func_0x00010c25e260();
    if (lVar5 != 1) goto LAB_106468094;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
  }
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
  _objc_release(puVar4);
LAB_106468094:
  func_0x00010c1cbf40(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064680c4; end: 106468187; -[SCContextPostSnapButtonView setupLensPlusLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064680c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112747f28;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c96b0;
  _objc_opt_new();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  func_0x00010c229cc0(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106468188; end: 10646823f; -[SCContextPostSnapButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106468188(long param_1)

{
  long lVar1;
  long lVar2;
  double in_d3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1460;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112747f28));
  func_0x00010bf20c00(param_1);
  lVar2 = (long)_DAT_112747f2c;
  if (*(double *)(param_1 + lVar2) != in_d3) {
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d3 * 0.5);
    _objc_release(lVar1);
    *(double *)(param_1 + lVar2) = in_d3;
  }
  return;
}



/* Entry: 106468240; end: 1064683af; -[SCContextPostSnapButtonView handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106468240(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112747f20;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c118680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11cb60();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar5 == 3) {
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c25e260();
    if (lVar1 == 1) {
      return;
    }
  }
  puVar3 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  lVar1 = (long)_DAT_112747f24;
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  FUN_106468618(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x000106468640(uVar5);
  func_0x00010bff0a60(puVar3,param_2,5,7,uVar4,uVar5,0xffffffffffffffff);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112747efc);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010beedca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112747f00;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0040(uVar5,param_2,uVar4,puVar3,param_1,0,&PTR___NSConcreteGlobalBlock_110923ad0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1064683b0; end: 1064683b3;  */

void FUN_1064683b0(void)

{
  return;
}



/* Entry: 1064683b4; end: 10646848f; -[SCContextPostSnapButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064683b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747f18,0);
  _objc_storeStrong(param_1 + _DAT_112747f10,0);
  _objc_storeStrong(param_1 + _DAT_112747f14,0);
  _objc_storeStrong(param_1 + _DAT_112747f04,0);
  _objc_storeStrong(param_1 + _DAT_112747f28,0);
  _objc_storeStrong(param_1 + _DAT_112747f08,0);
  _objc_storeStrong(param_1 + _DAT_112747f0c,0);
  _objc_storeStrong(param_1 + _DAT_112747f24,0);
  _objc_storeStrong(param_1 + _DAT_112747f20,0);
  _objc_storeStrong(param_1 + _DAT_112747efc,0);
  _objc_destroyWeak(param_1 + _DAT_112747f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747f1c,0);
  return;
}



/* Entry: 106468490; end: 106468617;  */

void FUN_106468490(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c074920();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010c242420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010c294420(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bfe5ec0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x000108437e88();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010bf85d80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
    }
    puVar6 = PTR_PTR_1126c2f78;
    _objc_alloc(PTR_PTR_1126c2f78);
    uVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c074920(param_1);
    func_0x00010c004fe0(puVar6,param_2,uVar1,uVar2,uVar3,uVar4,uVar5);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106468618; end: 106468667;  */

undefined8 FUN_106468618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e50338);
  uVar1 = 0;
  if ((int)param_1 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 106468668; end: 106468873; -[SCContextPostSnapPrimaryView initWithTargetViewController:actionHandlerProvider:loggerProvider:imageDownloader:baseViewController:circumstanceEngine:ctpItemViewService:contextExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106468668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f1468;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112747f30;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f34);
    *(undefined **)((long)puVar1 + (long)_DAT_112747f34) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112747f38;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112747f3c,param_7);
    uVar2 = param_4;
    func_0x00010bf54580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112747f40) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112747f44;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112747f48;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112747f4c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f50);
    *(undefined **)((long)puVar1 + (long)_DAT_112747f50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106468874; end: 106468ac7; -[SCContextPostSnapPrimaryView configureWithPostSnapParams:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106468874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112747f38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4f080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08bda0();
  func_0x00010c13c4a0(uVar6,param_2,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c28c660(uVar6,param_2,param_3);
  uVar1 = param_3;
  FUN_106468490(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_106468618(param_4);
  uVar3 = param_4;
  func_0x000106468640(param_4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112747f34);
  puVar5 = PTR_PTR_1126b5bb0;
  _objc_alloc(PTR_PTR_1126b5bb0);
  uVar4 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0275c0(puVar5,param_2,uVar6,uVar4,uVar1,uVar2,uVar3,0);
  func_0x00010c0d9840(uVar7,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010bf6ef60(param_1);
  uVar2 = param_3;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfaea20(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110923b10);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106468b0c;
  puStack_78 = &UNK_110923b30;
  lStack_70 = param_1;
  uStack_68 = param_4;
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112747f54);
  *(undefined8 *)(param_1 + _DAT_112747f54) = uVar4;
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106468ac8; end: 106468b0b;  */

bool FUN_106468ac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beeed20();
  _objc_release(param_2);
  return (int)uVar1 == 4;
}



/* Entry: 106468b0c; end: 106468c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106468b0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cab58;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112747f30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_112747f3c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0146c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010bf46f60(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_2;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beeed20();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010c1af000(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106468c8c; end: 106468d9b; -[SCContextPostSnapPrimaryView destroy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106468c8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112747f54;
  lVar10 = *(long *)(param_1 + lVar11);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar2 = *(long *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return lVar2;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_228 = PTR_PTR_1126f1468;
  lStack_230 = lVar2;
  _objc_msgSendSuper2(&lStack_230,PTR_s_layoutSubviews_112600e60);
  lVar10 = *(long *)(lVar2 + _DAT_112747f54);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar10);
      }
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar13 = *(undefined8 *)(lVar11 * 8);
      uVar4 = uVar13;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c08de00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_220 = uVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c274200(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_218 = uVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(lVar12);
      _objc_release(uVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return lVar10;
  }
  ___stack_chk_fail();
  return *(long *)(lVar10 + _DAT_112747f54);
}



/* Entry: 106468d9c; end: 106468fcb; -[SCContextPostSnapPrimaryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106468d9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126f1468;
  lStack_110 = param_1;
  _objc_msgSendSuper2(&lStack_110,PTR_s_layoutSubviews_112600e60);
  lVar10 = *(long *)(param_1 + _DAT_112747f54);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar12 = *(undefined8 *)(lVar11 * 8);
      uVar4 = uVar12;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_100 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar12;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_f8 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(uVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar10;
  }
  ___stack_chk_fail();
  return *(long *)(lVar10 + _DAT_112747f54);
}



/* Entry: 106468fcc; end: 106468fdb; -[SCContextPostSnapPrimaryView buttons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106468fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112747f54);
}



/* Entry: 106468fdc; end: 106469097; -[SCContextPostSnapPrimaryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106468fdc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747f54,0);
  _objc_storeStrong(param_1 + _DAT_112747f4c,0);
  _objc_storeStrong(param_1 + _DAT_112747f48,0);
  _objc_storeStrong(param_1 + _DAT_112747f44,0);
  _objc_storeStrong(param_1 + _DAT_112747f34,0);
  _objc_storeStrong(param_1 + _DAT_112747f50,0);
  _objc_destroyWeak(param_1 + _DAT_112747f3c);
  _objc_storeStrong(param_1 + _DAT_112747f30,0);
  _objc_storeStrong(param_1 + _DAT_112747f38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747f40,0);
  return;
}



/* Entry: 106469098; end: 1064691eb; -[SCContextPostSnapProvider initWithActionHandlerProvider:loggerProvider:imageDownloader:circumstanceEngine:ctpItemViewService:contextExperimentService:] */

undefined1 *
FUN_106469098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f1470;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 1064691ec; end: 106469307; -[SCContextPostSnapProvider createPostSnapButtonsViewForTargetViewController:isPrimary:] */

void FUN_1064691ec(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0 || lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puVar4 = PTR_PTR_1126cab68;
      _objc_alloc(PTR_PTR_1126cab68);
      func_0x00010c050d40();
    }
    else {
      puVar4 = PTR_PTR_1126cab60;
      _objc_alloc(PTR_PTR_1126cab60);
      func_0x00010c050d60();
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106469308; end: 106469367; -[SCContextPostSnapProvider .cxx_destruct] */

void FUN_106469308(long param_1)

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



/* Entry: 106469368; end: 10646942f; -[SCContextPostSnapScrollView gestureRecognizerShouldBegin:] */

bool FUN_106469368(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar2);
  if (param_5 == lVar2) {
    lVar2 = param_3;
    func_0x00010c0f36c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(lVar2,param_4,param_3);
    _objc_release(param_3);
    _objc_release(lVar2);
    bVar1 = ABS(param_2) <= ABS(param_1);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106469430; end: 1064694cf; -[SCContextPostSnapScrollView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

long FUN_106469430(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == param_1) {
    lVar1 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_3);
    if (lVar1 != param_1) {
      func_0x00010c081660(param_1);
      goto LAB_1064694b4;
    }
  }
  else {
    _objc_release(param_3);
  }
  param_1 = 0;
LAB_1064694b4:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1064694d0; end: 1064696d7; -[SCContextPostSnapScrollingButtonsView initWithTargetViewController:actionHandlerProvider:loggerProvider:imageDownloader:baseViewController:circumstanceEngine:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1064694d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f1478;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112747f70;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f74);
    *(undefined **)((long)puVar1 + (long)_DAT_112747f74) = puVar3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112747f78;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112747f7c),param_7);
    uVar2 = param_4;
    func_0x00010bf54580();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f80);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112747f80) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112747f84;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747f88);
    *(undefined **)((long)puVar1 + (long)_DAT_112747f88) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    lVar6 = (long)_DAT_112747f8c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064696d8; end: 106469a73; -[SCContextPostSnapScrollingButtonsView configureWithPostSnapParams:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1064696d8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112747f78);
  uVar2 = param_3;
  func_0x00010bf4f080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bda0();
  func_0x00010c13c4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c28c660(uVar9);
  uVar3 = param_3;
  FUN_106468490();
  _objc_retainAutoreleasedReturnValue();
  FUN_106468618(param_4);
  func_0x000106468640(param_4);
  puVar5 = PTR_PTR_1126b5bb0;
  _objc_alloc(PTR_PTR_1126b5bb0);
  uVar2 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0275c0(puVar5);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
LAB_106469938:
      _objc_release(uVar4);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112747f74));
      func_0x00010bf6ef60(param_1);
      uVar2 = param_3;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      uVar10 = uVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + _DAT_112747f90);
      *(ulong *)(param_1 + _DAT_112747f90) = uVar10;
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c229480(param_1);
      _objc_release(param_4);
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x00010beedca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_2;
      func_0x00010beeed20();
      _objc_release(param_2);
      return (ulong)((int)uVar9 != 4);
    }
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar4);
      }
      uVar11 = *(undefined8 *)(uVar10 * 8);
      uVar8 = uVar11;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010beeed20();
      _objc_release(uVar8);
      if ((int)uVar6 == 0x1c) {
        func_0x00010beedca0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar11;
        func_0x00010c2472a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d8c60(puVar5);
        _objc_release(uVar8);
        _objc_release(uVar11);
        goto LAB_106469938;
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
    uVar2 = uVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106469a74; end: 106469ab7;  */

bool FUN_106469a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beeed20();
  _objc_release(param_2);
  return (int)uVar1 != 4;
}



/* Entry: 106469ab8; end: 106469c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106469ab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cab70;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112747f70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_112747f7c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0146c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010bf46f60(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_2;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beeed20();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010c1af000(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106469c30; end: 10646a267; -[SCContextPostSnapScrollingButtonsView setupScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106469c30(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined *puStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR_PTR_1126cab78;
  _objc_opt_new();
  lVar19 = (long)_DAT_112747f94;
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar15;
  _objc_release(uVar12);
  func_0x00010c2025c0(*(undefined8 *)(param_4 + lVar19));
  func_0x00010c167a00(*(undefined8 *)(param_4 + lVar19));
  func_0x00010c198080(*(undefined8 *)(param_4 + lVar19));
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c207380(0x4020000000000000,puVar15);
  func_0x00010befbb60(*(undefined8 *)(param_4 + lVar19));
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lStack_258 = (long)_DAT_112747f90;
  lVar16 = *(long *)(param_4 + lStack_258);
  _objc_retain(lVar16);
  lVar14 = lVar16;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar13 = *plStack_1f0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1f0 != lVar13) {
          _objc_enumerationMutation(lVar16);
        }
        func_0x00010bef6d60(puVar15);
        lVar18 = lVar18 + 1;
      } while (lVar14 != lVar18);
      lVar14 = lVar16;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar16);
  puStack_298 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  puStack_268 = puVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_270 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar15;
  puStack_278 = puVar17;
  puStack_128 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  puStack_280 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_288 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  puStack_290 = puVar1;
  puStack_120 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  puStack_2a0 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  puStack_118 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_4 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = puVar15;
  puStack_110 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  lStack_248 = param_4;
  func_0x00010bfe0660(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  lStack_250 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_298);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar12);
  lVar16 = lStack_248;
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar17);
  _objc_release(puVar2);
  _objc_release(uStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_290);
  _objc_release(uStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(uStack_270);
  _objc_release(puStack_268);
  lVar14 = lStack_258;
  uVar6 = *(ulong *)(lVar16 + lStack_258);
  func_0x00010bf529e0();
  if (uVar6 < 2) {
    uVar9 = *(undefined8 *)(lVar16 + lVar14);
    func_0x00010bfb1920(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lStack_250;
    uVar10 = *(undefined8 *)(lVar16 + lStack_250);
    func_0x00010c2a5060(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf493a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar9);
    puVar15 = *(undefined **)(lVar16 + lVar14);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(lVar16 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar17);
  }
  else {
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    puVar15 = *(undefined **)(lVar16 + lVar14);
    _objc_retain(puVar15);
    puVar2 = puVar15;
    func_0x00010bf52a60();
    lVar19 = lStack_250;
    if (puVar2 != (undefined *)0x0) {
      lVar14 = *plStack_230;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar14) {
            _objc_enumerationMutation(puVar15);
          }
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar3 = *(undefined **)(lStack_238 + (long)puVar17 * 8);
          puVar7 = puVar3;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bf494e0(0x4059000000000000);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = puVar8;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf49580(0x4062c00000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1b0 = puVar5;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar4);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar8);
          _objc_release(puVar7);
          puVar17 = puVar17 + 1;
        } while (puVar2 != puVar17);
        puVar2 = puVar15;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
      puVar17 = (undefined *)0x0;
      lVar16 = lStack_248;
      lVar19 = lStack_250;
    }
  }
  _objc_release(puVar15);
  func_0x00010befbb60(lVar16);
  puVar2 = puStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_2b8 = FUN_10646a268;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lVar18 = (long)_DAT_112747f90;
    lVar13 = *(long *)(puVar2 + lVar18);
    puStack_300 = puVar4;
    puStack_2f8 = puVar5;
    puStack_2f0 = puVar1;
    puStack_2e8 = puVar3;
    puStack_2e0 = puVar17;
    lStack_2d8 = lVar19;
    puStack_2d0 = puVar15;
    lStack_2c8 = lVar16;
    puStack_2c0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar13);
    lVar14 = lVar13;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar16 = *plStack_3c0;
      do {
        lVar19 = 0;
        do {
          if (*plStack_3c0 != lVar16) {
            _objc_enumerationMutation(lVar13);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_3c8 + lVar19 * 8));
          lVar19 = lVar19 + 1;
        } while (lVar14 != lVar19);
        lVar14 = lVar13;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar13);
    lVar16 = (long)_DAT_112747f94;
    func_0x00010c12c960(*(undefined8 *)(puVar2 + lVar16));
    uVar12 = *(undefined8 *)(puVar2 + lVar18);
    *(undefined8 *)(puVar2 + lVar18) = 0;
    _objc_release(uVar12);
    lVar14 = *(long *)(puVar2 + lVar16);
    *(undefined8 *)(puVar2 + lVar16) = 0;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      pcStack_3d8 = FUN_10646a394;
      puStack_3f8 = PTR_PTR_1126f1478;
      lStack_400 = lVar14;
      lStack_3f0 = lVar16;
      puStack_3e8 = puVar2;
      ppuStack_3e0 = &puStack_2c0;
      _objc_msgSendSuper2(&lStack_400,PTR_s_layoutSubviews_112600e60);
      func_0x00010bf20c00(lVar14);
      func_0x00010c19f0e0(0x4028000000000000,0x4010000000000000,param_3 + -12.0 + -12.0,
                          0x4043000000000000,*(undefined8 *)(lVar14 + _DAT_112747f94));
      return;
    }
    return;
  }
  return;
}



/* Entry: 10646a268; end: 10646a393; -[SCContextPostSnapScrollingButtonsView destroy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646a268(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = (long)_DAT_112747f90;
  lVar3 = *(long *)(param_4 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar3 = (long)_DAT_112747f94;
  func_0x00010c12c960(*(undefined8 *)(param_4 + lVar3));
  uVar1 = *(undefined8 *)(param_4 + lVar4);
  *(undefined8 *)(param_4 + lVar4) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_4 + lVar3);
  *(undefined8 *)(param_4 + lVar3) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10646a394;
  puStack_148 = PTR_PTR_1126f1478;
  lStack_150 = lVar2;
  lStack_140 = lVar3;
  lStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_150,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar2);
  func_0x00010c19f0e0(0x4028000000000000,0x4010000000000000,param_3 + -12.0 + -12.0,
                      0x4043000000000000,*(undefined8 *)(lVar2 + _DAT_112747f94));
  return;
}



/* Entry: 10646a394; end: 10646a407; -[SCContextPostSnapScrollingButtonsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646a394(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1478;
  lStack_30 = param_4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(0x4028000000000000,0x4010000000000000,param_3 + -12.0 + -12.0,
                      0x4043000000000000,*(undefined8 *)(param_4 + _DAT_112747f94));
  return;
}



/* Entry: 10646a408; end: 10646a417; -[SCContextPostSnapScrollingButtonsView buttons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10646a408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112747f90);
}



/* Entry: 10646a418; end: 10646a4d3; -[SCContextPostSnapScrollingButtonsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646a418(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747f90,0);
  _objc_storeStrong(param_1 + _DAT_112747f8c,0);
  _objc_storeStrong(param_1 + _DAT_112747f84,0);
  _objc_storeStrong(param_1 + _DAT_112747f94,0);
  _objc_storeStrong(param_1 + _DAT_112747f74,0);
  _objc_storeStrong(param_1 + _DAT_112747f88,0);
  _objc_destroyWeak(param_1 + _DAT_112747f7c);
  _objc_storeStrong(param_1 + _DAT_112747f70,0);
  _objc_storeStrong(param_1 + _DAT_112747f78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747f80,0);
  return;
}



/* Entry: 10646a4d4; end: 10646aa67; -[SCContextPrimaryPostSnapButtonView initWithFrame:imageDownloader:imagePerformer:actionHandler:baseViewController:circumstanceEngine:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10646a4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = param_7;
  puVar3 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_c8 = PTR_PTR_1126f1480;
  puVar1 = &uStack_d0;
  uStack_d0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar22 = (long)_DAT_112747f98;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112747f9c,param_10);
    func_0x00010c161080(puVar1);
    func_0x00010c219b60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar23 = (long)_DAT_112747fa0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010befbb60(puVar1);
    uVar2 = param_11;
    FUN_10646addc(0x4033000000000000,0x4033000000000000,0x4034000000000000,0x4034000000000000,
                  param_11,param_7,param_8,0,0,0,param_12);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_112747fa4;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = uVar2;
    _objc_release(uVar21);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar22));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar2;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar21;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf34860(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar21);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar20);
    _objc_release(uVar4);
    func_0x00010c198080(puVar1);
    puVar19 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    puVar3 = PTR_s_handleTap_11252c9d8;
    func_0x00010c050900();
    lVar22 = (long)_DAT_112747fa8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar19;
    _objc_release(uVar2);
    func_0x00010c1ec5c0(*(undefined8 *)((long)puVar1 + lVar22));
    puVar20 = *(undefined8 **)((long)puVar1 + lVar22);
    func_0x00010bef9040(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain(puVar20);
    _objc_retain(puVar3);
    lVar22 = (long)_DAT_112747fac;
    _objc_retain(puVar20);
    uVar2 = *(undefined8 *)((long)param_7 + lVar22);
    *(undefined8 **)((long)param_7 + lVar22) = puVar20;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112747fb0;
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)param_7 + lVar22);
    *(undefined **)((long)param_7 + lVar22) = puVar3;
    _objc_release(uVar2);
    puVar1 = puVar20;
    func_0x00010bfe5400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar22 = (long)_DAT_112747fa4;
    uVar2 = *(undefined8 *)((long)param_7 + lVar22);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1 = puVar20;
      func_0x00010bfe5400(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x0001070bd410();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47900(uVar2);
      _objc_release(puVar6);
      _objc_release(puVar1);
      uVar2 = *(undefined8 *)((long)param_7 + lVar22);
    }
    func_0x00010c1a7f60(uVar2);
    func_0x00010c1cbf40(param_7);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar20);
    return puVar20;
  }
  return puVar1;
}



/* Entry: 10646aa68; end: 10646ab7b; -[SCContextPrimaryPostSnapButtonView configureForAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646aa68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112747fac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112747fb0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_4;
  _objc_release(uVar1);
  lVar4 = param_3;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = (long)_DAT_112747fa4;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  if (lVar4 != 0) {
    lVar2 = param_3;
    func_0x00010bfe5400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001070bd410();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47900(uVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
  }
  func_0x00010c1a7f60(uVar1,param_2,lVar4 == 0);
  func_0x00010c1cbf40(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10646ab7c; end: 10646ac1f; -[SCContextPrimaryPostSnapButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646ab7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  double in_d3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1480;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar2 = (long)_DAT_112747fb4;
  if (*(double *)(param_1 + lVar2) != in_d3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112747fa0);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030800000000000);
    _objc_release(uVar1);
    *(double *)(param_1 + lVar2) = in_d3;
  }
  return;
}



/* Entry: 10646ac20; end: 10646ac2f; -[SCContextPrimaryPostSnapButtonView intrinsicContentSize] */

void FUN_10646ac20(void)

{
  return;
}



/* Entry: 10646ac30; end: 10646ad4b; -[SCContextPrimaryPostSnapButtonView handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646ac30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112747fac;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b6038;
    _objc_alloc(PTR_PTR_1126b6038);
    lVar1 = (long)_DAT_112747fb0;
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    FUN_106468618(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000106468640(uVar4);
    func_0x00010bff0a60(puVar2,param_2,5,7,uVar3,uVar4,0xffffffffffffffff);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112747f98);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010beedca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112747f9c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0040(uVar4,param_2,uVar3,puVar2,param_1,0,&PTR___NSConcreteGlobalBlock_110923b80)
    ;
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10646ad4c; end: 10646ad4f;  */

void FUN_10646ad4c(void)

{
  return;
}



/* Entry: 10646ad50; end: 10646addb; -[SCContextPrimaryPostSnapButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646ad50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747fa0,0);
  _objc_storeStrong(param_1 + _DAT_112747fa4,0);
  _objc_storeStrong(param_1 + _DAT_112747fb0,0);
  _objc_storeStrong(param_1 + _DAT_112747fac,0);
  _objc_storeStrong(param_1 + _DAT_112747f98,0);
  _objc_destroyWeak(param_1 + _DAT_112747f9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747fa8,0);
  return;
}



/* Entry: 10646addc; end: 10646af07;  */

void FUN_10646addc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c94b0;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c01c820();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c1e0100(param_1,param_2,puVar1);
  func_0x00010c1e0280(param_3,param_4,puVar1);
  func_0x00010c21d840(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646af08; end: 10646b007; -[SCContextMetadataServiceRequestHandler initWithHttpMetadataService:httpRequestModifier:requestMetadata:] */

undefined1 *
FUN_10646af08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1488;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10646b008; end: 10646b0f3; -[SCContextMetadataServiceRequestHandler spotlightDataForRequest:] */

void FUN_10646b008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646b0f4; end: 10646b3e3;  */

void FUN_10646b0f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar4 = uVar3;
    func_0x00010bf16280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc34c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe02c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf225e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    uVar4 = uVar2;
    func_0x00010bdc1b00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b5730;
    _objc_alloc(PTR_PTR_1126b5730);
    func_0x00010c01b560();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar6 = uVar10;
    func_0x00010c25f600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    puVar12 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10646b3e4; end: 10646b433;  */

void FUN_10646b3e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c243980(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c290a40(param_2);
  func_0x00010c28fde0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10646b434; end: 10646b563;  */

void FUN_10646b434(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 == 0) && (param_5 != 0)) && (param_6 == 0)) {
    puVar1 = PTR_PTR_1126c93c8;
    _objc_alloc();
    uStack_58 = 0;
    func_0x00010c008360();
    _objc_retain(0);
    param_6 = uStack_58;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
      goto LAB_10646b4b4;
    }
  }
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
LAB_10646b4b4:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10646b564; end: 10646b56b;  */

void FUN_10646b564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10646b56c; end: 10646b5b3; -[SCContextMetadataServiceRequestHandler .cxx_destruct] */

void FUN_10646b56c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10646b5b4; end: 10646b927;  */

void FUN_10646b5b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10646b928;
  uStack_70 = 0x10646b938;
  uStack_68 = 0;
  uVar9 = param_2;
  func_0x00010bfa29a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  lVar1 = puStack_88[5];
  if (lVar1 != 0) {
    func_0x00010c291960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c94a8;
    func_0x00010c0cb140(PTR_PTR_1126c94a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar2;
    func_0x00010bf15dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea1c0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126c94a0;
    func_0x00010c0cb140(PTR_PTR_1126c94a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a7a0();
    puVar4 = PTR_PTR_1126cab80;
    func_0x00010c0cb140(PTR_PTR_1126cab80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    puVar6 = PTR_PTR_1126b5b00;
    func_0x00010c0cb140(PTR_PTR_1126b5b00);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cab88;
    func_0x00010c0cb140(PTR_PTR_1126cab88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1c60(puVar6);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126cab90;
    func_0x00010c0cb140(PTR_PTR_1126cab90);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar7);
    _objc_release(puVar8);
    uVar9 = puStack_88[5];
    func_0x00010c292e20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar7);
    _objc_release(uVar9);
    uVar9 = puStack_88[5];
    func_0x00010c260dc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0(puVar7);
    _objc_release(uVar9);
    func_0x00010c213e20(puVar7);
    func_0x00010c161620(puVar7);
    uVar9 = param_1;
    func_0x00010c24aea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10646b928; end: 10646b93f;  */

void FUN_10646b928(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10646b940; end: 10646b97f;  */

void FUN_10646b940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0b8520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10646b980; end: 10646bad3; -[SCContextSpotlightDataFetcher initWithRequestHandler:userInfoRequestProvider:circumstanceEngine:bloopsOnboardingStateProvider:] */

undefined1 *
FUN_10646b980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cab90;
    func_0x00010c0fd780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10646bad4; end: 10646bddf; -[SCContextSpotlightDataFetcher fetchSpotlightDataForSessionParams:] */

void FUN_10646bad4(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10646bde0;
  puStack_88 = &UNK_110898ec8;
  _objc_retain(param_3);
  ppuVar2 = &puStack_a0;
  uStack_80 = param_3;
  _objc_retainBlock();
  uVar13 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar13);
  uVar3 = param_3;
  FUN_1065ee048();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_retain(puVar4);
  func_0x00010c0f7fc0(uVar14);
  _objc_retain(uVar13);
  puVar5 = puVar4;
  func_0x00010bfb26a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x000108f4aec8();
  puVar12 = puVar5;
  if (iVar1 == 0) {
LAB_10646bcb0:
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    puVar10 = PTR_PTR_1126c93c8;
    _objc_retain(param_3);
    func_0x00010c0cb140(puVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    FUN_1064bcb64();
    _objc_release(param_3);
    if ((uVar6 & 1) == 0) {
      _objc_retain(puVar10);
    }
    else {
      FUN_10646c48c(puVar10,uVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar10);
    _objc_release(uVar14);
    puVar11 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2519e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    goto LAB_10646bd68;
  }
  uVar6 = param_3;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c25b720();
  if (uVar7 == 2) {
LAB_10646bc58:
    _objc_release(uVar6);
  }
  else {
    uVar7 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c25b720();
    if (uVar8 == 10) {
      _objc_release(uVar7);
      goto LAB_10646bc58;
    }
    uVar8 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c25b720();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (uVar9 != 0xc) goto LAB_10646bcb0;
  }
  _objc_retain(puVar5);
LAB_10646bd68:
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10646bde0; end: 10646bf03;  */

void FUN_10646bde0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10646bf04;
  uStack_30 = 0x10646bf14;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  if (puStack_48[5] == 0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646bf04; end: 10646bf1b;  */

void FUN_10646bf04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10646bf1c; end: 10646bf63;  */

void FUN_10646bf1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10646b5b4(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10646bf64; end: 10646bf67;  */

void FUN_10646bf64(void)

{
  return;
}



/* Entry: 10646bf68; end: 10646bfd3;  */

void FUN_10646bf68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_1065ed754(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be910c0(uVar3,param_2,*(undefined8 *)(param_1 + 0x38),uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10646bfd4; end: 10646c027;  */

void FUN_10646bfd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24b060(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10646c028; end: 10646c26b; -[SCContextSpotlightDataFetcher fetchSpotlightDataForSnapIdentity:snapContextInfo:prependPlaceholders:] */

void FUN_10646c028(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar8);
  _objc_retain(uVar7);
  puVar2 = puVar1;
  func_0x00010bfb26a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  if ((param_5 & 1) == 0) {
    _objc_retain(puVar2);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    puVar3 = PTR_PTR_1126c93c8;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0cb140(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_1064bccfc(param_3,param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    if ((uVar4 & 1) == 0) {
      _objc_retain(puVar3);
    }
    else {
      FUN_10646c48c(puVar3,uVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2519e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10646c26c; end: 10646c2af;  */

void FUN_10646c26c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be910c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10646c2b0; end: 10646c2bb;  */

void FUN_10646c2b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spotlightDataForRequest__112670640,param_2);
  return;
}


