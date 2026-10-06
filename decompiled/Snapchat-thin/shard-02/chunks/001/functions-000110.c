/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10198c230; end: 10198c253;  */

void FUN_10198c230(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c2449e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x000100504554();
  lVar2 = param_1;
  func_0x000100bf99b0(param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar4);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      func_0x0001055a81a0(param_1,uVar7,lVar2,puVar6,1);
      _objc_release(puVar6);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar8 = lVar1;
  func_0x0001055a88b8(param_1,lVar1,1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x000100504554(lVar8,&PTR___NSConcreteGlobalBlock_110899f10);
  lVar5 = lVar3;
  func_0x000100bf99b0(lVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar7 = *(undefined8 *)(lVar10 * 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      func_0x0001055a81a0(lVar3,uVar7,lVar5,puVar6,3);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  func_0x0001055a88b8(lVar3,lVar4,3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  lVar1 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  __Unwind_Resume();
  _objc_retain();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117380(lVar1);
    func_0x00010c1173c0(lVar1);
    func_0x00010c116600(lVar1);
    func_0x00010bf699c0(lVar1);
    if ((lVar3 == 0) || (lVar8 = lVar3, func_0x00010c0b4660(), (int)lVar8 != 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3;
      func_0x00010c0b4540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    lVar2 = lVar1;
    func_0x00010c280020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f2e0(puVar6);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10198c254; end: 10198c277;  */

void FUN_10198c254(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 10198c278; end: 10198c28f;  */

void FUN_10198c278(undefined8 param_1,char param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_2 == '\x01') {
    (*pcVar1)();
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10198bf0c(param_1,pcVar1,uVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10198c290; end: 10198c2bb;  */

void FUN_10198c290(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10198c2bc; end: 10198c2f3;  */

void FUN_10198c2bc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10198bcc8(param_1,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10198c2f4; end: 10198c36b;  */

void FUN_10198c2f4(void)

{
  long unaff_x20;
  
  FUN_10198b944(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10198c36c; end: 10198c38b;  */

void FUN_10198c36c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198c38c; end: 10198c3e7;  */

void FUN_10198c38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 10198c3e8; end: 10198c867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198c3e8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar3 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lVar3);
  lVar4 = *(long *)(lVar8 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  lVar3 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 == 0) {
    return;
  }
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4b40);
  lVar4 = lVar3;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  lVar8 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar8);
    lVar8 = lVar9;
    func_0x000107c44580();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar9 != 0) {
      func_0x000107c61428(param_1 + 0x10,auStack_a8,0,0);
      lVar8 = param_1 + 0x10;
      func_0x000107c61648();
      if (lVar8 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        goto LAB_10198c7f4;
      }
      lVar10 = *(long *)(lVar8 + 0x30);
      func_0x000107c61174();
      func_0x000107c61574(lVar8);
      uVar13 = ((undefined8 *)(lVar10 + _DAT_112de05f0))[1];
      uVar12 = *(undefined8 *)(lVar10 + _DAT_112de05f0);
      func_0x000107c615f0(uVar12);
      func_0x000107c61170(lVar10);
      uVar5 = 0;
      FUN_10198e4d0(0);
      lVar8 = lVar4;
      func_0x000107c614f0(lVar4);
      func_0x000107c615f0(lVar4);
      func_0x000107c615f0(lVar9);
      lVar10 = lVar4;
      FUN_10198e464(lVar4,lVar9,uVar5,lVar8);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar9);
      func_0x000107c61428(param_1 + 0x10,auStack_c0,0,0);
      lVar8 = param_1 + 0x10;
      func_0x000107c61648();
      if (lVar8 != 0) {
        lVar11 = *(long *)(lVar8 + 0x10);
        func_0x000107c61174();
        func_0x000107c61574(lVar8);
        lVar8 = lVar11;
        func_0x000107c421c8();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        lVar11 = lVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar11 != 0) {
          func_0x000107c61428(param_1 + 0x10,auStack_d8,0,0);
          param_1 = param_1 + 0x10;
          func_0x000107c61648();
          if (param_1 != 0) {
            lVar8 = *(long *)(param_1 + 0x28);
            func_0x000107c61174();
            func_0x000107c61574(param_1);
            lVar6 = *(long *)(lVar8 + _DAT_113052260);
            func_0x000107c61174();
            func_0x000107c61170(lVar8);
            lVar8 = lVar6;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            if (lVar8 != 0) {
              lVar7 = 0;
              FUN_10198b66c();
              lVar6 = lVar7;
              func_0x000107c610f8();
              puVar1 = (undefined8 *)(lVar6 + _DAT_112de0440);
              puVar1[1] = uVar13;
              *puVar1 = uVar12;
              *(long *)(lVar6 + _DAT_112de0448) = lVar10;
              *(long *)(lVar6 + _DAT_112de0450) = lVar11;
              *(long *)(lVar6 + _DAT_112de0458) = lVar4;
              *(long *)(lVar6 + _DAT_112de0460) = lVar8;
              puVar2 = PTR_s_init_1125d9248;
              lStack_e8 = lVar6;
              lStack_e0 = lVar7;
              func_0x000107c615f0(uVar12);
              func_0x000107c615f0(lVar4);
              func_0x000107c61174(lVar10);
              func_0x000107c61174(lVar11);
              func_0x000107c615f0(lVar8);
              func_0x000107c61154(&lStack_e8,puVar2);
              func_0x000107c615e8(uVar12);
              func_0x000107c61170(lVar10);
              func_0x000107c615e8(lVar4);
              func_0x000107c61170(lVar11);
              func_0x000107c615e8(lVar8);
              func_0x000107c615e8(lVar9);
              func_0x000107c615e8(lVar3);
              return;
            }
          }
          func_0x000107c615e8(uVar12);
          func_0x000107c61170(lVar10);
          func_0x000107c615e8(lVar9);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar11);
          return;
        }
      }
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(lVar9);
    }
  }
  func_0x000107c615e8(lVar3);
  lVar9 = lVar4;
LAB_10198c7f4:
  func_0x000107c615e8(lVar9);
  return;
}



/* Entry: 10198c868; end: 10198c86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198c868(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lVar3);
  lVar4 = *(long *)(lVar7 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lVar7);
  lVar3 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 == 0) {
    return;
  }
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4b40);
  lVar4 = lVar3;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar7 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x20);
    func_0x000107c61174();
    func_0x000107c61574(lVar7);
    lVar7 = lVar8;
    func_0x000107c44580();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
      lVar7 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar7 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        goto LAB_10198c7f4;
      }
      lVar9 = *(long *)(lVar7 + 0x30);
      func_0x000107c61174();
      func_0x000107c61574(lVar7);
      uVar13 = ((undefined8 *)(lVar9 + _DAT_112de05f0))[1];
      uVar12 = *(undefined8 *)(lVar9 + _DAT_112de05f0);
      func_0x000107c615f0(uVar12);
      func_0x000107c61170(lVar9);
      uVar5 = 0;
      FUN_10198e4d0(0);
      lVar7 = lVar4;
      func_0x000107c614f0(lVar4);
      func_0x000107c615f0(lVar4);
      func_0x000107c615f0(lVar8);
      lVar9 = lVar4;
      FUN_10198e464(lVar4,lVar8,uVar5,lVar7);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar8);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_c0,0,0);
      lVar7 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0x10);
        func_0x000107c61174();
        func_0x000107c61574(lVar7);
        lVar7 = lVar10;
        func_0x000107c421c8();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        lVar10 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar10 != 0) {
          func_0x000107c61428(unaff_x20 + 0x10,auStack_d8,0,0);
          lVar7 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar7 != 0) {
            lVar11 = *(long *)(lVar7 + 0x28);
            func_0x000107c61174();
            func_0x000107c61574(lVar7);
            lVar6 = *(long *)(lVar11 + _DAT_113052260);
            func_0x000107c61174();
            func_0x000107c61170(lVar11);
            lVar7 = lVar6;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            if (lVar7 != 0) {
              lVar6 = 0;
              FUN_10198b66c();
              lVar11 = lVar6;
              func_0x000107c610f8();
              puVar1 = (undefined8 *)(lVar11 + _DAT_112de0440);
              puVar1[1] = uVar13;
              *puVar1 = uVar12;
              *(long *)(lVar11 + _DAT_112de0448) = lVar9;
              *(long *)(lVar11 + _DAT_112de0450) = lVar10;
              *(long *)(lVar11 + _DAT_112de0458) = lVar4;
              *(long *)(lVar11 + _DAT_112de0460) = lVar7;
              puVar2 = PTR_s_init_1125d9248;
              lStack_e8 = lVar11;
              lStack_e0 = lVar6;
              func_0x000107c615f0(uVar12);
              func_0x000107c615f0(lVar4);
              func_0x000107c61174(lVar9);
              func_0x000107c61174(lVar10);
              func_0x000107c615f0(lVar7);
              func_0x000107c61154(&lStack_e8,puVar2);
              func_0x000107c615e8(uVar12);
              func_0x000107c61170(lVar9);
              func_0x000107c615e8(lVar4);
              func_0x000107c61170(lVar10);
              func_0x000107c615e8(lVar7);
              func_0x000107c615e8(lVar8);
              func_0x000107c615e8(lVar3);
              return;
            }
          }
          func_0x000107c615e8(uVar12);
          func_0x000107c61170(lVar9);
          func_0x000107c615e8(lVar8);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar10);
          return;
        }
      }
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(lVar9);
      func_0x000107c615e8(lVar8);
    }
  }
  func_0x000107c615e8(lVar3);
  lVar8 = lVar4;
LAB_10198c7f4:
  func_0x000107c615e8(lVar8);
  return;
}



/* Entry: 10198c870; end: 10198c8a7;  */

void FUN_10198c870(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10198c8a8; end: 10198c8af;  */

void FUN_10198c8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10198c8b0; end: 10198c8e3;  */

/* WARNING: Possible PIC construction at 0x00010198c8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010198c8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198c8c0) */
/* WARNING: Removing unreachable block (ram,0x00010198c8d0) */

void FUN_10198c8b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10198c8e4; end: 10198c947;  */

void FUN_10198c8e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10198c948; end: 10198ca2f;  */

void FUN_10198c948(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11041fb58;
  func_0x000107c613fc(&UNK_11041fb58,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x10198ca38;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10198c870;
  puStack_48 = &UNK_11041fb98;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001001f6574(0);
  func_0x000107c610f8();
  func_0x00010097b964();
  *param_1 = puVar1;
  return;
}



/* Entry: 10198ca30; end: 10198ca47;  */

void FUN_10198ca30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198ca48; end: 10198caa3;  */

undefined8 FUN_10198ca48(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = param_1;
  (*param_3)(param_1,param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 10198caa4; end: 10198cbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198caa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  FUN_10198dc5c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112de0580);
  uVar1 = param_1;
  FUN_10198d074();
  puVar2 = &UNK_11041fbe8;
  func_0x000107c613fc(&UNK_11041fbe8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  pcStack_60 = FUN_10198e4a8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10198ce10;
  puStack_68 = &UNK_11041fc00;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c43bc0(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10198cbac; end: 10198cd87;  */

void FUN_10198cbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a0 = param_3;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11041fc38;
  func_0x000107c613fc(&UNK_11041fc38,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_70 = FUN_10198e4f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11041fc50;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c614b0(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10198cd88; end: 10198ce0f;  */

void FUN_10198cd88(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c61174();
    (*param_2)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (param_4 != 0) {
    func_0x000107c614b0(param_4);
    (*param_2)(param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_4);
    return;
  }
  return;
}



/* Entry: 10198ce10; end: 10198ce87;  */

/* WARNING: Possible PIC construction at 0x00010198ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198ce70) */

void FUN_10198ce10(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10198ce88; end: 10198d073;  */

undefined * FUN_10198ce88(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10198d074);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_10198e4fc(0,param_3,param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_10198d920(uVar8,param_1,param_2,param_3);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_10198e4fc(0,param_3,param_2);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 10198d074; end: 10198d1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10198d074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x0001055a9338();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    lVar5 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112de05a0))[1];
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112de05a0);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    *(undefined **)(lVar5 + 0x30) = puVar4;
    *(undefined8 *)(lVar5 + 0x38) = param_2;
    func_0x000107c61434();
    lVar6 = lVar5;
    func_0x0001001830b8(lVar5);
    func_0x000107c61588(lVar5);
    func_0x000100ab5dc4((undefined8 *)(lVar5 + 0x20));
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    puVar3 = puVar2;
    func_0x000107c3d704(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar3);
  }
  return puVar2;
}



/* Entry: 10198d1a8; end: 10198d203; -[_TtC26FriendingGoogleContactSync23GoogleContactGrpcSender init] */

void FUN_10198d1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingGoogleContactSync.GoogleContactGrpcSender",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198d1d4);
  (*pcVar1)();
}



/* Entry: 10198d204; end: 10198d267; -[_TtC26FriendingGoogleContactSync23GoogleContactGrpcSender .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010198d234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198d238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198d204(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de0580));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112de0588 + 8))
  ;
  return;
}



/* Entry: 10198d268; end: 10198d2df;  */

void FUN_10198d268(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10198d2e0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10198d2e0; end: 10198d42b;  */

undefined *
FUN_10198d2e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10198d42c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_10198d4cc(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10198e4fc(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10198d42c; end: 10198d4cb;  */

undefined * FUN_10198d42c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112de05d8;
    FUN_10198d4cc(0x112de05d8,&PTR_PTR_1126bb418,0x112de05e0,&UNK_10d9a7d00);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10198d4cc; end: 10198d543;  */

void FUN_10198d4cc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10198e4fc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10198d544; end: 10198d91f;  */

void FUN_10198d544(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x00010198d630(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10198dadc(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10198d62c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198d630);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198d628);
  (*pcVar1)();
}



/* Entry: 10198d920; end: 10198dadb;  */

ulong FUN_10198d920(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10198da04);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10198da08);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10198e4fc(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10198dadc);
  (*pcVar2)();
}



/* Entry: 10198dadc; end: 10198dc5b;  */

ulong FUN_10198dadc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10198dc5c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198dc50);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10198e4fc(0,0x112de05d8,&PTR_PTR_1126bb418);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198dc54);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10198dc58);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_10198d920(uVar7,param_3,&PTR_PTR_1126bb418,0x112de05d8);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10198dc5c; end: 10198e23f;  */

undefined * FUN_10198dc5c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ef14();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_d0 = lVar13;
    lStack_c8 = lVar15;
    lStack_c0 = lVar3;
    FUN_10198d268(0,lVar12,0);
    lVar9 = 0;
    lStack_b8 = param_1 + 0x20;
    lStack_b0 = lVar12;
    do {
      puVar5 = puStack_68;
      plVar8 = (long *)(lStack_b8 + lVar9 * 0x28);
      lVar3 = *plVar8;
      lVar15 = plVar8[1];
      lVar13 = plVar8[3];
      uStack_9c = (uint)*(byte *)(plVar8 + 4);
      uStack_98 = (uint)*(byte *)((long)plVar8 + 0x21);
      uStack_94 = (uint)*(byte *)(plVar8 + 2);
      puVar4 = PTR_PTR_1126bb420;
      lStack_88 = lVar9;
      func_0x000107c610f8();
      func_0x000107c61434(lVar3);
      func_0x000107c61434(lVar15);
      func_0x000107c61434(lVar13);
      func_0x000107c453e4();
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar15 + 0x20);
        uVar2 = *(undefined8 *)(lVar15 + 0x28);
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar10,uVar2);
        func_0x000107c6142c(uVar2);
      }
      lStack_90 = lVar15;
      puStack_80 = puVar5;
      func_0x000107c54230(puVar4);
      func_0x000107c61170(uVar10);
      lVar15 = *(long *)(lVar3 + 0x10);
      if (lVar15 == 0) {
        lVar15 = *(long *)(lVar13 + 0x10);
        puVar5 = puVar7;
      }
      else {
        lStack_78 = lVar13;
        puStack_70 = puVar7;
        func_0x00010198d2a4(0,lVar15,0);
        puVar14 = (undefined8 *)(lVar3 + 0x28);
        do {
          puVar7 = puStack_70;
          uVar10 = puVar14[-1];
          uVar2 = *puVar14;
          puVar5 = PTR_PTR_1126bb418;
          func_0x000107c610f8();
          func_0x000107c61434(uVar2);
          func_0x000107c453e4();
          func_0x000107c5fadc(uVar10,uVar2);
          func_0x000107c54444(puVar5);
          func_0x000107c6142c(uVar2);
          func_0x000107c61170(uVar10);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puStack_70 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            func_0x00010198d2a4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar14 = puVar14 + 2;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar5;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = *(long *)(lStack_78 + 0x10);
        lVar13 = lStack_78;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar5 = puStack_70;
      }
      puStack_70 = puVar7;
      puVar7 = puStack_70;
      lStack_78 = lVar13;
      if (lVar15 != 0) {
        lStack_a8 = lVar3;
        func_0x00010198d2a4(0,lVar15,0);
        puVar14 = (undefined8 *)(lVar13 + 0x28);
        do {
          puVar7 = puStack_70;
          uVar10 = puVar14[-1];
          uVar2 = *puVar14;
          puVar6 = PTR_PTR_1126bb418;
          func_0x000107c610f8();
          func_0x000107c61434(uVar2);
          func_0x000107c453e4();
          func_0x000107c5fadc(uVar10,uVar2);
          func_0x000107c57360(puVar6);
          func_0x000107c6142c(uVar2);
          func_0x000107c61170(uVar10);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puStack_70 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            func_0x00010198d2a4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar14 = puVar14 + 2;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar6;
          lVar15 = lVar15 + -1;
          lVar3 = lStack_a8;
          puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (lVar15 != 0);
      }
      lVar15 = lStack_78;
      puVar6 = puStack_70;
      puStack_70 = puVar5;
      FUN_10198d544(puVar6);
      puVar5 = puStack_70;
      puVar6 = puStack_70;
      FUN_10198ce88(puStack_70,&PTR_PTR_1126bb418,0x112de05d8);
      func_0x000107c6142c(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar11 = puVar6;
      func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar6);
      func_0x000107c45788(puVar5);
      func_0x000107c61170(puVar11);
      func_0x000107c537a4(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c55030(puVar4);
      func_0x000107c5503c(puVar4);
      func_0x000107c54f04(puVar4);
      func_0x000107c6142c(lVar15);
      func_0x000107c6142c(lStack_90);
      func_0x000107c6142c(lVar3);
      puStack_68 = puStack_80;
      uVar1 = *(ulong *)(puStack_80 + 0x10);
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar1) {
        FUN_10198d268(1 < *(ulong *)(puStack_80 + 0x18),uVar1 + 1,1);
      }
      lVar9 = lStack_88 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar4;
      puVar4 = puStack_68;
      lVar3 = lStack_c0;
      lVar15 = lStack_c8;
      lVar13 = lStack_d0;
    } while (lVar9 != lStack_b0);
  }
  puVar5 = PTR_PTR_1126a81e8;
  func_0x000107c610f8(PTR_PTR_1126a81e8);
  func_0x000107c453e4();
  puVar6 = puVar4;
  FUN_10198ce88(puVar4,&PTR_PTR_1126bb420,0x112de05d0);
  func_0x000107c6142c(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR___sypN_11034f1a8 + 8;
  puVar11 = puVar6;
  func_0x000107c5fc48(puVar6);
  func_0x000107c6142c(puVar6);
  func_0x000107c45788(puVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c537d4(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126db238;
  func_0x000107c610f8(PTR_PTR_1126db238);
  func_0x000107c453e4();
  func_0x000107c54efc();
  puVar6 = PTR_PTR_1126a81f0;
  func_0x000107c610f8(PTR_PTR_1126a81f0);
  func_0x000107c453e4();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c3e174();
  func_0x000107c61180();
  func_0x000107c53794(puVar6);
  func_0x000107c61170(puVar11);
  func_0x000107c5ef04(lVar13);
  func_0x000107c5eed8();
  if (puVar7 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  (**(code **)(lVar15 + 8))(lVar13,lVar3);
  func_0x000107c53a20(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar11);
  return puVar6;
}



/* Entry: 10198e240; end: 10198e463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198e240(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112de0588);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  *(undefined8 *)(param_3 + _DAT_112de0590) = 120000;
  puVar2 = (undefined8 *)(param_3 + _DAT_112de0598);
  *puVar2 = 0x53746361746e6f43;
  puVar2[1] = 0xef43505247636e79;
  puVar3 = (undefined8 *)(param_3 + _DAT_112de05a0);
  *puVar3 = 0xd000000000000010;
  puVar3[1] = 0x800000010ef1c330;
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = puVar5;
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c57f3c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar6 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126bb3d8;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  *(undefined **)(param_3 + _DAT_112de0580) = puVar7;
  FUN_10198e4d0();
  lStack_60 = param_3;
  uStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198e464; end: 10198e4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198e464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  FUN_10198e4d0();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(param_1 + _DAT_112de0588);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  *(undefined8 *)(param_1 + _DAT_112de0590) = 120000;
  puVar2 = (undefined8 *)(param_1 + _DAT_112de0598);
  *puVar2 = 0x53746361746e6f43;
  puVar2[1] = 0xef43505247636e79;
  puVar3 = (undefined8 *)(param_1 + _DAT_112de05a0);
  *puVar3 = 0xd000000000000010;
  puVar3[1] = 0x800000010ef1c330;
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728,param_2,param_1,param_4);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = puVar5;
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c57f3c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar6 = *puVar2;
  uVar4 = puVar2[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126bb3d8;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  *(undefined **)(param_1 + _DAT_112de0580) = puVar7;
  FUN_10198e4d0();
  lStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198e4a8; end: 10198e4cf;  */

void FUN_10198e4a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11041fc38;
  func_0x000107c613fc(&UNK_11041fc38,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  pcStack_70 = FUN_10198e4f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11041fc50;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c614b0(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10198e4d0; end: 10198e4ef;  */

void FUN_10198e4d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef220);
  return;
}



/* Entry: 10198e4f0; end: 10198e4fb;  */

void FUN_10198e4f0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c61174();
    (*pcVar2)(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  if (lVar3 != 0) {
    func_0x000107c614b0(lVar3,pcVar2,*(undefined8 *)(unaff_x20 + 0x20));
    (*pcVar2)(lVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(lVar3);
    return;
  }
  return;
}



/* Entry: 10198e4fc; end: 10198e53b;  */

void FUN_10198e4fc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10198e53c; end: 10198e543;  */

void FUN_10198e53c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198e544; end: 10198e59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198e544(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de05f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10198e5a0; end: 10198e5ff; -[GoogleContactBookStoreServices init] */

void FUN_10198e5a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GoogleContactBookStoreServices.GoogleContactBookStoreServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198e5cc);
  (*pcVar1)();
}



/* Entry: 10198e600; end: 10198e627; -[GoogleContactBookStoreServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198e600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112de05f0));
  return;
}



/* Entry: 10198e628; end: 10198e667;  */

void FUN_10198e628(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a7d40;
  func_0x000107c61520(&UNK_10d9a7d40,&UNK_11041fd30);
  puRam0000000112de0620 = puVar1;
  return;
}



/* Entry: 10198e668; end: 10198e713;  */

void FUN_10198e668(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10198e714; end: 10198e8af;  */

void FUN_10198e714(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10198e8b0; end: 10198e95b;  */

void FUN_10198e8b0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10198e95c; end: 10198e98b;  */

void FUN_10198e95c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10198e98c; end: 10198e9cb;  */

void FUN_10198e98c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a7e20;
  func_0x000107c61520(&UNK_10d9a7e20,&UNK_11041fe18);
  puRam0000000112de0628 = puVar1;
  return;
}



/* Entry: 10198e9cc; end: 10198eb2f;  */

int FUN_10198e9cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10198ea48;
        goto LAB_10198ea2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10198ea2c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10198ea48:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10198eb30; end: 10198eb8b;  */

long FUN_10198eb30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10198eb8c; end: 10198ec73;  */

undefined8 * FUN_10198eb8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10198ec74; end: 10198ecd7;  */

undefined8 * FUN_10198ec74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  return param_1;
}



/* Entry: 10198ecd8; end: 10198ed73;  */

int FUN_10198ecd8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x22) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10198ed74; end: 10198ed87;  */

void FUN_10198ed74(void)

{
  func_0x0001055ab56c();
  return;
}



/* Entry: 10198ed88; end: 10198efb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198ed88(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  ppuVar7 = &puStack_70;
  pcVar1 = "shouldShowComplianceDialogForRegistration(completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar2 = pcVar1;
  (**(code **)(unaff_x20 + _DAT_112de0630))();
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = *(char **)(unaff_x20 + _DAT_112de0638);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (pcVar2 != (char *)0x0) {
      func_0x00010098a0cc(0);
      uVar3 = 10;
      func_0x00010098a590(10);
      pcVar4 = pcVar2;
      func_0x000107c3ebc0();
      func_0x000107c61170(uVar3);
      puVar6 = &UNK_11041fff0;
      func_0x000107c613fc(&UNK_11041fff0,0x21,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      *(undefined8 *)(puVar6 + 0x18) = param_2;
      puVar6[0x20] = (char)pcVar4;
      pcStack_50 = FUN_10198f504;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_110420008;
      puStack_48 = puVar6;
      func_0x000107c60bc4(&puStack_70);
      puVar6 = puStack_48;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar6);
      func_0x000107c4e590(pcVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar1);
      goto LAB_10198ef98;
    }
    puVar6 = &UNK_11041ffa0;
    func_0x000107c613fc(&UNK_11041ffa0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    pcStack_50 = FUN_10198f4c4;
    puStack_58 = &UNK_11041ffb8;
    puStack_48 = puVar6;
  }
  else {
    puVar6 = &UNK_110420040;
    func_0x000107c613fc(&UNK_110420040,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    pcStack_50 = (code *)0x10198f52c;
    puStack_58 = &UNK_110420058;
    puStack_48 = puVar6;
  }
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar7);
  pcVar2 = pcVar1;
LAB_10198ef98:
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10198efb8; end: 10198efd3; -[_TtC41FriendingComplianceServicesImplementation26FriendingComplianceChecker shouldShowComplianceDialogForRegistrationWithCompletion:] */

void FUN_10198efb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104201a8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1104201a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10198ed88(0x10198f5ac,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10198efd4; end: 10198f1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198efd4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar6 = &puStack_70;
  pcVar1 = "shouldShowComplianceDialogForPostRegistration(completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar2 = pcVar1;
  (**(code **)(unaff_x20 + _DAT_112de0630))();
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = *(char **)(unaff_x20 + _DAT_112de0640);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
      func_0x000107c49cb4();
      puVar5 = &UNK_1104200e0;
      func_0x000107c613fc(&UNK_1104200e0,0x21,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      *(undefined8 *)(puVar5 + 0x18) = param_2;
      puVar5[0x20] = (byte)pcVar3 ^ 1;
      uStack_50 = 0x10198f5b8;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1104200f8;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      puVar5 = puStack_48;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar5);
      func_0x000107c4e590(pcVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(pcVar1);
      goto LAB_10198f1bc;
    }
    puVar5 = &UNK_110420090;
    func_0x000107c613fc(&UNK_110420090,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    uStack_50 = 0x10198f5b0;
    puStack_58 = &UNK_1104200a8;
    puStack_48 = puVar5;
  }
  else {
    puVar5 = &UNK_110420130;
    func_0x000107c613fc(&UNK_110420130,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    uStack_50 = 0x10198f5b4;
    puStack_58 = &UNK_110420148;
    puStack_48 = puVar5;
  }
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar6);
  pcVar2 = pcVar1;
LAB_10198f1bc:
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10198f1dc; end: 10198f1f7; -[_TtC41FriendingComplianceServicesImplementation26FriendingComplianceChecker shouldShowComplianceDialogForPostRegistrationWithCompletion:] */

void FUN_10198f1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110420180;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_110420180,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10198efd4(FUN_10198f570,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10198f1f8; end: 10198f27b;  */

void FUN_10198f1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  (*param_6)(param_5,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 10198f27c; end: 10198f313; -[_TtC41FriendingComplianceServicesImplementation26FriendingComplianceChecker shouldDisableTrayPassiveDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10198f27c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112de0638);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010098a0cc(0);
    uVar1 = 0xb;
    func_0x00010098a590(0xb);
    lVar3 = lVar2;
    func_0x000107c3ebc0(lVar2,param_2,uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 10198f314; end: 10198f373; -[_TtC41FriendingComplianceServicesImplementation26FriendingComplianceChecker init] */

void FUN_10198f314(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingComplianceServicesImplementation.FriendingComplianceChecker",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198f340);
  (*pcVar1)();
}



/* Entry: 10198f374; end: 10198f3bf; -[_TtC41FriendingComplianceServicesImplementation26FriendingComplianceChecker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198f374(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de0638));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de0640));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112de0630 + 8));
  return;
}



/* Entry: 10198f3c0; end: 10198f4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10198f3c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar6 = *(undefined8 *)(param_1 + _DAT_113021f38);
  uVar7 = *(undefined8 *)(param_2 + _DAT_1130220f0);
  lVar3 = param_1;
  FUN_10198f550();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112de0638) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112de0640) = uVar7;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112de0630);
  *puVar1 = FUN_10198ed74;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_50,puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return (undefined1 *)plVar5;
}



/* Entry: 10198f4c4; end: 10198f4e7;  */

void FUN_10198f4c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 10198f4e8; end: 10198f503;  */

void FUN_10198f4e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198f504; end: 10198f54f;  */

void FUN_10198f504(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10198f550; end: 10198f56f;  */

void FUN_10198f550(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef3e8);
  return;
}



/* Entry: 10198f570; end: 10198f5bb;  */

void FUN_10198f570(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010198f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10198f5bc; end: 10198f7df;  */

void FUN_10198f5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10198f7e0; end: 10198f7e7;  */

undefined8 FUN_10198f7e0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    FUN_10198f3c0(uVar3,uVar4);
    func_0x000107c61574(lVar2);
    return uVar3;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000004b,0x800000010efc4d60,
                      "FriendingComplianceServicesImplementation/FriendingComplianceServicesProvider.swift"
                      ,0x53,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10198f7e0);
  (*pcVar1)();
}



/* Entry: 10198f7e8; end: 10198f81f;  */

void FUN_10198f7e8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10198f820; end: 10198f83b;  */

void FUN_10198f820(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198f83c; end: 10198f857;  */

/* WARNING: Possible PIC construction at 0x00010198f848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198f84c) */

void FUN_10198f83c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10198f858; end: 10198f8a3;  */

void FUN_10198f858(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10198f8a4; end: 10198f91f;  */

void FUN_10198f8a4(undefined8 param_1)

{
  if (lRam0000000112de0698 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e660960);
  return;
}



/* Entry: 10198f920; end: 10198fa07;  */

void FUN_10198f920(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104201d0;
  func_0x000107c613fc(&UNK_1104201d0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x10198fa10;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10198f7e8;
  puStack_48 = &UNK_110420210;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x00010020dca8(0);
  func_0x000107c610f8();
  func_0x000103e6ad30();
  *param_1 = puVar1;
  return;
}



/* Entry: 10198fa08; end: 10198fa13;  */

void FUN_10198fa08(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10198fa14; end: 10198fa6b;  */

long FUN_10198fa14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100cc12f0(param_1,unaff_x20 + 0x10);
  func_0x000100cc12f0(param_2,unaff_x20 + 0x38);
  return unaff_x20;
}



/* Entry: 10198fa6c; end: 10198fa87;  */

void FUN_10198fa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x580) = param_3;
  *(undefined8 *)(unaff_x22 + 0x538) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fa88,0,0);
  return;
}



/* Entry: 10198fa88; end: 10198fb2b;  */

void FUN_10198fa88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x580);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x538);
  FUN_1019910bc();
  *(undefined8 *)(unaff_x22 + 0x588) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x590) = param_2;
  *(undefined8 *)(unaff_x22 + 0x550) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x558) = uVar2;
  puVar1 = PTR___sytN_11034f1b0;
  func_0x000107c61418(unaff_x22 + 0x10,0,PTR___sytN_11034f1b0 + 8,&UNK_10d9a8040,unaff_x22 + 0x540);
  *(undefined8 *)(unaff_x22 + 0x570) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x578) = param_2;
  func_0x000107c61418(unaff_x22 + 0x290,0,puVar1 + 8,&UNK_10d9a8050,unaff_x22 + 0x560);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10198fb2c; end: 10198fb97;  */

void FUN_10198fb2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x598) = unaff_x20;
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_finish_110350058)
              (unaff_x22 + 0x290,param_2,FUN_10198fc18,unaff_x22 + 0x510);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)
            (unaff_x22 + 0x290,param_2,0x10198fb5c,unaff_x22 + 0x510);
  return;
}



