/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ea63bc; end: 102ea63bf; -[SCPlusLensRemoteApiRequestHandler reset] */

void FUN_102ea63bc(void)

{
  return;
}



/* Entry: 102ea63c0; end: 102ea6487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea63c0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f26158);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c43ea4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(lVar3 + _DAT_113036370);
      uVar1 = ((ulong *)(lVar3 + _DAT_113036370))[1];
      if (uVar4 == param_1 && uVar1 == param_2) {
        return;
      }
      func_0x000107c605b8(uVar4,uVar1,param_1,param_2,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
      func_0x000107c61170(lVar3);
    }
  }
  func_0x000103f6f61c(0);
  func_0x000107c61434(param_2);
  func_0x000103f6f6f4(param_1,param_2);
  return;
}



/* Entry: 102ea6488; end: 102ea651f;  */

void FUN_102ea6488(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_90;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x22 + 0x238) = param_13;
  *(undefined8 *)(unaff_x22 + 0x230) = param_12;
  *(undefined8 *)(unaff_x22 + 0x228) = param_11;
  *(undefined4 *)(unaff_x22 + 0x248) = param_9;
  *(undefined8 *)(unaff_x22 + 0x220) = param_8;
  *(undefined8 *)(unaff_x22 + 0x218) = param_7;
  *(undefined4 *)(unaff_x22 + 0x244) = param_6;
  *(undefined4 *)(unaff_x22 + 0x240) = param_5;
  *(undefined8 *)(unaff_x22 + 0x210) = param_4;
  *(undefined8 *)(unaff_x22 + 0x208) = param_3;
  *(undefined1 *)(unaff_x22 + 0x24c) = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ea6520,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(unaff_x22 + 0x220);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x244);
  uVar2 = *(undefined4 *)(unaff_x22 + 0x240);
  lVar19 = *(long *)(unaff_x22 + 0x210);
  lVar20 = *(long *)(unaff_x22 + 0x208);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x24c);
  lVar11 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar11 + 0x20) = 0x736275735f6e6163;
  *(undefined8 *)(lVar11 + 0x18) = 0xc;
  *(undefined8 *)(lVar11 + 0x10) = 6;
  *(undefined8 *)(lVar11 + 0x28) = 0xed00006562697263;
  puVar6 = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar11 + 0x30) = 1;
  *(undefined **)(lVar11 + 0x48) = puVar6;
  *(undefined8 *)(lVar11 + 0x50) = 0x746669675f6e6163;
  *(undefined8 *)(lVar11 + 0x58) = 0xe800000000000000;
  *(undefined1 *)(lVar11 + 0x60) = uVar3;
  *(undefined **)(lVar11 + 0x78) = puVar6;
  *(undefined8 *)(lVar11 + 0x80) = 0x63736275735f7369;
  *(undefined8 *)(lVar11 + 0x88) = 0xed00006465626972;
  func_0x000107c61428(lVar20 + 0x10,unaff_x22 + 0x1d0,0,0);
  *(undefined1 *)(lVar11 + 0x90) = *(undefined1 *)(lVar20 + 0x10);
  *(undefined **)(lVar11 + 0xa8) = puVar6;
  *(undefined8 *)(lVar11 + 0xb0) = 0xd000000000000011;
  *(undefined8 *)(lVar11 + 0xb8) = 0x800000010f113090;
  func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x1e8,0,0);
  puVar6 = PTR___sSuN_11034e220;
  *(undefined8 *)(lVar11 + 0xc0) = *(undefined8 *)(lVar19 + 0x10);
  *(undefined **)(lVar11 + 0xd8) = puVar6;
  *(undefined8 *)(lVar11 + 0xe0) = 0x6d75696d65657266;
  puVar6 = PTR___ss5Int32VN_11034ee20;
  *(undefined8 *)(lVar11 + 0xe8) = 0xee0074696d696c5f;
  *(undefined4 *)(lVar11 + 0xf0) = uVar2;
  *(undefined **)(lVar11 + 0x108) = puVar6;
  *(undefined8 *)(lVar11 + 0x110) = 0xd000000000000010;
  *(undefined8 *)(lVar11 + 0x118) = 0x800000010f1130b0;
  *(undefined **)(lVar11 + 0x138) = puVar6;
  *(undefined4 *)(lVar11 + 0x120) = uVar1;
  lVar19 = lVar11;
  func_0x000100214a84();
  func_0x000107c61588(lVar11);
  uVar12 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar11 + 0x20),6,uVar12);
  if (lVar17 != 0) {
    uVar1 = *(undefined4 *)(unaff_x22 + 0x248);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x178) = uVar12;
    *(undefined **)(unaff_x22 + 0x188) = PTR___sSSN_11034da80;
    func_0x000100102924(unaff_x22 + 0x170,unaff_x22 + 0x150);
    func_0x000107c61434(uVar12);
    lVar11 = lVar19;
    func_0x000107c61558(lVar19);
    func_0x0001001029e8(unaff_x22 + 0x150,0xd000000000000011,0x800000010f1130d0,lVar11);
    *(undefined4 *)(unaff_x22 + 0x1b0) = uVar1;
    *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
    func_0x000100102924(unaff_x22 + 0x1b0,unaff_x22 + 400);
    lVar11 = lVar19;
    func_0x000107c61558(lVar19);
    func_0x0001001029e8(unaff_x22 + 400,0xd000000000000019,0x800000010f1130f0,lVar11);
    lStack_90 = lVar19;
  }
  puVar18 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar11 = lVar19;
  func_0x000107c61434(lVar19);
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc();
  *(undefined8 *)(unaff_x22 + 0x200) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c61174(uVar12);
  if (puVar18 == (undefined *)0x0) {
    uVar13 = uVar12;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar12);
    func_0x000107c61654();
    func_0x000107c614ac(uVar13);
    func_0x000107c6142c(lVar19);
    puVar14 = (undefined *)0x0;
    puVar16 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar18);
    func_0x000107c6142c(lVar19);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x230);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  func_0x000107c5fadc(uVar12,uVar13);
  puVar4 = puVar18;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar18,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar18);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar18 = puVar14;
    func_0x000107c5ee20(puVar14,puVar16);
    func_0x0001000b44c0(puVar14);
  }
  else {
    puVar18 = (undefined *)0x0;
    puVar16 = puVar5;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x228);
  puVar5 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  uVar13 = 1;
  uVar9 = 0;
  puVar7 = puVar4;
  puVar8 = puVar18;
  func_0x000107c48368();
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar12);
  puVar14 = puVar5;
  func_0x000107c4d664(uVar15);
  func_0x000107c61170(puVar5);
  func_0x000107c3fedc(uVar15);
  func_0x000107c6142c(lVar19);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
    puStack_e0 = puVar6;
    puStack_d8 = puVar18;
    puStack_d0 = puVar4;
    puStack_c8 = puVar5;
    func_0x000107c61428(puVar14 + 0x10,auStack_f8,0,0);
    puVar14 = puVar14 + 0x10;
    func_0x000107c61618();
    if (puVar14 != (undefined *)0x0) {
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (puVar16 == (undefined *)0x0)) {
        func_0x000107c615f0(UNRECOVERED_JUMPTABLE);
        FUN_102ea6b2c(puVar7,puVar8,uVar9,param_8,(byte)lStack_90 & 1,UNRECOVERED_JUMPTABLE,uVar13);
        func_0x000107c61170(puVar14);
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
        return;
      }
      func_0x000107c61170();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar18 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    func_0x000107c5fadc(puVar7,puVar8);
    puVar16 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    func_0x000107c48368(puVar18);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar16);
    func_0x000107c4d664(uVar13);
    func_0x000107c61170(puVar18);
    func_0x000107c3fedc(uVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ea69b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ea6520; end: 102ea69bb;  */

void FUN_102ea6520(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 in_x7;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_70;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(unaff_x22 + 0x220);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x244);
  uVar2 = *(undefined4 *)(unaff_x22 + 0x240);
  lVar19 = *(long *)(unaff_x22 + 0x210);
  lVar20 = *(long *)(unaff_x22 + 0x208);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x24c);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x20) = 0x736275735f6e6163;
  *(undefined8 *)(lVar4 + 0x18) = 0xc;
  *(undefined8 *)(lVar4 + 0x10) = 6;
  *(undefined8 *)(lVar4 + 0x28) = 0xed00006562697263;
  puVar7 = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar4 + 0x30) = 1;
  *(undefined **)(lVar4 + 0x48) = puVar7;
  *(undefined8 *)(lVar4 + 0x50) = 0x746669675f6e6163;
  *(undefined8 *)(lVar4 + 0x58) = 0xe800000000000000;
  *(undefined1 *)(lVar4 + 0x60) = uVar3;
  *(undefined **)(lVar4 + 0x78) = puVar7;
  *(undefined8 *)(lVar4 + 0x80) = 0x63736275735f7369;
  *(undefined8 *)(lVar4 + 0x88) = 0xed00006465626972;
  func_0x000107c61428(lVar20 + 0x10,unaff_x22 + 0x1d0,0,0);
  *(undefined1 *)(lVar4 + 0x90) = *(undefined1 *)(lVar20 + 0x10);
  *(undefined **)(lVar4 + 0xa8) = puVar7;
  *(undefined8 *)(lVar4 + 0xb0) = 0xd000000000000011;
  *(undefined8 *)(lVar4 + 0xb8) = 0x800000010f113090;
  func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x1e8,0,0);
  puVar7 = PTR___sSuN_11034e220;
  *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar19 + 0x10);
  *(undefined **)(lVar4 + 0xd8) = puVar7;
  *(undefined8 *)(lVar4 + 0xe0) = 0x6d75696d65657266;
  puVar7 = PTR___ss5Int32VN_11034ee20;
  *(undefined8 *)(lVar4 + 0xe8) = 0xee0074696d696c5f;
  *(undefined4 *)(lVar4 + 0xf0) = uVar2;
  *(undefined **)(lVar4 + 0x108) = puVar7;
  *(undefined8 *)(lVar4 + 0x110) = 0xd000000000000010;
  *(undefined8 *)(lVar4 + 0x118) = 0x800000010f1130b0;
  *(undefined **)(lVar4 + 0x138) = puVar7;
  *(undefined4 *)(lVar4 + 0x120) = uVar1;
  lVar19 = lVar4;
  func_0x000100214a84();
  func_0x000107c61588(lVar4);
  uVar12 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),6,uVar12);
  if (lVar17 != 0) {
    uVar1 = *(undefined4 *)(unaff_x22 + 0x248);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x178) = uVar12;
    *(undefined **)(unaff_x22 + 0x188) = PTR___sSSN_11034da80;
    func_0x000100102924(unaff_x22 + 0x170,unaff_x22 + 0x150);
    func_0x000107c61434(uVar12);
    lVar4 = lVar19;
    func_0x000107c61558(lVar19);
    func_0x0001001029e8(unaff_x22 + 0x150,0xd000000000000011,0x800000010f1130d0,lVar4);
    *(undefined4 *)(unaff_x22 + 0x1b0) = uVar1;
    *(undefined **)(unaff_x22 + 0x1c8) = puVar7;
    func_0x000100102924(unaff_x22 + 0x1b0,unaff_x22 + 400);
    lVar4 = lVar19;
    func_0x000107c61558(lVar19);
    func_0x0001001029e8(unaff_x22 + 400,0xd000000000000019,0x800000010f1130f0,lVar4);
    lStack_70 = lVar19;
  }
  puVar18 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar4 = lVar19;
  func_0x000107c61434(lVar19);
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc();
  *(undefined8 *)(unaff_x22 + 0x200) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c61174(uVar12);
  if (puVar18 == (undefined *)0x0) {
    uVar13 = uVar12;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar12);
    func_0x000107c61654();
    func_0x000107c614ac(uVar13);
    func_0x000107c6142c(lVar19);
    puVar14 = (undefined *)0x0;
    puVar16 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar18);
    func_0x000107c6142c(lVar19);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x230);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  func_0x000107c5fadc(uVar12,uVar13);
  puVar5 = puVar18;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar18,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar18);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar18 = puVar14;
    func_0x000107c5ee20(puVar14,puVar16);
    func_0x0001000b44c0(puVar14);
  }
  else {
    puVar18 = (undefined *)0x0;
    puVar16 = puVar6;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x228);
  puVar6 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  uVar13 = 1;
  uVar10 = 0;
  puVar8 = puVar5;
  puVar9 = puVar18;
  func_0x000107c48368();
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar12);
  puVar14 = puVar6;
  func_0x000107c4d664(uVar15);
  func_0x000107c61170(puVar6);
  func_0x000107c3fedc(uVar15);
  func_0x000107c6142c(lVar19);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    func_0x000107c60e78();
    puStack_c0 = puVar7;
    puStack_b8 = puVar18;
    puStack_b0 = puVar5;
    puStack_a8 = puVar6;
    func_0x000107c61428(puVar14 + 0x10,auStack_d8,0,0);
    puVar14 = puVar14 + 0x10;
    func_0x000107c61618();
    if (puVar14 != (undefined *)0x0) {
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (puVar16 == (undefined *)0x0)) {
        func_0x000107c615f0(UNRECOVERED_JUMPTABLE);
        FUN_102ea6b2c(puVar8,puVar9,uVar10,in_x7,(byte)lStack_70 & 1,UNRECOVERED_JUMPTABLE,uVar13);
        func_0x000107c61170(puVar14);
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
        return;
      }
      func_0x000107c61170();
    }
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar18 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    func_0x000107c5fadc(puVar8,puVar9);
    puVar16 = puVar7;
    func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar7);
    func_0x000107c48368(puVar18);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar16);
    func_0x000107c4d664(uVar13);
    func_0x000107c61170(puVar18);
    func_0x000107c3fedc(uVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ea69b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ea69bc; end: 102ea6b2b;  */

void FUN_102ea69bc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      func_0x000107c615f0(param_1);
      FUN_102ea6b2c(param_5,param_6,param_7,param_8,param_9 & 1,param_1,param_4);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000107c61170();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5fadc(param_5,param_6);
  puVar3 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  func_0x000107c48368(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar3);
  func_0x000107c4d664(param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c3fedc(param_4);
  return;
}



/* Entry: 102ea6b2c; end: 102ea7737;  */

/* WARNING: Possible PIC construction at 0x000102ea6bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea6c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea6c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea6d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ea6c4c) */
/* WARNING: Removing unreachable block (ram,0x000107c3fedc) */
/* WARNING: Removing unreachable block (ram,0x00010bf436e0) */
/* WARNING: Removing unreachable block (ram,0x000102ea6c30) */
/* WARNING: Removing unreachable block (ram,0x000102ea6d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea6b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  plVar1 = (long *)(unaff_x20 + _DAT_112f26120);
  if (*plVar1 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f26140);
    lVar5 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      puVar6 = &UNK_1105e2eb0;
      func_0x000107c613fc(&UNK_1105e2eb0,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = param_7;
      *(undefined8 *)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      *(long *)(puVar6 + 0x28) = lVar3;
      lVar3 = *plVar1;
      lVar5 = plVar1[1];
      *plVar1 = 0x102ea7ca8;
      plVar1[1] = (long)puVar6;
      func_0x000107c61174(param_7);
      func_0x000107c61434(param_2);
      func_0x00010058d43c(lVar3,lVar5);
      uVar2 = 0x25;
      if ((param_5 & 1) == 0) {
        uVar2 = 0xffffffffffffffff;
      }
      uVar8 = 0;
      func_0x00010439a550(0);
      func_0x0001043998c4(param_5 & 1,uVar8);
      uVar8 = param_3;
      func_0x000102ea71fc(param_3,param_4);
      func_0x00010439c014(0);
      func_0x000107c610f8();
      func_0x000107c61434(param_4);
      func_0x00010439b9d8(0x51,0,0,0x3a,param_3,param_4,uVar2,uVar8);
      func_0x000107c3eda8(*(undefined8 *)(unaff_x20 + _DAT_112f26148));
      func_0x000107c61180();
      func_0x000107c42c1c(lVar4);
    }
  }
  else {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    func_0x000107c48368(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102ea7738; end: 102ea780b;  */

void FUN_102ea7738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5fadc(param_2,param_3);
  puVar3 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  func_0x000107c48368(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar3);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 102ea780c; end: 102ea786b; -[SCPlusLensRemoteApiRequestHandler init] */

void FUN_102ea780c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusLensRemoteApi.PlusLensRemoteApiRequestHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea7838);
  (*pcVar1)();
}



