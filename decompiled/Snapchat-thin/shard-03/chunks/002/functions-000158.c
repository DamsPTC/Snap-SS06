/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102630924; end: 102630a17;  */

uint FUN_102630924(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102630a18; end: 102630a57;  */

void FUN_102630a18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb0be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac554c;
  func_0x000107c61520(&UNK_10dac554c,&UNK_11052ca48);
  puRam0000000112eb0be8 = puVar1;
  return;
}



/* Entry: 102630a58; end: 102630a6b;  */

void FUN_102630a58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102630a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102630a6c; end: 102630adb;  */

void FUN_102630a6c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  lVar1 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630adc);
  return;
}



/* Entry: 102630adc; end: 102630d1b;  */

void FUN_102630adc(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar9 + 0x78,unaff_x22 + 0x10,0,0);
  lVar9 = *(long *)(lVar9 + 0x78);
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar9 = 0;
    FUN_1026347a4();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar11,1,1,lVar9);
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0xa8);
    uVar6 = *(ulong *)(*(long *)(unaff_x22 + 0x30) + 0xb0);
    func_0x000107c61434(lVar9);
    func_0x000100029284(lVar2);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      lVar3 = 0;
      FUN_1026347a4();
      pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    }
    else {
      lVar12 = *(long *)(lVar9 + 0x38);
      lVar3 = 0;
      FUN_1026347a4();
      lVar13 = *(long *)(lVar3 + -8);
      FUN_102634c2c(lVar12 + *(long *)(lVar13 + 0x48) * lVar2,uVar11,FUN_1026347a4);
      pcVar8 = *(code **)(lVar13 + 0x38);
    }
    (*pcVar8)(uVar11,bVar1,1,lVar3);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c6142c(lVar9);
    FUN_1026347a4(0);
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar11,1,lVar3);
    if ((int)uVar11 != 1) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
      FUN_1026355dc(*(undefined8 *)(unaff_x22 + 0x40),uVar11,0x112eb0e50,&UNK_10dac5670);
      func_0x000107c614c4(uVar11,lVar3);
      if ((int)uVar11 == 0) {
        uVar10 = **(undefined8 **)(unaff_x22 + 0x38);
        *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x50) = plVar4;
        uVar11 = 0x112d5ed18;
        func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
        uVar5 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_102630d1c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScT5valuexvg_11034fdb8)
                  (*(undefined8 *)(unaff_x22 + 0x28),uVar10,uVar11,uVar5,PTR___ss5ErrorWS_11034ee10)
        ;
        return;
      }
      func_0x000102634c70(*(undefined8 **)(unaff_x22 + 0x38),FUN_1026347a4);
    }
  }
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102630ddc;
  lVar9 = *(long *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  plVar4[0x10] = 0;
  plVar4[0x11] = lVar2;
  plVar4[0xe] = lVar9;
  plVar4[0xf] = 0;
  lVar9 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  plVar4[0x12] = lVar9;
  uVar6 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar6;
  lVar9 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar6 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102632a80,lVar2,0);
  return;
}



/* Entry: 102630d1c; end: 102630d7f;  */

void FUN_102630d1c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102630d80;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_102630e7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,0);
  return;
}



/* Entry: 102630d80; end: 102630ddb;  */

void FUN_102630d80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000102635624(uVar2,0x112eb0e50,&UNK_10dac5670);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102630dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102630ddc; end: 102630e27;  */

void FUN_102630ddc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630e28,uVar1,0);
  return;
}



/* Entry: 102630e28; end: 102630e7b;  */

void FUN_102630e28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000102635624(uVar2,0x112eb0e50,&UNK_10dac5670);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102630e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102630e7c; end: 102630eff;  */

void FUN_102630e7c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  lVar2 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar3,1,1,lVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000102635624(uVar1,0x112eb0e50,&UNK_10dac5670);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102630efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102630f00; end: 102630feb;  */

void FUN_102630f00(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  lVar1 = 0;
  FUN_1026347a4();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  lVar1 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630fec);
  return;
}



/* Entry: 102630fec; end: 102631857;  */

void FUN_102630fec(void)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long unaff_x22;
  ulong *puVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  lVar17 = *(long *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c6157c(lVar2);
  FUN_1026358a0(lVar17,lVar2);
  func_0x000107c61574(lVar2);
  lVar23 = *(long *)(lVar17 + 0x10);
  func_0x000107c61428(lVar2 + 0x78,unaff_x22 + 0x10,0,0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar23 != 0) {
    lVar32 = 0;
    lVar22 = *(long *)(unaff_x22 + 0x90);
    do {
      puVar31 = (ulong *)(lVar17 + 0x28 + lVar32 * 0x10);
      lVar32 = lVar32 + 1;
      while( true ) {
        if (*(ulong *)(lVar17 + 0x10) <= lVar32 - 1U) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10263184c);
          (*pcVar18)();
        }
        uVar16 = puVar31[-1];
        uVar25 = *puVar31;
        lVar24 = *(long *)(lVar2 + 0x78);
        lVar29 = *(long *)(lVar24 + 0x10);
        func_0x000107c61434(uVar25);
        if (lVar29 == 0) goto LAB_10263114c;
        func_0x000107c61434(lVar24);
        uVar8 = uVar16;
        uVar14 = uVar25;
        func_0x000100029284(uVar16);
        if ((uVar14 & 1) == 0) break;
        uVar30 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x88);
        FUN_102634c2c(*(long *)(lVar24 + 0x38) + *(long *)(lVar22 + 0x48) * uVar8,uVar30,
                      FUN_1026347a4);
        func_0x000107c6142c(uVar25);
        func_0x000107c6142c(lVar24);
        (**(code **)(lVar22 + 0x38))(uVar30,0,1,uVar33);
        func_0x000102635624(uVar30,0x112eb0e50,&UNK_10dac5670);
        lVar32 = lVar32 + 1;
        puVar31 = puVar31 + 2;
        if (lVar32 - lVar23 == 1) goto LAB_102631210;
      }
      func_0x000107c6142c(lVar24);
LAB_10263114c:
      uVar30 = *(undefined8 *)(unaff_x22 + 0xe0);
      (**(code **)(lVar22 + 0x38))(uVar30,1,1,*(undefined8 *)(unaff_x22 + 0x88));
      func_0x000102635624(uVar30,0x112eb0e50,&UNK_10dac5670);
      puVar9 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar8 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar6 + uVar8 * 0x10 + 0x20) = uVar16;
      *(ulong *)(puVar6 + uVar8 * 0x10 + 0x28) = uVar25;
    } while (lVar32 != lVar23);
  }
LAB_102631210:
  *(undefined **)(unaff_x22 + 0xe8) = puVar6;
  func_0x000107c6142c(lVar17);
  uVar16 = *(ulong *)(puVar6 + 0x10);
  *(ulong *)(unaff_x22 + 0xf0) = uVar16;
  if (uVar16 == 0) {
    uVar30 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar33 = *(undefined8 *)(unaff_x22 + 200);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574();
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar30);
    func_0x000107c615c0(uVar27);
    func_0x000107c615c0(uVar33);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar28);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar26);
    func_0x000107c615c0(uVar34);
    func_0x000107c615c0(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010263181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar17 = *(long *)(unaff_x22 + 0x90);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar9 = &UNK_11052cb50;
  func_0x000107c613fc(&UNK_11052cb50,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar30;
  *(undefined **)(puVar9 + 0x18) = puVar6;
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(puVar6);
  uVar30 = 0x112e08a60;
  func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
  uVar33 = 0x61;
  func_0x000100859150(0x61,0,0x3c,4,0,0,&UNK_10dac56a0,puVar9,uVar30);
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar33;
  func_0x000107c61574(puVar9);
  uVar25 = 0;
  puVar31 = (ulong *)(puVar6 + 0x28);
  do {
    if (*(ulong *)(puVar6 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102631850);
      (*pcVar18)();
    }
    uVar26 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar3 = *(undefined8 **)(unaff_x22 + 0xd8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = puVar31[-1];
    uVar14 = *puVar31;
    puVar9 = &UNK_11052cb78;
    func_0x000107c613fc(&UNK_11052cb78,0x28,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar33;
    *(ulong *)(puVar9 + 0x18) = uVar8;
    *(ulong *)(puVar9 + 0x20) = uVar14;
    func_0x000107c61438(uVar14,2);
    func_0x000107c6157c(uVar33);
    uVar28 = 0x112d5ed18;
    func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
    uVar10 = 0x61;
    func_0x000100859150(0x61,0,0x3c,4,0,0,&UNK_10dac56b8,puVar9,uVar28);
    func_0x000107c61574(puVar9);
    *puVar3 = uVar10;
    func_0x000107c6159c(puVar3,uVar27,0);
    pcVar18 = *(code **)(lVar17 + 0x38);
    *(code **)(unaff_x22 + 0x100) = pcVar18;
    (*pcVar18)(puVar3,0,1,uVar27);
    func_0x000107c61428(lVar2 + 0x78,unaff_x22 + 0x28,0x21,0);
    func_0x000102635664(puVar3,uVar26,0x112eb0e50,&UNK_10dac5670);
    pcVar19 = *(code **)(lVar17 + 0x30);
    *(code **)(unaff_x22 + 0x108) = pcVar19;
    (*pcVar19)(uVar26,1,uVar27);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xd0);
    if ((int)uVar26 == 1) {
      func_0x000107c6157c(uVar10);
      func_0x000102635624(uVar28,0x112eb0e50,&UNK_10dac5670);
      uVar28 = *(undefined8 *)(lVar2 + 0x78);
      func_0x000107c61434(uVar28);
      uVar12 = uVar14;
      func_0x000100029284();
      func_0x000107c6142c(uVar28);
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(uVar14);
        uVar28 = 1;
      }
      else {
        iVar7 = (int)*(undefined8 *)(lVar2 + 0x78);
        func_0x000107c61558();
        lVar23 = *(long *)(lVar2 + 0x78);
        *(undefined8 *)(lVar2 + 0x78) = 0x8000000000000000;
        if (iVar7 == 0) {
          FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
        }
        uVar28 = *(undefined8 *)(unaff_x22 + 200);
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar23 + 0x30) + uVar8 * 0x10 + 8));
        func_0x0001026356ac(*(long *)(lVar23 + 0x38) + *(long *)(lVar17 + 0x48) * uVar8,uVar28,
                            FUN_1026347a4);
        FUN_10263539c(uVar8,lVar23,FUN_1026347a4);
        func_0x000107c6142c(uVar14);
        uVar28 = *(undefined8 *)(lVar2 + 0x78);
        *(long *)(lVar2 + 0x78) = lVar23;
        func_0x000107c6142c(uVar28);
        uVar28 = 0;
      }
      uVar26 = *(undefined8 *)(unaff_x22 + 200);
      (*pcVar18)(uVar26,uVar28,1,*(undefined8 *)(unaff_x22 + 0x88));
      func_0x000102635624(uVar26,0x112eb0e50,&UNK_10dac5670);
    }
    else {
      func_0x0001026356ac(uVar28,*(undefined8 *)(unaff_x22 + 0xa0),FUN_1026347a4);
      func_0x000107c6157c(uVar10);
      uVar11 = *(ulong *)(lVar2 + 0x78);
      func_0x000107c61558();
      lVar32 = *(long *)(lVar2 + 0x78);
      *(undefined8 *)(lVar2 + 0x78) = 0x8000000000000000;
      uVar12 = uVar8;
      uVar15 = uVar14;
      func_0x000100029284();
      uVar21 = (ulong)~(uint)uVar15 & 1;
      lVar23 = *(long *)(lVar32 + 0x10) + uVar21;
      if (SCARRY8(*(long *)(lVar32 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102631854);
        (*pcVar18)();
      }
      if (*(long *)(lVar32 + 0x18) < lVar23) {
        func_0x000102634f54(lVar23,uVar11,FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
        uVar12 = uVar8;
        uVar11 = uVar14;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar11 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___sSSN_11034da80);
          return;
        }
      }
      else if ((uVar11 & 1) == 0) {
        FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
      }
      uVar28 = *(undefined8 *)(unaff_x22 + 0xa0);
      if ((uVar15 & 1) == 0) {
        lVar23 = lVar32 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar23 + 0x40) = *(ulong *)(lVar23 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar32 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar8;
        puVar1[1] = uVar14;
        func_0x0001026356ac(uVar28,*(long *)(lVar32 + 0x38) + *(long *)(lVar17 + 0x48) * uVar12,
                            FUN_1026347a4);
        if (SCARRY8(*(long *)(lVar32 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102631858);
          (*pcVar18)();
        }
        *(long *)(lVar32 + 0x10) = *(long *)(lVar32 + 0x10) + 1;
      }
      else {
        FUN_10263585c(uVar28,*(long *)(lVar32 + 0x38) + *(long *)(lVar17 + 0x48) * uVar12,
                      FUN_1026347a4);
        func_0x000107c6142c(uVar14);
      }
      uVar28 = *(undefined8 *)(lVar2 + 0x78);
      *(long *)(lVar2 + 0x78) = lVar32;
      func_0x000107c6142c(uVar28);
    }
    uVar25 = uVar25 + 1;
    func_0x000107c614a8(unaff_x22 + 0x28);
    func_0x000107c61574(uVar10);
    puVar31 = puVar31 + 2;
  } while (uVar16 != uVar25);
  plVar13 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar13;
  uVar28 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_102631858;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x70,uVar33,uVar30,uVar28,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102631858; end: 1026318b3;  */

