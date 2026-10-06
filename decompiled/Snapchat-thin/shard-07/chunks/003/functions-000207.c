/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053b8ea4; end: 1053b8f53; -[SCDeltaSyncPersistedToken hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1053b8ea4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722604);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722608);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11272260c);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722610);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_112722614);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053b9034:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053b9040;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + (long)_DAT_11272260c) == *(long *)(param_3 + _DAT_11272260c) &&
        (*(long *)((long)puVar3 + (long)_DAT_112722614) == *(long *)(param_3 + _DAT_112722614))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112722604);
      if ((lVar5 == *(long *)(param_3 + _DAT_112722604)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112722608);
        if ((lVar5 == *(long *)(param_3 + _DAT_112722608)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112722610);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_112722610)) {
            func_0x00010c071ae0();
            goto LAB_1053b9040;
          }
          goto LAB_1053b9034;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053b9040:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053b8f54; end: 1053b905b; -[SCDeltaSyncPersistedToken isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1053b8f54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053b9034:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053b9040;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + (long)_DAT_11272260c) == *(long *)(param_3 + (long)_DAT_11272260c) &&
        (*(long *)(param_1 + (long)_DAT_112722614) == *(long *)(param_3 + (long)_DAT_112722614)))))
    {
      lVar3 = *(long *)(param_1 + (long)_DAT_112722604);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112722604)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112722608);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112722608)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112722610);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_112722610)) {
            func_0x00010c071ae0();
            goto LAB_1053b9040;
          }
          goto LAB_1053b9034;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053b9040:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053b905c; end: 1053b906b; -[SCDeltaSyncPersistedToken kind] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053b905c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112722604);
}



/* Entry: 1053b906c; end: 1053b907b; -[SCDeltaSyncPersistedToken name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053b906c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112722608);
}



/* Entry: 1053b907c; end: 1053b908b; -[SCDeltaSyncPersistedToken id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053b907c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272260c);
}



/* Entry: 1053b908c; end: 1053b9117;  */

void FUN_1053b908c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c087060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053b9118; end: 1053b91a3;  */

void FUN_1053b9118(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053b91a4; end: 1053b91f7;  */

undefined8 FUN_1053b91a4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bfe5d80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053b91f8; end: 1053b92b3;  */

undefined8 FUN_1053b91f8(void)

{
  int iVar1;
  
  if ((bRam0000000113819800 & 1) == 0) {
    iVar1 = 0x13819800;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819798 = 0xe;
      pcRam00000001138197a0 = "version";
      uRam00000001138197a8 = 0x1010000;
      pcRam00000001138197b0 = FUN_1053b92b4;
      pcRam00000001138197b8 = FUN_1053b92ec;
      ppuRam0000000113819790 = &PTR_FUN_110862958;
      uRam00000001138197d0 = 0;
      uRam00000001138197c8 = 0;
      uRam00000001138197e0 = 0;
      uRam00000001138197d8 = 0;
      uRam00000001138197f0 = 0;
      uRam00000001138197e8 = 0;
      uRam00000001138197f8 = 0;
      ___cxa_atexit(FUN_1050077c0,0x113819790,0x100000000);
      ___cxa_guard_release(0x113819800);
    }
  }
  return 0x113819790;
}



/* Entry: 1053b92b4; end: 1053b92eb;  */

undefined8 FUN_1053b92b4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1053b92ec; end: 1053b933f;  */

