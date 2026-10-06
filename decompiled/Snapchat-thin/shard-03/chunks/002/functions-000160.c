/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10263ee88; end: 10263f06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263ee88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0xd8) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0xa8);
    func_0x000107c4ec94();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0xb0);
      func_0x000107c5d9dc();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar1);
        lVar1 = lVar3;
      }
      else {
        lVar5 = *(long *)(unaff_x20 + 0xe0);
        func_0x000107c4c440();
        func_0x000107c61180();
        lVar4 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar4 != 0) {
          func_0x000107c5fadc(param_1,param_2);
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x88) + _DAT_113083f78);
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(param_2);
          }
          puVar6 = PTR_PTR_1126c7238;
          func_0x000107c61168(PTR_PTR_1126c7238);
          func_0x000107c4b920();
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar5);
          func_0x00010601db50(puVar6);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar1);
          return;
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        lVar1 = lVar2;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10263f06c; end: 10263f0f3;  */

void FUN_10263f06c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263f0f4,0,0);
  return;
}



/* Entry: 10263f0f4; end: 10263f583;  */

void FUN_10263f0f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  undefined *puVar16;
  code *pcVar17;
  
  lVar15 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0xa0);
  lVar4 = lVar15;
  func_0x000107c43a98();
  func_0x000107c61180();
  lVar14 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar14;
  func_0x000107c61170(lVar4);
  if (lVar14 != 0) {
    lVar4 = lVar15;
    func_0x000107c43a6c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x98) = lVar5;
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c43a80();
      func_0x000107c61180();
      lVar4 = lVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xa0) = lVar4;
      func_0x000107c61170(lVar15);
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000107c5fadc(uVar6);
        lVar15 = lVar4;
        func_0x000107c43aa0();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xa8) = lVar15;
        func_0x000107c61170(uVar6);
        if (lVar15 != 0) {
          puVar16 = PTR_PTR_1126a63c0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          *(undefined **)(unaff_x22 + 0xb0) = puVar16;
          func_0x000107c61174();
          lVar7 = lVar14;
          func_0x000107c44f90(lVar14);
          func_0x000107c61180();
          func_0x000107c551f8(puVar16);
          func_0x000107c61170(lVar7);
          lVar7 = lVar5;
          func_0x000107c3cfe4();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0xb8) = lVar7;
          func_0x000107c61170(lVar15);
          if (lVar7 != 0) {
            lVar8 = lVar15;
            func_0x000107c3d15c();
            func_0x000107c61180();
            if (lVar8 != 0) {
              uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
              uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
              uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
              uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
              lVar11 = *(long *)(unaff_x22 + 0x68);
              lVar9 = lVar8;
              func_0x000107c42168();
              func_0x000107c61180();
              func_0x000107c61170(lVar8);
              func_0x000107c5ee94(uVar6,lVar9);
              func_0x000107c61170(lVar9);
              (**(code **)(lVar11 + 0x20))(uVar2,uVar6,uVar13);
              func_0x000107c5ee6c(uVar3,0x40f5180000000000);
              func_0x000107c5eea0(uVar1);
              func_0x000107c5ee78(uVar3,uVar1);
              pcVar17 = *(code **)(lVar11 + 8);
              (*pcVar17)(uVar1,uVar13);
              (*pcVar17)(uVar3,uVar13);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c45a48();
              func_0x000107c58f50(puVar16);
              func_0x000107c61170(puVar10);
              (*pcVar17)(uVar2);
            }
            lVar11 = lVar7;
            func_0x000107c5c158();
            func_0x000107c61180();
            lVar8 = lVar11;
            func_0x000107c5faec();
            func_0x000107c61170(lVar11);
            *(long *)(unaff_x22 + 0x28) = lVar8;
            *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
            *(undefined8 *)(unaff_x22 + 0x38) = 0x20b7c220;
            *(undefined8 *)(unaff_x22 + 0x40) = 0xa400000000000000;
            func_0x000100e8b654();
            lVar8 = unaff_x22 + 0x38;
            func_0x000107c601dc(lVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar11,lVar11);
            func_0x000107c6142c(uVar13);
            if (*(long *)(lVar8 + 0x10) == 0) {
LAB_10263f4b8:
              func_0x000107c6142c(lVar8);
              plVar12 = (long *)0x100;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0xc0) = plVar12;
              *plVar12 = unaff_x22;
              plVar12[1] = (long)FUN_10263f584;
              lVar4 = *(long *)(unaff_x22 + 0x58);
              lVar14 = *(long *)(unaff_x22 + 0x48);
              plVar12[0x1a] = *(long *)(unaff_x22 + 0x50);
              plVar12[0x1b] = lVar4;
              plVar12[0x19] = lVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_task_switch_110350130)(FUN_10263f704,0,0);
              return;
            }
            uVar6 = *(undefined8 *)(lVar8 + 0x20);
            uVar13 = *(undefined8 *)(lVar8 + 0x28);
            func_0x000107c61434(uVar13);
            func_0x000107c5fadc(uVar6,uVar13);
            func_0x000107c6142c(uVar13);
            func_0x000107c553b0(puVar16);
            func_0x000107c61170(uVar6);
            if (*(long *)(lVar8 + 0x10) != 2) goto LAB_10263f4b8;
            uVar6 = *(undefined8 *)(lVar8 + 0x30);
            uVar13 = *(undefined8 *)(lVar8 + 0x38);
            func_0x000107c61434(uVar13);
            func_0x000107c6142c(lVar8);
            func_0x000107c5fadc(uVar6,uVar13);
            func_0x000107c6142c(uVar13);
            func_0x000107c59de8(puVar16);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar15);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar14);
            goto LAB_10263f538;
          }
          func_0x000107c61170(puVar16);
          func_0x000107c61170(lVar15);
        }
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c615e8(lVar14);
  }
  puVar16 = (undefined *)0x0;
LAB_10263f538:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010263f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar16);
  return;
}



/* Entry: 10263f584; end: 10263f5d7;  */

void FUN_10263f584(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 200) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263f5d8,0,0);
  return;
}



/* Entry: 10263f5d8; end: 10263f6e7;  */

void FUN_10263f5d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 200);
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(uVar2);
    uVar8 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar6,lVar7);
    func_0x000107c6142c(lVar7);
    func_0x000107c56044(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar5);
    func_0x000107c615e8(uVar2);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010263f6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 10263f6e8; end: 10263f703;  */

void FUN_10263f6e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263f704,0,0);
  return;
}



/* Entry: 10263f704; end: 10263f99b;  */

void FUN_10263f704(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x22 + 0xd8) + 0x98);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    uVar1 = *(ulong *)(unaff_x22 + 0xd0);
    func_0x000107c5fadc(uVar8);
    uVar3 = uVar2;
    func_0x000107c4e680();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0xe0) = uVar3;
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar2);
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c4b848();
      func_0x000107c61180();
      uVar4 = uVar2;
      func_0x000107c5faec();
      uVar10 = uVar1;
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar1);
      uVar2 = uVar4 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar2 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0xd8) + 200);
        func_0x000107c4b8ac();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xe8) = lVar6;
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          uVar8 = *(undefined8 *)(unaff_x22 + 200);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
          lVar5 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c61534();
          *(undefined8 *)(lVar5 + 0x18) = 2;
          *(undefined8 *)(lVar5 + 0x10) = 1;
          *(undefined8 *)(lVar5 + 0x20) = uVar8;
          *(undefined8 *)(lVar5 + 0x28) = uVar9;
          func_0x000107c61434(uVar9);
          lVar7 = lVar5;
          func_0x000100403a6c();
          func_0x000107c61588(lVar5);
          func_0x000100bcb1dc((undefined8 *)(lVar5 + 0x20));
          lVar5 = lVar7;
          func_0x000107c5fe08(lVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
          *(long *)(unaff_x22 + 0xf0) = lVar5;
          func_0x000107c6142c(lVar7);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10263f99c;
          lVar5 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar5,1);
          uVar8 = 0x112d5ecc0;
          func_0x0001000285a8(0x112d5ecc0,&UNK_10d925be8);
          *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
          *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x60) = &UNK_101118ac8;
          *(undefined **)(unaff_x22 + 0x68) = &UNK_11052d2b8;
          *(long *)(unaff_x22 + 0x70) = lVar5;
          func_0x000107c431a0(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar9 = uVar11;
        func_0x000107c4b848(uVar11);
        func_0x000107c61180();
        uVar8 = uVar9;
        func_0x000107c5faec();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar11);
        goto LAB_10263f940;
      }
      func_0x000107c61170(uVar3);
    }
  }
  uVar8 = 0;
  uVar10 = 0;
