/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019a8534; end: 1019a8647;  */

void FUN_1019a8534(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined *in_x4;
  undefined8 in_x5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 *unaff_x20;
  ulong uVar20;
  undefined *unaff_x21;
  undefined *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long alStack_220 [12];
  undefined8 uStack_1c0;
  long alStack_1b8 [22];
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *apuStack_f0 [2];
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  ppuVar15 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)unaff_x20[3];
  puStack_50 = (undefined8 *)0x0;
  func_0x000107c61174();
  (*param_1)();
  if (puStack_50 != (undefined8 *)0x0) {
    unaff_x20 = puStack_50;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar4 = unaff_x20;
    func_0x0001055b117c();
    puVar5 = unaff_x20;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar22 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    unaff_x21 = &UNK_110422190;
    func_0x000107c613f8(&UNK_110422190,puVar5,0,0);
    *puVar5 = puVar4;
    puVar5[1] = puVar22;
    puVar5[2] = ppuVar15;
    func_0x000107c61654();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(unaff_x20);
    puVar3 = unaff_x20;
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_58 = FUN_1019a8648;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = (undefined8 *)*unaff_x20;
  puVar4 = (undefined8 *)0x112de1700;
  puStack_108 = unaff_x21;
  uStack_f8 = extraout_x8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001000285a8(0x112de1700,&UNK_10d9a93f8);
  puVar22 = (undefined8 *)puVar4[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(puVar22[8] + 0xf & 0xfffffffffffffff0);
  lVar2 = -extraout_x8_00;
  puVar28 = (undefined8 *)((long)alStack_1b8 + lVar2 + 0xa8);
  apuStack_f0[0] = (undefined8 *)0x0;
  puVar25 = (undefined8 *)unaff_x20[3];
  uVar11 = *puVar3;
  uVar19 = puVar3[1];
  puVar6 = PTR_PTR_1126a8210;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar11,uVar19);
  puVar13 = puVar25;
  func_0x0001055b11a0(puVar6,puVar25,uVar11,apuStack_f0);
  func_0x000107c61170(uVar11);
  puVar5 = puStack_100;
  puVar9 = puVar6;
  if (apuStack_f0[0] == (undefined8 *)0x0) {
    puVar7 = puVar25;
    if (puVar6 == (undefined *)0x0) {
      puVar8 = apuStack_f0[0];
      func_0x0001019a9d3c();
      unaff_x21 = &UNK_110421d20;
      lVar14 = 0;
      ppuVar15 = (undefined8 **)0x0;
      func_0x000107c613f8();
      puVar9 = unaff_x21;
      func_0x000107c61654();
      puVar21 = unaff_x21;
    }
    else {
      FUN_1019a98fc(puVar6,puVar3[4]);
      uStack_d0 = unaff_x20[4];
      puStack_c0 = puVar5;
      puStack_e0 = puVar25;
      puStack_d8 = puVar3;
      puStack_c8 = puVar6;
      (*(code *)puVar22[0xd])
                (puVar28,*(undefined4 *)
                          PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
                 ,puVar4);
      lVar14 = 0x1019a9ddc;
      in_x4 = &UNK_1104e5830;
      ppuVar15 = apuStack_f0;
      puVar8 = puVar28;
      func_0x000107c5fdc8(uStack_f8);
      func_0x000107c61170();
      puVar21 = puStack_108;
    }
  }
  else {
    puVar7 = apuStack_f0[0];
    func_0x000107c61174();
    func_0x000107c61174();
    puVar5 = puVar7;
    func_0x0001055b117c();
    puVar8 = puVar7;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar22 = puVar8;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    unaff_x21 = &UNK_110422190;
    lVar14 = 0;
    ppuVar15 = (undefined8 **)0x0;
    func_0x000107c613f8();
    *puVar8 = puVar5;
    puVar8[1] = puVar22;
    puVar8[2] = puVar13;
    func_0x000107c61654();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170();
    puVar21 = unaff_x21;
    puVar3 = puVar13;
    puVar4 = puVar25;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    func_0x000107c60e78();
    *(undefined8 *)((long)alStack_1b8 + lVar2 + 0x38) = unaff_d9;
    *(undefined8 *)((long)alStack_1b8 + lVar2 + 0x40) = unaff_d8;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x48) = puVar28;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x50) = unaff_x20;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x58) = puVar4;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x60) = puVar3;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x68) = puVar22;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x70) = puVar21;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x78) = puVar6;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x80) = unaff_x21;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x88) = puVar5;
    *(undefined8 **)((long)alStack_1b8 + lVar2 + 0x90) = puVar7;
    *(undefined1 ***)((long)alStack_1b8 + lVar2 + 0x98) = &puStack_60;
    *(code **)((long)alStack_1b8 + lVar2 + 0xa0) = FUN_1019a8890;
    *(undefined8 *)((long)alStack_220 + lVar2 + 0x50) = in_x5;
    *(undefined8 ***)((long)alStack_220 + lVar2 + 0x58) = ppuVar15;
    *(undefined8 **)((long)alStack_220 + lVar2 + 0x18) = puVar8;
    *(undefined **)((long)alStack_220 + lVar2 + 8) = puVar9;
    lVar10 = 0;
    func_0x000107c5f7fc();
    *(long *)((long)alStack_220 + lVar2 + 0x30) = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    *(long *)((long)alStack_220 + lVar2 + 0x48) = lVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
    lVar17 = (long)alStack_220 + (lVar2 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    *(long *)((long)alStack_220 + lVar2 + 0x28) = lVar17;
    lVar10 = 0;
    func_0x000107c5f824();
    lVar16 = *(long *)(lVar10 + -8);
    *(long *)((long)alStack_220 + lVar2 + 0x38) = lVar16;
    *(long *)((long)alStack_220 + lVar2 + 0x40) = lVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
    lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    *(long *)((long)alStack_220 + lVar2 + 0x20) = lVar17;
    lVar10 = 0x112de1708;
    func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
    lVar16 = *(long *)(lVar10 + -8);
    lVar27 = *(long *)(lVar16 + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar27 + 0xfU & 0xfffffffffffffff0);
    lVar17 = lVar17 - extraout_x8_03;
    uVar11 = *(undefined8 *)(lVar14 + 0x28);
    func_0x000107c5fc48(uVar11,PTR___sSSN_11034da80);
    *(undefined8 *)((long)alStack_220 + lVar2) = uVar11;
    pcVar18 = *(code **)(lVar16 + 0x10);
    *(code **)((long)alStack_220 + lVar2 + 0x10) = pcVar18;
    (*pcVar18)(lVar17,puVar9,lVar10);
    uVar26 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar23 = uVar26 + 0x10 & (uVar26 ^ 0xffffffffffffffff);
    uVar20 = lVar27 + uVar23 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_110421c50;
    func_0x000107c613fc(&UNK_110421c50,uVar20 + 0x10,uVar26 | 7);
    pcVar18 = *(code **)(lVar16 + 0x20);
    (*pcVar18)(puVar6 + uVar23,lVar17,lVar10);
    *(undefined **)(puVar6 + uVar20) = in_x4;
    *(undefined8 *)(puVar6 + uVar20 + 8) = *(undefined8 *)((long)alStack_220 + lVar2 + 0x50);
    *(undefined8 *)((long)alStack_1b8 + lVar2 + 0x20) = 0x1019a9fa8;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x28) = puVar6;
    *(undefined **)((long)alStack_1b8 + lVar2) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)alStack_1b8 + lVar2 + 8) = 0x42000000;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x10) = &UNK_1000f6b44;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x18) = &UNK_110421c68;
    lVar14 = (long)alStack_1b8 + lVar2;
    func_0x000107c60bc4(lVar14);
    uVar11 = *(undefined8 *)((long)alStack_1b8 + lVar2 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(uVar11);
    uVar11 = *(undefined8 *)((long)alStack_220 + lVar2 + 0x18);
    uVar19 = *(undefined8 *)((long)alStack_220 + lVar2);
    func_0x0001055add24(uVar11,uVar19,*(undefined8 *)((long)alStack_220 + lVar2 + 0x58),lVar14);
    func_0x000107c61180();
    *(undefined8 *)((long)alStack_220 + lVar2 + 0x18) = uVar11;
    func_0x000107c60bd0(lVar14);
    func_0x000107c61170(uVar19);
    (**(code **)((long)alStack_220 + lVar2 + 0x10))
              (lVar17,*(undefined8 *)((long)alStack_220 + lVar2 + 8),lVar10);
    puVar6 = &UNK_110421ca0;
    func_0x000107c613fc(&UNK_110421ca0,uVar20 + 0x10,uVar26 | 7);
    (*pcVar18)(puVar6 + uVar23,lVar17,lVar10);
    *(undefined **)(puVar6 + uVar20) = in_x4;
    *(undefined8 *)(puVar6 + uVar20 + 8) = *(undefined8 *)((long)alStack_220 + lVar2 + 0x50);
    *(code **)((long)alStack_1b8 + lVar2 + 0x20) = FUN_1019a9e88;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x28) = puVar6;
    *(undefined **)((long)alStack_1b8 + lVar2) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)alStack_1b8 + lVar2 + 8) = 0x42000000;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x10) = &UNK_1000b0c7c;
    *(undefined **)((long)alStack_1b8 + lVar2 + 0x18) = &UNK_110421cb8;
    lVar14 = (long)alStack_1b8 + lVar2;
    func_0x000107c60bc4(lVar14);
    func_0x000107c61174(in_x4);
    uVar24 = *(undefined8 *)((long)alStack_220 + lVar2 + 0x20);
    func_0x000107c5f808(uVar24);
    *(undefined **)((long)&uStack_1c0 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar11 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar12 = uVar11;
    func_0x0001001c7f30();
    uVar19 = *(undefined8 *)((long)alStack_220 + lVar2 + 0x28);
    uVar1 = *(undefined8 *)((long)alStack_220 + lVar2 + 0x30);
    func_0x000107c60264(uVar19,(long)&uStack_1c0 + lVar2,uVar11,uVar12,uVar1,in_x4);
    func_0x000107c5ffe8(0,uVar24,uVar19,lVar14);
    func_0x000107c60bd0(lVar14);
    (**(code **)(*(long *)((long)alStack_220 + lVar2 + 0x48) + 8))(uVar19,uVar1);
    (**(code **)(*(long *)((long)alStack_220 + lVar2 + 0x38) + 8))
              (uVar24,*(undefined8 *)((long)alStack_220 + lVar2 + 0x40));
    func_0x000107c61574(*(undefined8 *)((long)alStack_1b8 + lVar2 + 0x28));
    puVar6 = &UNK_110421cf0;
    func_0x000107c613fc(&UNK_110421cf0,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)((long)alStack_220 + lVar2 + 0x18);
    func_0x000107c5fda8(FUN_1019a9ee8,puVar6,lVar10);
    return;
  }
  return;
}



