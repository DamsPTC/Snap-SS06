/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a33064; end: 101a330bb;  */

void FUN_101a33064(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x118));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a330b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a330bc; end: 101a33277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a330bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dec700);
  FUN_101a30a0c(uVar2);
  uStack_70 = 0xd000000000000014;
  uStack_68 = 0x800000010efc9800;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c5fb78(uVar3,param_2);
  func_0x000107c6142c(param_2);
  uVar4 = 0x34706d2e;
  uVar8 = 0xe400000000000000;
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  uVar2 = uStack_68;
  uVar3 = uStack_70;
  func_0x0001000f73a0();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000107c5ed80(lVar10 - extraout_x12,uVar5,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5ed9c(lVar10,uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  puVar6 = PTR_PTR_1126bf7c8;
  func_0x000107c610f8(PTR_PTR_1126bf7c8);
  puVar7 = puVar6;
  func_0x000107c5ed90();
  func_0x000107c2bacc(puVar6,puVar7);
  func_0x000107c61170(puVar7);
  pcVar9 = *(code **)(lVar11 + 8);
  (*pcVar9)(lVar10,lVar1);
  (*pcVar9)(lVar10 - extraout_x12,lVar1);
  return puVar6;
}



/* Entry: 101a33278; end: 101a333e3; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl transcodeWithConverterOutput:configuration:progressHandler:completionHandler:] */

void FUN_101a33278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  func_0x000107c60bc4();
  puVar1 = &UNK_11042dfa8;
  func_0x000107c613fc(&UNK_11042dfa8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11042dfd0;
  func_0x000107c613fc(&UNK_11042dfd0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9b8560;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11042dff8;
  func_0x000107c613fc(&UNK_11042dff8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9b8570;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10d9b8580,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101a333e4; end: 101a33503;  */

void FUN_101a333e4(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(long *)(unaff_x22 + 0x28) = param_5;
  *(long *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_11042e020;
    func_0x000107c613fc(&UNK_11042e020,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    pcVar4 = FUN_101a38bf4;
  }
  *(code **)(unaff_x22 + 0x48) = pcVar4;
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  plVar5 = (long *)0x130;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a33504;
  plVar5[0x1c] = (long)puVar3;
  plVar5[0x1d] = param_5;
  plVar5[0x1a] = param_2;
  plVar5[0x1b] = (long)pcVar4;
  plVar5[0x18] = uVar2;
  plVar5[0x19] = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar5[0x1e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0x1f] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x20] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a324e0,0,0);
  return;
}



/* Entry: 101a33504; end: 101a3360b;  */

void FUN_101a33504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar9 + 0x50);
  uVar5 = *(undefined8 *)(lVar9 + 0x48);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  uVar2 = *(undefined8 *)(lVar9 + 0x10);
  uVar4 = *(undefined8 *)(lVar9 + 0x18);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x58));
  func_0x000100cc3324(uVar5,uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  if (unaff_x20 == 0) {
    lVar3 = *(long *)(lVar9 + 0x38);
    uVar1 = *(undefined8 *)(lVar9 + 0x40);
    uVar4 = *(undefined8 *)(lVar9 + 0x30);
    lVar6 = *(long *)(lVar9 + 0x20);
    func_0x000107c5ed90();
    (**(code **)(lVar6 + 0x10))(lVar6,uVar2,0);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar3 + 8))(uVar1,uVar4);
  }
  else {
    lVar3 = *(long *)(lVar9 + 0x20);
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    (**(code **)(lVar3 + 0x10))(lVar3,0,unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101a33608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))();
  return;
}



/* Entry: 101a3360c; end: 101a33e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a3360c(long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_68;
  
  uVar14 = *(ulong *)(param_1 + _DAT_11303c310);
  puVar4 = PTR_PTR_1126bf7a8;
  func_0x000107c610f8(PTR_PTR_1126bf7a8);
  func_0x000107c453e4();
  uVar15 = *(ulong *)(param_2 + _DAT_11303c208);
  uVar5 = uVar15;
  func_0x000107c41828(uVar15);
  func_0x000107c2baec(puVar4,uVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2baf0(puVar4,uVar15);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bae8(puVar4,*(undefined8 *)(param_2 + _DAT_11303c210));
  func_0x000107c61180();
  func_0x000107c61170();
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c220);
  func_0x000107c5fadc(uVar7,((undefined8 *)(param_2 + _DAT_11303c220))[1]);
  puVar6 = puVar4;
  func_0x000107c2baf4(puVar4,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c230);
  func_0x000107c5fadc(uVar7,((undefined8 *)(param_2 + _DAT_11303c230))[1]);
  puVar6 = puVar4;
  func_0x000107c2bafc(puVar4,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  if (((undefined8 *)(param_2 + _DAT_11303c238))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + _DAT_11303c238);
    func_0x000107c5fadc(uVar7);
  }
  puVar6 = puVar4;
  func_0x000107c2bb20(puVar4,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c228);
  func_0x000107c5fadc(uVar7,((undefined8 *)(param_2 + _DAT_11303c228))[1]);
  puVar6 = puVar4;
  func_0x000107c2baf8(puVar4,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  if (((undefined8 *)(param_2 + _DAT_11303c250))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + _DAT_11303c250);
    func_0x000107c5fadc(uVar7);
  }
  puVar6 = puVar4;
  func_0x000107c2bb1c(puVar4,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  lVar8 = *(long *)(param_2 + _DAT_11303c258);
  if (lVar8 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    puVar6 = puVar4;
    func_0x000107c2bb30(puVar4,lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar6);
  }
  uVar16 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112dec700);
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc8e20);
  uVar2 = uVar16;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  uVar5 = uVar14;
  FUN_101a37cb4();
  uVar17 = uVar14;
  func_0x000107c309c0();
  func_0x000107c61180();
  uVar18 = uVar17;
  func_0x000107c30970();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  uVar7 = 0;
  func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar17 = uVar18;
  func_0x000107c5fc54(uVar18,uVar7);
  func_0x000107c61170(uVar18);
  if (uVar17 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar18 = uVar17;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar17);
  if (uVar18 == 1) {
    uVar17 = uVar14;
    func_0x000107c309c0();
    func_0x000107c61180();
    uVar18 = uVar17;
    func_0x000107c30970();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    uVar17 = uVar18;
    func_0x000107c5fc54(uVar18,uVar7);
    func_0x000107c61170(uVar18);
    if (uVar17 >> 0x3e == 0) {
      uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar18 = uVar17 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar17) {
        uVar18 = uVar17;
      }
      func_0x000107c60480();
    }
    if (uVar18 != 0) {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar17 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a33e70);
          (*pcVar1)();
        }
        uVar18 = *(ulong *)(uVar17 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar18 = 0;
        func_0x000101a37938(0,uVar17,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      func_0x000107c6142c(uVar17);
      uVar17 = uVar18;
      func_0x000107c30980();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      uVar7 = 0;
      func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
      uVar18 = uVar17;
      func_0x000107c5fc54(uVar17,uVar7);
      func_0x000107c61170(uVar17);
      if (uVar18 >> 0x3e == 0) {
        uVar17 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar17 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar17 = uVar18;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar18);
      uVar13 = (uint)(uVar17 != 1);
      goto LAB_101a33a8c;
    }
    func_0x000107c6142c(uVar17);
  }
  uVar13 = 1;
LAB_101a33a8c:
  uVar17 = uVar14;
  FUN_101a38374();
  uVar7 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc9820);
  uVar3 = uVar16;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  uVar2 = uVar3 | uVar13 | uVar2 | (uint)uVar17 | (uint)uVar5;
  if ((uVar2 & 1) != 0) {
    func_0x000107c2bb08(0x4090e00000000000,0x409e000000000000,puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  uVar5 = uVar14;
  func_0x000101a38600();
  func_0x000107c49dd0();
  uVar2 = uVar2 ^ 1;
  if ((((uVar2 & 1) == 0) && ((uVar5 & 1) != 0)) && ((uVar15 & 1) == 0)) {
    func_0x000107c308b8(0x4090e00000000000,0x409e000000000000,0x500);
    func_0x000107c308bc(2);
    func_0x000107c2bb04(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c2bb00(puVar4,1400000);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if ((((uint)uVar17 | uVar2) & 1) == 0) {
    uVar7 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc9850);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar7);
    if (uVar16 != 0) {
      func_0x000107c2bb28(puVar4,1);
      func_0x000107c61180();
      func_0x000107c61170();
    }
  }
  func_0x000107c2bb14(0x3ff0000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb0c(puVar4,*(undefined8 *)(param_2 + _DAT_11303c218));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb24(puVar4,*(undefined1 *)(param_2 + _DAT_11303c248));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb2c(puVar4,1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar6 = PTR_PTR_1126c4a90;
  func_0x000107c610f8(PTR_PTR_1126c4a90);
  func_0x000107c453e4();
  func_0x000107c61174(uVar14);
  puVar9 = puVar4;
  func_0x000107c2bb34(puVar4);
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c2bb44(puVar6);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126de9f0;
  func_0x000107c610f8();
  func_0x000107c2bad8();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  lVar8 = 0x112dec740;
  FUN_101a378c0(0x112dec740,&PTR_PTR_1126de9f0,0x112dec748,&UNK_10d9b8548);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a33e74);
    (*pcVar1)();
  }
  *(undefined **)(lVar8 + 0x20) = puVar11;
  puVar9 = PTR_PTR_1126bf7c0;
  func_0x000107c610f8(PTR_PTR_1126bf7c0);
  uVar7 = 0;
  func_0x000101a39390(0,0x112dec740,&PTR_PTR_1126de9f0);
  func_0x000107c61174(puVar11);
  lVar12 = lVar8;
  func_0x000107c5fc48(lVar8,uVar7);
  func_0x000107c61574(lVar8);
  func_0x000107c2bac8(puVar9,uVar14,lVar12);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar12);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    func_0x000107c3f4d4(lStack_68);
    func_0x000107c615e8(lStack_68);
  }
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 101a33e74; end: 101a33edf; -[_TtC25SCSnapVideoTranscoderImpl23SnapVideoTranscoderImpl cancelTranscodingFor:configuration:] */

/* WARNING: Possible PIC construction at 0x000101a33ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a33ec4) */

void FUN_101a33e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101a3360c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101a33ee0; end: 101a33f0f;  */

void FUN_101a33ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a33f10,0,0);
  return;
}