LAB_10263f940:
                    /* WARNING: Could not recover jumptable at 0x00010263f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8,uVar10);
  return;
}



/* Entry: 10263f99c; end: 10263f9f3;  */

void FUN_10263f99c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10263f9f4;
  }
  else {
    pcVar1 = FUN_10263fb44;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10263f9f4; end: 10263fb43;  */

void FUN_10263f9f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c6142c(lVar5);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar3 = *(ulong *)(unaff_x22 + 0xd0);
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      param_2 = 2;
      func_0x000107c61430(lVar5,2);
    }
    else {
      lVar1 = *(long *)(*(long *)(lVar5 + 0x38) + lVar1 * 8);
      func_0x000107c61174();
      param_2 = 2;
      func_0x000107c61430(lVar5,2);
      lVar5 = lVar1;
      func_0x000107c4b8a4();
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      if (lVar5 != 0) {
        lVar6 = *(long *)(unaff_x22 + 0xe0);
        lVar2 = lVar5;
        func_0x000107c5c82c();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        lVar5 = lVar2;
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(uVar4);
        goto LAB_10263fb10;
      }
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c615e8(uVar4);
  lVar6 = *(long *)(unaff_x22 + 0xe0);
  lVar2 = lVar6;
  func_0x000107c4b848(lVar6);
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5faec();
LAB_10263fb10:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010263fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5,param_2);
  return;
}



/* Entry: 10263fb44; end: 10263fbdf;  */

void FUN_10263fb44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = uVar3;
  func_0x000107c4b848(uVar3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010263fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,param_2);
  return;
}



/* Entry: 10263fbe0; end: 10263fc77;  */

uint FUN_10263fbe0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x148);
  if (*(byte *)(unaff_x20 + 0x148) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x90);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263fc78);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010ef27090);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    uVar5 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *(char *)(unaff_x20 + 0x148) = (char)lVar4;
  }
  return uVar5 & 1;
}



/* Entry: 10263fc78; end: 10263fc8f;  */

void FUN_10263fc78(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263fc90,0,0);
  return;
}



/* Entry: 10263fc90; end: 10263fd7f;  */

void FUN_10263fc90(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x108);
  func_0x000107c4ec8c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10263fd80;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    uVar3 = 0x112d5eca8;
    func_0x0001000285a8(0x112d5eca8,&UNK_10dac4ed0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10111b368;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052d150;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43064(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010263fd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 10263fd80; end: 10263fdbf;  */

void FUN_10263fd80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263fdc0,0,0);
  return;
}



/* Entry: 10263fdc0; end: 10263fe4f;  */

void FUN_10263fdc0(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  if (lVar2 == 0) {
    func_0x000107c615e8(uVar4);
    uVar1 = 2;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
    }
    uVar1 = lVar3 != 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010263fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 10263fe50; end: 10263febb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10263fe50(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x100) + _DAT_1130366e8);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(uVar1);
  uVar1 = uStack_28;
  func_0x000107c3e524(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (int)uVar1 != 1;
}



/* Entry: 10263febc; end: 10263ff7b;  */

void FUN_10263febc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
  lVar2 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263ff7c,0,0);
  return;
}



/* Entry: 10263ff7c; end: 102640023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263ff7c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  puVar4 = PTR_PTR_1126a63d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xf8) = puVar4;
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_102641fac(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102640024;
                    /* WARNING: Could not recover jumptable at 0x000102640020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 102640024; end: 10264009b;  */