/* Entry: 10198fb98; end: 10198fbd3;  */

void FUN_10198fb98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,param_2,FUN_10198fbd4,unaff_x22 + 0x290);
  return;
}



/* Entry: 10198fbd4; end: 10198fbe7;  */

void FUN_10198fbd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fbe8,0,0);
  return;
}



/* Entry: 10198fbe8; end: 10198fc17;  */

void FUN_10198fbe8(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x588));
                    /* WARNING: Could not recover jumptable at 0x00010198fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10198fc18; end: 10198fc2b;  */

void FUN_10198fc18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fc2c,0,0);
  return;
}



/* Entry: 10198fc2c; end: 10198fc67;  */

void FUN_10198fc2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,param_2,FUN_10198fc68,unaff_x22 + 0x290);
  return;
}



/* Entry: 10198fc68; end: 10198fc7b;  */

void FUN_10198fc68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fc7c,0,0);
  return;
}



/* Entry: 10198fc7c; end: 10198fcb7;  */

void FUN_10198fc7c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x598);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x588));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010198fcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10198fcb8; end: 10198fccb;  */

void FUN_10198fcb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fccc,0,0);
  return;
}



/* Entry: 10198fccc; end: 10198fd07;  */

void FUN_10198fccc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,param_2,FUN_10198fd08,unaff_x22 + 0x290);
  return;
}