/* Entry: 102ea786c; end: 102ea794b; -[SCPlusLensRemoteApiRequestHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ea7908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea792c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ea790c) */
/* WARNING: Removing unreachable block (ram,0x000102ea7930) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea786c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26138));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26140));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26148));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26150));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26158));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26160));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f26110));
  return;
}



/* Entry: 102ea794c; end: 102ea7983; -[SCPlusLensRemoteApiRequestHandler plusSubscribeDidDismiss] */

void FUN_102ea794c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ea7984(&DAT_112f26140,&DAT_112f26120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ea7984; end: 102ea7a1f;  */

/* WARNING: Possible PIC construction at 0x000102ea79f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ea79f8) */

void FUN_102ea7984(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + *param_1);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  pcVar2 = *(code **)(unaff_x20 + *param_2);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + *param_2))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
    if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 102ea7a20; end: 102ea7a57; -[SCPlusLensRemoteApiRequestHandler plusGiftingPageDidDismiss] */

void FUN_102ea7a20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ea7984(&DAT_112f26150,&DAT_112f26128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ea7a58; end: 102ea7a77;  */

void FUN_102ea7a58(void)

{
  func_0x000107c61168(&PTR_PTR_1128aac78);
  return;
}



/* Entry: 102ea7a78; end: 102ea7b3b;  */

void FUN_102ea7a78(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined *puVar18;
  long unaff_x22;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined1 auStack_128 [24];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  uVar4 = *(undefined1 *)(unaff_x20 + 0x10);
  lStack_90 = *(long *)(unaff_x20 + 0x18);
  lVar20 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x2c);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar16 = *(long *)(unaff_x20 + 0x38);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x40);
  lStack_98 = *(long *)(unaff_x20 + 0x50);
  lStack_a0 = *(long *)(unaff_x20 + 0x48);
  lVar6 = *(long *)(unaff_x20 + 0x58);
  plVar12 = (long *)0x250;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_102ea7b3c;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0x47] = lVar6;
  plVar12[0x46] = lStack_98;
  plVar12[0x45] = lStack_a0;
  *(undefined4 *)(plVar12 + 0x49) = uVar3;
  plVar12[0x44] = lVar16;
  plVar12[0x43] = lVar7;
  *(undefined4 *)((long)plVar12 + 0x244) = uVar2;
  *(undefined4 *)(plVar12 + 0x48) = uVar1;
  plVar12[0x42] = lVar20;
  plVar12[0x41] = lStack_90;
  *(undefined1 *)((long)plVar12 + 0x24c) = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ea6520,0,0);
    return;
  }
  func_0x000107c60e78(param_1);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = plVar12[0x44];
  uVar1 = *(undefined4 *)((long)plVar12 + 0x244);
  lVar6 = plVar12[0x48];
  lVar17 = plVar12[0x42];
  lVar22 = plVar12[0x41];
  uVar4 = *(undefined1 *)((long)plVar12 + 0x24c);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x20) = 0x736275735f6e6163;
  *(undefined8 *)(lVar7 + 0x18) = 0xc;
  *(undefined8 *)(lVar7 + 0x10) = 6;
  *(undefined8 *)(lVar7 + 0x28) = 0xed00006562697263;
  puVar10 = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  *(undefined **)(lVar7 + 0x48) = puVar10;
  *(undefined8 *)(lVar7 + 0x50) = 0x746669675f6e6163;
  *(undefined8 *)(lVar7 + 0x58) = 0xe800000000000000;
  *(undefined1 *)(lVar7 + 0x60) = uVar4;
  *(undefined **)(lVar7 + 0x78) = puVar10;
  *(undefined8 *)(lVar7 + 0x80) = 0x63736275735f7369;
  *(undefined8 *)(lVar7 + 0x88) = 0xed00006465626972;
  func_0x000107c61428(lVar22 + 0x10,plVar12 + 0x3a,0,0);
  *(undefined1 *)(lVar7 + 0x90) = *(undefined1 *)(lVar22 + 0x10);
  *(undefined **)(lVar7 + 0xa8) = puVar10;
  *(undefined8 *)(lVar7 + 0xb0) = 0xd000000000000011;
  *(undefined8 *)(lVar7 + 0xb8) = 0x800000010f113090;
  func_0x000107c61428(lVar17 + 0x10,plVar12 + 0x3d,0,0);
  puVar10 = PTR___sSuN_11034e220;
  *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(lVar17 + 0x10);
  *(undefined **)(lVar7 + 0xd8) = puVar10;
  *(undefined8 *)(lVar7 + 0xe0) = 0x6d75696d65657266;
  puVar10 = PTR___ss5Int32VN_11034ee20;
  *(undefined8 *)(lVar7 + 0xe8) = 0xee0074696d696c5f;
  *(int *)(lVar7 + 0xf0) = (int)lVar6;
  *(undefined **)(lVar7 + 0x108) = puVar10;
  *(undefined8 *)(lVar7 + 0x110) = 0xd000000000000010;
  *(undefined8 *)(lVar7 + 0x118) = 0x800000010f1130b0;
  *(undefined **)(lVar7 + 0x138) = puVar10;
  *(undefined4 *)(lVar7 + 0x120) = uVar1;
  lVar6 = lVar7;
  func_0x000100214a84();
  func_0x000107c61588(lVar7);
  uVar13 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),6,uVar13);
  if (lVar20 != 0) {
    lVar7 = plVar12[0x49];
    lVar20 = plVar12[0x44];
    plVar12[0x2e] = plVar12[0x43];
    plVar12[0x2f] = lVar20;
    plVar12[0x31] = (long)PTR___sSSN_11034da80;
    func_0x000100102924(plVar12 + 0x2e,plVar12 + 0x2a);
    func_0x000107c61434(lVar20);
    lVar20 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_c0 = lVar6;
    func_0x0001001029e8(plVar12 + 0x2a,0xd000000000000011,0x800000010f1130d0,lVar20);
    lVar6 = lStack_c0;
    *(int *)(plVar12 + 0x36) = (int)lVar7;
    plVar12[0x39] = (long)puVar10;
    func_0x000100102924(plVar12 + 0x36,plVar12 + 0x32);
    lVar7 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_c0 = lVar6;
    func_0x0001001029e8(plVar12 + 0x32,0xd000000000000019,0x800000010f1130f0,lVar7);
    lVar6 = lStack_c0;
  }
  puVar21 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar7 = lVar6;
  func_0x000107c61434(lVar6);
  puVar19 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc();
  plVar12[0x40] = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = plVar12[0x40];
  func_0x000107c61174(lVar7);
  if (puVar21 == (undefined *)0x0) {
    lVar20 = lVar7;
    func_0x000107c5ed30();
    func_0x000107c61170(lVar7);
    func_0x000107c61654();
    func_0x000107c614ac(lVar20);
    func_0x000107c6142c(lVar6);
    puVar18 = (undefined *)0x0;
    puVar19 = (undefined *)0xf000000000000000;
  }
  else {
    puVar18 = puVar21;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar21);
    func_0x000107c6142c(lVar6);
  }
  lVar20 = plVar12[0x47];
  lVar7 = plVar12[0x46];
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  func_0x000107c5fadc(lVar7,lVar20);
  puVar8 = puVar21;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar21,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar21);
  if ((ulong)puVar19 >> 0x3c < 0xf) {
    puVar21 = puVar18;
    func_0x000107c5ee20(puVar18,puVar19);
    func_0x0001000b44c0(puVar18);
  }
  else {
    puVar21 = (undefined *)0x0;
    puVar19 = puVar9;
  }
  lVar20 = plVar12[0x45];
  puVar9 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  uVar13 = 1;
  uVar15 = 0;
  puVar11 = puVar8;
  puVar14 = puVar21;
  func_0x000107c48368();
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar7);
  puVar18 = puVar9;
  func_0x000107c4d664(lVar20);
  func_0x000107c61170(puVar9);
  func_0x000107c3fedc(lVar20);
  func_0x000107c6142c(lVar6);
  UNRECOVERED_JUMPTABLE = (code *)plVar12[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    func_0x000107c60e78();
    puStack_110 = puVar10;
    pcStack_c8 = FUN_102ea69bc;
    puStack_108 = puVar21;
    puStack_100 = puVar8;
    puStack_f8 = puVar9;
    plStack_f0 = plVar12;
    lStack_e8 = lVar20;
    lStack_e0 = lVar6;
    lStack_d8 = lVar7;
    puStack_d0 = &stack0xffffffffffffffa0;
    func_0x000107c61428(puVar18 + 0x10,auStack_128,0,0);
    puVar18 = puVar18 + 0x10;
    func_0x000107c61618();
    if (puVar18 != (undefined *)0x0) {
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (puVar19 == (undefined *)0x0)) {
        bVar5 = (byte)lStack_c0;
        func_0x000107c615f0(UNRECOVERED_JUMPTABLE);
        FUN_102ea6b2c(puVar11,puVar14,uVar15,lVar16,bVar5 & 1,UNRECOVERED_JUMPTABLE,uVar13);
        func_0x000107c61170(puVar18);
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
        return;
      }
      func_0x000107c61170();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar21 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    func_0x000107c5fadc(puVar11,puVar14);
    puVar19 = puVar10;
    func_0x000107c5f9dc(puVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar10);
    func_0x000107c48368(puVar21);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar19);
    func_0x000107c4d664(uVar13);
    func_0x000107c61170(puVar21);
    func_0x000107c3fedc(uVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ea69b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ea7b3c; end: 102ea7baf;  */

void FUN_102ea7b3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ea7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ea7bb0; end: 102ea7bcb;  */

void FUN_102ea7bb0(long param_1,long param_2)

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



/* Entry: 102ea7bcc; end: 102ea7c4b;  */

void FUN_102ea7bcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000102ea6dac(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102ea7c4c; end: 102ea7c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7c4c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uStack_40 = 0;
    uVar2 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc50(uVar3,&uStack_40,uVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f26118);
    *(undefined8 *)(lVar1 + _DAT_112f26118) = uStack_40;
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102ea7c54; end: 102ea7ca3;  */

void FUN_102ea7c54(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f26198 != 0) {
    return;
  }
  puVar1 = &UNK_1105e2f50;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f26198 = param_1;
  return;
}



/* Entry: 102ea7ca4; end: 102ea7caf;  */

void FUN_102ea7ca4(long param_1,long param_2)

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



/* Entry: 102ea7cb0; end: 102ea7cf7; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler realHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7cb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f261a0;
  func_0x000107c61428(param_1 + _DAT_112f261a0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ea7cf8; end: 102ea7e9b; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler setRealHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f261a0;
  func_0x000107c61428(param_1 + _DAT_112f261a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102ea7e9c; end: 102ea7efb; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler handleRequest:] */

void FUN_102ea7e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102ea7d5c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102ea7efc; end: 102ea7f47; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7efc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f261a0;
  func_0x000107c61428(param_1 + _DAT_112f261a0,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c504e8();
  }
  return;
}



