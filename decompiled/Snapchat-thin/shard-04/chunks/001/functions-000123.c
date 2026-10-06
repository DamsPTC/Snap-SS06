/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10319542c; end: 1031954cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319542c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x22;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x12] = unaff_x22[0x2d];
  unaff_x22[0x11] = unaff_x22[0x2c];
  *(undefined1 *)(unaff_x22 + 0x13) = *(undefined1 *)((long)unaff_x22 + 0x81);
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_103187f64();
    func_0x000107c61658(unaff_x22 + 0x11,&UNK_110618668,uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78(unaff_x22[0x2c],unaff_x22[0x2d],*(undefined1 *)((long)unaff_x22 + 0x81));
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x43] = uVar3;
  lVar9 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar3,1,1,lVar9);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  unaff_x22[0x44] = (long)plVar4;
  *plVar4 = (long)unaff_x22;
  plVar4[1] = (long)FUN_1031955a8;
  lVar9 = unaff_x22[0x26];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4[0x15] = uVar3;
    plVar4[0x16] = lVar9;
    plVar4[0x14] = 0;
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar3 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x17] = uVar3;
    lVar10 = 0;
    func_0x000107c5ede0();
    plVar4[0x18] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar4[0x19] = lVar10;
    uVar3 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1a] = uVar3;
    lVar10 = 0;
    FUN_103197644();
    uVar3 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1b] = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar8 = FUN_103196dcc;
      lVar10 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = plVar4[0x1b];
      lVar10 = plVar4[0x16];
      lVar14 = plVar4[0x14];
      lVar9 = 0;
      FUN_103197894();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar13,1,1,lVar9);
      lVar9 = _DAT_112f47d68;
      func_0x000107c61428(lVar10 + _DAT_112f47d68,plVar4 + 10,0x21,0);
      func_0x000103187ec0(lVar13,lVar10 + lVar9);
      func_0x000107c614a8(plVar4 + 10);
      lVar9 = 8;
      func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
      *(undefined8 *)(lVar9 + 0x10) = 8;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f47d70);
      func_0x000107c61428(puVar1,plVar4 + 0xd,1,0);
      uVar2 = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0x3fd3333333333333;
      puVar1[2] = lVar9;
      func_0x000107c6142c(uVar2);
      if (lVar14 == 0) {
        lVar9 = plVar4[0x18];
        lVar10 = plVar4[0x19];
        lVar13 = plVar4[0x17];
        FUN_103198594(plVar4[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar10 + 0x30))(lVar13,1,lVar9);
        if ((int)lVar13 == 1) {
          func_0x0001000293e4(plVar4[0x17]);
        }
        else {
          (**(code **)(plVar4[0x19] + 0x20))(plVar4[0x1a],plVar4[0x17],plVar4[0x18]);
          puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar5;
          func_0x000107c5ed90();
          plVar4[0x13] = 0;
          puVar7 = puVar5;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar5);
          lVar9 = plVar4[0x13];
          if ((int)puVar7 == 0) {
            lVar10 = lVar9;
            func_0x000107c61174(lVar9);
            func_0x000107c5ed30();
            func_0x000107c61170(lVar10);
            func_0x000107c61654();
            func_0x000107c614ac(lVar9);
          }
          else {
            func_0x000107c61174(lVar9);
          }
          (**(code **)(plVar4[0x19] + 8))(plVar4[0x1a],plVar4[0x18]);
        }
        lVar9 = plVar4[0x16] + _DAT_113806f10;
        func_0x000107c61618();
        plVar4[0x1d] = lVar9;
        if (lVar9 == 0) {
          lVar9 = plVar4[0x1a];
          lVar10 = plVar4[0x17];
          func_0x000107c615c0(plVar4[0x1b]);
          func_0x000107c615c0(lVar9);
          func_0x000107c615c0(lVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar4[1])();
            return;
          }
        }
        else {
          lVar9 = 0;
          func_0x000107c5fcec();
          lVar10 = lVar9;
          func_0x000107c5fce8();
          plVar4[0x1e] = lVar10;
          func_0x000100eea164();
          func_0x000107c5fca8(lVar9,lVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            pcVar8 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        plVar4[0x1c] = *(long *)(plVar4[0x16] + 0x70);
        func_0x000107c61174(plVar4[0x14]);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          pcVar8 = FUN_1031970e0;
          lVar9 = 0;
          lVar10 = 0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4[2] = (long)plVar4;
      plVar4[3] = (long)FUN_103197168;
      func_0x000107c61448(plVar4 + 2,0);
      func_0x0001031982f4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(plVar4 + 2);
        return;
      }
      func_0x000107c60e78();
      lVar11 = *plVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        pcVar8 = (code *)0x1031971d4;
        lVar9 = 0;
        lVar10 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar9 = *(long *)(lVar11 + 0xb0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          func_0x000107c61170(*(undefined8 *)(lVar11 + 0xa0));
          uVar2 = *(undefined8 *)(lVar11 + 0xc0);
          lVar9 = *(long *)(lVar11 + 200);
          uVar12 = *(undefined8 *)(lVar11 + 0xb8);
          FUN_103198594(*(undefined8 *)(lVar11 + 0xa8),uVar12,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar9 + 0x30))(uVar12,1,uVar2);
          if ((int)uVar12 == 1) {
            func_0x0001000293e4(*(undefined8 *)(lVar11 + 0xb8));
          }
          else {
            (**(code **)(*(long *)(lVar11 + 200) + 0x20))
                      (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xb8),
                       *(undefined8 *)(lVar11 + 0xc0));
            puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar6 = puVar5;
            func_0x000107c5ed90();
            *(undefined8 *)(lVar11 + 0x98) = 0;
            puVar7 = puVar5;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar5);
            uVar2 = *(undefined8 *)(lVar11 + 0x98);
            if ((int)puVar7 == 0) {
              uVar12 = uVar2;
              func_0x000107c61174(uVar2);
              func_0x000107c5ed30(uVar2);
              func_0x000107c61170(uVar12);
              func_0x000107c61654();
              func_0x000107c614ac(uVar2);
            }
            else {
              func_0x000107c61174(uVar2);
            }
            (**(code **)(*(long *)(lVar11 + 200) + 8))
                      (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xc0));
          }
          lVar9 = *(long *)(lVar11 + 0xb0) + _DAT_113806f10;
          func_0x000107c61618();
          *(long *)(lVar11 + 0xe8) = lVar9;
          if (lVar9 == 0) {
            uVar2 = *(undefined8 *)(lVar11 + 0xd0);
            uVar12 = *(undefined8 *)(lVar11 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
            func_0x000107c615c0(uVar2);
            func_0x000107c615c0(uVar12);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar11 + 8))();
              return;
            }
          }
          else {
            lVar9 = 0;
            func_0x000107c5fcec();
            lVar10 = lVar9;
            func_0x000107c5fce8();
            *(long *)(lVar11 + 0xf0) = lVar10;
            func_0x000100eea164();
            func_0x000107c5fca8(lVar9,lVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
              pcVar8 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar9 = *(long *)(lVar11 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(lVar11 + 0xf0));
          lVar10 = _DAT_112f476d0;
          func_0x000107c61428(lVar9 + _DAT_112f476d0,lVar11 + 0x80,0,0);
          lVar9 = lVar9 + lVar10;
          func_0x000107c61618();
          if (lVar9 != 0) {
            func_0x000107c3e3e0();
            func_0x000107c615e8(lVar9);
          }
          func_0x000107c615e8(*(undefined8 *)(lVar11 + 0xe8));
          lVar9 = *(long *)(lVar11 + 0xd0);
          uVar2 = *(undefined8 *)(lVar11 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
          func_0x000107c615c0(lVar9);
          func_0x000107c615c0(uVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            func_0x000107c60e78();
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0x70));
            func_0x000107c61170(*(undefined8 *)(lVar9 + 0x78));
            FUN_103198414(lVar9 + _DAT_112f47d68,FUN_103197644);
            func_0x000107c6142c(*(undefined8 *)(lVar9 + _DAT_112f47d70 + 0x10));
            FUN_1031985fc(lVar9 + _DAT_113806f10);
            func_0x000107c61470(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar9);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar11 + 8))();
          return;
        }
        pcVar8 = FUN_103197234;
        lVar10 = 0;
      }
    }
  }
  else {
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = *unaff_x22;
    uVar2 = *(undefined8 *)(lVar11 + 0x218);
    lVar9 = *(long *)(lVar11 + 0x130);
    lVar13 = *unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(lVar11 + 0x220));
    func_0x0001000293e4(uVar2);
    func_0x000107c615c0(uVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      pcVar8 = FUN_10319563c;
      lVar10 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)(lVar13 + 0x180);
      *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar13 + 0x178);
      *(undefined1 *)(lVar13 + 200) = *(undefined1 *)(lVar13 + 0x82);
      uVar2 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar2 != 0) {
        FUN_103187f64();
        func_0x000107c61658((undefined8 *)(lVar13 + 0xb8),&UNK_110618668,uVar2);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar13 + 8))();
        return;
      }
      func_0x000107c60e78(*(undefined8 *)(lVar13 + 0x178),*(undefined8 *)(lVar13 + 0x180),
                          *(undefined1 *)(lVar13 + 0x82));
      pcVar8 = FUN_1031956f8;
      lVar9 = 0;
      lVar10 = 0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,lVar9,lVar10);
  return;
}