/* Entry: 10198fd08; end: 10198fd1b;  */

void FUN_10198fd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fd1c,0,0);
  return;
}



/* Entry: 10198fd1c; end: 10198fd57;  */

void FUN_10198fd1c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x5a0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x588));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010198fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10198fd58; end: 10198fd6f;  */

void FUN_10198fd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fd70,0,0);
  return;
}



/* Entry: 10198fd70; end: 10198fdf3;  */

void FUN_10198fd70(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10198fdf4;
                    /* WARNING: Could not recover jumptable at 0x00010198fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 10198fdf4; end: 10198fe2f;  */

void FUN_10198fdf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010198fe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10198fe30; end: 10198fe47;  */

void FUN_10198fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fe48,0,0);
  return;
}



/* Entry: 10198fe48; end: 10198fecb;  */

void FUN_10198fe48(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  lVar3 = *(long *)(lVar5 + 0x58);
  func_0x0001000a8868(lVar5 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101991794;
                    /* WARNING: Could not recover jumptable at 0x00010198fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 10198fecc; end: 10198ff93; -[_TtC29FriendingBadgeServiceProvider25FriendingBadgeMutatorImpl insertBadgeInfo:] */

/* WARNING: Possible PIC construction at 0x00010198ff68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010198ff6c) */

void FUN_10198fecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110420308;
  func_0x000107c613fc(&UNK_110420308,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(param_3);
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8000,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10198ff94; end: 10198ffab;  */

void FUN_10198ff94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198ffac,0,0);
  return;
}