/* Entry: 102ea7f48; end: 102ea7f8f; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7f48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f261a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ea7f90; end: 102ea7fc3;  */

void FUN_102ea7f90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ea7fc4; end: 102ea7fd3; -[SCPostCapturePlusLensRemoteApiPluginProxyHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea7fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f261a0));
  return;
}



/* Entry: 102ea7fd4; end: 102ea7ff3;  */

void FUN_102ea7fd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128aad90);
  return;
}



/* Entry: 102ea7ff4; end: 102ea7ffb;  */

undefined8 FUN_102ea7ff4(void)

{
  return 0x1b;
}



/* Entry: 102ea7ffc; end: 102ea8413;  */

void FUN_102ea7ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105e2f70;
  func_0x000107c613fc(&UNK_1105e2f70,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102ea8414,puVar1);
  return;
}



/* Entry: 102ea8414; end: 102ea8427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea8414(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = lVar2;
  FUN_102ea8a50(lVar2,uVar10,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar2;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_70 = 0x102ea8a78;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102ea88bc;
  puStack_78 = &UNK_1105e3010;
  ppuVar6 = &puStack_90;
  uStack_68 = uVar10;
  func_0x000107c60bc4(ppuVar6);
  uVar12 = uStack_68;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(uVar12);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61174();
  func_0x000100083b20(&puStack_90);
  puVar11 = puStack_90;
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&lStack_b0);
  uVar7 = *(undefined8 *)(lStack_b0 + _DAT_113036470);
  func_0x000107c61174();
  func_0x000107c61170(lStack_b0);
  lVar8 = 0;
  FUN_102ea7a58();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar2 = _DAT_112f26110;
  uVar10 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + lVar2) = uVar10;
  *(undefined8 *)(lVar9 + _DAT_112f26118) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f26120);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f26128);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar9 + _DAT_112f26130) = puVar5;
  *(undefined **)(lVar9 + _DAT_112f26138) = puVar11;
  *(undefined8 *)(lVar9 + _DAT_112f26140) = uStack_98;
  *(undefined8 *)(lVar9 + _DAT_112f26148) = uStack_a0;
  *(undefined8 *)(lVar9 + _DAT_112f26150) = uStack_a8;
  *(undefined8 *)(lVar9 + _DAT_112f26158) = uVar7;
  *(undefined8 *)(lVar9 + _DAT_112f26160) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f26168) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_c0 = lVar9;
  lStack_b8 = lVar8;
  func_0x000107c61174(puVar5);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar11);
  uVar10 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar12 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar13 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  plVar14 = &lStack_c0;
  func_0x000107c61154(plVar14,puVar3);
  func_0x000107c61180();
  FUN_102ea5548();
  func_0x000107c61170(plVar14);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  *(long **)(lVar4 + 0x18) = plVar14;
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  func_0x000107c61174(plVar14);
  func_0x000103a8bca8(plVar14);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  *param_1 = lVar4;
  param_1[1] = (long)&PTR_DAT_1105e2fc0;
  return;
}



/* Entry: 102ea8428; end: 102ea87a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ea8428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_78 = FUN_102ea88b4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_102ea88bc;
  puStack_80 = &UNK_1105e2f88;
  ppuVar5 = &puStack_98;
  uStack_70 = param_2;
  func_0x000107c60bc4(ppuVar5);
  uVar9 = uStack_70;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61174();
  func_0x000100083b20(&puStack_98);
  puVar10 = puStack_98;
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&lStack_b8);
  uVar6 = *(undefined8 *)(lStack_b8 + _DAT_113036470);
  func_0x000107c61174();
  func_0x000107c61170(lStack_b8);
  lVar7 = 0;
  FUN_102ea7a58();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar3 = _DAT_112f26110;
  uVar9 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + lVar3) = uVar9;
  *(undefined8 *)(lVar8 + _DAT_112f26118) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f26120);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f26128);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar8 + _DAT_112f26130) = puVar4;
  *(undefined **)(lVar8 + _DAT_112f26138) = puVar10;
  *(undefined8 *)(lVar8 + _DAT_112f26140) = uStack_a0;
  *(undefined8 *)(lVar8 + _DAT_112f26148) = uStack_a8;
  *(undefined8 *)(lVar8 + _DAT_112f26150) = uStack_b0;
  *(undefined8 *)(lVar8 + _DAT_112f26158) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112f26160) = 0;
  *(undefined8 *)(lVar8 + _DAT_112f26168) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c8 = lVar8;
  lStack_c0 = lVar7;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar10);
  uVar9 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar11 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar12 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  plVar13 = &lStack_c8;
  func_0x000107c61154(plVar13,puVar2);
  func_0x000107c61180();
  FUN_102ea5548();
  func_0x000107c61170(plVar13);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  *(long **)(unaff_x20 + 0x18) = plVar13;
  func_0x000100083b20(&puStack_98);
  puVar2 = puStack_98;
  func_0x000107c61174(plVar13);
  func_0x000103a8bca8(plVar13);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61170(puVar4);
  return unaff_x20;
}



/* Entry: 102ea87a8; end: 102ea88b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ea87a8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = _DAT_112ff4f48;
  func_0x000107c61428(lStack_38 + _DAT_112ff4f48,auStack_50,0,0);
  lVar1 = *(long *)(lStack_38 + lVar1);
  if (lVar1 == 0) {
    func_0x000107c61170(lStack_38);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      lVar1 = lVar2;
      func_0x000107c5d180(lVar2);
      func_0x000107c61180();
      lVar4 = lVar1;
      func_0x000107c4d070();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c451b0(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar2);
      return puVar3;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102ea88b4; end: 102ea88bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ea88b4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = _DAT_112ff4f48;
  func_0x000107c61428(lStack_38 + _DAT_112ff4f48,auStack_50,0,0);
  lVar1 = *(long *)(lStack_38 + lVar1);
  if (lVar1 == 0) {
    func_0x000107c61170(lStack_38);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      lVar1 = lVar2;
      func_0x000107c5d180(lVar2);
      func_0x000107c61180();
      lVar4 = lVar1;
      func_0x000107c4d070();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c451b0(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar2);
      return puVar3;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102ea88bc; end: 102ea88f3;  */