void FUN_102640024(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x108) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x118) = param_2;
    pcVar1 = FUN_10264009c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10264060c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10264009c; end: 1026401e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264009c(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x118);
  FUN_102641e38(unaff_x22 + 0x10);
  if (cVar2 != '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x108);
    puVar3 = PTR_PTR_1126a63a0;
    func_0x000107c610f8(PTR_PTR_1126a63a0);
    func_0x000107c453e4();
    if (lVar7 != 0) {
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                (&UNK_11053e480,(undefined8 *)(unaff_x22 + 0xa0),&UNK_11053e480,PTR___sSiN_11034deb0
                );
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c579d4(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5a390(uVar8);
    func_0x000107c61170(puVar3);
  }
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  FUN_102641fac(unaff_x22 + 0x38,uVar8);
  piVar6 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1026401e8;
                    /* WARNING: Could not recover jumptable at 0x0001026401e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xb0),
             *(undefined8 *)(unaff_x22 + 0xb8),uVar8,lVar7);
  return;
}



/* Entry: 1026401e8; end: 102640247;  */

void FUN_1026401e8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102640248;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1026406b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102640248; end: 10264060b;  */

void FUN_102640248(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 *puVar15;
  undefined *puVar16;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar7 = *(long *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_102641e38(unaff_x22 + 0x38);
  (**(code **)(lVar7 + 0x30))(uVar11,1,uVar2);
  if ((int)uVar11 == 1) {
    FUN_102641ed8(*(undefined8 *)(unaff_x22 + 0xd8),0x112d5ed18,&UNK_10d925c50);
  }
  else {
    puVar15 = *(undefined8 **)(unaff_x22 + 0xf0);
    lVar7 = *(long *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x00010111dd50(*(undefined8 *)(unaff_x22 + 0xd8),puVar15);
    puVar6 = PTR_PTR_1126a63d8;
    func_0x000107c610f8(PTR_PTR_1126a63d8);
    func_0x000107c453e4();
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar7 + 0x20));
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar11 = uVar2;
    func_0x000107c5fadc(uVar2,uVar3);
    func_0x000107c558fc(puVar6);
    func_0x000107c61170(uVar11);
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar7 + 0x24));
    uVar11 = *puVar1;
    uVar4 = puVar1[1];
    uVar9 = uVar11;
    func_0x000107c5fadc(uVar11,uVar4);
    func_0x000107c579d0(puVar6);
    func_0x000107c61170(uVar9);
    uVar9 = *puVar15;
    func_0x000107c5fadc(uVar9,puVar15[1]);
    func_0x000107c59e18(puVar6);
    func_0x000107c61170(uVar9);
    uVar9 = puVar15[2];
    func_0x000107c5fadc(uVar9,puVar15[3]);
    func_0x000107c528fc(puVar6);
    func_0x000107c61170(uVar9);
    func_0x000100029394((long)puVar15 + (long)*(int *)(lVar7 + 0x1c),uVar12);
    lVar7 = 0;
    func_0x000107c5ede0();
    lVar14 = *(long *)(lVar7 + -8);
    uVar9 = 1;
    (**(code **)(lVar14 + 0x30))(uVar12,1,lVar7);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
    if ((int)uVar12 == 1) {
      FUN_102641ed8(uVar13,0x112d36580,&UNK_10d9016d0);
      uVar12 = 0;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar14 + 8))(uVar13,lVar7);
      func_0x000107c5fadc(uVar12,uVar9);
      func_0x000107c6142c(uVar9);
    }
    lVar7 = *(long *)(unaff_x22 + 0xf0);
    lVar14 = *(long *)(unaff_x22 + 0xe0);
    func_0x000107c525e8(puVar6);
    func_0x000107c61170(uVar12);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c579d4(puVar6);
    func_0x000107c61170(puVar16);
    if (*(char *)(lVar7 + *(int *)(lVar14 + 0x2c) + 8) == '\x01') {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d8();
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar14 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c59fd0(puVar6);
    func_0x000107c61170(puVar16);
    func_0x000107c56b50(uVar9);
    func_0x000102702d84(unaff_x22 + 0x60);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    FUN_102641fac(unaff_x22 + 0x60,*(undefined8 *)(unaff_x22 + 0x78));
    lVar8 = *(long *)(lVar14 + 0xf0);
    func_0x000107c4c370();
    func_0x000107c61180();
    lVar14 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar14 == 0) {
      lVar8 = 0;
      uVar10 = 1;
    }
    else {
      lVar8 = lVar14;
      func_0x000107c52060();
      func_0x000107c615e8(lVar14);
      if (lVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10264060c);
        (*pcVar5)();
      }
      uVar10 = 0;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    (**(code **)(lVar7 + 0x20))
              (uVar11,uVar4,uVar2,uVar3,0,2,*(undefined8 *)(unaff_x22 + 0xb0),
               *(undefined8 *)(unaff_x22 + 0xb8),lVar8,uVar10);
    func_0x000107c61170(puVar6);
    func_0x00010111dddc(uVar9);
    FUN_102641e38(unaff_x22 + 0x60);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar9;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar9);
  func_0x000100087f6c((undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000100c7f554();
  func_0x000107c61170(uVar9);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102640604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10264060c; end: 1026406b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264060c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_102641e38(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  FUN_102641fac(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1026401e8;
                    /* WARNING: Could not recover jumptable at 0x0001026406b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xb0),
             *(undefined8 *)(unaff_x22 + 0xb8),uVar2,lVar3);
  return;
}



/* Entry: 1026406b4; end: 10264079f;  */

void FUN_1026406b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_102641e38(unaff_x22 + 0x38);
  (**(code **)(lVar2 + 0x38))(uVar6,1,1,uVar1);
  FUN_102641ed8(*(undefined8 *)(unaff_x22 + 0xd8),0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000100087f6c((undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000100c7f554();
  func_0x000107c61170(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010264079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026407a0; end: 1026408a3;  */

void FUN_1026407a0(void)

{
  long unaff_x20;
  
  FUN_102641e38(unaff_x20 + 0x10);
  FUN_102641e38(unaff_x20 + 0x38);
  FUN_102641e38(unaff_x20 + 0x60);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  return;
}



/* Entry: 1026408a4; end: 1026408b7;  */

void FUN_1026408a4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  undefined *apuStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x138);
  puVar10 = (undefined *)(param_1 * lVar8);
  if (SUB168(SEXT816(param_1) * SEXT816(lVar8),8) != (long)puVar10 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a35c);
    (*pcVar1)();
  }
  if (SCARRY8((long)puVar10,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a360);
    (*pcVar1)();
  }
  func_0x000107c61428(unaff_x20 + 0x118,auStack_68,0,0);
  puVar9 = *(undefined **)(unaff_x20 + 0x118);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar2 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar2 = puVar9;
    }
    func_0x000107c60480();
    puVar9 = *(undefined **)(unaff_x20 + 0x118);
  }
  if ((long)(puVar10 + lVar8) <= (long)puVar2) {
    puVar2 = puVar10 + lVar8;
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar3 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar3 = puVar9;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 <= (long)puVar10) {
    return;
  }
  if ((long)puVar2 < (long)puVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a398);
    (*pcVar1)();
  }
  uVar7 = 0;
  func_0x000107c61428(unaff_x20 + 0x118,apuStack_80,0x20);
  puVar9 = *(undefined **)(unaff_x20 + 0x118);
  uVar11 = (ulong)puVar9 >> 0x3e;
  if (uVar11 == 0) {
    puVar3 = *(undefined **)((undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if (((ulong)puVar9 & 0x8000000000000000) != 0) {
      puVar3 = puVar9;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 < (long)puVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a3b0);
    (*pcVar1)();
  }
  if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a3b4);
    (*pcVar1)();
  }
  if (uVar11 == 0) {
    puVar3 = *(undefined **)((undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if (((ulong)puVar9 & 0x8000000000000000) != 0) {
      puVar3 = puVar9;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 < (long)puVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a3b8);
    (*pcVar1)();
  }
  if ((((ulong)puVar9 & 0xc000000000000001) == 0) || ((long)puVar10 - (long)puVar2 == 0)) {
    func_0x000107c61434(puVar9);
    if (uVar11 == 0) goto LAB_10263a024;
LAB_10263a044:
    func_0x000107c6142c(puVar9);
    puVar6 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if (((ulong)puVar9 & 0x8000000000000000) != 0) {
      puVar6 = puVar9;
    }
    puVar3 = puVar2;
    func_0x000107c60484(puVar10,puVar2);
    uVar11 = uVar7;
  }
  else {
    if (puVar2 <= puVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a408);
      (*pcVar1)();
    }
    uVar4 = 0;
    FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c61434(puVar9);
    puVar3 = puVar10;
    do {
      puVar6 = puVar3 + 1;
      func_0x000107c60318(puVar3,puVar9,uVar4);
      puVar3 = puVar6;
    } while (puVar2 != puVar6);
    if (uVar11 != 0) goto LAB_10263a044;
LAB_10263a024:
    puVar3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x20;
    puVar6 = puVar10;
    puVar10 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    uVar11 = (long)puVar2 << 1 | 1;
  }
  func_0x000107c614a8(apuStack_80);
  if ((uVar11 & 1) == 0) {
LAB_10263a080:
    puVar5 = puVar10;
    func_0x0001011462c4(puVar10,puVar3,puVar6);
    uVar7 = uVar11;
LAB_10263a110:
    func_0x000107c615e8(puVar10);
    puVar9 = puVar5;
  }
  else {
    uVar4 = 0;
    func_0x000107c605fc(0);
    puVar9 = puVar10;
    func_0x000107c615f4(puVar10,2);
    func_0x000107c61480();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c615e8(puVar10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar9 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar11 >> 1,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a40c);
      (*pcVar1)();
    }
    if (lVar8 != (uVar11 >> 1) - (long)puVar6) {
      func_0x000107c615e8();
      goto LAB_10263a080;
    }
    puVar9 = puVar10;
    func_0x000107c61480(puVar10,uVar4);
    func_0x000107c615e8(puVar10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 == (undefined *)0x0) goto LAB_10263a110;
  }
  FUN_10263a428(puVar9);
  func_0x000107c61574(puVar9);
  puVar10 = *(undefined **)(unaff_x20 + 0x118);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar6 = *(undefined **)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    puVar9 = puVar6;
    if ((long)puVar2 <= (long)puVar6) {
      puVar9 = puVar2;
    }
    puVar3 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar9;
    }
    if ((long)puVar6 < (long)puVar3) {
LAB_10263a400:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a404);
      (*pcVar1)();
    }
  }
  else {
    puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if (((ulong)puVar10 & 0x8000000000000000) != 0) {
      puVar9 = puVar10;
    }
    puVar3 = puVar9;
    func_0x000107c60480();
    puVar6 = puVar9;
    func_0x000107c60480();
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a428);
      (*pcVar1)();
    }
    puVar6 = puVar3;
    if ((long)puVar2 <= (long)puVar3) {
      puVar6 = puVar2;
    }
    puVar5 = puVar2;
    if (-1 < (long)puVar3) {
      puVar5 = puVar6;
    }
    puVar3 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar5;
    }
    func_0x000107c60480();
    if ((long)puVar9 < (long)puVar3) goto LAB_10263a400;
  }
  if ((((ulong)puVar10 & 0xc000000000000001) == 0) || (puVar3 == (undefined *)0x0)) {
    func_0x000107c61438(puVar10,2);
  }
  else {
    uVar4 = 0;
    FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c61438(puVar10,2);
    puVar9 = (undefined *)0x0;
    do {
      puVar2 = puVar9 + 1;
      func_0x000107c60318(puVar9,puVar10,uVar4);
      puVar9 = puVar2;
    } while (puVar3 != puVar2);
  }
  func_0x000107c6142c(puVar10);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar9 = (undefined *)0x0;
    puVar2 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    uVar7 = (long)puVar3 << 1 | 1;
    puVar3 = puVar2 + 0x20;