void FUN_102631858(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1026318b4;
  }
  else {
    pcVar1 = FUN_102631e20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x80),0);
  return;
}



/* Entry: 1026318b4; end: 102631e1f;  */

void FUN_1026318b4(void)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long unaff_x22;
  ulong uVar25;
  long lVar26;
  long lVar27;
  
  lVar24 = 0;
  uVar25 = 0;
  lVar27 = *(long *)(unaff_x22 + 0x70);
  do {
    if (*(ulong *)(*(long *)(unaff_x22 + 0xe8) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102631e18);
      (*pcVar18)();
    }
    lVar15 = *(long *)(unaff_x22 + 0xe8) + lVar24;
    uVar22 = *(ulong *)(lVar15 + 0x20);
    uVar5 = *(ulong *)(lVar15 + 0x28);
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar15 = 0;
      func_0x000103a814dc();
      (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar23,1,1,lVar15);
      func_0x000107c61434(uVar5);
    }
    else {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(lVar27);
      uVar14 = uVar22;
      uVar17 = uVar5;
      func_0x000100029284(uVar22);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xc0);
      bVar2 = (uVar17 & 1) == 0;
      if (bVar2) {
        func_0x000107c6142c(lVar27);
        lVar15 = 0;
        func_0x000103a814dc();
        pcVar18 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
      }
      else {
        lVar20 = *(long *)(lVar27 + 0x38);
        lVar15 = 0;
        func_0x000103a814dc();
        lVar26 = *(long *)(lVar15 + -8);
        FUN_102634c2c(lVar20 + *(long *)(lVar26 + 0x48) * uVar14,uVar23,&SUB_103a814dc);
        func_0x000107c6142c(lVar27);
        pcVar18 = *(code **)(lVar26 + 0x38);
      }
      (*pcVar18)(uVar23,bVar2,1,lVar15);
    }
    pcVar18 = *(code **)(unaff_x22 + 0x100);
    pcVar6 = *(code **)(unaff_x22 + 0x108);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar15 = *(long *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c6159c(uVar21,uVar7,1);
    (*pcVar18)(uVar21,0,1,uVar7);
    func_0x000107c61428(lVar15 + 0x78,unaff_x22 + 0x58,0x21,0);
    func_0x000102635664(uVar21,uVar23,0x112eb0e50,&UNK_10dac5670);
    (*pcVar6)(uVar23,1,uVar7);
    if ((int)uVar23 == 1) {
      lVar15 = *(long *)(unaff_x22 + 0x80);
      func_0x000102635624(*(undefined8 *)(unaff_x22 + 0xb8),0x112eb0e50,&UNK_10dac5670);
      uVar23 = *(undefined8 *)(lVar15 + 0x78);
      func_0x000107c61434(uVar23);
      uVar14 = uVar5;
      func_0x000100029284();
      func_0x000107c6142c(uVar23);
      if ((uVar14 & 1) == 0) {
        func_0x000107c6142c(uVar5);
        uVar23 = 1;
      }
      else {
        lVar15 = *(long *)(unaff_x22 + 0x80);
        iVar13 = (int)*(undefined8 *)(lVar15 + 0x78);
        func_0x000107c61558();
        lVar20 = *(long *)(lVar15 + 0x78);
        *(undefined8 *)(lVar15 + 0x78) = 0x8000000000000000;
        if (iVar13 == 0) {
          FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
        }
        uVar23 = *(undefined8 *)(unaff_x22 + 0xb0);
        lVar15 = *(long *)(unaff_x22 + 0x90);
        lVar26 = *(long *)(unaff_x22 + 0x80);
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar20 + 0x30) + uVar22 * 0x10 + 8));
        func_0x0001026356ac(*(long *)(lVar20 + 0x38) + *(long *)(lVar15 + 0x48) * uVar22,uVar23,
                            FUN_1026347a4);
        FUN_10263539c(uVar22,lVar20,FUN_1026347a4);
        func_0x000107c6142c(uVar5);
        uVar23 = *(undefined8 *)(lVar26 + 0x78);
        *(long *)(lVar26 + 0x78) = lVar20;
        func_0x000107c6142c(uVar23);
        uVar23 = 0;
      }
      uVar21 = *(undefined8 *)(unaff_x22 + 0xb0);
      (**(code **)(unaff_x22 + 0x100))(uVar21,uVar23,1,*(undefined8 *)(unaff_x22 + 0x88));
      func_0x000102635624(uVar21,0x112eb0e50,&UNK_10dac5670);
    }
    else {
      lVar15 = *(long *)(unaff_x22 + 0x80);
      func_0x0001026356ac(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0x98),
                          FUN_1026347a4);
      uVar16 = *(ulong *)(lVar15 + 0x78);
      func_0x000107c61558();
      lVar20 = *(long *)(lVar15 + 0x78);
      *(undefined8 *)(lVar15 + 0x78) = 0x8000000000000000;
      uVar14 = uVar22;
      uVar17 = uVar5;
      func_0x000100029284();
      uVar19 = (ulong)~(uint)uVar17 & 1;
      lVar15 = *(long *)(lVar20 + 0x10) + uVar19;
      if (SCARRY8(*(long *)(lVar20 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102631e1c);
        (*pcVar18)();
      }
      if (*(long *)(lVar20 + 0x18) < lVar15) {
        func_0x000102634f54(lVar15,uVar16,FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
        uVar14 = uVar22;
        uVar16 = uVar5;
        func_0x000100029284();
        if (((uint)uVar17 & 1) != ((uint)uVar16 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___sSSN_11034da80);
          return;
        }
        lVar15 = *(long *)(unaff_x22 + 0x90);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
joined_r0x000102631d34:
        if ((uVar17 & 1) == 0) goto LAB_102631c4c;
LAB_102631cac:
        FUN_10263585c(uVar23,*(long *)(lVar20 + 0x38) + *(long *)(lVar15 + 0x48) * uVar14,
                      FUN_1026347a4);
        func_0x000107c6142c(uVar5);
      }
      else {
        if ((uVar16 & 1) == 0) {
          FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
          lVar15 = *(long *)(unaff_x22 + 0x90);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
          goto joined_r0x000102631d34;
        }
        lVar15 = *(long *)(unaff_x22 + 0x90);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
        if ((uVar17 & 1) != 0) goto LAB_102631cac;
LAB_102631c4c:
        lVar26 = lVar20 + (uVar14 >> 6) * 8;
        *(ulong *)(lVar26 + 0x40) = *(ulong *)(lVar26 + 0x40) | 1L << (uVar14 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar20 + 0x30) + uVar14 * 0x10);
        *puVar1 = uVar22;
        puVar1[1] = uVar5;
        func_0x0001026356ac(uVar23,*(long *)(lVar20 + 0x38) + *(long *)(lVar15 + 0x48) * uVar14,
                            FUN_1026347a4);
        if (SCARRY8(*(long *)(lVar20 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102631e20);
          (*pcVar18)();
        }
        *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + 1;
      }
      uVar23 = *(undefined8 *)(*(long *)(unaff_x22 + 0x80) + 0x78);
      *(long *)(*(long *)(unaff_x22 + 0x80) + 0x78) = lVar20;
      func_0x000107c6142c(uVar23);
    }
    uVar25 = uVar25 + 1;
    uVar22 = *(ulong *)(unaff_x22 + 0xf0);
    func_0x000107c614a8(unaff_x22 + 0x58);
    lVar24 = lVar24 + 0x10;
    if (uVar25 == uVar22) {
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c6142c(lVar27);
      func_0x000107c61574(uVar23);
      FUN_1026331c8();
      uVar23 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar21 = *(undefined8 *)(unaff_x22 + 200);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
      func_0x000107c615c0(uVar8);
      func_0x000107c615c0(uVar23);
      func_0x000107c615c0(uVar9);
      func_0x000107c615c0(uVar21);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(uVar7);
      func_0x000107c615c0(uVar11);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar12);
      func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102631de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  } while( true );
}



/* Entry: 102631e20; end: 102632073;  */