void FUN_102ea88bc(long param_1)

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



/* Entry: 102ea88f4; end: 102ea890f;  */

void FUN_102ea88f4(long param_1,long param_2)

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



/* Entry: 102ea8910; end: 102ea89bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ea8910(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  lVar2 = _DAT_112fdd5c8;
  func_0x000107c61428(lStack_38 + _DAT_112fdd5c8,auStack_50,0,0);
  lVar2 = *(long *)(lVar1 + lVar2);
  func_0x000107c615f0(lVar2);
  func_0x000107c61170(lVar1);
  if ((lVar2 != 0) &&
     (lVar1 = *(long *)(unaff_x20 + 0x18), func_0x000107c615e8(lVar2), lVar1 == lVar2)) {
    func_0x000100083b20(&lStack_38);
    func_0x000103a8bca8(0);
    func_0x000107c61170(lStack_38);
  }
  return ZEXT816(0);
}



/* Entry: 102ea89bc; end: 102ea8a03;  */

void FUN_102ea89bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ea8a04; end: 102ea8a4f;  */

undefined ** FUN_102ea8a04(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 102ea8a50; end: 102ea8a6f;  */

void FUN_102ea8a50(void)

{
  func_0x000107c61168(&PTR_PTR_112f26250);
  return;
}



/* Entry: 102ea8a70; end: 102ea8a87;  */

void FUN_102ea8a70(long param_1,long param_2)

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



/* Entry: 102ea8a88; end: 102ea8aaf;  */

void FUN_102ea8a88(void)

{
  func_0x000102ea8b14();
  return;
}



/* Entry: 102ea8ab0; end: 102ea8abb;  */

void FUN_102ea8ab0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102ea8ba0,param_1);
  return;
}



