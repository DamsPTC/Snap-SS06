/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10272d6e0; end: 10272d737;  */

void FUN_10272d6e0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10272d738;
  }
  else {
    pcVar1 = FUN_10272d7ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10272d738; end: 10272d7ab;  */

void FUN_10272d738(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010272d7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 10272d7ac; end: 10272d83f;  */

void FUN_10272d7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar4);
  func_0x000107c614ac(uVar3);
  (**(code **)(lVar5 + 8))(uVar1,uVar2);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010272d83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10272d840; end: 10272d85b;  */

void FUN_10272d840(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d85c,0,0);
  return;
}



/* Entry: 10272d85c; end: 10272d9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272d85c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x68) + _DAT_112ebaee0) + _DAT_113072c10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(*(long *)(unaff_x22 + 0x68) + _DAT_112ebaeb0);
    func_0x000107c3e550();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c3e544();
      func_0x000107c61180();
      func_0x000107c615e8(uVar3);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        *(ulong *)(unaff_x22 + 0x78) = param_2;
        uVar3 = uVar3 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar3 = param_2 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10272d9c4;
          func_0x000107c61448(unaff_x22 + 0x10,0);
          FUN_10272e4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        func_0x000107c6142c(param_2);
      }
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10272d9c4; end: 10272da3f;  */

void FUN_10272d9c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10272da04,0,0);
  return;
}



/* Entry: 10272da40; end: 10272dc23;  */

/* WARNING: Possible PIC construction at 0x00010272da88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272db34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272db54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272db70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272dbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272dbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272dbe8) */
/* WARNING: Removing unreachable block (ram,0x00010272db74) */
/* WARNING: Removing unreachable block (ram,0x00010272db58) */
/* WARNING: Removing unreachable block (ram,0x00010272db38) */
/* WARNING: Removing unreachable block (ram,0x00010272da8c) */
/* WARNING: Removing unreachable block (ram,0x00010272dbf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272da40(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ebaec8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
    func_0x000107c4831c();
    func_0x000107c61168(PTR_PTR_1126b1bb0);
    func_0x000107c3e6c4();
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126b20d0);
    func_0x000107c48224();
    func_0x000107c610f8(PTR_PTR_1126b20d8);
    func_0x000107c453e4();
    func_0x000107c5e47c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10272dc24; end: 10272dcbf;  */

void FUN_10272dc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272dcc0,uVar2,uVar3);
  return;
}



/* Entry: 10272dcc0; end: 10272de5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272dcc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  double dVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x10,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ebaee8;
  if (lVar10 != 0) {
    lVar6 = *(long *)(lVar10 + _DAT_112ebaee8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c61170();
      uVar7 = *(undefined8 *)(lVar10 + lVar4);
      func_0x000107c61174(uVar7);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(uVar7);
    }
    lVar6 = *(long *)(unaff_x22 + 0x50);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c5d388();
    }
    dVar11 = *(double *)(unaff_x22 + 0x58);
    if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10272de58);
      (*pcVar5)();
    }
    if (dVar11 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10272de5c);
      (*pcVar5)();
    }
    if (1.8446744073709552e+19 <= dVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10272de60);
      (*pcVar5)();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    FUN_1027327bc(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    lVar8 = lVar10;
    func_0x000107c61174(lVar10);
    func_0x000107c615f0(uVar1);
    lVar9 = lVar8;
    FUN_102732530(lVar8,uVar1,uVar3,uVar7,uVar2,lVar6,(long)dVar11);
    func_0x000107c42c1c(*(undefined8 *)(lVar10 + lVar4));
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272de60; end: 10272defb;  */

void FUN_10272de60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272defc,uVar2,uVar3);
  return;
}



/* Entry: 10272defc; end: 10272e0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272defc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  double dVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ebaf10;
  if (lVar8 != 0) {
    lVar3 = *(long *)(lVar8 + _DAT_112ebaf10);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar8 + lVar1);
      func_0x000107c61174(uVar4);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(uVar4);
    }
    lVar3 = *(long *)(unaff_x22 + 0x30);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c5d388();
    }
    dVar10 = *(double *)(unaff_x22 + 0x38);
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10272e0dc);
      (*pcVar2)();
    }
    if (dVar10 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10272e0e0);
      (*pcVar2)();
    }
    if (1.8446744073709552e+19 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10272e0e4);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = 0;
    func_0x000103ed7eb8(0);
    func_0x000107c610f8();
    func_0x000103ed7cec(lVar3,(long)dVar10,uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61434(uVar4);
    func_0x000107c61174(lVar3);
    func_0x000107c46ecc(puVar6);
    func_0x0001005138f4(0);
    func_0x000107c610f8();
    lVar7 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c61174(uVar9);
    func_0x000103ed7578();
    func_0x000107c42c1c(*(undefined8 *)(lVar8 + lVar1));
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272e0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272e0e4; end: 10272e1b3;  */

void FUN_10272e0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  uVar6 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272e1b4,uVar5,uVar6);
  return;
}



/* Entry: 10272e1b4; end: 10272e36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272e1b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x22;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112ebaef8;
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + _DAT_112ebaef8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c61170();
      uVar7 = *(undefined8 *)(lVar8 + lVar5);
      func_0x000107c61174(uVar7);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(uVar7);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar9 = *(code **)(lVar10 + 0x10);
    (*pcVar9)(uVar2,uVar1,lVar6);
    pcVar11 = *(code **)(lVar10 + 0x38);
    (*pcVar11)(uVar2,0,1,lVar6);
    (*pcVar9)(uVar7,uVar4,lVar6);
    (*pcVar11)(uVar7,0,1,lVar6);
    func_0x0001005137e0(0);
    func_0x000107c610f8();
    lVar6 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(uVar12);
    FUN_102e54d28();
    func_0x000107c42c1c(*(undefined8 *)(lVar8 + lVar5));
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar6);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010272e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272e36c; end: 10272e3cb; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter init] */