void FUN_102631e20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar15 = 0;
  lVar16 = 0;
  do {
    lVar18 = *(long *)(unaff_x22 + 0x80);
    lVar14 = *(long *)(unaff_x22 + 0xe8) + lVar15;
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar4 = *(ulong *)(lVar14 + 0x28);
    func_0x000107c61428(lVar18 + 0x78,unaff_x22 + 0x40,0x21,0);
    uVar19 = *(undefined8 *)(lVar18 + 0x78);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar19);
    uVar12 = uVar4;
    func_0x000100029284();
    func_0x000107c6142c(uVar19);
    if ((uVar12 & 1) == 0) {
      uVar19 = 1;
    }
    else {
      lVar18 = *(long *)(unaff_x22 + 0x80);
      iVar10 = (int)*(undefined8 *)(lVar18 + 0x78);
      func_0x000107c61558();
      lVar14 = *(long *)(lVar18 + 0x78);
      *(undefined8 *)(lVar18 + 0x78) = 0x8000000000000000;
      if (iVar10 == 0) {
        FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar18 = *(long *)(unaff_x22 + 0x90);
      lVar17 = *(long *)(unaff_x22 + 0x80);
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar11 * 0x10 + 8));
      func_0x0001026356ac(*(long *)(lVar14 + 0x38) + *(long *)(lVar18 + 0x48) * lVar11,uVar19,
                          FUN_1026347a4);
      FUN_10263539c(lVar11,lVar14,FUN_1026347a4);
      uVar19 = *(undefined8 *)(lVar17 + 0x78);
      *(long *)(lVar17 + 0x78) = lVar14;
      func_0x000107c6142c(uVar19);
      uVar19 = 0;
    }
    lVar16 = lVar16 + 1;
    lVar14 = *(long *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(unaff_x22 + 0x100))(uVar13,uVar19,1,*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c614a8(unaff_x22 + 0x40);
    func_0x000107c6142c(uVar4);
    func_0x000102635624(uVar13,0x112eb0e50,&UNK_10dac5670);
    lVar15 = lVar15 + 0x10;
  } while (lVar16 != lVar14);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c61574(uVar19);
  FUN_1026331c8();
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102632070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102632074; end: 10263208b;  */

void FUN_102632074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263208c,param_2,0);
  return;
}



/* Entry: 10263208c; end: 102632143;  */

void FUN_10263208c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar8 + 0x98);
  lVar3 = *(long *)(lVar8 + 0xa0);
  puVar6 = (uint3 *)(lVar8 + 0x80);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83e90();
  uVar10 = *(undefined8 *)(puVar6 + 2);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102632144;
                    /* WARNING: Could not recover jumptable at 0x000102632140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (*(undefined8 *)(unaff_x22 + 0x20),(ulong)uVar4,uVar10,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 102632144; end: 1026321b7;  */

void FUN_102632144(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010263218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026321b8,*(undefined8 *)(lVar1 + 0x18),0);
  return;
}



/* Entry: 1026321b8; end: 1026321cf;  */

void FUN_1026321b8(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001026321cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026321d0; end: 102632273;  */

void FUN_1026321d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  uVar2 = 0x112e08a60;
  func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102632274;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x10,param_2,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102632274; end: 1026322cf;  */

void FUN_102632274(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1026322d0;
  }
  else {
    pcVar1 = FUN_1026323b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026322d0; end: 1026323b3;  */

void FUN_1026322d0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x20);
    uVar3 = *(ulong *)(unaff_x22 + 0x28);
    func_0x000107c61434(lVar4);
    func_0x000100029284(lVar1);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar7 = *(long *)(lVar4 + 0x38);
      lVar2 = 0;
      func_0x000103a814dc();
      lVar6 = *(long *)(lVar2 + -8);
      FUN_102634c2c(lVar7 + *(long *)(lVar6 + 0x48) * lVar1,uVar5,&SUB_103a814dc);
      func_0x000107c6142c(lVar4);
      uVar5 = 0;
      goto LAB_102632378;
    }
    func_0x000107c6142c(lVar4);
  }
  lVar2 = 0;
  func_0x000103a814dc();
  lVar6 = *(long *)(lVar2 + -8);
  uVar5 = 1;
LAB_102632378:
  (**(code **)(lVar6 + 0x38))(*(undefined8 *)(unaff_x22 + 0x18),uVar5,1,lVar2);
  func_0x000107c6142c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x0001026323b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026323b4; end: 1026323bf;  */

void FUN_1026323b4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001026323bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026323c0; end: 102632573;  */

void FUN_1026323c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112eb0e50;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  FUN_1026347a4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000102635664(param_1,lVar6,0x112eb0e50,&UNK_10dac5670);
  lVar1 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000102635624(lVar6,0x112eb0e50,&UNK_10dac5670);
    FUN_10263525c(lVar5,uStack_70,param_3);
    func_0x000107c6142c(param_3);
    func_0x000102635624(lVar5,0x112eb0e50,&UNK_10dac5670);
  }
  else {
    func_0x0001026356ac(lVar6,lVar7,FUN_1026347a4);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_1026356f0(lVar7,uStack_70,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 102632574; end: 1026325db;  */

void FUN_102632574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar1 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026325dc);
  return;
}



/* Entry: 1026325dc; end: 102632863;  */

void FUN_1026325dc(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar10 + 0x78,unaff_x22 + 0x10,0,0);
  lVar10 = *(long *)(lVar10 + 0x78);
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar10 = 0;
    FUN_1026347a4();
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar13,1,1,lVar10);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar7 = *(ulong *)(unaff_x22 + 0x38);
    func_0x000107c61434(lVar10);
    func_0x000100029284(lVar2);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    bVar1 = (uVar7 & 1) == 0;
    if (bVar1) {
      lVar3 = 0;
      FUN_1026347a4();
      pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    }
    else {
      lVar14 = *(long *)(lVar10 + 0x38);
      lVar3 = 0;
      FUN_1026347a4();
      lVar15 = *(long *)(lVar3 + -8);
      FUN_102634c2c(lVar14 + *(long *)(lVar15 + 0x48) * lVar2,uVar13,FUN_1026347a4);
      pcVar9 = *(code **)(lVar15 + 0x38);
    }
    (*pcVar9)(uVar13,bVar1,1,lVar3);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c6142c(lVar10);
    FUN_1026347a4(0);
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar13,1,lVar3);
    if ((int)uVar13 != 1) {
      puVar11 = *(undefined8 **)(unaff_x22 + 0x48);
      puVar5 = puVar11;
      func_0x000107c614c4(puVar11,lVar3);
      if ((int)puVar5 != 0) {
        if ((int)puVar5 == 1) {
          func_0x000102635664(puVar11,*(undefined8 *)(unaff_x22 + 0x28),0x112d5ed18,&UNK_10d925c50);
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
          lVar10 = 0;
          func_0x000103a814dc();
          (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar13,1,1,lVar10);
        }
        func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102632860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar12 = *puVar11;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar4;
      uVar13 = 0x112d5ed18;
      func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102632864;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScT5valuexvg_11034fdb8)
                (*(undefined8 *)(unaff_x22 + 0x28),uVar12,uVar13,uVar6,PTR___ss5ErrorWS_11034ee10);
      return;
    }
  }
  lVar3 = *(long *)(unaff_x22 + 0x38);
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102632900;
  lVar14 = *(long *)(unaff_x22 + 0x40);
  lVar10 = *(long *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  plVar4[0x10] = lVar3;
  plVar4[0x11] = lVar14;
  plVar4[0xe] = lVar10;
  plVar4[0xf] = lVar2;
  lVar10 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  plVar4[0x12] = lVar10;
  uVar7 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar7;
  lVar10 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar7 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102632a80,lVar14,0);
  return;
}



/* Entry: 102632864; end: 1026328c7;  */

void FUN_102632864(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1026328c8;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x10263297c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,0);
  return;
}



/* Entry: 1026328c8; end: 1026329db;  */

void FUN_1026328c8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001026328fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026329dc; end: 102632a7f;  */

void FUN_1026329dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102632a80);
  return;
}



/* Entry: 102632a80; end: 102632d2b;  */

void FUN_102632a80(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(ulong *)(unaff_x22 + 0x80);
  puVar3 = &UNK_11052cb28;
  func_0x000107c613fc(&UNK_11052cb28,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  *(ulong *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(uVar4);
  uVar4 = 0x61;
  func_0x000100859150(0x61,0,0x3c,4,0,0,&UNK_10dac5680,puVar3,uVar2);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  func_0x000107c61574(puVar3);
  if (uVar8 == 0) {
    lVar16 = *(long *)(unaff_x22 + 0x88);
    lVar17 = *(long *)(lVar16 + 0xa8);
    uVar13 = *(ulong *)(lVar16 + 0xb0);
    func_0x000107c61434(uVar13);
  }
  else {
    lVar17 = *(long *)(unaff_x22 + 0x78);
    lVar16 = *(long *)(unaff_x22 + 0x88);
    uVar13 = uVar8;
  }
  *(long *)(unaff_x22 + 0xb8) = lVar17;
  *(ulong *)(unaff_x22 + 0xc0) = uVar13;
  func_0x000107c61428(lVar16 + 0x78,unaff_x22 + 0x10,0,0);
  lVar14 = *(long *)(lVar16 + 0x78);
  if (*(long *)(lVar14 + 0x10) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar6 = 0;
    FUN_1026347a4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar11,1,1,lVar6);
    func_0x000107c61434(uVar8);
  }
  else {
    func_0x000107c61434(uVar8);
    func_0x000107c61434(lVar14);
    lVar5 = lVar17;
    uVar8 = uVar13;
    func_0x000100029284(lVar17);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      lVar6 = 0;
      FUN_1026347a4();
      pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    }
    else {
      lVar9 = *(long *)(lVar14 + 0x38);
      lVar6 = 0;
      FUN_1026347a4();
      lVar12 = *(long *)(lVar6 + -8);
      FUN_102634c2c(lVar9 + *(long *)(lVar12 + 0x48) * lVar5,uVar11,FUN_1026347a4);
      pcVar10 = *(code **)(lVar12 + 0x38);
    }
    (*pcVar10)(uVar11,bVar1,1,lVar6);
    func_0x000107c6142c(lVar14);
  }
  puVar15 = *(undefined8 **)(unaff_x22 + 0xa0);
  *puVar15 = uVar4;
  FUN_1026347a4(0);
  *(long *)(unaff_x22 + 200) = lVar6;
  func_0x000107c6159c(puVar15,lVar6,0);
  pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  *(code **)(unaff_x22 + 0xd0) = pcVar10;
  (*pcVar10)(puVar15,0,1,lVar6);
  func_0x000107c61428(lVar16 + 0x78,unaff_x22 + 0x28,0x21,0);
  func_0x000107c61434(uVar13);
  func_0x000107c6157c(uVar4);
  FUN_1026323c0(puVar15,lVar17,uVar13);
  func_0x000107c614a8(unaff_x22 + 0x28);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar7;
  uVar11 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102632d2c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (*(undefined8 *)(unaff_x22 + 0x98),uVar4,*(undefined8 *)(unaff_x22 + 0x90),uVar11,
             PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102632d2c; end: 102632d87;  */

void FUN_102632d2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102632d88;
  }
  else {
    pcVar1 = FUN_102632ebc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x88),0);
  return;
}



