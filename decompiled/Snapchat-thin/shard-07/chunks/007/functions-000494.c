/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105953ad4; end: 105953af7; -[SQLFideliusSnapEncryptionKeyTable copyWithZone:] */

undefined8 FUN_105953ad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105953af8; end: 105953b77; -[SQLFideliusSnapEncryptionKeyTable hash] */

undefined8 * FUN_105953af8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105953c10:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105953c1c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105953c1c;
          }
          goto LAB_105953c10;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105953c1c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105953b78; end: 105953c37; -[SQLFideliusSnapEncryptionKeyTable isEqual:] */

long FUN_105953b78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105953c10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105953c1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105953c1c;
          }
          goto LAB_105953c10;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105953c1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105953c38; end: 105953c73; -[SQLFideliusSnapEncryptionKeyTable .cxx_destruct] */

void FUN_105953c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105953c74; end: 105953c97; -[SQLArroyoMessageEncryptionKeyTable copyWithZone:] */

undefined8 FUN_105953c74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105953c98; end: 105953d2f; -[SQLArroyoMessageEncryptionKeyTable hash] */

undefined8 * FUN_105953c98(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105953df0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105953dfc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105953dfc;
            }
            goto LAB_105953df0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105953dfc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105953d30; end: 105953e17; -[SQLArroyoMessageEncryptionKeyTable isEqual:] */

long FUN_105953d30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105953df0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105953dfc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105953dfc;
            }
            goto LAB_105953df0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105953dfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105953e18; end: 105953e5f; -[SQLArroyoMessageEncryptionKeyTable .cxx_destruct] */

void FUN_105953e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105953e60; end: 105953e83; -[SQLFideliusUserIdentity copyWithZone:] */

undefined8 FUN_105953e60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105953e84; end: 105953f0f; -[SQLFideliusUserIdentity hash] */

undefined8 * FUN_105953e84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105953fc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105953fcc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_105953fcc;
            }
            goto LAB_105953fc0;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105953fcc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105953f10; end: 105953fe7; -[SQLFideliusUserIdentity isEqual:] */

long FUN_105953f10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105953fc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105953fcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_105953fcc;
            }
            goto LAB_105953fc0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105953fcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105953fe8; end: 105954063;  */

undefined1 * FUN_105953fe8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_1126eb070;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 105954064; end: 105954087; -[SQLGetArroyoMessageEncryptionKey copyWithZone:] */

undefined8 FUN_105954064(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105954088; end: 10595408f; -[SQLGetArroyoMessageEncryptionKey hash] */

void FUN_105954088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105954090; end: 10595411f; -[SQLGetArroyoMessageEncryptionKey isEqual:] */

long FUN_105954090(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105954104;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105954104;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105954104;
    }
  }
  lVar3 = 1;
LAB_105954104:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105954120; end: 10595412b; -[SQLGetArroyoMessageEncryptionKey .cxx_destruct] */

void FUN_105954120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10595412c; end: 10595414f; -[SQLGetExpiredSnapEncryptionKeyIds copyWithZone:] */

undefined8 FUN_10595412c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105954150; end: 105954157; -[SQLGetExpiredSnapEncryptionKeyIds hash] */

void FUN_105954150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105954158; end: 1059541e7; -[SQLGetExpiredSnapEncryptionKeyIds isEqual:] */

long FUN_105954158(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059541cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1059541cc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1059541cc;
    }
  }
  lVar3 = 1;
LAB_1059541cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059541e8; end: 1059541f3; -[SQLGetExpiredSnapEncryptionKeyIds .cxx_destruct] */

void FUN_1059541e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059541f4; end: 1059542ff;  */

void FUN_1059541f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcfa00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c06f0;
  _objc_alloc(PTR_PTR_1126c06f0);
  func_0x00010c058f80();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105954300; end: 10595442f;  */