/* Entry: 1031954d0; end: 1031955a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031954d0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x22;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x43] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  unaff_x22[0x44] = (long)plVar4;
  *plVar4 = (long)unaff_x22;
  plVar4[1] = (long)FUN_1031955a8;
  lVar3 = unaff_x22[0x26];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4[0x15] = uVar2;
    plVar4[0x16] = lVar3;
    plVar4[0x14] = 0;
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar2 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x17] = uVar2;
    lVar10 = 0;
    func_0x000107c5ede0();
    plVar4[0x18] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar4[0x19] = lVar10;
    uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1a] = uVar2;
    lVar10 = 0;
    FUN_103197644();
    uVar2 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x1b] = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar9 = FUN_103196dcc;
      lVar10 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = plVar4[0x1b];
      lVar10 = plVar4[0x16];
      lVar14 = plVar4[0x14];
      lVar3 = 0;
      FUN_103197894();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar13,1,1,lVar3);
      lVar3 = _DAT_112f47d68;
      func_0x000107c61428(lVar10 + _DAT_112f47d68,plVar4 + 10,0x21,0);
      func_0x000103187ec0(lVar13,lVar10 + lVar3);
      func_0x000107c614a8(plVar4 + 10);
      lVar3 = 8;
      func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
      *(undefined8 *)(lVar3 + 0x10) = 8;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f47d70);
      func_0x000107c61428(puVar1,plVar4 + 0xd,1,0);
      uVar5 = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0x3fd3333333333333;
      puVar1[2] = lVar3;
      func_0x000107c6142c(uVar5);
      if (lVar14 == 0) {
        lVar3 = plVar4[0x18];
        lVar10 = plVar4[0x19];
        lVar13 = plVar4[0x17];
        FUN_103198594(plVar4[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar10 + 0x30))(lVar13,1,lVar3);
        if ((int)lVar13 == 1) {
          func_0x0001000293e4(plVar4[0x17]);
        }
        else {
          (**(code **)(plVar4[0x19] + 0x20))(plVar4[0x1a],plVar4[0x17],plVar4[0x18]);
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5ed90();
          plVar4[0x13] = 0;
          puVar8 = puVar6;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          lVar3 = plVar4[0x13];
          if ((int)puVar8 == 0) {
            lVar10 = lVar3;
            func_0x000107c61174(lVar3);
            func_0x000107c5ed30();
            func_0x000107c61170(lVar10);
            func_0x000107c61654();
            func_0x000107c614ac(lVar3);
          }
          else {
            func_0x000107c61174(lVar3);
          }
          (**(code **)(plVar4[0x19] + 8))(plVar4[0x1a],plVar4[0x18]);
        }
        lVar3 = plVar4[0x16] + _DAT_113806f10;
        func_0x000107c61618();
        plVar4[0x1d] = lVar3;
        if (lVar3 == 0) {
          lVar3 = plVar4[0x1a];
          lVar10 = plVar4[0x17];
          func_0x000107c615c0(plVar4[0x1b]);
          func_0x000107c615c0(lVar3);
          func_0x000107c615c0(lVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar4[1])();
            return;
          }
        }
        else {
          lVar3 = 0;
          func_0x000107c5fcec();
          lVar10 = lVar3;
          func_0x000107c5fce8();
          plVar4[0x1e] = lVar10;
          func_0x000100eea164();
          func_0x000107c5fca8(lVar3,lVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            pcVar9 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        plVar4[0x1c] = *(long *)(plVar4[0x16] + 0x70);
        func_0x000107c61174(plVar4[0x14]);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          pcVar9 = FUN_1031970e0;
          lVar3 = 0;
          lVar10 = 0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4[2] = (long)plVar4;
      plVar4[3] = (long)FUN_103197168;
      func_0x000107c61448(plVar4 + 2,0);
      func_0x0001031982f4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(plVar4 + 2);
        return;
      }
      func_0x000107c60e78();
      lVar11 = *plVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        pcVar9 = (code *)0x1031971d4;
        lVar3 = 0;
        lVar10 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar3 = *(long *)(lVar11 + 0xb0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          func_0x000107c61170(*(undefined8 *)(lVar11 + 0xa0));
          uVar5 = *(undefined8 *)(lVar11 + 0xc0);
          lVar3 = *(long *)(lVar11 + 200);
          uVar12 = *(undefined8 *)(lVar11 + 0xb8);
          FUN_103198594(*(undefined8 *)(lVar11 + 0xa8),uVar12,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar3 + 0x30))(uVar12,1,uVar5);
          if ((int)uVar12 == 1) {
            func_0x0001000293e4(*(undefined8 *)(lVar11 + 0xb8));
          }
          else {
            (**(code **)(*(long *)(lVar11 + 200) + 0x20))
                      (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xb8),
                       *(undefined8 *)(lVar11 + 0xc0));
            puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar7 = puVar6;
            func_0x000107c5ed90();
            *(undefined8 *)(lVar11 + 0x98) = 0;
            puVar8 = puVar6;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar6);
            uVar5 = *(undefined8 *)(lVar11 + 0x98);
            if ((int)puVar8 == 0) {
              uVar12 = uVar5;
              func_0x000107c61174(uVar5);
              func_0x000107c5ed30(uVar5);
              func_0x000107c61170(uVar12);
              func_0x000107c61654();
              func_0x000107c614ac(uVar5);
            }
            else {
              func_0x000107c61174(uVar5);
            }
            (**(code **)(*(long *)(lVar11 + 200) + 8))
                      (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xc0));
          }
          lVar3 = *(long *)(lVar11 + 0xb0) + _DAT_113806f10;
          func_0x000107c61618();
          *(long *)(lVar11 + 0xe8) = lVar3;
          if (lVar3 == 0) {
            uVar5 = *(undefined8 *)(lVar11 + 0xd0);
            uVar12 = *(undefined8 *)(lVar11 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
            func_0x000107c615c0(uVar5);
            func_0x000107c615c0(uVar12);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar11 + 8))();
              return;
            }
          }
          else {
            lVar3 = 0;
            func_0x000107c5fcec();
            lVar10 = lVar3;
            func_0x000107c5fce8();
            *(long *)(lVar11 + 0xf0) = lVar10;
            func_0x000100eea164();
            func_0x000107c5fca8(lVar3,lVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
              pcVar9 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar3 = *(long *)(lVar11 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(lVar11 + 0xf0));
          lVar10 = _DAT_112f476d0;
          func_0x000107c61428(lVar3 + _DAT_112f476d0,lVar11 + 0x80,0,0);
          lVar3 = lVar3 + lVar10;
          func_0x000107c61618();
          if (lVar3 != 0) {
            func_0x000107c3e3e0();
            func_0x000107c615e8(lVar3);
          }
          func_0x000107c615e8(*(undefined8 *)(lVar11 + 0xe8));
          lVar3 = *(long *)(lVar11 + 0xd0);
          uVar5 = *(undefined8 *)(lVar11 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
          func_0x000107c615c0(lVar3);
          func_0x000107c615c0(uVar5);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            func_0x000107c60e78();
            func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x70));
            func_0x000107c61170(*(undefined8 *)(lVar3 + 0x78));
            FUN_103198414(lVar3 + _DAT_112f47d68,FUN_103197644);
            func_0x000107c6142c(*(undefined8 *)(lVar3 + _DAT_112f47d70 + 0x10));
            FUN_1031985fc(lVar3 + _DAT_113806f10);
            func_0x000107c61470(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar3);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar11 + 8))();
          return;
        }
        pcVar9 = FUN_103197234;
        lVar10 = 0;
      }
    }
  }
  else {
    func_0x000107c60e78();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = *unaff_x22;
    uVar5 = *(undefined8 *)(lVar11 + 0x218);
    lVar3 = *(long *)(lVar11 + 0x130);
    lVar13 = *unaff_x22;
    func_0x000107c615c0(*(undefined8 *)(lVar11 + 0x220));
    func_0x0001000293e4(uVar5);
    func_0x000107c615c0(uVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      pcVar9 = FUN_10319563c;
      lVar10 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)(lVar13 + 0x180);
      *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar13 + 0x178);
      *(undefined1 *)(lVar13 + 200) = *(undefined1 *)(lVar13 + 0x82);
      uVar5 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar5 != 0) {
        FUN_103187f64();
        func_0x000107c61658((undefined8 *)(lVar13 + 0xb8),&UNK_110618668,uVar5);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar13 + 8))();
        return;
      }
      func_0x000107c60e78(*(undefined8 *)(lVar13 + 0x178),*(undefined8 *)(lVar13 + 0x180),
                          *(undefined1 *)(lVar13 + 0x82));
      pcVar9 = FUN_1031956f8;
      lVar3 = 0;
      lVar10 = 0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,lVar3,lVar10);
  return;
}



/* Entry: 1031955a8; end: 10319563b;  */

void FUN_1031955a8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar3 + 0x218);
  uVar5 = *(undefined8 *)(lVar3 + 0x130);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x220));
  func_0x0001000293e4(uVar4);
  func_0x000107c615c0(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    pcVar1 = FUN_10319563c;
  }
  else {
    func_0x000107c60e78();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(lVar6 + 0x180);
    *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(lVar6 + 0x178);
    *(undefined1 *)(lVar6 + 200) = *(undefined1 *)(lVar6 + 0x82);
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103187f64();
      func_0x000107c61658((undefined8 *)(lVar6 + 0xb8),&UNK_110618668,uVar5);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 8))();
      return;
    }
    func_0x000107c60e78(*(undefined8 *)(lVar6 + 0x178),*(undefined8 *)(lVar6 + 0x180),
                        *(undefined1 *)(lVar6 + 0x82));
    pcVar1 = FUN_1031956f8;
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar5,0);
  return;
}



/* Entry: 10319563c; end: 1031956e3;  */

void FUN_10319563c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined1 *)(unaff_x22 + 200) = *(undefined1 *)(unaff_x22 + 0x82);
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_103187f64();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0xb8),&UNK_110618668,uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78(*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x180),
                      *(undefined1 *)(unaff_x22 + 0x82));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031956f8,0,0);
  return;
}



/* Entry: 1031956e4; end: 1031956f7;  */

void FUN_1031956e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031956f8,0,0);
  return;
}



/* Entry: 1031956f8; end: 10319585f;  */

void FUN_1031956f8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar2 = PTR_PTR_1126aed60;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c4a3dc();
  if ((int)puVar3 == 0) {
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 1;
    *(undefined1 *)(unaff_x22 + 0x60) = 4;
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103187f64();
      func_0x000107c61658(unaff_x22 + 0x50,&UNK_110618668,uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x000103195858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(1,0,4);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103195860;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,0);
  func_0x000107c52030();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = &UNK_110618928;
    func_0x000107c613fc(&UNK_110618928,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1031985e4;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110618940;
    lVar4 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c503ec(puVar2);
    func_0x000107c60bd0(lVar4);
    func_0x000107c615e8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103195860);
  (*pcVar1)();
}



/* Entry: 103195860; end: 10319589f;  */

void FUN_103195860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031958a0,0,0);
  return;
}



/* Entry: 1031958a0; end: 1031958c7;  */

void FUN_1031958a0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001031958ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1031958c8; end: 103195acb;  */

void FUN_1031958c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126aed60;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c40114();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xe8) = puVar2;
  if (puVar2 == (undefined *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 2;
    *(undefined1 *)(unaff_x22 + 0xa0) = 4;
    uVar5 = 2;
    uVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103187f64();
      func_0x000107c61658(unaff_x22 + 0x90,&UNK_110618668,uVar4);
      uVar5 = 2;
    }
  }
  else {
    func_0x000107c4d2e4();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xf0) = puVar1;
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c40980();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0xf8) = puVar2;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_103195acc;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar3,1);
      puVar2 = &UNK_1106188d8;
      func_0x000107c613fc(&UNK_1106188d8,0x18,7);
      *(long *)(puVar2 + 0x10) = lVar3;
      *(code **)(unaff_x22 + 0xb0) = FUN_1031985dc;
      *(undefined **)(unaff_x22 + 0xb8) = puVar2;
      *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xa0) = &UNK_100ff4e14;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106188f0;
      lVar3 = unaff_x22 + 0x90;
      func_0x000107c60bc4(lVar3);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c40188();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x100) = puVar1;
      func_0x000107c60bd0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 3;
    *(undefined1 *)(unaff_x22 + 0xa0) = 4;
    uVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103187f64();
      func_0x000107c61658(unaff_x22 + 0x90,&UNK_110618668,uVar4);
    }
    func_0x000107c615e8(puVar2);
    uVar5 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000103195ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,0,4);
  return;
}



/* Entry: 103195acc; end: 103195b2f;  */

void FUN_103195acc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x108) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103195b30;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_103195b84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103195b30; end: 103195b83;  */

void FUN_103195b30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103195b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 103195b84; end: 103195bdf;  */

void FUN_103195b84(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_103195be0;
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c61448(unaff_x22 + 0x50,0);
  func_0x0001031982f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 103195be0; end: 103195c1f;  */

void FUN_103195be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103195c20,0,0);
  return;
}



/* Entry: 103195c20; end: 103195cff;  */

void FUN_103195c20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c614cc(uVar3,unaff_x22 + 0xd8,unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c60640();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xa0) = 0;
  uVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar4 != 0) {
    FUN_103187f64();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x90),&UNK_110618668,uVar4);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar1);
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103195cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar5,0);
  return;
}



/* Entry: 103195d00; end: 103195e8b;  */