/* Entry: 101a33f10; end: 101a34093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a33f10(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  long unaff_x22;
  
  puVar3 = *(undefined8 **)(*(long *)(unaff_x22 + 0x2b0) + _DAT_11303c208);
  func_0x000107c41828();
  *(undefined8 **)(unaff_x22 + 0x2e0) = puVar3;
  if (puVar3 == (undefined8 *)0x2) {
    uVar9 = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112dec700);
    puVar3 = (undefined8 *)0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efc99e0);
    func_0x000107c3ebd4();
    func_0x000107c61170();
    uVar8 = uVar9 ^ 1;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
  }
  *(char *)(unaff_x22 + 0x3be) = (char)uVar9;
  *(char *)(unaff_x22 + 0x3bd) = (char)uVar8;
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x2e8) = puVar3;
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001f;
  func_0x000100029b28(0xd00000000000001f,0x800000010efc9930);
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar5;
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar2 = *(long *)(unaff_x22 + 0x168);
  func_0x0001000a8868(unaff_x22 + 0x148,uVar4);
  piVar7 = *(int **)(lVar2 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2f8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a34094;
                    /* WARNING: Could not recover jumptable at 0x000101a34090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(*(undefined8 *)(unaff_x22 + 0x2a8),uVar8,1,uVar4,lVar2);
  return;
}



/* Entry: 101a34094; end: 101a34103;  */

void FUN_101a34094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x300) = param_1;
  *(undefined8 *)(lVar2 + 0x308) = param_2;
  *(undefined8 *)(lVar2 + 0x310) = param_3;
  *(undefined8 *)(lVar2 + 0x318) = param_4;
  *(long *)(lVar2 + 800) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a34104;
  }
  else {
    pcVar1 = FUN_101a35218;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a34104; end: 101a34843;  */

/* WARNING: Removing unreachable block (ram,0x000101a3423c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a34104(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar17 = *(long *)(unaff_x22 + 800);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
  puVar13 = *(undefined8 **)(unaff_x22 + 0x2e8);
  func_0x0001000834e4(unaff_x22 + 0x148);
  func_0x000107c61428(puVar13,unaff_x22 + 0x200,0,0);
  uVar3 = *puVar13;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c5fd64();
  if (lVar17 != 0) {
    func_0x000107c614ac(lVar17);
  }
  puVar13 = *(undefined8 **)(unaff_x22 + 0x2e8);
  bVar1 = *(byte *)(unaff_x22 + 0x3bd);
  *(undefined8 *)(unaff_x22 + 0x278) = 0;
  func_0x000107c61428(puVar13,unaff_x22 + 0x218,0,0);
  uVar3 = *puVar13;
  func_0x000107c61174(uVar3);
  uVar15 = 0xd000000000000024;
  func_0x000100029b28(0xd000000000000024,0x800000010efc9950);
  *(undefined8 *)(unaff_x22 + 0x328) = uVar15;
  func_0x000107c61170(uVar3);
  if ((bVar1 & 1) == 0) {
    plVar9 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x330) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101a34844;
    lVar21 = *(long *)(unaff_x22 + 0x310);
    lVar7 = *(long *)(unaff_x22 + 0x308);
    lVar17 = *(long *)(unaff_x22 + 0x300);
    lVar16 = *(long *)(unaff_x22 + 0x2d8);
    lVar12 = *(long *)(unaff_x22 + 0x2a8);
    plVar9[6] = *(long *)(unaff_x22 + 0x318);
    plVar9[7] = lVar16;
    plVar9[4] = lVar7;
    plVar9[5] = lVar21;
    plVar9[2] = lVar12;
    plVar9[3] = lVar17;
    pcVar10 = FUN_101a354e4;
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x360) = 0xf000000000000000;
    *(undefined8 *)(unaff_x22 + 0x358) = 0;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x2e8);
    func_0x000107c61428(puVar13,unaff_x22 + 0x248,0,0);
    uVar3 = *puVar13;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar15);
    func_0x000107c61170(uVar3);
    func_0x000107c5fd64();
    uVar4 = *(ulong *)(unaff_x22 + 0x2a8);
    *(undefined4 *)(unaff_x22 + 0x3b8) = 0;
    *(undefined1 *)(unaff_x22 + 0x3bc) = 1;
    func_0x000107c444cc();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5e304();
      if (((int)uVar5 == 0) || (uVar5 = uVar4, func_0x000107c44d98(), (int)uVar5 == 0)) {
        func_0x000107c61170(uVar4);
      }
      else {
        uVar5 = uVar4;
        func_0x000107c5e304();
        uVar6 = uVar4;
        func_0x000107c44d98();
        func_0x000107c61170(uVar4);
        *(float *)(unaff_x22 + 0x3b8) = (float)(uVar5 & 0xffffffff) / (float)(uVar6 & 0xffffffff);
        *(undefined1 *)(unaff_x22 + 0x3bc) = 0;
      }
    }
    *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2b0);
    if (*(long *)(unaff_x22 + 0x2e0) == 2) {
      iVar14 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112dec700);
      func_0x000107c61174();
      uVar3 = 0xd00000000000002b;
      uVar15 = 0x800000010efc99b0;
      func_0x000107c5fadc(0xd00000000000002b,0x800000010efc99b0);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar3);
      if (iVar14 != 0) {
        lVar7 = *(long *)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112dec6e8);
        func_0x000107c42428();
        func_0x000107c61180();
        lVar17 = lVar7;
        func_0x000107c43410();
        func_0x000107c61180();
        if (lVar17 == 0) {
          lVar21 = 0;
          uVar15 = 0;
        }
        else {
          lVar21 = lVar17;
          func_0x000107c5faec();
          func_0x000107c61170(lVar17);
        }
        uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
        func_0x000103faeb14(lVar21,uVar15);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar15);
        *(long *)(unaff_x22 + 0x280) = lVar21;
      }
    }
    else {
      func_0x000107c61174();
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x2e8);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x3be);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
    func_0x000107c61428(puVar13,unaff_x22 + 0x260,0,0);
    uVar15 = *puVar13;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
    *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x280;
    *(long *)(unaff_x22 + 0x50) = unaff_x22 + 0x278;
    *(undefined1 *)(unaff_x22 + 0x58) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar20;
    *(long *)(unaff_x22 + 0x68) = unaff_x22 + 0x3b8;
    uVar3 = 0;
    func_0x000101a39390(0,0x112dec758,&PTR_PTR_1126bf7c0);
    func_0x000107c61174();
    func_0x0001048d866c(unaff_x22 + 0x288,0xd000000000000024,0x800000010efc9980,FUN_101a38dd8,
                        unaff_x22 + 0x10,uVar3);
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0x368) = uVar3;
    FUN_101a330bc();
    *(undefined8 *)(unaff_x22 + 0x370) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar23;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar26;
    puVar8 = &UNK_11042e048;
    func_0x000107c613fc(&UNK_11042e048,0x18,7);
    *(undefined **)(unaff_x22 + 0x378) = puVar8;
    func_0x000107c61614(puVar8 + 0x10,uVar19);
    *(undefined **)(unaff_x22 + 0x1c0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar3;
    iVar14 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar14 != 0) {
      plVar9 = (long *)(ulong)*(uint *)(
                                       PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x380) = plVar9;
      uVar3 = 0;
      func_0x000101a39390(0,0x112dec760,&PTR_PTR_1126de9e8);
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_101a34f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )(unaff_x22 + 0x290,&UNK_10d9b8620,unaff_x22 + 0x70,FUN_101a38ea4,unaff_x22 + 0x1b0,0,0,uVar3)
      ;
      return;
    }
    pcVar10 = FUN_101a38ea4;
    func_0x000107c615b4(FUN_101a38ea4,unaff_x22 + 0x1b0);
    *(code **)(unaff_x22 + 0x388) = pcVar10;
    func_0x0001000d224c(unaff_x22 + 0x298);
    lVar17 = *(long *)(unaff_x22 + 0x298);
    *(long *)(unaff_x22 + 0x390) = lVar17;
    if (lVar17 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x2d8);
      lVar21 = *(long *)(unaff_x22 + 0x2b8);
      *(long *)(unaff_x22 + 0x198) = unaff_x22 + 0x2a0;
      *(long *)(unaff_x22 + 0x170) = unaff_x22;
      *(code **)(unaff_x22 + 0x178) = FUN_101a34f94;
      lVar7 = unaff_x22 + 0x170;
      func_0x000107c61448(lVar7,1);
      puVar8 = &UNK_11042e048;
      func_0x000107c613fc(&UNK_11042e048,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,uVar3);
      puVar11 = &UNK_11042e200;
      func_0x000107c613fc(&UNK_11042e200,0x20,7);
      *(undefined **)(puVar11 + 0x10) = puVar8;
      *(long *)(puVar11 + 0x18) = lVar7;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x101a39794;
      *(undefined **)(unaff_x22 + 0xe0) = puVar11;
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0xb8) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0x42000000;
      *(code **)(unaff_x22 + 200) = FUN_101a37074;
      *(undefined **)(unaff_x22 + 0xd0) = &UNK_11042e218;
      lVar7 = unaff_x22 + 0xb8;
      func_0x000107c60bc4(lVar7);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
      if (lVar21 == 0) {
        lVar21 = 0;
        lVar12 = *(long *)(unaff_x22 + 0x2c8);
      }
      else {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x2c0);
        *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x2c0);
        *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x2b8);
        *(undefined **)(unaff_x22 + 0x118) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x120) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x128) = &UNK_1015298e4;
        *(undefined **)(unaff_x22 + 0x130) = &UNK_11042e268;
        lVar21 = unaff_x22 + 0x118;
        func_0x000107c60bc4(lVar21);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
        func_0x000107c6157c(uVar3);
        func_0x000107c61574(uVar15);
        lVar12 = *(long *)(unaff_x22 + 0x2c8);
      }
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x2d0);
        *(long *)(unaff_x22 + 0x108) = lVar12;
        *(undefined8 *)(unaff_x22 + 0x110) = uVar3;
        *(undefined **)(unaff_x22 + 0xe8) = puVar8;
        *(undefined8 *)(unaff_x22 + 0xf0) = 0x42000000;
        *(code **)(unaff_x22 + 0xf8) = FUN_101a370fc;
        *(undefined **)(unaff_x22 + 0x100) = &UNK_11042e240;
        lVar12 = unaff_x22 + 0xe8;
        func_0x000107c60bc4(lVar12);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
        func_0x000107c6157c(uVar3);
        func_0x000107c61574(uVar15);
      }
      func_0x000107c5c308(lVar17);
      func_0x000107c60bd0(lVar12);
      func_0x000107c60bd0(lVar21);
      func_0x000107c60bd0(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x170);
      return;
    }
    FUN_101a38c00();
    puVar8 = &UNK_11042e3d8;
    func_0x000107c613f8(&UNK_11042e3d8,pcVar10,0,0);
    *(undefined8 *)pcVar10 = 2;
    func_0x000107c61654();
    func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x388));
    *(undefined **)(unaff_x22 + 0x3b0) = puVar8;
    pcVar10 = FUN_101a35168;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar10,0,0);
  return;
}



/* Entry: 101a34844; end: 101a348af;  */

void FUN_101a34844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x338) = param_1;
  *(undefined8 *)(lVar2 + 0x340) = param_2;
  *(undefined8 *)(lVar2 + 0x348) = param_3;
  *(long *)(lVar2 + 0x350) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x330));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a348b0;
  }
  else {
    pcVar1 = FUN_101a35288;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a348b0; end: 101a34f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a348b0(void)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar14 = *(long *)(unaff_x22 + 0x338);
  if (lVar14 == 0) {
    uVar15 = 0xf000000000000000;
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x340);
    lVar5 = lVar14;
    func_0x000107c61174(lVar14);
    func_0x00010006c00c(uVar15,uVar11);
    func_0x000107c61170(lVar5);
    func_0x00010006c090(uVar15,uVar11);
    *(long *)(unaff_x22 + 0x278) = lVar14;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x340);
  }
  lVar14 = *(long *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0x360) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x358) = uVar11;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x2e8);
  func_0x000107c61428(puVar12,unaff_x22 + 0x248,0,0);
  uVar11 = *puVar12;
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c5fd64();
  if (lVar14 != 0) {
    func_0x000107c614ac(lVar14);
  }
  uVar2 = *(ulong *)(unaff_x22 + 0x2a8);
  *(undefined4 *)(unaff_x22 + 0x3b8) = 0;
  *(undefined1 *)(unaff_x22 + 0x3bc) = 1;
  func_0x000107c444cc();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5e304();
    if (((int)uVar3 == 0) || (uVar3 = uVar2, func_0x000107c44d98(), (int)uVar3 == 0)) {
      func_0x000107c61170(uVar2);
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5e304();
      uVar4 = uVar2;
      func_0x000107c44d98();
      func_0x000107c61170(uVar2);
      *(float *)(unaff_x22 + 0x3b8) = (float)(uVar3 & 0xffffffff) / (float)(uVar4 & 0xffffffff);
      *(undefined1 *)(unaff_x22 + 0x3bc) = 0;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2b0);
  if (*(long *)(unaff_x22 + 0x2e0) == 2) {
    iVar13 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112dec700);
    func_0x000107c61174();
    uVar11 = 0xd00000000000002b;
    uVar15 = 0x800000010efc99b0;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efc99b0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar11);
    if (iVar13 != 0) {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x2d8) + _DAT_112dec6e8);
      func_0x000107c42428();
      func_0x000107c61180();
      lVar14 = lVar5;
      func_0x000107c43410();
      func_0x000107c61180();
      if (lVar14 == 0) {
        lVar19 = 0;
        uVar15 = 0;
      }
      else {
        lVar19 = lVar14;
        func_0x000107c5faec();
        func_0x000107c61170(lVar14);
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x2b0);
      func_0x000103faeb14(lVar19,uVar15);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar11);
      func_0x000107c6142c(uVar15);
      *(long *)(unaff_x22 + 0x280) = lVar19;
    }
  }
  else {
    func_0x000107c61174();
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x300);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x2e8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3be);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
  func_0x000107c61428(puVar12,unaff_x22 + 0x260,0,0);
  uVar15 = *puVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x280;
  *(long *)(unaff_x22 + 0x50) = unaff_x22 + 0x278;
  *(undefined1 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
  *(long *)(unaff_x22 + 0x68) = unaff_x22 + 0x3b8;
  uVar11 = 0;
  func_0x000101a39390(0,0x112dec758,&PTR_PTR_1126bf7c0);
  func_0x000107c61174();
  func_0x0001048d866c(unaff_x22 + 0x288,0xd000000000000024,0x800000010efc9980,FUN_101a38dd8,
                      unaff_x22 + 0x10,uVar11);
  func_0x000107c61170();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0x368) = uVar11;
  FUN_101a330bc();
  *(undefined8 *)(unaff_x22 + 0x370) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar21;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar20;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar24;
  puVar6 = &UNK_11042e048;
  func_0x000107c613fc(&UNK_11042e048,0x18,7);
  *(undefined **)(unaff_x22 + 0x378) = puVar6;
  func_0x000107c61614(puVar6 + 0x10,uVar17);
  *(undefined **)(unaff_x22 + 0x1c0) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar11;
  iVar13 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar13 == 0) {
    pcVar8 = FUN_101a38ea4;
    func_0x000107c615b4(FUN_101a38ea4,unaff_x22 + 0x1b0);
    *(code **)(unaff_x22 + 0x388) = pcVar8;
    func_0x0001000d224c(unaff_x22 + 0x298);
    lVar14 = *(long *)(unaff_x22 + 0x298);
    *(long *)(unaff_x22 + 0x390) = lVar14;
    if (lVar14 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
      lVar19 = *(long *)(unaff_x22 + 0x2b8);
      *(long *)(unaff_x22 + 0x198) = unaff_x22 + 0x2a0;
      *(long *)(unaff_x22 + 0x170) = unaff_x22;
      *(code **)(unaff_x22 + 0x178) = FUN_101a34f94;
      lVar5 = unaff_x22 + 0x170;
      func_0x000107c61448(lVar5,1);
      puVar6 = &UNK_11042e048;
      func_0x000107c613fc(&UNK_11042e048,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar11);
      puVar9 = &UNK_11042e200;
      func_0x000107c613fc(&UNK_11042e200,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar6;
      *(long *)(puVar9 + 0x18) = lVar5;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x101a39794;
      *(undefined **)(unaff_x22 + 0xe0) = puVar9;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0xb8) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0x42000000;
      *(code **)(unaff_x22 + 200) = FUN_101a37074;
      *(undefined **)(unaff_x22 + 0xd0) = &UNK_11042e218;
      lVar5 = unaff_x22 + 0xb8;
      func_0x000107c60bc4(lVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
      if (lVar19 == 0) {
        lVar19 = 0;
        lVar10 = *(long *)(unaff_x22 + 0x2c8);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x2c0);
        *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x2c0);
        *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x2b8);
        *(undefined **)(unaff_x22 + 0x118) = puVar6;
        *(undefined8 *)(unaff_x22 + 0x120) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x128) = &UNK_1015298e4;
        *(undefined **)(unaff_x22 + 0x130) = &UNK_11042e268;
        lVar19 = unaff_x22 + 0x118;
        func_0x000107c60bc4(lVar19);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
        func_0x000107c6157c(uVar11);
        func_0x000107c61574(uVar15);
        lVar10 = *(long *)(unaff_x22 + 0x2c8);
      }
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x2d0);
        *(long *)(unaff_x22 + 0x108) = lVar10;
        *(undefined8 *)(unaff_x22 + 0x110) = uVar11;
        *(undefined **)(unaff_x22 + 0xe8) = puVar6;
        *(undefined8 *)(unaff_x22 + 0xf0) = 0x42000000;
        *(code **)(unaff_x22 + 0xf8) = FUN_101a370fc;
        *(undefined **)(unaff_x22 + 0x100) = &UNK_11042e240;
        lVar10 = unaff_x22 + 0xe8;
        func_0x000107c60bc4(lVar10);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
        func_0x000107c6157c(uVar11);
        func_0x000107c61574(uVar15);
      }
      func_0x000107c5c308(lVar14);
      func_0x000107c60bd0(lVar10);
      func_0x000107c60bd0(lVar19);
      func_0x000107c60bd0(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x170);
      return;
    }
    FUN_101a38c00();
    puVar6 = &UNK_11042e3d8;
    func_0x000107c613f8(&UNK_11042e3d8,pcVar8,0,0);
    *(undefined8 *)pcVar8 = 2;
    func_0x000107c61654();
    func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x388));
    *(undefined **)(unaff_x22 + 0x3b0) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a35168,0,0);
    return;
  }
  plVar7 = (long *)(ulong)*(uint *)(
                                   PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x380) = plVar7;
  uVar11 = 0;
  func_0x000101a39390(0,0x112dec760,&PTR_PTR_1126de9e8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101a34f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
  )(unaff_x22 + 0x290,&UNK_10d9b8620,unaff_x22 + 0x70,FUN_101a38ea4,unaff_x22 + 0x1b0,0,0,uVar11);
  return;
}