void FUN_10272e36c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.PlaceProfileTrayRouter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10272e398);
  (*pcVar1)();
}



/* Entry: 10272e3cc; end: 10272e4c3; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10272e3cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaee0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaeb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaed0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebaec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaf08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaef8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaeb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaf18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaf10));
  param_1 = param_1 + _DAT_112ebaf00;
  (*(code *)&DAT_1038c1d80)();
  return param_1;
}



/* Entry: 10272e4c4; end: 10272e667;  */

void FUN_10272e4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_3,param_4);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
  }
  func_0x0001000295c4(0);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_1105415c0;
  func_0x000107c613fc(&UNK_1105415c0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_70 = FUN_10272ed70;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10134a1dc;
  puStack_78 = &UNK_1105415d8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_68);
  func_0x000107c42ff4(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10272e668; end: 10272e76f; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter mapPlaceSuggestAttributeTrayScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010272e6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272e728) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010272e708) */
/* WARNING: Removing unreachable block (ram,0x00010272e750) */
/* WARNING: Removing unreachable block (ram,0x00010272e70c) */
/* WARNING: Removing unreachable block (ram,0x00010272e6f8) */
/* WARNING: Removing unreachable block (ram,0x00010272e758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272e668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebaee8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    FUN_1027327bc(0);
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10272e770; end: 10272e797; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_10272e770(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10272d084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10272e798; end: 10272e81b; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010272e7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272e7d8) */
/* WARNING: Removing unreachable block (ram,0x00010272e7f4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272e798(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10272e81c; end: 10272e837; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter mapPlaceShareEnded] */

/* WARNING: Possible PIC construction at 0x00010272e89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010272e8bc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272e81c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10272e838; end: 10272e857;  */

void FUN_10272e838(void)

{
  func_0x000107c61168(&PTR_PTR_11285dd50);
  return;
}



/* Entry: 10272e858; end: 10272e863; -[_TtC26VenueProfileImplementation22PlaceProfileTrayRouter venueEditorScreenDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010272e89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010272e8bc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272e858(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10272e864; end: 10272e8e3;  */

/* WARNING: Possible PIC construction at 0x00010272e89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272e8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010272e8bc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10272e864(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10272e8e4; end: 10272e953;  */

void FUN_10272e8e4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272edb4;
  plVar5[2] = lVar4;
  plVar5[3] = unaff_x20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar4;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272cd2c,lVar2,uVar3);
  return;
}



/* Entry: 10272e954; end: 10272e9c3;  */

void FUN_10272e954(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10272edb0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10272e9c4; end: 10272eb3b;  */

void FUN_10272e9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long alStack_60 [2];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1105414f8;
  func_0x000107c613fc(&UNK_1105414f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_3);
  (**(code **)(lVar10 + 0x10))(&stack0xffffffffffffffb0 + lVar1,param_1,lVar2);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110541520;
  func_0x000107c613fc(&UNK_110541520,uVar9 + 8,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar7,&stack0xffffffffffffffb0 + lVar1,lVar2);
  *(undefined8 *)(puVar4 + uVar9) = param_2;
  puVar3 = &UNK_110541548;
  func_0x000107c613fc(&UNK_110541548,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dad3768;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  func_0x000107c615f0(param_2);
  *(undefined **)((long)alStack_60 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar5 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3770,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 10272eb3c; end: 10272eb7b;  */

void FUN_10272eb3c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10272eb7c; end: 10272eb93;  */

long FUN_10272eb7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10272eb94; end: 10272ec1b;  */

void FUN_10272eb94(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10272ec1c;
  plVar5[0xc] = unaff_x20 + uVar6;
  plVar5[0xd] = lVar4;
  plVar5[0xb] = lVar7;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar5[0xe] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar5[0x10] = lVar4;
  uVar6 = lVar4 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar6;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar6;
  lVar4 = 0;
  func_0x000104638d5c();
  plVar5[0x13] = lVar4;
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x14] = uVar2;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x15] = uVar6;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar5[0x16] = lVar4;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c464,lVar7,uVar3);
  return;
}



/* Entry: 10272ec1c; end: 10272ec57;  */

void FUN_10272ec1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010272ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10272ec58; end: 10272ecc7;  */

void FUN_10272ec58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10272edb8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10272ecc8; end: 10272ed07;  */

undefined8 FUN_10272ecc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10272ed08; end: 10272ed53;  */

void FUN_10272ed08(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c4b788(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10272ed54; end: 10272ed6f;  */

void FUN_10272ed54(long param_1,long param_2)

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



/* Entry: 10272ed70; end: 10272ed9f;  */

void FUN_10272ed70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10272eda0; end: 10272edbb;  */

void FUN_10272eda0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10272edbc; end: 10272ee3f;  */

long FUN_10272edbc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001004575f0(*(undefined8 *)(unaff_x20 + 0x20));
    lVar2 = lVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10272ee40; end: 10272ef93;  */

void FUN_10272ee40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebaf48,&UNK_10dad37b0);
  puVar1 = &UNK_110541638;
  func_0x000107c613fc(&UNK_110541638,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10272ef94,puVar1);
  return;
}