void FUN_105954300(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1eeba0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c16c6a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c030a20();
    puVar4 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c1eeba0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c16c6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105954430; end: 105954613;  */

void FUN_105954430(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c06f8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c11a480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5720(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_1;
  func_0x00010bfdebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20(puVar3);
  func_0x00010c1a7540(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_1;
  func_0x00010c085320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20(puVar3);
  func_0x00010c1b64c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  func_0x00010c220e20(puVar1);
  uVar2 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108c1530);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c0700;
  func_0x00010c0cb140(PTR_PTR_1126c0700);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212d60();
  uVar4 = uVar2;
  func_0x00010c0d3c80(uVar2);
  func_0x00010c1a7560(puVar3);
  _objc_release(uVar4);
  if (param_3 != 0) {
    func_0x00010c19b700(puVar3);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105954614; end: 105954663;  */

void FUN_105954614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff6b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105954664; end: 10595491b;  */

void FUN_105954664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0708;
  _objc_retain();
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d3c80(param_1);
  _objc_release(param_1);
  func_0x00010c1a0420(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10595491c; end: 10595498f; -[UNISCFideliusFideliusIdentityService initWithUnifiedGrpcService:] */

undefined1 * FUN_10595491c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb080;
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



/* Entry: 105954990; end: 105954a73; -[UNISCFideliusFideliusIdentityService initializeDeviceKeyWithRequest:callOptionsBuilder:handler:] */

void FUN_105954990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0738;
  _objc_opt_class(PTR_PTR_1126c0738);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e11ff8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954a74; end: 105954b57; -[UNISCFideliusFideliusIdentityService initializeWebKeyWithRequest:callOptionsBuilder:handler:] */

void FUN_105954a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0740;
  _objc_opt_class(PTR_PTR_1126c0740);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e12018,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954b58; end: 105954c3b; -[UNISCFideliusFideliusIdentityService getFriendKeysWithRequest:callOptionsBuilder:handler:] */

void FUN_105954b58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0748;
  _objc_opt_class(PTR_PTR_1126c0748);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e12038,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954c3c; end: 105954c47; -[UNISCFideliusFideliusIdentityService .cxx_destruct] */

void FUN_105954c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105954c48; end: 105954d2b; -[UNISCFideliusFideliusRecryptService initiateRecryptWithRequest:callOptionsBuilder:handler:] */

void FUN_105954c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0750;
  _objc_opt_class(PTR_PTR_1126c0750);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e12058,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954d2c; end: 105954e0f; -[UNISCFideliusFideliusRecryptService acknowledgeRecryptWithRequest:callOptionsBuilder:handler:] */

void FUN_105954d2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0758;
  _objc_opt_class(PTR_PTR_1126c0758);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e12078,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954e10; end: 105954ef3; -[UNISCFideliusFideliusRecryptService recryptAssistanceWithRequest:callOptionsBuilder:handler:] */

void FUN_105954e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0768;
  _objc_opt_class(PTR_PTR_1126c0768);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e120b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105954ef4; end: 105954eff; -[UNISCFideliusFideliusRecryptService .cxx_destruct] */

void FUN_105954ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105954f00; end: 105954f7b;  */

undefined * FUN_105954f00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c17a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e120d8,
                        &UNK_10ddc2198,&UNK_10ddc21c4,5,FUN_105954f7c,0);
    do {
      if (puRam00000001136c17a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c17a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c17a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c17a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c17a8;
}



/* Entry: 105954f7c; end: 105954f87;  */

bool FUN_105954f7c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105954f88; end: 105955003;  */

undefined * FUN_105954f88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c17b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e120f8,
                        &UNK_10ddc21d8,&UNK_10ddc2248,5,FUN_105955004,0);
    do {
      if (puRam00000001136c17b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c17b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c17b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c17b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c17b0;
}



/* Entry: 105955004; end: 10595500f;  */

bool FUN_105955004(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105955010; end: 105955077; +[SCFideliusMessageIdentifier descriptor] */

void FUN_105955010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e2b0,
                        &PTR____CFConstantStringClassReference_110e12118,&PTR_DAT_11310ea18,
                        &PTR_s_conversationId_11310ea90,2,0x18,0x1c);
    puRam00000001136c17b8 = puVar1;
  }
  return;
}



/* Entry: 105955078; end: 1059550df; +[SCFideliusInitiateRecryptPackage descriptor] */

void FUN_105955078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e300,
                        &PTR____CFConstantStringClassReference_110e12138,&PTR_DAT_11310ea18,
                        &PTR_s_messageId_11310ead0,2,0x10,0x1c);
    puRam00000001136c17c0 = puVar1;
  }
  return;
}