/* Entry: 101a34f28; end: 101a34f93;  */

void FUN_101a34f28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x380));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x378));
    *(undefined8 *)(lVar2 + 0x3a8) = *(undefined8 *)(lVar2 + 0x290);
    pcVar1 = FUN_101a350a8;
  }
  else {
    *(long *)(lVar2 + 0x3b0) = unaff_x20;
    pcVar1 = FUN_101a35168;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a34f94; end: 101a34fff;  */

void FUN_101a34f94(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x398) = *(long *)(lVar2 + 400);
  if (*(long *)(lVar2 + 400) == 0) {
    *(undefined8 *)(lVar2 + 0x3a0) = *(undefined8 *)(lVar2 + 0x2a0);
    pcVar1 = FUN_101a35000;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a3505c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a35000; end: 101a3505b;  */

void FUN_101a35000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x378);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x390));
  func_0x000107c615d8(uVar2);
  func_0x000107c61574(uVar1);
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x3a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a350a8,0,0);
  return;
}



/* Entry: 101a3505c; end: 101a350a7;  */

void FUN_101a3505c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x390));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x398);
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x388));
  *(undefined8 *)(unaff_x22 + 0x3b0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a35168,0,0);
  return;
}



/* Entry: 101a350a8; end: 101a35167;  */

void FUN_101a350a8(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
  cVar1 = *(char *)(unaff_x22 + 0x3be);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x368));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000b44c0(uVar4,uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x358);
  if (cVar1 == '\x01') {
    func_0x0001000b44c0(uVar2,uVar3);
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x000101a35164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x3a8),uVar2,uVar3);
  return;
}



/* Entry: 101a35168; end: 101a35217;  */