undefined8 FUN_1053b92ec(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053b9340; end: 1053b9363; +[SCDeltaSyncPersistedToken objectClassFunctionPointer] */

undefined1  [16] FUN_1053b9340(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1053b935c;
  auVar1._0_8_ = 0x1053b9354;
  return auVar1;
}



/* Entry: 1053b9364; end: 1053b947f;  */

undefined1 *
FUN_1053b9364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126e7de8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1053b9480; end: 1053b98ef;  */

void FUN_1053b9480(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c087060();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar8 = param_1;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x0001001b9e08(puVar8,
                              "SELECT rowid, p FROM deltasync__persistedtoken WHERE kind=?1 AND name=?2 AND id=?3 LIMIT 1"
                             );
          if (puVar8 != (undefined *)0x0) {
            puVar1 = param_1;
            func_0x00010c087060(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_1;
            func_0x00010c0d4f60(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar8,2,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_1;
            func_0x00010bfe5d80(param_1);
            _sqlite3_bind_int64(puVar8,3,puVar1);
            puVar1 = puVar8;
            _sqlite3_step();
            if ((int)puVar1 == 100) {
              puVar1 = puVar8;
              _sqlite3_column_int64(puVar8,0);
              puVar2 = PTR_PTR_1126b04a8;
              func_0x00010bf877e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126b8218);
              _sqlite3_column_blob(puVar8,1);
              _sqlite3_column_bytes(puVar8,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(puVar2);
              _sqlite3_reset(puVar8);
              if (puVar3 == (undefined *)0x0) goto LAB_1053b9820;
              puVar8 = PTR_PTR_1126b8220;
              _objc_alloc(PTR_PTR_1126b8220);
              puVar2 = puVar3;
              func_0x00010c087060(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c0d4f60(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010bfe5d80(puVar3);
              puVar6 = puVar3;
              func_0x00010bf4df40(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010c298be0(puVar3);
              FUN_1053b9364(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
              param_1 = puVar3;
              goto LAB_1053b95a0;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b8218);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126b8220;
        _objc_alloc(PTR_PTR_1126b8220);
        puVar2 = puVar3;
        func_0x00010c087060(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0d4f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfe5d80(puVar3);
        puVar6 = puVar3;
        func_0x00010bf4df40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c298be0(puVar3);
        FUN_1053b9364(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_1053b95a0:
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1053b9828;
      }
LAB_1053b9820:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1053b9828:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053b98f0; end: 1053b9963;  */

void FUN_1053b98f0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1053b9480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053b9964; end: 1053b9c13;  */

void FUN_1053b9964(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b8220;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1053b9480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126b8220;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126b8220;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c087060(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0d4f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bfe5d80(param_1);
      puVar5 = param_1;
      func_0x00010bf4df40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c298be0(param_1);
      FUN_1053b9364(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c087060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bfe5d80();
    *(undefined **)(puVar1 + 0x28) = puVar7;
    puVar7 = param_1;
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c298be0();
    *(undefined **)(puVar1 + 0x38) = puVar7;
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053b9c14; end: 1053b9c7b;  */

void FUN_1053b9c14(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b8218;
    _objc_alloc(PTR_PTR_1126b8218);
    func_0x00010c0211e0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053b9c7c; end: 1053b9cb7; -[SCDeltaSyncPersistedTokenChangeRequest .cxx_destruct] */

void FUN_1053b9c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1053b9cb8; end: 1053b9cc3; -[SCDeltaSyncPersistedTokenChangeRequest table] */

char * FUN_1053b9cb8(void)

{
  return "deltasync__persistedtoken";
}



/* Entry: 1053b9cc4; end: 1053b9d0b; -[SCDeltaSyncPersistedTokenChangeRequest createTableWithSQLite:] */

void FUN_1053b9cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd9b370,0xa6,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1053b9d0c; end: 1053ba153; -[SCDeltaSyncPersistedTokenChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1053b9d0c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1053b9c14(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1053ba154(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar10;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO deltasync__persistedtoken (p, kind, name, id) VALUES (?1, ?2, ?3, ?4)"
                       );
    if (lVar6 == 0) goto LAB_1053ba0f0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar4);
    puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
    _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar6,4,uVar9);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1053ba0f0;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar5);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b8218);
    func_0x00010c21c9a0(puVar8);
LAB_1053ba0d8:
    _objc_release(puVar8);
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM deltasync__persistedtoken WHERE rowid=?1");
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b8218);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar8);
            _objc_release(puVar5);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1053ba0fc;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_1053ba0fc;
    }
    FUN_1053b9c14(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1053ba154(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE deltasync__persistedtoken SET p=?1, kind=?3, name=?4, id=?5 WHERE rowid=?2 LIMIT 1"
                       );
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar4);
      puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
      _sqlite3_bind_text(param_3,4,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,5,uVar9);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b8218);
        func_0x00010c21c9a0(puVar8);
        goto LAB_1053ba0d8;
      }
    }
LAB_1053ba0f0:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1053ba0fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053ba154; end: 1053ba357;  */

ulong FUN_1053ba154(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1053ba358(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1053ba358(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010bfe5d80(param_2);
  lVar9 = param_2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar9 == 0) {
    uVar12 = 0;
  }
  else {
    lVar10 = lVar9;
    _objc_retainAutorelease(lVar9);
    func_0x00010bf25f00();
    lVar11 = lVar9;
    func_0x00010c08fa60(lVar9);
    uVar12 = param_1;
    func_0x0001001d1030(param_1,lVar10,lVar11);
  }
  _objc_release(lVar9);
  lVar10 = param_2;
  func_0x00010c298be0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xc,lVar10,0);
  func_0x0001001ce1c8(param_1,8,lVar8,0);
  func_0x0001001ce220(param_1,10,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1053ba358; end: 1053ba487;  */

undefined8 FUN_1053ba358(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1053ba438;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1053ba438;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1053ba3f8;
    param_1 = 0;
  }
  else {
LAB_1053ba3f8:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1053ba438:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1053ba488; end: 1053ba52b; -[SCNDeltaforceCondition initWithSerializedCondition:] */

undefined1 * FUN_1053ba488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7df0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053ba52c; end: 1053ba533; -[SCNDeltaforceCondition serializedCondition] */

undefined8 FUN_1053ba52c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba534; end: 1053ba53f; -[SCNDeltaforceCondition .cxx_destruct] */

void FUN_1053ba534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ba540; end: 1053ba623; -[SCNDeltaforceConditionalPutRequest initWithItem:conditions:returnGroupState:] */

undefined1 *
FUN_1053ba540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053ba624; end: 1053ba62b; -[SCNDeltaforceConditionalPutRequest item] */

undefined8 FUN_1053ba624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053ba62c; end: 1053ba633; -[SCNDeltaforceConditionalPutRequest conditions] */

undefined8 FUN_1053ba62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053ba634; end: 1053ba63b; -[SCNDeltaforceConditionalPutRequest returnGroupState] */

undefined1 FUN_1053ba634(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053ba63c; end: 1053ba66b; -[SCNDeltaforceConditionalPutRequest .cxx_destruct] */

void FUN_1053ba63c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053ba66c; end: 1053ba6f3; -[SCNDeltaforceConditionalPutResponse initWithGroupState:] */

undefined1 * FUN_1053ba66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7e00;
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



/* Entry: 1053ba6f4; end: 1053ba6fb; -[SCNDeltaforceConditionalPutResponse groupState] */

undefined8 FUN_1053ba6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba6fc; end: 1053ba707; -[SCNDeltaforceConditionalPutResponse .cxx_destruct] */

void FUN_1053ba6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ba708; end: 1053ba7b3; -[SCNDeltaforceErrorResult initWithStatus:message:] */

undefined1 *
FUN_1053ba708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7e10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1053ba7b4; end: 1053ba7bb; -[SCNDeltaforceErrorResult status] */

undefined8 FUN_1053ba7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba7bc; end: 1053ba7c3; -[SCNDeltaforceErrorResult message] */

undefined8 FUN_1053ba7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053ba7c4; end: 1053ba7cf; -[SCNDeltaforceErrorResult .cxx_destruct] */

void FUN_1053ba7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053ba7d0; end: 1053ba873; -[SCNDeltaforceGroupState initWithSerializedGroupState:] */

undefined1 * FUN_1053ba7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7e20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053ba874; end: 1053ba87b; -[SCNDeltaforceGroupState serializedGroupState] */

undefined8 FUN_1053ba874(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba87c; end: 1053ba887; -[SCNDeltaforceGroupState .cxx_destruct] */

void FUN_1053ba87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ba888; end: 1053ba92b; -[SCNDeltaforceItem initWithSerializedItem:] */

undefined1 * FUN_1053ba888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7e30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053ba92c; end: 1053ba933; -[SCNDeltaforceItem serializedItem] */

undefined8 FUN_1053ba92c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba934; end: 1053ba93f; -[SCNDeltaforceItem .cxx_destruct] */

void FUN_1053ba934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ba940; end: 1053ba9e3; -[SCNDeltaforceItemKey initWithSerializedItemKey:] */

undefined1 * FUN_1053ba940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7e38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053ba9e4; end: 1053ba9eb; -[SCNDeltaforceItemKey serializedItemKey] */

undefined8 FUN_1053ba9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ba9ec; end: 1053ba9f7; -[SCNDeltaforceItemKey .cxx_destruct] */

void FUN_1053ba9ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ba9f8; end: 1053baa9b; -[SCNDeltaforceKeysByKind initWithSerializedKeysByKind:] */

undefined1 * FUN_1053ba9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7e40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053baa9c; end: 1053baaa3; -[SCNDeltaforceKeysByKind serializedKeysByKind] */

undefined8 FUN_1053baa9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053baaa4; end: 1053baaaf; -[SCNDeltaforceKeysByKind .cxx_destruct] */

void FUN_1053baaa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053baab0; end: 1053bab53; -[SCNDeltaforcePropertyMutation initWithSerializedPropertyMutation:] */

undefined1 * FUN_1053baab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1053bab54; end: 1053bab5b; -[SCNDeltaforcePropertyMutation serializedPropertyMutation] */

undefined8 FUN_1053bab54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053bab5c; end: 1053bab67; -[SCNDeltaforcePropertyMutation .cxx_destruct] */

void FUN_1053bab5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053bab68; end: 1053bacbb; -[SCNDeltaforceSyncResponse initWithUpdates:deletes:syncToken:clearState:v2:] */

undefined1 *
FUN_1053bab68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e7e58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053bacbc; end: 1053bacc3; -[SCNDeltaforceSyncResponse updates] */

undefined8 FUN_1053bacbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053bacc4; end: 1053baccb; -[SCNDeltaforceSyncResponse deletes] */

undefined8 FUN_1053bacc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053baccc; end: 1053bacd3; -[SCNDeltaforceSyncResponse syncToken] */

undefined8 FUN_1053baccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1053bacd4; end: 1053bacdb; -[SCNDeltaforceSyncResponse clearState] */

undefined1 FUN_1053bacd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053bacdc; end: 1053bace3; -[SCNDeltaforceSyncResponse v2] */

undefined8 FUN_1053bacdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1053bace4; end: 1053bad1f; -[SCNDeltaforceSyncResponse .cxx_destruct] */

void FUN_1053bace4(long param_1)

{
  FUN_1053bad20(param_1 + 0x28);
  FUN_1053bad20(param_1 + 0x20);
  FUN_1053bad20(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053bad20; end: 1053bad27;  */

void FUN_1053bad20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1053bad28; end: 1053bae43; -[SCNDeltaforceUpdateRequest initWithItemKey:conditions:propertyMutations:returnGroupState:] */

undefined1 *
FUN_1053bad28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e7e68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053bae44; end: 1053bae4b; -[SCNDeltaforceUpdateRequest itemKey] */

undefined8 FUN_1053bae44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053bae4c; end: 1053bae53; -[SCNDeltaforceUpdateRequest conditions] */

undefined8 FUN_1053bae4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053bae54; end: 1053bae5b; -[SCNDeltaforceUpdateRequest propertyMutations] */

undefined8 FUN_1053bae54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1053bae5c; end: 1053bae63; -[SCNDeltaforceUpdateRequest returnGroupState] */

undefined1 FUN_1053bae5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053bae64; end: 1053bae9f; -[SCNDeltaforceUpdateRequest .cxx_destruct] */

void FUN_1053bae64(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053baea0; end: 1053baf27; -[SCNDeltaforceUpdateResponse initWithGroupState:] */

undefined1 * FUN_1053baea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7e70;
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



/* Entry: 1053baf28; end: 1053baf2f; -[SCNDeltaforceUpdateResponse groupState] */

undefined8 FUN_1053baf28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053baf30; end: 1053baf3b; -[SCNDeltaforceUpdateResponse .cxx_destruct] */

void FUN_1053baf30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053baf3c; end: 1053bafb7;  */

undefined * FUN_1053baf3c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd64d8,
                        &UNK_10dd9b418,&UNK_10dd9b420,2,FUN_1053bafb8,0);
    do {
      if (puRam00000001136bb700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb700;
}



/* Entry: 1053bafb8; end: 1053bafc3;  */

bool FUN_1053bafb8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1053bafc4; end: 1053bb04f; +[SCDeltaforceCondition descriptor] */

undefined * FUN_1053bafc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fbb0,
                        &PTR____CFConstantStringClassReference_110dd64f8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_keyBetween_1130d30b8,0x13,
                        0xa0,0x1c);
    func_0x00010c229040();
    puRam00000001136bb708 = puVar1;
  }
  return puRam00000001136bb708;
}



/* Entry: 1053bb050; end: 1053bb0b7; +[SCDeltaforceIfLastModifiedOutsideWindowCondition descriptor] */

void FUN_1053bb050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fc00,
                        &PTR____CFConstantStringClassReference_110dd6518,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,0,0,4,0x1c);
    puRam00000001136bb710 = puVar1;
  }
  return;
}



/* Entry: 1053bb0b8; end: 1053bb11f; +[SCDeltaforceCompositeCondition descriptor] */

void FUN_1053bb0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fc50,
                        &PTR____CFConstantStringClassReference_110dd6538,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_operator_p_1130d25f8,2,0x10,
                        0x1c);
    puRam00000001136bb718 = puVar1;
  }
  return;
}



/* Entry: 1053bb120; end: 1053bb187; +[SCDeltaforceBetweenKeyCondition descriptor] */

void FUN_1053bb120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fca0,
                        &PTR____CFConstantStringClassReference_110dd6558,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_rangeStart_1130d2638,2,0x18,
                        0x1c);
    puRam00000001136bb720 = puVar1;
  }
  return;
}



/* Entry: 1053bb188; end: 1053bb1ef; +[SCDeltaforceAlwaysCondition descriptor] */

void FUN_1053bb188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fcf0,
                        &PTR____CFConstantStringClassReference_110dd6578,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,0,0,4,0x1c);
    puRam00000001136bb728 = puVar1;
  }
  return;
}