LAB_10263a230:
    uVar4 = 0;
    func_0x000107c605fc(0);
    puVar10 = puVar2;
    func_0x000107c615f4(puVar2,3);
    func_0x000107c61480();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(puVar2);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar10 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar7 >> 1,(long)puVar9)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10263a418);
      (*pcVar1)();
    }
    if (lVar8 != (uVar7 >> 1) - (long)puVar9) {
      func_0x000107c615ec(puVar2,2);
      goto LAB_10263a214;
    }
    puVar9 = puVar2;
    func_0x000107c61480(puVar2,uVar4);
    func_0x000107c615ec(puVar2,2);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 != (undefined *)0x0) goto LAB_10263a2b0;
  }
  else {
    puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if (((ulong)puVar10 & 0x8000000000000000) != 0) {
      puVar9 = puVar10;
    }
    puVar2 = (undefined *)0x0;
    func_0x000107c60484(0,puVar3);
    func_0x000107c6142c(puVar10);
    if ((uVar7 & 1) != 0) goto LAB_10263a230;
LAB_10263a214:
    puVar10 = puVar2;
    func_0x0001011462c4(puVar2,puVar3,puVar9,uVar7);
  }
  func_0x000107c615e8(puVar2);
  puVar9 = puVar10;
LAB_10263a2b0:
  puVar10 = puVar9;
  func_0x00010263a6ec(puVar9,&SUB_10111c52c,0x112d5e958,&PTR_PTR_1126a6398);
  func_0x000107c61574(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar2 = puVar10;
  func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar10);
  func_0x000107c45788();
  func_0x000107c61170(puVar2);
  apuStack_80[0] = puVar9;
  func_0x0001007d6d78(apuStack_80);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 1026408b8; end: 102640973;  */

undefined8 FUN_1026408b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11052ce78;
  func_0x000107c613fc(&UNK_11052ce78,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11052d0e8;
  func_0x000107c613fc(&UNK_11052d0e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112d5ec70,&UNK_10d925bd0);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  uVar3 = 0x102642220;
  func_0x0001000b64ac(0x102642220,puVar2);
  uVar4 = uVar3;
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
  return uVar4;
}



/* Entry: 102640974; end: 102640977;  */

long FUN_102640974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_11052ce78;
  func_0x000107c613fc(&UNK_11052ce78,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11052cf68;
  func_0x000107c613fc(&UNK_11052cf68,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x0001000285a8(0x112d5ed00,&UNK_10d925c30);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  uVar3 = 0x102641468;
  func_0x0001000b64ac(0x102641468,puVar2);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x58);
  FUN_102641fac(unaff_x20 + 0x38,lVar6);
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  (**(code **)(lVar10 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = lVar6;
  (**(code **)(lVar7 + 0x10))(lVar6,lVar7);
  (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
  puVar1 = &UNK_11052cf90;
  func_0x000107c613fc(&UNK_11052cf90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  uVar5 = 0x102641474;
  func_0x0001000c0ebc(0x102641474,puVar1);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(puVar1);
  lVar6 = 0x112d5ed08;
  func_0x0001000285a8(0x112d5ed08,&UNK_10d926730);
  FUN_102641294(0x112d5ed08,&UNK_10d926730,0x112d5fd08,&UNK_10dac5a60);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  lVar7 = lVar6;
  func_0x0001000c19f0(lVar6);
  func_0x000107c61574(lVar6);
  uVar8 = 0;
  FUN_1026420e0(0,0x112d5ed10,&PTR_PTR_1126a63d0);
  pcVar9 = FUN_10263e188;
  func_0x0001000bfde0(FUN_10263e188,0,uVar8);
  func_0x000107c61574(lVar7);
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar9);
  return lVar7;
}



/* Entry: 102640978; end: 102640a93;  */

undefined8 FUN_102640978(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126a63b8;
  func_0x000107c610f8();
  uVar2 = 0;
  FUN_1026420e0(0,0x112d5e950,&PTR_PTR_1126a6390);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
  func_0x000107c494ac(0);
  func_0x000107c61170(puVar3);
  puVar3 = &UNK_11052ce78;
  func_0x000107c613fc(&UNK_11052ce78,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_11052d0c0;
  func_0x000107c613fc(&UNK_11052d0c0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  func_0x0001000285a8(0x112d5f0e0,&UNK_10dac58b0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar1);
  uVar2 = 0x10264221c;
  func_0x0001000b64ac(0x10264221c,puVar4);
  uVar5 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(puVar1);
  func_0x000107c61574(uVar2);
  return uVar5;
}



/* Entry: 102640a94; end: 102640aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102640a94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auVar5 [16];
  long lStack_38;
  
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x150)) +
                     0x88);
  (*pcVar4)();
  lVar2 = param_1;
  func_0x000107c412cc();
  func_0x000107c615e8();
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    if (lVar2 != 1) {
      lStack_38 = lVar2;
      func_0x000107c60614(&UNK_11053b7d8,&lStack_38,&UNK_11053b7d8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1026398c8);
      (*pcVar4)();
    }
    (*pcVar4)();
    uVar1 = 0;
    FUN_1026e4480(0);
    lVar2 = param_1;
    func_0x000107c61480(param_1,uVar1);
    if (lVar2 == 0) {
      func_0x000107c615e8(param_1);
      uVar1 = 0;
      uVar3 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + _DAT_112eb7b98);
      func_0x000107c61174();
      func_0x000107c615e8(param_1);
      uVar1 = *(undefined8 *)(lVar2 + _DAT_112eb8a90);
      uVar3 = ((undefined8 *)(lVar2 + _DAT_112eb8a90))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(lVar2);
    }
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 102640ab0; end: 102640b77;  */

void FUN_102640ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48af4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar1);
  FUN_102642058(unaff_x20 + 0x60,auStack_68);
  FUN_102641fac(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x58))(param_1,param_2,uStack_50,lStack_48);
  FUN_102641e38(auStack_68);
  return;
}



/* Entry: 102640b78; end: 102640b7b;  */

void FUN_102640b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48af4(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar1);
  FUN_102642058(unaff_x20 + 0x60,auStack_68);
  FUN_102641fac(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x58))(param_1,param_2,uStack_50,lStack_48);
  FUN_102641e38(auStack_68);
  return;
}



/* Entry: 102640b7c; end: 102640bdb;  */

void FUN_102640b7c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x130);
  FUN_1026420e0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  pcVar1 = "";
  func_0x000107c60124("",0,2);
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 102640bdc; end: 102640c97;  */

void FUN_102640bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  lVar2 = 0;
  func_0x000107c5ed50();
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar5;
  uVar5 = 0x112d45220;
  FUN_102641708(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102640c98,uVar4,uVar5);
  return;
}



/* Entry: 102640c98; end: 1026410eb;  */

/* WARNING: Possible PIC construction at 0x000102641060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102641064) */
/* WARNING: Removing unreachable block (ram,0x0001026410b4) */
/* WARNING: Removing unreachable block (ram,0x0001026410a4) */
/* WARNING: Removing unreachable block (ram,0x000102641004) */
/* WARNING: Removing unreachable block (ram,0x000102640d08) */

