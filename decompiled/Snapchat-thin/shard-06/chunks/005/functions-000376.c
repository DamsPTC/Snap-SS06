/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a56be8; end: 104a56d0f; -[GTMSessionCookieStorage internalSetCookie:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56be8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  if (*(long *)(param_1 + (long)_DAT_11270f678) != 1) {
    uVar1 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      if (uVar3 == 0) {
        _objc_release(uVar2);
      }
      else {
        uVar3 = param_3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08fa60();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar4 == 0) goto LAB_104a56cf8;
        uVar1 = param_1;
        func_0x00010bf51920(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 != 0) {
          func_0x00010c12d440(*(undefined8 *)(param_1 + (long)_DAT_11270f674),param_2,uVar1);
        }
        uVar2 = param_1;
        _objc_opt_class();
        func_0x00010bfd5d20();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + (long)_DAT_11270f674),param_2,param_3);
        }
      }
    }
    _objc_release(uVar1);
  }
LAB_104a56cf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a56d10; end: 104a56e67; -[GTMSessionCookieStorage setCookies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
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
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c12c2a0(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar3 = auStack_c8;
  lVar6 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c069580(param_1,param_2,*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar3 = auStack_c8;
      lVar6 = 0x10;
      lVar1 = param_3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_3 + _DAT_11270f678) == 1) {
LAB_104a56f54:
    _objc_sync_exit(param_3);
    _objc_release(param_3);
  }
  else {
    if (*(long *)(param_3 + _DAT_11270f678) == 2) {
      lVar1 = lVar6;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar1 == 0) ||
         (puVar5 = puVar4, func_0x00010bfdcf80(puVar4,param_2,lVar1), ((ulong)puVar5 & 1) == 0)) {
        _objc_release(puVar4);
        _objc_release(lVar1);
        goto LAB_104a56f54;
      }
      _objc_release(puVar4);
      _objc_release(lVar1);
    }
    _objc_sync_exit(param_3);
    _objc_release(param_3);
    func_0x00010c183fc0(param_3,param_2,puVar2);
  }
  _objc_release(lVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a56e68; end: 104a56fa3; -[GTMSessionCookieStorage setCookies:forURL:mainDocumentURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56e68(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + _DAT_11270f678) == 1) {
LAB_104a56f54:
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    if (*(long *)(param_1 + _DAT_11270f678) == 2) {
      lVar1 = param_5;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar1 == 0) ||
         (uVar3 = uVar2, func_0x00010bfdcf80(uVar2,param_2,lVar1), (uVar3 & 1) == 0)) {
        _objc_release(uVar2);
        _objc_release(lVar1);
        goto LAB_104a56f54;
      }
      _objc_release(uVar2);
      _objc_release(lVar1);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c183fc0(param_1,param_2,param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a56fa4; end: 104a57047; -[GTMSessionCookieStorage deleteCookie:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56fa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  if (param_3 != 0) {
    _objc_retain();
    _objc_sync_enter();
    lVar1 = param_1;
    func_0x00010bf51920(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12d440(*(undefined8 *)(param_1 + _DAT_11270f674),param_2,lVar1);
    }
    _objc_release(lVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a57048; end: 104a57407; -[GTMSessionCookieStorage cookiesForURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a57048(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  uint uVar20;
  undefined *puVar21;
  uint uVar22;
  undefined **ppuStack_148;
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
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c12c2a0(param_1);
  uVar2 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  FUN_104a4e16c();
  if (((uVar5 & 1) == 0) && (uVar6 = uVar3, func_0x00010c08fa60(), uVar6 != 0)) {
    ppuStack_148 = &PTR____CFConstantStringClassReference_110dad1f8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dad1f8,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuStack_148 = (undefined **)0x0;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = *(long *)(param_1 + _DAT_11270f674);
  _objc_retain();
  puVar14 = &uStack_130;
  puVar15 = auStack_f0;
  lVar8 = lVar7;
  func_0x00010bf52a60();
  puVar21 = (undefined *)0x0;
  if (lVar8 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar19 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar7);
        }
        ppuVar18 = *(undefined ***)(lStack_128 + lVar19 * 8);
        ppuVar9 = ppuVar18;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        ppuVar11 = ppuVar18;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar18;
        func_0x00010c07d5e0();
        ppuVar9 = ppuVar10;
        if ((int)uVar5 == 0) {
          ppuVar13 = ppuVar10;
          func_0x00010bfda7c0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
          if (((ulong)ppuVar13 & 1) == 0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dad1f8;
            func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dad1f8,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar10);
          }
          ppuVar10 = ppuStack_148;
          func_0x00010bfdcf80(ppuStack_148,param_2,ppuVar9);
          uVar20 = (uint)ppuVar10;
        }
        else {
          ppuVar13 = ppuVar10;
          FUN_104a4e16c();
          if (((ulong)ppuVar13 & 1) == 0) {
            func_0x00010c071ae0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110da9a38);
            uVar20 = (uint)ppuVar10;
          }
          else {
            uVar20 = 1;
          }
        }
        ppuVar10 = ppuVar11;
        func_0x00010c071ae0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110dacf38);
        if (((ulong)ppuVar10 & 1) == 0) {
          uVar6 = uVar2;
          func_0x00010bfda7c0(uVar2,param_2,ppuVar11);
          uVar22 = (uint)uVar6;
          if ((int)ppuVar12 != 0) goto LAB_104a57290;
LAB_104a572c0:
          bVar1 = false;
        }
        else {
          uVar22 = 1;
          if ((int)ppuVar12 == 0) goto LAB_104a572c0;
LAB_104a57290:
          uVar6 = uVar4;
          func_0x00010bf32ee0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
          bVar1 = uVar6 != 0;
        }
        if (((uVar20 & uVar22) == 1) && (!bVar1)) {
          if (puVar21 == (undefined *)0x0) {
            puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010befa120(puVar21,param_2,ppuVar18);
        }
        _objc_release(ppuVar11);
        _objc_release(ppuVar9);
        lVar19 = lVar19 + 1;
      } while (lVar8 != lVar19);
      puVar14 = &uStack_130;
      puVar15 = auStack_f0;
      lVar8 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,puVar14,puVar15,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  _objc_release(ppuStack_148);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_sync_exit(param_1);
    __Unwind_Resume(param_3);
    _objc_retain(puVar14);
    func_0x00010bf5fde0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183fe0(param_3,param_2,puVar14,puVar16,0);
    _objc_release(puVar14);
    _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar15);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 104a57408; end: 104a57487; -[GTMSessionCookieStorage storeCookies:forTask:] */

void FUN_104a57408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf5fde0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183fe0(param_1,param_2,param_3,uVar1,0);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a57488; end: 104a5752b; -[GTMSessionCookieStorage getCookiesForTask:completionHandler:] */

void FUN_104a57488(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    _objc_retain();
    func_0x00010bf5fde0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf519c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104a5752c; end: 104a5776b; -[GTMSessionCookieStorage cookieMatchingCookie:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5752c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
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
  _objc_retain();
  lVar9 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010bf87dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11270f674);
  _objc_retain();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  uVar14 = 0;
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        uVar14 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar5 = uVar14;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c071ae0();
        if ((int)uVar6 == 0) {
LAB_104a576c0:
          _objc_release(uVar5);
        }
        else {
          uVar6 = uVar14;
          func_0x00010bf87dc0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c071ae0();
          if ((uVar7 & 1) == 0) {
            _objc_release(uVar6);
            goto LAB_104a576c0;
          }
          uVar7 = uVar14;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((uVar8 & 1) != 0) {
            _objc_retain();
            goto LAB_104a57704;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
    uVar14 = 0;
  }
LAB_104a57704:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar13 = (long)_DAT_11270f674;
    lVar9 = *(long *)(param_3 + lVar13);
    func_0x00010bf529e0();
    if (0 < lVar9) {
      uVar14 = lVar9 + 1;
      do {
        uVar10 = *(undefined8 *)(param_3 + lVar13);
        func_0x00010c0dfd20(uVar10,param_2,uVar14 - 2);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_3;
        _objc_opt_class();
        iVar1 = (int)lVar9;
        func_0x00010bfd5d20();
        if (iVar1 != 0) {
          func_0x00010c12d3c0(*(undefined8 *)(param_3 + lVar13),param_2,uVar14 - 2);
        }
        _objc_release(uVar10);
        uVar14 = uVar14 - 1;
      } while (1 < uVar14);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 104a5776c; end: 104a57803; -[GTMSessionCookieStorage removeExpiredCookies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5776c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = (long)_DAT_11270f674;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (0 < lVar2) {
    uVar5 = lVar2 + 1;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd20(uVar3,param_2,uVar5 - 2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      _objc_opt_class();
      iVar1 = (int)lVar2;
      func_0x00010bfd5d20();
      if (iVar1 != 0) {
        func_0x00010c12d3c0(*(undefined8 *)(param_1 + lVar4),param_2,uVar5 - 2);
      }
      _objc_release(uVar3);
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}



/* Entry: 104a57804; end: 104a578cf; +[GTMSessionCookieStorage hasCookieExpired:] */

bool FUN_104a57804(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar2 = param_4;
  func_0x00010bf9cb40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    if ((uVar3 & 1) != 0) {
      if (uVar2 == 0) {
        bVar1 = false;
        goto LAB_104a578b4;
      }
      goto LAB_104a57834;
    }
    bVar1 = false;
  }
  else {
LAB_104a57834:
    func_0x00010c26f3a0(uVar2);
    bVar1 = param_1 < 0.0;
  }
  _objc_release(uVar2);
LAB_104a578b4:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 104a578d0; end: 104a57923; -[GTMSessionCookieStorage removeAllCookies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a578d0(long param_1)

{
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11270f674));
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a57924; end: 104a57967; -[GTMSessionCookieStorage cookieAcceptPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a57924(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f678);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a57968; end: 104a579a7; -[GTMSessionCookieStorage setCookieAcceptPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a57968(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_1 + _DAT_11270f678) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a579a8; end: 104a579bb; -[GTMSessionCookieStorage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a579a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f674,0);
  return;
}



/* Entry: 104a579bc; end: 104a57abb;  */

void FUN_104a579bc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c130f80(ppuVar2);
    func_0x00010c08fa60(ppuVar2);
    func_0x00010c130f80(ppuVar2);
    if (lRam00000001136a1ca0 != -1) {
      func_0x000104a581b4();
    }
    ppuVar1 = ppuVar2;
    func_0x00010c11f340();
    while (ppuVar1 != (undefined **)0x7fffffffffffffff) {
      func_0x00010bf6b860(ppuVar2);
      ppuVar1 = ppuVar2;
      func_0x00010c11f340();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104a57abc; end: 104a57b2b;  */

void FUN_104a57abc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010bef7620(puVar3,param_2,&PTR____CFConstantStringClassReference_110da9a58);
  puVar2 = puVar3;
  func_0x00010bf51e00();
  uVar1 = puRam00000001136a1c98;
  puRam00000001136a1c98 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104a57b2c; end: 104a57b5b;  */

void FUN_104a57b2c(void)

{
  if (lRam00000001136a1cb0 != -1) {
    func_0x000104a581c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1ca8);
  return;
}



/* Entry: 104a57b5c; end: 104a57ccb;  */

undefined * FUN_104a57b5c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined1 *puStack_580;
  code *pcStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined **ppuStack_560;
  undefined1 auStack_558 [1280];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_104a579bc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)auStack_558;
  _uname();
  if (iVar1 == 0) {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar6;
    FUN_104a579bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  else {
    ppuVar10 = (undefined **)0x0;
  }
  ppuVar6 = ppuVar10;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    _objc_release(ppuVar10);
    ppuVar10 = &PTR____CFConstantStringClassReference_110da9a78;
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_110da9a98;
  puStack_570 = puVar4;
  puStack_568 = puVar5;
  ppuStack_560 = ppuVar10;
  func_0x00010c013ce0();
  uVar9 = puRam00000001136a1ca8;
  puRam00000001136a1ca8 = puVar7;
  _objc_release(uVar9);
  _objc_release(ppuVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_5a0;
  pcStack_578 = FUN_104a57ccc;
  puStack_590 = puVar3;
  puStack_588 = puVar2;
  puStack_580 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_598 = PTR_PTR_1126e35b0;
  puStack_5a0 = puVar4;
  _objc_msgSendSuper2(&puStack_5a0,PTR_s_init_1125d9248);
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar8 = ppuVar6;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppuVar10 + 8);
    *(undefined ***)((long)ppuVar10 + 8) = ppuVar8;
    _objc_release(uVar9);
  }
  _objc_release(ppuVar6);
  return (undefined *)ppuVar10;
}



/* Entry: 104a57ccc; end: 104a57d43; -[GTMUserAgentStringProvider initWithUserAgentString:] */

undefined1 * FUN_104a57ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e35b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a57d44; end: 104a57d4b; -[GTMUserAgentStringProvider cachedUserAgent] */

void FUN_104a57d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a57d4c; end: 104a57d53; -[GTMUserAgentStringProvider userAgent] */

void FUN_104a57d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a57d54; end: 104a57d5f; -[GTMUserAgentStringProvider .cxx_destruct] */

void FUN_104a57d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a57d60; end: 104a57db3; -[GTMStandardUserAgentProvider userAgent] */

void FUN_104a57d60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf27640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    FUN_104a57db4(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175560(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a57db4; end: 104a57e37;  */

void FUN_104a57db4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_104a57e7c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_104a57b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a57e38; end: 104a57e43; -[GTMStandardUserAgentProvider cachedUserAgent] */

void FUN_104a57e38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 104a57e44; end: 104a57e4b; -[GTMStandardUserAgentProvider setCachedUserAgent:] */

void FUN_104a57e44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a57e4c; end: 104a57e7b; -[GTMStandardUserAgentProvider .cxx_destruct] */

void FUN_104a57e4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a57e7c; end: 104a5816f;  */

void FUN_104a57e7c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ae190;
  _objc_opt_class(PTR_PTR_1126ae190);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  if (param_1 == (undefined **)0x0) {
    param_1 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar3 = param_1;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = ppuRam00000001136a1cb8;
  func_0x00010c0dff20(ppuRam00000001136a1cb8,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = param_1;
    func_0x00010c0dfec0(param_1,param_2,&PTR____CFConstantStringClassReference_110da9ab8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
        func_0x00010c114d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010c114f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110da9ad8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = ppuVar4;
      }
      else {
        ppuVar4 = ppuVar1;
        _objc_retain(ppuVar1);
        ppuVar5 = ppuVar3;
        ppuVar3 = ppuVar4;
      }
      _objc_release(ppuVar5);
    }
    ppuVar4 = ppuVar3;
    FUN_104a579bc(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = param_1;
    func_0x00010c0dfec0(param_1,param_2,&PTR____CFConstantStringClassReference_110da9af8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar6 = ppuVar3;
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar6 = param_1;
      func_0x00010c0dfec0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd29f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar6;
      func_0x00010c08fa60();
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar3 = param_1;
        func_0x00010c0dfec0(param_1,param_2,&PTR____CFConstantStringClassReference_110dceb18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        ppuVar6 = ppuVar3;
      }
    }
    ppuVar5 = ppuVar6;
    FUN_104a579bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    ppuVar3 = ppuVar4;
    if (ppuVar6 != (undefined **)0x0) {
      func_0x00010c25cde0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e6dad8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    if (ppuRam00000001136a1cb8 == (undefined **)0x0) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      ppuVar4 = ppuRam00000001136a1cb8;
      ppuRam00000001136a1cb8 = ppuVar6;
      _objc_release(ppuVar4);
    }
    func_0x00010c1d0560(ppuRam00000001136a1cb8,param_2,ppuVar3,ppuVar1);
    _objc_retain(ppuVar3);
    _objc_release(ppuVar5);
  }
  else {
    _objc_retain();
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104a58170; end: 104a581db;  */

void FUN_104a58170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104a581dc; end: 104a58227; -[GTMSessionFetcherService dealloc] */

void FUN_104a581dc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6f220();
  func_0x00010beec360(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126e35c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a58228; end: 104a5828b; -[GTMSessionFetcherService serialQueueForNewFetcher:] */

void FUN_104a58228(long param_1)

{
  char *pcVar1;
  
  _objc_retain();
  _objc_sync_enter();
  pcVar1 = *(char **)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    _objc_retain(pcVar1);
  }
  else {
    pcVar1 = "com.google.GTMSessionFetcher.serialCallbackQueue";
    _dispatch_queue_create_with_target_V2("com.google.GTMSessionFetcher.serialCallbackQueue",0);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
  return;
}



/* Entry: 104a5828c; end: 104a585cb; -[GTMSessionFetcherService fetcherWithRequest:fetcherClass:] */

void FUN_104a5828c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_alloc(param_4);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ebc0(param_4,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c15e7a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175be0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c15fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd8e0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf34c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a900(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf5bf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186060(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c119de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5440(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf11180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16caa0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf51960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183fa0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf01860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167400(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf01260(param_1);
  func_0x00010c167180(param_4,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010bf011e0(param_1);
  func_0x00010c167140(param_4,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010bf46580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180aa0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c07c960(param_1);
  func_0x00010c1eda00(param_4,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010c13f400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed8e0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c0c2bc0(param_1);
  func_0x00010c1c35e0(param_4);
  func_0x00010c0cd960(param_1);
  func_0x00010c1c7c80(param_4);
  uVar1 = param_1;
  func_0x00010c0ccc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7800(param_4,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c255f80(param_1);
  func_0x00010c20bf00(param_4,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5020(param_4,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1fd6a0(param_4,param_2,param_1);
  uVar1 = param_1;
  func_0x00010c23df80(param_1);
  func_0x00010c202f40(param_4,param_2,uVar1);
  uVar1 = param_1;
  func_0x00010c2912c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dee0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c26b620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212ee0(param_4,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 104a585cc; end: 104a58633; -[GTMSessionFetcherService fetcherWithRequest:] */

void FUN_104a585cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae190;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010bfabc00(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a58634; end: 104a5868b; -[GTMSessionFetcherService fetcherWithURL:] */

void FUN_104a58634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfabbe0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5868c; end: 104a586e3; -[GTMSessionFetcherService fetcherWithURLString:] */

void FUN_104a5868c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfabc40(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a586e4; end: 104a5877b; -[GTMSessionFetcherService addDecorator:] */

void FUN_104a586e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0xd8);
  }
  func_0x00010befaaa0(lVar1,param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5877c; end: 104a587db; -[GTMSessionFetcherService decorators] */

void FUN_104a5877c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a587dc; end: 104a5896f; -[GTMSessionFetcherService removeDecorator:] */

void FUN_104a587dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0xd8);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      uVar3 = uVar5 + lVar2;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        if (*(long *)(lStack_128 + lVar7 * 8) == param_3) goto LAB_104a588d0;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      uVar5 = uVar3;
    } while (lVar2 != 0);
  }
LAB_104a588d0:
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0xd8);
  func_0x00010bf529e0();
  if (uVar5 < uVar3) {
    func_0x00010c12dc20(*(undefined8 *)(param_1 + 0xd8),param_2,uVar5);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(param_1);
    __Unwind_Resume();
    _objc_retain();
    _objc_sync_enter();
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c15fac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104a58970; end: 104a589cf; -[GTMSessionFetcherService session] */

void FUN_104a58970(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a589d0; end: 104a58b23; -[GTMSessionFetcherService sessionWithCreationBlock:] */

void FUN_104a589d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = param_1;
    _objc_retain(param_1);
    _objc_sync_enter();
    func_0x00010c250900(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd860(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104a58b24; end: 104a58b67; -[GTMSessionFetcherService sessionDelegate] */

void FUN_104a58b24(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a58b68; end: 104a58c23; -[GTMSessionFetcherService addRunningFetcher:forHost:] */

void FUN_104a58b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0dff20(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_4);
  }
  else {
    func_0x00010befa120();
    _objc_release(param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a58c24; end: 104a58cdf; -[GTMSessionFetcherService addDelayedFetcher:forHost:] */

void FUN_104a58c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0dff20(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_4);
  }
  else {
    func_0x00010befa120();
    _objc_release(param_3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a58ce0; end: 104a58def; -[GTMSessionFetcherService isDelayingFetcher:] */

bool FUN_104a58ce0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0dff20(lVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bfece20();
    bVar4 = lVar3 != 0 && lVar1 != 0x7fffffffffffffff;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 104a58df0; end: 104a58fab; -[GTMSessionFetcherService fetcherShouldBeginFetching:] */

uint FUN_104a58df0(ulong param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  uint unaff_w24;
  ulong uVar8;
  
  _objc_retain();
  ppuVar7 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar7;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar7;
  func_0x00010c08fa60();
  if ((ppuVar3 == (undefined **)0x0) &&
     (ppuVar3 = ppuVar2, func_0x00010c072e60(), (int)ppuVar3 != 0)) {
    _objc_release(ppuVar7);
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8b7b8;
  }
  ppuVar3 = ppuVar7;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain();
    _objc_sync_enter();
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c0dff20(lVar4,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) ||
       (lVar5 = lVar4, func_0x00010bfece20(lVar4,param_2,param_3), lVar5 == 0x7fffffffffffffff)) {
      ppuVar3 = param_3;
      func_0x00010c0829e0();
      if ((((ulong)ppuVar3 & 1) == 0) && (uVar8 = *(ulong *)(param_1 + 0x18), uVar8 != 0)) {
        uVar6 = param_1;
        _objc_opt_class();
        func_0x00010c0df080();
        if (uVar8 <= uVar6) {
          func_0x00010bef7cc0(param_1,param_2,param_3,ppuVar7);
          unaff_w24 = 0;
          bVar1 = true;
          goto LAB_104a58f30;
        }
      }
      func_0x00010befb0e0(param_1,param_2,param_3,ppuVar7);
      bVar1 = true;
      unaff_w24 = 1;
    }
    else {
      bVar1 = false;
    }
LAB_104a58f30:
    _objc_release(lVar4);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    if (bVar1) {
      func_0x00010c1fd780(param_3,param_2,ppuVar7);
      goto LAB_104a58f60;
    }
  }
  unaff_w24 = 1;
LAB_104a58f60:
  _objc_release(ppuVar7);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  return unaff_w24 & 1;
}



/* Entry: 104a58fac; end: 104a58fbf; -[GTMSessionFetcherService startFetcher:] */

void FUN_104a58fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf180f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_beginFetchMayDelay_mayAuthorize__1125a39e0,0,1,1);
  return;
}



/* Entry: 104a58fc0; end: 104a5903b; -[GTMSessionFetcherService delegateDispatcherForFetcher:] */

void FUN_104a58fc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar3 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      puVar1 = PTR_PTR_1126ae190;
      _objc_opt_class(PTR_PTR_1126ae190);
      uVar2 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_104a59024;
    }
    _objc_release(uVar3);
  }
  uVar3 = 0;
LAB_104a59024:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104a5903c; end: 104a5910f; -[GTMSessionFetcherService fetcherDidBeginFetching:] */

void FUN_104a5903c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  func_0x00010bf6b0a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 == lVar1)) {
      lVar3 = param_3;
      func_0x00010c1604a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010c19b620(param_1,param_2,param_3,lVar3);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a59110; end: 104a59117; -[GTMSessionFetcherService stopFetcher:] */

void FUN_104a59110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stopFetching_112673200);
  return;
}



/* Entry: 104a59118; end: 104a5911f; -[GTMSessionFetcherService fetcherDidStop:] */

void FUN_104a59118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetcherDidStop_callbacksPending__1125c8848,param_3,0);
  return;
}



/* Entry: 104a59120; end: 104a59503; -[GTMSessionFetcherService fetcherDidStop:callbacksPending:] */

long FUN_104a59120(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c15f7a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if ((param_4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bf6b0a0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c540();
      _objc_release(uVar2);
    }
    _objc_retain();
    _objc_sync_enter();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c0dff20(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c0dff20(lVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    puVar13 = (undefined *)0x0;
    while (lVar5 = lVar4, func_0x00010bf529e0(), lVar5 != 0) {
      uVar2 = param_1;
      _objc_opt_class();
      func_0x00010c0df080();
      if (*(ulong *)(param_1 + 0x18) <= uVar2) break;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      lVar5 = lVar4;
      _objc_retain();
      lVar8 = lVar5;
      func_0x00010bf52a60();
      if (lVar8 == 0) {
        _objc_release(lVar5);
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        lVar10 = *plStack_1a0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_1a0 != lVar10) {
              _objc_enumerationMutation(lVar5);
            }
            lVar15 = *(long *)(lStack_1a8 + lVar12 * 8);
            if (lVar14 == 0) {
LAB_104a592b4:
              _objc_retain();
              _objc_release(lVar14);
              lVar14 = lVar15;
            }
            else {
              lVar6 = lVar15;
              func_0x00010c15f800();
              lVar7 = lVar14;
              func_0x00010c15f800();
              if (lVar6 < lVar7) goto LAB_104a592b4;
            }
            lVar12 = lVar12 + 1;
          } while (lVar8 != lVar12);
          lVar8 = lVar5;
          func_0x00010bf52a60(lVar5,param_2,&uStack_1b0,auStack_f0,0x10);
        } while (lVar8 != 0);
        _objc_release(lVar5);
        if (lVar14 != 0) {
          func_0x00010befb0e0(param_1,param_2,lVar14,lVar1);
          lVar8 = *(long *)(param_1 + 0x10);
          func_0x00010c0dff20(lVar8,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          func_0x00010c12d440(lVar5,param_2,lVar14);
          if (puVar13 == (undefined *)0x0) {
            puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010befa120();
          lVar3 = lVar8;
        }
      }
      _objc_release(lVar14);
    }
    lVar5 = lVar3;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    }
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,lVar1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain();
    puVar9 = puVar13;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar3 = *plStack_1e0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar3) {
            _objc_enumerationMutation(puVar13);
          }
          func_0x00010c24ebe0(param_1,param_2,*(undefined8 *)(lStack_1e8 + (long)puVar11 * 8));
          puVar11 = puVar11 + 1;
        } while (puVar9 != puVar11);
        puVar9 = puVar13;
        func_0x00010bf52a60(puVar13,param_2,&uStack_1f0,auStack_170,0x10);
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar13);
    func_0x00010c1fd780(param_3,param_2,0);
    _objc_release(puVar13);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(param_3);
  lVar1 = param_3;
  func_0x00010c0df2c0();
  func_0x00010c0dec40(param_3);
  return param_3 + lVar1;
}



/* Entry: 104a59504; end: 104a59533; -[GTMSessionFetcherService numberOfFetchers] */

long FUN_104a59504(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0df2c0();
  func_0x00010c0dec40(param_1);
  return param_1 + lVar1;
}



/* Entry: 104a59534; end: 104a5969f; -[GTMSessionFetcherService numberOfRunningFetchers] */

undefined * FUN_104a59534(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010c0dff20(lVar3,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        puVar8 = puVar8 + lVar11;
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  pcStack_138 = FUN_104a596a0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_sync_enter();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar9 = *(long *)(lVar2 + 8);
  _objc_retain();
  lVar1 = lVar9;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar10 = *plStack_250;
    do {
      lVar11 = 0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar4 = *(long *)(lVar2 + 8);
        func_0x00010c0dff20(lVar4,param_2,*(undefined8 *)(lStack_258 + lVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        puVar8 = puVar8 + lVar3;
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_260,auStack_218,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_sync_exit(lVar2);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar2);
  lVar9 = lVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_104a5980c;
  uStack_290 = 0;
  puStack_288 = puVar8;
  lStack_280 = lVar1;
  lStack_278 = lVar2;
  ppuStack_270 = &puStack_140;
  _objc_retain();
  _objc_sync_enter();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_104a5990c;
  puStack_2a0 = &UNK_1108c0730;
  _objc_retain();
  ppuVar6 = &puStack_2b8;
  puStack_298 = puVar5;
  _objc_retainBlock(ppuVar6);
  func_0x00010bf97ce0(*(undefined8 *)(lVar9 + 0x10),param_2,ppuVar6);
  func_0x00010bf97ce0(*(undefined8 *)(lVar9 + 8),param_2,ppuVar6);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar5;
  }
  _objc_retain(puVar8);
  _objc_release(ppuVar6);
  _objc_release(puStack_298);
  _objc_release(puVar5);
  _objc_sync_exit(lVar9);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 104a596a0; end: 104a5980b; -[GTMSessionFetcherService numberOfDelayedFetchers] */

undefined * FUN_104a596a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0dff20(lVar3,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        puVar8 = puVar8 + lVar4;
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  lVar1 = lVar2;
  __Unwind_Resume();
  pcStack_138 = FUN_104a5980c;
  uStack_160 = 0;
  puStack_158 = puVar8;
  lStack_150 = lVar2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_sync_enter();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104a5990c;
  puStack_170 = &UNK_1108c0730;
  _objc_retain();
  ppuVar6 = &puStack_188;
  puStack_168 = puVar5;
  _objc_retainBlock(ppuVar6);
  func_0x00010bf97ce0(*(undefined8 *)(lVar1 + 0x10),param_2,ppuVar6);
  func_0x00010bf97ce0(*(undefined8 *)(lVar1 + 8),param_2,ppuVar6);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar5;
  }
  _objc_retain(puVar8);
  _objc_release(ppuVar6);
  _objc_release(puStack_168);
  _objc_release(puVar5);
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 104a5980c; end: 104a5990b; -[GTMSessionFetcherService issuedFetchers] */

void FUN_104a5980c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  _objc_sync_enter();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104a5990c;
  puStack_40 = &UNK_1108c0730;
  _objc_retain();
  ppuVar2 = &puStack_58;
  puStack_38 = puVar1;
  _objc_retainBlock(ppuVar2);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x10),param_2,ppuVar2);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 8),param_2,ppuVar2);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  puVar4 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar1;
  }
  _objc_retain(puVar4);
  _objc_release(ppuVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a5990c; end: 104a59913;  */

void FUN_104a5990c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObjectsFromArray__11259c200);
  return;
}



/* Entry: 104a59914; end: 104a59a4b; -[GTMSessionFetcherService issuedFetchersWithRequestURL:] */

void FUN_104a59914(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010beec880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083fc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104a59a4c;
    puStack_50 = &UNK_1107c0328;
    lStack_48 = lVar2;
    _objc_retain(lVar2);
    lVar3 = param_1;
    func_0x00010bfed480(param_1,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010c0e0320(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(lStack_48);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104a59a4c; end: 104a59acf;  */

undefined8 FUN_104a59a4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c134680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010c071ae0(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104a59ad0; end: 104a59e0f; -[GTMSessionFetcherService stopAllFetchers] */

void FUN_104a59ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  _objc_retain();
  _objc_sync_enter();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init();
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar7);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_2a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_2a0 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = *(long *)(lStack_2a8 + lVar9 * 8);
        lStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        plStack_2e0 = (long *)0x0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        _objc_retain();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar10 = *plStack_2e0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_2e0 != lVar10) {
                _objc_enumerationMutation(lVar5);
              }
              func_0x00010c255f40(param_1,param_2,*(undefined8 *)(lStack_2e8 + lVar11 * 8));
              lVar11 = lVar11 + 1;
            } while (lVar6 != lVar11);
            lVar6 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_2f0,auStack_170,0x10);
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar4);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_2b0,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_320;
    do {
      lVar9 = 0;
      do {
        if (*plStack_320 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        lVar5 = *(long *)(lStack_328 + lVar9 * 8);
        lStack_368 = 0;
        uStack_370 = 0;
        uStack_358 = 0;
        plStack_360 = (long *)0x0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        _objc_retain();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar10 = *plStack_360;
          do {
            lVar11 = 0;
            do {
              if (*plStack_360 != lVar10) {
                _objc_enumerationMutation(lVar5);
              }
              func_0x00010c255f40(param_1,param_2,*(undefined8 *)(lStack_368 + lVar11 * 8));
              lVar11 = lVar11 + 1;
            } while (lVar6 != lVar11);
            lVar6 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_370,auStack_270,0x10);
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar4);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_330,auStack_1f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_sync_enter();
  uVar7 = *(undefined8 *)(lVar2 + 0x78);
  _objc_retain(uVar7);
  _objc_sync_exit(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 104a59e10; end: 104a59e53; -[GTMSessionFetcherService stoppedAllFetchersDate] */

void FUN_104a59e10(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a59e54; end: 104a59e97; -[GTMSessionFetcherService reuseSession] */

bool FUN_104a59e54(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104a59e98; end: 104a59f2f; -[GTMSessionFetcherService setReuseSession:] */

void FUN_104a59e98(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter();
  if (((*(long *)(param_1 + 0x20) == 0 ^ param_3) & 1) == 0) {
    func_0x00010beec380(param_1);
    if (param_3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126ae3f8;
      _objc_alloc();
      func_0x00010c033c40(*(undefined8 *)(param_1 + 0xd0));
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a59f30; end: 104a59f93; -[GTMSessionFetcherService resetSession] */

void FUN_104a59f30(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = param_1;
  _objc_retain(param_1);
  _objc_sync_enter();
  func_0x00010c139660(lVar1);
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 104a59f94; end: 104a59fe3; -[GTMSessionFetcherService resetSessionInternal] */

void FUN_104a59f94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010beec380();
    puVar1 = PTR_PTR_1126ae3f8;
    _objc_alloc();
    func_0x00010c033c40(*(undefined8 *)(param_1 + 0xd0));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104a59fe4; end: 104a5a083; -[GTMSessionFetcherService resetSessionForDispatcherDiscardTimer:] */

void FUN_104a59fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = param_1;
  _objc_retain();
  _objc_sync_enter();
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x00010bf810e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == param_3) {
    func_0x00010c139660(lVar1);
  }
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5a084; end: 104a5a0c7; -[GTMSessionFetcherService unusedSessionTimeout] */

undefined8 FUN_104a5a084(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5a0c8; end: 104a5a127; -[GTMSessionFetcherService setUnusedSessionTimeout:] */

void FUN_104a5a0c8(undefined8 param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_2 + 0xd0) = param_1;
  func_0x00010c18ece0(param_1,*(undefined8 *)(param_2 + 0x20));
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5a128; end: 104a5a12f; -[GTMSessionFetcherService abandonDispatcher] */

void FUN_104a5a128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_abandon_112598a80);
  return;
}



/* Entry: 104a5a130; end: 104a5a187; -[GTMSessionFetcherService runningFetchersByHost] */

void FUN_104a5a130(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a188; end: 104a5a1ff; -[GTMSessionFetcherService setRunningFetchersByHost:] */

void FUN_104a5a188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5a200; end: 104a5a257; -[GTMSessionFetcherService delayedFetchersByHost] */

void FUN_104a5a200(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a258; end: 104a5a2cf; -[GTMSessionFetcherService setDelayedFetchersByHost:] */

void FUN_104a5a258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5a2d0; end: 104a5a313; -[GTMSessionFetcherService authorizer] */

void FUN_104a5a2d0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a314; end: 104a5a3c3; -[GTMSessionFetcherService setAuthorizer:] */

void FUN_104a5a314(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(ulong *)(param_1 + 0x68) != uVar1) {
    func_0x00010bf6f220(param_1);
  }
  _objc_storeStrong((ulong *)(param_1 + 0x68),param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_setFetcherService__1126447b8);
  if ((uVar2 & 1) != 0) {
    func_0x00010c19b660(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5a3c4; end: 104a5a42b; -[GTMSessionFetcherService detachAuthorizer] */

void FUN_104a5a3c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  _objc_opt_respondsToSelector(uVar1,PTR_s_fetcherService_1125c8878);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    func_0x00010bfabb40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == param_1) {
      func_0x00010c19b660(*(undefined8 *)(param_1 + 0x68));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104a5a42c; end: 104a5a46f; -[GTMSessionFetcherService callbackQueue] */

void FUN_104a5a42c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a470; end: 104a5a477; -[GTMSessionFetcherService setCallbackQueue:] */

void FUN_104a5a470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c175c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCallbackQueue_isConcurrent__11263b120,param_3,0);
  return;
}



/* Entry: 104a5a478; end: 104a5a47f; -[GTMSessionFetcherService setConcurrentCallbackQueue:] */

void FUN_104a5a478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c175c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCallbackQueue_isConcurrent__11263b120,param_3,1);
  return;
}



/* Entry: 104a5a480; end: 104a5a51b; -[GTMSessionFetcherService setCallbackQueue:isConcurrent:] */

void FUN_104a5a480(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  puVar2 = PTR___dispatch_main_q_11034be20;
  if (param_3 == 0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
  }
  else {
    lVar3 = param_3;
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar3;
  }
  _objc_release(uVar4);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_4;
  }
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5a51c; end: 104a5a55f; -[GTMSessionFetcherService sessionDelegateQueue] */

void FUN_104a5a51c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a560; end: 104a5a5bf; -[GTMSessionFetcherService userAgent] */

void FUN_104a5a560(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c291200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a5c0; end: 104a5a64f; -[GTMSessionFetcherService setUserAgent:] */

void FUN_104a5a5c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae400;
    _objc_alloc();
    func_0x00010c05a860();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5a650; end: 104a5a693; -[GTMSessionFetcherService userAgentProvider] */

void FUN_104a5a650(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5a694; end: 104a5a6e3; -[GTMSessionFetcherService setUserAgentProvider:] */

void FUN_104a5a694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5a6e4; end: 104a5a6eb; -[GTMSessionFetcherService delegateQueue] */

undefined8 FUN_104a5a6e4(void)

{
  return 0;
}



/* Entry: 104a5a6ec; end: 104a5a7ef; +[GTMSessionFetcherService numberOfNonBackgroundSessionFetchers:] */

long FUN_104a5a6ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_108 + lVar5 * 8);
        func_0x00010c0829e0(uVar2);
        lVar3 = lVar3 + (ulong)((uint)uVar2 ^ 1);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    return *(long *)(param_3 + 0x18);
  }
  return lVar3;
}



/* Entry: 104a5a7f0; end: 104a5a7f7; -[GTMSessionFetcherService maxRunningFetchersPerHost] */

undefined8 FUN_104a5a7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a5a7f8; end: 104a5a7ff; -[GTMSessionFetcherService setMaxRunningFetchersPerHost:] */

void FUN_104a5a7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104a5a800; end: 104a5a80b; -[GTMSessionFetcherService configuration] */

void FUN_104a5a800(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 104a5a80c; end: 104a5a813; -[GTMSessionFetcherService setConfiguration:] */

void FUN_104a5a80c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a5a814; end: 104a5a81f; -[GTMSessionFetcherService configurationBlock] */

void FUN_104a5a814(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 104a5a820; end: 104a5a827; -[GTMSessionFetcherService setConfigurationBlock:] */

void FUN_104a5a820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a828; end: 104a5a833; -[GTMSessionFetcherService cookieStorage] */

void FUN_104a5a828(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a5a834; end: 104a5a83b; -[GTMSessionFetcherService setCookieStorage:] */

void FUN_104a5a834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a5a83c; end: 104a5a847; -[GTMSessionFetcherService challengeBlock] */

void FUN_104a5a83c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 104a5a848; end: 104a5a84f; -[GTMSessionFetcherService setChallengeBlock:] */

void FUN_104a5a848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a850; end: 104a5a85b; -[GTMSessionFetcherService credential] */

void FUN_104a5a850(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 104a5a85c; end: 104a5a863; -[GTMSessionFetcherService setCredential:] */

void FUN_104a5a85c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a5a864; end: 104a5a86f; -[GTMSessionFetcherService proxyCredential] */

void FUN_104a5a864(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 104a5a870; end: 104a5a877; -[GTMSessionFetcherService setProxyCredential:] */

void FUN_104a5a870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}