/* Entry: 1059550e0; end: 105955147; +[SCFideliusInitiateRecryptRequest descriptor] */

void FUN_1059550e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e350,
                        &PTR____CFConstantStringClassReference_110e12158,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310eb10,2,0x18,0x1c);
    puRam00000001136c17c8 = puVar1;
  }
  return;
}



/* Entry: 105955148; end: 1059551af; +[SCFideliusInitiateRecryptResponse descriptor] */

void FUN_105955148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e3a0,
                        &PTR____CFConstantStringClassReference_110e12178,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ea30,1,0x10,0x1c);
    puRam00000001136c17d0 = puVar1;
  }
  return;
}



/* Entry: 1059551b0; end: 105955217; +[SCFideliusNotifyRecryptPackage descriptor] */

void FUN_1059551b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e3f0,
                        &PTR____CFConstantStringClassReference_110e12198,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ebf0,4,0x20,0x1c);
    puRam00000001136c17d8 = puVar1;
  }
  return;
}



/* Entry: 105955218; end: 10595527f; +[SCFideliusAcknowledgeRecryptPackage descriptor] */

void FUN_105955218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e4e0,
                        &PTR____CFConstantStringClassReference_110e121f8,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ec70,4,0x20,0x1c);
    puRam00000001136c17f0 = puVar1;
  }
  return;
}



/* Entry: 105955280; end: 1059552e7; +[SCFideliusRecipientDeviceInfo descriptor] */

void FUN_105955280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e530,
                        &PTR____CFConstantStringClassReference_110e12218,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ecf0,5,0x30,0x1c);
    puRam00000001136c17f8 = puVar1;
  }
  return;
}



/* Entry: 1059552e8; end: 10595534f; +[SCFideliusAcknowledgeRecryptRequest descriptor] */

void FUN_1059552e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e580,
                        &PTR____CFConstantStringClassReference_110e12238,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310eb90,3,0x20,0x1c);
    puRam00000001136c1800 = puVar1;
  }
  return;
}



/* Entry: 105955350; end: 1059553b7; +[SCFideliusAcknowledgeRecryptResponse descriptor] */

void FUN_105955350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e5d0,
                        &PTR____CFConstantStringClassReference_110e12258,&PTR_DAT_11310ea18,0,0,4,
                        0x1c);
    puRam00000001136c1808 = puVar1;
  }
  return;
}



/* Entry: 1059553b8; end: 10595541f; +[SCFideliusArroyoAssistedRetryInfo descriptor] */

void FUN_1059553b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e620,
                        &PTR____CFConstantStringClassReference_110e12278,&PTR_DAT_11310ea18,
                        &PTR_s_messageId_11310ed90,6,0x38,0x1c);
    puRam00000001136c1810 = puVar1;
  }
  return;
}



/* Entry: 105955420; end: 105955487; +[SCFideliusRecryptAssistanceRequest descriptor] */

void FUN_105955420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e670,
                        &PTR____CFConstantStringClassReference_110e12298,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310eb50,2,0x18,0x1c);
    puRam00000001136c1818 = puVar1;
  }
  return;
}



/* Entry: 105955488; end: 1059554ef; +[SCFideliusRecryptAssistanceResponse descriptor] */

void FUN_105955488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e6c0,
                        &PTR____CFConstantStringClassReference_110e122b8,&PTR_DAT_11310ea18,0,0,4,
                        0x1c);
    puRam00000001136c1820 = puVar1;
  }
  return;
}