/* Entry: 1053bb1f0; end: 1053bb257; +[SCDeltaforceItemAbsentCondition descriptor] */

void FUN_1053bb1f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fd40,
                        &PTR____CFConstantStringClassReference_110dd6598,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,0,0,4,0x1c);
    puRam00000001136bb730 = puVar1;
  }
  return;
}



/* Entry: 1053bb258; end: 1053bb2e3; +[SCDeltaforcePropertyCondition descriptor] */

undefined * FUN_1053bb258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fd90,
                        &PTR____CFConstantStringClassReference_110dd65b8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_eq_1130d2dd8,9,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001136bb738 = puVar1;
  }
  return puRam00000001136bb738;
}



/* Entry: 1053bb2e4; end: 1053bb36f; +[SCDeltaforceGroupKey descriptor] */

undefined * FUN_1053bb2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fde0,
                        &PTR____CFConstantStringClassReference_110dd65d8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_kind_1130d28b8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bb740 = puVar1;
  }
  return puRam00000001136bb740;
}



/* Entry: 1053bb370; end: 1053bb3d7; +[SCDeltaforceProjectedItem descriptor] */

void FUN_1053bb370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fe30,
                        &PTR____CFConstantStringClassReference_110dd65f8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_key_1130d2c98,5,0x30,0x1c);
    puRam00000001136bb748 = puVar1;
  }
  return;
}