void FUN_101a35168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x358),*(undefined8 *)(unaff_x22 + 0x360));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x0001000b44c0(uVar5,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x000101a35214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a35218; end: 101a35287;  */

void FUN_101a35218(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x2e8);
  func_0x0001000834e4(unaff_x22 + 0x148);
  func_0x000107c61428(puVar2,unaff_x22 + 0x1e8,0,0);
  uVar1 = *puVar2;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a35284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a35288; end: 101a3532b;  */

void FUN_101a35288(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x2e8);
  func_0x000107c61428(puVar7,unaff_x22 + 0x230,0,0);
  uVar1 = *puVar7;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000b44c0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a35328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a3532c; end: 101a354c3;  */

void FUN_101a3532c(ulong param_1,undefined *param_2,undefined *param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  puVar4 = param_2;
  func_0x000107c5ede0();
  lVar7 = *(long *)(puVar1 + -8);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = puVar6 + -extraout_x12;
  if ((param_1 & 1) != 0) {
    puVar3 = param_2;
    func_0x000107c2bad0();
    func_0x000107c61180();
    puVar2 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c5edb4(puVar6);
      func_0x000107c61170(puVar3);
      (**(code **)(lVar7 + 0x20))(puVar5,puVar6,puVar1);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      param_2 = puVar2;
      func_0x000107c5ed90();
      puStack_50 = (undefined *)0x0;
      param_4 = &puStack_50;
      puVar4 = puVar2;
      param_3 = param_2;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_2);
      puVar2 = puStack_50;
      if ((int)puVar4 == 0) {
        param_2 = puStack_50;
        func_0x000107c61174();
        func_0x000107c5ed30(puVar2);
        func_0x000107c61170(param_2);
        func_0x000107c61654();
        func_0x000107c614ac(puVar2);
      }
      else {
        func_0x000107c61174(puStack_50);
      }
      puVar2 = puVar5;
      (**(code **)(lVar7 + 8))();
      puVar4 = puVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)(param_2 + 0x30) = param_5;
  *(undefined **)(param_2 + 0x38) = puVar5;
  *(undefined **)(param_2 + 0x20) = param_3;
  *(undefined ***)(param_2 + 0x28) = param_4;
  *(undefined **)(param_2 + 0x10) = puVar2;
  *(undefined **)(param_2 + 0x18) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a354e4,0,0);
  return;
}



/* Entry: 101a354c4; end: 101a354e3;  */

void FUN_101a354c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a354e4,0,0);
  return;
}



/* Entry: 101a354e4; end: 101a3567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a354e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x30);
  iVar3 = (int)*(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4491c();
  if (iVar3 == 0 || 0xe < uVar11 >> 0x3c) {
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar4;
    pcVar8 = (code *)0x101a35844;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar10 = *(long *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x40) =
         *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112dec710);
    func_0x00010006c00c(lVar10,uVar7);
    FUN_101a39ba8(lVar10,uVar7);
    if (lVar10 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112dec708);
      uVar5 = 0x69685f6568636163;
      func_0x000107c5fadc(0x69685f6568636163,0xe900000000000074);
      func_0x000105655164(uVar13,uVar5,1);
      func_0x0001000b44c0(uVar12,uVar1);
      func_0x000107c61170(uVar5);
      lVar6 = lVar10;
      func_0x000107c61174(lVar10);
      func_0x00010006c00c(uVar7,param_3);
      func_0x00010006c090(uVar7,param_3);
      func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000101a3562c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(lVar10,uVar7,param_3);
      return;
    }
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    pcVar8 = FUN_101a3567c;
  }
  *plVar4 = unaff_x22;
  plVar4[1] = (long)pcVar8;
  lVar6 = *(long *)(unaff_x22 + 0x38);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar9 = *(long *)(unaff_x22 + 0x18);
  plVar4[10] = *(long *)(unaff_x22 + 0x30);
  plVar4[0xb] = lVar6;
  plVar4[8] = lVar10;
  plVar4[9] = lVar2;
  plVar4[7] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a37168,0,0);
  return;
}



/* Entry: 101a3567c; end: 101a356df;  */

void FUN_101a3567c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a356e0;
  }
  else {
    *(long *)(lVar2 + 0x58) = unaff_x20;
    pcVar1 = FUN_101a35810;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a356e0; end: 101a3580f;  */

void FUN_101a356e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x50);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
    uVar3 = 0;
    puVar5 = (undefined8 *)0x0;
    param_2 = 0;
  }
  else {
    puVar2 = puVar6;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar2 == (undefined8 *)0x0) {
      FUN_101a38c00();
      puVar4 = &UNK_11042e3d8;
      func_0x000107c613f8(&UNK_11042e3d8,puVar2,0,0);
      *puVar2 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar6);
      *(undefined **)(unaff_x22 + 0x58) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101a35810,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar5 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    func_0x000101a39cc0(uVar3,uVar1,puVar6,puVar5,param_2);
    func_0x0001000b44c0(uVar3,uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a357a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,puVar5,param_2);
  return;
}



/* Entry: 101a35810; end: 101a358ab;  */

void FUN_101a35810(void)

{
  long unaff_x22;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000101a35840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a358ac; end: 101a3597f;  */

void FUN_101a358ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x68);
  if (puVar3 == (undefined8 *)0x0) {
    uVar2 = 0;
    param_2 = 0;
  }
  else {
    puVar1 = puVar3;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar1 == (undefined8 *)0x0) {
      FUN_101a38c00();
      func_0x000107c613f8(&UNK_11042e3d8,puVar1,0,0);
      *puVar1 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a3597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    puVar3 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a35928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,puVar3,param_2);
  return;
}



/* Entry: 101a35980; end: 101a3653f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a35980(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,ulong *param_8,uint param_9,
                  ulong param_10,float *param_11)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lVar19 = *param_7;
  uVar17 = *param_8;
  func_0x000103aeb250(0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000100de78a0(param_5,param_6);
  uVar4 = uVar17;
  func_0x000107c61174();
  func_0x000103ae9d4c(&uStack_c0,param_10);
  fVar23 = *param_11;
  cVar1 = *(char *)(param_11 + 1);
  uVar5 = param_10;
  FUN_101a38eac();
  FUN_101a39098();
  puVar6 = PTR_PTR_1126bf7a8;
  func_0x000107c610f8(PTR_PTR_1126bf7a8);
  func_0x000107c453e4();
  lVar12 = _DAT_11303c208;
  uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c208);
  func_0x000107c41828(uVar7);
  func_0x000107c2baec(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2baf0(puVar6,*(undefined8 *)(lVar19 + lVar12));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bae8(puVar6,*(undefined8 *)(lVar19 + _DAT_11303c210));
  func_0x000107c61180();
  func_0x000107c61170();
  uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c220);
  func_0x000107c5fadc(uVar7,((undefined8 *)(lVar19 + _DAT_11303c220))[1]);
  puVar8 = puVar6;
  func_0x000107c2baf4(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c230);
  func_0x000107c5fadc(uVar7,((undefined8 *)(lVar19 + _DAT_11303c230))[1]);
  puVar8 = puVar6;
  func_0x000107c2bafc(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  if (((undefined8 *)(lVar19 + _DAT_11303c238))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c238);
    func_0x000107c5fadc(uVar7);
  }
  puVar8 = puVar6;
  func_0x000107c2bb20(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c228);
  func_0x000107c5fadc(uVar7,((undefined8 *)(lVar19 + _DAT_11303c228))[1]);
  puVar8 = puVar6;
  func_0x000107c2baf8(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  if (((undefined8 *)(lVar19 + _DAT_11303c250))[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar19 + _DAT_11303c250);
    func_0x000107c5fadc(uVar7);
  }
  puVar8 = puVar6;
  func_0x000107c2bb1c(puVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  lVar9 = *(long *)(lVar19 + _DAT_11303c258);
  if (lVar9 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    puVar8 = puVar6;
    func_0x000107c2bb30(puVar6,lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar8);
  }
  if ((param_10 & 1) == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (uint)*(undefined8 *)(param_2 + _DAT_112dec700);
    uVar7 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efc8e20);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar7);
  }
  uVar10 = param_3;
  FUN_101a37cb4();
  uVar15 = param_3;
  func_0x000107c309c0();
  func_0x000107c61180();
  uVar22 = uVar15;
  func_0x000107c30970();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  uVar7 = 0;
  func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar15 = uVar22;
  func_0x000107c5fc54(uVar22,uVar7);
  func_0x000107c61170(uVar22);
  if (uVar15 >> 0x3e == 0) {
    uVar22 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar22 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar22 = uVar15;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar15);
  if (uVar22 == 1) {
    uVar15 = param_3;
    func_0x000107c309c0();
    func_0x000107c61180();
    uVar22 = uVar15;
    func_0x000107c30970();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    uVar15 = uVar22;
    func_0x000107c5fc54(uVar22,uVar7);
    func_0x000107c61170(uVar22);
    if (uVar15 >> 0x3e == 0) {
      uVar22 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar22 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar22 = uVar15;
      }
      func_0x000107c60480();
    }
    if (uVar22 == 0) {
      func_0x000107c6142c(uVar15);
      uVar18 = 1;
    }
    else {
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a36534);
          (*pcVar2)();
        }
        uVar22 = *(ulong *)(uVar15 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar22 = 0;
        func_0x000101a37938(0,uVar15,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      func_0x000107c6142c(uVar15);
      uVar15 = uVar22;
      func_0x000107c30980();
      func_0x000107c61180();
      func_0x000107c61170(uVar22);
      uVar7 = 0;
      func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
      uVar22 = uVar15;
      func_0x000107c5fc54(uVar15,uVar7);
      func_0x000107c61170(uVar15);
      if (uVar22 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar22 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar22) {
          uVar15 = uVar22;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar22);
      uVar18 = (uint)(uVar15 != 1);
    }
  }
  else {
    uVar18 = 1;
  }
  uVar21 = (uint)param_3;
  FUN_101a38374();
  uVar16 = (uint)*(undefined8 *)(param_2 + _DAT_112dec700);
  uVar7 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc9820);
  uVar3 = uVar16;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar7);
  uVar3 = uVar3 | (uint)uVar5 & (uVar18 | uVar21) | uVar20 | (uint)uVar10;
  if ((uVar3 & 1) != 0) {
    func_0x000107c2bb08(0x4090e00000000000,0x409e000000000000,puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  uVar5 = param_3;
  func_0x000101a38600();
  uVar10 = *(ulong *)(lVar19 + lVar12);
  func_0x000107c49dd0();
  uVar3 = uVar3 ^ 1;
  if ((((uVar3 & 1) == 0) && ((uVar5 & 1) != 0)) && ((uVar10 & 1) == 0)) {
    func_0x000107c308b8(0x4090e00000000000,0x409e000000000000,0x500);
    func_0x000107c308bc(2);
    func_0x000107c2bb04(puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c2bb00(puVar6,1400000);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if (((uVar21 | uVar3) & 1) == 0) {
    uVar7 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efc9850);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar7);
    if (uVar16 != 0) {
      func_0x000107c2bb28(puVar6,1);
      func_0x000107c61180();
      func_0x000107c61170();
    }
  }
  func_0x000107c2bb14(0x3ff0000000000000,puVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb0c(puVar6,*(undefined8 *)(lVar19 + _DAT_11303c218));
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb24(puVar6,*(undefined1 *)(lVar19 + _DAT_11303c248));
  func_0x000107c61180();
  func_0x000107c61170();
  if (cVar1 != '\x01') {
    func_0x000107c2bb18((double)fVar23,puVar6);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x000107c2bb2c(puVar6,1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar8 = PTR_PTR_1126c4a90;
  func_0x000107c610f8(PTR_PTR_1126c4a90);
  func_0x000107c453e4();
  uVar5 = param_3;
  if (uVar17 == 0) {
    func_0x000107c61174(param_3);
  }
  else {
    uVar17 = uVar4;
    func_0x000107c61174();
    uVar10 = uVar17;
    func_0x000109122598();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a3653c);
      (*pcVar2)();
    }
    uVar15 = uVar17;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (uVar15 == 0) {
      uVar15 = 0;
      uVar22 = 0;
      uVar10 = 0xf000000000000000;
    }
    else {
      uVar22 = uVar15;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar15);
      func_0x00010006c00c(uVar22,uVar10);
      uVar15 = uVar22;
      func_0x000107c5ee20(uVar22,uVar10);
      func_0x00010006c090(uVar22,uVar10);
    }
    puVar11 = puVar6;
    func_0x000107c2bb10(puVar6,uVar15);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar11);
    if (uVar10 >> 0x3c < 0xf) {
      func_0x00010006c00c(uVar22,uVar10);
      uVar15 = uVar22;
      func_0x000107c5ee20(uVar22,uVar10);
      func_0x0001000b44c0(uVar22,uVar10);
    }
    else {
      uVar15 = 0;
    }
    puVar11 = puVar8;
    func_0x000107c2bb40(puVar8,uVar15);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar11);
    func_0x000107c2bb38(puVar8,(param_9 ^ 0xffffffff) & 1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x0001000b44c0(uVar22,uVar10);
    func_0x000107c61170(uVar17);
  }
  if (lStack_b8 != 0) {
    lVar12 = 0x112dec768;
    FUN_101a378c0(0x112dec768,&PTR_PTR_1126c4798,0x112dec770,&UNK_10d9b8630);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 3;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    puVar11 = PTR_PTR_1126c4798;
    func_0x000107c610f8();
    uVar7 = uStack_c0;
    func_0x000107c5fadc(uStack_c0,lStack_b8);
    func_0x000107c46944();
    func_0x000107c61170(uVar7);
    if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a36540);
      (*pcVar2)();
    }
    *(undefined **)(lVar12 + 0x20) = puVar11;
    uVar7 = 0;
    func_0x000101a39390(0,0x112dec768,&PTR_PTR_1126c4798);
    lVar9 = lVar12;
    func_0x000107c5fc48(lVar12,uVar7);
    func_0x000107c61574(lVar12);
    puVar11 = puVar8;
    func_0x000107c2bb3c(puVar8,lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar11);
  }
  puVar11 = puVar6;
  func_0x000107c2bb34(puVar6);
  func_0x000107c61180();
  puVar13 = puVar8;
  func_0x000107c2bb44(puVar8);
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126de9f0;
  func_0x000107c610f8();
  func_0x000107c2bad8();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar13);
  lVar12 = 0x112dec740;
  FUN_101a378c0(0x112dec740,&PTR_PTR_1126de9f0,0x112dec748,&UNK_10d9b8548);
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 3;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a36538);
    (*pcVar2)();
  }
  *(undefined **)(lVar12 + 0x20) = puVar14;
  puVar11 = PTR_PTR_1126bf7c0;
  func_0x000107c610f8();
  uVar7 = 0;
  func_0x000101a39390(0,0x112dec740,&PTR_PTR_1126de9f0);
  func_0x000107c61174(puVar14);
  lVar9 = lVar12;
  func_0x000107c5fc48(lVar12,uVar7);
  func_0x000107c61574(lVar12);
  func_0x000107c2bac8(puVar11,uVar5,lVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar9);
  func_0x000101a39350(&uStack_c0,0x112deb530,&UNK_10d9b82d0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(uVar4);
  func_0x0001000b44c0(param_5,param_6);
  *param_1 = puVar11;
  return;
}



/* Entry: 101a36540; end: 101a36563;  */