/* Entry: 102632d88; end: 102632ebb;  */

void FUN_102632d88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  pcVar4 = *(code **)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar10 = *(long *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1026355dc(uVar3,uVar7,0x112d5ed18,&UNK_10d925c50);
  func_0x000107c6159c(uVar7,uVar1,1);
  (*pcVar4)(uVar7,0,1,uVar1);
  func_0x000107c61428(lVar10 + 0x78,unaff_x22 + 0x58,0x21,0);
  FUN_1026323c0(uVar7,uVar9,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x58);
  FUN_1026331c8();
  func_0x000107c61574(uVar6);
  func_0x000102635624(uVar2,0x112eb0e50,&UNK_10dac5670);
  func_0x000102635664(uVar3,uVar8,0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000102632eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102632ebc; end: 102632fd7;  */

void FUN_102632ebc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar8 = *(long *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1026355dc(uVar5,uVar7,0x112eb0e50,&UNK_10dac5670);
  func_0x000107c61428(lVar8 + 0x78,unaff_x22 + 0x40,0x21,0);
  FUN_1026323c0(uVar7,uVar1,uVar2);
  func_0x000107c614a8(unaff_x22 + 0x40);
  FUN_1026331c8();
  func_0x000107c614ac(uVar6);
  func_0x000107c61574(uVar3);
  func_0x000102635624(uVar5,0x112eb0e50,&UNK_10dac5670);
  lVar8 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar4,1,1,lVar8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102632fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102632fd8; end: 102632ff3;  */

void FUN_102632fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102632ff4,param_4,0);
  return;
}



/* Entry: 102632ff4; end: 10263314f;  */

void FUN_102632ff4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 *puVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    lVar5 = *(long *)(lVar4 + 0xa0);
    puVar8 = (uint3 *)(lVar4 + 0x80);
    func_0x0001000a8868(puVar8,uVar3);
    func_0x000103a83e90();
    uVar11 = *(undefined8 *)(puVar8 + 2);
    piVar10 = *(int **)(lVar5 + 0x18);
    iVar1 = *piVar10;
    plVar9 = (long *)(ulong)(uint)piVar10[1];
    uVar6 = *puVar8;
    uVar7 = puVar8[4];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102633150;
                    /* WARNING: Could not recover jumptable at 0x0001026330b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar10))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),lVar2,
               (ulong)uVar6,uVar11,(char)uVar7,uVar3,lVar5);
    return;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x98);
  lVar2 = *(long *)(lVar4 + 0xa0);
  puVar8 = (uint3 *)(lVar4 + 0x80);
  func_0x0001000a8868(puVar8,uVar3);
  func_0x000103a83e90();
  uVar11 = *(undefined8 *)(puVar8 + 2);
  piVar10 = *(int **)(lVar2 + 8);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  uVar6 = *puVar8;
  uVar7 = puVar8[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10263318c;
                    /* WARNING: Could not recover jumptable at 0x00010263314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (plVar9,*(undefined8 *)(unaff_x22 + 0x10),(ulong)uVar6,uVar11,(char)uVar7,uVar3,lVar2);
  return;
}



/* Entry: 102633150; end: 1026331c7;  */

void FUN_102633150(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000102633188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026331c8; end: 102633abb;  */

void FUN_1026331c8(void)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long unaff_x20;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  ulong uVar31;
  code *pcVar32;
  code *pcStack_130;
  ulong uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong *puStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined *puStack_e0;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  func_0x000103a814dc();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar5 = 0x112d5ed18;
  lStack_f8 = lVar16;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar20 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_120 = puVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (long)puVar20 - extraout_x12_00;
  lStack_108 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12_01;
  lStack_110 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar21 - extraout_x12_03;
  lVar5 = 0x112eb0e48;
  func_0x0001000285a8(0x112eb0e48,&UNK_10dac5660);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar22 = (ulong *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puStack_100 = puVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (long)puVar22 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (undefined8 *)(lVar23 - extraout_x12_05);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_80,0,0);
  lVar16 = *(long *)(unaff_x20 + 0x78);
  puVar22 = (ulong *)(lVar16 + 0x40);
  uStack_f0 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar31 = 0xffffffffffffffff;
  if (-uStack_f0 < 0x40) {
    uVar31 = ~(-1L << (-uStack_f0 & 0x3f));
  }
  uVar31 = uVar31 & *puVar22;
  uVar18 = 0x3f - uStack_f0;
  func_0x000107c61438(lVar16,2);
  lVar28 = 0;
  puStack_e0 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar29 = lVar28;
  do {
    while( true ) {
      while( true ) {
        while (uVar31 == 0) {
          bVar3 = SCARRY8(lVar28,1);
          lVar28 = lVar28 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar32 = (code *)SoftwareBreakpoint(1,0x102633aa4);
            (*pcVar32)();
          }
          if ((long)(uVar18 >> 6) <= lVar28) {
            func_0x000107c6142c(lVar16);
            func_0x000100cfd2a0(lVar16,puVar22,~uStack_f0,lVar29,0);
            puStack_88 = puStack_e0;
            func_0x0001007d6d78(&puStack_88);
            func_0x000107c6142c(puStack_e0);
            return;
          }
          uVar31 = puVar22[lVar28];
        }
        uVar25 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
        uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        uVar31 = uVar31 - 1 & uVar31;
        uVar25 = LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) | lVar28 << 6;
        lVar29 = *(long *)(lVar16 + 0x38);
        puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar25 * 0x10);
        uVar14 = puVar11[1];
        *puVar20 = *puVar11;
        puVar20[1] = uVar14;
        iVar2 = *(int *)(lVar5 + 0x30);
        lVar6 = 0;
        FUN_1026347a4();
        FUN_102634c2c(lVar29 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar25,
                      (long)puVar20 + (long)iVar2,FUN_1026347a4);
        FUN_1026355dc(puVar20,lVar23,0x112eb0e48,&UNK_10dac5660);
        uVar26 = *(undefined8 *)(lVar23 + 8);
        func_0x000107c61434(uVar14);
        func_0x000107c6142c(uVar26);
        lVar27 = (long)*(int *)(lVar5 + 0x30);
        lVar19 = lVar23 + lVar27;
        func_0x000107c614c4(lVar19,lVar6);
        lVar29 = lVar28;
        if ((int)lVar19 == 1) break;
        func_0x000102635624(puVar20,0x112eb0e48,&UNK_10dac5660);
        func_0x000102634c70(lVar23 + lVar27,FUN_1026347a4);
      }
      uVar14 = 0x112d5ed18;
      puVar9 = &UNK_10d925c50;
      func_0x000102635664(lVar23 + lVar27,lVar17,0x112d5ed18,&UNK_10d925c50);
      FUN_1026355dc(lVar17,lVar21,0x112d5ed18,&UNK_10d925c50);
      pcVar32 = *(code **)(lVar15 + 0x30);
      lVar6 = lVar21;
      (*pcVar32)(lVar21,1,lVar4);
      lVar19 = lStack_f8;
      if ((int)lVar6 != 1) break;
      func_0x000102635624(lVar17,0x112d5ed18,&UNK_10d925c50);
      func_0x000102635624(puVar20,0x112eb0e48,&UNK_10dac5660);
      func_0x000102635624(lVar21,0x112d5ed18,&UNK_10d925c50);
    }
    func_0x0001026356ac(lVar21,lStack_f8,&SUB_103a814dc);
    puVar1 = puStack_100;
    FUN_1026355dc(puVar20,puStack_100,0x112eb0e48,&UNK_10dac5660);
    lVar6 = lStack_110;
    FUN_102634c2c(lVar19,lStack_110,&SUB_103a814dc);
    pcVar30 = *(code **)(lVar15 + 0x38);
    (*pcVar30)(lVar6,0,1,lVar4);
    lVar19 = lStack_108;
    uStack_128 = *puVar1;
    uVar25 = puVar1[1];
    func_0x000102635664(lVar6,lStack_108,0x112d5ed18,&UNK_10d925c50);
    lVar6 = lVar19;
    (*pcVar32)(lVar19,1,lVar4);
    if ((int)lVar6 == 1) {
      pcStack_130 = pcVar30;
      func_0x000102635624(lVar19,0x112d5ed18,&UNK_10d925c50);
      func_0x000107c61434(puStack_e0);
      uVar7 = uStack_128;
      uVar10 = uVar25;
      func_0x000100029284();
      func_0x000107c6142c(puStack_e0);
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(uVar25);
        func_0x000102634c70(lStack_f8,&SUB_103a814dc);
        func_0x000102635624(lVar17,0x112d5ed18,&UNK_10d925c50);
        func_0x000102635624(puVar20,0x112eb0e48,&UNK_10dac5660);
        uVar26 = 1;
        puVar11 = puStack_120;
      }
      else {
        puVar8 = puStack_e0;
        func_0x000107c61558();
        puStack_88 = puStack_e0;
        if ((int)puVar8 == 0) {
          FUN_102634d3c(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
        }
        puStack_e0 = puStack_88;
        func_0x000107c6142c(*(undefined8 *)(*(long *)(puStack_88 + 0x30) + uVar7 * 0x10 + 8));
        puVar11 = puStack_120;
        func_0x0001026356ac(*(long *)(puStack_e0 + 0x38) + *(long *)(lVar15 + 0x48) * uVar7,
                            puStack_120,&SUB_103a814dc);
        FUN_10263539c(uVar7,puStack_e0,&SUB_103a814dc);
        func_0x000107c6142c(uVar25);
        func_0x000102634c70(lStack_f8,&SUB_103a814dc);
        func_0x000102635624(lVar17,0x112d5ed18,&UNK_10d925c50);
        func_0x000102635624(puVar20,0x112eb0e48,&UNK_10dac5660);
        uVar26 = 0;
      }
      (*pcStack_130)(puVar11,uVar26,1,lVar4);
LAB_102633924:
      func_0x000102635624(puVar11,uVar14,puVar9);
    }
    else {
      func_0x0001026356ac(lVar19,lStack_118,&SUB_103a814dc);
      puVar9 = puStack_e0;
      func_0x000107c61558();
      uVar7 = uStack_128;
      pcStack_130 = (code *)CONCAT44(pcStack_130._4_4_,(int)puVar9);
      puStack_88 = puStack_e0;
      uVar10 = uStack_128;
      uVar13 = uVar25;
      func_0x000100029284();
      uVar12 = (uint)uVar13;
      uVar24 = (ulong)~uVar12 & 1;
      lVar19 = *(long *)(puStack_e0 + 0x10) + uVar24;
      if (SCARRY8(*(long *)(puStack_e0 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x102633aa8);
        (*pcVar32)();
      }
      if (*(long *)(puStack_e0 + 0x18) < lVar19) {
        func_0x000102634f54(lVar19,(ulong)pcStack_130 & 0xffffffff,&SUB_103a814dc,0x112e085e0,
                            &UNK_10d9dcfc0);
        uVar10 = uVar7;
        uVar24 = uVar25;
        func_0x000100029284();
        uVar13 = uVar13 & 0xffffffff;
        if ((uVar12 & 1) != ((uint)uVar24 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x102633abc);
          (*pcVar32)();
        }
      }
      else if (((ulong)pcStack_130 & 1) == 0) {
        FUN_102634d3c(&SUB_103a814dc,0x112e085e0,&UNK_10d9dcfc0);
        uVar13 = uVar13 & 0xffffffff;
      }
      puVar9 = puStack_88;
      puStack_e0 = puStack_88;
      if ((uVar13 & 1) != 0) {
        FUN_10263585c(lStack_118,*(long *)(puStack_88 + 0x38) + *(long *)(lVar15 + 0x48) * uVar10,
                      &SUB_103a814dc);
        func_0x000107c6142c(uVar25);
        func_0x000102634c70(lStack_f8,&SUB_103a814dc);
        func_0x000102635624(lVar17,0x112d5ed18,&UNK_10d925c50);
        uVar14 = 0x112eb0e48;
        puVar9 = &UNK_10dac5660;
        puVar11 = puVar20;
        goto LAB_102633924;
      }
      *(ulong *)(puStack_88 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puStack_88 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puStack_88 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar7;
      puVar1[1] = uVar25;
      func_0x0001026356ac(lStack_118,
                          *(long *)(puStack_88 + 0x38) + *(long *)(lVar15 + 0x48) * uVar10,
                          &SUB_103a814dc);
      func_0x000102634c70(lStack_f8,&SUB_103a814dc);
      func_0x000102635624(lVar17,0x112d5ed18,&UNK_10d925c50);
      func_0x000102635624(puVar20,0x112eb0e48,&UNK_10dac5660);
      lVar19 = *(long *)(puVar9 + 0x10);
      if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x102633aac);
        (*pcVar32)();
      }
      *(long *)(puVar9 + 0x10) = lVar19 + 1;
    }
    func_0x000102634c70((long)puStack_100 + (long)*(int *)(lVar5 + 0x30),FUN_1026347a4);
  } while( true );
}