/* Entry: 102ea8abc; end: 102ea8b9f;  */

void FUN_102ea8abc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102ea8ba0; end: 102ea8bc7;  */

void FUN_102ea8ba0(void)

{
  func_0x000102ea8b14();
  return;
}



/* Entry: 102ea8bc8; end: 102ea8be7;  */

undefined1  [16] FUN_102ea8bc8(void)

{
  return ZEXT816(0x1105e3068);
}



/* Entry: 102ea8be8; end: 102ea8c07; -[_TtC28PlusAIStickersLegalTrayScope28PlusAIStickersLegalTrayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea8be8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f262b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ea8c08; end: 102ea8c93; -[_TtC28PlusAIStickersLegalTrayScope28PlusAIStickersLegalTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea8c08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f262c0;
  func_0x000107c61428(param_1 + _DAT_112f262c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ea8c94; end: 102ea8e37; -[_TtC28PlusAIStickersLegalTrayScope28PlusAIStickersLegalTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea8c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f262c0;
  func_0x000107c61428(param_1 + _DAT_112f262c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ea8e38; end: 102ea8ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ea8e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f262c0;
  func_0x000107c61614(unaff_x20 + _DAT_112f262c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f262b8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102ea8ef4; end: 102ea8f8b; -[_TtC28PlusAIStickersLegalTrayScope28PlusAIStickersLegalTrayScope initWithUIContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea8ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112f262c0;
  func_0x000107c61614(param_1 + _DAT_112f262c0,0);
  *(undefined8 *)(param_1 + _DAT_112f262b8) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  func_0x0001003343c4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 102ea8f8c; end: 102ea8fbb;  */

void FUN_102ea8f8c(void)

{
  func_0x0001003343c4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ea8fbc; end: 102ea9017; -[_TtC28PlusAIStickersLegalTrayScope28PlusAIStickersLegalTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ea8fbc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f262b8));
  param_1 = param_1 + _DAT_112f262c0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ea9018; end: 102ea907f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea9018(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033e738();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f262d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102ea9080; end: 102ea90cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea9080(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f262d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ea90cc; end: 102ea9153; -[_TtC28PlusAIStickersLegalTrayScope43PlusAIStickersLegalTrayScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea90cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102ea9154; end: 102ea9187;  */

void FUN_102ea9154(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ea9188; end: 102ea9197;  */

undefined1  [16] FUN_102ea9188(void)

{
  return ZEXT816(0x1105e3130);
}



/* Entry: 102ea9198; end: 102ea92f7; -[_TtC28PlusAIStickersLegalTrayScope43PlusAIStickersLegalTrayScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea9198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f262d0));
  return;
}



/* Entry: 102ea92f8; end: 102ea96bb;  */

/* WARNING: Removing unreachable block (ram,0x000102ea95b8) */

void FUN_102ea92f8(double *param_1,undefined1 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_116 [4];
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0x800000010f113230;
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  dVar20 = 2.0;
  dVar19 = 5.0;
  dVar18 = 15.0;
  if (param_2 != (undefined1 *)0x0) {
    puVar7 = param_2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (puVar7 != (undefined1 *)0x0) {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170();
      uVar1 = (uint)(uVar11 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      lVar13 = (long)puVar8 >> 0x20;
      if (1 < uVar1 >> 0x1e) {
        if ((uVar12 != 2) || (*(long *)(puVar8 + 0x10) == *(long *)(puVar8 + 0x18)))
        goto LAB_102ea95d8;
LAB_102ea94b4:
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        dStack_e8 = 0.0;
        dStack_f0 = 0.0;
        uStack_d8 = 0;
        dStack_e0 = 0.0;
        dStack_f8 = 0.0;
        dStack_100 = 0.0;
        uStack_d0 = 0xc000000000000000;
        if (uVar11 >> 0x3e == 2) {
          lVar13 = *(long *)(puVar8 + 0x10);
          lVar16 = *(long *)(puVar8 + 0x18);
          func_0x000107c5ec30();
          puVar15 = puVar7;
          puVar9 = puVar7;
          if (puVar7 != (undefined1 *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar13,(long)puVar15)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102ea96b4);
              (*pcVar2)();
            }
            puVar9 = puVar7 + (lVar13 - (long)puVar15);
          }
          puVar14 = (undefined1 *)(lVar16 - lVar13);
          if (SBORROW8(lVar16,lVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ea950c);
            (*pcVar2)();
          }
LAB_102ea955c:
          func_0x000107c5ec38();
          puVar7 = puVar15;
          if (puVar9 == (undefined1 *)0x0) goto LAB_102ea957c;
          if ((long)puVar14 <= (long)puVar15) {
            puVar15 = puVar14;
          }
          puVar15 = puVar15 + (long)puVar9;
        }
        else {
          lVar16 = (long)(int)puVar8;
          puVar14 = (undefined1 *)(lVar13 - lVar16);
          if (lVar13 < lVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ea96b0);
            (*pcVar2)();
          }
          func_0x000107c5ec30();
          if (puVar7 != (undefined1 *)0x0) {
            puVar15 = puVar7;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar16,(long)puVar15)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102ea96b8);
              (*pcVar2)();
            }
            puVar9 = puVar7 + (lVar16 - (long)puVar15);
            goto LAB_102ea955c;
          }
          func_0x000107c5ec38();
          puVar9 = (undefined1 *)0x0;
LAB_102ea957c:
          puVar15 = (undefined1 *)0x0;
        }
        FUN_102ea96bc();
LAB_102ea95a0:
        func_0x00010006ae80(puVar9,puVar15,&uStack_c0,0,100,0,&UNK_1105e38f8,puVar7);
        func_0x00010006c090(puVar8,uVar11);
        func_0x000100ee9068(&uStack_c0);
        dVar21 = dStack_e0;
        dVar20 = dStack_e8;
        dVar17 = dStack_f0;
        dVar19 = dStack_f8;
        dVar18 = dStack_100;
        func_0x00010006c090(uStack_d8,uStack_d0);
        if (dVar18 <= 0.0) {
          dVar18 = 15.0;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 5.0;
        }
        if (dVar17 <= 0.0) {
          dVar17 = 512.0;
        }
        if (dVar20 <= 0.0) {
          dVar20 = 2.0;
        }
        bVar3 = false;
        bVar4 = true;
        bVar5 = false;
        if (dVar21 <= 1.0) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(dVar21)) {
            bVar3 = dVar21 < 0.0;
            bVar4 = dVar21 == 0.0;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          dVar21 = 0.8;
        }
        goto LAB_102ea95e4;
      }
      if (uVar12 == 0) {
        if ((uVar11 & 0xff000000000000) != 0) {
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
          uStack_d8 = 0;
          dStack_e0 = 0.0;
          dStack_f8 = 0.0;
          dStack_100 = 0.0;
          uStack_d0 = 0xc000000000000000;
          auStack_116[0] = SUB81(puVar8,0);
          auStack_116[1] = (undefined1)((ulong)puVar8 >> 8);
          auStack_116[2] = (undefined1)((ulong)puVar8 >> 0x10);
          auStack_116[3] = (undefined1)((ulong)puVar8 >> 0x18);
          uStack_112 = (undefined1)((ulong)puVar8 >> 0x20);
          uStack_111 = (undefined1)((ulong)puVar8 >> 0x28);
          uStack_110 = (undefined1)((ulong)puVar8 >> 0x30);
          uStack_10f = (undefined1)((ulong)puVar8 >> 0x38);
          uStack_10e = (undefined1)uVar11;
          uStack_10d = (undefined1)(uVar11 >> 8);
          uStack_10c = (undefined1)(uVar11 >> 0x10);
          uStack_10b = (undefined1)(uVar11 >> 0x18);
          uStack_10a = (undefined1)(uVar11 >> 0x20);
          puVar15 = auStack_116 + (uVar11 >> 0x30 & 0xff);
          uStack_109 = (undefined1)(uVar11 >> 0x28);
          FUN_102ea96bc();
          puVar9 = auStack_116;
          goto LAB_102ea95a0;
        }
      }
      else if ((int)puVar8 != lVar13) goto LAB_102ea94b4;
LAB_102ea95d8:
      func_0x00010006c090(puVar8,uVar11);
    }
  }
  dVar17 = 512.0;
  dVar21 = 0.8;
LAB_102ea95e4:
  *param_1 = dVar18;
  param_1[1] = dVar19;
  param_1[2] = dVar17;
  param_1[3] = dVar20;
  param_1[4] = dVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112f26330 == (undefined *)0x0) {
    puVar10 = &DAT_10db61810;
    func_0x000107c61520(&DAT_10db61810,&UNK_1105e38f8);
    puRam0000000112f26330 = puVar10;
    return;
  }
  return;
}