void FUN_102640c98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x70,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(lVar10 + 0x120);
    func_0x000107c6157c(uVar11);
    func_0x000104886d18(unaff_x22 + 0xa0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61574(uVar11);
    lVar4 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61174();
    func_0x000107c600f4(uVar14);
    func_0x000107c61170(lVar4);
    uVar11 = 0x112d38ec0;
    FUN_102641708(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                  PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
    func_0x000107c601c0(unaff_x22 + 0x30,uVar15,uVar11);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar1 = PTR___sypN_11034f1a8;
    lVar8 = *(long *)(unaff_x22 + 0x48);
    while (lVar8 != 0) {
      func_0x000100102924(unaff_x22 + 0x30,unaff_x22 + 0x10);
      func_0x0001000bb420(unaff_x22 + 0x10,unaff_x22 + 0x50);
      uVar14 = 0;
      FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
      lVar8 = unaff_x22 + 0xb0;
      lVar13 = unaff_x22 + 0x50;
      func_0x000107c6147c(lVar8,lVar13,puVar1 + 8,uVar14,6);
      if ((int)lVar8 == 0) {
LAB_102640ec8:
        puVar6 = puVar2;
        func_0x000107c61558();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000100c077e4(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar9) {
          func_0x000100c077e4(1 < *(ulong *)(puVar2 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar9 + 1;
        func_0x000100102924(unaff_x22 + 0x10,puVar2 + uVar9 * 0x20 + 0x20);
      }
      else {
        uVar9 = *(ulong *)(unaff_x22 + 0xc0);
        lVar8 = *(long *)(unaff_x22 + 200);
        uVar12 = *(ulong *)(unaff_x22 + 0xb0);
        uVar7 = uVar12;
        func_0x000107c44fdc();
        func_0x000107c61180();
        uVar5 = uVar7;
        func_0x000107c5faec();
        func_0x000107c61170(uVar7);
        if (uVar5 == uVar9 && lVar13 == lVar8) {
          func_0x000107c6142c(lVar13);
          func_0x000107c61170(uVar12);
        }
        else {
          func_0x000107c605b8(uVar5,lVar13,*(undefined8 *)(unaff_x22 + 0xc0),
                              *(undefined8 *)(unaff_x22 + 200),0);
          func_0x000107c6142c(lVar13);
          func_0x000107c61170(uVar12);
          if ((uVar5 & 1) == 0) goto LAB_102640ec8;
        }
        FUN_102641e38(unaff_x22 + 0x10);
      }
      func_0x000107c601c0(unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0xd0),uVar11);
      lVar8 = *(long *)(unaff_x22 + 0x48);
    }
    (**(code **)(*(long *)(unaff_x22 + 0xd8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xd0));
    FUN_102641ed8(unaff_x22 + 0x30,0x112d387f8,&UNK_10d902650);
    lVar13 = *(long *)(puVar2 + 0x10);
    lVar8 = lVar4;
    func_0x000107c40808();
    if (lVar13 != lVar8) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c61428(lVar10 + 0x118,unaff_x22 + 0x88,0x21,0);
      func_0x000107c61434(uVar14);
      lVar4 = lVar10 + 0x118;
      FUN_1026419a8(lVar4,uVar11,uVar14);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 200));
      uVar9 = *(ulong *)(lVar10 + 0x118);
      if (uVar9 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar7 = uVar9;
        }
        func_0x000107c60480();
      }
      if ((long)uVar7 < lVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026410ec);
        (*pcVar3)();
      }
      FUN_102641d74(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_endAccess_11034f310)(unaff_x22 + 0x88);
      return;
    }
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(lVar10);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x000102640fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026410ec; end: 10264124b;  */

/* WARNING: Possible PIC construction at 0x0001026411b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026411bc) */

void FUN_1026410ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11052ce78;
  func_0x000107c613fc(&UNK_11052ce78,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11052d070;
  func_0x000107c613fc(&UNK_11052d070,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_11052d098;
  func_0x000107c613fc(&UNK_11052d098,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac5a30;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5a38,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10264124c; end: 102641293;  */

void FUN_10264124c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d5fd00;
  plVar5 = (long *)&UNK_10d926720;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102641294; end: 102641307;  */

/* WARNING: Possible PIC construction at 0x0001026412d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026412d8) */
/* WARNING: Removing unreachable block (ram,0x0001026412dc) */

void FUN_102641294(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x1026412d8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 102641308; end: 10264132b;  */

void FUN_102641308(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d5fcc0;
  plVar5 = (long *)&UNK_10d9266f0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1026420e0(0,0x112d5ec90,&PTR_PTR_1126bf100);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10264132c; end: 10264137b;  */

/* WARNING: Removing unreachable block (ram,0x000101136c6c) */
/* WARNING: Removing unreachable block (ram,0x000101136c90) */
/* WARNING: Removing unreachable block (ram,0x000101136c74) */
/* WARNING: Removing unreachable block (ram,0x000101136d6c) */
/* WARNING: Removing unreachable block (ram,0x000101136c80) */
/* WARNING: Removing unreachable block (ram,0x000101136c88) */
/* WARNING: Removing unreachable block (ram,0x000101136ccc) */
/* WARNING: Removing unreachable block (ram,0x000101136ce0) */
/* WARNING: Removing unreachable block (ram,0x000101136cec) */
/* WARNING: Removing unreachable block (ram,0x000101136cf4) */

ulong FUN_10264132c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  (*(code *)&UNK_1011455e4)(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    (*(code *)&UNK_101136e68)(0,uVar4,uVar2 + 0x20,param_1,0x112d5e958,&PTR_PTR_1126a6398);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101136d6c);
  (*pcVar1)();
}



/* Entry: 10264137c; end: 102641387;  */

void FUN_10264137c(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long unaff_x20;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  cVar3 = *(char *)(unaff_x20 + 0x18);
  lVar7 = *param_2;
  lVar1 = param_2[1];
  lVar5 = lVar7;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(lVar7);
  if (*(long *)(lVar5 + 0x10) == 0) {
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000101117e30(uVar6,lVar5);
    func_0x000107c6142c(lVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)(lVar1 + 0x10);
      pcVar8 = (char *)(lVar1 + 0x20);
      do {
        bVar4 = lVar7 != 0;
        lVar7 = lVar7 + -1;
        if (!bVar4) break;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != cVar3);
      goto LAB_10263e228;
    }
  }
  bVar4 = false;
LAB_10263e228:
  *(bool *)param_1 = bVar4;
  return;
}



/* Entry: 102641388; end: 10264140b;  */

void FUN_102641388(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10264140c;
  *(undefined1 *)(plVar4 + 0x10) = uVar3;
  plVar4[7] = lVar2;
  plVar4[8] = lVar5;
  plVar4[5] = param_1;
  plVar4[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263bc7c,0,0);
  return;
}



/* Entry: 10264140c; end: 102641447;  */

void FUN_10264140c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102641444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102641448; end: 1026414af;  */

undefined1 * FUN_102641448(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_60;
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5ec88,&UNK_10d925be0);
    puVar3 = PTR_PTR_1126a63a8;
    func_0x000107c610f8();
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar5 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c49564();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    puStack_60 = puVar3;
    func_0x000100854cb0(&puStack_60);
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_10263c924(puVar2);
    func_0x000107c61574(lVar1);
    ppuVar6 = (undefined **)puVar2;
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 1026414b0; end: 1026414fb;  */

void FUN_1026414b0(void)

{
  func_0x000107c61168(&PTR_PTR_112eb10d8);
  return;
}



/* Entry: 1026414fc; end: 10264155b;  */

void FUN_1026414fc(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102642230;
  plVar6[0x18] = lVar4;
  plVar6[0x19] = lVar7;
  plVar6[0x17] = lVar2;
  lVar2 = 0;
  func_0x000107c5ed50();
  plVar6[0x1a] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x1b] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1c] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x1d] = lVar2;
  uVar5 = 0x112d45220;
  FUN_102641708(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102640c98,lVar4,uVar5);
  return;
}



/* Entry: 10264155c; end: 1026415cb;  */

void FUN_10264155c(undefined8 param_1)

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
  plVar3[1] = 0x102642234;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026415cc; end: 102641707;  */