/* Entry: 1019a8648; end: 1019a888f;  */

void FUN_1019a8648(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined *in_x4;
  undefined8 in_x5;
  undefined8 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 *unaff_x20;
  ulong uVar19;
  undefined *unaff_x21;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long alStack_1d0 [12];
  undefined8 uStack_170;
  long alStack_168 [22];
  undefined8 *apuStack_a0 [2];
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined8 *)*unaff_x20;
  puVar3 = (undefined8 *)0x112de1700;
  func_0x0001000285a8(0x112de1700,&UNK_10d9a93f8);
  puVar20 = (undefined8 *)puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(puVar20[8] + 0xf & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar26 = (undefined8 *)((long)alStack_168 + lVar2 + 0xa8);
  apuStack_a0[0] = (undefined8 *)0x0;
  puVar23 = (undefined8 *)unaff_x20[3];
  uVar9 = *param_2;
  uVar18 = param_2[1];
  puVar4 = PTR_PTR_1126a8210;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar9,uVar18);
  puVar11 = puVar23;
  func_0x0001055b11a0(puVar4,puVar23,uVar9,apuStack_a0);
  func_0x000107c61170(uVar9);
  puVar7 = puVar4;
  if (apuStack_a0[0] == (undefined8 *)0x0) {
    puVar5 = puVar23;
    if (puVar4 == (undefined *)0x0) {
      puVar6 = apuStack_a0[0];
      func_0x0001019a9d3c();
      unaff_x21 = &UNK_110421d20;
      lVar12 = 0;
      ppuVar13 = (undefined8 **)0x0;
      func_0x000107c613f8();
      puVar7 = unaff_x21;
      func_0x000107c61654();
    }
    else {
      FUN_1019a98fc(puVar4,param_2[4]);
      uStack_80 = unaff_x20[4];
      puStack_90 = puVar23;
      puStack_88 = param_2;
      puStack_78 = puVar4;
      puStack_70 = puVar14;
      (*(code *)puVar20[0xd])
                (puVar26,*(undefined4 *)
                          PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
                 ,puVar3);
      lVar12 = 0x1019a9ddc;
      in_x4 = &UNK_1104e5830;
      ppuVar13 = apuStack_a0;
      puVar6 = puVar26;
      func_0x000107c5fdc8(param_1);
      func_0x000107c61170();
    }
  }
  else {
    puVar5 = apuStack_a0[0];
    func_0x000107c61174();
    func_0x000107c61174();
    puVar14 = puVar5;
    func_0x0001055b117c();
    puVar6 = puVar5;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar20 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    unaff_x21 = &UNK_110422190;
    lVar12 = 0;
    ppuVar13 = (undefined8 **)0x0;
    func_0x000107c613f8();
    *puVar6 = puVar14;
    puVar6[1] = puVar20;
    puVar6[2] = puVar11;
    func_0x000107c61654();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170();
    param_2 = puVar11;
    puVar3 = puVar23;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_168 + lVar2 + 0x38) = unaff_d9;
  *(undefined8 *)((long)alStack_168 + lVar2 + 0x40) = unaff_d8;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x48) = puVar26;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x50) = unaff_x20;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x58) = puVar3;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x60) = param_2;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x68) = puVar20;
  *(undefined **)((long)alStack_168 + lVar2 + 0x70) = unaff_x21;
  *(undefined **)((long)alStack_168 + lVar2 + 0x78) = puVar4;
  *(undefined **)((long)alStack_168 + lVar2 + 0x80) = unaff_x21;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x88) = puVar14;
  *(undefined8 **)((long)alStack_168 + lVar2 + 0x90) = puVar5;
  *(undefined1 **)((long)alStack_168 + lVar2 + 0x98) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_168 + lVar2 + 0xa0) = FUN_1019a8890;
  *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x50) = in_x5;
  *(undefined8 ***)((long)alStack_1d0 + lVar2 + 0x58) = ppuVar13;
  *(undefined8 **)((long)alStack_1d0 + lVar2 + 0x18) = puVar6;
  *(undefined **)((long)alStack_1d0 + lVar2 + 8) = puVar7;
  lVar8 = 0;
  func_0x000107c5f7fc();
  *(long *)((long)alStack_1d0 + lVar2 + 0x30) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)((long)alStack_1d0 + lVar2 + 0x48) = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar16 = (long)alStack_1d0 + (lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  *(long *)((long)alStack_1d0 + lVar2 + 0x28) = lVar16;
  lVar8 = 0;
  func_0x000107c5f824();
  lVar15 = *(long *)(lVar8 + -8);
  *(long *)((long)alStack_1d0 + lVar2 + 0x38) = lVar15;
  *(long *)((long)alStack_1d0 + lVar2 + 0x40) = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(long *)((long)alStack_1d0 + lVar2 + 0x20) = lVar16;
  lVar8 = 0x112de1708;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  lVar15 = *(long *)(lVar8 + -8);
  lVar25 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar25 + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_02;
  uVar9 = *(undefined8 *)(lVar12 + 0x28);
  func_0x000107c5fc48(uVar9,PTR___sSSN_11034da80);
  *(undefined8 *)((long)alStack_1d0 + lVar2) = uVar9;
  pcVar17 = *(code **)(lVar15 + 0x10);
  *(code **)((long)alStack_1d0 + lVar2 + 0x10) = pcVar17;
  (*pcVar17)(lVar16,puVar7,lVar8);
  uVar24 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar21 = uVar24 + 0x10 & (uVar24 ^ 0xffffffffffffffff);
  uVar19 = lVar25 + uVar21 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110421c50;
  func_0x000107c613fc(&UNK_110421c50,uVar19 + 0x10,uVar24 | 7);
  pcVar17 = *(code **)(lVar15 + 0x20);
  (*pcVar17)(puVar4 + uVar21,lVar16,lVar8);
  *(undefined **)(puVar4 + uVar19) = in_x4;
  *(undefined8 *)(puVar4 + uVar19 + 8) = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x50);
  *(undefined8 *)((long)alStack_168 + lVar2 + 0x20) = 0x1019a9fa8;
  *(undefined **)((long)alStack_168 + lVar2 + 0x28) = puVar4;
  *(undefined **)((long)alStack_168 + lVar2) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)alStack_168 + lVar2 + 8) = 0x42000000;
  *(undefined **)((long)alStack_168 + lVar2 + 0x10) = &UNK_1000f6b44;
  *(undefined **)((long)alStack_168 + lVar2 + 0x18) = &UNK_110421c68;
  lVar12 = (long)alStack_168 + lVar2;
  func_0x000107c60bc4(lVar12);
  uVar9 = *(undefined8 *)((long)alStack_168 + lVar2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(uVar9);
  uVar9 = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x18);
  uVar18 = *(undefined8 *)((long)alStack_1d0 + lVar2);
  func_0x0001055add24(uVar9,uVar18,*(undefined8 *)((long)alStack_1d0 + lVar2 + 0x58),lVar12);
  func_0x000107c61180();
  *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x18) = uVar9;
  func_0x000107c60bd0(lVar12);
  func_0x000107c61170(uVar18);
  (**(code **)((long)alStack_1d0 + lVar2 + 0x10))
            (lVar16,*(undefined8 *)((long)alStack_1d0 + lVar2 + 8),lVar8);
  puVar4 = &UNK_110421ca0;
  func_0x000107c613fc(&UNK_110421ca0,uVar19 + 0x10,uVar24 | 7);
  (*pcVar17)(puVar4 + uVar21,lVar16,lVar8);
  *(undefined **)(puVar4 + uVar19) = in_x4;
  *(undefined8 *)(puVar4 + uVar19 + 8) = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x50);
  *(code **)((long)alStack_168 + lVar2 + 0x20) = FUN_1019a9e88;
  *(undefined **)((long)alStack_168 + lVar2 + 0x28) = puVar4;
  *(undefined **)((long)alStack_168 + lVar2) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)alStack_168 + lVar2 + 8) = 0x42000000;
  *(undefined **)((long)alStack_168 + lVar2 + 0x10) = &UNK_1000b0c7c;
  *(undefined **)((long)alStack_168 + lVar2 + 0x18) = &UNK_110421cb8;
  lVar12 = (long)alStack_168 + lVar2;
  func_0x000107c60bc4(lVar12);
  func_0x000107c61174(in_x4);
  uVar22 = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x20);
  func_0x000107c5f808(uVar22);
  *(undefined **)((long)&uStack_170 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = uVar9;
  func_0x0001001c7f30();
  uVar18 = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x28);
  uVar1 = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x30);
  func_0x000107c60264(uVar18,(long)&uStack_170 + lVar2,uVar9,uVar10,uVar1,in_x4);
  func_0x000107c5ffe8(0,uVar22,uVar18,lVar12);
  func_0x000107c60bd0(lVar12);
  (**(code **)(*(long *)((long)alStack_1d0 + lVar2 + 0x48) + 8))(uVar18,uVar1);
  (**(code **)(*(long *)((long)alStack_1d0 + lVar2 + 0x38) + 8))
            (uVar22,*(undefined8 *)((long)alStack_1d0 + lVar2 + 0x40));
  func_0x000107c61574(*(undefined8 *)((long)alStack_168 + lVar2 + 0x28));
  puVar4 = &UNK_110421cf0;
  func_0x000107c613fc(&UNK_110421cf0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)((long)alStack_1d0 + lVar2 + 0x18);
  func_0x000107c5fda8(FUN_1019a9ee8,puVar4,lVar8);
  return;
}