/* Entry: 1053bb3d8; end: 1053bb43f; +[SCDeltaforceItem descriptor] */

void FUN_1053bb3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fe80,
                        &PTR____CFConstantStringClassReference_110dd6618,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_key_1130d2d38,5,0x30,0x1c);
    puRam00000001136bb750 = puVar1;
  }
  return;
}



/* Entry: 1053bb440; end: 1053bb4a7; +[SCDeltaforceItemKey descriptor] */

void FUN_1053bb440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2fed0,
                        &PTR____CFConstantStringClassReference_110dd6638,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_group_1130d2a98,4,0x28,0x1c)
    ;
    puRam00000001136bb758 = puVar1;
  }
  return;
}



/* Entry: 1053bb4a8; end: 1053bb50f; +[SCDeltaforceSubKey descriptor] */

void FUN_1053bb4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2ff20,
                        &PTR____CFConstantStringClassReference_110dd6658,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,
                        &PTR_s_pathComponentsArray_1130d24d8,1,0x10,0x1c);
    puRam00000001136bb760 = puVar1;
  }
  return;
}



/* Entry: 1053bb510; end: 1053bb577; +[SCDeltaforceKeysByKind descriptor] */

void FUN_1053bb510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2ff70,
                        &PTR____CFConstantStringClassReference_110dd6678,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_kind_1130d2678,2,0x18,0x1c);
    puRam00000001136bb768 = puVar1;
  }
  return;
}