void FUN_101a36540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36564,0,0);
  return;
}



/* Entry: 101a36564; end: 101a367a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a36564(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 200) = lVar6;
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101a367a8;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    puVar2 = &UNK_11042e048;
    func_0x000107c613fc(&UNK_11042e048,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,uVar5);
    puVar3 = &UNK_11042e2a0;
    func_0x000107c613fc(&UNK_11042e2a0,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101a39798;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_101a37074;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11042e2b8;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    if (lVar7 == 0) {
      lVar7 = 0;
      lVar4 = *(long *)(unaff_x22 + 0xb8);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined **)(unaff_x22 + 0x50) = puVar2;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1015298e4;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11042e308;
      lVar7 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar7);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c6157c(uVar5);
      func_0x000107c61574(uVar8);
      lVar4 = *(long *)(unaff_x22 + 0xb8);
    }
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
      *(long *)(unaff_x22 + 0x70) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
      *(undefined **)(unaff_x22 + 0x50) = puVar2;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_101a370fc;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11042e2e0;
      lVar4 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar4);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c6157c(uVar5);
      func_0x000107c61574(uVar8);
    }
    func_0x000107c5c308(lVar6);
    func_0x000107c60bd0(lVar4);
    func_0x000107c60bd0(lVar7);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_101a38c00();
  func_0x000107c613f8(&UNK_11042e3d8,param_1,0,0);
  *param_1 = 2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101a36744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a367a8; end: 101a36813;  */

void FUN_101a367a8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101a36814;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a36854;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a36814; end: 101a36853;  */

void FUN_101a36814(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101a36850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a36854; end: 101a36887;  */

void FUN_101a36854(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000101a36884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a36888; end: 101a369ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a36888(long param_1)

{
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      func_0x000107c3f4d4(lStack_50);
      func_0x000107c615e8(lStack_50);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101a369ac; end: 101a369c3;  */

void FUN_101a369ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a369c4,0,0);
  return;
}



/* Entry: 101a369c4; end: 101a36b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a369c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0xb0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a36ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  if (lVar4 == 0) {
    FUN_101a38c00();
    func_0x000107c613f8(&UNK_11042e3d8,param_3,0,0);
    *param_3 = 5;
    func_0x000107c61654();
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 200) = *(long *)(unaff_x22 + 0x50);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      func_0x000107c4e1a8(lVar4);
      *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
      *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168();
      *(undefined **)(unaff_x22 + 0xe0) = puVar1;
      uVar2 = 0;
      func_0x000107c5fcec();
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
      uVar3 = uVar2;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
      func_0x000100eea164();
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
      func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36b4c,uVar2,uVar3);
      return;
    }
    FUN_101a38c00();
    func_0x000107c613f8(&UNK_11042e3d8,param_3,0,0);
    *param_3 = 4;
    func_0x000107c61654();
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a36b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a36b4c; end: 101a36b9f;  */

void FUN_101a36b4c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c4c194();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36ba0,0,0);
  return;
}



/* Entry: 101a36ba0; end: 101a36c07;  */

void FUN_101a36ba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36c08,uVar2,uVar1);
  return;
}



/* Entry: 101a36c08; end: 101a36c57;  */

void FUN_101a36c08(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c51820(uVar1);
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36c58,0,0);
  return;
}



/* Entry: 101a36c58; end: 101a36e87;  */

void FUN_101a36c58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c308b0(uVar9,uVar10,*(undefined8 *)(unaff_x22 + 0x110));
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c309b4();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar2 = 0;
    func_0x000101a39390(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    lVar8 = lVar6;
    func_0x000107c5fc54(lVar6,uVar2);
    func_0x000107c61170(lVar6);
    lVar6 = lVar8;
    FUN_101a24f28();
    func_0x000107c6142c(lVar8);
    if (lVar6 != 0) {
      uVar2 = 0x112deb068;
      func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
      lVar8 = lVar6;
      func_0x000107c5fc48(lVar6,uVar2);
      func_0x000107c6142c(lVar6);
      goto LAB_101a36d34;
    }
  }
  lVar8 = 0;
LAB_101a36d34:
  puVar3 = PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  puVar7 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar7 = 0x3ff0000000000000;
  uVar5 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar5;
  func_0x000107c5bbac(uVar9,uVar10);
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  func_0x000107c61170(lVar8);
  func_0x000107c61170(uVar1);
  *(undefined8 **)(unaff_x22 + 0x38) = (undefined8 *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a36e88;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar6,1);
  puVar3 = &UNK_11042e110;
  func_0x000107c613fc(&UNK_11042e110,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar6;
  *(code **)(unaff_x22 + 0x70) = FUN_101a38cac;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10134a1dc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11042e128;
  func_0x000107c60bc4(puVar7);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5dc64(uVar2);
  func_0x000107c60bd0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a36e88; end: 101a36ef3;  */

void FUN_101a36e88(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101a36ef4;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a36f40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a36ef4; end: 101a36f3f;  */

void FUN_101a36ef4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a36f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Entry: 101a36f40; end: 101a36f87;  */

void FUN_101a36f40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a36f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a36f88; end: 101a37073;  */

void FUN_101a36f88(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  plVar1 = (long *)(param_4 + 0x10);
  func_0x000107c61618();
  if (plVar1 != (long *)0x0) {
    func_0x000107c61170();
    if ((param_3 == 0) && (param_2 != 0)) {
      **(long **)(*(long *)(param_5 + 0x40) + 0x28) = param_2;
      func_0x000107c61174(param_2);
      func_0x000107c61450(param_5);
    }
    else {
      FUN_101a38c00();
      puVar2 = &UNK_11042e3d8;
      func_0x000107c613f8(&UNK_11042e3d8,plVar1,0,0);
      *plVar1 = param_3;
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar4 = puVar2;
      func_0x000107c614b0(param_3);
      func_0x000107c61454(param_5,uVar3);
    }
  }
  return;
}



/* Entry: 101a37074; end: 101a370fb;  */

/* WARNING: Possible PIC construction at 0x000101a370dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a370e0) */

void FUN_101a37074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101a370fc; end: 101a37147;  */

void FUN_101a370fc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101a37148; end: 101a37167;  */

void FUN_101a37148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a37168,0,0);
  return;
}