/* Entry: 1019a8890; end: 1019a8c33;  */

void FUN_1019a8890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar1 = 0;
  uStack_108 = param_1;
  uStack_f8 = param_2;
  uStack_c0 = param_6;
  uStack_b8 = param_4;
  func_0x000107c5f7fc();
  lStack_c8 = *(long *)(lVar1 + -8);
  lStack_e0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar6 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_e8 = lVar6;
  func_0x000107c5f824();
  lStack_d8 = *(long *)(lVar1 + -8);
  lStack_d0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112de1708;
  lStack_f0 = lVar6;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  lVar7 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  pcStack_100 = *(code **)(lVar7 + 0x10);
  uStack_110 = uVar2;
  (*pcStack_100)(lVar6,param_1,lVar1);
  uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar10 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  uVar8 = lVar12 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110421c50;
  func_0x000107c613fc(&UNK_110421c50,uVar8 + 0x10,uVar11 | 7);
  pcVar9 = *(code **)(lVar7 + 0x20);
  (*pcVar9)(puVar3 + uVar10,lVar6,lVar1);
  *(undefined8 *)(puVar3 + uVar8) = param_5;
  *(undefined8 *)(puVar3 + uVar8 + 8) = uStack_c0;
  pcStack_88 = (code *)0x1019a9fa8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110421c68;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  uVar2 = uStack_110;
  uVar5 = uStack_f8;
  func_0x0001055add24(uStack_f8,uStack_110,uStack_b8,ppuVar4);
  func_0x000107c61180();
  uStack_f8 = uVar5;
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  (*pcStack_100)(lVar6,uStack_108,lVar1);
  puVar3 = &UNK_110421ca0;
  func_0x000107c613fc(&UNK_110421ca0,uVar8 + 0x10,uVar11 | 7);
  (*pcVar9)(puVar3 + uVar10,lVar6,lVar1);
  *(undefined8 *)(puVar3 + uVar8) = param_5;
  *(undefined8 *)(puVar3 + uVar8 + 8) = uStack_c0;
  pcStack_88 = FUN_1019a9e88;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000b0c7c;
  puStack_90 = &UNK_110421cb8;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_5);
  lVar6 = lStack_f0;
  func_0x000107c5f808(lStack_f0);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar2 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar5 = uVar2;
  func_0x0001001c7f30();
  lVar12 = lStack_e0;
  lVar7 = lStack_e8;
  func_0x000107c60264(lStack_e8,&puStack_b0,uVar2,uVar5,lStack_e0,param_5);
  func_0x000107c5ffe8(0,lVar6,lVar7,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_c8 + 8))(lVar7,lVar12);
  (**(code **)(lStack_d8 + 8))(lVar6,lStack_d0);
  func_0x000107c61574(puStack_80);
  puVar3 = &UNK_110421cf0;
  func_0x000107c613fc(&UNK_110421cf0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uStack_f8;
  func_0x000107c5fda8(FUN_1019a9ee8,puVar3,lVar1);
  return;
}



/* Entry: 1019a8c34; end: 1019a8e13;  */

/* WARNING: Removing unreachable block (ram,0x0001019a8d1c) */
/* WARNING: Removing unreachable block (ram,0x0001019a8ca8) */

void FUN_1019a8c34(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  long lVar8;
  long alStack_a0 [2];
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined1 uStack_60;
  
  lVar2 = 0x112de1710;
  func_0x0001000285a8(0x112de1710,&UNK_10d9a9410);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_2;
  FUN_1019a97ac();
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    plStack_68 = (long *)0x0;
    ppuStack_70 = (undefined **)0x0;
    lStack_88 = 0;
    plStack_90 = (long *)0x0;
    uStack_60 = 1;
  }
  else {
    func_0x0001055b1bb4();
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a8e14);
      (*pcVar1)();
    }
    uVar4 = 0;
    alStack_a0[0] = lVar3;
    FUN_1019a82cc(0);
    func_0x000107c6157c(lVar3);
    plVar5 = alStack_a0;
    FUN_1019ade40(plVar5,param_2,uVar4,&PTR_DAT_110421be8);
    uVar4 = 0x112de1718;
    func_0x0001000285a8(0x112de1718,&UNK_10d9a9418);
    ppuStack_70 = &PTR_DAT_110422350;
    plStack_90 = plVar5;
    lStack_88 = param_2;
    uStack_78 = uVar4;
    func_0x000107c61434(plVar5);
    uVar4 = 0x112de1720;
    func_0x0001000285a8(0x112de1720,&UNK_10d9a9420);
    uVar6 = uVar4;
    FUN_1019a9ef0();
    plVar7 = plVar5;
    func_0x000107c5fc88(plVar5,uVar4,uVar6);
    func_0x000107c6142c(plVar5);
    func_0x000107c61574(lVar3);
    uStack_60 = 0;
    plStack_68 = plVar7;
  }
  uVar4 = 0x112de1708;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  func_0x000107c5fdb0((long)alStack_a0 - extraout_x8,&plStack_90,uVar4);
  (**(code **)(lVar8 + 8))((long)alStack_a0 - extraout_x8,lVar2);
  return;
}



/* Entry: 1019a8e14; end: 1019a8ecf;  */

void FUN_1019a8e14(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    func_0x00010035a314();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_1019a9280();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x0001019a9640(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_1019a9150(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 1019a8ed0; end: 1019a9047;  */

void FUN_1019a8ed0(long param_1,undefined8 param_2,byte param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      iVar3 = *param_5;
      func_0x0001055b1394(param_4,param_1,iVar3);
      iVar6 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a8fb0);
        (*pcVar5)();
      }
    }
    else if (param_3 == 1) {
      iVar3 = *param_5;
      func_0x0001055b1404(param_1,param_4,iVar3);
      iVar6 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a8f28);
        (*pcVar5)();
      }
    }
    else {
      func_0x000107c5fadc();
      iVar3 = *param_5;
      func_0x0001055b147c(param_4,param_1,iVar3);
      func_0x000107c61170(param_1);
      iVar6 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a9010);
        (*pcVar5)();
      }
    }
  }
  else if (param_3 == 3) {
    func_0x000107c5ee20();
    iVar3 = *param_5;
    func_0x0001055b1584(param_4,param_1,iVar3);
    func_0x000107c61170(param_1);
    iVar6 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a8fe0);
      (*pcVar5)();
    }
  }
  else {
    if (param_3 == 4) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) {
        return;
      }
      puVar8 = (undefined1 *)(param_1 + 0x30);
      do {
        uVar1 = *(undefined8 *)(puVar8 + -0x10);
        uVar2 = *(undefined8 *)(puVar8 + -8);
        uVar4 = *puVar8;
        FUN_1019a9d7c(uVar1,uVar2,uVar4);
        FUN_1019a8ed0(uVar1,uVar2,uVar4,param_4,param_5);
        func_0x0001019a9dac(uVar1,uVar2,uVar4);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 0x18;
      } while (lVar7 != 0);
      return;
    }
    iVar3 = *param_5;
    func_0x0001055b1690(param_4,iVar3);
    iVar6 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a9048);
      (*pcVar5)();
    }
  }
  *param_5 = iVar6;
  return;
}



/* Entry: 1019a9048; end: 1019a913b;  */

/* WARNING: Removing unreachable block (ram,0x0001019a9098) */

void FUN_1019a9048(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined **ppuVar4;
  
  if (((*(byte *)((long)param_2 + 0x19) & 1) == 0) || ((*(byte *)(unaff_x20 + 0x28) & 1) != 0)) {
    lVar2 = *param_2;
    FUN_1019a9994(lVar2,param_2[1],param_2[2],(char)param_2[3],param_2[4]);
    if (unaff_x21 == 0) {
      lVar1 = lVar2;
      FUN_1019a97ac();
      if (lVar1 == 0) {
        lVar3 = 0;
        ppuVar4 = (undefined **)0x0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        lVar3 = 0x112de16d8;
        func_0x0001000285a8(0x112de16d8,&UNK_10d9a93e8);
        ppuVar4 = &PTR_DAT_110422350;
      }
      func_0x000107c61170(lVar2);
      *param_1 = lVar1;
      param_1[3] = lVar3;
      param_1[4] = (long)ppuVar4;
    }
  }
  else {
    FUN_1019a9cbc();
    func_0x000107c613f8(&UNK_110422118,param_2,0,0);
    func_0x000107c61654();
  }
  return;
}



/* Entry: 1019a913c; end: 1019a914f;  */

void FUN_1019a913c(void)

{
  FUN_1019a8648();
  return;
}



/* Entry: 1019a9150; end: 1019a927f;  */

void FUN_1019a9150(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a9214);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1019a93dc(lVar5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a91e0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1019a9280();
    lVar5 = *unaff_x20;
    goto joined_r0x0001019a9228;
  }
  lVar5 = *unaff_x20;
joined_r0x0001019a9228:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a9280);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1019a9280; end: 1019a93db;  */

void FUN_1019a9280(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112de16f8,&UNK_10d9a93f0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1019a935c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_1019a935c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1019a93dc);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1019a93b4;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1019a93b4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1019a93dc; end: 1019a97ab;  */