/* Entry: 1053bb578; end: 1053bb603; +[SCDeltaforceKeysById descriptor] */

undefined * FUN_1053bb578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a306c8,
                        &PTR____CFConstantStringClassReference_110dd6698,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_stringId_1130d2b18,4,0x28,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bb770 = puVar1;
  }
  return puRam00000001136bb770;
}



/* Entry: 1053bb604; end: 1053bb69f; +[SCDeltaforceKeysById_NodeData descriptor] */

undefined * FUN_1053bb604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a306f0,
                        &PTR____CFConstantStringClassReference_110dd66b8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_change_1130d24f8,1,0x10,0x1c
                       );
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a306c8);
    puRam00000001136bb778 = puVar1;
  }
  return puRam00000001136bb778;
}



/* Entry: 1053bb6a0; end: 1053bb72b; +[SCDeltaforceChange descriptor] */

undefined * FUN_1053bb6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30010,
                        &PTR____CFConstantStringClassReference_110dd66d8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_write_1130d26b8,2,0x18,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bb780 = puVar1;
  }
  return puRam00000001136bb780;
}



/* Entry: 1053bb72c; end: 1053bb793; +[SCDeltaforceItemPayload descriptor] */

void FUN_1053bb72c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30060,
                        &PTR____CFConstantStringClassReference_110dd66f8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_keysArray_1130d2b98,4,0x28,
                        0x1c);
    puRam00000001136bb788 = puVar1;
  }
  return;
}