void FUN_1026415cc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  FUN_1026420e0(0,0x112d5ec90,&PTR_PTR_1126bf100);
  uVar4 = uVar3;
  func_0x000101146b3c();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026416f4);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x00010111c580(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026416f0);
        (*pcVar2)();
      }
      func_0x000101145728(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 102641708; end: 102641747;  */

void FUN_102641708(long *param_1,code *param_2,long param_3)

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



/* Entry: 102641748; end: 102641837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102641748(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0xd0) + _DAT_112fa96f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puStack_70 = (undefined *)0x0;
    func_0x000100087f6c(&puStack_70);
    func_0x000100c7f554();
  }
  else {
    pcStack_50 = FUN_10264209c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10111ef28;
    puStack_58 = &UNK_11052d290;
    uStack_48 = param_2;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c4426c(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102641838; end: 1026419a7;  */

undefined1  [16] FUN_102641838(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  uVar7 = param_2;
  if (param_1 >> 0x3e == 0) {
    uStack_58 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_58 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uStack_58 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_68 = param_1 & 0xffffffffffffff8;
  uVar8 = 0;
  while( true ) {
    if (uStack_58 == uVar8) {
      uVar8 = 0;
      uVar6 = 1;
      goto LAB_10264195c;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_68 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102641988);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar8;
      uVar7 = param_1;
      func_0x00010111c52c();
    }
    uVar4 = uVar3;
    func_0x000107c44fdc();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    if ((uVar5 == param_2) && (uVar7 == param_3)) break;
    uVar4 = uVar7;
    func_0x000107c605b8(uVar5,uVar7,param_2,param_3,0);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar7);
    if ((uVar5 & 1) != 0) goto LAB_102641958;
    bVar2 = SCARRY8(uVar8,1);
    uVar8 = uVar8 + 1;
    uVar7 = uVar4;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10264198c);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar7);
LAB_102641958:
  uVar6 = 0;
LAB_10264195c:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 1026419a8; end: 102641c67;  */

void FUN_1026419a8(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  uint uVar12;
  ulong uVar13;
  
  uVar11 = *param_1;
  uVar4 = uVar11;
  uVar8 = param_2;
  FUN_102641838();
  if (unaff_x21 == 0) {
    if (((uint)uVar8 & 0xff) == 1) {
      if (uVar11 >> 0x3e != 0) {
        uVar4 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar4 = uVar11;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar13 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102641a1c);
        (*pcVar2)();
      }
      while( true ) {
        uVar13 = uVar13 + 1;
        if (uVar11 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          uVar9 = uVar8;
        }
        else {
          uVar5 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar5 = uVar11;
          }
          func_0x000107c60480();
          uVar9 = uVar8;
        }
        if (uVar13 == uVar5) break;
        if ((uVar11 & 0xc000000000000001) == 0) {
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c30);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c34);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          uVar9 = uVar11;
          func_0x00010111c52c();
        }
        uVar10 = uVar5;
        func_0x000107c44fdc();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x000107c5faec();
        uVar8 = uVar9;
        func_0x000107c61170(uVar10);
        if ((uVar6 == param_2) && (uVar9 == param_3)) {
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
        }
        else {
          uVar8 = uVar9;
          func_0x000107c605b8(uVar6,uVar9,param_2,param_3,0);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
          if ((uVar6 & 1) == 0) {
            if (uVar4 != uVar13) {
              if ((uVar11 & 0xc000000000000001) == 0) {
                if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c44);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
                if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c48);
                  (*pcVar2)();
                }
                if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c4c);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)(uVar11 + 0x20 + uVar4 * 8);
                uVar9 = *(ulong *)(uVar11 + 0x20 + uVar13 * 8);
                func_0x000107c61174();
                func_0x000107c61174();
              }
              else {
                uVar5 = uVar4;
                func_0x00010111c52c(uVar4,uVar11);
                uVar9 = uVar13;
                uVar8 = uVar11;
                func_0x00010111c52c();
              }
              uVar10 = uVar11;
              func_0x000107c61550();
              if ((((int)uVar10 == 0) || ((long)uVar11 < 0)) || ((uVar11 >> 0x3e & 1) != 0)) {
                FUN_10264132c();
                uVar12 = (uint)(uVar11 >> 0x3e) & 1;
              }
              else {
                uVar12 = 0;
              }
              uVar10 = uVar11 & 0xffffffffffffff8;
              lVar1 = uVar10 + uVar4 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar9;
              func_0x000107c61170(uVar7);
              if (((long)uVar11 < 0) || (uVar12 != 0)) {
                FUN_10264132c();
                uVar10 = uVar11 & 0xffffffffffffff8;
              }
              if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c04);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c40);
                (*pcVar2)();
              }
              lVar1 = uVar10 + uVar13 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61170(uVar7);
              *param_1 = uVar11;
            }
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c3c);
              (*pcVar2)();
            }
          }
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102641c38);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 102641c68; end: 102641d73;  */

void FUN_102641c68(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102641d50);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102641d54);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102641d6c);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102641d70);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102641d74);
    (*pcVar5)();
  }
  return;
}



/* Entry: 102641d74; end: 102641e37;  */

/* WARNING: Removing unreachable block (ram,0x000102641d70) */

void FUN_102641d74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102641e14);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102641e2c);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102641e30);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102641e38);
      (*pcVar3)();
    }
    FUN_102649c00(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102641d50);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_1026420e0(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102641d54);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102641d6c);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102641d70);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102641e34);
  (*pcVar3)();
}



/* Entry: 102641e38; end: 102641e57;  */

void FUN_102641e38(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102641e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102641e58; end: 102641ed7;  */

void FUN_102641e58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102642238;
  plVar6[0x18] = lVar3;
  plVar6[0x19] = lVar7;
  plVar6[0x16] = lVar2;
  plVar6[0x17] = lVar1;
  plVar6[0x15] = lVar5;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1a] = uVar4;
  lVar5 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1b] = uVar4;
  lVar5 = 0;
  func_0x000103a814dc();
  plVar6[0x1c] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar6[0x1d] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1e] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263ff7c,0,0);
  return;
}



/* Entry: 102641ed8; end: 102641f17;  */

undefined8 FUN_102641ed8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102641f18; end: 102641f83;  */

void FUN_102641f18(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264223c;
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263d6d4,0,0);
  return;
}



/* Entry: 102641f84; end: 102641f93;  */

long FUN_102641f84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102641f94; end: 102641fab;  */

void FUN_102641f94(long param_1)

{
  FUN_102641e38(param_1 + 0x20);
  return;
}



/* Entry: 102641fac; end: 102641fd7;  */

long * FUN_102641fac(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102641fd8; end: 102641ff7;  */

void FUN_102641fd8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010263eaa4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      FUN_10263e4a0);
  return;
}



/* Entry: 102641ff8; end: 102642003;  */

void FUN_102641ff8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(ulong *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    FUN_1026420e0(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5ff4c();
    puStack_68 = puVar9;
    func_0x000100087f6c(&puStack_68);
    func_0x000107c61170(puVar9);
    func_0x000100c7f554();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar12 = *(long *)(lVar2 + 0x10);
    if (lVar12 != 0) {
      puVar11 = (ulong *)(lVar2 + 0x28);
      do {
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar8 = puVar11[-1];
          uVar1 = *puVar11;
          func_0x000107c61434(uVar1);
          func_0x000107c61434(param_1);
          uVar3 = uVar8;
          uVar5 = uVar1;
          func_0x000100029284();
          if ((uVar5 & 1) == 0) {
            func_0x000107c6142c(param_1);
          }
          else {
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar3 * 8);
            func_0x000107c61174(uVar4);
            func_0x000107c6142c(param_1);
            uVar3 = uVar8;
            func_0x000107c5fadc(uVar8,uVar1);
            uVar5 = uVar10;
            func_0x000107c4a52c();
            func_0x000107c61170(uVar3);
            if ((uVar5 & 1) == 0) {
              puVar6 = PTR_PTR_1126b4a40;
              func_0x000107c610f8(PTR_PTR_1126b4a40);
              func_0x000107c48448();
              puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
              func_0x000107c61174(puVar6);
              func_0x000107c5fadc(uVar8,uVar1);
              func_0x000107c48af4(puVar7);
              func_0x000107c61170(uVar8);
              func_0x000107c56bcc(puVar9);
              func_0x000107c61170(uVar4);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar7);
            }
            else {
              func_0x000107c61170(uVar4);
            }
          }
          func_0x000107c6142c(uVar1);
        }
        puVar11 = puVar11 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    puStack_68 = puVar9;
    func_0x000100087f6c(&puStack_68);
    func_0x000100c7f554();
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 102642004; end: 10264204f;  */

void FUN_102642004(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010263eaa4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      FUN_102641748);
  return;
}