void FUN_1019a93dc(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112de16f8;
  func_0x0001000285a8(0x112de16f8,&UNK_10d9a93f0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1019a960c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019a963c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1019a960c;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019a9640);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1019a97ac; end: 1019a98fb;  */

undefined8 * FUN_1019a97ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined4 uStack_a4;
  undefined8 *puStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = (undefined8 *)0x0;
  func_0x000107c61174();
  puVar6 = param_1;
  func_0x0001055b171c();
  if (puStack_50 == (undefined8 *)0x0) {
    func_0x000107c61170(param_1);
    if ((int)puVar6 == 0) {
      func_0x0001055b17c4(param_1);
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
      FUN_1019a82cc();
      ppuVar7 = (undefined8 **)0x20;
      func_0x000107c613fc();
      puVar6[2] = param_1;
      puVar6[3] = 0;
      func_0x000107c61174(param_1);
    }
  }
  else {
    puVar6 = puStack_50;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar3 = puVar6;
    func_0x0001055b117c();
    puVar4 = puVar6;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    func_0x000107c613f8(&UNK_110422190,puVar4,0,0);
    *puVar4 = puVar3;
    puVar4[1] = puVar5;
    puVar4[2] = ppuVar7;
    func_0x000107c61654();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    param_1 = puVar6;
    func_0x000107c61170(puVar6);
    ppuVar7 = (undefined8 **)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  func_0x000107c60e78();
  uStack_a4 = 1;
  lVar8 = (long)ppuVar7[2];
  puVar6 = param_1;
  if (lVar8 != 0) {
    puVar3 = ppuVar7 + 6;
    do {
      puVar6 = (undefined8 *)puVar3[-2];
      uVar1 = puVar3[-1];
      uVar2 = *(undefined1 *)puVar3;
      FUN_1019a9d7c(puVar6,uVar1,uVar2);
      FUN_1019a8ed0(puVar6,uVar1,uVar2,param_1,&uStack_a4);
      func_0x0001019a9dac(puVar6,uVar1,uVar2);
      lVar8 = lVar8 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar8 != 0);
  }
  return puVar6;
}



/* Entry: 1019a98fc; end: 1019a9993;  */

void FUN_1019a98fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined4 uStack_54;
  
  uStack_54 = 1;
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (undefined1 *)(param_2 + 0x30);
    do {
      uVar1 = *(undefined8 *)(puVar5 + -0x10);
      uVar2 = *(undefined8 *)(puVar5 + -8);
      uVar3 = *puVar5;
      FUN_1019a9d7c(uVar1,uVar2,uVar3);
      FUN_1019a8ed0(uVar1,uVar2,uVar3,param_1,&uStack_54);
      func_0x0001019a9dac(uVar1,uVar2,uVar3);
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 0x18;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1019a9994; end: 1019a9cbb;  */

undefined *
FUN_1019a9994(undefined *param_1,undefined8 param_2,long param_3,char param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 *apuStack_98 [3];
  undefined8 *apuStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == '\x01') {
    apuStack_80[0] = (undefined8 *)0x0;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar2 = PTR_PTR_1126a8210;
    func_0x000107c610f8();
    puVar3 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x0001055b11a0(puVar2,uVar9,puVar3,apuStack_80);
    func_0x000107c61170(puVar3);
    if (apuStack_80[0] != (undefined8 *)0x0) {
      puVar4 = apuStack_80[0];
      func_0x000107c61174();
      func_0x000107c61174();
      puVar5 = puVar4;
      func_0x0001055b117c();
      puVar6 = puVar4;
      func_0x0001055b1188();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x0001019a9cfc();
      func_0x000107c613f8(&UNK_110422190,puVar6,0,0);
      *puVar6 = puVar5;
      puVar6[1] = puVar7;
      puVar6[2] = uVar9;
      func_0x000107c61654();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar2);
      goto LAB_1019a9c78;
    }
    if (puVar2 == (undefined *)0x0) {
LAB_1019a9c50:
      uVar9 = 0;
      func_0x0001019a9d3c();
      func_0x000107c613f8(&UNK_110421d20,uVar9,0,0);
      func_0x000107c61654();
      goto LAB_1019a9c78;
    }
LAB_1019a9be8:
    func_0x000107c61174();
  }
  else {
    ppuVar8 = apuStack_80;
    func_0x000107c61428(unaff_x20 + 0x10,ppuVar8,0,0);
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if ((*(long *)(lVar10 + 0x10) != 0) &&
       (lVar1 = param_3, func_0x00010035a314(), ((ulong)ppuVar8 & 1) != 0)) {
      puVar2 = *(undefined **)(*(long *)(lVar10 + 0x38) + lVar1 * 8);
      func_0x000107c61174(puVar2);
      goto LAB_1019a9be8;
    }
    apuStack_98[0] = (undefined8 *)0x0;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = PTR_PTR_1126a8210;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_1,param_2);
    func_0x0001055b11a0(puVar3,uVar9,param_1,apuStack_98);
    func_0x000107c61170(param_1);
    if (apuStack_98[0] != (undefined8 *)0x0) {
      puVar4 = apuStack_98[0];
      func_0x000107c61174();
      func_0x000107c61174();
      puVar5 = puVar4;
      func_0x0001055b117c();
      puVar6 = puVar4;
      func_0x0001055b1188();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x0001019a9cfc();
      func_0x000107c613f8(&UNK_110422190,puVar6,0,0);
      *puVar6 = puVar5;
      puVar6[1] = puVar7;
      puVar6[2] = uVar9;
      func_0x000107c61654();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      goto LAB_1019a9c78;
    }
    if (puVar3 == (undefined *)0x0) goto LAB_1019a9c50;
    func_0x000107c61428(unaff_x20 + 0x10,apuStack_98,0x21,0);
    puVar2 = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61174();
    FUN_1019a8e14(puVar3,param_3);
    func_0x000107c614a8(apuStack_98);
  }
  FUN_1019a98fc(puVar2,param_5);
  func_0x000107c61170(puVar2);
  param_1 = puVar2;
LAB_1019a9c78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  func_0x000107c60e78();
  if (puRam0000000112de16e0 == (undefined *)0x0) {
    puVar2 = &UNK_10d9a9690;
    func_0x000107c61520(&UNK_10d9a9690,&UNK_110422118);
    puRam0000000112de16e0 = puVar2;
    return puVar2;
  }
  return puRam0000000112de16e0;
}



/* Entry: 1019a9cbc; end: 1019a9d7b;  */

void FUN_1019a9cbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de16e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9690;
  func_0x000107c61520(&UNK_10d9a9690,&UNK_110422118);
  puRam0000000112de16e0 = puVar1;
  return;
}



/* Entry: 1019a9d7c; end: 1019a9e07;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1019a9d7c(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 != '\x04') {
    if (param_3 == '\x03') {
      uVar1 = (uint)(param_2 >> 0x3e);
      if (uVar1 == 1) {
        param_1 = param_2 & 0x3fffffffffffffff;
      }
      else if (uVar1 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_1);
      return;
    }
    param_1 = param_2;
    if (param_3 != '\x02') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
  return;
}



/* Entry: 1019a9e08; end: 1019a9e87;  */

void FUN_1019a9e08(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = 0x112de1708;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019a9e88; end: 1019a9e8b;  */

void FUN_1019a9e88(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0x112de1708;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_1019a8c34(unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + (uVar2 + 0xf & 0xffffffffffffff8)));
  return;
}



/* Entry: 1019a9e8c; end: 1019a9ee7;  */

void FUN_1019a9e8c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0x112de1708;
  func_0x0001000285a8(0x112de1708,&UNK_10d9a9400);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_1019a8c34(unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + (uVar2 + 0xf & 0xffffffffffffff8)));
  return;
}



/* Entry: 1019a9ee8; end: 1019a9eef;  */

void FUN_1019a9ee8(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long *plStack_40;
  undefined *puStack_38;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
    pbVar1 = (byte *)(lVar6 + 0x30);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bVar2 & 1) == 0) {
      plVar7 = *(long **)(lVar6 + 0x28);
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001055ac8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x30))();
        return;
      }
      func_0x000104bfeb48();
      pbVar1 = (byte *)(plVar7 + 6);
      do {
        bVar2 = *pbVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar4) {
          *pbVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((bVar2 & 1) == 0) {
        if ((long *)plVar7[5] == (long *)0x0) {
          func_0x000104bfeb48();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1055ac930);
          (*pcVar5)();
        }
        (**(code **)(*(long *)plVar7[5] + 0x30))();
      }
      puStack_38 = PTR_PTR_1126e91e0;
      plStack_40 = plVar7;
      _objc_msgSendSuper2(&plStack_40,PTR_s_dealloc_112525b20);
      return;
    }
  }
  return;
}



/* Entry: 1019a9ef0; end: 1019a9f5f;  */

void FUN_1019a9ef0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112de1728 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112de1720;
  func_0x00010002969c(0x112de1720,&UNK_10d9a9420);
  uVar2 = uVar1;
  FUN_1019a9f60();
  puVar3 = PTR___sSayxGSHsSHRzlMc_11034dce8;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSHsSHRzlMc_11034dce8,uVar1,&uStack_28);
  puRam0000000112de1728 = puVar3;
  return;
}



/* Entry: 1019a9f60; end: 1019a9f9f;  */

void FUN_1019a9f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de1730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da70e40;
  func_0x000107c61520(&UNK_10da70e40,&UNK_1104e5d68);
  puRam0000000112de1730 = puVar1;
  return;
}



/* Entry: 1019a9fa0; end: 1019a9fcb;  */

void FUN_1019a9fa0(long param_1,long param_2)

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



/* Entry: 1019a9fcc; end: 1019a9fe7;  */

void FUN_1019a9fcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1019a9fe8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1019a9fe8; end: 1019aa10b;  */

undefined * FUN_1019a9fe8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019aa10c);
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
    puVar3 = param_1;
    FUN_1019acdbc();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1019aa2a8(0);
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