/* Entry: 1053bb794; end: 1053bb7fb; +[SCDeltaforceTombstone descriptor] */

void FUN_1053bb794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a300b0,
                        &PTR____CFConstantStringClassReference_110dd6718,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,
                        &PTR_s_lastModifiedVersion_1130d26f8,2,0x18,0x1c);
    puRam00000001136bb790 = puVar1;
  }
  return;
}



/* Entry: 1053bb7fc; end: 1053bb887; +[SCDeltaforceQueryItemData descriptor] */

undefined * FUN_1053bb7fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30100,
                        &PTR____CFConstantStringClassReference_110dd6738,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_projectedItem_1130d2738,2,
                        0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bb798 = puVar1;
  }
  return puRam00000001136bb798;
}



/* Entry: 1053bb888; end: 1053bb913; +[SCDeltaforcePathComponent descriptor] */

undefined * FUN_1053bb888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30150,
                        &PTR____CFConstantStringClassReference_110dd6758,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_kind_1130d2918,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bb7a0 = puVar1;
  }
  return puRam00000001136bb7a0;
}



/* Entry: 1053bb914; end: 1053bb99f; +[SCDeltaforceValue descriptor] */

undefined * FUN_1053bb914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a301a0,
                        &PTR____CFConstantStringClassReference_110dd6778,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_string_1130d2ef8,0xe,0x68,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bb7a8 = puVar1;
  }
  return puRam00000001136bb7a8;
}