void FUN_103195d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c5edb4(lVar7,puVar5);
  func_0x000107c61170(puVar5);
  uStack_70 = 0x5f76615f74616863;
  uStack_68 = 0xe800000000000000;
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
  func_0x000107c5fb78(puVar5,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar1 = uStack_68;
  func_0x000107c5ed9c(param_1,uStack_70,uStack_68);
  func_0x000107c6142c(uVar1);
  (**(code **)(lVar8 + 8))(lVar7,lVar3);
  return;
}



/* Entry: 103195e8c; end: 103195eab;  */

void FUN_103195e8c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x51) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103195eac);
  return;
}



/* Entry: 103195eac; end: 103196453;  */

/* WARNING: Removing unreachable block (ram,0x000103196250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103195eac(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long unaff_x22;
  long lVar21;
  long lStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  ulong uStack_70;
  
  lVar19 = *(long *)(unaff_x22 + 0xd0);
  lVar4 = 0;
  FUN_103197894();
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  lVar21 = *(long *)(lVar4 + -8);
  uVar5 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar5;
  lVar6 = 0;
  FUN_103197644();
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar6 = _DAT_112f47d68;
  func_0x000107c61428(lVar19 + _DAT_112f47d68,unaff_x22 + 0x10,0,0);
  FUN_103187e0c(lVar19 + lVar6,uVar7);
  uVar9 = uVar7;
  (**(code **)(lVar21 + 0x30))(uVar7,1,lVar4);
  if ((int)uVar9 == 1) {
    FUN_103198414(uVar7,FUN_103197644);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar5);
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 7;
    *(undefined1 *)(unaff_x22 + 0x50) = 4;
    uVar8 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar8 != 0) {
      FUN_103187f64();
      func_0x000107c61658(unaff_x22 + 0x40,&UNK_110618668,uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x000103196000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(7,0,4);
    return;
  }
  cVar1 = *(char *)(unaff_x22 + 0x51);
  FUN_103187e7c(uVar7,uVar5);
  func_0x000107c615c0(uVar7);
  if (cVar1 == -1) {
    lVar6 = *(long *)(unaff_x22 + 0xd0);
    iVar3 = *(int *)(lVar4 + 0x14);
    *(int *)(unaff_x22 + 0x6c) = iVar3;
    puVar11 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8();
    puVar12 = puVar11;
    func_0x000107c5ed90();
    func_0x000107c48fd4();
    *(undefined **)(unaff_x22 + 0xf8) = puVar11;
    func_0x000107c61170(puVar12);
    func_0x000107c42378(&lStack_88,puVar11);
    *(long *)(unaff_x22 + 0x54) = lStack_88;
    *(undefined8 **)(unaff_x22 + 0x5c) = puStack_80;
    *(long **)(unaff_x22 + 100) = plStack_78;
    puVar18 = puStack_80;
    func_0x000107c60a3c(unaff_x22 + 0x54);
    *(undefined8 **)(unaff_x22 + 0x100) = puVar18;
    lVar6 = *(long *)(lVar6 + 0x78);
    puVar16 = puVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      if ((double)puVar18 < 0.3) goto LAB_103196190;
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(lVar6);
      if ((double)puVar18 < (double)puVar16) {
LAB_103196190:
        lVar19 = *(long *)(uVar5 + (long)*(int *)(lVar4 + 0x18));
        lVar6 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x148) = uVar9;
        lVar6 = 0;
        func_0x000107c5ede0();
        lVar4 = *(long *)(lVar6 + -8);
        (**(code **)(lVar4 + 0x10))(uVar9,uVar5 + (long)iVar3,lVar6);
        (**(code **)(lVar4 + 0x38))(uVar9,0,1,lVar6);
        plVar10 = (long *)0x100;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x150) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_10319676c;
        puVar18 = *(undefined8 **)(unaff_x22 + 0xd0);
        goto LAB_1031962f0;
      }
    }
    lVar6 = uVar5 + (long)iVar3;
    uVar8 = 0;
    func_0x000107c5ede8();
    *(undefined8 *)(unaff_x22 + 0x108) = 0;
    *(long *)(unaff_x22 + 0x110) = lVar6;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar8;
    lVar6 = *(long *)(unaff_x22 + 0xd0) + _DAT_113806f10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x120) = lVar6;
    if (lVar6 != 0) {
      *(code **)(unaff_x22 + 0x128) = FUN_103186e7c;
      puVar18 = (undefined8 *)0x0;
      func_0x000107c5fcec();
      puVar16 = puVar18;
      func_0x000107c5fce8();
      *(undefined8 **)(unaff_x22 + 0x130) = puVar16;
      func_0x000100eea164();
      func_0x000107c5fca8(puVar18,puVar16);
      pcVar15 = FUN_103196544;
      goto LAB_107c615e0;
    }
    iVar3 = *(int *)(unaff_x22 + 0x6c);
    lVar4 = *(long *)(unaff_x22 + 0xe0);
    lVar19 = *(long *)(lVar4 + *(int *)(*(long *)(unaff_x22 + 0xd8) + 0x18));
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x138) = uVar9;
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar21 = *(long *)(lVar6 + -8);
    (**(code **)(lVar21 + 0x10))(uVar9,lVar4 + iVar3,lVar6);
    (**(code **)(lVar21 + 0x38))(uVar9,0,1,lVar6);
    plVar10 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x140) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1031966a8;
    puVar18 = *(undefined8 **)(unaff_x22 + 0xd0);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar17 = *(undefined8 *)(unaff_x22 + 200);
    lVar19 = *(long *)(uVar5 + (long)*(int *)(lVar4 + 0x18));
    uVar2 = *(undefined1 *)(unaff_x22 + 0x51);
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0xe8) = uVar9;
    iVar3 = *(int *)(lVar4 + 0x14);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar4 = *(long *)(lVar6 + -8);
    (**(code **)(lVar4 + 0x10))(uVar9,uVar5 + (long)iVar3,lVar6);
    (**(code **)(lVar4 + 0x38))(uVar9,0,1,lVar6);
    FUN_103187774(uVar8,uVar17,uVar2);
    plVar10 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_103196454;
    puVar18 = *(undefined8 **)(unaff_x22 + 0xd0);
  }
LAB_1031962f0:
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10[0x15] = uVar9;
  plVar10[0x16] = (long)puVar18;
  plVar10[0x14] = lVar19;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x17] = uVar9;
  lVar6 = 0;
  func_0x000107c5ede0();
  plVar10[0x18] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar10[0x19] = lVar6;
  uVar9 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1a] = uVar9;
  lVar6 = 0;
  FUN_103197644();
  uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x1b] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    pcVar15 = FUN_103196dcc;
    puVar16 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar21 = plVar10[0x1b];
    lVar19 = plVar10[0x16];
    lVar20 = plVar10[0x14];
    lVar6 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar21,1,1,lVar6);
    lVar6 = _DAT_112f47d68;
    func_0x000107c61428(lVar19 + _DAT_112f47d68,plVar10 + 10,0x21,0);
    func_0x000103187ec0(lVar21,lVar19 + lVar6);
    func_0x000107c614a8(plVar10 + 10);
    lVar6 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar6 + 0x10) = 8;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    puVar14 = (undefined8 *)(lVar19 + _DAT_112f47d70);
    func_0x000107c61428(puVar14,plVar10 + 0xd,1,0);
    uVar8 = puVar14[2];
    *puVar14 = 0;
    puVar14[1] = 0x3fd3333333333333;
    puVar14[2] = lVar6;
    func_0x000107c6142c(uVar8);
    if (lVar20 == 0) {
      lVar6 = plVar10[0x18];
      lVar19 = plVar10[0x19];
      lVar21 = plVar10[0x17];
      FUN_103198594(plVar10[0x15],lVar21,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar19 + 0x30))(lVar21,1,lVar6);
      if ((int)lVar21 == 1) {
        func_0x0001000293e4(plVar10[0x17]);
      }
      else {
        (**(code **)(plVar10[0x19] + 0x20))(plVar10[0x1a],plVar10[0x17],plVar10[0x18]);
        puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c5ed90();
        plVar10[0x13] = 0;
        puVar13 = puVar11;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        lVar6 = plVar10[0x13];
        if ((int)puVar13 == 0) {
          lVar19 = lVar6;
          func_0x000107c61174(lVar6);
          func_0x000107c5ed30();
          func_0x000107c61170(lVar19);
          func_0x000107c61654();
          func_0x000107c614ac(lVar6);
        }
        else {
          func_0x000107c61174(lVar6);
        }
        (**(code **)(plVar10[0x19] + 8))(plVar10[0x1a],plVar10[0x18]);
      }
      lVar6 = plVar10[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar10[0x1d] = lVar6;
      if (lVar6 == 0) {
        lVar6 = plVar10[0x1a];
        puVar14 = (undefined8 *)plVar10[0x17];
        func_0x000107c615c0(plVar10[0x1b]);
        func_0x000107c615c0(lVar6);
        func_0x000107c615c0(puVar14);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar10[1])();
          return;
        }
      }
      else {
        puVar14 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar16 = puVar14;
        func_0x000107c5fce8();
        plVar10[0x1e] = (long)puVar16;
        func_0x000100eea164();
        puVar18 = puVar14;
        func_0x000107c5fca8(puVar14,puVar16);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
          pcVar15 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar10[0x1c] = *(long *)(plVar10[0x16] + 0x70);
      func_0x000107c61174(plVar10[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        pcVar15 = FUN_1031970e0;
        puVar18 = (undefined8 *)0x0;
        puVar16 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    uStack_70 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10[2] = (long)plVar10;
    plVar10[3] = (long)FUN_103197168;
    puStack_80 = puVar14;
    plStack_78 = plVar10;
    func_0x000107c61448(plVar10 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar10 + 2);
      return;
    }
    func_0x000107c60e78();
    lVar6 = *plVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      pcVar15 = (code *)0x1031971d4;
      puVar18 = (undefined8 *)0x0;
      puVar16 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      puVar18 = *(undefined8 **)(lVar6 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar6 + 0xa0));
        uVar8 = *(undefined8 *)(lVar6 + 0xc0);
        lVar4 = *(long *)(lVar6 + 200);
        uVar17 = *(undefined8 *)(lVar6 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar6 + 0xa8),uVar17,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar4 + 0x30))(uVar17,1,uVar8);
        if ((int)uVar17 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar6 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar6 + 200) + 0x20))
                    (*(undefined8 *)(lVar6 + 0xd0),*(undefined8 *)(lVar6 + 0xb8),
                     *(undefined8 *)(lVar6 + 0xc0));
          puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar12 = puVar11;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar6 + 0x98) = 0;
          puVar13 = puVar11;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar11);
          uVar8 = *(undefined8 *)(lVar6 + 0x98);
          if ((int)puVar13 == 0) {
            uVar17 = uVar8;
            func_0x000107c61174(uVar8);
            func_0x000107c5ed30(uVar8);
            func_0x000107c61170(uVar17);
            func_0x000107c61654();
            func_0x000107c614ac(uVar8);
          }
          else {
            func_0x000107c61174(uVar8);
          }
          (**(code **)(*(long *)(lVar6 + 200) + 8))
                    (*(undefined8 *)(lVar6 + 0xd0),*(undefined8 *)(lVar6 + 0xc0));
        }
        lVar4 = *(long *)(lVar6 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar6 + 0xe8) = lVar4;
        if (lVar4 == 0) {
          uVar8 = *(undefined8 *)(lVar6 + 0xd0);
          uVar17 = *(undefined8 *)(lVar6 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xd8));
          func_0x000107c615c0(uVar8);
          func_0x000107c615c0(uVar17);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))();
            return;
          }
        }
        else {
          puVar18 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar16 = puVar18;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar6 + 0xf0) = puVar16;
          func_0x000100eea164();
          func_0x000107c5fca8(puVar18,puVar16);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
            pcVar15 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar4 = *(long *)(lVar6 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar6 + 0xf0));
        lVar19 = _DAT_112f476d0;
        func_0x000107c61428(lVar4 + _DAT_112f476d0,lVar6 + 0x80,0,0);
        lVar4 = lVar4 + lVar19;
        func_0x000107c61618();
        if (lVar4 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar6 + 0xe8));
        lVar4 = *(long *)(lVar6 + 0xd0);
        uVar8 = *(undefined8 *)(lVar6 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xd8));
        func_0x000107c615c0(lVar4);
        func_0x000107c615c0(uVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
          func_0x000107c60e78();
          func_0x000107c615e8(*(undefined8 *)(lVar4 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar4 + 0x78));
          FUN_103198414(lVar4 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar4 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar4 + _DAT_113806f10);
          func_0x000107c61470(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar4);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))();
        return;
      }
      pcVar15 = FUN_103197234;
      puVar16 = (undefined8 *)0x0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar15,puVar18,puVar16);
  return;
}



/* Entry: 103196454; end: 1031964af;  */