/* Entry: 1059554f0; end: 105955557; +[SCFideliusInitializeDeviceKeyRequest descriptor] */

void FUN_1059554f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e760,
                        &PTR____CFConstantStringClassReference_110e122d8,&PTR_DAT_11310ee50,
                        &PTR_s_userId_11310ef88,5,0x30,0x1c);
    puRam00000001136c1828 = puVar1;
  }
  return;
}



/* Entry: 105955558; end: 1059555bf; +[SCFideliusInitializeDeviceKeyResponse descriptor] */

void FUN_105955558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e7b0,
                        &PTR____CFConstantStringClassReference_110e122f8,&PTR_DAT_11310ee50,
                        &PTR_DAT_11310eec8,2,0x18,0x1c);
    puRam00000001136c1830 = puVar1;
  }
  return;
}



/* Entry: 1059555c0; end: 105955627; +[SCFideliusInitializeWebKeyRequest descriptor] */

void FUN_1059555c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e800,
                        &PTR____CFConstantStringClassReference_110e12318,&PTR_DAT_11310ee50,
                        &PTR_DAT_11310ef08,2,0x18,0x1c);
    puRam00000001136c1838 = puVar1;
  }
  return;
}



/* Entry: 105955628; end: 10595568f; +[SCFideliusInitializeWebKeyResponse descriptor] */

void FUN_105955628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e850,
                        &PTR____CFConstantStringClassReference_110e12338,&PTR_DAT_11310ee50,
                        &PTR_DAT_11310ef48,2,0x18,0x1c);
    puRam00000001136c1840 = puVar1;
  }
  return;
}



/* Entry: 105955690; end: 1059556f7; +[SCFideliusGetFriendKeysRequest descriptor] */

void FUN_105955690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e8a0,
                        &PTR____CFConstantStringClassReference_110e12358,&PTR_DAT_11310ee50,
                        &PTR_DAT_11310ee68,1,0x10,0x1c);
    puRam00000001136c1848 = puVar1;
  }
  return;
}



/* Entry: 1059556f8; end: 10595575f; +[SCFideliusGetFriendKeysResponse descriptor] */

void FUN_1059556f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e8f0,
                        &PTR____CFConstantStringClassReference_110e12378,&PTR_DAT_11310ee50,
                        &PTR_DAT_11310ee88,1,0x10,0x1c);
    puRam00000001136c1850 = puVar1;
  }
  return;
}



/* Entry: 105955760; end: 1059557c7; +[SCFideliusFinalizeKeyRequest descriptor] */

void FUN_105955760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e940,
                        &PTR____CFConstantStringClassReference_110e12398,&PTR_DAT_11310ee50,
                        &PTR_s_userId_11310eea8,1,0x10,0x1c);
    puRam00000001136c1858 = puVar1;
  }
  return;
}



/* Entry: 1059557c8; end: 10595582f; +[SCFideliusFinalizeKeyResponse descriptor] */

void FUN_1059557c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e990,
                        &PTR____CFConstantStringClassReference_110e123b8,&PTR_DAT_11310ee50,0,0,4,
                        0x1c);
    puRam00000001136c1860 = puVar1;
  }
  return;
}



/* Entry: 105955830; end: 105955853; +[SCEllipticCurveCrypto generateKeyPair] */

void FUN_105955830(void)