/* Entry: 1019aa10c; end: 1019aa2a7;  */

undefined * FUN_1019aa10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_4 + 0x10);
  if (lVar10 != 0) {
    FUN_1019a9fcc(0,lVar10,0);
    puVar9 = (undefined8 *)(param_4 + 0x38);
    do {
      uVar7 = puVar9[-3];
      uVar2 = puVar9[-2];
      uVar6 = puVar9[-1];
      uVar3 = *puVar9;
      puVar5 = PTR_PTR_1126a8220;
      func_0x000107c610f8();
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar6,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x0001055ae2cc(puVar5,uVar7,uVar2,uVar6);
      func_0x000107c61170(uVar6);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1019a9fcc(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puVar9 + 4;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar4 + uVar1 * 8 + 0x20) = puVar5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar5 = PTR_PTR_1126a8218;
  func_0x000107c610f8(PTR_PTR_1126a8218);
  func_0x000107c5fadc(param_2,param_3);
  uVar7 = 0;
  FUN_1019aa2a8(0);
  puVar8 = puVar4;
  func_0x000107c5fc48(puVar4,uVar7);
  func_0x000107c6142c(puVar4);
  func_0x0001055ae680(puVar5,param_1,param_2,puVar8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar8);
  return puVar5;
}



/* Entry: 1019aa2a8; end: 1019aa2eb;  */

void FUN_1019aa2a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de1738 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8220;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112de1738 = puVar1;
  return;
}



/* Entry: 1019aa2ec; end: 1019aa327;  */

void FUN_1019aa2ec(undefined8 *param_1)

{
  *param_1 = 0x1000001010000;
  *(undefined4 *)(param_1 + 1) = 0x1000101;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 1019aa328; end: 1019aa38f;  */

void FUN_1019aa328(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 1019aa390; end: 1019aa3bb;  */

bool FUN_1019aa390(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019aa3bc; end: 1019aa3f7;  */

void FUN_1019aa3bc(void)

{
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1019aa328(auStack_68,*unaff_x20);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019aa3f8; end: 1019aa3ff;  */

void FUN_1019aa3f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1019aa400; end: 1019aa497;  */

void FUN_1019aa400(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_50 [32];
  long lStack_30;
  undefined1 *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x10);
    lVar1 = 0x13f;
    FUN_1019aa64c(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
    if (uVar2 < 0x40) {
      func_0x000107c61504(auStack_50,&UNK_10d9a9508,*(long *)(lVar1 + -8) + 0x40);
      puStack_28 = auStack_50;
      func_0x000107c61528(param_1,0,2,&lStack_30);
    }
  }
  return;
}



/* Entry: 1019aa498; end: 1019aa64b;  */

/* WARNING: Possible PIC construction at 0x0001019aa5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019aa5c0) */

long * FUN_1019aa498(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar2 = *(uint *)(lVar8 + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar3 == 1) {
      lVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar8;
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined8 *)(param_3 + 0x18);
      lVar4 = 0xff;
      FUN_1019aa64c(0xff,uVar6,uVar1);
      func_0x000107c61434(lVar8);
      lVar8 = 0;
      func_0x000107c61510(0,PTR___sSSN_11034da80,lVar4,"name path ",0);
      lVar10 = (long)*(int *)(lVar8 + 0x30);
      lVar5 = 0;
      func_0x0001019aa658(0,uVar6,uVar1);
      lVar9 = *(long *)(lVar5 + -8);
      lVar8 = (long)param_2 + lVar10;
      (**(code **)(lVar9 + 0x30))(lVar8,1,lVar5);
      if ((int)lVar8 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
        param_1 = (long *)((long)param_1 + lVar10);
        param_2 = (long *)((long)param_2 + lVar10);
        goto code_r0x000107c610b4;
      }
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))
                ((long)param_1 + lVar10,(long)param_2 + lVar10,lVar8);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
      uVar6 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
        return param_1;
      }
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      uVar6 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar6);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1019aa64c; end: 1019aa663;  */

void FUN_1019aa64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6611d4);
  return;
}



/* Entry: 1019aa664; end: 1019aa733;  */

void FUN_1019aa664(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  func_0x000107c614c4();
  if ((int)lVar4 != 0) {
    if ((int)lVar4 == 1) {
      func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = 0xff;
      FUN_1019aa64c(0xff,uVar1,uVar2);
      lVar4 = 0;
      func_0x000107c61510(0,PTR___sSSN_11034da80,uVar3,"name path ",0);
      param_1 = param_1 + *(int *)(lVar4 + 0x30);
      lVar5 = 0;
      func_0x0001019aa658(0,uVar1,uVar2);
      lVar4 = param_1;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(param_1,1,lVar5);
      if ((int)lVar4 == 0) goto LAB_1019aa70c;
    }
    return;
  }
LAB_1019aa70c:
  lVar4 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001019aa730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
  return;
}



/* Entry: 1019aa734; end: 1019aad8b;  */

/* WARNING: Possible PIC construction at 0x0001019aa82c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019aa830) */

undefined8 * FUN_1019aa734(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar3 == 1) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar5 = 0xff;
    FUN_1019aa64c(0xff,uVar7,uVar2);
    func_0x000107c61434(uVar1);
    lVar4 = 0;
    func_0x000107c61510(0,PTR___sSSN_11034da80,lVar5,"name path ",0);
    lVar9 = (long)*(int *)(lVar4 + 0x30);
    lVar6 = 0;
    func_0x0001019aa658(0,uVar7,uVar2);
    lVar8 = *(long *)(lVar6 + -8);
    lVar4 = (long)param_2 + lVar9;
    (**(code **)(lVar8 + 0x30))(lVar4,1,lVar6);
    if ((int)lVar4 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar9);
      param_2 = (undefined8 *)((long)param_2 + lVar9);
      goto code_r0x000107c610b4;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    uVar7 = 1;
  }
  else {
    if ((int)puVar3 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
      return param_1;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    uVar7 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar7);
  return param_1;
}



/* Entry: 1019aad8c; end: 1019aadc7;  */

void FUN_1019aad8c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001019aad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1019aadc8; end: 1019aae1b;  */

void FUN_1019aadc8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    func_0x000107c61530(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Entry: 1019aae1c; end: 1019aaeff;  */

long * FUN_1019aae1c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    lVar6 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
      return param_1;
    }
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1019aaf00; end: 1019aaf6b;  */

void FUN_1019aaf00(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  uVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001019aaf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 1019aaf6c; end: 1019ab02b;  */

undefined8 FUN_1019aaf6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 1019ab02c; end: 1019ab147;  */

undefined8 FUN_1019ab02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar2 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_1019ab0e4;
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_1019ab0e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 1019ab148; end: 1019ab207;  */

undefined8 FUN_1019ab148(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 1019ab208; end: 1019ab323;  */

undefined8 FUN_1019ab208(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar2 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_1019ab2c0;
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_1019ab2c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 1019ab324; end: 1019ab33b;  */

void FUN_1019ab324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1019ab33c; end: 1019ab37b;  */

void FUN_1019ab33c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001019ab378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 1019ab37c; end: 1019ab37f;  */

void FUN_1019ab37c(void)

{
  return;
}



/* Entry: 1019ab380; end: 1019ab60f;  */

void FUN_1019ab380(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019aa658(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001019ab3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 1019ab610; end: 1019ab65b;  */

void FUN_1019ab610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001019ab658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_3,lVar1);
  return;
}



/* Entry: 1019ab65c; end: 1019ab673;  */

undefined8 FUN_1019ab65c(void)

{
  return 0;
}



/* Entry: 1019ab674; end: 1019ab69f;  */

long FUN_1019ab674(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019ab6a0; end: 1019ab8af;  */

int FUN_1019ab6a0(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x30] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1019ab8b0; end: 1019ab993;  */

undefined1  [16] FUN_1019ab8b0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar4);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x20))(puVar3,lVar4,lVar1);
  func_0x000107c5edc4();
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 1019ab994; end: 1019ab99b;  */

undefined1 FUN_1019ab994(undefined1 param_1)

{
  return param_1;
}



/* Entry: 1019ab99c; end: 1019abafb;  */

void FUN_1019ab99c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar16 = *(long *)(unaff_x20 + 0x10);
  if (0x7fffffff < lVar16) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1019abaec);
    (*pcVar14)();
  }
  lVar17 = *(long *)(unaff_x20 + 0x18);
  if (0x7fffffff < lVar17) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1019abaf0);
    (*pcVar14)();
  }
  lVar19 = *(long *)(unaff_x20 + 0x20);
  if (0x7fffffff < lVar19) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1019abaf4);
    (*pcVar14)();
  }
  if ((((-0x80000001 < lVar16) && (-0x80000001 < lVar17)) && (-0x80000001 < lVar19)) &&
     (lVar18 = *(long *)(unaff_x20 + 0x28), -0x80000001 < lVar18)) {
    if (lVar18 < 0x80000000) {
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      uVar3 = unaff_x20[2];
      uVar4 = unaff_x20[3];
      uVar15 = (ulong)(byte)unaff_x20[0xd];
      uVar5 = unaff_x20[4];
      uVar6 = unaff_x20[5];
      uVar7 = unaff_x20[6];
      uVar8 = unaff_x20[7];
      uVar9 = unaff_x20[8];
      uVar10 = unaff_x20[9];
      uVar11 = unaff_x20[10];
      uVar12 = unaff_x20[0xb];
      uVar13 = unaff_x20[0xc];
      FUN_1019ab994();
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *(ulong *)(param_1 + 8) = uVar15;
      param_1[0x10] = uVar5;
      param_1[0x11] = uVar6;
      *(int *)(param_1 + 0x14) = (int)lVar16;
      *(int *)(param_1 + 0x18) = (int)lVar17;
      param_1[0x1c] = uVar7;
      param_1[0x1d] = uVar8;
      param_1[0x1e] = uVar9;
      param_1[0x1f] = uVar10;
      param_1[0x20] = uVar11;
      param_1[0x21] = uVar12;
      param_1[0x22] = uVar13;
      *(int *)(param_1 + 0x24) = (int)lVar19;
      *(int *)(param_1 + 0x28) = (int)lVar18;
      return;
    }
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1019abafc);
    (*pcVar14)();
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1019abaf8);
  (*pcVar14)();
}