/* Entry: 102ea96bc; end: 102ea96fb;  */

void FUN_102ea96bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db61810;
  func_0x000107c61520(&DAT_10db61810,&UNK_1105e38f8);
  puRam0000000112f26330 = puVar1;
  return;
}



/* Entry: 102ea96fc; end: 102ea970f;  */

void FUN_102ea96fc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105e3378;
  if (lRam0000000112f26338 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f26338 = param_1;
  }
  return;
}



/* Entry: 102ea9710; end: 102ea9753;  */

void FUN_102ea9710(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102ea9754; end: 102ea975b;  */

long FUN_102ea9754(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102ea975c; end: 102ea97b7;  */

void FUN_102ea975c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102ea97b8; end: 102ea9853;  */

void FUN_102ea97b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000102eab30c();
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    lVar5 = lVar2;
    FUN_102eaaf8c(lVar2,uVar3,lVar4);
    func_0x000107c615e8(lVar2);
    ppuStack_38 = &PTR_DAT_1105e33e0;
    alStack_58[0] = lVar5;
    uStack_40 = uVar3;
    func_0x00010032285c(0);
    func_0x000107c610f8();
    func_0x000102ead0e4(alStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea9854);
  (*pcVar1)();
}



/* Entry: 102ea9854; end: 102ea985b;  */

void FUN_102ea9854(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ea985c; end: 102ea987f;  */

void FUN_102ea985c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ea9880; end: 102ea9923;  */

void FUN_102ea9880(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000102eab30c();
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    lVar5 = lVar2;
    FUN_102eaaf8c(lVar2,uVar3,lVar4);
    func_0x000107c615e8(lVar2);
    ppuStack_38 = &PTR_DAT_1105e33e0;
    alStack_58[0] = lVar5;
    uStack_40 = uVar3;
    func_0x00010032285c(0);
    func_0x000107c610f8();
    plVar6 = alStack_58;
    func_0x000102ead0e4();
    *param_1 = (long)plVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea9924);
  (*pcVar1)();
}



/* Entry: 102ea9924; end: 102ea999f;  */

void FUN_102ea9924(undefined8 param_1)

{
  if (lRam0000000112f26368 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e738188);
  return;
}



/* Entry: 102ea99a0; end: 102ea99f3;  */

long FUN_102ea99a0(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ac760;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1[4];
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return unaff_x20;
}



/* Entry: 102ea99f4; end: 102ea9a07;  */

bool FUN_102ea99f4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102ea9a08; end: 102ea9c1b;  */

void FUN_102ea9a08(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xed000064656c6961;
  uVar3 = 0x665f65646f636e65;
  if (cVar2 != '\x01') {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x800000010f1132f0;
  uVar4 = 0xd000000000000013;
  if (cVar2 != '\0') {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ea9c1c; end: 102ea9cbb;  */

void FUN_102ea9c1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xed000064656c6961;
  uVar2 = 0x665f65646f636e65;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x800000010f1132f0;
  uVar3 = 0xd000000000000013;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 102ea9cbc; end: 102ea9e8b;  */

void FUN_102ea9cbc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x38);
  puVar5 = &UNK_1105e33c8;
  func_0x000107c613fc(&UNK_1105e33c8,0x72,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  uVar12 = puVar2[3];
  uVar11 = puVar2[2];
  uVar10 = puVar2[5];
  uVar9 = puVar2[4];
  uVar13 = *puVar2;
  *(undefined8 *)(puVar5 + 0x28) = puVar2[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar13;
  *(undefined8 *)(puVar5 + 0x38) = uVar12;
  *(undefined8 *)(puVar5 + 0x30) = uVar11;
  *(undefined8 *)(puVar5 + 0x48) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  uVar12 = puVar1[1];
  uVar11 = *puVar1;
  uVar10 = puVar1[3];
  uVar9 = puVar1[2];
  puVar5[0x70] = *(undefined1 *)(puVar1 + 4);
  *(undefined8 *)(puVar5 + 0x58) = uVar12;
  *(undefined8 *)(puVar5 + 0x50) = uVar11;
  *(undefined8 *)(puVar5 + 0x68) = uVar10;
  *(undefined8 *)(puVar5 + 0x60) = uVar9;
  puVar5[0x71] = uVar3;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar6);
  uVar6 = 0x10;
  func_0x00010488e6a4(0x10,3,0x2c,3,0,0,&UNK_10db61450,puVar5,&UNK_1105e36e8);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  func_0x000107c61574(puVar5);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102ea9e8c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar7,unaff_x22 + 0x10,&UNK_10db61460,uVar6,0x102eab2d0,uVar6,0,0,&UNK_1105e36e8);
    return;
  }
  uVar8 = 0x102eab2d0;
  func_0x000107c615b4(0x102eab2d0,uVar6);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar7;
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102ea9ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x10,uVar6,&UNK_1105e36e8,uVar8,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102ea9e8c; end: 102ea9ee7;  */

void FUN_102ea9e8c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x102ea9fc4;
  }
  else {
    *(long *)(lVar2 + 0x78) = unaff_x20;
    uVar1 = 0x102eaa000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102ea9ee8; end: 102eaa033;  */

void FUN_102ea9ee8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    uVar1 = 0x102ea9f44;
  }
  else {
    uVar1 = 0x102ea9f80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102eaa034; end: 102eaa057;  */

void FUN_102eaa034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eaa058,0,0);
  return;
}



/* Entry: 102eaa058; end: 102eaa0bb;  */

/* WARNING: Removing unreachable block (ram,0x000102eaa088) */