/* Entry: 10272ef94; end: 10272ef9f;  */

void FUN_10272ef94(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(auStack_80);
  FUN_10272f4f8();
  func_0x000107c613fc();
  uVar2 = 0x112ebab38;
  func_0x0001000285a8(0x112ebab38,&UNK_10dad3150);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10272f468(auStack_80,lVar1 + 0x30);
  *param_1 = lVar1;
  return;
}



/* Entry: 10272efa0; end: 10272f027;  */

long FUN_10272efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0x112ebab38;
  func_0x0001000285a8(0x112ebab38,&UNK_10dad3150);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_10272f468(param_3,unaff_x20 + 0x30);
  return unaff_x20;
}



/* Entry: 10272f028; end: 10272f097;  */

void FUN_10272f028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272f098,uVar1,uVar2);
  return;
}



/* Entry: 10272f098; end: 10272f1df;  */

void FUN_10272f098(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x90,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x22 + 0xc0);
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x10);
    func_0x000107c4e808();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xe0) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xb8));
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10272f1e0;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar4,1);
      uVar3 = 0x112d61d38;
      func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_101b778cc;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110541670;
      *(long *)(unaff_x22 + 0x70) = lVar4;
      func_0x000107c50060(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  }
  func_0x000107c61574(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010272f1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272f1e0; end: 10272f233;  */

void FUN_10272f1e0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10272f234;
  }
  else {
    pcVar1 = FUN_10272f334;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Entry: 10272f234; end: 10272f333;  */

void FUN_10272f234(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar4);
  func_0x000107c5fadc(uVar5,uVar3);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = uVar5;
  func_0x0001002a64a8(puVar6);
  func_0x000107c61170(uVar5);
  FUN_10272ac40(lVar7 + 0x30,puVar6);
  lVar7 = unaff_x22 + 0x70;
  func_0x000107c61618();
  lVar8 = *(long *)(unaff_x22 + 0x78);
  FUN_102686c5c(puVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  if (lVar7 == 0) {
    func_0x000107c615e8(uVar5);
    func_0x000107c61574(uVar3);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar2 = lVar7;
    func_0x000107c614f0(lVar7);
    (**(code **)(lVar8 + 0x30))(uVar4,uVar1,lVar2,lVar8);
    func_0x000107c615e8(uVar5);
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272f334; end: 10272f3ab;  */

void FUN_10272f334(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  FUN_10272f3ac();
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010272f3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272f3ac; end: 10272f467;  */

/* WARNING: Possible PIC construction at 0x00010272f3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272f428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272f3e8) */
/* WARNING: Removing unreachable block (ram,0x00010272f454) */
/* WARNING: Removing unreachable block (ram,0x00010272f3ec) */
/* WARNING: Removing unreachable block (ram,0x00010272f464) */
/* WARNING: Removing unreachable block (ram,0x00010272f3fc) */
/* WARNING: Removing unreachable block (ram,0x00010272f42c) */

void FUN_10272f3ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4d80c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10272f468; end: 10272f4a3;  */

undefined8 FUN_10272f468(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038c1ea4)(param_2,param_1);
  return param_2;
}



/* Entry: 10272f4a4; end: 10272f4e7;  */

void FUN_10272f4a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_102686c5c(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10272f4e8; end: 10272f4f7;  */

undefined1  [16] FUN_10272f4e8(void)

{
  return ZEXT816(0x110541660);
}



/* Entry: 10272f4f8; end: 10272f517;  */

void FUN_10272f4f8(void)

{
  func_0x000107c61168(&PTR_PTR_112ebaf90);
  return;
}



/* Entry: 10272f518; end: 10272f52f;  */

long FUN_10272f518(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10272f530; end: 10272f8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272f530(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fa9a98);
  puVar9 = auStack_88;
  func_0x000107c61428(puVar1,puVar9,0,0);
  uVar8 = *puVar1;
  puVar11 = (undefined1 *)puVar1[1];
  func_0x000107c61434(puVar11);
  uVar13 = param_1;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  if (uVar8 == uVar7 && puVar11 == puVar9) {
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c();
  }
  else {
    func_0x000107c605b8(uVar8,puVar11,uVar7,puVar9,0);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c();
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  FUN_10272f8a8();
  lVar10 = _DAT_112fa9ab0;
  lVar12 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar12 + _DAT_112fa9ab0,auStack_a0,1,0);
  uVar14 = *(undefined8 *)(lVar12 + lVar10);
  *(undefined1 **)(lVar12 + lVar10) = puVar9;
  func_0x000107c61174(lVar12);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar14);
  uVar13 = *(ulong *)(unaff_x20 + 0x10);
  puVar2 = (undefined8 *)(uVar13 + _DAT_112fa9aa0);
  func_0x000107c61428(puVar2,auStack_b8,0,0);
  uVar14 = *puVar2;
  uVar18 = puVar2[1];
  func_0x000107c61174();
  uVar8 = uVar13;
  func_0x000103b3e210(uVar14,uVar18);
  if ((uVar8 & 1) == 0) {
    pdVar3 = (double *)(uVar13 + _DAT_112fa9aa8);
    func_0x000107c61428(pdVar3,auStack_d0,0,0);
    dVar15 = *pdVar3;
    dVar17 = pdVar3[1];
    dVar16 = pdVar3[2];
    dVar19 = pdVar3[3];
    bVar5 = false;
    bVar6 = true;
    if (dVar15 <= dVar16) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(dVar17) && !NAN(dVar19)) {
        bVar5 = dVar17 == dVar19;
        bVar6 = dVar19 <= dVar17;
      }
    }
    if (!bVar6 || bVar5) {
      dVar4 = dVar15 - dVar16;
      func_0x000107c61170(uVar13);
      dVar16 = 2.220446049250313e-16;
      dVar15 = ABS(dVar17 - dVar19);
      bVar5 = false;
      bVar6 = true;
      if (ABS(dVar4) <= 2.220446049250313e-16) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar15)) {
          bVar5 = dVar15 == 2.220446049250313e-16;
          bVar6 = 2.220446049250313e-16 <= dVar15;
        }
      }
      if (bVar6 && !bVar5) goto LAB_10272f87c;
    }
    else {
      func_0x000107c61170(uVar13);
    }
    puVar11 = puVar9;
    func_0x000107c4077c();
    func_0x000103b3e210();
    dVar17 = dVar15;
    if (((ulong)puVar11 & 1) != 0) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61174();
      func_0x000107c4077c(puVar9);
      pdVar3 = (double *)(lVar10 + _DAT_112fa9aa0);
      dVar17 = dVar15;
      func_0x000107c61428(pdVar3,auStack_100,1,0);
      *pdVar3 = dVar15;
      pdVar3[1] = dVar16;
      func_0x000107c61170(lVar10);
    }
    func_0x000107c3ec58();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar11 = *(undefined1 **)(unaff_x20 + 0x10);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      uVar8 = param_1;
      func_0x000107c5c488();
      func_0x000107c61180();
      func_0x000107c61174();
      func_0x000107c4aad8();
      dVar16 = dVar17;
      func_0x000107c4b6f0(uVar8);
      func_0x000107c60a04();
      dVar15 = dVar17;
      func_0x000107c61170(uVar8);
      uVar13 = param_1;
      func_0x000107c4d540(param_1);
      func_0x000107c61180();
      func_0x000107c61174();
      func_0x000107c4aad8();
      dVar19 = dVar15;
      func_0x000107c4b6f0(uVar13);
      func_0x000107c60a04();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar13);
      pdVar3 = (double *)(puVar11 + _DAT_112fa9aa8);
      func_0x000107c61428(pdVar3,auStack_e8,1,0);
      *pdVar3 = dVar17;
      pdVar3[1] = dVar16;
      pdVar3[2] = dVar15;
      pdVar3[3] = dVar19;
      puVar9 = puVar11;
    }
  }
  else {
    func_0x000107c61170(uVar13);
  }