{
  _objc_alloc(PTR_PTR_1126c0658);
  func_0x00010c007b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105955854; end: 1059558c7; -[SCEllipticCurveCrypto initWithCurveAndGenerateKeyPair:] */

long FUN_105955854(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  *(int *)(param_1 + 0x18) = (int)param_3;
  lVar1 = param_3;
  func_0x000100410404();
  *(long *)(param_1 + 0x10) = lVar1;
  *(undefined4 *)(lVar1 + 0x1c) = 4;
  func_0x00010ae36488();
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bfee940(param_1,param_2,param_3,0,0);
    _objc_retain();
    lVar1 = param_1;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1059558c8; end: 105955997; -[SCEllipticCurveCrypto initWithCoder:] */

undefined8 FUN_1059558c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e12418);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e123d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e123f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c067ec0(uVar1);
  func_0x00010bfee940(param_1,param_2,uVar4,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105955998; end: 105955a2f; -[SCEllipticCurveCrypto encodeWithCoder:] */

void FUN_105955998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e123d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e123f8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e12418);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105955a30; end: 105955c57; -[SCEllipticCurveCrypto sharedSecretForPublicKey:] */

undefined * FUN_105955a30(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [8];
  undefined1 *puStack_108;
  undefined1 auStack_f9 [65];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (0x20 < uVar1) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  puVar2 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  if (puVar2 != (undefined *)0x41) {
    puVar2 = param_3;
    func_0x00010c08fa60();
    puStack_80 = puVar2;
    func_0x00010c11f020(puVar3);
  }
  lVar10 = (*(long **)(param_1 + 0x10))[2];
  lVar9 = **(long **)(param_1 + 0x10);
  puVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  lVar4 = lVar9;
  func_0x000100411cb8(lVar9);
  lVar5 = lVar9;
  func_0x000100412000(lVar9,lVar4,puVar3,0x41,0);
  if ((int)lVar5 != 1) {
    func_0x0001004cb584(lVar4);
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  lVar5 = lVar9;
  func_0x000100411cb8();
  lVar6 = lVar9;
  func_0x0001004dd8a4(lVar9,lVar5,0,lVar4,lVar10,0);
  if ((int)lVar6 != 1) {
    func_0x0001004cb584(lVar4);
    func_0x0001004cb584(lVar5);
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  lVar10 = lVar9;
  func_0x000100414320(lVar9,lVar5,2,&uStack_70,0x21,0);
  if (lVar10 != 0x21) {
    func_0x0001004cb584(lVar4);
    func_0x0001004cb584(lVar5);
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  func_0x0001004cb584(lVar4);
  func_0x0001004cb584(lVar5);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_105955c58;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(*(long *)(puVar2 + 0x10) + 0x10);
  uVar7 = uVar8;
  lStack_b0 = lVar5;
  lStack_a8 = lVar9;
  puStack_a0 = puVar3;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000100202834(uVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(((int)uVar7 + 7U >> 3) + 0xf & 0x3ffffff0);
  func_0x00010ae2e2c4(uVar8,auStack_110 + -extraout_x8);
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined **)(puVar2 + 0x28) = puVar3;
  _objc_release(uVar7);
  puStack_108 = auStack_f9;
  func_0x00010ae29314(*(undefined8 *)(puVar2 + 0x10),&puStack_108);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined **)(puVar2 + 0x20) = puVar3;
  _objc_release(uVar7);
  func_0x00010bf9d160();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + 0x28);
}



/* Entry: 105955c58; end: 105955d6b; -[SCEllipticCurveCrypto updateRawKeyPair:] */

long FUN_105955c58(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 auStack_79 [65];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar2 = uVar3;
  func_0x000100202834(uVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(((int)uVar2 + 7U >> 3) + 0xf & 0x3ffffff0);
  func_0x00010ae2e2c4(uVar3,auStack_90 + -extraout_x8);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puStack_88 = auStack_79;
  func_0x00010ae29314(*(undefined8 *)(param_1 + 0x10),&puStack_88);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf9d160();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + 0x28);
}



/* Entry: 105955d6c; end: 105955d73; -[SCEllipticCurveCrypto privateKey] */

undefined8 FUN_105955d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105955d74; end: 105955d7b; -[SCEllipticCurveCrypto publicKeyDERBase64] */

undefined8 FUN_105955d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105955d7c; end: 105955dfb; -[SCNFideliusFideliusHelper initWithCpp:] */

undefined1 * FUN_105955d7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126eb098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000105956a8c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105955dfc; end: 10595611b; +[SCNFideliusFideliusHelper wrapKey:messageType:senderKey:recipients:] */

void FUN_105955dfc(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [56];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  
  func_0x0001059572b8();
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001059571d4();
  _objc_retain();
  func_0x000105957214();
  func_0x00010029a6ec(auStack_200);
  func_0x0001000fbca4(auStack_218);
  FUN_105958720(auStack_250);
  func_0x000105957214();
  uStack_260 = 0;
  uStack_258 = 0;
  lStack_268 = 0;
  func_0x00010bf529e0();
  puVar2 = (undefined1 *)0x0;
  if (unaff_x21 != 0) {
    in_ZR = unaff_x21 == 0x333333333333334;
    if (0x333333333333333 < unaff_x21) goto LAB_105956058;
    FUN_105956b04(auStack_f8,unaff_x21,0,&uStack_258);
    FUN_105956ac0(&lStack_268,auStack_f8);
    puVar2 = auStack_f8;
    func_0x000105956d14();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000105957214();
  func_0x0001059571ac();
  if (puVar2 != (undefined1 *)0x0) {
    lVar6 = *plStack_150;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar6) {
          _objc_enumerationMutation();
        }
        uVar5 = *(undefined8 *)(lStack_158 + (long)puVar7 * 8);
        _objc_retain(uVar5);
        FUN_1059573c8(auStack_1b0,uVar5);
        if (uStack_260 < uStack_258) {
          FUN_105956c3c(uStack_260,auStack_1b0);
          uVar8 = uStack_260 + 0x50;
        }
        else {
          plVar3 = &lStack_268;
          FUN_105956d7c(plVar3,(long)(uStack_260 - lStack_268) / 0x50 + 1);
          FUN_105956b04(auStack_120,plVar3,(long)(uStack_260 - lStack_268) / 0x50,&uStack_258);
          FUN_105956c3c(lStack_110,auStack_1b0);
          lStack_110 = lStack_110 + 0x50;
          FUN_105956ac0(&lStack_268,auStack_120);
          uVar8 = uStack_260;
          func_0x000105956d14(auStack_120);
        }
        puVar4 = auStack_1b0;
        uStack_260 = uVar8;
        func_0x000105956944();
        func_0x0001059571dc();
        puVar7 = puVar7 + 1;
        in_ZR = puVar7 == puVar2;
      } while (puVar7 < puVar2);
      func_0x0001059571ac();
      puVar2 = puVar4;
    } while (puVar4 != (undefined1 *)0x0);
  }
  func_0x000105957150();
  func_0x000105957150();
  func_0x0001088b4bd0(auStack_1e8,auStack_200,auStack_218,auStack_250,&lStack_268);
  func_0x000105957278();
  func_0x0001059567bc(auStack_250);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  func_0x000100100fec(auStack_200);
  FUN_105957d10(auStack_1e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105957248();
  func_0x000105957150();
  func_0x00010595721c();
  func_0x0001059570dc();
  func_0x0001059572cc(uStack_78);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
    return;
  }
  ___stack_chk_fail();
LAB_105956058:
  FUN_105956ab4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105956060);
  (*pcVar1)();
}