void FUN_103196454(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe8);
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  func_0x0001000293e4(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031964b0,uVar3,0);
  return;
}



/* Entry: 1031964b0; end: 103196543;  */

void FUN_1031964b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined1 *)(unaff_x22 + 0xb0) = *(undefined1 *)(unaff_x22 + 0x51);
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_103187f64();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0xa0),&UNK_110618668,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  FUN_103198414(uVar1,FUN_103197894);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103196540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200),
             *(undefined1 *)(unaff_x22 + 0x51));
  return;
}



/* Entry: 103196544; end: 1031965cb;  */

void FUN_103196544(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar1 = *(code **)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x130));
  uVar4 = 0;
  FUN_103187628(0);
  (*pcVar1)(uVar7,uVar5,uVar2,uVar4,&PTR_DAT_110618020);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031965cc,uVar6,0);
  return;
}



/* Entry: 1031965cc; end: 1031966a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031965cc(void)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  
  iVar2 = *(int *)(unaff_x22 + 0x6c);
  lVar12 = *(long *)(unaff_x22 + 0xe0);
  lVar14 = *(long *)(lVar12 + *(int *)(*(long *)(unaff_x22 + 0xd8) + 0x18));
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (**(code **)(lVar15 + 0x10))(uVar3,lVar12 + iVar2,lVar4);
  (**(code **)(lVar15 + 0x38))(uVar3,0,1,lVar4);
  plVar5 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1031966a8;
  lVar12 = *(long *)(unaff_x22 + 0xd0);
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5[0x15] = uVar3;
  plVar5[0x16] = lVar12;
  plVar5[0x14] = lVar14;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x17] = uVar3;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar5[0x18] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0x19] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1a] = uVar3;
  lVar4 = 0;
  FUN_103197644();
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1b] = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar10 = FUN_103196dcc;
    lVar4 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar5[0x1b];
    lVar12 = plVar5[0x16];
    lVar13 = plVar5[0x14];
    lVar4 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar14,1,1,lVar4);
    lVar4 = _DAT_112f47d68;
    func_0x000107c61428(lVar12 + _DAT_112f47d68,plVar5 + 10,0x21,0);
    func_0x000103187ec0(lVar14,lVar12 + lVar4);
    func_0x000107c614a8(plVar5 + 10);
    lVar4 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar4 + 0x10) = 8;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    puVar1 = (undefined8 *)(lVar12 + _DAT_112f47d70);
    func_0x000107c61428(puVar1,plVar5 + 0xd,1,0);
    uVar6 = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0x3fd3333333333333;
    puVar1[2] = lVar4;
    func_0x000107c6142c(uVar6);
    if (lVar13 == 0) {
      lVar4 = plVar5[0x18];
      lVar12 = plVar5[0x19];
      lVar14 = plVar5[0x17];
      FUN_103198594(plVar5[0x15],lVar14,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar12 + 0x30))(lVar14,1,lVar4);
      if ((int)lVar14 == 1) {
        func_0x0001000293e4(plVar5[0x17]);
      }
      else {
        (**(code **)(plVar5[0x19] + 0x20))(plVar5[0x1a],plVar5[0x17],plVar5[0x18]);
        puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5ed90();
        plVar5[0x13] = 0;
        puVar9 = puVar7;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        lVar4 = plVar5[0x13];
        if ((int)puVar9 == 0) {
          lVar12 = lVar4;
          func_0x000107c61174(lVar4);
          func_0x000107c5ed30();
          func_0x000107c61170(lVar12);
          func_0x000107c61654();
          func_0x000107c614ac(lVar4);
        }
        else {
          func_0x000107c61174(lVar4);
        }
        (**(code **)(plVar5[0x19] + 8))(plVar5[0x1a],plVar5[0x18]);
      }
      lVar4 = plVar5[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar5[0x1d] = lVar4;
      if (lVar4 == 0) {
        lVar4 = plVar5[0x1a];
        lVar12 = plVar5[0x17];
        func_0x000107c615c0(plVar5[0x1b]);
        func_0x000107c615c0(lVar4);
        func_0x000107c615c0(lVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar5[1])();
          return;
        }
      }
      else {
        lVar12 = 0;
        func_0x000107c5fcec();
        lVar4 = lVar12;
        func_0x000107c5fce8();
        plVar5[0x1e] = lVar4;
        func_0x000100eea164();
        func_0x000107c5fca8(lVar12,lVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
          pcVar10 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar5[0x1c] = *(long *)(plVar5[0x16] + 0x70);
      func_0x000107c61174(plVar5[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        pcVar10 = FUN_1031970e0;
        lVar12 = 0;
        lVar4 = 0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5[2] = (long)plVar5;
    plVar5[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar5 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar5 + 2);
      return;
    }
    func_0x000107c60e78();
    lVar15 = *plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      pcVar10 = (code *)0x1031971d4;
      lVar12 = 0;
      lVar4 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar12 = *(long *)(lVar15 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar15 + 0xa0));
        uVar6 = *(undefined8 *)(lVar15 + 0xc0);
        lVar4 = *(long *)(lVar15 + 200);
        uVar11 = *(undefined8 *)(lVar15 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar15 + 0xa8),uVar11,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar4 + 0x30))(uVar11,1,uVar6);
        if ((int)uVar11 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar15 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar15 + 200) + 0x20))
                    (*(undefined8 *)(lVar15 + 0xd0),*(undefined8 *)(lVar15 + 0xb8),
                     *(undefined8 *)(lVar15 + 0xc0));
          puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar8 = puVar7;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar15 + 0x98) = 0;
          puVar9 = puVar7;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar7);
          uVar6 = *(undefined8 *)(lVar15 + 0x98);
          if ((int)puVar9 == 0) {
            uVar11 = uVar6;
            func_0x000107c61174(uVar6);
            func_0x000107c5ed30(uVar6);
            func_0x000107c61170(uVar11);
            func_0x000107c61654();
            func_0x000107c614ac(uVar6);
          }
          else {
            func_0x000107c61174(uVar6);
          }
          (**(code **)(*(long *)(lVar15 + 200) + 8))
                    (*(undefined8 *)(lVar15 + 0xd0),*(undefined8 *)(lVar15 + 0xc0));
        }
        lVar4 = *(long *)(lVar15 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar15 + 0xe8) = lVar4;
        if (lVar4 == 0) {
          uVar6 = *(undefined8 *)(lVar15 + 0xd0);
          uVar11 = *(undefined8 *)(lVar15 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xd8));
          func_0x000107c615c0(uVar6);
          func_0x000107c615c0(uVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar15 + 8))();
            return;
          }
        }
        else {
          lVar12 = 0;
          func_0x000107c5fcec();
          lVar4 = lVar12;
          func_0x000107c5fce8();
          *(long *)(lVar15 + 0xf0) = lVar4;
          func_0x000100eea164();
          func_0x000107c5fca8(lVar12,lVar4);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
            pcVar10 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar4 = *(long *)(lVar15 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar15 + 0xf0));
        lVar12 = _DAT_112f476d0;
        func_0x000107c61428(lVar4 + _DAT_112f476d0,lVar15 + 0x80,0,0);
        lVar4 = lVar4 + lVar12;
        func_0x000107c61618();
        if (lVar4 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xe8));
        lVar4 = *(long *)(lVar15 + 0xd0);
        uVar6 = *(undefined8 *)(lVar15 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xd8));
        func_0x000107c615c0(lVar4);
        func_0x000107c615c0(uVar6);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
          func_0x000107c60e78();
          func_0x000107c615e8(*(undefined8 *)(lVar4 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar4 + 0x78));
          FUN_103198414(lVar4 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar4 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar4 + _DAT_113806f10);
          func_0x000107c61470(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar4);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      pcVar10 = FUN_103197234;
      lVar4 = 0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar10,lVar12,lVar4);
  return;
}



/* Entry: 1031966a8; end: 103196703;  */

void FUN_1031966a8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x138);
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  func_0x0001000293e4(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103196704,uVar3,0);
  return;
}



/* Entry: 103196704; end: 10319676b;  */

void FUN_103196704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x00010006c090(uVar1,uVar2);
  FUN_103198414(uVar3,FUN_103197894);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103196768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10319676c; end: 1031967c7;  */

void FUN_10319676c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x148);
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x150));
  func_0x0001000293e4(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031967c8,uVar3,0);
  return;
}



/* Entry: 1031967c8; end: 10319686b;  */

void FUN_1031967c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 9;
  *(undefined1 *)(unaff_x22 + 0x80) = 4;
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_103187f64();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x70),&UNK_110618668,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  FUN_103198414(uVar1,FUN_103197894);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103196868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(9,0,4);
  return;
}



/* Entry: 10319686c; end: 1031968c7;  */

void FUN_10319686c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x158);
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  func_0x0001000293e4(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031968c8,uVar3,0);
  return;
}



/* Entry: 1031968c8; end: 10319699b;  */

void FUN_1031968c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0xb8,unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c60640();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x98) = 3;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_103187f64();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x88),&UNK_110618668,uVar2);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61170(uVar2);
  FUN_103198414(uVar4,FUN_103197894);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103196998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,3);
  return;
}