LAB_10272f87c:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 10272f8a8; end: 10272fc2f;  */

undefined * FUN_10272f8a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined *puStack_80;
  
  func_0x000107c4aad8();
  uVar15 = param_1;
  func_0x000107c4b6f0();
  puVar1 = unaff_x20;
  func_0x000107c4e7c8();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c61170(puVar1);
  }
  puVar2 = unaff_x20;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  lVar6 = param_3;
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    lVar6 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar9 = unaff_x20;
  func_0x000107c4a91c();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
    lVar11 = 0;
    lVar7 = lVar6;
  }
  else {
    puStack_90 = puVar9;
    func_0x000107c5faec();
    lVar7 = lVar6;
    func_0x000107c61170(puVar9);
    lVar11 = lVar6;
  }
  puVar9 = unaff_x20;
  func_0x000107c49d60();
  if ((int)puVar9 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    func_0x000107c49d60();
    puStack_80 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
  }
  puVar9 = unaff_x20;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  puVar3 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  puVar9 = unaff_x20;
  func_0x000107c4e7dc();
  func_0x000107c61180();
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x00010272fc74(0);
    puVar12 = puVar9;
    func_0x000107c5fc54(puVar9,uVar4);
    func_0x000107c61170(puVar9);
  }
  uVar10 = (ulong)(puVar1 != (undefined *)0x0);
  uVar4 = 0;
  func_0x00010272fc74(0);
  puVar1 = puVar12;
  func_0x000107c5fc48(puVar12,uVar4);
  func_0x000107c6142c(puVar12);
  puVar9 = puVar1;
  func_0x0001067684f4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar9;
  func_0x000107c5faec(puVar9);
  uVar8 = uVar10;
  func_0x000107c61170(puVar9);
  puVar9 = unaff_x20;
  func_0x000107c5c078();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    uVar14 = 0;
    uVar13 = uVar8;
  }
  else {
    puVar12 = puVar9;
    func_0x000107c5faec();
    uVar13 = uVar8;
    func_0x000107c61170(puVar9);
    uVar14 = uVar8;
  }
  func_0x000107c4e7c8();
  func_0x000107c61180();
  if (unaff_x20 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    uVar13 = 0;
  }
  else {
    puVar9 = unaff_x20;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c4a284();
  if (lVar11 == 0) {
    puStack_90 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puStack_90,lVar11);
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c5fadc(puVar3,lVar7);
  func_0x000107c6142c(lVar7);
  func_0x000107c5fadc(puVar1,uVar10);
  func_0x000107c6142c(uVar10);
  if (uVar14 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar12,uVar14);
    func_0x000107c6142c(uVar14);
  }
  if (uVar13 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar9,uVar13);
    func_0x000107c6142c(uVar13);
  }
  puVar5 = PTR_PTR_1126b1ff0;
  func_0x000107c610f8(PTR_PTR_1126b1ff0);
  func_0x000107c46d58(param_1,uVar15);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  return puVar5;
}