/* Entry: 10595611c; end: 10595624b; +[SCNFideliusFideliusHelper unwrapKey:messageType:recipientKey:senderKey:] */

void FUN_10595611c(void)

{
  undefined1 auStack_1b0 [80];
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [152];
  undefined1 auStack_78 [56];
  
  func_0x0001059572b8();
  func_0x0001059571d4();
  _objc_retain();
  func_0x000105957214();
  FUN_1059582bc(auStack_110);
  func_0x0001000fbca4(auStack_128);
  FUN_105958720(auStack_160);
  FUN_1059573c8(auStack_1b0);
  func_0x0001088b5ba4(auStack_78,auStack_110,auStack_128,auStack_160,auStack_1b0);
  func_0x000105956944(auStack_1b0);
  func_0x0001059567bc(auStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  func_0x000105956970(auStack_110);
  FUN_105957808(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105957254();
  func_0x000105957150();
  func_0x00010595721c();
  func_0x0001059570dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595624c; end: 1059562d7; +[SCNFideliusFideliusHelper encryptFriendKeys:friendKeys:] */

void FUN_10595624c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x0001059571d4();
  func_0x00010595728c();
  func_0x00010595726c();
  func_0x0001088b4430(auStack_38,auStack_50,auStack_68);
  func_0x0001059571fc();
  func_0x0001059571f4();
  FUN_10595654c(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001059570f8();
  func_0x0001059570dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1059562d8; end: 10595654b;  */

void FUN_1059562d8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_1a8 [88];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  undefined8 uStack_68;
  
  func_0x000105957158();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  puVar3 = unaff_x19;
  func_0x00010bf529e0();
  plVar6 = unaff_x20 + 2;
  puVar9 = (undefined1 *)((*plVar6 - *unaff_x20) / 0x58);
  uVar2 = puVar3 == puVar9;
  if (puVar9 < puVar3) {
    uVar2 = puVar3 == (undefined1 *)0x2e8ba2e8ba2e8bb;
    if ((undefined1 *)0x2e8ba2e8ba2e8ba < puVar3) goto LAB_1059564d4;
    FUN_105956e14(auStack_1a8,puVar3,(unaff_x20[1] - *unaff_x20) / 0x58,plVar6);
    FUN_105956dd0();
    func_0x00010595701c(auStack_1a8);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain();
  func_0x0001059571c0();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar8 = *plStack_140;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation();
        }
        uVar7 = *(undefined8 *)(lStack_148 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        FUN_105957584(auStack_1a8,uVar7);
        uVar4 = unaff_x20[1];
        if (uVar4 < (ulong)unaff_x20[2]) {
          func_0x000105956f50(uVar4,auStack_1a8);
          lVar10 = uVar4 + 0x58;
        }
        else {
          plVar5 = unaff_x20;
          FUN_105957084();
          FUN_105956e14(auStack_110,plVar5,(unaff_x20[1] - *unaff_x20) / 0x58,plVar6);
          func_0x000105956f50(lStack_100,auStack_1a8);
          lStack_100 = lStack_100 + 0x58;
          FUN_105956dd0();
          lVar10 = unaff_x20[1];
          func_0x00010595701c(auStack_110);
        }
        unaff_x20[1] = lVar10;
        puVar3 = auStack_1a8;
        func_0x000105956a60();
        func_0x0001059571dc();
        puVar9 = puVar9 + 1;
        uVar2 = puVar9 == unaff_x19;
      } while (puVar9 < unaff_x19);
      func_0x0001059571c0();
      unaff_x19 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  func_0x0001059570dc();
  func_0x0001059570dc();
  func_0x0001059572cc(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_1059564d4:
  func_0x000105956dc4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1059564dc);
  (*pcVar1)();
}



/* Entry: 10595654c; end: 1059565ff;  */

void FUN_10595654c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x58) {
    lVar3 = lVar4;
    FUN_1059576c8(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x000105957150();
  }
  func_0x00010bf51e00(puVar2);
  func_0x0001059570dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105956600; end: 10595668b; +[SCNFideliusFideliusHelper decryptFriendKeys:friendKeys:] */

void FUN_105956600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x0001059571d4();
  func_0x00010595728c();
  func_0x00010595726c();
  func_0x0001088b45f8(auStack_38,auStack_50,auStack_68);
  func_0x0001059571fc();
  func_0x0001059571f4();
  FUN_10595654c(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001059570f8();
  func_0x0001059570dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10595668c; end: 1059566e7; -[SCNFideliusFideliusHelper .cxx_destruct] */

void FUN_10595668c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1580;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105956a8c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1059566e8; end: 10595677f; -[SCNFideliusFideliusHelper .cxx_construct] */

undefined8 * FUN_1059566e8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105956780; end: 105956787;  */

void FUN_105956780(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x000105956944();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956788; end: 10595684f;  */

void FUN_105956788(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x000105956944();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956850; end: 105956857;  */

void FUN_105956850(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x00010595688c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956858; end: 105956907;  */

void FUN_105956858(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x00010595688c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956908; end: 10595690f;  */

void FUN_105956908(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x000105956970();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956910; end: 105956a23;  */

void FUN_105956910(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x000105956970();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956a24; end: 105956a2b;  */

void FUN_105956a24(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x000105956a60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956a2c; end: 105956ab3;  */

void FUN_105956a2c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x000105956a60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105956ab4; end: 105956abf;  */

void FUN_105956ab4(long *param_1,long param_2)

{
  func_0x000105957298();
  func_0x000105957158();
  FUN_105956b90(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x000105957104();
  return;
}



/* Entry: 105956ac0; end: 105956b03;  */

void FUN_105956ac0(long *param_1,long param_2)

{
  func_0x000105957158();
  FUN_105956b90(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x000105957104();
  return;
}



/* Entry: 105956b04; end: 105956b63;  */

void FUN_105956b04(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000105956b40(param_4);
  }
  func_0x000105957224(0x50);
  return;
}



/* Entry: 105956b64; end: 105956b8f;  */

void FUN_105956b64(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  func_0x000105957164();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x50) {
    FUN_105956c3c(param_4,unaff_x22);
    param_4 = lStack_48 + 0x50;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_105956c0c();
  FUN_105956c94(auStack_70);
  return;
}



/* Entry: 105956b90; end: 105956c0b;  */

void FUN_105956b90(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x000105957164();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x50) {
    FUN_105956c3c(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x50;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_105956c0c();
  FUN_105956c94(auStack_60);
  return;
}



/* Entry: 105956c0c; end: 105956c3b;  */

void FUN_105956c0c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x000105956944();
  }
  return;
}



/* Entry: 105956c3c; end: 105956c93;  */

void FUN_105956c3c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001059572ec();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return;
}



/* Entry: 105956c94; end: 105956cc3;  */

long FUN_105956c94(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105956cc4(param_1);
  }
  return param_1;
}



/* Entry: 105956cc4; end: 105956ce3;  */

void FUN_105956cc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x000105956944();
  }
  return;
}



/* Entry: 105956ce4; end: 105956d3f;  */

void FUN_105956ce4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x50;
    func_0x000105956944();
  }
  return;
}



/* Entry: 105956d40; end: 105956d47;  */

void FUN_105956d40(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x000105956944();
  }
  return;
}



/* Entry: 105956d48; end: 105956d7b;  */

void FUN_105956d48(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105957158();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x000105956944();
  }
  return;
}



/* Entry: 105956d7c; end: 105956dcf;  */

long * FUN_105956d7c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_105956ab4();
  func_0x000105957298();
  func_0x000105957158();
  plVar2 = param_1 + 2;
  FUN_105956ea4(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x000105957104();
  return plVar2;
}



/* Entry: 105956dd0; end: 105956e13;  */

void FUN_105956dd0(long *param_1,long param_2)

{
  func_0x000105957158();
  FUN_105956ea4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x000105957104();
  return;
}



/* Entry: 105956e14; end: 105956e73;  */

void FUN_105956e14(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000105956e50(param_4);
  }
  func_0x000105957224(0x58);
  return;
}



/* Entry: 105956e74; end: 105956ea3;  */

void FUN_105956e74(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x000105957164();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x000105956f50(param_4,unaff_x22);
    param_4 = lStack_48 + 0x58;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  func_0x000105956f20();
  FUN_105956f9c(auStack_70);
  return;
}



/* Entry: 105956ea4; end: 105956f1f;  */

void FUN_105956ea4(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x000105957164();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x000105956f50(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x58;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  func_0x000105956f20();
  FUN_105956f9c(auStack_60);
  return;
}