void FUN_102eaa058(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = (ulong)*(byte *)(unaff_x22 + 0x38);
  FUN_102eaa0bc();
  puVar5 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102eaa0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eaa0bc; end: 102eaa907;  */

undefined *
FUN_102eaa0bc(double param_1,undefined8 param_2,undefined *param_3,double *param_4,char param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined4 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulong auStack_158 [5];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  puVar9 = param_3;
  func_0x000107c5f83c();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_130 + lVar1;
  func_0x000107c5f830(puVar8);
  FUN_102eaa9d0();
  puVar20 = unaff_x21;
  if (unaff_x21 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    puStack_118 = puVar8;
    lStack_110 = lVar18;
    func_0x000107c610f8();
    func_0x000107c457a0();
    puVar11 = (undefined8 *)0x1;
    func_0x000107c52860();
    dVar28 = *(double *)(unaff_x20 + 0x10);
    uVar5 = 600;
    func_0x000107c600d0((1.0 / dVar28) * 0.5);
    uVar17 = SUB84(puVar9,0);
    uVar19 = (undefined4)((ulong)puVar9 >> 0x20);
    uStack_c8 = uVar5;
    uStack_c0 = uVar17;
    uStack_bc = uVar19;
    puStack_b8 = puVar11;
    func_0x000107c57e18(puVar4);
    puVar12 = &uStack_c8;
    uStack_c8 = uVar5;
    uStack_c0 = uVar17;
    uStack_bc = uVar19;
    puStack_b8 = puVar11;
    func_0x000107c57e14(puVar4);
    puVar6 = puVar4;
    func_0x000107c563a0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x20));
    dVar24 = *(double *)(unaff_x20 + 0x28);
    if (param_5 == '\x01') {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
      puVar6 = (undefined *)0x0;
      func_0x000102eabae0();
      puVar9 = (undefined *)0x30;
      puVar12 = (undefined8 *)0x7;
      func_0x000107c613fc();
      *(undefined8 *)(puVar6 + 0x18) = 0;
      puVar6[0x20] = 3;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x10) = uVar5;
      puVar13 = puVar6;
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa8f8);
      (*pcVar2)();
    }
    dVar24 = (1.0 / dVar28) / dVar24;
    puVar21 = (undefined *)0x0;
    lStack_120 = lVar3;
    if (param_3 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      puVar22 = puVar21;
      dStack_108 = dVar24;
      dStack_100 = dVar28;
      dStack_f8 = param_1;
      do {
        func_0x000107c60ea0();
        func_0x000107c5fd64();
        uVar5 = 600;
        func_0x000107c600d0(param_1 + ((double)puVar20 + 0.5) / dVar28);
        uStack_c0 = SUB84(puVar9,0);
        uStack_bc = (undefined4)((ulong)puVar9 >> 0x20);
        puVar11 = &uStack_c8;
        puVar7 = puVar4;
        uStack_c8 = uVar5;
        puStack_b8 = puVar12;
        func_0x000107c40798();
        puVar9 = (undefined *)0x0;
        if (puVar7 == (undefined *)0x0) {
          puVar20 = puVar9;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar20);
          func_0x000107c61654();
          uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
          uVar5 = 0x6e776f6e6b6e75;
          func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
          uVar15 = 0x67625f68746977;
          func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
          func_0x0001067a4eac(uVar14,uVar5,uVar15,1);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar15);
          func_0x000107c61654();
LAB_102eaa854:
          lVar18 = lStack_110;
          puVar8 = puStack_118;
          func_0x000107c60e9c(puVar6);
          puVar21 = puVar13;
          puVar20 = puVar13;
          goto LAB_102eaa860;
        }
        if (*(char *)(param_4 + 4) == '\x01') {
          func_0x000107c61174();
          puVar12 = puVar11;
        }
        else {
          dVar26 = param_4[2];
          dVar25 = param_4[3];
          dVar29 = *param_4;
          dVar27 = param_4[1];
          func_0x000107c61174();
          puVar9 = puVar7;
          func_0x000107c60980();
          puVar21 = puVar7;
          func_0x000107c6097c(puVar7);
          dVar24 = dVar29;
          func_0x000107c609c4(dVar29,dVar27,dVar26,dVar25);
          dVar28 = dVar29;
          func_0x000107c609c8(dVar29,dVar27,dVar26,dVar25);
          dVar23 = dVar29;
          func_0x000107c609cc(dVar29,dVar27,dVar26,dVar25);
          func_0x000107c609b0(dVar29,dVar27,dVar26,dVar25);
          func_0x000107c609d4(dVar24 * (double)(long)puVar9,dVar28 * (double)(long)puVar21,
                              dVar23 * (double)(long)puVar9,dVar29 * (double)(long)puVar21);
          puVar9 = puVar7;
          func_0x000107c60954();
          puVar12 = puVar11;
          dVar24 = dStack_108;
          param_1 = dStack_f8;
          dVar28 = dStack_100;
          if (puVar9 != (undefined *)0x0) {
            func_0x000107c61170(puVar7);
            puVar12 = puVar11;
            puVar7 = puVar9;
            dVar24 = dStack_108;
            param_1 = dStack_f8;
            dVar28 = dStack_100;
          }
        }
        dVar23 = (double)(long)(dVar24 * (double)puVar20 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa8ec);
          (*pcVar2)();
        }
        if (dVar23 <= -2147483649.0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa8f0);
          (*pcVar2)();
        }
        if (2147483648.0 <= dVar23) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa8f4);
          (*pcVar2)();
        }
        puVar21 = puVar22;
        if (puVar22 == (undefined *)0x0) {
          puVar21 = puVar7;
          func_0x000107c60980();
          puVar9 = puVar7;
          func_0x000107c6097c(puVar7);
          uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
          puVar12 = (undefined8 *)0x0;
          func_0x000102eac804();
          func_0x000107c613fc();
          FUN_102eac644(uVar5,puVar21,puVar9);
          if (puVar21 != (undefined *)0x0) {
            func_0x000107c6157c(puVar21);
            puVar22 = (undefined *)0x0;
            goto LAB_102eaa4a8;
          }
LAB_102eaa79c:
          uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
          uVar5 = 0x665f65646f636e65;
          func_0x000107c5fadc(0x665f65646f636e65,0xed000064656c6961);
          puVar8 = (undefined1 *)0x67625f68746977;
          func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
          func_0x0001067a4eac(uVar15,uVar5,puVar8,1);
          func_0x000107c61170(uVar5);
          func_0x000107c61170();
          func_0x000102eab32c();
          puVar9 = &UNK_1105e3478;
          func_0x000107c613f8(&UNK_1105e3478,puVar8,0,0);
          *puVar8 = 1;
          func_0x000107c61654();
          func_0x000107c61170(puVar7);
          puVar22 = puVar21;
          goto LAB_102eaa854;
        }
LAB_102eaa4a8:
        puVar10 = (undefined *)(ulong)(uint)(int)dVar23;
        func_0x000107c6157c(puVar22);
        puVar22 = puVar7;
        puVar9 = puVar10;
        FUN_102eac37c();
        if (((ulong)puVar22 & 1) == 0) {
          func_0x000107c61574(puVar21);
          goto LAB_102eaa79c;
        }
        if (puVar13 != (undefined *)0x0) {
          FUN_102eab57c(puVar7);
          puVar9 = puVar10;
        }
        puVar20 = puVar20 + 1;
        func_0x000107c61170(puVar7);
        func_0x000107c61574(puVar21);
        func_0x000107c60e9c();
        puVar22 = puVar21;
      } while (param_3 != puVar20);
    }
    lVar18 = lStack_110;
    puVar8 = puStack_118;
    dVar24 = (double)(long)(dVar24 * (double)(long)param_3 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa8fc);
      (*pcVar2)();
    }
    if (dVar24 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa900);
      (*pcVar2)();
    }
    if (2147483648.0 <= dVar24) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eaa904);
      (*pcVar2)();
    }
    if (puVar21 != (undefined *)0x0) {
      puVar6 = (undefined *)(ulong)(uint)(int)dVar24;
      puVar20 = puVar6;
      FUN_102eac56c();
      if ((ulong)puVar9 >> 0x3c < 0xf) {
        puStack_128 = puVar13;
        if (puVar13 == (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
          uVar16 = 3;
          puVar22 = (undefined *)0xf000000000000000;
        }
        else {
          puVar22 = puVar9;
          func_0x000107c6157c(puVar13);
          FUN_102eab688(puVar6);
          func_0x000107c61574(puVar13);
          uVar16 = puVar13[0x20];
        }
        func_0x000100de78a0(puVar20,puVar9);
        func_0x000100de78a0(puVar6,puVar22);
        FUN_102eaab54(puVar20,puVar9,puVar6,puVar22,puVar8,uVar16);
        func_0x000107c61170(puVar4);
        func_0x0001000b44c0(puVar6,puVar22);
        func_0x0001000b44c0(puVar20,puVar9);
        func_0x000107c61574(puVar21);
        func_0x000107c61574(puStack_128);
        lVar3 = lStack_120;
        (**(code **)(lVar18 + 8))(puVar8,lStack_120);
        goto LAB_102eaa88c;
      }
    }
    puVar20 = *(undefined **)(unaff_x20 + 0x38);
    uVar5 = 0x665f65646f636e65;
    func_0x000107c5fadc(0x665f65646f636e65,0xed000064656c6961);
    puVar6 = (undefined *)0x67625f68746977;
    func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
    func_0x0001067a4eac(puVar20,uVar5,puVar6,1);
    func_0x000107c61170(uVar5);
    puVar22 = puVar6;
    func_0x000107c61170();
    func_0x000102eab32c();
    puVar9 = &UNK_1105e3478;
    func_0x000107c613f8(&UNK_1105e3478,puVar22,0,0);
    *puVar22 = 1;
    func_0x000107c61654();
    puVar22 = puVar13;
LAB_102eaa860:
    func_0x000107c61574(puVar21);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(puVar22);
    unaff_x21 = puVar9;
    unaff_x20 = puVar6;
    lVar3 = lStack_120;
  }
  puVar9 = unaff_x20;
  (**(code **)(lVar18 + 8))(puVar8,lVar3);
LAB_102eaa88c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    func_0x000107c60e78();
    *(undefined **)((long)auStack_158 + lVar1) = unaff_x21;
    *(undefined **)((long)auStack_158 + lVar1 + 8) = puVar20;
    *(ulong *)((long)auStack_158 + lVar1 + 0x18) =
         (ulong)&stack0xfffffffffffffff0 | 0x1000000000000000;
    *(code **)((long)auStack_158 + lVar1 + 0x20) = FUN_102eaa908;
    *(undefined **)((long)auStack_158 + lVar1 + 0x10) = puVar9;
    puVar12 = (undefined8 *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c615b8();
    *(undefined8 **)(puVar9 + 0x10) = puVar12;
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *puVar12 = puVar9;
    puVar12[1] = FUN_102eaa994;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScT5valuexvg_11034fdb8)
              (puVar8,lVar3,&UNK_1105e36e8,uVar5,PTR___ss5ErrorWS_11034ee10);
    return puVar8;
  }
  return puVar20;
}



/* Entry: 102eaa908; end: 102eaa993;  */

void FUN_102eaa908(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eaa994;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (param_1,param_2,&UNK_1105e36e8,uVar2,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102eaa994; end: 102eaa9cf;  */

void FUN_102eaa994(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eaa9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eaa9d0; end: 102eaab53;  */

undefined8 FUN_102eaa9d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *param_1;
  uStack_38 = param_1[2];
  uVar5 = param_1[1];
  dStack_40 = (double)uVar5;
  func_0x000107c60a3c(&uStack_48);
  uStack_48 = param_1[3];
  uStack_38 = param_1[5];
  dVar6 = (double)param_1[4];
  dStack_40 = dVar6;
  func_0x000107c60a3c(&uStack_48);
  dVar7 = *(double *)(unaff_x20 + 0x18);
  if (dVar6 <= *(double *)(unaff_x20 + 0x18)) {
    dVar7 = dVar6;
  }
  if (0.0 < dVar7) {
    dVar7 = (double)(long)(dVar7 * *(double *)(unaff_x20 + 0x10));
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eaab4c);
      (*pcVar1)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eaab50);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eaab54);
      (*pcVar1)();
    }
    if (1 < (long)dVar7) {
      return uVar5;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1132f0);
  puVar3 = (undefined1 *)0x67625f68746977;
  func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
  func_0x0001067a4eac(uVar4,uVar2,puVar3,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  func_0x000102eab32c();
  func_0x000107c613f8(&UNK_1105e3478,puVar3,0,0);
  *puVar3 = 0;
  func_0x000107c61654();
  return uVar5;
}