/* Entry: 102633abc; end: 102633eff;  */

void FUN_102633abc(ulong *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar7 = 0x112eb0e50;
  puVar9 = &UNK_10dac5670;
  puStack_98 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  puVar2 = (undefined *)0x0;
  lStack_a0 = lVar7;
  func_0x000107c5eea4();
  lVar10 = *(long *)(puVar2 + -8);
  puStack_a8 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar8 - extraout_x12_01;
  uVar13 = *param_2;
  uVar3 = uVar13;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((uVar4 == *(ulong *)(param_3 + 0xa8)) && (puVar9 == *(undefined **)(param_3 + 0xb0))) {
    func_0x000107c6142c(puVar9);
  }
  else {
    puVar2 = puVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar9);
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar13;
      func_0x000107c4a984();
      func_0x000107c61180();
      if (uVar3 != 0) {
        func_0x000107c5ee94(lVar8);
        func_0x000107c61170(uVar3);
        puVar2 = puStack_a8;
        (**(code **)(lVar10 + 0x20))(uVar14,lVar8,puStack_a8);
        func_0x000107c5ee80(lVar7,0xc0f5180000000000);
        uVar3 = uVar14;
        func_0x000107c5ee74(uVar14,lVar7);
        pcVar11 = *(code **)(lVar10 + 8);
        puVar9 = puVar2;
        (*pcVar11)(lVar7);
        if ((uVar3 & 1) != 0) {
          func_0x000107c5d984();
          func_0x000107c61180();
          uVar3 = uVar13;
          func_0x000107c5faec();
          func_0x000107c61170(uVar13);
          (*pcVar11)(uVar14,puVar2);
          *puStack_98 = uVar3;
          puStack_98[1] = (ulong)puVar9;
          return;
        }
        (*pcVar11)(uVar14);
      }
      uVar3 = uVar13;
      func_0x000107c5d984(uVar13);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c61428(param_3 + 0x78,auStack_78,0,0);
      puVar9 = *(undefined **)(param_3 + 0x78);
      if (*(long *)(puVar9 + 0x10) == 0) {
        lVar8 = 0;
        FUN_1026347a4();
        lVar7 = lStack_a0;
        (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lStack_a0,1,1,lVar8);
      }
      else {
        func_0x000107c61434(puVar9);
        puVar5 = puVar2;
        func_0x000100029284(uVar4);
        bVar1 = ((ulong)puVar5 & 1) == 0;
        if (bVar1) {
          lVar8 = 0;
          FUN_1026347a4();
          pcVar11 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
          lVar7 = lStack_a0;
        }
        else {
          lVar10 = *(long *)(puVar9 + 0x38);
          lVar8 = 0;
          FUN_1026347a4();
          lVar7 = lStack_a0;
          lVar12 = *(long *)(lVar8 + -8);
          FUN_102634c2c(lVar10 + *(long *)(lVar12 + 0x48) * uVar4,lStack_a0,FUN_1026347a4);
          pcVar11 = *(code **)(lVar12 + 0x38);
        }
        (*pcVar11)(lVar7,bVar1,1,lVar8);
        func_0x000107c6142c(puVar2);
        puVar2 = puVar9;
      }
      func_0x000107c6142c(puVar2);
      FUN_1026347a4(0);
      lVar12 = *(long *)(lVar8 + -8);
      lVar10 = lVar7;
      (**(code **)(lVar12 + 0x30))(lVar7,1,lVar8);
      uVar6 = 0x112eb0e50;
      func_0x000102635624(lVar7,0x112eb0e50,&UNK_10dac5670);
      if ((int)lVar10 == 1) {
        func_0x000107c5d984(uVar13);
        func_0x000107c61180();
        uVar3 = uVar13;
        func_0x000107c5faec();
        func_0x000107c61170(uVar13);
        lVar7 = lStack_b0;
        func_0x000107c6159c(lStack_b0,lVar8,2);
        (**(code **)(lVar12 + 0x38))(lVar7,0,1,lVar8);
        func_0x000107c61428(param_3 + 0x78,auStack_90,0x21,0);
        FUN_1026323c0(lVar7,uVar3,uVar6);
        func_0x000107c614a8(auStack_90);
      }
    }
  }
  *puStack_98 = 0;
  puStack_98[1] = 0;
  return;
}



/* Entry: 102633f00; end: 102633f5b;  */

void FUN_102633f00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x0001000834e4(unaff_x20 + 0x80);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 102633f5c; end: 1026341cb;  */

/* WARNING: Possible PIC construction at 0x000102634034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026340dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102634038) */
/* WARNING: Removing unreachable block (ram,0x0001026340e0) */

long * FUN_102633f5c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar5 = *(uint *)(lVar11 + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    plVar6 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar6 == 1) {
      lVar11 = 0;
      func_0x000103a814dc();
      lVar12 = *(long *)(lVar11 + -8);
      plVar6 = param_2;
      (**(code **)(lVar12 + 0x30))(param_2,1,lVar11);
      if ((int)plVar6 != 0) {
        lVar11 = 0x112d5ed18;
        func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
        uVar9 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar9);
        return param_1;
      }
      lVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar8;
      lVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      lVar14 = (long)*(int *)(lVar11 + 0x1c);
      lVar7 = 0;
      func_0x000107c5ede0();
      lVar15 = *(long *)(lVar7 + -8);
      pcVar13 = *(code **)(lVar15 + 0x30);
      func_0x000107c61434(lVar8);
      func_0x000107c61434(lVar3);
      lVar8 = (long)param_2 + lVar14;
      (*pcVar13)(lVar8,1,lVar7);
      if ((int)lVar8 != 0) {
        lVar11 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar9 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
        param_1 = (long *)((long)param_1 + lVar14);
        param_2 = (long *)((long)param_2 + lVar14);
        goto code_r0x000107c610b4;
      }
      (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar7);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,lVar7);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
      uVar9 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
      uVar9 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *puVar1 = *puVar2;
      pcVar13 = *(code **)(lVar12 + 0x38);
      func_0x000107c61434();
      func_0x000107c61434(uVar9);
      func_0x000107c61434(uVar4);
      (*pcVar13)(param_1,0,1,lVar11);
      uVar9 = 1;
    }
    else {
      if ((int)plVar6 != 0) {
        uVar9 = *(undefined8 *)(lVar11 + 0x40);
        goto code_r0x000107c610b4;
      }
      *param_1 = *param_2;
      func_0x000107c6157c();
      uVar9 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar9);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar11 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1026341cc; end: 1026342d3;  */

/* WARNING: Possible PIC construction at 0x00010263424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026342a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102634250) */
/* WARNING: Removing unreachable block (ram,0x000102634284) */
/* WARNING: Removing unreachable block (ram,0x000102634294) */
/* WARNING: Removing unreachable block (ram,0x0001026342a4) */

void FUN_1026341cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000103a814dc();
    puVar1 = param_1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
    if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
      return;
    }
  }
  else if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*param_1);
    return;
  }
  return;
}



/* Entry: 1026342d4; end: 1026347a3;  */

/* WARNING: Possible PIC construction at 0x000102634380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010263442c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102634384) */
/* WARNING: Removing unreachable block (ram,0x000102634430) */