/* Entry: 1019abafc; end: 1019abb07;  */

void FUN_1019abafc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1019abb08; end: 1019abb8f;  */

undefined8 FUN_1019abb08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1019ad3d4(param_1,param_2,lVar2);
  lVar2 = 0;
  func_0x0001019aadbc(0,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return uVar1;
}



/* Entry: 1019abb90; end: 1019abbeb;  */

undefined8 FUN_1019abb90(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  uVar1 = param_1;
  FUN_1019ad3d4();
  lVar2 = 0;
  func_0x0001019aadbc(0,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return uVar1;
}



/* Entry: 1019abbec; end: 1019ac02f;  */

void FUN_1019abbec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long alStack_100 [5];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
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
  
  lVar3 = 0;
  alStack_100[4] = param_4;
  uStack_d8 = param_5;
  uStack_d0 = param_2;
  puStack_c8 = param_1;
  func_0x0001019aa658(0,param_6,param_7);
  alStack_100[3] = *(long *)(lVar3 + -8);
  alStack_100[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_100[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)alStack_100 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001019aadbc(0,param_6,param_7);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)(lVar13 - extraout_x12);
  (**(code **)(extraout_x8_01 + 0x10))(puVar12,param_3,uVar4);
  puVar5 = puVar12;
  func_0x000107c614c4(puVar12,uVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      (**(code **)(lVar14 + 0x20))(lVar13,puVar12,lVar3);
      lVar10 = lVar13;
      (**(code **)(lVar14 + 0x10))(lVar7,lVar13,lVar3);
      lVar1 = alStack_100[2];
      lVar6 = alStack_100[2];
      FUN_1019ab8b0();
      alStack_100[1] = lVar6;
      (**(code **)(alStack_100[3] + 8))(lVar7,lVar1);
      func_0x0001019ab744(0,param_6,param_7);
      FUN_1019ab99c(&uStack_90);
      puVar9 = PTR_PTR_1126bb458;
      func_0x000107c610f8();
      lVar7 = alStack_100[1];
      func_0x000107c5fadc(alStack_100[1],lVar10);
      func_0x000107c6142c(lVar10);
      func_0x0001055aca28(puVar9,lVar7,&uStack_90,uStack_d8,uStack_d0);
      func_0x000107c61170(lVar7);
      (**(code **)(lVar14 + 8))(lVar13,lVar3);
      goto LAB_1019abf3c;
    }
    uVar4 = *puVar12;
    uVar11 = puVar12[1];
    uVar8 = 0xff;
    func_0x0001019aa64c(0xff,param_6,param_7);
    lVar3 = 0;
    func_0x000107c61510(0,PTR___sSSN_11034da80,uVar8,"name path ",0);
    lVar14 = alStack_100[3];
    lVar13 = alStack_100[2];
    iVar2 = *(int *)(lVar3 + 0x30);
    lVar3 = (long)puVar12 + (long)iVar2;
    (**(code **)(alStack_100[3] + 0x30))(lVar3,1,alStack_100[2]);
    if ((int)lVar3 != 1) {
      lVar3 = (long)puVar12 + (long)iVar2;
      (**(code **)(lVar14 + 0x20))(lVar7,lVar3,lVar13);
      lVar14 = lVar13;
      FUN_1019ab8b0(lVar13);
      func_0x0001019ab744(0,param_6,param_7);
      FUN_1019ab99c(&uStack_90);
      puVar9 = PTR_PTR_1126bb458;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar4,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c5fadc(lVar14,lVar3);
      func_0x000107c6142c(lVar3);
      func_0x0001055ace3c(puVar9,uVar4,lVar14,&uStack_90,uStack_d8,uStack_d0);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar14);
      (**(code **)(alStack_100[3] + 8))(lVar7,lVar13);
      goto LAB_1019abf3c;
    }
    func_0x0001019ab744(0,param_6,param_7);
    FUN_1019ab99c(&uStack_90);
    puVar9 = PTR_PTR_1126bb458;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar4,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x0001055ace3c(puVar9,uVar4,0,&uStack_90,uStack_d8,uStack_d0);
  }
  else {
    if (iVar2 == 2) {
      func_0x0001019ab744(0,param_6,param_7);
      FUN_1019ab99c(&uStack_90);
      puVar9 = PTR_PTR_1126bb458;
      func_0x000107c610f8();
      uVar4 = 0x3a79726f6d656d3a;
      uVar11 = 0xe800000000000000;
    }
    else {
      func_0x0001019ab744(0,param_6,param_7);
      FUN_1019ab99c(&uStack_90);
      puVar9 = PTR_PTR_1126bb458;
      func_0x000107c610f8();
      uVar4 = 0;
      uVar11 = 0xe000000000000000;
    }
    func_0x000107c5fadc(uVar4,uVar11);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x0001055aca28(puVar9,uVar4,&uStack_c0,uStack_d8,uStack_d0);
  }
  func_0x000107c61170(uVar4);
LAB_1019abf3c:
  *puStack_c8 = puVar9;
  return;
}



/* Entry: 1019ac030; end: 1019ac15f;  */

undefined8 * FUN_1019ac030(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined *unaff_x21;
  long lVar9;
  undefined8 auStack_d8 [3];
  undefined8 *puStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = (undefined8 *)0x0;
  func_0x000107c61174();
  puVar5 = param_1;
  func_0x0001055adbd0();
  func_0x000107c61180();
  if (puStack_60 == (undefined8 *)0x0) {
    puVar4 = param_1;
    func_0x000107c61170(param_1);
  }
  else {
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar1 = puVar4;
    func_0x0001055b117c();
    puVar2 = puVar4;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    unaff_x21 = &UNK_110422190;
    param_3 = 0;
    func_0x000107c613f8(&UNK_110422190,puVar2,0,0);
    *puVar2 = puVar1;
    puVar2[1] = puVar3;
    puVar2[2] = ppuVar7;
    func_0x000107c61654();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    ppuVar7 = (undefined8 **)puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      lVar9 = param_1[7];
      func_0x000107c611ec(*(undefined8 *)(lVar9 + 0x10));
      puVar5 = param_1 + 8;
      func_0x000107c61428(puVar5,auStack_d8,0x21,0);
      FUN_1019ac394();
      puVar1 = auStack_d8;
      func_0x000107c614a8();
      if (puVar5 == (undefined8 *)0x0) {
        (*(code *)param_1[3])();
        if (unaff_x21 != (undefined *)0x0) {
          return puVar1;
        }
        uVar8 = param_1[9];
        puVar5 = (undefined8 *)0x0;
        FUN_1019a8424();
        func_0x000107c613fc();
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1019ad2d0();
        puVar5[2] = puVar6;
        puVar5[3] = puVar1;
        *(undefined1 *)(puVar5 + 5) = 0;
        puVar5[4] = uVar8;
        func_0x000107c61174();
      }
      func_0x000107c611f0(*(undefined8 *)(lVar9 + 0x10));
      func_0x000107c5fd64();
      if (unaff_x21 == (undefined *)0x0) {
        FUN_1019ac4e4(extraout_x8,puVar5,puVar4,ppuVar7,param_3);
        FUN_1019ac420(param_1,puVar5,param_3);
        func_0x000107c61574(puVar5);
      }
      else {
        FUN_1019ac420(param_1,puVar5,param_3);
        func_0x000107c61574(puVar5);
      }
    }
    else {
      FUN_1019ac2e0();
      puVar5 = puVar4;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1019ac160; end: 1019ac2df;  */

void FUN_1019ac160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_78 [24];
  
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c611ec(*(undefined8 *)(lVar5 + 0x10));
    lVar2 = unaff_x20 + 0x40;
    func_0x000107c61428(lVar2,auStack_78,0x21,0);
    FUN_1019ac394();
    puVar1 = auStack_78;
    func_0x000107c614a8();
    if (lVar2 == 0) {
      (**(code **)(unaff_x20 + 0x18))();
      if (unaff_x21 != 0) {
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar2 = 0;
      FUN_1019a8424();
      func_0x000107c613fc();
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1019ad2d0();
      *(undefined **)(lVar2 + 0x10) = puVar3;
      *(undefined1 **)(lVar2 + 0x18) = puVar1;
      *(undefined1 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      func_0x000107c61174();
    }
    func_0x000107c611f0(*(undefined8 *)(lVar5 + 0x10));
    func_0x000107c5fd64();
    if (unaff_x21 == 0) {
      FUN_1019ac4e4(param_1,lVar2,param_2,param_3,param_4);
      FUN_1019ac420();
      func_0x000107c61574(lVar2);
    }
    else {
      FUN_1019ac420();
      func_0x000107c61574(lVar2);
    }
  }
  else {
    FUN_1019ac2e0(param_2,param_3,1,param_4);
  }
  return;
}



/* Entry: 1019ac2e0; end: 1019ac393;  */

void FUN_1019ac2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c611ec(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10));
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x28) = 0;
  }
  func_0x000107c5fd64();
  if (unaff_x21 == 0) {
    FUN_1019ac4e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2,param_3,param_5);
  }
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x28) = 1;
  }
  func_0x000107c611f0(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10));
  return;
}



/* Entry: 1019ac394; end: 1019ac41f;  */