/* Entry: 10272fc30; end: 10272fcb7;  */

void FUN_10272fc30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10272fcb8; end: 10272fcc3;  */

void FUN_10272fcb8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fcc4,param_1);
  return;
}



/* Entry: 10272fcc4; end: 10272fceb;  */

void FUN_10272fcc4(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fcec; end: 10272fcf7;  */

void FUN_10272fcec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fcf8,param_1);
  return;
}



/* Entry: 10272fcf8; end: 10272fd1f;  */

void FUN_10272fcf8(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fd20; end: 10272fd2b;  */

void FUN_10272fd20(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fd2c,param_1);
  return;
}



/* Entry: 10272fd2c; end: 10272fd53;  */

void FUN_10272fd2c(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fd54; end: 10272fd5f;  */

void FUN_10272fd54(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fd60,param_1);
  return;
}



/* Entry: 10272fd60; end: 10272fd87;  */

void FUN_10272fd60(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fd88; end: 10272fd93;  */

void FUN_10272fd88(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fd94,param_1);
  return;
}



/* Entry: 10272fd94; end: 10272fdbb;  */

void FUN_10272fd94(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fdbc; end: 10272fdc7;  */

void FUN_10272fdbc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fdc8,param_1);
  return;
}



/* Entry: 10272fdc8; end: 10272fdef;  */

void FUN_10272fdc8(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272fdf0; end: 10272fdfb;  */

void FUN_10272fdf0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10272fef0,param_1);
  return;
}



/* Entry: 10272fdfc; end: 10272fe53;  */

void FUN_10272fdfc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10272fe54; end: 10272feef;  */

void FUN_10272fe54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c610f8();
  uVar1 = uStack_48;
  func_0x000107c6157c(uStack_48);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 10272fef0; end: 10272ff17;  */

void FUN_10272fef0(void)

{
  FUN_10272fe54();
  return;
}



/* Entry: 10272ff18; end: 10272ff87;  */

undefined1  [16] FUN_10272ff18(void)

{
  return ZEXT816(0x1105416a8);
}



/* Entry: 10272ff88; end: 102730307;  */

void FUN_10272ff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebb0c0,&UNK_10dad3a10);
  puVar1 = &UNK_110541788;
  func_0x000107c613fc(&UNK_110541788,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_102730308,puVar1);
  return;
}



/* Entry: 102730308; end: 102730343;  */

void FUN_102730308(void)

{
  long unaff_x20;
  
  func_0x0001027300d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102730344; end: 1027304ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102730344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebb0e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb0f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb100) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb108) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb110) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb118) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb120) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb128) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb130) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb138) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb140) = param_11;
  FUN_10272ac40(param_12,unaff_x20 + _DAT_112ebb148);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb150) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb158) = param_14;
  puVar1 = auStack_70;
  func_0x000107c61154(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  FUN_102686c5c(param_12);
  return puVar1;
}



/* Entry: 102730500; end: 10273057b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102730500(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ebb0c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebb0c8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebb148);
    func_0x00010272fc54();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(lVar2);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 10273057c; end: 10273062f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10273057c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ebb0d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebb0d0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_102730500();
    lVar3 = 0;
    func_0x00010272b600();
    func_0x000107c613fc();
    uVar4 = 0x112ebb188;
    func_0x0001000285a8(0x112ebb188,&UNK_10dad3a78);
    func_0x000107c613fc();
    func_0x0001000c2754();
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(long *)(lVar3 + 0x18) = lVar2;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 102730630; end: 1027306f3;  */

/* WARNING: Possible PIC construction at 0x000102730670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027306a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027306b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027306a8) */
/* WARNING: Removing unreachable block (ram,0x000102730674) */
/* WARNING: Removing unreachable block (ram,0x0001027306bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102730630(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c54394();
  FUN_1027306f4();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    func_0x000107c5a568();
  }
  else {
    puVar2 = *(undefined **)(unaff_x20 + _DAT_112ebb0d8);
    *(long *)(unaff_x20 + _DAT_112ebb0d8) = lVar1;
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1027306f4; end: 1027308f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027306f4(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68);
  lVar3 = alStack_68[0];
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(alStack_68[0]);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8();
    if (lVar3 != 0) {
      FUN_102730fc4();
      if (lVar4 != 0) {
        lVar9 = *(long *)(unaff_x20 + _DAT_112ebb148);
        puVar1 = (ulong *)(lVar9 + _DAT_112fa9a98);
        func_0x000107c61428(puVar1,alStack_68,0,0);
        uVar7 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61428(lVar9 + _DAT_112fa9ab8,auStack_80,0,0);
        uVar5 = uVar2;
        func_0x000107c61434(uVar2);
        FUN_102731d08();
        puVar6 = PTR_PTR_1126aae08;
        func_0x000107c610f8(PTR_PTR_1126aae08);
        func_0x000107c5fadc(uVar7,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c47ed8(puVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170();
        func_0x0001090219f4();
        if ((uVar7 & 1) != 0) {
          func_0x000102731f6c();
          func_0x000107c52c00(puVar6);
          func_0x000107c61170(uVar7);
        }
        puVar8 = PTR_PTR_1126aae18;
        func_0x000107c610f8(PTR_PTR_1126aae18);
        func_0x000107c61174(lVar4);
        func_0x000107c49520(puVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar3);
        return puVar8;
      }
      func_0x000107c615e8(lVar3);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1027308f8; end: 10273091f; -[_TtC26VenueProfileImplementation21VenueProfileComponent loadView] */