/* Entry: 101a37168; end: 101a37223;  */

void FUN_101a37168(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a371c4;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  plVar3[0x16] = *(long *)(unaff_x22 + 0x40);
  plVar3[0x17] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar4,FUN_101a369c4,0,0,uVar1);
  return;
}



/* Entry: 101a37224; end: 101a3733b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a37224(double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  double dVar5;
  
  if (*(long *)(unaff_x22 + 0x70) == 0) {
    uVar2 = 0;
  }
  else {
    dVar5 = *(double *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + _DAT_112dec708);
    uVar3 = 0x73736563637573;
    uVar2 = uVar3;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000105655164(uVar4,uVar2,1);
    func_0x000107c61170(uVar2);
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000107c6071c();
    dVar5 = (param_1 - dVar5) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a37334);
      (*pcVar1)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a37338);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a3733c);
      (*pcVar1)();
    }
    func_0x0001056552d8(uVar4,uVar3,(long)dVar5);
    func_0x000107c61170(uVar3);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a3732c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101a3733c; end: 101a377b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a3733c(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x78);
  func_0x000107c5ed2c();
  uVar3 = uVar2;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if (uVar4 == 0xd000000000000048 && param_3 == -0x7ffffffef10365f0) {
    func_0x000107c6142c(param_3);
LAB_101a3743c:
    uStack_60 = 0xec00000070726573;
    uVar3 = uVar2;
    func_0x000107c3fcb0();
    *(ulong *)(unaff_x22 + 0x30) = uVar3;
  }
  else {
    lVar6 = param_3;
    func_0x000107c605b8(uVar4,param_3,0xd000000000000048,0x800000010efc9a10,0);
    func_0x000107c6142c(param_3);
    if ((uVar4 & 1) != 0) goto LAB_101a3743c;
    uVar3 = uVar2;
    func_0x000107c42210();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if ((uVar4 == 0xd00000000000004a) && (lVar6 == -0x7ffffffef10365a0)) {
      func_0x000107c6142c(0x800000010efc9a60);
LAB_101a375ac:
      func_0x000107c602fc(0x10);
      func_0x000107c6142c(0xe000000000000000);
      uStack_60 = 0xee006c6770726573;
      uVar3 = uVar2;
      func_0x000107c3fcb0();
      *(ulong *)(unaff_x22 + 0x28) = uVar3;
    }
    else {
      lVar8 = lVar6;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar6);
      if ((uVar4 & 1) != 0) goto LAB_101a375ac;
      uVar3 = uVar2;
      func_0x000107c42210();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if ((uVar4 == 0x70616e732e6d6f63) && (lVar8 == -0x11ff969b939e89d2)) {
        func_0x000107c6142c(0xee0069646c61762e);
      }
      else {
        func_0x000107c605b8(uVar4,lVar8,0x70616e732e6d6f63,0xee0069646c61762e,0);
        func_0x000107c6142c(lVar8);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x78);
          func_0x000107c614b0();
          uVar5 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          lVar6 = unaff_x22 + 0x18;
          func_0x000107c6147c(lVar6,unaff_x22 + 0x10,uVar5,&UNK_11042e3d8,0);
          if ((int)lVar6 != 0) {
            if (*(long *)(unaff_x22 + 0x18) == 5) {
              uStack_60 = 0x800000010efc9ab0;
              func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
              uStack_68 = 0xd000000000000016;
              goto LAB_101a37498;
            }
            if (*(long *)(unaff_x22 + 0x18) == 4) {
              uStack_60 = 0x800000010efc9ad0;
              func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
              uStack_68 = 0xd000000000000012;
              goto LAB_101a37498;
            }
            FUN_101a393d0();
          }
          uStack_68 = 0x5f6572756c696166;
          func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
          uStack_60 = 0xed0000726568746f;
          goto LAB_101a37498;
        }
      }
      uStack_60 = 0xed000069646c6176;
      uVar3 = uVar2;
      func_0x000107c3fcb0();
      *(ulong *)(unaff_x22 + 0x20) = uVar3;
    }
  }
  uStack_68 = 0x5f6572756c696166;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
LAB_101a37498:
  dVar10 = *(double *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + _DAT_112dec708);
  uVar5 = uStack_68;
  func_0x000107c5fadc(uStack_68,uStack_60);
  func_0x000105655164(uVar9,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c5fadc(uStack_68,uStack_60);
  func_0x000107c6142c(uStack_60);
  func_0x000107c6071c();
  dVar10 = (param_1 - dVar10) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a377ac);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar10) {
    if (dVar10 < 9.223372036854776e+18) {
      func_0x0001056552d8(uVar9,uStack_68,(long)dVar10);
      func_0x000107c61170(uStack_68);
      func_0x000107c61654();
      func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a37588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a377b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a377b0);
  (*pcVar1)();
}



/* Entry: 101a377b4; end: 101a37843;  */

void FUN_101a377b4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 101a37844; end: 101a378bf;  */

void FUN_101a37844(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a37880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a378c0; end: 101a37af3;  */

void FUN_101a378c0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000101a39390(0,param_1,param_2);
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



/* Entry: 101a37af4; end: 101a37b33;  */

void FUN_101a37af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a37b34,0,0);
  return;
}



/* Entry: 101a37b34; end: 101a37b43;  */

void FUN_101a37b34(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101a37b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a37b44; end: 101a37b5f;  */

void FUN_101a37b44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a37b60();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a37b60; end: 101a37cb3;  */

undefined * FUN_101a37b60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a37cb4);
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
    puVar3 = (undefined *)0x112deb088;
    FUN_101a378c0(0x112deb088,&PTR_PTR_1126bf6a8,0x112deb0c8,&UNK_10d9b73d8);
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
    func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
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



/* Entry: 101a37cb4; end: 101a38373;  */

undefined8 FUN_101a37cb4(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  code *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuStack_f8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong auStack_80 [2];
  
  func_0x000107c309c0();
  func_0x000107c61180();
  uVar16 = param_1;
  func_0x000107c30970();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar3 = uVar16;
  func_0x000107c5fc54(uVar16,uVar2);
  func_0x000107c61170(uVar16);
  if (uVar3 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar3 & 0xffffffffffffff8;
    if ((uVar3 & 0x8000000000000000) != 0) {
      uVar16 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar16 == 0) {
LAB_101a37e08:
    func_0x000107c6142c(uVar3);
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101a3835c);
        (*pcVar19)();
      }
      uVar4 = *(ulong *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = 0;
      func_0x000101a37938(0,uVar3,&PTR_PTR_1126bf6a8,0x112deb088);
    }
    if (uVar3 >> 0x3e == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 1) goto LAB_101a37d9c;
LAB_101a37d7c:
      func_0x000107c61170(uVar4);
    }
    else {
      uVar5 = uVar3 & 0xffffffffffffff8;
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar5 = uVar3;
      }
      func_0x000107c60480();
      if (uVar5 != 1) goto LAB_101a37d7c;
LAB_101a37d9c:
      uVar5 = uVar4;
      func_0x000107c30980();
      func_0x000107c61180();
      uVar2 = 0;
      func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
      uVar7 = uVar5;
      func_0x000107c5fc54(uVar5,uVar2);
      func_0x000107c61170(uVar5);
      if (uVar7 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar5 = uVar7;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(uVar4);
      if (uVar5 == 1) goto LAB_101a37e08;
    }
    pcVar19 = (code *)0x0;
    puVar20 = (undefined *)0x0;
    pcVar18 = (code *)0x0;
    puVar21 = (undefined *)0x0;
    ppuStack_f8 = (undefined **)0x0;
    uVar4 = 0;
    bVar1 = true;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x101a38320);
          (*pcVar19)();
        }
        uVar5 = *(ulong *)(uVar3 + 0x20 + uVar4 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar4;
        func_0x000101a37938(uVar4,uVar3,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101a3831c);
        (*pcVar19)();
      }
      uVar4 = uVar4 + 1;
      uVar7 = uVar5;
      func_0x000107c30980();
      func_0x000107c61180();
      uVar2 = 0;
      func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
      uVar6 = uVar7;
      func_0x000107c5fc54(uVar7,uVar2);
      func_0x000107c61170(uVar7);
      if (uVar6 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        uVar15 = 0;
        puVar10 = puVar21;
        puVar14 = puVar20;
        do {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x101a38318);
              (*pcVar19)();
            }
            uVar8 = *(ulong *)(uVar6 + uVar15 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar15;
            func_0x000101a37938(uVar15,uVar6,&PTR_PTR_1126bf6a0,0x112deb0b0);
          }
          if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x101a38310);
            (*pcVar19)();
          }
          uVar17 = uVar15 + 1;
          auStack_80[0] = 0;
          uVar13 = uVar8;
          func_0x000107c30988();
          func_0x000107c61180();
          puVar20 = &UNK_11042deb8;
          func_0x000107c613fc(&UNK_11042deb8,0x18,7);
          *(ulong **)(puVar20 + 0x10) = auStack_80;
          func_0x000100cc3324(pcVar19,puVar14);
          puVar21 = &UNK_11042dee0;
          func_0x000107c613fc(&UNK_11042dee0,0x20,7);
          *(code **)(puVar21 + 0x10) = FUN_101a389bc;
          *(undefined **)(puVar21 + 0x18) = puVar20;
          puVar14 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_90 = FUN_101a389c4;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_10130d598;
          puStack_98 = &UNK_11042def8;
          ppuVar9 = &puStack_b0;
          puStack_88 = puVar21;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_88);
          puVar21 = &UNK_11042df30;
          func_0x000107c613fc(&UNK_11042df30,0x18,7);
          *(ulong **)(puVar21 + 0x10) = auStack_80;
          func_0x000100cc3324(pcVar18,puVar10);
          puVar10 = &UNK_11042df58;
          func_0x000107c613fc(&UNK_11042df58,0x20,7);
          *(code **)(puVar10 + 0x10) = FUN_101a38a00;
          *(undefined **)(puVar10 + 0x18) = puVar21;
          pcStack_90 = (code *)0x101a38a2c;
          puStack_b0 = puVar14;
          uStack_a8 = 0x42000000;
          puStack_a0 = (undefined *)0x101a36974;
          puStack_98 = &UNK_11042df70;
          ppuVar11 = &puStack_b0;
          puStack_88 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_88);
          func_0x000107c4c58c(uVar13);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(uVar13);
          if (auStack_80[0] == 0) {
LAB_101a37f68:
            func_0x000107c61170(uVar8);
          }
          else {
            uVar13 = auStack_80[0];
            func_0x000107c5ce80();
            func_0x000107c61180();
            uVar2 = 0;
            func_0x000101a39390(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
            uVar12 = uVar13;
            func_0x000107c5fc54(uVar13,uVar2);
            func_0x000107c61170(uVar13);
            if (uVar12 >> 0x3e == 0) {
              uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar13 = uVar12 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar12) {
                uVar13 = uVar12;
              }
              func_0x000107c60480();
            }
            if (uVar13 == 0) {
              func_0x000107c6142c(uVar12);
              goto LAB_101a37f68;
            }
            if ((uVar12 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x101a38314);
                (*pcVar19)();
              }
              uVar2 = *(undefined8 *)(uVar12 + 0x20);
              func_0x000107c61174(uVar2);
            }
            else {
              uVar2 = 0;
              func_0x000101a37938(0,uVar12,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0,0x112d4f340);
            }
            func_0x000107c6142c(uVar12);
            func_0x000107c4ecc4(&puStack_b0,uVar2);
            ppuVar9 = &puStack_b0;
            func_0x000107c308c0();
            func_0x000107c61170(uVar2);
            func_0x000107c61170(uVar8);
            if (bVar1) {
              bVar1 = false;
              ppuStack_f8 = ppuVar9;
            }
            else {
              if (ppuVar9 != ppuStack_f8) {
                func_0x000107c6142c(uVar3);
                func_0x000107c6142c(uVar6);
                func_0x000107c61170(uVar5);
                uVar16 = auStack_80[0];
                func_0x000107c61574(puVar21);
                func_0x000107c61574(puVar20);
                func_0x000107c61170(uVar16);
                return 1;
              }
              bVar1 = false;
            }
          }
          func_0x000107c61170(auStack_80[0]);
          uVar15 = uVar15 + 1;
          pcVar19 = FUN_101a389bc;
          puVar10 = puVar21;
          puVar14 = puVar20;
          pcVar18 = FUN_101a38a00;
        } while (uVar17 != uVar7);
      }
      func_0x000107c6142c(uVar6);
      func_0x000107c61170(uVar5);
    } while (uVar4 != uVar16);
    func_0x000107c6142c(uVar3);
    func_0x000100cc3324(pcVar19,puVar20);
    func_0x000100cc3324(pcVar18,puVar21);
  }
  return 0;
}