/* Entry: 10319699c; end: 103196cef;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10319699c(float param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined *apuStack_c0 [4];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  FUN_103197644();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = (long)apuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_103197894();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = _DAT_112f47d68;
  puVar9 = (undefined8 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + _DAT_112f47d68,auStack_88,0,0);
  FUN_103187e0c(unaff_x20 + lVar4,lVar11);
  lVar4 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_103198414(lVar11,FUN_103197644);
  }
  else {
    FUN_103187e7c(lVar11,puVar9);
    uVar6 = *puVar9;
    func_0x000107c61174();
    uVar7 = uVar6;
    func_0x000107c4a2f8();
    if ((int)uVar7 != 0) {
      func_0x000107c5d570(uVar6);
      func_0x000107c4e4bc(uVar6);
      dVar14 = (double)param_1 / 20.0;
      func_0x000107c60e60();
      puVar1 = (ulong *)(unaff_x20 + _DAT_112f47d70);
      func_0x000107c61428(puVar1,auStack_a0,1,0);
      uVar13 = *puVar1;
      if ((uVar13 & 7) == 0) {
        func_0x000107c5668c(uVar6);
        uVar13 = *puVar1;
      }
      dVar15 = (double)puVar1[1];
      dVar16 = 0.0;
      if (0.0 < dVar14 / dVar15) {
        dVar16 = dVar14 / dVar15;
      }
      dVar17 = 1.0;
      if (dVar16 <= 1.0) {
        dVar17 = dVar16;
      }
      if (dVar15 < dVar14) {
        dVar15 = dVar14;
      }
      dVar14 = 0.6;
      if (dVar15 <= 0.6) {
        dVar14 = dVar15;
      }
      puVar1[1] = (ulong)dVar14;
      func_0x000107c61428(puVar1,apuStack_c0 + 1,0x21,0);
      uVar10 = puVar1[2];
      uVar8 = uVar10;
      func_0x000107c61558();
      puVar1[2] = uVar10;
      if ((uVar8 & 1) == 0) {
        FUN_10319845c();
      }
      uVar8 = uVar13 & 7;
      if (-1 < (long)-uVar13) {
        uVar8 = -(-uVar13 & 7);
      }
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103196ce8);
        (*pcVar3)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103196cec);
        (*pcVar3)();
      }
      *(double *)(uVar10 + uVar8 * 8 + 0x20) = dVar17;
      puVar1[2] = uVar10;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103196cf0);
        (*pcVar3)();
      }
      *puVar1 = uVar13 + 1;
      func_0x000107c614a8(apuStack_c0 + 1);
      if ((uVar13 + 1 & 7) == 0) {
        apuStack_c0[1] = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000102b10e94(0,0xe,0);
        uVar13 = 0;
        while( true ) {
          uVar8 = uVar13 >> 1;
          uVar10 = *(ulong *)(puVar1[2] + 0x10);
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103196cd0);
            (*pcVar3)();
          }
          uVar13 = uVar13 + 1;
          if (uVar10 <= uVar13 >> 1) break;
          lVar4 = puVar1[2] + 0x20;
          dVar14 = *(double *)(lVar4 + uVar8 * 8);
          dVar15 = *(double *)(lVar4 + (uVar13 >> 1) * 8);
          uVar8 = *(ulong *)(apuStack_c0[1] + 0x10);
          if (*(ulong *)(apuStack_c0[1] + 0x18) >> 1 <= uVar8) {
            func_0x000102b10e94(1 < *(ulong *)(apuStack_c0[1] + 0x18),uVar8 + 1,1);
          }
          puVar2 = apuStack_c0[1];
          *(ulong *)(apuStack_c0[1] + 0x10) = uVar8 + 1;
          *(double *)(apuStack_c0[1] + uVar8 * 8 + 0x20) = (dVar14 + dVar15) * 0.5;
          if (uVar13 == 0xe) {
            func_0x000107c61170(uVar6);
            FUN_103198414(puVar9,FUN_103197894);
            return puVar2;
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103196cd4);
        (*pcVar3)();
      }
    }
    FUN_103198414(puVar9,FUN_103197894);
    func_0x000107c61170(uVar6);
  }
  return (undefined *)0x0;
}



/* Entry: 103196cf0; end: 103196dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103196cf0(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long *unaff_x22;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x15] = param_2;
  unaff_x22[0x16] = unaff_x20;
  unaff_x22[0x14] = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x17] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  unaff_x22[0x18] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  unaff_x22[0x19] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x1a] = uVar2;
  lVar3 = 0;
  FUN_103197644();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x1b] = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    pcVar8 = FUN_103196dcc;
  }
  else {
    func_0x000107c60e78();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = unaff_x22[0x1b];
    lVar10 = unaff_x22[0x16];
    lVar13 = unaff_x22[0x14];
    lVar3 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar12,1,1,lVar3);
    lVar3 = _DAT_112f47d68;
    func_0x000107c61428(lVar10 + _DAT_112f47d68,unaff_x22 + 10,0x21,0);
    func_0x000103187ec0(lVar12,lVar10 + lVar3);
    func_0x000107c614a8(unaff_x22 + 10);
    lVar3 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar3 + 0x10) = 8;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112f47d70);
    func_0x000107c61428(puVar1,unaff_x22 + 0xd,1,0);
    uVar4 = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0x3fd3333333333333;
    puVar1[2] = lVar3;
    func_0x000107c6142c(uVar4);
    if (lVar13 == 0) {
      lVar3 = unaff_x22[0x18];
      lVar10 = unaff_x22[0x19];
      lVar12 = unaff_x22[0x17];
      FUN_103198594(unaff_x22[0x15],lVar12,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar10 + 0x30))(lVar12,1,lVar3);
      if ((int)lVar12 == 1) {
        func_0x0001000293e4(unaff_x22[0x17]);
      }
      else {
        (**(code **)(unaff_x22[0x19] + 0x20))(unaff_x22[0x1a],unaff_x22[0x17],unaff_x22[0x18]);
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        unaff_x22[0x13] = 0;
        puVar7 = puVar5;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        lVar3 = unaff_x22[0x13];
        if ((int)puVar7 == 0) {
          lVar10 = lVar3;
          func_0x000107c61174(lVar3);
          func_0x000107c5ed30();
          func_0x000107c61170(lVar10);
          func_0x000107c61654();
          func_0x000107c614ac(lVar3);
        }
        else {
          func_0x000107c61174(lVar3);
        }
        (**(code **)(unaff_x22[0x19] + 8))(unaff_x22[0x1a],unaff_x22[0x18]);
      }
      lVar3 = unaff_x22[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      unaff_x22[0x1d] = lVar3;
      if (lVar3 == 0) {
        lVar3 = unaff_x22[0x1a];
        lVar10 = unaff_x22[0x17];
        func_0x000107c615c0(unaff_x22[0x1b]);
        func_0x000107c615c0(lVar3);
        func_0x000107c615c0(lVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)unaff_x22[1])();
          return;
        }
      }
      else {
        lVar10 = 0;
        func_0x000107c5fcec();
        lVar3 = lVar10;
        func_0x000107c5fce8();
        unaff_x22[0x1e] = lVar3;
        func_0x000100eea164();
        func_0x000107c5fca8(lVar10,lVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
          pcVar8 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      unaff_x22[0x1c] = *(long *)(unaff_x22[0x16] + 0x70);
      func_0x000107c61174(unaff_x22[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        pcVar8 = FUN_1031970e0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_103197168;
    func_0x000107c61448(unaff_x22 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
      return;
    }
    func_0x000107c60e78();
    lVar3 = *unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      pcVar8 = (code *)0x1031971d4;
    }
    else {
      func_0x000107c60e78();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar3 + 0xa0));
        uVar4 = *(undefined8 *)(lVar3 + 0xc0);
        lVar9 = *(long *)(lVar3 + 200);
        uVar11 = *(undefined8 *)(lVar3 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar3 + 0xa8),uVar11,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar9 + 0x30))(uVar11,1,uVar4);
        if ((int)uVar11 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar3 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar3 + 200) + 0x20))
                    (*(undefined8 *)(lVar3 + 0xd0),*(undefined8 *)(lVar3 + 0xb8),
                     *(undefined8 *)(lVar3 + 0xc0));
          puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar5;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar3 + 0x98) = 0;
          puVar7 = puVar5;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar5);
          uVar4 = *(undefined8 *)(lVar3 + 0x98);
          if ((int)puVar7 == 0) {
            uVar11 = uVar4;
            func_0x000107c61174(uVar4);
            func_0x000107c5ed30(uVar4);
            func_0x000107c61170(uVar11);
            func_0x000107c61654();
            func_0x000107c614ac(uVar4);
          }
          else {
            func_0x000107c61174(uVar4);
          }
          (**(code **)(*(long *)(lVar3 + 200) + 8))
                    (*(undefined8 *)(lVar3 + 0xd0),*(undefined8 *)(lVar3 + 0xc0));
        }
        lVar9 = *(long *)(lVar3 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar3 + 0xe8) = lVar9;
        if (lVar9 == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0xd0);
          uVar11 = *(undefined8 *)(lVar3 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
          func_0x000107c615c0(uVar4);
          func_0x000107c615c0(uVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar3 + 8))();
            return;
          }
        }
        else {
          uVar11 = 0;
          func_0x000107c5fcec();
          uVar4 = uVar11;
          func_0x000107c5fce8();
          *(undefined8 *)(lVar3 + 0xf0) = uVar4;
          func_0x000100eea164();
          func_0x000107c5fca8(uVar11,uVar4);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
            pcVar8 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar9 = *(long *)(lVar3 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar3 + 0xf0));
        lVar10 = _DAT_112f476d0;
        func_0x000107c61428(lVar9 + _DAT_112f476d0,lVar3 + 0x80,0,0);
        lVar9 = lVar9 + lVar10;
        func_0x000107c61618();
        if (lVar9 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar9);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar3 + 0xe8));
        lVar9 = *(long *)(lVar3 + 0xd0);
        uVar4 = *(undefined8 *)(lVar3 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
        func_0x000107c615c0(lVar9);
        func_0x000107c615c0(uVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          func_0x000107c60e78();
          func_0x000107c615e8(*(undefined8 *)(lVar9 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar9 + 0x78));
          FUN_103198414(lVar9 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar9 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar9 + _DAT_113806f10);
          func_0x000107c61470(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar9);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 8))();
        return;
      }
      pcVar8 = FUN_103197234;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8);
  return;
}



/* Entry: 103196dcc; end: 1031970df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103196dcc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x22;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = unaff_x22[0x1b];
  lVar9 = unaff_x22[0x16];
  lVar12 = unaff_x22[0x14];
  lVar2 = 0;
  FUN_103197894();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar11,1,1,lVar2);
  lVar2 = _DAT_112f47d68;
  func_0x000107c61428(lVar9 + _DAT_112f47d68,unaff_x22 + 10,0x21,0);
  func_0x000103187ec0(lVar11,lVar9 + lVar2);
  func_0x000107c614a8(unaff_x22 + 10);
  lVar2 = 8;
  func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  *(undefined8 *)(lVar2 + 0x10) = 8;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f47d70);
  func_0x000107c61428(puVar1,unaff_x22 + 0xd,1,0);
  uVar3 = puVar1[2];
  *puVar1 = 0;
  puVar1[1] = 0x3fd3333333333333;
  puVar1[2] = lVar2;
  func_0x000107c6142c(uVar3);
  if (lVar12 == 0) {
    lVar2 = unaff_x22[0x18];
    lVar9 = unaff_x22[0x19];
    lVar11 = unaff_x22[0x17];
    FUN_103198594(unaff_x22[0x15],lVar11,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar9 + 0x30))(lVar11,1,lVar2);
    if ((int)lVar11 == 1) {
      func_0x0001000293e4(unaff_x22[0x17]);
    }
    else {
      (**(code **)(unaff_x22[0x19] + 0x20))(unaff_x22[0x1a],unaff_x22[0x17],unaff_x22[0x18]);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      unaff_x22[0x13] = 0;
      puVar6 = puVar4;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      lVar2 = unaff_x22[0x13];
      if ((int)puVar6 == 0) {
        lVar9 = lVar2;
        func_0x000107c61174(lVar2);
        func_0x000107c5ed30();
        func_0x000107c61170(lVar9);
        func_0x000107c61654();
        func_0x000107c614ac(lVar2);
      }
      else {
        func_0x000107c61174(lVar2);
      }
      (**(code **)(unaff_x22[0x19] + 8))(unaff_x22[0x1a],unaff_x22[0x18]);
    }
    lVar2 = unaff_x22[0x16] + _DAT_113806f10;
    func_0x000107c61618();
    unaff_x22[0x1d] = lVar2;
    if (lVar2 == 0) {
      lVar2 = unaff_x22[0x1a];
      lVar9 = unaff_x22[0x17];
      func_0x000107c615c0(unaff_x22[0x1b]);
      func_0x000107c615c0(lVar2);
      func_0x000107c615c0(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)unaff_x22[1])();
        return;
      }
    }
    else {
      lVar9 = 0;
      func_0x000107c5fcec();
      lVar2 = lVar9;
      func_0x000107c5fce8();
      unaff_x22[0x1e] = lVar2;
      func_0x000100eea164();
      func_0x000107c5fca8(lVar9,lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        pcVar7 = FUN_103197450;
        goto LAB_107c615e0;
      }
    }
  }
  else {
    unaff_x22[0x1c] = *(long *)(unaff_x22[0x16] + 0x70);
    func_0x000107c61174(unaff_x22[0x14]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      pcVar7 = FUN_1031970e0;
      lVar9 = 0;
      lVar2 = 0;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[2] = (long)unaff_x22;
  unaff_x22[3] = (long)FUN_103197168;
  func_0x000107c61448(unaff_x22 + 2,0);
  func_0x0001031982f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
    return;
  }
  func_0x000107c60e78();
  lVar8 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar7 = (code *)0x1031971d4;
    lVar9 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar9 = *(long *)(lVar8 + 0xb0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c61170(*(undefined8 *)(lVar8 + 0xa0));
      uVar3 = *(undefined8 *)(lVar8 + 0xc0);
      lVar2 = *(long *)(lVar8 + 200);
      uVar10 = *(undefined8 *)(lVar8 + 0xb8);
      FUN_103198594(*(undefined8 *)(lVar8 + 0xa8),uVar10,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar2 + 0x30))(uVar10,1,uVar3);
      if ((int)uVar10 == 1) {
        func_0x0001000293e4(*(undefined8 *)(lVar8 + 0xb8));
      }
      else {
        (**(code **)(*(long *)(lVar8 + 200) + 0x20))
                  (*(undefined8 *)(lVar8 + 0xd0),*(undefined8 *)(lVar8 + 0xb8),
                   *(undefined8 *)(lVar8 + 0xc0));
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c5ed90();
        *(undefined8 *)(lVar8 + 0x98) = 0;
        puVar6 = puVar4;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        uVar3 = *(undefined8 *)(lVar8 + 0x98);
        if ((int)puVar6 == 0) {
          uVar10 = uVar3;
          func_0x000107c61174(uVar3);
          func_0x000107c5ed30(uVar3);
          func_0x000107c61170(uVar10);
          func_0x000107c61654();
          func_0x000107c614ac(uVar3);
        }
        else {
          func_0x000107c61174(uVar3);
        }
        (**(code **)(*(long *)(lVar8 + 200) + 8))
                  (*(undefined8 *)(lVar8 + 0xd0),*(undefined8 *)(lVar8 + 0xc0));
      }
      lVar2 = *(long *)(lVar8 + 0xb0) + _DAT_113806f10;
      func_0x000107c61618();
      *(long *)(lVar8 + 0xe8) = lVar2;
      if (lVar2 == 0) {
        uVar3 = *(undefined8 *)(lVar8 + 0xd0);
        uVar10 = *(undefined8 *)(lVar8 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd8));
        func_0x000107c615c0(uVar3);
        func_0x000107c615c0(uVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 8))();
          return;
        }
      }
      else {
        lVar9 = 0;
        func_0x000107c5fcec();
        lVar2 = lVar9;
        func_0x000107c5fce8();
        *(long *)(lVar8 + 0xf0) = lVar2;
        func_0x000100eea164();
        func_0x000107c5fca8(lVar9,lVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          pcVar7 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = *(long *)(lVar8 + 0xe8);
      func_0x000107c61574(*(undefined8 *)(lVar8 + 0xf0));
      lVar9 = _DAT_112f476d0;
      func_0x000107c61428(lVar2 + _DAT_112f476d0,lVar8 + 0x80,0,0);
      lVar2 = lVar2 + lVar9;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c3e3e0();
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c615e8(*(undefined8 *)(lVar8 + 0xe8));
      lVar2 = *(long *)(lVar8 + 0xd0);
      uVar3 = *(undefined8 *)(lVar8 + 0xb8);
      func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd8));
      func_0x000107c615c0(lVar2);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x70));
        func_0x000107c61170(*(undefined8 *)(lVar2 + 0x78));
        FUN_103198414(lVar2 + _DAT_112f47d68,FUN_103197644);
        func_0x000107c6142c(*(undefined8 *)(lVar2 + _DAT_112f47d70 + 0x10));
        FUN_1031985fc(lVar2 + _DAT_113806f10);
        func_0x000107c61470(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 8))();
      return;
    }
    pcVar7 = FUN_103197234;
    lVar2 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,lVar9,lVar2);
  return;
}



/* Entry: 1031970e0; end: 103197167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031970e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x22;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[2] = (long)unaff_x22;
  unaff_x22[3] = (long)FUN_103197168;
  func_0x000107c61448(unaff_x22 + 2,0);
  func_0x0001031982f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
    return;
  }
  func_0x000107c60e78();
  lVar8 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar5 = (code *)0x1031971d4;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c60e78();
    uVar6 = *(undefined8 *)(lVar8 + 0xb0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c61170(*(undefined8 *)(lVar8 + 0xa0));
      uVar6 = *(undefined8 *)(lVar8 + 0xc0);
      lVar4 = *(long *)(lVar8 + 200);
      uVar7 = *(undefined8 *)(lVar8 + 0xb8);
      FUN_103198594(*(undefined8 *)(lVar8 + 0xa8),uVar7,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar4 + 0x30))(uVar7,1,uVar6);
      if ((int)uVar7 == 1) {
        func_0x0001000293e4(*(undefined8 *)(lVar8 + 0xb8));
      }
      else {
        (**(code **)(*(long *)(lVar8 + 200) + 0x20))
                  (*(undefined8 *)(lVar8 + 0xd0),*(undefined8 *)(lVar8 + 0xb8),
                   *(undefined8 *)(lVar8 + 0xc0));
        puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar2 = puVar1;
        func_0x000107c5ed90();
        *(undefined8 *)(lVar8 + 0x98) = 0;
        puVar3 = puVar1;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar1);
        uVar6 = *(undefined8 *)(lVar8 + 0x98);
        if ((int)puVar3 == 0) {
          uVar7 = uVar6;
          func_0x000107c61174(uVar6);
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar7);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
        }
        else {
          func_0x000107c61174(uVar6);
        }
        (**(code **)(*(long *)(lVar8 + 200) + 8))
                  (*(undefined8 *)(lVar8 + 0xd0),*(undefined8 *)(lVar8 + 0xc0));
      }
      lVar4 = *(long *)(lVar8 + 0xb0) + _DAT_113806f10;
      func_0x000107c61618();
      *(long *)(lVar8 + 0xe8) = lVar4;
      if (lVar4 == 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0xd0);
        uVar7 = *(undefined8 *)(lVar8 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd8));
        func_0x000107c615c0(uVar6);
        func_0x000107c615c0(uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 8))();
          return;
        }
      }
      else {
        uVar6 = 0;
        func_0x000107c5fcec();
        uVar7 = uVar6;
        func_0x000107c5fce8();
        *(undefined8 *)(lVar8 + 0xf0) = uVar7;
        func_0x000100eea164();
        func_0x000107c5fca8(uVar6,uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
          pcVar5 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = *(long *)(lVar8 + 0xe8);
      func_0x000107c61574(*(undefined8 *)(lVar8 + 0xf0));
      lVar9 = _DAT_112f476d0;
      func_0x000107c61428(lVar4 + _DAT_112f476d0,lVar8 + 0x80,0,0);
      lVar4 = lVar4 + lVar9;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c3e3e0();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(*(undefined8 *)(lVar8 + 0xe8));
      lVar4 = *(long *)(lVar8 + 0xd0);
      uVar6 = *(undefined8 *)(lVar8 + 0xb8);
      func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xd8));
      func_0x000107c615c0(lVar4);
      func_0x000107c615c0(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 8))();
        return;
      }
      func_0x000107c60e78();
      func_0x000107c615e8(*(undefined8 *)(lVar4 + 0x70));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x78));
      FUN_103198414(lVar4 + _DAT_112f47d68,FUN_103197644);
      func_0x000107c6142c(*(undefined8 *)(lVar4 + _DAT_112f47d70 + 0x10));
      FUN_1031985fc(lVar4 + _DAT_113806f10);
      func_0x000107c61470(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar4);
      return;
    }
    pcVar5 = FUN_103197234;
    uVar7 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,uVar6,uVar7);
  return;
}



/* Entry: 103197168; end: 103197233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103197168(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  long lVar10;
  
  lVar10 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    pcVar5 = (code *)0x1031971d4;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c60e78();
    uVar6 = *(undefined8 *)(lVar10 + 0xb0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c61170(*(undefined8 *)(lVar10 + 0xa0));
      uVar6 = *(undefined8 *)(lVar10 + 0xc0);
      lVar4 = *(long *)(lVar10 + 200);
      uVar7 = *(undefined8 *)(lVar10 + 0xb8);
      FUN_103198594(*(undefined8 *)(lVar10 + 0xa8),uVar7,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar4 + 0x30))(uVar7,1,uVar6);
      if ((int)uVar7 == 1) {
        func_0x0001000293e4(*(undefined8 *)(lVar10 + 0xb8));
      }
      else {
        (**(code **)(*(long *)(lVar10 + 200) + 0x20))
                  (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xb8),
                   *(undefined8 *)(lVar10 + 0xc0));
        puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar2 = puVar1;
        func_0x000107c5ed90();
        *(undefined8 *)(lVar10 + 0x98) = 0;
        puVar3 = puVar1;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar1);
        uVar6 = *(undefined8 *)(lVar10 + 0x98);
        if ((int)puVar3 == 0) {
          uVar7 = uVar6;
          func_0x000107c61174(uVar6);
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar7);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
        }
        else {
          func_0x000107c61174(uVar6);
        }
        (**(code **)(*(long *)(lVar10 + 200) + 8))
                  (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xc0));
      }
      lVar4 = *(long *)(lVar10 + 0xb0) + _DAT_113806f10;
      func_0x000107c61618();
      *(long *)(lVar10 + 0xe8) = lVar4;
      if (lVar4 == 0) {
        uVar6 = *(undefined8 *)(lVar10 + 0xd0);
        uVar7 = *(undefined8 *)(lVar10 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
        func_0x000107c615c0(uVar6);
        func_0x000107c615c0(uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar10 + 8))();
          return;
        }
      }
      else {
        uVar6 = 0;
        func_0x000107c5fcec();
        uVar7 = uVar6;
        func_0x000107c5fce8();
        *(undefined8 *)(lVar10 + 0xf0) = uVar7;
        func_0x000100eea164();
        func_0x000107c5fca8(uVar6,uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
          pcVar5 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = *(long *)(lVar10 + 0xe8);
      func_0x000107c61574(*(undefined8 *)(lVar10 + 0xf0));
      lVar8 = _DAT_112f476d0;
      func_0x000107c61428(lVar4 + _DAT_112f476d0,lVar10 + 0x80,0,0);
      lVar4 = lVar4 + lVar8;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c3e3e0();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(*(undefined8 *)(lVar10 + 0xe8));
      lVar4 = *(long *)(lVar10 + 0xd0);
      uVar6 = *(undefined8 *)(lVar10 + 0xb8);
      func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
      func_0x000107c615c0(lVar4);
      func_0x000107c615c0(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar10 + 8))();
        return;
      }
      func_0x000107c60e78();
      func_0x000107c615e8(*(undefined8 *)(lVar4 + 0x70));
      func_0x000107c61170(*(undefined8 *)(lVar4 + 0x78));
      FUN_103198414(lVar4 + _DAT_112f47d68,FUN_103197644);
      func_0x000107c6142c(*(undefined8 *)(lVar4 + _DAT_112f47d70 + 0x10));
      FUN_1031985fc(lVar4 + _DAT_113806f10);
      func_0x000107c61470(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar4);
      return;
    }
    pcVar5 = FUN_103197234;
    uVar7 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,uVar6,uVar7);
  return;
}



/* Entry: 103197234; end: 10319744f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103197234(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar4 = *(long *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_103198594(*(undefined8 *)(unaff_x22 + 0xa8),uVar7,0x112d36580,&UNK_10d9016d0);
  (**(code **)(lVar4 + 0x30))(uVar7,1,uVar8);
  if ((int)uVar7 == 1) {
    func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 200) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xb8),
               *(undefined8 *)(unaff_x22 + 0xc0));
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5ed90();
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    puVar3 = puVar1;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    if ((int)puVar3 == 0) {
      uVar7 = uVar8;
      func_0x000107c61174(uVar8);
      func_0x000107c5ed30(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61654();
      func_0x000107c614ac(uVar8);
    }
    else {
      func_0x000107c61174(uVar8);
    }
    (**(code **)(*(long *)(unaff_x22 + 200) + 8))
              (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xc0));
  }
  lVar4 = *(long *)(unaff_x22 + 0xb0) + _DAT_113806f10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  if (lVar4 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    uVar7 = 0;
    func_0x000107c5fcec();
    uVar8 = uVar7;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar8;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar7,uVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103197450,uVar7,uVar8);
      return;
    }
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  lVar5 = _DAT_112f476d0;
  func_0x000107c61428(lVar4 + _DAT_112f476d0,unaff_x22 + 0x80,0,0);
  lVar4 = lVar4 + lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c3e3e0();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(lVar4);
  func_0x000107c615c0(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  func_0x000107c615e8(*(undefined8 *)(lVar4 + 0x70));
  func_0x000107c61170(*(undefined8 *)(lVar4 + 0x78));
  FUN_103198414(lVar4 + _DAT_112f47d68,FUN_103197644);
  func_0x000107c6142c(*(undefined8 *)(lVar4 + _DAT_112f47d70 + 0x10));
  FUN_1031985fc(lVar4 + _DAT_113806f10);
  func_0x000107c61470(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar4);
  return;
}



/* Entry: 103197450; end: 10319751b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103197450(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  lVar1 = _DAT_112f476d0;
  func_0x000107c61428(lVar2 + _DAT_112f476d0,unaff_x22 + 0x80,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3e3e0();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(lVar2);
  func_0x000107c615c0(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x78));
  FUN_103198414(lVar2 + _DAT_112f47d68,FUN_103197644);
  func_0x000107c6142c(*(undefined8 *)(lVar2 + _DAT_112f47d70 + 0x10));
  FUN_1031985fc(lVar2 + _DAT_113806f10);
  func_0x000107c61470(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar2);
  return;
}



/* Entry: 10319751c; end: 103197583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319751c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_103198414(unaff_x20 + _DAT_112f47d68,FUN_103197644);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112f47d70 + 0x10));
  FUN_1031985fc(unaff_x20 + _DAT_113806f10);
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 103197584; end: 10319759f;  */