void FUN_1019ac394(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
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
  if ((uVar2 == 0) || (FUN_1019ad220(), uVar2 != 0)) {
    return;
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
  if (!SBORROW8(uVar2,1)) {
    func_0x0001019ad194(uVar2 - 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ac420);
  (*pcVar1)();
}



/* Entry: 1019ac420; end: 1019ac4e3;  */

void FUN_1019ac420(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x000107c611ec(*(undefined8 *)(lVar5 + 0x10));
  func_0x000107c61428(param_1 + 0x40,auStack_58,0x21,0);
  func_0x0001019acf04();
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1019acf74(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x40) = uVar2;
  func_0x000107c614a8(auStack_58);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  func_0x000107c6157c(param_2);
  func_0x000107c611f0(uVar4);
  return;
}



/* Entry: 1019ac4e4; end: 1019ac63f;  */

/* WARNING: Removing unreachable block (ram,0x0001019ac600) */
/* WARNING: Removing unreachable block (ram,0x0001019ac5dc) */
/* WARNING: Removing unreachable block (ram,0x0001019ac5a8) */
/* WARNING: Removing unreachable block (ram,0x0001019ac5ec) */

void FUN_1019ac4e4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = *unaff_x20;
  lVar4 = *(long *)(lVar2 + 0x50);
  lVar1 = *(long *)(lVar4 + -8);
  uStack_68 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001019a8444();
  if (unaff_x21 == 0) {
    pcVar3 = *(code **)(*(long *)(lVar2 + 0x58) + 0x20);
    func_0x000107c615f0(param_2);
    (*pcVar3)(puVar5);
    (*param_3)(param_1,puVar5);
    (**(code **)(lVar1 + 8))(puVar5,lVar4);
    func_0x0001019a8494();
  }
  else {
    func_0x0001019a84e4();
    func_0x000107c61654();
  }
  return;
}



/* Entry: 1019ac640; end: 1019ac65f;  */

void FUN_1019ac640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
  return;
}



/* Entry: 1019ac660; end: 1019ac6eb;  */

void FUN_1019ac660(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019adde8;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  plVar1[2] = (long)plVar3;
  *plVar3 = (long)plVar1;
  plVar3[1] = (long)&UNK_104895034;
                    /* WARNING: Could not recover jumptable at 0x000104895030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_1041506d4)(plVar3,uVar2,0,0,FUN_1019ad94c,unaff_x22 + 0x10,uVar4);
  return;
}



/* Entry: 1019ac6ec; end: 1019ac7ff;  */

/* WARNING: Removing unreachable block (ram,0x0001019ac75c) */

void FUN_1019ac6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_50 [16];
  
  lVar2 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  FUN_1019ac2e0(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,param_4,0,lVar2);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_10176fed4(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_5,uVar1,
                PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1019ac800; end: 1019ac81f;  */

void FUN_1019ac800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
  return;
}



/* Entry: 1019ac820; end: 1019ac8e3;  */

void FUN_1019ac820(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019ac8a8;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  plVar1[2] = (long)plVar3;
  *plVar3 = (long)plVar1;
  plVar3[1] = (long)&UNK_104895034;
                    /* WARNING: Could not recover jumptable at 0x000104895030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_1041506d4)(plVar3,uVar2,0,0,0x1019ad980,unaff_x22 + 0x10,uVar4);
  return;
}



/* Entry: 1019ac8e4; end: 1019acb7f;  */

void FUN_1019ac8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  lStack_e0 = param_6;
  uStack_d8 = param_1;
  uStack_d0 = param_5;
  uStack_c8 = param_3;
  uStack_c0 = param_7;
  uStack_b8 = param_8;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1019adda0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3)
  ;
  lVar2 = lVar9;
  func_0x000107c5fff0(lVar9);
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
  lVar3 = lStack_e0;
  func_0x000107c613fc(lStack_e0,0x38,7);
  *(undefined8 *)(lVar3 + 0x10) = uStack_d0;
  *(undefined8 *)(lVar3 + 0x18) = uStack_d8;
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  *(undefined8 *)(lVar3 + 0x28) = uStack_c8;
  *(undefined8 *)(lVar3 + 0x30) = param_4;
  uStack_70 = uStack_c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  uStack_78 = uStack_b8;
  ppuVar4 = &puStack_90;
  lStack_68 = lVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  FUN_1019add04(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x0001019add44(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar10,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(lStack_68);
  return;
}



/* Entry: 1019acb80; end: 1019acc8f;  */

/* WARNING: Removing unreachable block (ram,0x0001019acbec) */

void FUN_1019acb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_50 [16];
  
  lVar2 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  FUN_1019ac160(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,param_4,lVar2);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_10176fed4(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_5,uVar1,
                PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1019acc90; end: 1019accf3;  */

void FUN_1019acc90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1019accf4; end: 1019accfb;  */

undefined8 FUN_1019accf4(void)

{
  return 1;
}



/* Entry: 1019accfc; end: 1019acd9b;  */

void FUN_1019accfc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019acd9c; end: 1019acdbb;  */

void FUN_1019acd9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1019acdbc; end: 1019ace83;  */

void FUN_1019acdbc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1019adda0(0,0x112de1738,&PTR_PTR_1126a8220);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112de1a50;
  plVar5 = (long *)&UNK_10d9a9798;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1019ace84; end: 1019acf73;  */

undefined * FUN_1019ace84(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x0001019ace28();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1019acf74; end: 1019ad21f;  */

ulong FUN_1019acf74(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ad09c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1019ace84(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ad098);
      (*pcVar1)();
    }
    func_0x0001019ad09c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1019ad220; end: 1019ad2cf;  */

undefined8 FUN_1019ad220(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  uVar3 = uVar5;
  func_0x000107c61550();
  if ((((int)uVar3 == 0) || ((long)uVar5 < 0)) || ((uVar5 >> 0x3e & 1) != 0)) {
    func_0x0001019ad280();
  }
  uVar3 = uVar5 & 0xffffffffffffff8;
  if (*(long *)(uVar3 + 0x10) != 0) {
    lVar4 = *(long *)(uVar3 + 0x10) + -1;
    uVar2 = *(undefined8 *)(uVar3 + lVar4 * 8 + 0x20);
    *(long *)(uVar3 + 0x10) = lVar4;
    *unaff_x20 = uVar5;
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ad280);
  (*pcVar1)();
}



/* Entry: 1019ad2d0; end: 1019ad3d3;  */

undefined * FUN_1019ad2d0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112de16f8);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  func_0x00010035a314();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ad3d4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      func_0x00010035a314();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ad3a4);
  (*pcVar1)();
}



/* Entry: 1019ad3d4; end: 1019ad94b;  */

long * FUN_1019ad3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar22;
  long alStack_110 [2];
  undefined1 auStack_100 [8];
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e0 = *unaff_x20;
  plVar19 = *(long **)(lStack_e0 + 0x50);
  lVar18 = *(long *)(lStack_e0 + 0x58);
  lVar5 = 0;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  func_0x0001019aadbc(0,plVar19,lVar18);
  lStack_f0 = *(long *)(lVar5 + -8);
  lStack_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0;
  puStack_f8 = auStack_100 + -extraout_x8;
  func_0x000107c5ffd8();
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar21 = (long)(auStack_100 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_b8 = lVar21;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar22 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x0001019ade20();
  lVar5 = lVar6;
  func_0x000107c613fc();
  puVar7 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *(undefined4 **)(lVar5 + 0x10) = puVar7;
  *puVar7 = 0;
  unaff_x20[6] = lVar5;
  uVar20 = 7;
  func_0x000107c613fc(lVar6,0x18,7);
  puVar7 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *(undefined4 **)(lVar6 + 0x10) = puVar7;
  *puVar7 = 0;
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  unaff_x20[7] = lVar6;
  unaff_x20[8] = (long)puVar17;
  plVar8 = plVar19;
  lStack_c8 = lVar18;
  (**(code **)(lVar18 + 0x18))(plVar19,lVar18);
  FUN_1019aa10c();
  plStack_d8 = plVar8;
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(uVar20);
  uVar20 = 0;
  FUN_1019adda0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  plStack_78 = (long *)0x0;
  uStack_70 = 0xe000000000000000;
  uStack_d0 = uVar20;
  func_0x000107c602fc(0x21);
  func_0x000107c6142c(uStack_70);
  plStack_78 = (long *)0xd00000000000001f;
  uStack_70 = 0x800000010efc62b0;
  uVar20 = 0;
  func_0x000107c60714(plVar19,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar20);
  uVar4 = uStack_70;
  plVar11 = plStack_78;
  func_0x000107c5f808(lVar22);
  plStack_78 = (long *)puVar17;
  uVar20 = 0x112d4ac68;
  FUN_1019add04(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar9 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar10 = 0x112d4ac78;
  func_0x0001019add44(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  uVar3 = uStack_a0;
  plVar8 = plStack_d8;
  func_0x000107c60264(lVar21,&plStack_78,uVar9,uVar10,lStack_c0,uVar20);
  lVar18 = lStack_b8;
  (**(code **)(lStack_b0 + 0x68))
            (lStack_b8,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a8);
  func_0x000107c5ffec(plVar11,uVar4,lVar22,lVar21,lVar18,0);
  puStack_80 = (undefined8 *)0x0;
  uVar20 = uVar3;
  FUN_1019abbec(&plStack_78,&puStack_80,uVar3,uStack_98,plVar8,plVar19,lStack_c8);
  plVar19 = plStack_78;
  lVar5 = lStack_e8;
  lVar18 = lStack_f0;
  puVar2 = puStack_f8;
  if (unaff_x21 == 0) {
    if (puStack_80 == (undefined8 *)0x0) {
      if (plStack_78 != (long *)0x0) {
        (**(code **)(lStack_f0 + 0x10))(puStack_f8,uVar3,lStack_e8);
        puVar15 = puVar2;
        func_0x000107c614c4(puVar2,lVar5);
        if (((uint)puVar15 & 0xfffffffe) == 2) {
          *(undefined1 *)(unaff_x20 + 5) = 1;
        }
        else {
          *(undefined1 *)(unaff_x20 + 5) = 0;
          (**(code **)(lVar18 + 8))(puVar2,lVar5);
        }
        puVar17 = &UNK_110422258;
        func_0x000107c613fc(&UNK_110422258,0x18,7);
        *(long **)(puVar17 + 0x10) = plVar19;
        unaff_x20[3] = (long)FUN_1019add88;
        unaff_x20[4] = (long)puVar17;
        lVar18 = 0;
        FUN_1019a8424();
        func_0x000107c613fc();
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1019ad2d0();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(plVar8);
        *(undefined **)(lVar18 + 0x10) = puVar17;
        *(long **)(lVar18 + 0x18) = plVar19;
        *(undefined1 *)(lVar18 + 0x28) = 1;
        *(long **)(lVar18 + 0x20) = plVar11;
        unaff_x20[2] = lVar18;
        unaff_x20[9] = (long)plVar11;
        goto LAB_1019ad7fc;
      }
      puVar16 = puStack_80;
      func_0x0001019a9d3c();
      func_0x000107c613f8(&UNK_110421d20,puVar16,0,0);
      func_0x000107c61654();
      goto LAB_1019ad714;
    }
    puVar16 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar12 = puVar16;
    func_0x0001055b117c();
    puVar13 = puVar16;
    func_0x0001055b1188();
    func_0x000107c61180();
    puVar14 = puVar13;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001019a9cfc();
    func_0x000107c613f8(&UNK_110422190,puVar13,0,0);
    *puVar13 = puVar12;
    puVar13[1] = puVar14;
    puVar13[2] = uVar20;
    func_0x000107c61654();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(plVar11);
    func_0x000107c61170(plVar8);
    plVar8 = plStack_78;
    func_0x000107c61170(puVar16);
  }
  else {
LAB_1019ad714:
    func_0x000107c61170(plVar11);
  }
  func_0x000107c61170(plVar8);
  func_0x000107c61574(unaff_x20[6]);
  func_0x000107c61574(unaff_x20[7]);
  func_0x000107c6142c(unaff_x20[8]);
  plVar8 = unaff_x20;
  func_0x000107c61464(unaff_x20,lStack_e0,0x50,7);
LAB_1019ad7fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar22 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar22 + -8) = FUN_1019ad94c;
  FUN_1019ac8e4();
  return plVar8;
}



/* Entry: 1019ad94c; end: 1019ad9b3;  */

void FUN_1019ad94c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019ac8e4(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),&UNK_110422208,
                FUN_1019adce4,&UNK_110422220);
  return;
}