/* Entry: 102eaab54; end: 102eaae73;  */

void FUN_102eaab54(long param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                  uint param_6)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long extraout_x8;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_70 [12];
  uint uStack_64;
  
  puVar4 = (undefined1 *)0x0;
  uStack_64 = param_6;
  func_0x000107c5f83c();
  lVar13 = *(long *)(puVar4 + -8);
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f830(puVar6);
  func_0x000107c5f82c();
  (**(code **)(lVar13 + 8))(puVar6,puVar4);
  func_0x000107c5f82c();
  if (puVar5 < puVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102eaae6c);
    (*pcVar3)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001067a50dc(uVar10,(ulong)((long)puVar5 - (long)puVar6) / 1000000);
  uVar11 = 0x67625f68746977;
  uVar12 = uVar11;
  func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
  func_0x0001067a5154(uVar10,uVar12,1);
  func_0x000107c61170(uVar12);
  func_0x000107c5fadc(0x67625f68746977,0xe700000000000000);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar7 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar9 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar9,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102eaae70);
        (*pcVar3)();
      }
      uVar7 = (ulong)(iVar9 - (int)param_1);
    }
  }
  else if (uVar8 == 2) {
    uVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102eaac94);
      (*pcVar3)();
    }
  }
  else {
    uVar7 = 0;
  }
  uVar12 = 0x74756f747563;
  func_0x0001067a52c8(uVar10,uVar11,uVar7);
  func_0x000107c61170(uVar11);
  if (param_4 >> 0x3c < 0xf) {
    func_0x00010006c00c(param_3,param_4);
    uVar11 = uVar12;
    func_0x000107c5fadc(0x74756f747563,0xe600000000000000);
    func_0x0001067a5154(uVar10,uVar11,1);
    func_0x000107c61170(uVar11);
    uVar11 = uVar12;
    func_0x000107c5fadc(0x74756f747563,0xe600000000000000);
    uVar1 = (uint)(param_4 >> 0x20);
    uVar8 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar8 == 0) {
        uVar7 = param_4 >> 0x30 & 0xff;
      }
      else {
        iVar9 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar9,(int)param_3)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102eaae74);
          (*pcVar3)();
        }
        uVar7 = (ulong)(iVar9 - (int)param_3);
      }
    }
    else if (uVar8 == 2) {
      uVar7 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102eaad4c);
        (*pcVar3)();
      }
    }
    else {
      uVar7 = 0;
    }
    func_0x0001067a52c8(uVar10,uVar11,uVar7);
    func_0x000107c61170(uVar11);
    func_0x0001000b44c0(param_3,param_4);
  }
  uVar1 = uStack_64 & 0xff;
  if (uVar1 < 2) {
    uVar11 = 0xd000000000000018;
    pcVar2 = "segmentation_failed";
    if (uVar1 != 0) {
      uVar11 = 0xd000000000000013;
      pcVar2 = "erationServiceProvider";
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar7 = 0xed000064656c6961;
    uVar11 = 0x665f65646f636e65;
  }
  func_0x000107c5fadc(uVar11,uVar7);
  func_0x000107c5fadc(0x74756f747563,0xe600000000000000);
  func_0x0001067a4eac(uVar10,uVar11,uVar12,1);
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 102eaae74; end: 102eaae97;  */

void FUN_102eaae74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eaae98; end: 102eaaea3;  */

undefined8 FUN_102eaae98(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x18);
}



/* Entry: 102eaaea4; end: 102eaaf1b;  */

void FUN_102eaaea4(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eaaf1c;
  *(undefined1 *)(plVar1 + 0x10) = param_4;
  plVar1[8] = param_3;
  plVar1[9] = lVar2;
  plVar1[6] = param_1;
  plVar1[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ea9cbc,0,0);
  return;
}



/* Entry: 102eaaf1c; end: 102eaaf8b;  */

void FUN_102eaaf1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eaaf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eaaf8c; end: 102eab1c3;  */

long FUN_102eaaf8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_102ea92f8(&uStack_68,param_1,param_3);
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f113310);
  puVar1 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(uStack_68,&uStack_78,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f113350);
  func_0x000107c5fddc(uStack_60,&uStack_78,puVar2,puVar1);
  uVar3 = 0xee003d6e6f69736e;
  func_0x000107c5fb78(0x656d694478616d20,0xee003d6e6f69736e);
  func_0x000107c5fdd8(uStack_58);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c5fb78(0x6b63616279616c70,0xee003d6465657053);
  func_0x000107c5fddc(uStack_50,&uStack_78,puVar2,puVar1);
  uVar3 = 0xe90000000000003d;
  func_0x000107c5fb78(0x7974696c61757120,0xe90000000000003d);
  func_0x000107c5fdd8(uStack_48);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uStack_70);
  func_0x000107c613fc(param_2,0x40,7);
  puVar2 = PTR_PTR_1126ac760;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  *(undefined8 *)(param_2 + 0x30) = uStack_48;
  *(undefined **)(param_2 + 0x38) = puVar2;
  return param_2;
}



/* Entry: 102eab1c4; end: 102eab23f;  */

void FUN_102eab1c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x40;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x71);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eab578;
  *(undefined1 *)(plVar4 + 7) = uVar3;
  plVar4[5] = unaff_x20 + 0x20;
  plVar4[6] = unaff_x20 + 0x50;
  plVar4[3] = lVar1;
  plVar4[4] = lVar2;
  plVar4[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eaa058,0,0);
  return;
}



/* Entry: 102eab240; end: 102eab293;  */

void FUN_102eab240(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eab294;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102eaa994;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(param_1);
  return;
}



/* Entry: 102eab294; end: 102eab36b;  */

void FUN_102eab294(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eab2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eab36c; end: 102eab4d3;  */

int FUN_102eab36c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102eab3e8;
        goto LAB_102eab3cc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102eab3cc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102eab3e8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102eab4d4; end: 102eab513;  */

void FUN_102eab4d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f264c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db61544;
  func_0x000107c61520(&UNK_10db61544,&UNK_1105e3478);
  puRam0000000112f264c0 = puVar1;
  return;
}



/* Entry: 102eab514; end: 102eab577;  */

ulong FUN_102eab514(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102eab578; end: 102eab57b;  */

void FUN_102eab578(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eab2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eab57c; end: 102eab687;  */

void FUN_102eab57c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (*(char *)(unaff_x20 + 0x20) != '\x03') {
    return;
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = *(undefined **)(unaff_x20 + 0x28);
    puVar6 = puVar5;
    puVar7 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = *(undefined **)(unaff_x20 + 0x28);
      puVar7 = (undefined *)0x0;
    }
    *(undefined **)(unaff_x20 + 0x28) = puVar5;
    func_0x000107c61174();
    func_0x000107c61174(puVar7);
    func_0x000107c61170(puVar6);
    FUN_102eabe6c(param_1,puVar5);
    if (param_1 == 0) {
      func_0x000107c61170(puVar5);
      uVar4 = 1;
    }
    else {
      uVar2 = param_1;
      FUN_102eab9e0();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(param_1);
      if ((uVar2 & 1) != 0) {
        return;
      }
      uVar4 = 2;
    }
  }
  *(undefined1 *)(unaff_x20 + 0x20) = uVar4;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 102eab688; end: 102eab727;  */

undefined1  [16] FUN_102eab688(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  if (*(char *)(unaff_x20 + 0x20) == '\x03') {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c6157c(lVar2);
      FUN_102eac56c(param_1);
      func_0x000107c61574(lVar2);
      if (param_2 >> 0x3c < 0xf) goto LAB_102eab70c;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    }
    *(undefined1 *)(unaff_x20 + 0x20) = 2;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    func_0x000107c61574(uVar1);
  }
  param_1 = 0;
  param_2 = 0xf000000000000000;
LAB_102eab70c:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 102eab728; end: 102eab73b;  */

bool FUN_102eab728(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102eab73c; end: 102eab967;  */

void FUN_102eab73c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010f1132b0;
  uVar4 = 0xd000000000000013;
  if (cVar3 != '\x01') {
    uVar1 = 0xed000064656c6961;
    uVar4 = 0x665f65646f636e65;
  }
  uVar2 = 0x800000010f1132d0;
  uVar5 = 0xd000000000000018;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}