/* Entry: 101a38374; end: 101a389bb;  */

undefined8 FUN_101a38374(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  func_0x000107c309c0();
  func_0x000107c61180();
  uVar9 = param_1;
  func_0x000107c30970();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = 0;
  func_0x000101a39390(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar4 = uVar9;
  func_0x000107c5fc54(uVar9,uVar3);
  func_0x000107c61170(uVar9);
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar9 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a385bc);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar4 + 0x20 + uVar10 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar10;
        func_0x000101a37938(uVar10,uVar4,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      bVar2 = SCARRY8(uVar10,1);
      uVar10 = uVar10 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a385b8);
        (*pcVar1)();
      }
      uVar11 = uVar5;
      func_0x000107c30978();
      if (uVar11 == 1) {
        uVar11 = uVar5;
        func_0x000107c30980();
        func_0x000107c61180();
        uVar3 = 0;
        func_0x000101a39390(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
        uVar6 = uVar11;
        func_0x000107c5fc54(uVar11,uVar3);
        func_0x000107c61170(uVar11);
        uVar11 = uVar6 & 0xffffffffffffff8;
        if (uVar6 >> 0x3e == 0) {
          uVar13 = *(ulong *)(uVar11 + 0x10);
        }
        else {
          uVar13 = uVar11;
          if (0x7fffffffffffffff < uVar6) {
            uVar13 = uVar6;
          }
          func_0x000107c60480();
        }
        uVar12 = 0;
        while (uVar13 != uVar12) {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101a385b4);
              (*pcVar1)();
            }
            uVar7 = *(ulong *)(uVar6 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar12;
            func_0x000101a37938(uVar12,uVar6,&PTR_PTR_1126bf6a0,0x112deb0b0);
          }
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101a385b0);
            (*pcVar1)();
          }
          uVar8 = uVar7;
          func_0x000107c3098c();
          func_0x000107c61170(uVar7);
          uVar12 = uVar12 + 1;
          if (uVar8 == 2) {
            func_0x000107c6142c(uVar4);
            func_0x000107c6142c(uVar6);
            func_0x000107c61170(uVar5);
            return 1;
          }
        }
        func_0x000107c6142c(uVar6);
      }
      func_0x000107c61170(uVar5);
    } while (uVar10 != uVar9);
  }
  func_0x000107c6142c(uVar4);
  return 0;
}



/* Entry: 101a389bc; end: 101a389c3;  */

/* WARNING: Possible PIC construction at 0x000101a36958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a3695c) */

void FUN_101a389bc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c5ed90(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
  func_0x000107c3e250();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a389c4; end: 101a389e3;  */

void FUN_101a389c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a389e4; end: 101a389ff;  */

void FUN_101a389e4(long param_1,long param_2)

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



/* Entry: 101a38a00; end: 101a38a4b;  */

void FUN_101a38a00(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101a38a4c; end: 101a38acb;  */

void FUN_101a38a4c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  undefined *puVar8;
  code *pcVar9;
  long *plVar10;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101a397bc;
  plVar6[4] = lVar2;
  plVar6[5] = lVar7;
  plVar6[2] = lVar1;
  plVar6[3] = lVar5;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar6[6] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[7] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[8] = uVar3;
  func_0x000107c60bc4();
  if (lVar4 == 0) {
    puVar8 = (undefined *)0x0;
    pcVar9 = (code *)0x0;
  }
  else {
    puVar8 = &UNK_11042e020;
    func_0x000107c613fc(&UNK_11042e020,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar4;
    pcVar9 = FUN_101a38bf4;
  }
  plVar6[9] = (long)pcVar9;
  plVar6[10] = (long)puVar8;
  plVar10 = (long *)0x130;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar6[0xb] = (long)plVar10;
  *plVar10 = (long)plVar6;
  plVar10[1] = (long)FUN_101a33504;
  plVar10[0x1c] = (long)puVar8;
  plVar10[0x1d] = lVar7;
  plVar10[0x1a] = lVar5;
  plVar10[0x1b] = (long)pcVar9;
  plVar10[0x18] = uVar3;
  plVar10[0x19] = lVar1;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar10[0x1e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar10[0x1f] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x20] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a324e0,0,0);
  return;
}



/* Entry: 101a38acc; end: 101a38b43;  */

void FUN_101a38acc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a397b4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a38b44; end: 101a38b6f;  */

void FUN_101a38b44(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a38b70; end: 101a38bf3;  */

void FUN_101a38b70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a397b8;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101a38bf4; end: 101a38bff;  */

void FUN_101a38bf4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101a38bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101a38c00; end: 101a38c3f;  */

void FUN_101a38c00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dec750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b866c;
  func_0x000107c61520(&UNK_10d9b866c,&UNK_11042e3d8);
  puRam0000000112dec750 = puVar1;
  return;
}



/* Entry: 101a38c40; end: 101a38c47;  */

void FUN_101a38c40(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  plVar3 = (long *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170();
    if ((param_3 == 0) && (param_2 != 0)) {
      **(long **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
      func_0x000107c61174(param_2);
      func_0x000107c61450(lVar2);
    }
    else {
      FUN_101a38c00();
      puVar4 = &UNK_11042e3d8;
      func_0x000107c613f8(&UNK_11042e3d8,plVar3,0,0);
      *plVar3 = param_3;
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar6 = puVar4;
      func_0x000107c614b0(param_3);
      func_0x000107c61454(lVar2,uVar5);
    }
  }
  return;
}



/* Entry: 101a38c48; end: 101a38cab;  */

void FUN_101a38c48(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101a397a8;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[3] = param_1;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101a31d8c;
  plVar3[7] = lVar2;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a31ff4,0,0);
  return;
}



/* Entry: 101a38cac; end: 101a38cc3;  */

void FUN_101a38cac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101a38cc4; end: 101a38d77;  */

void FUN_101a38cc4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lVar6 = *(long *)(unaff_x20 + 0x58);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a38d78;
  plVar5[0xf] = lVar6;
  plVar5[0xe] = lVar9;
  plVar5[0xd] = lVar8;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar7;
  plVar5[9] = lVar3;
  plVar5[10] = lVar2;
  plVar5[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a319dc,0,0);
  return;
}



/* Entry: 101a38d78; end: 101a38db3;  */

void FUN_101a38d78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a38db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a38db4; end: 101a38dd7;  */

void FUN_101a38db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101a38dd8; end: 101a38e0f;  */

void FUN_101a38dd8(void)

{
  long unaff_x20;
  
  FUN_101a35980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101a38e10; end: 101a38ea3;  */

void FUN_101a38e10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101a397a4;
  plVar7[0x17] = lVar6;
  plVar7[0x18] = lVar8;
  plVar7[0x15] = lVar5;
  plVar7[0x16] = lVar3;
  plVar7[0x13] = lVar4;
  plVar7[0x14] = lVar2;
  plVar7[0x11] = param_1;
  plVar7[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a36564,0,0);
  return;
}



/* Entry: 101a38ea4; end: 101a38eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a38ea4(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      func_0x000107c3f4d4(lStack_50);
      func_0x000107c615e8(lStack_50);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101a38eac; end: 101a39097;  */