undefined8 * FUN_1026342d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar3 == 1) {
    lVar4 = 0;
    func_0x000103a814dc();
    lVar8 = *(long *)(lVar4 + -8);
    puVar3 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,1,lVar4);
    if ((int)puVar3 == 0) {
      uVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar7;
      uVar2 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar2;
      lVar10 = (long)*(int *)(lVar4 + 0x1c);
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar5 + -8);
      pcVar9 = *(code **)(lVar11 + 0x30);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar2);
      lVar6 = (long)param_2 + lVar10;
      (*pcVar9)(lVar6,1,lVar5);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
        puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x20));
        uVar7 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar7;
        puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
        uVar7 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar7;
        puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
        uVar2 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar2;
        puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
        param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
        *puVar3 = *param_2;
        pcVar9 = *(code **)(lVar8 + 0x38);
        func_0x000107c61434();
        func_0x000107c61434(uVar7);
        func_0x000107c61434(uVar2);
        (*pcVar9)(param_1,0,1,lVar4);
        uVar7 = 1;
        goto LAB_1026344f4;
      }
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar10);
      param_2 = (undefined8 *)((long)param_2 + lVar10);
    }
    else {
      lVar4 = 0x112d5ed18;
      func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
    }
  }
  else {
    if ((int)puVar3 == 0) {
      *param_1 = *param_2;
      func_0x000107c6157c();
      uVar7 = 0;
LAB_1026344f4:
      func_0x000107c6159c(param_1,param_3,uVar7);
      return param_1;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
  return param_1;
}



/* Entry: 1026347a4; end: 1026347db;  */

void FUN_1026347a4(undefined8 param_1)

{
  if (lRam0000000112eb0e10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e8964);
  return;
}



/* Entry: 1026347dc; end: 102634b7b;  */

/* WARNING: Possible PIC construction at 0x000102634860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026348e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102634864) */
/* WARNING: Removing unreachable block (ram,0x0001026348ec) */

undefined8 * FUN_1026347dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000103a814dc();
    lVar7 = *(long *)(lVar3 + -8);
    puVar2 = param_2;
    (**(code **)(lVar7 + 0x30))(param_2,1,lVar3);
    if ((int)puVar2 == 0) {
      uVar6 = *param_2;
      uVar11 = param_2[3];
      uVar10 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar11;
      param_1[2] = uVar10;
      lVar8 = (long)*(int *)(lVar3 + 0x1c);
      lVar4 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar4 + -8);
      lVar5 = (long)param_2 + lVar8;
      (**(code **)(lVar9 + 0x30))(lVar5,1,lVar4);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
        (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x20));
        uVar6 = *puVar2;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
        puVar1[1] = puVar2[1];
        *puVar1 = uVar6;
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x24));
        uVar6 = *puVar2;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
        puVar1[1] = puVar2[1];
        *puVar1 = uVar6;
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x28));
        uVar6 = *puVar2;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
        puVar1[1] = puVar2[1];
        *puVar1 = uVar6;
        puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
        param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
        *puVar2 = *param_2;
        (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar3);
        func_0x000107c6159c(param_1,param_3,1);
        return param_1;
      }
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar8);
      param_2 = (undefined8 *)((long)param_2 + lVar8);
    }
    else {
      lVar3 = 0x112d5ed18;
      func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
    }
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 102634b7c; end: 102634bab;  */

void FUN_102634b7c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102634b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102634bac; end: 102634c1f;  */

void FUN_102634bac(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  func_0x000101bef000();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 102634c20; end: 102634c2b;  */

void FUN_102634c20(void)

{
  return;
}



/* Entry: 102634c2c; end: 102634cab;  */

undefined8 FUN_102634c2c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102634cac; end: 102634d3b;  */

void FUN_102634cac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  FUN_1026347a4();
  func_0x0001026356ac(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,
                      FUN_1026347a4);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102634d3c);
  (*pcVar2)();
}



/* Entry: 102634d3c; end: 10263525b;  */

void FUN_102634d3c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uStack_68;
  
  lVar6 = 0;
  (*param_1)();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(param_2,param_3);
  lVar10 = *unaff_x20;
  lVar6 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c61574(lVar10);
LAB_102634f2c:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar10 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar10 || lVar1 + uVar8 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar10 + 0x40);
  if (uStack_68 == 0) goto LAB_102634e6c;
  do {
    uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar11 = *(long *)(lVar7 + 0x48) * uVar9;
      FUN_102634c2c(*(long *)(lVar10 + 0x38) + lVar11,&stack0xffffffffffffff70 + -extraout_x8,
                    param_1);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x0001026356ac(&stack0xffffffffffffff70 + -extraout_x8,*(long *)(lVar6 + 0x38) + lVar11,
                          param_1);
      func_0x000107c61434(uVar4);
      if (uStack_68 != 0) break;
LAB_102634e6c:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102634f54);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar10);
          goto LAB_102634f2c;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (uStack_68 == 0);
      uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar13 = lVar11;
    }
  } while( true );
}



/* Entry: 10263525c; end: 10263539b;  */

void FUN_10263525c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    FUN_1026347a4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_1026347a4();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x0001026356ac(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,FUN_1026347a4);
    FUN_10263539c(param_2,lVar3,FUN_1026347a4);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102635370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 10263539c; end: 10263556f;  */

void FUN_10263539c(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar15 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar8);
    uVar15 = uVar15 + 1 & uVar8;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
      uVar16 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar16,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar15) {
        if (uVar9 < uVar15) {
LAB_102635494:
          if ((long)param_1 < (long)uVar9) goto LAB_10263541c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
        if ((param_1 != uVar14) || (puVar3 + 2 <= puVar2)) {
          uVar16 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar16;
        }
        lVar13 = *(long *)(param_2 + 0x38);
        lVar7 = 0;
        (*param_3)();
        lVar12 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
        lVar10 = lVar12 * param_1;
        uVar9 = lVar13 + lVar10;
        lVar11 = lVar12 * uVar14;
        lVar13 = lVar13 + lVar11;
        param_1 = uVar14;
        if (lVar10 < lVar11 || (ulong)(lVar13 + lVar12) <= uVar9) {
          func_0x000107c61414(uVar9,lVar13,1,lVar7);
        }
        else if (lVar10 - lVar11 != 0) {
          func_0x000107c61410(uVar9,lVar13,1);
        }
      }
      else if (uVar15 <= uVar9) goto LAB_102635494;
LAB_10263541c:
      uVar14 = uVar14 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102635570);
  (*pcVar5)();
}



/* Entry: 102635570; end: 1026355db;  */

void FUN_102635570(long param_1)

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
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102635c58;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = param_1;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102632ff4,lVar4,0);
  return;
}



/* Entry: 1026355dc; end: 1026356ef;  */

undefined8 FUN_1026355dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1026356f0; end: 10263585b;  */

void FUN_1026356f0(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026357fc);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    func_0x000102634f54(lVar4,param_4 & 1,FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026357a8);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102634d3c(FUN_1026347a4,0x112eb0b08,&UNK_10dac5690);
    lVar4 = *unaff_x20;
    goto joined_r0x00010263582c;
  }
  lVar4 = *unaff_x20;
joined_r0x00010263582c:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    FUN_1026347a4();
    FUN_10263585c(param_1,lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2,FUN_1026347a4);
    return;
  }
  FUN_102634cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10263585c; end: 10263589f;  */

undefined8 FUN_10263585c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1026358a0; end: 102635b4b;  */

undefined * FUN_1026358a0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar10 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar9 = ~uVar10;
    uVar10 = -uVar10;
    uVar13 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar13 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar13 = uVar13 & *puVar12;
    puVar8 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar8 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar8 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar6 = 0;
    func_0x000101b7ea04(0);
    uVar7 = uVar6;
    func_0x000101158e5c();
    func_0x000107c5fe30(&puStack_88,puVar8,uVar6,uVar7);
    uVar9 = uStack_78;
    puVar12 = puStack_80;
    param_1 = puStack_88;
    uVar13 = uStack_68;
  }
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = lStack_70;
  do {
    lVar3 = lVar11;
    uVar10 = uVar13;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar8 == (undefined *)0x0) {
LAB_102635adc:
        puStack_58 = (undefined *)0x0;
        goto LAB_102635ae0;
      }
      uVar7 = 0;
      puStack_a0 = puVar8;
      func_0x000101b7ea04(0);
      func_0x000107c6147c(&puStack_58,&puStack_a0,PTR___syXlN_11034f1a0 + 8,uVar7,7);
      puVar8 = puStack_58;
    }
    else {
      while (uVar10 == 0) {
        lVar1 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102635b4c);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x40 >> 6) <= lVar1) {
          uVar13 = 0;
          goto LAB_102635adc;
        }
        lVar3 = lVar1;
        uVar10 = puVar12[lVar1];
      }
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      puVar8 = *(undefined **)
                (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                lVar3 * 0x200);
      puStack_58 = puVar8;
      func_0x000107c61174(puVar8);
    }
    if (puVar8 == (undefined *)0x0) {
LAB_102635ae0:
      func_0x000100cfd2a0(param_1,puVar12,uVar9,lVar11,uVar13);
      return puStack_a8;
    }
    puStack_90 = puVar8;
    FUN_102633abc(&puStack_a0,&puStack_90,param_2);
    if (unaff_x21 != 0) {
      func_0x000107c61170();
      func_0x000100cfd2a0(param_1,puVar12,uVar9,lVar11,uVar13);
      func_0x000107c6142c(puStack_a8);
      return puStack_a8;
    }
    func_0x000107c61170();
    lVar1 = lStack_98;
    puVar4 = puStack_a0;
    lVar11 = lVar3;
    uVar13 = uVar10;
    if (lStack_98 != 0) {
      puVar8 = puStack_a8;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puStack_a8 + 0x10) + 1,1);
        puStack_a8 = puVar8;
      }
      uVar10 = *(ulong *)(puStack_a8 + 0x10);
      if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar10) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
        func_0x0001000d182c(puVar8,uVar10 + 1,1,puStack_a8);
        puStack_a8 = puVar8;
      }
      *(ulong *)(puStack_a8 + 0x10) = uVar10 + 1;
      *(undefined **)(puStack_a8 + uVar10 * 0x10 + 0x20) = puVar4;
      *(long *)(puStack_a8 + uVar10 * 0x10 + 0x28) = lVar1;
    }
  } while( true );
}



/* Entry: 102635b4c; end: 102635baf;  */

void FUN_102635b4c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102635c5c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
  plVar3[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263208c,lVar1,0);
  return;
}



/* Entry: 102635bb0; end: 102635c1b;  */

void FUN_102635bb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102635c1c;
  plVar6[4] = lVar2;
  plVar6[5] = lVar7;
  plVar6[3] = param_1;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar6[6] = (long)plVar3;
  uVar4 = 0x112e08a60;
  func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar3 = (long)plVar6;
  plVar3[1] = (long)FUN_102632274;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(plVar6 + 2,uVar1,uVar4,uVar5,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102635c1c; end: 102635c57;  */

void FUN_102635c1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102635c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102635c58; end: 102635c5f;  */

void FUN_102635c58(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102635c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102635c60; end: 102635cf7;  */

void FUN_102635c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb0e58,&UNK_10dac56d0);
  puVar1 = &UNK_11052cbb0;
  func_0x000107c613fc(&UNK_11052cbb0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102636154,puVar1);
  return;
}



/* Entry: 102635cf8; end: 102636153;  */