/* Entry: 1053bb9a0; end: 1053bba07; +[SCDeltaforceValueMap descriptor] */

void FUN_1053bb9a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a301f0,
                        &PTR____CFConstantStringClassReference_110dd6798,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_valueMap_1130d2518,1,0x10,
                        0x1c);
    puRam00000001136bb7b0 = puVar1;
  }
  return;
}



/* Entry: 1053bba08; end: 1053bba6f; +[SCDeltaforceValueList descriptor] */

void FUN_1053bba08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30240,
                        &PTR____CFConstantStringClassReference_110dd67b8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_valuesArray_1130d2538,1,0x10
                        ,0x1c);
    puRam00000001136bb7b8 = puVar1;
  }
  return;
}



/* Entry: 1053bba70; end: 1053bbad7; +[SCDeltaforceGroupState descriptor] */

void FUN_1053bba70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30290,
                        &PTR____CFConstantStringClassReference_110dd67d8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_groupVersion_1130d2978,3,
                        0x20,0x1c);
    puRam00000001136bb7c0 = puVar1;
  }
  return;
}



/* Entry: 1053bbad8; end: 1053bbb3f; +[SCDeltaforceProperty descriptor] */

void FUN_1053bbad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a302e0,
                        &PTR____CFConstantStringClassReference_110dd67f8,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_propName_1130d2778,2,0x18,
                        0x1c);
    puRam00000001136bb7c8 = puVar1;
  }
  return;
}



/* Entry: 1053bbb40; end: 1053bbbcb; +[SCDeltaforceGeoQueryProperty descriptor] */

undefined * FUN_1053bbb40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30330,
                        &PTR____CFConstantStringClassReference_110dd6818,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_propName_1130d29d8,3,0x20,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bb7d0 = puVar1;
  }
  return puRam00000001136bb7d0;
}



/* Entry: 1053bbbcc; end: 1053bbc57; +[SCDeltaforcePropertyMutation descriptor] */

undefined * FUN_1053bbbcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30380,
                        &PTR____CFConstantStringClassReference_110dd6838,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_propPath_1130d2c18,4,0x20,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bb7d8 = puVar1;
  }
  return puRam00000001136bb7d8;
}



/* Entry: 1053bbc58; end: 1053bbcbf; +[SCDeltaforcePropertyPath descriptor] */

void FUN_1053bbc58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb7e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a303d0,
                        &PTR____CFConstantStringClassReference_110dd6858,
                        &PTR_s_com_snapchat_deltaforce_1130d24c0,&PTR_s_propertyName_1130d27b8,2,
                        0x18,0x1c);
    puRam00000001136bb7e0 = puVar1;
  }
  return;
}