undefined8 FUN_101a38eac(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39098);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar4 = 0;
    func_0x000101a39390(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar3,&puStack_68,uVar4);
    func_0x000107c61170(lVar3);
    if (puStack_68 != (undefined *)0x0) {
      puVar8 = puStack_68;
    }
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    uVar4 = 0;
    if (puVar9 == (undefined *)0x0) goto LAB_101a3903c;
  }
  else {
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar9 = puVar8;
    }
    func_0x000107c60480();
    if (puVar9 == (undefined *)0x0) {
      uVar4 = 0;
      goto LAB_101a3903c;
    }
  }
  uVar10 = 0;
  do {
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39070);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(puVar8 + uVar10 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar10;
      func_0x000101a37938(uVar10,puVar8,&PTR_PTR_1126b25d0,0x112d55598);
    }
    puVar1 = (undefined *)(uVar10 + 1);
    if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a3906c);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39090);
      (*pcVar2)();
    }
    uVar7 = uVar6;
    func_0x000107c4e088();
    func_0x000107c61170(uVar6);
    if (((int)uVar7 != 0x1a) && ((int)uVar7 != 0)) {
LAB_101a39028:
      func_0x000107c61170(uVar5);
      uVar4 = 1;
      goto LAB_101a3903c;
    }
    uVar6 = uVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39094);
      (*pcVar2)();
    }
    uVar7 = uVar6;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar6);
    if ((int)uVar7 == 0) goto LAB_101a39028;
    func_0x000107c61170(uVar5);
    uVar10 = uVar10 + 1;
  } while (puVar1 != puVar9);
  uVar4 = 0;
LAB_101a3903c:
  func_0x000107c6142c(puVar8);
  return uVar4;
}



/* Entry: 101a39098; end: 101a3934f;  */

undefined8 FUN_101a39098(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puStack_78;
  
  uVar3 = param_1;
  func_0x000107c444cc();
  func_0x000107c61180();
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = uVar3;
  func_0x000107c44d98();
  if ((int)uVar4 == 0) {
    uVar6 = 0;
    goto LAB_101a392e8;
  }
  uVar4 = uVar3;
  func_0x000107c5e304();
  uVar5 = uVar3;
  func_0x000107c44d98();
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39350);
    (*pcVar2)();
  }
  uVar13 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    puStack_78 = (undefined *)0x0;
    uVar6 = 0;
    func_0x000101a39390(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(uVar13,&puStack_78,uVar6);
    func_0x000107c61170(uVar13);
    if (puStack_78 != (undefined *)0x0) {
      puVar11 = puStack_78;
    }
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    uVar6 = 0;
    if (puVar12 != (undefined *)0x0) {
LAB_101a39184:
      uVar13 = 0;
      do {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39320);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(puVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar13;
          func_0x000101a37938(uVar13,puVar11,&PTR_PTR_1126b25d0,0x112d55598);
        }
        puVar1 = (undefined *)(uVar13 + 1);
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a3931c);
          (*pcVar2)();
        }
        uVar8 = uVar7;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39348);
          (*pcVar2)();
        }
        uVar9 = uVar8;
        func_0x000107c41e40();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a3934c);
          (*pcVar2)();
        }
        uVar8 = uVar9;
        func_0x000107c5e304();
        func_0x000107c61170(uVar9);
        uVar9 = uVar7;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39344);
          (*pcVar2)();
        }
        uVar10 = uVar9;
        func_0x000107c41e40();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39340);
          (*pcVar2)();
        }
        uVar9 = uVar10;
        func_0x000107c44d98();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar10);
        if ((((int)uVar8 != 0) && ((int)uVar9 != 0)) &&
           (0.01 < ABS((float)(uVar8 & 0xffffffff) / (float)(uVar9 & 0xffffffff) -
                       (float)(uVar4 & 0xffffffff) / (float)(uVar5 & 0xffffffff)))) {
          uVar6 = 1;
          goto LAB_101a392e0;
        }
        uVar13 = uVar13 + 1;
      } while (puVar1 != puVar12);
      uVar6 = 0;
    }
  }
  else {
    puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar12 = puVar11;
    }
    func_0x000107c60480();
    if (puVar12 != (undefined *)0x0) goto LAB_101a39184;
    uVar6 = 0;
  }
LAB_101a392e0:
  func_0x000107c6142c(puVar11);
LAB_101a392e8:
  func_0x000107c61170(uVar3);
  return uVar6;
}



/* Entry: 101a39350; end: 101a393cf;  */

undefined8 FUN_101a39350(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a393d0; end: 101a393e3;  */

void FUN_101a393d0(long param_1)

{
  if (param_1 - 1U < 5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101a393e4; end: 101a3944f;  */

void FUN_101a393e4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a39450;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101a310d4;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar1;
  plVar4 = (long *)0x3c0;
  func_0x000107c615b8();
  plVar3[0xe] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101a311f0;
  plVar4[0x5b] = lVar1;
  plVar4[0x5a] = 0;
  plVar4[0x59] = 0;
  plVar4[0x58] = 0;
  plVar4[0x57] = 0;
  plVar4[0x56] = lVar5;
  plVar4[0x55] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a33f10,0,0);
  return;
}



/* Entry: 101a39450; end: 101a3948b;  */

void FUN_101a39450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a39488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a3948c; end: 101a394b3;  */

void FUN_101a3948c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101a394b4; end: 101a39627;  */

void FUN_101a394b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101a39628; end: 101a397bf;  */

int FUN_101a39628(ulong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff9 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffa;
  }
  uVar4 = *param_1;
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar3 = (uint)uVar4;
  iVar1 = 0;
  if (4 < uVar3) {
    iVar1 = uVar3 - 5;
  }
  iVar2 = 0;
  if (1 < uVar3 + 1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 101a397c0; end: 101a39827;  */

void FUN_101a397c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101a39828; end: 101a39a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a39828(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(param_2 + _DAT_11303c290);
  func_0x0001000285a8(0x112dec878,&UNK_10d9b8718);
  func_0x000107c5de3c();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x0001000285a8(0x112dec880,&UNK_10d9b8720);
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x0001000bda74();
  func_0x000107c61170(param_5);
  func_0x0001000285a8(0x112dec418,&UNK_10d9b81f8);
  func_0x000107c5b048();
  func_0x000107c61180();
  uVar5 = param_6;
  func_0x0001000bda74();
  func_0x000107c61170(param_6);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_7 != 0) {
    lVar6 = 0;
    FUN_101a3103c();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112dec708;
    puVar8 = PTR_PTR_1126a8538;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar1) = puVar8;
    lVar1 = _DAT_112dec710;
    uVar9 = 0;
    FUN_101a39e38();
    func_0x000107c613fc();
    FUN_101a39b70();
    *(undefined8 *)(lVar7 + lVar1) = uVar9;
    *(undefined8 *)(lVar7 + _DAT_112dec6d8) = uVar11;
    *(undefined8 *)(lVar7 + _DAT_112dec6e0) = uVar3;
    *(undefined8 *)(lVar7 + _DAT_112dec6e8) = param_4;
    *(undefined8 *)(lVar7 + _DAT_112dec6f0) = uVar4;
    *(undefined8 *)(lVar7 + _DAT_112dec6f8) = uVar5;
    *(long *)(lVar7 + _DAT_112dec700) = param_7;
    puVar8 = PTR_s_init_1125d9248;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c6157c(uVar11);
    plVar10 = &lStack_70;
    func_0x000107c61154(plVar10,puVar8);
    *param_1 = (long)plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39a40);
  (*pcVar2)();
}



/* Entry: 101a39a40; end: 101a39a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a39a40(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303c290);
  func_0x0001000285a8(0x112dec878,&UNK_10d9b8718);
  func_0x000107c5de3c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x0001000285a8(0x112dec880,&UNK_10d9b8720);
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112dec418,&UNK_10d9b81f8);
  func_0x000107c5b048();
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = 0;
    FUN_101a3103c();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar1 = _DAT_112dec708;
    puVar10 = PTR_PTR_1126a8538;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar9 + lVar1) = puVar10;
    lVar1 = _DAT_112dec710;
    uVar11 = 0;
    FUN_101a39e38();
    func_0x000107c613fc();
    FUN_101a39b70();
    *(undefined8 *)(lVar9 + lVar1) = uVar11;
    *(undefined8 *)(lVar9 + _DAT_112dec6d8) = uVar13;
    *(undefined8 *)(lVar9 + _DAT_112dec6e0) = uVar4;
    *(undefined8 *)(lVar9 + _DAT_112dec6e8) = uVar5;
    *(undefined8 *)(lVar9 + _DAT_112dec6f0) = uVar3;
    *(undefined8 *)(lVar9 + _DAT_112dec6f8) = uVar6;
    *(long *)(lVar9 + _DAT_112dec700) = lVar7;
    puVar10 = PTR_s_init_1125d9248;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c6157c(uVar13);
    plVar12 = &lStack_70;
    func_0x000107c61154(plVar12,puVar10);
    *param_1 = (long)plVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a39a40);
  (*pcVar2)();
}



/* Entry: 101a39a50; end: 101a39a8b;  */

/* WARNING: Possible PIC construction at 0x000101a39a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a39a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a39a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a39a70) */
/* WARNING: Removing unreachable block (ram,0x000101a39a60) */
/* WARNING: Removing unreachable block (ram,0x000101a39a80) */

void FUN_101a39a50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a39a8c; end: 101a39b6f;  */

void FUN_101a39a8c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a39b70; end: 101a39ba7;  */

void FUN_101a39b70(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 101a39ba8; end: 101a39d73;  */

long FUN_101a39ba8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940(uVar7);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  if (lVar8 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_101a39da8(uVar1,uVar3,lVar8,uVar2,uVar4);
    uVar5 = uVar1;
    func_0x000100e25fcc(uVar1,uVar3,param_1,param_2);
    if ((uVar5 & 1) == 0) {
      func_0x000101a39df0(uVar1,uVar3,lVar8,uVar2,uVar4);
      lVar8 = 0;
    }
    else {
      func_0x00010006c00c(uVar1,uVar3);
      lVar6 = lVar8;
      func_0x000107c61174(lVar8);
      func_0x00010006c00c(uVar2,uVar4);
      func_0x00010006c090(uVar2,uVar4);
      func_0x00010006c090(uVar1,uVar3);
      func_0x000107c61170(lVar6);
      func_0x00010006c090(uVar1,uVar3);
    }
  }
  func_0x000107c5d278(uVar7);
  return lVar8;
}



/* Entry: 101a39d74; end: 101a39da7;  */

void FUN_101a39d74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000101a39df0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a39da8; end: 101a39e37;  */

/* WARNING: Possible PIC construction at 0x000101a39dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a39dcc) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101a39da8(ulong param_1,ulong param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
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



/* Entry: 101a39e38; end: 101a39e57;  */

void FUN_101a39e38(void)

{
  func_0x000107c61168(&PTR_PTR_112dec8c8);
  return;
}



/* Entry: 101a39e58; end: 101a39fd7;  */

long FUN_101a39e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x000100784a00(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100785678();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001007856c8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 101a39fd8; end: 101a3a043;  */

void FUN_101a39fd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}