void FUN_103197584(void)

{
  if (lRam0000000112f47da0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e74d038);
  return;
}



/* Entry: 1031975a0; end: 103197643;  */

void FUN_1031975a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10db94d98;
  puStack_48 = &UNK_10db94db0;
  puStack_40 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  FUN_103197644();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10db94dc8;
    puStack_28 = &UNK_10db94de0;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 103197644; end: 10319765f;  */

void FUN_103197644(undefined8 param_1)

{
  if (lRam0000000112f47f40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74d12c);
  return;
}



/* Entry: 103197660; end: 1031976e7;  */

undefined8 * FUN_103197660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031976e8; end: 10319777f;  */

int FUN_1031976e8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103197780; end: 103197893;  */

long * FUN_103197780(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    FUN_103197894();
    lVar8 = *(long *)(lVar3 + -8);
    plVar4 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,1,lVar3);
    if ((int)plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
      return param_1;
    }
    lVar7 = *param_2;
    *param_1 = lVar7;
    iVar2 = *(int *)(lVar3 + 0x14);
    lVar6 = 0;
    func_0x000107c5ede0();
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    func_0x000107c61174(lVar7);
    (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    pcVar9 = *(code **)(lVar8 + 0x38);
    func_0x000107c61174();
    (*pcVar9)(param_1,0,1,lVar3);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103197894; end: 1031978a7;  */

void FUN_103197894(undefined8 param_1)

{
  if (lRam0000000112f47fa8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74d15c);
  return;
}



/* Entry: 1031978a8; end: 1031978d7;  */

void FUN_1031978a8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1031978d8; end: 103197963;  */

/* WARNING: Possible PIC construction at 0x000103197928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319792c) */

void FUN_1031978d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  FUN_103197894();
  puVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103197964; end: 103197bcb;  */

undefined8 * FUN_103197964(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  
  lVar2 = 0;
  FUN_103197894();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  uVar5 = *param_2;
  *param_1 = uVar5;
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar4 = 0;
  func_0x000107c5ede0();
  pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61174(uVar5);
  (*pcVar7)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
  pcVar7 = *(code **)(lVar6 + 0x38);
  func_0x000107c61174();
  (*pcVar7)(param_1,0,1,lVar2);
  return param_1;
}



/* Entry: 103197bcc; end: 103197c9f;  */

undefined8 * FUN_103197bcc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_103197894();
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  *param_1 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
  (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
  return param_1;
}



/* Entry: 103197ca0; end: 103197df7;  */

undefined8 * FUN_103197ca0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = 0;
  FUN_103197894();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  puVar3 = param_1;
  (*pcVar8)(param_1,1,lVar2);
  puVar4 = param_2;
  (*pcVar8)(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 != 0) {
      FUN_103198414(param_1,FUN_103197894);
      goto LAB_103197d6c;
    }
    uVar6 = *param_1;
    *param_1 = *param_2;
    func_0x000107c61170(uVar6);
    iVar1 = *(int *)(lVar2 + 0x14);
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 0x28))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar7);
    lVar2 = (long)*(int *)(lVar2 + 0x18);
    uVar6 = *(undefined8 *)((long)param_1 + lVar2);
    *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
    func_0x000107c61170(uVar6);
  }
  else {
    if ((int)puVar4 != 0) {
LAB_103197d6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    *param_1 = *param_2;
    iVar1 = *(int *)(lVar2 + 0x14);
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
  }
  return param_1;
}