/* Entry: 102642050; end: 102642057;  */

void FUN_102642050(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar12 = *param_2;
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10263ed78);
      (*pcVar13)();
    }
    uVar10 = *(ulong *)(lVar12 + 0x20);
    if (uVar10 != 0) {
      if (*(long *)(lVar12 + 0x10) == 1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10263ed7c);
        (*pcVar13)();
      }
      uVar11 = *(ulong *)(lVar12 + 0x28);
      if (uVar11 != 0) {
        func_0x000107c61174();
        func_0x000107c61174();
        uVar8 = 0;
        uVar6 = uVar10;
        FUN_102650ae8();
        uVar9 = 1;
        uVar7 = uVar11;
        FUN_102650ae8(uVar11,1);
        uVar1 = uVar6 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar1 = uVar8 >> 0x38 & 0xf;
        }
        uVar4 = uVar11;
        if (uVar1 != 0) {
          uVar4 = uVar10;
        }
        func_0x000107c61428(lVar3 + 0x10,auStack_90,0,0);
        FUN_102642058(lVar3 + 0x10,auStack_b8);
        FUN_102641fac(auStack_b8,uStack_a0);
        pcVar13 = *(code **)(lStack_98 + 0x20);
        func_0x000107c61174(uVar4);
        func_0x000107c61434(uVar2);
        (*pcVar13)();
        FUN_102641e38(auStack_b8);
        puVar5 = PTR_PTR_1126a63a8;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar6,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c5fadc(uVar7,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000107c49564();
        func_0x000107c61574(lVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar10);
        goto LAB_10263ed40;
      }
    }
    func_0x000107c61574();
  }
  puVar5 = PTR_PTR_1126a63a8;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c49564();
LAB_10263ed40:
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = puVar5;
  return;
}



/* Entry: 102642058; end: 10264209b;  */

long FUN_102642058(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10264209c; end: 1026420c3;  */

void FUN_10264209c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 1026420c4; end: 1026420df;  */

void FUN_1026420c4(long param_1,long param_2)

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



/* Entry: 1026420e0; end: 102642167;  */

void FUN_1026420e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102642168; end: 102642197;  */

void FUN_102642168(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102642198; end: 1026421fb;  */

void FUN_102642198(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102642240;
  plVar3[0x14] = lVar1;
  plVar3[0x15] = lVar2;
  plVar3[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263e868,0,0);
  return;
}



/* Entry: 1026421fc; end: 102642243;  */

void FUN_1026421fc(long param_1)

{
  FUN_102641e38(param_1 + 0x20);
  return;
}



/* Entry: 102642244; end: 102642403;  */

void FUN_102642244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1230,&UNK_10dac5af0);
  puVar1 = &UNK_11052d358;
  func_0x000107c613fc(&UNK_11052d358,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102642404,puVar1);
  return;
}



/* Entry: 102642404; end: 102642413;  */

void FUN_102642404(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_102643814();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x30) = puVar3;
  puVar3 = PTR_PTR_1126aace0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x38) = puVar3;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uStack_60;
  *(undefined8 *)(lVar2 + 0x18) = uStack_58;
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_68;
  *(undefined8 *)(lVar2 + 0x70) = uStack_78;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11052d3c0;
  *param_1 = lVar2;
  return;
}



/* Entry: 102642414; end: 1026424a7;  */

long FUN_102642414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  puVar1 = PTR_PTR_1126aace0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_5;
  return unaff_x20;
}



/* Entry: 1026424a8; end: 1026424ab;  */

void FUN_1026424a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026424ac; end: 1026427fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1026424ac(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c4c370();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(puVar3);
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126a6400;
      func_0x000107c610f8(PTR_PTR_1126a6400);
      func_0x000107c453e4();
      puVar11 = puVar3;
      func_0x000107c52060(puVar3);
      func_0x000107c56288((double)puVar11,puVar2);
      puVar5 = puVar3;
      puVar11 = PTR_s_respondsToSelector__11262c7e0;
      func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_mapViewportSessionIdObservable_11260c528);
      if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026427fc);
        (*pcVar1)();
      }
      puVar5 = puVar3;
      func_0x000107c4c460();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126ae6b8;
        func_0x000107c61168();
        puVar11 = (undefined *)0x112d38c88;
        func_0x0001026437c4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar6 = 0;
        func_0x000107c60110(0);
        func_0x000107c4a8a4();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
      }
      puVar7 = puVar5;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c562c4(puVar2);
      func_0x000107c61170();
      puVar12 = PTR__swift_isaMask_11034f488;
      puVar10 = *(ulong **)(unaff_x20 + 0x70);
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar10) + 0xb8))();
      if (puVar7 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar7;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          func_0x000107c5faec();
          puVar7 = puVar11;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar11);
          puVar11 = puVar7;
        }
      }
      func_0x000107c59584(puVar2);
      func_0x000107c61170();
      (**(code **)((*(ulong *)puVar12 & *puVar10) + 0xa0))();
      func_0x000100c6f294();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        puVar11 = (undefined *)0xe000000000000000;
      }
      else {
        puVar12 = puVar8;
        func_0x000107c5faec();
        func_0x000107c61170(puVar8);
      }
      func_0x000107c5fadc(puVar12,puVar11);
      func_0x000107c6142c(puVar11);
      func_0x000107c56fd0(puVar2);
      func_0x000107c61170(puVar12);
      puVar11 = &UNK_11052d380;
      func_0x000107c613fc(&UNK_11052d380,0x18,7);
      *(long *)(puVar11 + 0x10) = lVar4;
      pcStack_70 = FUN_102643248;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1011380cc;
      puStack_78 = &UNK_11052d398;
      puStack_68 = puVar11;
      func_0x000107c60bc4(&puStack_90);
      puVar11 = puStack_68;
      func_0x000107c61174(lVar4);
      func_0x000107c61574(puVar11);
      func_0x000107c54e7c(puVar2);
      func_0x000107c60bd0(ppuVar9);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c5cb24(uVar6);
      func_0x000107c61180();
      func_0x000107c5480c(puVar2);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
    }
  }
  return puVar2;
}



/* Entry: 1026427fc; end: 102642a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026427fc(undefined *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4c448();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) {
      param_1 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      FUN_1026507b4(param_1,lVar3);
      func_0x000107c615e8(lVar1);
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c5ea20(lVar3);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61428(unaff_x20 + 0x40,auStack_68,0,0);
    if ((*(long *)(unaff_x20 + 0x48) == 0) || (lVar1 = *(long *)(unaff_x20 + 0x58), lVar1 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulong *)(unaff_x20 + 0x50);
      func_0x000107c61434(lVar1);
      func_0x000107c5fadc(uVar8,lVar1);
      func_0x000107c6142c(lVar1);
    }
    uVar4 = uVar8;
    func_0x000107c31150();
    func_0x000107c61170(uVar8);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar4 & 0xfffffffffffffffe) != 2) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x70)) + 0xa0)
      )();
      FUN_102642a98();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (param_1 != (undefined *)0x0) {
      puVar5 = param_1;
      func_0x000107c4e684(param_1);
      func_0x000107c61180();
      uVar6 = 0;
      func_0x0001026437c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
      puVar7 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
    }
    uVar6 = 0;
    func_0x0001026437c4(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    puVar5 = puVar7;
    func_0x000107c5fc48(puVar7,uVar6);
    func_0x000107c6142c(puVar7);
    if (param_1 != (undefined *)0x0) {
      func_0x000107c4077c(param_1);
    }
    func_0x000107c5df4c(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102642a98; end: 102642b87;  */

undefined8 FUN_102642a98(long param_1)