void FUN_102635cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000100083b20(&uStack_80);
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x61;
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0x3c);
  func_0x00010008a7c8(&uStack_78,&puStack_b0);
  func_0x000107c61574(uStack_80);
  func_0x0001000285a8(0x112eb0e60,&UNK_10dac5710);
  func_0x000107c6157c(uStack_78);
  pcVar1 = FUN_102636244;
  func_0x0001000823a8(FUN_102636244,uStack_78);
  func_0x0001000285a8(0x112eb0e68,&UNK_10dac5718);
  puVar2 = &UNK_11052cbf8;
  func_0x000107c613fc(&UNK_11052cbf8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_78;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(uStack_78);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_102636404;
  func_0x0001000823a8(FUN_102636404,puVar2);
  func_0x0001000285a8(0x112eb0e70,&UNK_10dac5720);
  puVar2 = &UNK_11052cc20;
  func_0x000107c613fc(&UNK_11052cc20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_78;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(uStack_78);
  func_0x000107c6157c(param_4);
  pcVar4 = FUN_102636508;
  func_0x0001000823a8(FUN_102636508,puVar2);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_102636510;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1026366a0;
  puStack_98 = &UNK_11052cc38;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar1;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar1);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_90 = (code *)0x102636690;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10263669c;
  puStack_98 = &UNK_11052cc60;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar3;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar3);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_90 = (code *)0x102636694;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1026366a4;
  puStack_98 = &UNK_11052cc88;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar4;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar4);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x0001000285a8(0x112eb0e78,&UNK_10dac5728);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar9 = FUN_102636588;
  func_0x0001000bdd8c(FUN_102636588,pcVar1);
  func_0x0001000285a8(0x112eb0e80,&UNK_10dac5730);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar10 = 0x10263659c;
  func_0x0001000bdd8c(0x10263659c,pcVar3);
  func_0x0001000285a8(0x112eb0e88,&UNK_10dac5738);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  uVar11 = 0x1026365b0;
  func_0x0001000bdd8c(0x1026365b0,pcVar4);
  func_0x0001000285a8(0x112eb0e90,&UNK_10dac5740);
  func_0x000107c613fc();
  func_0x000107c6157c(uStack_78);
  uVar12 = 0x102636698;
  func_0x0001000bdd8c(0x102636698,uStack_78);
  uVar13 = uVar12;
  func_0x0001000cad14();
  uVar14 = 0;
  FUN_1027030a4(0);
  func_0x000107c610f8();
  func_0x000102702ed0(uVar14,puVar5,puVar7,puVar8,pcVar9,uVar10,uVar11,uVar12,uVar13);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(uStack_78);
  *param_1 = puVar5;
  return;
}



/* Entry: 102636154; end: 10263616f;  */

void FUN_102636154(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_80,*(undefined8 *)(unaff_x20 + 0x10));
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x61;
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0x3c);
  func_0x00010008a7c8(&uStack_78,&puStack_b0);
  func_0x000107c61574(uStack_80);
  func_0x0001000285a8(0x112eb0e60,&UNK_10dac5710);
  func_0x000107c6157c(uStack_78);
  pcVar1 = FUN_102636244;
  func_0x0001000823a8(FUN_102636244,uStack_78);
  func_0x0001000285a8(0x112eb0e68,&UNK_10dac5718);
  puVar2 = &UNK_11052cbf8;
  func_0x000107c613fc(&UNK_11052cbf8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_78;
  *(undefined8 *)(puVar2 + 0x18) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar14;
  func_0x000107c6157c(uStack_78);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar14);
  pcVar3 = FUN_102636404;
  func_0x0001000823a8(FUN_102636404,puVar2);
  func_0x0001000285a8(0x112eb0e70,&UNK_10dac5720);
  puVar2 = &UNK_11052cc20;
  func_0x000107c613fc(&UNK_11052cc20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_78;
  *(undefined8 *)(puVar2 + 0x18) = uVar14;
  func_0x000107c6157c(uStack_78);
  func_0x000107c6157c(uVar14);
  pcVar4 = FUN_102636508;
  func_0x0001000823a8(FUN_102636508,puVar2);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_102636510;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1026366a0;
  puStack_98 = &UNK_11052cc38;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar1;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar1);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_90 = (code *)0x102636690;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10263669c;
  puStack_98 = &UNK_11052cc60;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar3;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar3);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_90 = (code *)0x102636694;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1026366a4;
  puStack_98 = &UNK_11052cc88;
  ppuVar6 = &puStack_b0;
  pcStack_88 = pcVar4;
  func_0x000107c60bc4(ppuVar6);
  pcVar9 = pcStack_88;
  func_0x000107c6157c(pcVar4);
  func_0x000107c61574(pcVar9);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x0001000285a8(0x112eb0e78,&UNK_10dac5728);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar9 = FUN_102636588;
  func_0x0001000bdd8c(FUN_102636588,pcVar1);
  func_0x0001000285a8(0x112eb0e80,&UNK_10dac5730);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar10 = 0x10263659c;
  func_0x0001000bdd8c(0x10263659c,pcVar3);
  func_0x0001000285a8(0x112eb0e88,&UNK_10dac5738);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  uVar14 = 0x1026365b0;
  func_0x0001000bdd8c(0x1026365b0,pcVar4);
  func_0x0001000285a8(0x112eb0e90,&UNK_10dac5740);
  func_0x000107c613fc();
  func_0x000107c6157c(uStack_78);
  uVar11 = 0x102636698;
  func_0x0001000bdd8c(0x102636698,uStack_78);
  uVar12 = uVar11;
  func_0x0001000cad14();
  uVar13 = 0;
  FUN_1027030a4(0);
  func_0x000107c610f8();
  func_0x000102702ed0(uVar13,puVar5,puVar7,puVar8,pcVar9,uVar10,uVar14,uVar11,uVar12);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(uStack_78);
  *param_1 = puVar5;
  return;
}



/* Entry: 102636170; end: 102636243;  */

void FUN_102636170(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x10))(auStack_90,uStack_50,lStack_48);
  func_0x000100083b20(auStack_b8);
  func_0x0001000a8868(auStack_b8,uStack_a0);
  (**(code **)(lStack_98 + 0x30))(auStack_e0,uStack_a0,lStack_98);
  FUN_10262c220(0);
  func_0x000107c610f8();
  puVar1 = auStack_90;
  FUN_10262ad28(puVar1,auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102636244; end: 10263624b;  */

void FUN_102636244(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x10))(auStack_90,uStack_50,lStack_48);
  func_0x000100083b20(auStack_b8);
  func_0x0001000a8868(auStack_b8,uStack_a0);
  (**(code **)(lStack_98 + 0x30))(auStack_e0,uStack_a0,lStack_98);
  FUN_10262c220(0);
  func_0x000107c610f8();
  puVar1 = auStack_90;
  FUN_10262ad28(puVar1,auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10263624c; end: 1026363cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263624c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x18))(auStack_a0,uStack_60,lStack_58);
  func_0x000100083b20(&lStack_a8);
  uVar1 = *(undefined8 *)(lStack_a8 + _DAT_113083f78);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_a8);
  uVar2 = uVar1;
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  lVar5 = lStack_58;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112eb0e90,&UNK_10dac5740);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar3 = FUN_102636668;
  func_0x0001000bdd8c(FUN_102636668,param_2);
  func_0x000100083b20(&uStack_b0);
  uVar2 = uStack_b0;
  func_0x000107c4c370(uStack_b0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_b0);
  FUN_10262f400(0);
  func_0x000107c610f8();
  puVar4 = auStack_a0;
  FUN_10262c780(puVar4,uVar1,lVar5,pcVar3,uVar2);
  func_0x0001000834e4(auStack_78);
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1026363d0; end: 102636403;  */

void FUN_1026363d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102636404; end: 10263640f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636404(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(auStack_78,uVar4,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x18))(auStack_a0,uStack_60,lStack_58);
  func_0x000100083b20(&lStack_a8);
  uVar1 = *(undefined8 *)(lStack_a8 + _DAT_113083f78);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_a8);
  uVar2 = uVar1;
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  lVar6 = lStack_58;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112eb0e90,&UNK_10dac5740);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  pcVar3 = FUN_102636668;
  func_0x0001000bdd8c(FUN_102636668,uVar4);
  func_0x000100083b20(&uStack_b0);
  uVar4 = uStack_b0;
  func_0x000107c4c370(uStack_b0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_b0);
  FUN_10262f400(0);
  func_0x000107c610f8();
  puVar5 = auStack_a0;
  FUN_10262c780(puVar5,uVar1,lVar6,pcVar3,uVar4);
  func_0x0001000834e4(auStack_78);
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 102636410; end: 102636507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636410(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x38))(auStack_90,uStack_50,lStack_48);
  func_0x000100083b20(&uStack_98);
  uVar1 = uStack_98;
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(uStack_98);
  lVar2 = 0;
  func_0x000102630904();
  lVar3 = lVar2;
  func_0x000107c610f8();
  FUN_10262fe64(auStack_90,lVar3 + _DAT_112eb0ba8);
  *(undefined8 *)(lVar3 + _DAT_112eb0bb0) = uVar1;
  plVar4 = &lStack_a8;
  lStack_a8 = lVar3;
  lStack_a0 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102636508; end: 10263650f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636508(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x38))(auStack_90,uStack_50,lStack_48);
  func_0x000100083b20(&uStack_98);
  uVar1 = uStack_98;
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(uStack_98);
  lVar2 = 0;
  func_0x000102630904();
  lVar3 = lVar2;
  func_0x000107c610f8();
  FUN_10262fe64(auStack_90,lVar3 + _DAT_112eb0ba8);
  *(undefined8 *)(lVar3 + _DAT_112eb0bb0) = uVar1;
  plVar4 = &lStack_a8;
  lStack_a8 = lVar3;
  lStack_a0 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102636510; end: 102636533;  */

undefined8 FUN_102636510(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 102636534; end: 10263654f;  */

void FUN_102636534(long param_1,long param_2)

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



/* Entry: 102636550; end: 102636587;  */

void FUN_102636550(long param_1)

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



/* Entry: 102636588; end: 1026365c3;  */

void FUN_102636588(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar5 = 0;
  FUN_10262c220();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11052c6d8;
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar4);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar4);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar4);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c(unaff_x20);
  }
  else {
    uStack_120 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined1 *)(puVar1 + 2);
    lStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580(unaff_x20,2);
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar5,uVar2,&UNK_104857794,unaff_x20,uStack_90,lStack_88);
      func_0x000107c61574(unaff_x20);
      func_0x0001000834e4(auStack_a8);
      param_1 = lStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c(unaff_x20);
    func_0x00010008a938(auStack_e8);
    param_1 = lStack_118;
  }
  func_0x000100083ec8(unaff_x20);
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar4);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar4);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574(unaff_x20);
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 1026365c4; end: 102636667;  */