/* Entry: 103197df8; end: 103197e0f;  */

void FUN_103197df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103197e10; end: 103197e47;  */

void FUN_103197e10(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103197894();
                    /* WARNING: Could not recover jumptable at 0x000103197e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 103197e48; end: 103197e4b;  */

void FUN_103197e48(void)

{
  return;
}



/* Entry: 103197e4c; end: 103197edf;  */

void FUN_103197e4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103197894();
                    /* WARNING: Could not recover jumptable at 0x000103197e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 103197ee0; end: 103197f8f;  */

long * FUN_103197ee0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61174(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    func_0x000107c61174();
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar5);
  }
  return param_1;
}



/* Entry: 103197f90; end: 103197fe7;  */

/* WARNING: Possible PIC construction at 0x000103197fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103197fb0) */

void FUN_103197f90(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103197fe8; end: 10319806f;  */

undefined8 * FUN_103197fe8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c61174(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  func_0x000107c61174();
  return param_1;
}



/* Entry: 103198070; end: 1031981d7;  */

undefined8 * FUN_103198070(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar2 = (long)*(int *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)((long)param_1 + lVar2);
  *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  return param_1;
}



/* Entry: 1031981d8; end: 1031981ef;  */

void FUN_1031981d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1031981f0; end: 103198267;  */

void FUN_1031981f0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_38 = puVar1;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103198268; end: 103198273;  */

void FUN_103198268(void)

{
  return;
}



/* Entry: 103198274; end: 1031983e7;  */

void FUN_103198274(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_1;
    func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
  return;
}



/* Entry: 1031983e8; end: 103198413;  */

void FUN_1031983e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
  return;
}



/* Entry: 103198414; end: 10319844f;  */

undefined8 FUN_103198414(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103198450; end: 10319845b;  */

undefined * FUN_103198450(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103198594);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e93710;
    func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + -0x19;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar5,uVar7 << 3);
  }
  else {
    if (puVar4 != param_4 || puVar5 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar5,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 10319845c; end: 103198487;  */

void FUN_10319845c(long param_1)

{
  FUN_103198488(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_bridgeObjectRelease_11034f258
               );
  return;
}



/* Entry: 103198488; end: 103198593;  */

undefined *
FUN_103198488(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103198594);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e93710;
    func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 103198594; end: 1031985db;  */

undefined8 FUN_103198594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1031985dc; end: 1031985fb;  */

void FUN_1031985dc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_1;
    func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar3,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar3);
  return;
}



/* Entry: 1031985fc; end: 10319861f;  */

undefined8 FUN_1031985fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103198620; end: 103198637;  */

void FUN_103198620(long param_1,long param_2)

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



/* Entry: 103198638; end: 1031987d7;  */

ulong FUN_103198638(float param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar7 = (double)param_1 / 20.0;
  func_0x000107c60e60();
  dVar8 = (double)unaff_x20[1];
  dVar10 = 0.0;
  if (0.0 < dVar7 / dVar8) {
    dVar10 = dVar7 / dVar8;
  }
  dVar9 = 1.0;
  if (dVar10 <= 1.0) {
    dVar9 = dVar10;
  }
  if (dVar8 < dVar7) {
    dVar8 = dVar7;
  }
  dVar10 = 0.6;
  if (dVar8 <= 0.6) {
    dVar10 = dVar8;
  }
  unaff_x20[1] = (ulong)dVar10;
  uVar6 = *unaff_x20;
  uVar5 = unaff_x20[2];
  uVar4 = uVar5;
  func_0x000107c61558();
  if ((uVar4 & 1) == 0) {
    FUN_10319845c();
  }
  uVar4 = uVar6 & 7;
  if (-1 < (long)-uVar6) {
    uVar4 = -(-uVar6 & 7);
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031987d0);
    (*pcVar2)();
  }
  if (*(ulong *)(uVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031987d4);
    (*pcVar2)();
  }
  lVar1 = uVar5 + 0x20;
  *(double *)(lVar1 + uVar4 * 8) = dVar9;
  unaff_x20[2] = uVar5;
  if (!SCARRY8(uVar6,1)) {
    *unaff_x20 = uVar6 + 1;
    if ((uVar6 + 1 & 7) == 0) {
      uVar6 = 0;
      FUN_103198450(0,0xe,0,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar4 = 0;
      do {
        uVar3 = uVar4 >> 1;
        if (*(ulong *)(uVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031987b8);
          (*pcVar2)();
        }
        uVar4 = uVar4 + 1;
        if (*(ulong *)(uVar5 + 0x10) <= uVar4 >> 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031987bc);
          (*pcVar2)();
        }
        dVar8 = *(double *)(lVar1 + uVar3 * 8);
        dVar10 = *(double *)(lVar1 + (uVar4 >> 1) * 8);
        uVar3 = *(ulong *)(uVar6 + 0x10);
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_103198450(uVar6,uVar3 + 1,1);
        }
        *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
        *(double *)(uVar6 + uVar3 * 8 + 0x20) = (dVar8 + dVar10) * 0.5;
      } while (uVar4 != 0xe);
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031987d8);
  (*pcVar2)();
}