/* Entry: 1019ad9b4; end: 1019ad9b7;  */

void FUN_1019ad9b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de19c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9628;
  func_0x000107c61520(&UNK_10d9a9628,&UNK_110422118);
  puRam0000000112de19c0 = puVar1;
  return;
}



/* Entry: 1019ad9b8; end: 1019ad9f7;  */

void FUN_1019ad9b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de19c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9628;
  func_0x000107c61520(&UNK_10d9a9628,&UNK_110422118);
  puRam0000000112de19c0 = puVar1;
  return;
}



/* Entry: 1019ad9f8; end: 1019ad9fb;  */

void FUN_1019ad9f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1019ad9fc; end: 1019ada77;  */

void FUN_1019ad9fc(long param_1)

{
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_38 = &UNK_10d9a9758;
  puStack_20 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = puStack_48;
  puStack_28 = puStack_48;
  func_0x000107c61524(param_1,0,7,&puStack_48,param_1 + 0x60);
  return;
}



/* Entry: 1019ada78; end: 1019adb77;  */

void FUN_1019ada78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6612c4);
  return;
}



/* Entry: 1019adb78; end: 1019adbf7;  */

undefined8 * FUN_1019adb78(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1019adbf8; end: 1019adcb7;  */

int FUN_1019adbf8(int *param_1,int param_2)

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



/* Entry: 1019adcb8; end: 1019adce3;  */

void FUN_1019adcb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019adce4; end: 1019add03;  */

/* WARNING: Removing unreachable block (ram,0x0001019ac75c) */

void FUN_1019adce4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40),uVar2,*(undefined8 *)(unaff_x20 + 0x20),
             uVar3,uVar4);
  FUN_1019ac2e0(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar3,uVar4,0,lVar5);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_10176fed4(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,lVar1,uVar3,
                PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1019add04; end: 1019add87;  */

void FUN_1019add04(long *param_1,code *param_2,long param_3)

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



/* Entry: 1019add88; end: 1019add9f;  */

void FUN_1019add88(void)

{
  long unaff_x20;
  
  FUN_1019ac030(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019adda0; end: 1019adddf;  */

void FUN_1019adda0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019adde0; end: 1019addf3;  */

void FUN_1019adde0(long param_1,long param_2)

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



/* Entry: 1019addf4; end: 1019ade3f;  */

void FUN_1019addf4(void)

{
  long unaff_x20;
  
  func_0x000107c61590(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019ade40; end: 1019ae25f;  */

undefined * FUN_1019ade40(undefined8 param_1,ulong param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar9;
  long lVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar12 = *(long *)(param_3 + -8);
  puVar7 = param_3;
  uStack_e0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c60188(0,puVar7);
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar8 - extraout_x12_00;
  (**(code **)(lVar12 + 0x10))(lVar14,uStack_e0,param_3);
  (**(code **)(lVar12 + 0x38))(lVar14,0,1,param_3);
  pcStack_b0 = *(code **)(lVar13 + 0x10);
  lStack_a0 = lVar14;
  lStack_98 = lVar13;
  lStack_90 = lVar2;
  (*pcStack_b0)(lVar8,lVar14,lVar2);
  pcStack_b8 = *(code **)(lVar12 + 0x30);
  lVar2 = lVar8;
  puStack_80 = param_3;
  (*pcStack_b8)(lVar8,1,param_3);
  if ((int)lVar2 == 1) {
    pcVar9 = *(code **)(lVar12 + 8);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pcStack_c0 = *(code **)(lVar12 + 0x20);
    uStack_c8 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_d8 = lVar8;
    lStack_d0 = lVar12;
    do {
      (*pcStack_c0)(lVar10,lVar8,puStack_80);
      uVar3 = 0;
      FUN_1019aec2c(0,uStack_c8,0,PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar7 = puStack_80;
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1019ae260);
        (*pcVar9)();
      }
      if (param_2 != 0) {
        uVar15 = 0;
        pcVar9 = *(code **)(param_4 + 0x10);
        uVar11 = uVar3;
        do {
          uVar4 = uVar15;
          puVar5 = puVar7;
          lVar8 = param_4;
          (*pcVar9)();
          uVar1 = *(ulong *)(uVar11 + 0x10);
          uVar3 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_1019aec2c(uVar3,uVar1 + 1,1,uVar11);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          lVar2 = uVar3 + uVar1 * 0x18;
          *(ulong *)(lVar2 + 0x20) = uVar4;
          *(undefined **)(lVar2 + 0x28) = puVar5;
          *(char *)(lVar2 + 0x30) = (char)lVar8;
          uVar11 = uVar3;
        } while (param_2 != uVar15);
      }
      func_0x000107c61434(uVar3);
      puVar7 = puStack_88;
      puVar5 = puStack_88;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_1019aed44(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      lVar8 = lStack_d0;
      uVar15 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar15) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_1019aed44(puVar7,uVar15 + 1,1,puVar6);
      }
      lVar2 = lStack_a8;
      *(ulong *)(puVar7 + 0x10) = uVar15 + 1;
      *(ulong *)(puVar7 + uVar15 * 8 + 0x20) = uVar3;
      (**(code **)(param_4 + 8))(lStack_a8,puStack_80);
      puVar5 = puStack_80;
      if (unaff_x21 != 0) {
        pcVar9 = *(code **)(lVar8 + 8);
        (*pcVar9)(uStack_e0,puStack_80);
        (*pcVar9)(lVar10,puVar5);
        (**(code **)(lStack_98 + 8))(lStack_a0,lStack_90);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(uVar3);
        return puVar5;
      }
      pcVar9 = *(code **)(lVar8 + 8);
      puStack_88 = puVar7;
      (*pcVar9)(lVar10,puStack_80);
      lVar13 = lStack_90;
      lVar8 = lStack_98;
      lVar12 = lStack_a0;
      (**(code **)(lStack_98 + 8))(lStack_a0,lStack_90);
      func_0x000107c6142c(uVar3);
      (**(code **)(lVar8 + 0x20))(lVar12,lVar2,lVar13);
      lVar8 = lStack_d8;
      (*pcStack_b0)(lStack_d8,lVar12,lVar13);
      lVar2 = lVar8;
      (*pcStack_b8)(lVar8,1,puVar5);
      puVar7 = puStack_88;
    } while ((int)lVar2 != 1);
  }
  (*pcVar9)(uStack_e0,puStack_80);
  lVar2 = lStack_90;
  pcVar9 = *(code **)(lStack_98 + 8);
  (*pcVar9)(lStack_a0,lStack_90);
  (*pcVar9)(lVar8,lVar2);
  return puVar7;
}



/* Entry: 1019ae260; end: 1019ae2eb;  */

undefined8 FUN_1019ae260(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_3 < *(long *)(param_2 + 0x10)) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ae2e8);
      (*pcVar2)();
    }
    lVar3 = *(long *)(param_2 + param_3 * 8 + 0x20);
    if (param_1 < *(long *)(lVar3 + 0x10)) {
      if (-1 < param_1) {
        lVar3 = lVar3 + param_1 * 0x18;
        uVar1 = *(undefined8 *)(lVar3 + 0x20);
        FUN_1019aee74(uVar1,*(undefined8 *)(lVar3 + 0x28),*(undefined1 *)(lVar3 + 0x30));
        return uVar1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ae2ec);
      (*pcVar2)();
    }
  }
  return 0;
}