{
  if (param_1 < 0x7c) {
    if (param_1 < 0x1f) {
      if (param_1 == 0) {
        return 4;
      }
      if (param_1 == 3) {
        return 5;
      }
      if (param_1 == 7) {
        return 6;
      }
    }
    else {
      if (param_1 - 0x4bU < 2) {
        return 5;
      }
      if (param_1 == 0x1f) {
        return 3;
      }
      if (param_1 == 0x22) {
        return 1;
      }
    }
  }
  else if (param_1 < 0xba) {
    if (param_1 == 0x7c) {
      return 0xc;
    }
    if (param_1 == 0xa8) {
      return 9;
    }
    if (param_1 == 0xb3) {
      return 1;
    }
  }
  else if (param_1 < 0xc3) {
    if (param_1 == 0xba) {
      return 8;
    }
    if (param_1 == 0xc2) {
      return 0xb;
    }
  }
  else {
    if (param_1 == 0xc3) {
      return 10;
    }
    if (param_1 == 0xf7) {
      return 0xd;
    }
  }
  return 0;
}



/* Entry: 102642b88; end: 102642ce3;  */

void FUN_102642b88(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_58,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar1 = PTR_PTR_1126a6388;
    func_0x000107c610f8(PTR_PTR_1126a6388);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c45d20(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61428(unaff_x20 + 0x60,auStack_70,1,0);
    lVar2 = *(long *)(unaff_x20 + 0x68);
    if (lVar2 == 0) {
      if (param_1 < 5) {
        uVar3 = *(undefined8 *)(&UNK_10dac5b98 + param_1 * 8);
        func_0x000107c311c0(uVar3);
        func_0x000107c61180();
      }
      else {
        uVar3 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
      }
      func_0x000107c54774(puVar1);
      func_0x000107c61170(uVar3);
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar3,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c54774(puVar1);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
      *(undefined8 *)(unaff_x20 + 0x60) = 0;
      *(undefined8 *)(unaff_x20 + 0x68) = 0;
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102642ce4; end: 102642da3;  */

/* WARNING: Possible PIC construction at 0x000102642d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102642d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102642d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102642d5c) */
/* WARNING: Removing unreachable block (ram,0x000102642d34) */
/* WARNING: Removing unreachable block (ram,0x000102642d84) */

void FUN_102642ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6388;
  func_0x000107c610f8(PTR_PTR_1126a6388);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c45d20(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102642da4; end: 102642f07;  */

void FUN_102642da4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (((lVar2 != 0) && (param_2 - 1U < 3)) && (param_1 - 1U < 3)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar5 = *(undefined8 *)(&UNK_10dac5bc0 + (param_2 - 1U) * 8);
    uVar4 = *(undefined8 *)(&UNK_10dac5bd8 + (param_1 - 1U) * 8);
    puVar1 = PTR_PTR_1126a6388;
    func_0x000107c610f8(PTR_PTR_1126a6388);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c45d20(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c311bc(uVar5);
    func_0x000107c61180();
    func_0x000107c52140(puVar1);
    func_0x000107c61170(uVar5);
    uVar3 = 0;
    func_0x000107c311c4(0);
    func_0x000107c61180();
    func_0x000107c58d70(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c311c8(uVar4);
    func_0x000107c61180();
    func_0x000107c59a30(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102642f08; end: 10264302f;  */

void FUN_102642f08(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_58,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar1 = PTR_PTR_1126a6388;
    func_0x000107c610f8(PTR_PTR_1126a6388);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c45d20(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = 0x1b;
    func_0x000107c311bc(0x1b);
    func_0x000107c61180();
    func_0x000107c52140(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x000107c311c4(0);
    func_0x000107c61180();
    func_0x000107c58d70(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c311c8(param_1);
    func_0x000107c61180();
    func_0x000107c59a30(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102643030; end: 1026431e7;  */

void FUN_102643030(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_78,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar1 = PTR_PTR_1126a6380;
    func_0x000107c610f8(PTR_PTR_1126a6380);
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(param_2,param_3);
    uVar3 = 6;
    if ((param_4 & 1) != 0) {
      uVar3 = 7;
    }
    func_0x000107c48264((double)param_1,puVar1);
    func_0x000107c61170(param_2);
    puVar2 = PTR_PTR_1126a6388;
    func_0x000107c610f8(PTR_PTR_1126a6388);
    func_0x000107c61174(puVar1);
    func_0x000107c5fadc(uVar5,lVar4);
    func_0x000107c45d20(puVar2);
    func_0x000107c61170(uVar5);
    uVar5 = 0x1c;
    func_0x000107c311bc(0x1c);
    func_0x000107c61180();
    func_0x000107c52140(puVar2);
    func_0x000107c61170(uVar5);
    uVar5 = 4;
    func_0x000107c311c4(4);
    func_0x000107c61180();
    func_0x000107c58d70(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c311c8(uVar3);
    func_0x000107c61180();
    func_0x000107c59a30(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c57b64(puVar2);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c6142c(lVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1026431e8; end: 102643247;  */

/* WARNING: Possible PIC construction at 0x000102643200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102643204) */

void FUN_1026431e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
    return;
  }
  return;
}



/* Entry: 102643248; end: 10264328f;  */

undefined8 FUN_102643248(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c458(uVar1);
  func_0x000107c61180();
  func_0x000107c5ea20();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 102643290; end: 1026432ab;  */

void FUN_102643290(long param_1,long param_2)

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



/* Entry: 1026432ac; end: 10264332b;  */

void FUN_1026432ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000102643218(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10264332c; end: 102643397;  */

void FUN_10264332c(void)

{
  FUN_1026424ac();
  return;
}



/* Entry: 102643398; end: 1026433eb;  */

void FUN_102643398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 0x60,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(undefined8 *)(lVar2 + 0x68) = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1026433ec; end: 102643427;  */

undefined1  [16] FUN_1026433ec(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x60,param_1,0x21,0);
  auVar2._8_8_ = lVar1 + 0x60;
  auVar2._0_8_ = FUN_102643834;
  return auVar2;
}



/* Entry: 102643428; end: 102643493;  */

undefined8 FUN_102643428(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 0x40,auStack_48,0,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  FUN_1026431e8(uVar1,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50),
                *(undefined8 *)(lVar2 + 0x58));
  return uVar1;
}



/* Entry: 102643494; end: 1026434ff;  */

void FUN_102643494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar5 = *unaff_x20;
  func_0x000107c61428(lVar5 + 0x40,auStack_58,1,0);
  uVar1 = *(undefined8 *)(lVar5 + 0x40);
  uVar3 = *(undefined8 *)(lVar5 + 0x48);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar4 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(lVar5 + 0x40) = param_1;
  *(undefined8 *)(lVar5 + 0x48) = param_2;
  *(undefined8 *)(lVar5 + 0x50) = param_3;
  *(undefined8 *)(lVar5 + 0x58) = param_4;
  func_0x000102643218(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102643500; end: 10264355b;  */

undefined1  [16] FUN_102643500(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x40,param_1,0x21,0);
  auVar2._8_8_ = lVar1 + 0x40;
  auVar2._0_8_ = 0x102643838;
  return auVar2;
}



/* Entry: 10264355c; end: 10264356b;  */

void FUN_10264355c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x38) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108f4658,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10264356c; end: 102643803;  */

void FUN_10264356c(void)

{
  FUN_102642b88();
  return;
}



/* Entry: 102643804; end: 102643813;  */

undefined1  [16] FUN_102643804(void)

{
  return ZEXT816(0x11052d470);
}



/* Entry: 102643814; end: 102643833;  */

void FUN_102643814(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1278);
  return;
}



/* Entry: 102643834; end: 10264383b;  */

void FUN_102643834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10264383c; end: 102643ea3;  */

void FUN_10264383c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1318,&UNK_10dac5bf0);
  puVar1 = &UNK_11052d498;
  func_0x000107c613fc(&UNK_11052d498,0xd8,7);
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
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
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
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x0001000823a8(FUN_102643ea4,puVar1);
  return;
}