/* Entry: 1031987d8; end: 1031987df;  */

void FUN_1031987d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1031987e0; end: 103198867;  */

undefined8 * FUN_1031987e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103198868; end: 103198907;  */

int FUN_103198868(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103198908; end: 103198917; -[SCVoiceNotesPreviewController recordType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103198908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f48018);
}



/* Entry: 103198918; end: 10319895b; -[SCVoiceNotesPreviewController playCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103198918(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f48020;
  func_0x000107c61428(param_1 + _DAT_112f48020,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10319895c; end: 1031989ab; -[SCVoiceNotesPreviewController setPlayCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319895c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48020;
  func_0x000107c61428(param_1 + _DAT_112f48020,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1031989ac; end: 103198c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031989ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined8 uStack_78;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f48020) = 0;
  lVar1 = _DAT_112f48030;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f48038;
  uStack_78 = 0;
  func_0x0001000285a8(0x112f48028,&UNK_10db94eb0);
  func_0x000107c613fc();
  puVar3 = &uStack_78;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f48040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48048) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f48008);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f48010) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f48018) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f48050) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f48058) = param_5;
  func_0x000107c61154(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103198c2c; end: 103198cd7; -[SCVoiceNotesPreviewController initWithData:duration:audioNotePlayer:playbackStateObservable:recordType:] */

void FUN_103198c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  func_0x000103198aec(param_1,param_4,param_3,param_5,param_6,param_7);
  return;
}



/* Entry: 103198cd8; end: 103198cf3;  */

void FUN_103198cd8(undefined4 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103198cf4,0,0);
  return;
}



/* Entry: 103198cf4; end: 103198db3;  */

void FUN_103198cf4(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (*(int *)(unaff_x22 + 0x38) != 2) {
    if (*(int *)(unaff_x22 + 0x38) == 1) {
      FUN_103198e14();
    }
                    /* WARNING: Could not recover jumptable at 0x000103198d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103198d6c;
  plVar1[0x15] = *(long *)(unaff_x22 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103198ef8,0,0);
  return;
}



/* Entry: 103198db4; end: 103198e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103198db4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  FUN_1031991d8();
  lVar1 = _DAT_112f48020;
  func_0x000107c61428(lVar4 + _DAT_112f48020,unaff_x22 + 0x10,1,0);
  lVar3 = *(long *)(lVar4 + lVar1);
  if (!SCARRY8(lVar3,1)) {
    *(long *)(lVar4 + lVar1) = lVar3 + 1;
                    /* WARNING: Could not recover jumptable at 0x000103198e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103198e14);
  (*pcVar2)();
}



/* Entry: 103198e14; end: 103198edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103198e14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f48038);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar3);
  if (lStack_38 != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lStack_38;
      func_0x000107c52060();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c4e46c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lStack_38);
  }
  return;
}



/* Entry: 103198ee0; end: 103198ef7;  */

void FUN_103198ee0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103198ef8,0,0);
  return;
}



/* Entry: 103198ef8; end: 10319903b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103198ef8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = _DAT_112f48038;
  *(long *)(unaff_x22 + 0xb0) = _DAT_112f48038;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + lVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(unaff_x22 + 0x68);
  func_0x000107c61574(uVar4);
  if (*(long *)(unaff_x22 + 0x68) == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb8) = lVar2;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112f48008);
      uVar4 = *puVar1;
      func_0x000107c5ee20(uVar4,puVar1[1]);
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10319903c;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar3,0);
      uVar4 = 0x112f48090;
      func_0x0001000285a8(0x112f48090,&UNK_10db94f98);
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
      *(long *)(unaff_x22 + 0x88) = lVar3;
      *(undefined **)(unaff_x22 + 0x68) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0x78) = 0x10319a01c;
      *(undefined **)(unaff_x22 + 0x80) = &UNK_110618e90;
      func_0x000107c40ad0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x000103198f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10319903c; end: 10319907b;  */

void FUN_10319903c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10319907c,0,0);
  return;
}



/* Entry: 10319907c; end: 1031991d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319907c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar1 + lVar2);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  func_0x000107c6157c(uVar7);
  func_0x000100075034(FUN_10319aea8,(undefined8 *)(unaff_x22 + 0x50),PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  uVar7 = uVar6;
  func_0x000107c4e904(uVar6);
  func_0x000107c61180();
  puVar3 = &UNK_110618a98;
  func_0x000107c613fc(&UNK_110618a98,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,lVar1);
  *(code **)(unaff_x22 + 0x88) = FUN_10319aeec;
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  puVar4 = (undefined8 *)(unaff_x22 + 0x68);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x10319b000;
  *(undefined **)(unaff_x22 + 0x80) = &UNK_110618eb8;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  uVar5 = uVar7;
  func_0x000107c5c320(uVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001031991d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1031991d8; end: 1031992a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031991d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f48038);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar3);
  if (lStack_38 != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lStack_38;
      func_0x000107c52060();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c5bb64(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lStack_38);
  }
  return;
}



/* Entry: 1031992a4; end: 1031993df; -[SCVoiceNotesPreviewController onTapPlayWithState:completionHandler:] */

void FUN_1031992a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110618b58;
  func_0x000107c613fc(&UNK_110618b58,0x28,7);
  *(undefined4 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110618b80;
  func_0x000107c613fc(&UNK_110618b80,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db94f80;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110618ba8;
  func_0x000107c613fc(&UNK_110618ba8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db94f88;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10db94f90,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1031993e0; end: 1031994ff;  */

void FUN_1031993e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined4 *)(unaff_x22 + 0x40) = param_1;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103199424,0,0);
  return;
}



/* Entry: 103199500; end: 103199573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199500(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  FUN_1031991d8();
  lVar1 = _DAT_112f48020;
  func_0x000107c61428(lVar5 + _DAT_112f48020,unaff_x22 + 0x10,1,0);
  lVar4 = *(long *)(lVar5 + lVar1);
  if (!SCARRY8(lVar4,1)) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    *(long *)(lVar5 + lVar1) = lVar4 + 1;
    func_0x000107c61170(uVar3);
    (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010319956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103199574);
  (*pcVar2)();
}



/* Entry: 103199574; end: 103199623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199574(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1031991d8();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f48020;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f48020,auStack_68,1,0);
    lVar3 = *(long *)(param_1 + lVar2);
    if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103199624);
      (*pcVar1)();
    }
    *(long *)(param_1 + lVar2) = lVar3 + 1;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103199624; end: 10319962b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199624(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1031991d8();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f48020;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112f48020,auStack_68,1,0);
    lVar4 = *(long *)(lVar3 + lVar1);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103199624);
      (*pcVar2)();
    }
    *(long *)(lVar3 + lVar1) = lVar4 + 1;
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10319962c; end: 1031997a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319962c(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48038);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(&puStack_70);
  func_0x000107c61574(uVar5);
  if (puStack_70 == (undefined *)0x0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48008);
      func_0x000107c5ee20(uVar5,((undefined8 *)(unaff_x20 + _DAT_112f48008))[1]);
      puVar2 = &UNK_110618a98;
      func_0x000107c613fc(&UNK_110618a98,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_110618bd0;
      func_0x000107c613fc(&UNK_110618bd0,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(code **)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      pcStack_50 = FUN_10319ab4c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      uStack_60 = 0x10319affc;
      puStack_58 = &UNK_110618be8;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      puVar2 = puStack_48;
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar2);
      func_0x000107c40ad0(lVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar5);
    }
  }
  else {
    func_0x000107c61170();
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  return;
}



/* Entry: 1031997a4; end: 103199853; -[SCVoiceNotesPreviewController onTapPlaySyncWithState:] */

void FUN_1031997a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 2) {
    puVar1 = &UNK_110618a98;
    func_0x000107c613fc(&UNK_110618a98,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar1);
    FUN_10319962c(0x10319b020,puVar1);
    func_0x000107c61578(puVar1,2);
  }
  else {
    if (param_3 != 1) {
      return;
    }
    func_0x000107c61174(param_1);
    FUN_103198e14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103199854; end: 10319986f;  */

void FUN_103199854(undefined1 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103199870,0,0);
  return;
}



/* Entry: 103199870; end: 1031999b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199870(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48038);
      func_0x000107c6157c(uVar6);
      func_0x0001000c74f0(unaff_x22 + 0x10);
      func_0x000107c61574(uVar6);
      lVar7 = *(long *)(unaff_x22 + 0x10);
      if (lVar7 != 0) {
        lVar2 = lVar7;
        func_0x000107c52060();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
        }
        lVar8 = *(long *)(unaff_x22 + 0x18);
        lVar3 = lVar1;
        func_0x000107c4a1d0();
        func_0x000107c61170(lVar2);
        *(char *)(lVar8 + _DAT_112f48040) = (char)lVar3;
        if ((int)lVar3 != 0) {
          FUN_103198e14();
        }
        func_0x000107c61170(lVar7);
      }
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x000103199978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1031999b8;
  lVar1 = *(long *)(unaff_x22 + 0x18);
  plVar4[3] = lVar1;
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = 0x103199a3c;
  plVar5[0x15] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103198ef8,0,0);
  return;
}



/* Entry: 1031999b8; end: 103199a83;  */

void FUN_1031999b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001031999f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103199a84; end: 103199b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199a84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48038);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(unaff_x22 + 0x10);
  func_0x000107c61574(uVar4);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48048);
      lVar2 = lVar3;
      func_0x000107c52060();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c51be4(uVar4,lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar1);
    }
    if (*(char *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48040) == '\x01') {
      *(undefined1 *)(*(long *)(unaff_x22 + 0x18) + _DAT_112f48040) = 0;
      FUN_1031991d8();
    }
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000103199b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103199b98; end: 103199cd3; -[SCVoiceNotesPreviewController onScrub:completionHandler:] */

void FUN_103199b98(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110618ae0;
  func_0x000107c613fc(&UNK_110618ae0,0x28,7);
  puVar1[0x10] = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110618b08;
  func_0x000107c613fc(&UNK_110618b08,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db94f48;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110618b30;
  func_0x000107c613fc(&UNK_110618b30,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db94f58;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10db94f68,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 103199cd4; end: 103199d3f;  */

void FUN_103199cd4(undefined1 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x30;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103199d40;
  plVar1[3] = param_3;
  *(undefined1 *)(plVar1 + 5) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103199870,0,0);
  return;
}



/* Entry: 103199d40; end: 103199d93;  */

void FUN_103199d40(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000103199d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}