void FUN_1027308f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102730630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102730920; end: 102730a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102730920(uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  if (*(long *)(unaff_x20 + _DAT_112ebb0d8) != 0) {
    func_0x000107c56a14();
  }
  if (*(long *)(unaff_x20 + _DAT_112ebb0e0) != 0) {
    func_0x000107c56a14();
  }
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4abfc();
    func_0x000107c61170(lVar2);
    if ((*(byte *)(unaff_x20 + _DAT_112ebb0e8) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112ebb0e8) = 1;
      FUN_10272ac40(unaff_x20 + _DAT_112ebb148,auStack_70);
      puVar3 = auStack_50;
      func_0x000107c61618();
      FUN_102686c5c(auStack_70);
      if (puVar3 != (undefined1 *)0x0) {
        func_0x000107c614f0(puVar3);
        (**(code **)(lStack_48 + 0x18))();
        func_0x000107c615e8(puVar3);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102730a38);
  (*pcVar1)();
}



/* Entry: 102730a38; end: 102730a67; -[_TtC26VenueProfileImplementation21VenueProfileComponent viewDidAppear:] */

void FUN_102730a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102730920(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102730a68; end: 102730c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102730a68(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = param_1;
  FUN_102730500();
  lVar3 = *(long *)(lVar8 + 0x10);
  func_0x000107c61174();
  func_0x000107c61574(lVar8);
  puVar1 = (ulong *)(lVar3 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lVar3);
  puVar1 = (ulong *)(param_1 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  if (uVar4 == *puVar1 && uVar2 == puVar1[1]) {
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000107c605b8(uVar4,uVar2,*puVar1,puVar1[1],0);
    func_0x000107c6142c(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_112ebb0d8);
      if (lVar8 != 0) {
        uVar4 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61428(param_1 + _DAT_112fa9ab8,auStack_a8,0,0);
        func_0x000107c61174(lVar8);
        uVar5 = uVar2;
        func_0x000107c61434(uVar2);
        FUN_102731d08();
        puVar6 = PTR_PTR_1126aae08;
        func_0x000107c610f8(PTR_PTR_1126aae08);
        func_0x000107c5fadc(uVar4,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c47ed8(puVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170();
        func_0x0001090219f4();
        if ((int)uVar4 != 0) {
          func_0x000102731f6c();
          func_0x000107c52c00(puVar6);
          func_0x000107c61170(uVar4);
        }
        func_0x000107c5a588(lVar8);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(puVar6);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_112ebb0c8);
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      *(long *)(lVar8 + 0x10) = param_1;
      func_0x000107c6157c(lVar8);
      func_0x000107c61174(param_1);
      func_0x000107c61574(lVar8);
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 102730c7c; end: 102730e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102730c7c(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  puVar1 = puStack_70;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(puStack_70);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    if (puVar1 != (undefined *)0x0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x80))();
      puVar3 = PTR_PTR_1126b1fb0;
      func_0x000107c610f8(PTR_PTR_1126b1fb0);
      func_0x000107c45ac4();
      func_0x000107c61170(puVar2);
      puVar2 = &UNK_1105417b0;
      func_0x000107c613fc(&UNK_1105417b0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_50 = FUN_102732220;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1105417c8;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c560b0(puVar3);
      func_0x000107c60bd0(ppuVar4);
      puVar2 = PTR_PTR_1126b1fb8;
      func_0x000107c610f8(PTR_PTR_1126b1fb8);
      func_0x000107c61174(puVar3);
      func_0x000107c49520(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar1);
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102730e48; end: 102730ec3;  */

void FUN_102730e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_10273057c();
    func_0x000107c61170(param_1);
    FUN_10272b49c(5,0,0,0,0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102730ec4; end: 102730fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102730ec4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  FUN_10273057c();
  puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 0x10) + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  puVar4 = PTR_PTR_1126aae00;
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c47ecc();
  func_0x000107c61170(uVar5);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c54774(puVar4);
  func_0x000107c61170(param_1);
  puStack_60 = puVar4;
  func_0x0001002a64a8(&puStack_60);
  func_0x000107c61574(lVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 102730fc4; end: 102731933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102730fc4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [2];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  
  func_0x000100083b20(alStack_98);
  lVar2 = alStack_98[0];
  lVar1 = alStack_98[0];
  func_0x000107c4e7bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x00010273163c();
    if (lVar1 != 0) {
      func_0x000100083b20(alStack_98);
      lVar4 = alStack_98[0];
      lVar3 = *(long *)(alStack_98[0] + _DAT_112fc5e78);
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000100083b20(alStack_98);
        lVar3 = alStack_98[0];
        func_0x000109022308(alStack_98[0]);
        func_0x000107c615e8(lVar3);
        lVar3 = unaff_x20 + _DAT_112ebb148;
        FUN_10272ac40(lVar3,alStack_98);
        puVar5 = auStack_78;
        func_0x000107c61618();
        FUN_102686c5c(alStack_98);
        if (puVar5 != (undefined1 *)0x0) {
          func_0x000107c615e8(puVar5);
        }
        puVar6 = PTR_PTR_1126aae20;
        func_0x000107c610f8();
        func_0x000107c486d0();
        func_0x000100083b20(alStack_98);
        lVar21 = alStack_98[0];
        lVar7 = alStack_98[0];
        func_0x000107c4141c();
        func_0x000107c61180();
        func_0x000107c61170(lVar21);
        lVar8 = lVar7;
        func_0x000107c4f224();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        func_0x000100083b20(alStack_98);
        lVar21 = alStack_98[0];
        lVar9 = alStack_98[0];
        func_0x000107c5dbd4();
        func_0x000107c61180();
        func_0x000107c61170(lVar21);
        lVar10 = lVar8;
        func_0x000107c40978();
        func_0x000107c61180();
        func_0x000107c61170();
        FUN_102730500();
        func_0x000100083b20(alStack_98);
        lVar15 = alStack_98[0];
        func_0x000100083b20(alStack_98);
        lVar16 = alStack_98[0];
        FUN_10272ac40(lVar3,alStack_98);
        puVar5 = auStack_88;
        func_0x000107c61618();
        FUN_102686c5c(alStack_98);
        FUN_10272ac40(lVar3,alStack_98);
        puVar11 = auStack_78;
        func_0x000107c61618(puVar11);
        plVar12 = alStack_98;
        FUN_102686c5c();
        FUN_10273057c();
        lVar13 = 0;
        FUN_10271fbd4();
        lVar14 = lVar13;
        func_0x000107c610f8();
        lVar3 = lVar14 + _DAT_112ebab60;
        *(undefined8 *)(lVar3 + 8) = 0;
        func_0x000107c61614(lVar3,0);
        lVar21 = lVar14 + _DAT_112ebab68;
        *(undefined8 *)(lVar21 + 8) = 0;
        func_0x000107c61614(lVar21,0);
        lVar7 = lVar14 + _DAT_112ebab70;
        *(undefined8 *)(lVar7 + 8) = 0;
        func_0x000107c61614(lVar7,0);
        *(undefined8 *)(lVar14 + _DAT_112ebab78) = 1;
        *(undefined ***)(lVar3 + 8) = &PTR_DAT_1105417f0;
        func_0x000107c61604(lVar3);
        *(long *)(lVar14 + _DAT_112ebab40) = lVar9;
        *(long *)(lVar14 + _DAT_112ebab48) = lVar15;
        *(long *)(lVar14 + _DAT_112ebab50) = lVar16;
        *(long **)(lVar14 + _DAT_112ebab58) = plVar12;
        *(undefined8 *)(lVar21 + 8) = uStack_80;
        func_0x000107c61604(lVar21,puVar5);
        *(undefined8 *)(lVar7 + 8) = uStack_70;
        func_0x000107c61604(lVar7,puVar11);
        puVar20 = PTR_s_init_1125d9248;
        lStack_a8 = lVar14;
        lStack_a0 = lVar13;
        func_0x000107c6157c(lVar9);
        func_0x000107c61174(lVar15);
        func_0x000107c61174(lVar16);
        plVar12 = &lStack_a8;
        func_0x000107c61154(plVar12,puVar20);
        func_0x000107c61574(lVar9);
        func_0x000107c61170(lVar15);
        func_0x000107c61170(lVar16);
        func_0x000107c615e8(puVar5);
        func_0x000107c615e8(puVar11);
        uVar17 = 0;
        FUN_102732274(0,0x112ebb190,&PTR_PTR_1126aae28);
        func_0x000107c61174();
        func_0x000100083b20(alStack_98);
        lVar3 = alStack_98[0];
        func_0x000107c615f0(lVar2);
        func_0x000107c615f0(lVar10);
        func_0x000107c615f0(lVar1);
        lVar21 = lVar4;
        func_0x000107c615f0();
        func_0x0001004575f0();
        lVar7 = lVar21;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61170(lVar21);
        uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112ebb0d0);
        func_0x000107c61174();
        uVar18 = uVar22;
        func_0x000107c6157c();
        func_0x0001004575f0();
        uVar19 = uVar18;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61574(uVar22);
        func_0x000107c61170(uVar18);
        func_0x000107c614e8();
        func_0x000107c610f8();
        func_0x000107c45fdc();
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar10);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(plVar12);
        func_0x000107c61170(uVar19);
        puVar20 = puVar6;
        func_0x000107c5aedc();
        if ((int)puVar20 != 0) {
          func_0x000100083b20(alStack_98);
          lVar21 = *(long *)(alStack_98[0] + _DAT_112fcd138);
          func_0x000107c61174();
          func_0x000107c61170(alStack_98[0]);
          lVar3 = lVar21;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar21);
          if (lVar3 != 0) {
            func_0x000107c615f0(lVar3);
            func_0x000107c562a8(uVar17);
            func_0x000107c615ec(lVar3,2);
          }
        }
        func_0x000107c615e8(lVar8);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(plVar12);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar1);
        return uVar17;
      }
      func_0x000107c615e8(lVar2);
      lVar2 = lVar1;
    }
    func_0x000107c615e8(lVar2);
  }
  return 0;
}



/* Entry: 102731934; end: 1027319c7; -[_TtC26VenueProfileImplementation21VenueProfileComponent initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102731934(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ebb0c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebb0d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebb0d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebb0e0) = 0;
  *(undefined1 *)(param_1 + _DAT_112ebb0e8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "VenueProfileImplementation/VenueProfileComponent.swift",0x36,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027319c8);
  (*pcVar1)();
}



/* Entry: 1027319c8; end: 102731a27; -[_TtC26VenueProfileImplementation21VenueProfileComponent initWithNibName:bundle:] */

void FUN_1027319c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.VenueProfileComponent",0x30,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027319f4);
  (*pcVar1)();
}



/* Entry: 102731a28; end: 102731b5f; -[_TtC26VenueProfileImplementation21VenueProfileComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102731a28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb118));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb158));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb0f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb0f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb110));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb128));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb120));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb100));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb150));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb130));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb108));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb138));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb140));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb0c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb0d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebb0d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebb0e0));
  param_1 = param_1 + _DAT_112ebb148;
  (*(code *)&DAT_1038c1d80)();
  return param_1;
}



/* Entry: 102731b60; end: 102731b67;  */

void FUN_102731b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102731b68; end: 102731b9f;  */

undefined8 FUN_102731b68(long param_1)

{
  undefined8 uVar1;
  
  FUN_102730500();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102731ba0; end: 102731bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102731ba0(void)

{
  long unaff_x20;
  
  func_0x000107c4b7a0();
  return *(long *)(unaff_x20 + _DAT_112ebb0d8) != 0;
}



/* Entry: 102731bcc; end: 102731bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102731bcc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = param_1;
  FUN_102730500();
  lVar3 = *(long *)(lVar8 + 0x10);
  func_0x000107c61174();
  func_0x000107c61574(lVar8);
  puVar1 = (ulong *)(lVar3 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lVar3);
  puVar1 = (ulong *)(param_1 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  if (uVar4 == *puVar1 && uVar2 == puVar1[1]) {
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000107c605b8(uVar4,uVar2,*puVar1,puVar1[1],0);
    func_0x000107c6142c(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_112ebb0d8);
      if (lVar8 != 0) {
        uVar4 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61428(param_1 + _DAT_112fa9ab8,auStack_a8,0,0);
        func_0x000107c61174(lVar8);
        uVar5 = uVar2;
        func_0x000107c61434(uVar2);
        FUN_102731d08();
        puVar6 = PTR_PTR_1126aae08;
        func_0x000107c610f8(PTR_PTR_1126aae08);
        func_0x000107c5fadc(uVar4,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c47ed8(puVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170();
        func_0x0001090219f4();
        if ((int)uVar4 != 0) {
          func_0x000102731f6c();
          func_0x000107c52c00(puVar6);
          func_0x000107c61170(uVar4);
        }
        func_0x000107c5a588(lVar8);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(puVar6);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_112ebb0c8);
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      *(long *)(lVar8 + 0x10) = param_1;
      func_0x000107c6157c(lVar8);
      func_0x000107c61174(param_1);
      func_0x000107c61574(lVar8);
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 102731bd8; end: 102731c4f; -[_TtC26VenueProfileImplementation21VenueProfileComponent scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102731bd8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112ebb0e0);
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c496e8();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) goto LAB_102731c38;
  }
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x000107c453e4();
LAB_102731c38:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102731c50; end: 102731c57; -[_TtC26VenueProfileImplementation21VenueProfileComponent autoSizingEnabled] */

undefined8 FUN_102731c50(void)

{
  return 0;
}



/* Entry: 102731c58; end: 102731c5f; -[_TtC26VenueProfileImplementation21VenueProfileComponent autoSizingFullishEnabled] */

undefined8 FUN_102731c58(void)

{
  return 0;
}



/* Entry: 102731c60; end: 102731c93; -[_TtC26VenueProfileImplementation21VenueProfileComponent trayFeatureName] */

void FUN_102731c60(void)

{
  func_0x000107c5fadc(0x52505f4543414c50,0xed0000454c49464f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102731c94; end: 102731d07; -[_TtC26VenueProfileImplementation21VenueProfileComponent handleGripperAreaTapped] */

/* WARNING: Possible PIC construction at 0x000102731ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102731ce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102731c94(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112ebb0e0);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c496e8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5384c(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102731d08);
  (*pcVar1)();
}



/* Entry: 102731d08; end: 10273221f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102731d08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c41018();
  lVar7 = _DAT_112fa9ad0;
  puVar5 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9ad0,puVar5,0,0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + lVar7) + _DAT_112fa9b08);
  func_0x000100c6f294();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar6 = 0;
    puVar5 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  puVar4 = PTR_PTR_1126aae10;
  func_0x000107c610f8(PTR_PTR_1126aae10);
  func_0x000107c5fadc(lVar6,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c49074(param_1,puVar4);
  func_0x000107c61170(lVar6);
  lVar3 = _DAT_112fa9b10;
  lVar6 = *(long *)(unaff_x20 + lVar7);
  func_0x000107c61428(lVar6 + _DAT_112fa9b10,auStack_80,0,0);
  lVar3 = *(long *)(lVar6 + lVar3);
  if (lVar3 != -1) {
    func_0x000107c31128();
    func_0x000107c61180();
    func_0x000107c57438(puVar4);
    func_0x000107c61170(lVar3);
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar7) + _DAT_112fa9b18);
  func_0x000107c61428(puVar1,auStack_98,0,0);
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar1;
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(uVar8,lVar7);
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c59584(puVar4);
  func_0x000107c61170(uVar8);
  lVar7 = _DAT_112fa9ac8;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9ac8,auStack_b0,0,0);
  if (*(long *)(unaff_x20 + lVar7) == 0) {
    uVar8 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar7) + _DAT_113083488);
    uVar8 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar8,uVar2);
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c547fc(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61428(unaff_x20 + _DAT_112fa9ad8,auStack_c8,0,0);
  func_0x000107c56244(puVar4);
  return puVar4;
}



/* Entry: 102732220; end: 102732253;  */

void FUN_102732220(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_10273057c();
    func_0x000107c61170(lVar1);
    FUN_10272b49c(5,0,0,0,0);
    func_0x000107c61574(lVar2);
  }
  return;
}