void FUN_1026365c4(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar5 = 0;
  (*param_2)();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar4);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar4);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar4);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c(unaff_x20);
  }
  else {
    uStack_120 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined1 *)(puVar1 + 2);
    lStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580(unaff_x20,2);
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar5,uVar2,&UNK_104857794,unaff_x20,uStack_90,lStack_88);
      func_0x000107c61574(unaff_x20);
      func_0x0001000834e4(auStack_a8);
      param_1 = lStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c(unaff_x20);
    func_0x00010008a938(auStack_e8);
    param_1 = lStack_118;
  }
  func_0x000100083ec8(unaff_x20);
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar3 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar4);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar4);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574(unaff_x20);
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 102636668; end: 10263667f;  */

void FUN_102636668(void)

{
  func_0x000102636600();
  return;
}



/* Entry: 102636680; end: 1026366af;  */

void FUN_102636680(long param_1,long param_2)

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



/* Entry: 1026366b0; end: 1026366b7; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1026366b0(void)

{
  return 0;
}



/* Entry: 1026366b8; end: 102636873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026366b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar4 = param_2;
  uVar6 = param_3;
  func_0x000107c44fdc();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  uVar4 = 0x504154;
  if (param_4 != 0) {
    uVar4 = param_3;
  }
  lVar8 = -0x1d00000000000000;
  if (param_4 != 0) {
    lVar8 = param_4;
  }
  lVar1 = unaff_x20 + _DAT_112eb0e98;
  func_0x000107c61428(lVar1,&uStack_a0,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  pcVar7 = *(code **)(lVar3 + 0x30);
  func_0x000107c61434(param_4);
  (*pcVar7)(uVar5,uVar6,uVar4,lVar8,uVar2,lVar3);
  func_0x000107c614a8(&uStack_a0);
  lVar8 = *(long *)(unaff_x20 + _DAT_112eb0ea0);
  func_0x000107c61428(lVar8 + 0xc0,auStack_100,1,0);
  *(undefined8 *)(lVar8 + 0xc0) = param_1;
  if (param_5 != 0) {
    func_0x000107c5d388();
  }
  func_0x000107c61174(param_2);
  FUN_1026e4fe8(&uStack_e8);
  uStack_a0 = uStack_e8;
  uStack_98 = uStack_e0;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_80 = uStack_c8;
  FUN_10263800c(&uStack_a0,0);
  uStack_a8 = uStack_e0;
  uStack_b0 = uStack_e8;
  func_0x000100bcb1dc(&uStack_b0);
  uStack_b8 = uStack_d0;
  FUN_102636874(&uStack_b8,0x112eb0ea8,&UNK_10dac5750);
  uStack_c0 = uStack_c8;
  FUN_102636874(&uStack_c0,0x112eb0eb0,&UNK_10dac5758);
  return;
}



/* Entry: 102636874; end: 1026368b3;  */

undefined8 FUN_102636874(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1026368b4; end: 10263696b; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleFocusedFriendCardWithCard:cardHeight:swipeAction:cardSessionId:] */

void FUN_1026368b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_4);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  FUN_1026366b8(param_1,param_4,param_5,param_3,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10263696c; end: 1026369bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263696c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112eb0eb8;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1026590ec(4,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1026369bc; end: 102636acb; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026369bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112eb0eb8;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_1026590ec(4,0,0);
    func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102636acc; end: 102636af3; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleCreateBitmojiTap] */

void FUN_102636acc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102636a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102636af4; end: 102636b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,*(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18))
  ;
  FUN_1026441bc(param_1,param_2,param_3);
  return;
}



/* Entry: 102636b48; end: 102636be3; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleMapSnapTapWithUserIds:cardSessionId:] */

/* WARNING: Possible PIC construction at 0x000102636bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102636bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c5faec(param_4);
  func_0x0001000a8868(param_1 + _DAT_112eb0ec0,*(undefined8 *)(param_1 + _DAT_112eb0ec0 + 0x18));
  func_0x000107c61174(param_1);
  FUN_1026441bc(param_3,param_4,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102636be4; end: 102636c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636be4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,*(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18))
  ;
  func_0x000104522c9c(0);
  func_0x00010452281c(param_1,param_2);
  FUN_102644764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102636c4c; end: 102636ce7; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleMessageTapWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x0001000a8868(param_1 + _DAT_112eb0ec0,*(undefined8 *)(param_1 + _DAT_112eb0ec0 + 0x18));
  func_0x000104522c9c(0);
  func_0x000107c61174(param_1);
  func_0x00010452281c(param_3,param_2);
  FUN_102644764();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102636ce8; end: 102636eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636ce8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  plVar2 = (long *)(unaff_x20 + _DAT_112eb0ec0);
  func_0x0001000a8868(plVar2,plVar2[3]);
  lVar3 = _DAT_112eb1338;
  lVar8 = *plVar2;
  func_0x000107c61428(lVar8 + _DAT_112eb1338,auStack_68,0,0);
  lVar3 = lVar8 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    puVar5 = PTR_PTR_1126dcbd0;
    func_0x000107c610f8(PTR_PTR_1126dcbd0);
    func_0x000107c488e0();
    puVar6 = PTR_PTR_1126b3fa0;
    func_0x000107c610f8(PTR_PTR_1126b3fa0);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar4);
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c47ca0(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112eb1398;
    lVar7 = *(long *)(lVar8 + _DAT_112eb1398);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(lVar8 + lVar1));
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    func_0x000107c42c1c(*(undefined8 *)(lVar8 + lVar1));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102636eb8; end: 102636f13; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleBitmojiTapWithUserId:] */

void FUN_102636eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102636ce8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102636f14; end: 102636f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636f14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,*(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18))
  ;
  FUN_102645c44(param_1,param_2);
  return;
}



/* Entry: 102636f20; end: 102636f2b; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleShareLocationWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x0001000a8868(param_1 + _DAT_112eb0ec0,*(undefined8 *)(param_1 + _DAT_112eb0ec0 + 0x18));
  func_0x000107c61174(param_1);
  FUN_102645c44(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102636f2c; end: 10263714b;  */

/* WARNING: Possible PIC construction at 0x000102637098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010263709c) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102636f2c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong *puVar11;
  ulong uVar12;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112eb0ec8);
    uVar4 = ((ulong *)(unaff_x20 + _DAT_112eb0ec8))[1];
    do {
      uVar3 = uVar12;
      if (uVar12 <= uVar10) {
        uVar3 = uVar10;
      }
      puVar11 = (ulong *)(param_1 + 0x28 + uVar12 * 0x10);
      uVar12 = uVar12 + 1;
      while( true ) {
        if (uVar12 - uVar3 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10263714c);
          (*pcVar7)();
        }
        uVar2 = puVar11[-1];
        uVar5 = *puVar11;
        if ((uVar2 != uVar1 || uVar5 != uVar4) &&
           (uVar8 = uVar2, func_0x000107c605b8(uVar2,uVar5,uVar1,uVar4,0), (uVar8 & 1) == 0)) break;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 2;
        if (uVar12 - uVar10 == 1) goto LAB_102637078;
      }
      func_0x000107c61434(uVar5);
      puVar9 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar3 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar6 + uVar3 * 0x10 + 0x20) = uVar2;
      *(ulong *)(puVar6 + uVar3 * 0x10 + 0x28) = uVar5;
    } while (uVar12 != uVar10);
  }
LAB_102637078:
  if (*(long *)(puVar6 + 0x10) != 0) {
    if (*(long *)(puVar6 + 0x10) == 1) {
      func_0x000107c61434(*(undefined8 *)(puVar6 + 0x28));
    }
    else {
      func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,
                          *(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18));
      FUN_1026448c0(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar6);
  return;
}



/* Entry: 10263714c; end: 1026371a3; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleGroupMessageTapWithUserIds:] */

void FUN_10263714c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_102636f2c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1026371a4; end: 1026372d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026371a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar8 = unaff_x20 + _DAT_112eb0eb8;
  func_0x000107c61648();
  if (lVar8 != 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_112eb0ea0);
    func_0x000107c61428(lVar11 + 200,auStack_98,0,0);
    uVar4 = *(undefined8 *)(lVar11 + 0xd0);
    uVar1 = *(undefined8 *)(lVar11 + 0xd8);
    uVar5 = *(undefined8 *)(lVar11 + 0xe0);
    uVar10 = *(undefined8 *)(lVar11 + 0xe8);
    uVar2 = *(undefined8 *)(lVar8 + 0x138);
    uVar6 = *(undefined8 *)(lVar8 + 0x140);
    uVar3 = *(undefined8 *)(lVar8 + 0x148);
    uVar7 = *(undefined8 *)(lVar8 + 0x150);
    uVar12 = *(undefined8 *)(lVar8 + 0x158);
    *(undefined8 *)(lVar8 + 0x138) = *(undefined8 *)(lVar11 + 200);
    *(undefined8 *)(lVar8 + 0x140) = uVar4;
    *(undefined8 *)(lVar8 + 0x148) = uVar1;
    *(undefined8 *)(lVar8 + 0x150) = uVar5;
    *(undefined8 *)(lVar8 + 0x158) = uVar10;
    func_0x000102637df4();
    func_0x000102637e30(uVar2,uVar6,uVar3,uVar7,uVar12);
    func_0x000107c61574(lVar8);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  FUN_10263800c(&uStack_80,0);
  plVar9 = (long *)(unaff_x20 + _DAT_112eb0ec0);
  func_0x0001000a8868(plVar9,plVar9[3]);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(*plVar9 + _DAT_112eb13f0)) +
              0x70))();
  if (plVar9 != (long *)0x0) {
    func_0x000107c5e0c4();
    func_0x000107c615e8(plVar9);
  }
  return;
}



/* Entry: 1026372d4; end: 1026372fb; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleUpdateBitmojiTap] */

void FUN_1026372d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026371a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026372fc; end: 10263735f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026372fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,*(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18))
  ;
  FUN_1026451fc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 102637360; end: 102637403; -[_TtC27MapFocusCardsImplementation26MapFocusCardsActionHandler handleSingleFriendMoreButtonTapWithUserId:showDirectionsOption:nowPlayingData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102637360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x0001000a8868(param_1 + _DAT_112eb0ec0,*(undefined8 *)(param_1 + _DAT_112eb0ec0 + 0x18));
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1026451fc(param_3,param_2,param_5,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102637404; end: 10263740f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102637404(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112eb0ec0,*(undefined8 *)(unaff_x20 + _DAT_112eb0ec0 + 0x18))
  ;
  (*(code *)0x102644a64)(param_1,param_2);
  return;
}


