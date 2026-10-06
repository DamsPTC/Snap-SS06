/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10290c378; end: 10290c997;  */

void FUN_10290c378(double param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  
  if (*(char *)(unaff_x22 + 1000) == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x398);
    pcVar11 = *(code **)(unaff_x22 + 0x390);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar13 = *(long *)(unaff_x22 + 0x328);
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    lVar2 = *(long *)(lVar13 + 0x30);
    func_0x0001000a8868(lVar13 + 0x10,uVar9);
    (**(code **)(lVar2 + 0x18))(0,0x54535f58494d4552,0xed000052454b4349,0,uVar9,lVar2);
    func_0x000107c61170(uVar17);
    func_0x000107c615e8(uVar19);
    func_0x00010006c090(uVar3,uVar10);
    func_0x00010290dc68(unaff_x22 + 0x70);
    (*pcVar11)(uVar6,uVar15);
    (*pcVar11)(uVar5,uVar15);
    (*pcVar11)(uVar8,uVar15);
    *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x120);
    dVar20 = *(double *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(double *)(unaff_x22 + 0x1f0) = dVar20;
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61434(uVar7);
    func_0x00010290dc34(unaff_x22 + 0x1f0);
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    lVar2 = *(long *)(lVar13 + 0x30);
    func_0x0001000a8868(lVar13 + 0x10,uVar9);
    func_0x000107c5eea0(uVar14);
    func_0x000107c5ee68(uVar4);
    (*pcVar11)(uVar14,uVar15);
    dVar20 = dVar20 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c94c);
      (*pcVar11)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c954);
      (*pcVar11)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c95c);
      (*pcVar11)();
    }
    (**(code **)(lVar2 + 0x20))(0,0x54535f58494d4552,0xed000052454b4349,(long)dVar20,uVar9,lVar2);
    uVar16 = *(ulong *)(unaff_x22 + 0x3d8);
    uStack_68 = 1;
    uStack_70 = 3;
    uStack_78 = 5;
    uVar4 = 3;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2f8);
    pcVar11 = *(code **)(unaff_x22 + 0x390);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
    func_0x000107c5eea0(uVar3);
    func_0x000107c5ee8c();
    (*pcVar11)(uVar3,uVar9);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c950);
      (*pcVar11)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c958);
      (*pcVar11)();
    }
    dVar20 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c960);
      (*pcVar11)();
    }
    uVar18 = *(ulong *)(unaff_x22 + 0x3d8);
    uVar1 = *(ulong *)(uVar18 + 0x10);
    uVar16 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_10290d8c0(uVar16,uVar1 + 1,1,uVar18);
    }
    pcVar11 = *(code **)(unaff_x22 + 0x390);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar13 = *(long *)(unaff_x22 + 0x328);
    *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
    lVar2 = uVar16 + uVar1 * 0x10;
    *(undefined1 *)(lVar2 + 0x20) = 6;
    *(long *)(lVar2 + 0x28) = (long)param_1;
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    lVar2 = *(long *)(lVar13 + 0x30);
    func_0x0001000a8868(lVar13 + 0x10,uVar9);
    func_0x000107c5eea0(uVar3);
    func_0x000107c5ee68(uVar5);
    (*pcVar11)(uVar3,uVar6);
    dVar20 = dVar20 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c984);
      (*pcVar11)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c988);
      (*pcVar11)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c98c);
      (*pcVar11)();
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3c0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x398);
    pcVar11 = *(code **)(unaff_x22 + 0x390);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar13 = *(long *)(unaff_x22 + 0x328);
    (**(code **)(lVar2 + 0x18))(1,0x54535f58494d4552,0xed000052454b4349,(long)dVar20,uVar9);
    func_0x000107c61170(uVar14);
    func_0x000107c615e8(uVar17);
    func_0x00010006c090(uVar19,uVar10);
    func_0x00010290dc68(unaff_x22 + 0x70);
    (*pcVar11)(uVar6,uVar15);
    (*pcVar11)(uVar5,uVar15);
    (*pcVar11)(uVar8,uVar15);
    *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x120);
    dVar20 = *(double *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(double *)(unaff_x22 + 0x250) = dVar20;
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61434(uVar16);
    func_0x00010290dc34(unaff_x22 + 0x250);
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    lVar2 = *(long *)(lVar13 + 0x30);
    func_0x0001000a8868(lVar13 + 0x10,uVar9);
    func_0x000107c5eea0(uVar7);
    func_0x000107c5ee68(uVar3);
    (*pcVar11)(uVar7,uVar15);
    dVar20 = dVar20 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c990);
      (*pcVar11)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c994);
      (*pcVar11)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290c998);
      (*pcVar11)();
    }
    (**(code **)(lVar2 + 0x20))(1,0x54535f58494d4552,0xed000052454b4349,(long)dVar20,uVar9,lVar2);
    uStack_68 = 0;
    uStack_70 = 4;
    uStack_78 = 6;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x308);
  (**(code **)(unaff_x22 + 0x390))(uVar7,*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar16);
  *puVar12 = uVar4;
  puVar12[1] = uVar14;
  puVar12[2] = uVar10;
  puVar12[3] = uVar16;
  puVar12[4] = 0;
  puVar12[5] = 0;
  *(undefined1 *)(puVar12 + 6) = uStack_78;
  *(undefined1 *)((long)puVar12 + 0x31) = uStack_70;
  *(undefined1 *)((long)puVar12 + 0x32) = uStack_68;
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010290c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10290c998; end: 10290c9af;  */

void FUN_10290c998(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290c9b0,0,0);
  return;
}



/* Entry: 10290c9b0; end: 10290ce83;  */

void FUN_10290c9b0(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 *puVar17;
  long unaff_x22;
  long lVar18;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0xe8) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010290cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = **(undefined8 **)(unaff_x22 + 0xe0);
  uVar14 = (*(undefined8 **)(unaff_x22 + 0xe0))[1];
  puVar3 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar7,uVar14);
  func_0x000107c4766c();
  *(undefined **)(unaff_x22 + 0xf8) = puVar3;
  func_0x000107c61170(uVar5);
  puVar17 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar15 = 0x30;
  func_0x000107c613fc();
  puVar17[3] = 2;
  puVar17[2] = 1;
  puVar4 = puVar17;
  func_0x00010448d814();
  uVar5 = *puVar4;
  func_0x000107c5faec();
  puVar17[4] = uVar5;
  puVar17[5] = uVar15;
  puVar6 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  puVar4 = puVar17;
  func_0x000107c5fc48(puVar17,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar17);
  func_0x000107c47d08();
  *(undefined **)(unaff_x22 + 0x100) = puVar6;
  func_0x000107c61170(puVar4);
  puVar6 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  func_0x000107c4c950(puVar3);
  func_0x000107c4ed60();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x108) = puVar6;
  puVar3 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar7,uVar14);
  uVar15 = 0x6567616d69;
  func_0x000107c5fadc(0x6567616d69,0xe500000000000000);
  func_0x000107c46d48();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126b1050;
  func_0x000107c610f8();
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar7,uVar14);
  func_0x000107c5fadc();
  func_0x000107c4915c();
  *(undefined **)(unaff_x22 + 0x110) = puVar6;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
  puVar3 = PTR___sSbN_11034dd40;
  func_0x00010488bd80();
  *(undefined **)(unaff_x22 + 0x118) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar14;
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar8 + -8);
  uVar9 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar9);
  func_0x000107c61174();
  puVar10 = puVar6;
  func_0x000107c5ee80(uVar9,0x40f5180000000000);
  func_0x000107c5ee70();
  (**(code **)(lVar18 + 8))(uVar9,lVar8);
  func_0x000107c615c0(uVar9);
  puVar17 = (undefined8 *)(unaff_x22 + 0x68);
  *puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(unaff_x22 + 0x88) = FUN_10290dcb0;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x78) = &UNK_100f17820;
  *(undefined **)(unaff_x22 + 0x80) = &UNK_11056b1d8;
  func_0x000107c60bc4();
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c42260();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x128) = lVar2;
  func_0x000107c60bd0(puVar17);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar11 = (long *)(ulong)*(uint *)(
                                      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_10290ce84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar11,unaff_x22 + 0x168,&UNK_10daf1710,puVar3,FUN_10290dd8c,unaff_x22 + 0x50,0,0,
      PTR___sSbN_11034dd40);
    return;
  }
  pcVar12 = FUN_10290dd8c;
  func_0x000107c615b4(FUN_10290dd8c,unaff_x22 + 0x50);
  *(code **)(unaff_x22 + 0x140) = pcVar12;
  *(undefined **)(unaff_x22 + 0xd8) = puVar3;
  plVar13 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar13;
  lVar2 = 0x112e55c40;
  func_0x0001000285a8(0x112e55c40,&UNK_10da588b8);
  lVar8 = lVar2;
  FUN_10290dd94();
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_10290d070;
  plVar13[3] = unaff_x22 + 0x169;
  uVar14 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar8,lVar2,&UNK_10e821f58,&UNK_10e821f60);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar18 = 0;
  __ss6ResultOMa(0,uVar14,uVar7,PTR___ss5ErrorWS_11034ee10);
  plVar13[4] = lVar18;
  uVar9 = *(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar13[5] = uVar9;
  piVar16 = *(int **)(lVar8 + 0x10);
  iVar1 = *piVar16;
  plVar11 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  plVar13[6] = (long)plVar11;
  *plVar11 = (long)plVar13;
  plVar11[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))(plVar11,uVar9,lVar2,lVar8);
  return;
}



/* Entry: 10290ce84; end: 10290ceeb;  */

void FUN_10290ce84(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x16a) = *(undefined1 *)(lVar2 + 0x168);
    pcVar1 = FUN_10290ceec;
  }
  else {
    *(long *)(lVar2 + 0x158) = unaff_x20;
    pcVar1 = FUN_10290d2d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10290ceec; end: 10290d06f;  */

void FUN_10290ceec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  if (*(char *)(unaff_x22 + 0x16a) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x138);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 200;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10290d378;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,0);
    puVar8 = &UNK_11056b210;
    func_0x000107c613fc(&UNK_11056b210,0x18,7);
    puVar10 = (undefined8 *)(unaff_x22 + 0x98);
    *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar8 + 0x10) = lVar7;
    *(code **)(unaff_x22 + 0xb8) = FUN_10290dde4;
    *(undefined **)(unaff_x22 + 0xc0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_100f17d9c;
    *(undefined **)(unaff_x22 + 0xb0) = &UNK_11056b228;
    func_0x000107c60bc4(puVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c50784(uVar9);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010290d06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2,1);
  return;
}



/* Entry: 10290d070; end: 10290d153;  */

void FUN_10290d070(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    uVar1 = 0x10290d110;
  }
  else {
    uVar1 = 0x10290d0cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10290d154; end: 10290d2d7;  */

void FUN_10290d154(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  if (*(char *)(unaff_x22 + 0x16b) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x150);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 200;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10290d378;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,0);
    puVar8 = &UNK_11056b210;
    func_0x000107c613fc(&UNK_11056b210,0x18,7);
    puVar10 = (undefined8 *)(unaff_x22 + 0x98);
    *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar8 + 0x10) = lVar7;
    *(code **)(unaff_x22 + 0xb8) = FUN_10290dde4;
    *(undefined **)(unaff_x22 + 0xc0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_100f17d9c;
    *(undefined **)(unaff_x22 + 0xb0) = &UNK_11056b228;
    func_0x000107c60bc4(puVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c50784(uVar9);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010290d2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2,1);
  return;
}



/* Entry: 10290d2d8; end: 10290d377;  */

void FUN_10290d2d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c614ac(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010290d374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1,1);
  return;
}



/* Entry: 10290d378; end: 10290d3b7;  */

void FUN_10290d378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290d3b8,0,0);
  return;
}



/* Entry: 10290d3b8; end: 10290d693;  */

void FUN_10290d3b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar14 = *(ulong *)(unaff_x22 + 0xd0);
  if (uVar14 >> 0x3c < 0xf) {
    lVar13 = *(long *)(unaff_x22 + 200);
    uVar6 = (uint)(uVar14 >> 0x20);
    uVar12 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar14 & 0xff000000000000) == 0) {
LAB_10290d51c:
          uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
          func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
          func_0x000107c615e8(uVar2);
          func_0x000107c61574(uVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar1);
          goto LAB_10290d588;
        }
      }
      else if ((long)(int)lVar13 == lVar13 >> 0x20) goto LAB_10290d51c;
LAB_10290d458:
      lVar15 = *(long *)(unaff_x22 + 0x160);
      lVar8 = lVar13;
      uVar11 = uVar14;
      FUN_102914b2c(lVar13,uVar14,*(undefined8 *)(*(long *)(unaff_x22 + 0xe0) + 0x10),
                    *(undefined8 *)(*(long *)(unaff_x22 + 0xe0) + 0x18),0,0xf000000000000000,0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
      if (lVar15 == 0) {
        puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168();
        lVar15 = lVar8;
        func_0x000107c5ee20(lVar8,uVar11);
        func_0x000107c51770();
        func_0x000107c61180();
        func_0x000107c61170(uVar17);
        func_0x000107c61574(uVar16);
        func_0x000107c61574(uVar3);
        func_0x000107c615e8(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar1);
        func_0x00010006c090(lVar8,uVar11);
        func_0x0001000b44c0(lVar13,uVar14);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar18);
        func_0x000107c61170(lVar15);
        bVar7 = puVar10 == (undefined *)0x0;
        puVar9 = (undefined *)0x5;
        if (!bVar7) {
          puVar9 = puVar10;
        }
      }
      else {
        func_0x000107c614ac(lVar15);
        func_0x000107c61170(uVar17);
        func_0x000107c61574(uVar16);
        func_0x000107c61574(uVar3);
        func_0x000107c615e8(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar18);
        func_0x0001000b44c0(lVar13,uVar14);
        bVar7 = true;
        puVar9 = (undefined *)0x4;
      }
      goto LAB_10290d5b4;
    }
    if (uVar12 == 2) {
      if (*(long *)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18)) goto LAB_10290d51c;
      goto LAB_10290d458;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(uVar3);
LAB_10290d588:
    func_0x0001000b44c0(lVar13,uVar14);
    func_0x000107c615e8(uVar18);
    func_0x000107c61574(uVar16);
    func_0x000107c61170(uVar17);
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c61574(uVar16);
    func_0x000107c61574(uVar2);
    func_0x000107c615e8(uVar18);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar1);
  }
  bVar7 = true;
  puVar9 = (undefined *)0x3;
LAB_10290d5b4:
                    /* WARNING: Could not recover jumptable at 0x00010290d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9,bVar7);
  return;
}



/* Entry: 10290d694; end: 10290d697;  */

void FUN_10290d694(void)

{
  return;
}



/* Entry: 10290d698; end: 10290d71f;  */

void FUN_10290d698(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  lVar3 = 0x112e55c40;
  func_0x0001000285a8(0x112e55c40,&UNK_10da588b8);
  lVar4 = lVar3;
  FUN_10290dd94();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10290d720;
  plVar2[3] = param_1;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar4,lVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar5,uVar6,PTR___ss5ErrorWS_11034ee10);
  plVar2[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[5] = uVar8;
  piVar10 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar9;
  *plVar9 = (long)plVar2;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar3,lVar4);
  return;
}



/* Entry: 10290d720; end: 10290d77b;  */

void FUN_10290d720(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10290d77c;
  }
  else {
    pcVar1 = (code *)0x10290d788;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10290d77c; end: 10290d793;  */

void FUN_10290d77c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010290d784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10290d794; end: 10290d7fb;  */

void FUN_10290d794(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    lVar3 = -0x1000000000000000;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
  }
  plVar1 = *(long **)(*(long *)(param_2 + 0x40) + 0x28);
  *plVar1 = lVar2;
  plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 10290d7fc; end: 10290d86b;  */

void FUN_10290d7fc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar4 = (long *)0x3f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10290d86c;
  plVar4[0x65] = unaff_x20;
  plVar4[100] = param_4;
  plVar4[99] = param_3;
  plVar4[0x62] = param_2;
  plVar4[0x61] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x66] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x67] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x68] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x69] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x6a] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x6b] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x6c] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x6d] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x6e] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x6f] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290aa94,0,0);
  return;
}



/* Entry: 10290d86c; end: 10290d8bf;  */

void FUN_10290d86c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined4 *)((long)puVar1 + 0x2f) = *(undefined4 *)(lVar2 + 0x3f);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010290d8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 10290d8c0; end: 10290d9bf;  */

undefined * FUN_10290d8c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10290d9c0);
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
    puVar3 = (undefined *)0x112eccc50;
    func_0x0001000285a8(0x112eccc50,&UNK_10daf1718);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10290d9c0; end: 10290d9db;  */

void FUN_10290d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290d9dc,0,0);
  return;
}



/* Entry: 10290d9dc; end: 10290da7b;  */

void FUN_10290d9dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c5ee20(uVar1,*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c5d724();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar2;
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  lVar4 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10290da7c;
  plVar3[7] = lVar2;
  plVar3[8] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_103968380,0,0);
  return;
}



/* Entry: 10290da7c; end: 10290dacb;  */

void FUN_10290da7c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290dacc,0,0);
  return;
}



/* Entry: 10290dacc; end: 10290dc33;  */

void FUN_10290dacc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  if (lVar5 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    puVar7 = (undefined8 *)(unaff_x22 + 0x70);
    *puVar7 = 0;
    puVar1 = &UNK_11056b260;
    func_0x000107c613fc(&UNK_11056b260,0x18,7);
    *(undefined8 **)(puVar1 + 0x10) = puVar7;
    puVar2 = &UNK_11056b288;
    func_0x000107c613fc(&UNK_11056b288,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10290ddec;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x10290de18;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar3 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_10194f784;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11056b2a0;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    puVar6 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar6 = puVar2;
    *(code **)(unaff_x22 + 0x60) = FUN_10290d694;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_100e27b38;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_11056b2c8;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c4c754(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c60bd0(puVar6);
    func_0x000107c60bd0(puVar3);
    uVar4 = *puVar7;
    func_0x000107c61574(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010290dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10290dc34; end: 10290dcaf;  */

undefined8 FUN_10290dc34(undefined8 param_1)

{
  FUN_102912e18();
  return param_1;
}



/* Entry: 10290dcb0; end: 10290dcdf;  */

void FUN_10290dcb0(long param_1)

{
  ulong uStack_20;
  undefined1 uStack_18;
  
  uStack_20 = (ulong)(param_1 == 0);
  uStack_18 = 0;
  func_0x00010488e5d4(&uStack_20);
  return;
}



/* Entry: 10290dce0; end: 10290dcfb;  */

void FUN_10290dce0(long param_1,long param_2)

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



/* Entry: 10290dcfc; end: 10290dd4f;  */

void FUN_10290dcfc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10290dd50;
  plVar5[2] = unaff_x20;
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  plVar5[3] = (long)plVar2;
  lVar3 = 0x112e55c40;
  func_0x0001000285a8(0x112e55c40,&UNK_10da588b8);
  lVar4 = lVar3;
  FUN_10290dd94();
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_10290d720;
  plVar2[3] = param_1;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar4,lVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar6,uVar7,PTR___ss5ErrorWS_11034ee10);
  plVar2[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[5] = uVar9;
  piVar10 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar10;
  plVar5 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar5,uVar9,lVar3,lVar4);
  return;
}



/* Entry: 10290dd50; end: 10290dd8b;  */

void FUN_10290dd50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010290dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10290dd8c; end: 10290dd93;  */

void FUN_10290dd8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10290dd94; end: 10290dde3;  */

void FUN_10290dd94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e55c48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e55c40;
  func_0x00010002969c(0x112e55c40,&UNK_10da588b8);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e55c48 = puVar2;
  return;
}



/* Entry: 10290dde4; end: 10290ddeb;  */

void FUN_10290dde4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar1;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
  }
  plVar2 = *(long **)(*(long *)(lVar1 + 0x40) + 0x28);
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10290ddec; end: 10290de37;  */

void FUN_10290ddec(undefined8 param_1)

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



/* Entry: 10290de38; end: 10290de4f;  */

void FUN_10290de38(long param_1,long param_2)

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



/* Entry: 10290de50; end: 10290dedf;  */

long FUN_10290de50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10290dee0; end: 10290df43;  */

undefined8 * FUN_10290dee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 10290df44; end: 10290df87;  */

undefined8 * FUN_10290df44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10290df88; end: 10290e01f;  */

int FUN_10290df88(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10290e020; end: 10290e087;  */

void FUN_10290e020(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10290e088;
                    /* WARNING: Could not recover jumptable at 0x00010290e084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10290e454(uVar1,uVar2);
  return;
}



/* Entry: 10290e088; end: 10290e0d3;  */

void FUN_10290e088(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010290e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 10290e0d4; end: 10290e13b;  */

void FUN_10290e0d4(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10290e13c;
                    /* WARNING: Could not recover jumptable at 0x00010290e138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4);
  return;
}



/* Entry: 10290e13c; end: 10290e213;  */

void FUN_10290e13c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010290e17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10290e214; end: 10290e337;  */

undefined * FUN_10290e214(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10290e338);
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
    func_0x00010290e180();
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
    func_0x0001013903f0(0);
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



/* Entry: 10290e338; end: 10290e453;  */

undefined * FUN_10290e338(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10290e454);
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
    puVar3 = (undefined *)0x112eccc58;
    func_0x0001000285a8(0x112eccc58,&UNK_10daf1768);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106dea30);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10290e454; end: 10290e4ff;  */

void FUN_10290e454(int *param_1)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10290e4ac;
                    /* WARNING: Could not recover jumptable at 0x00010290e4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))();
  return;
}



/* Entry: 10290e500; end: 10290e69f;  */

void FUN_10290e500(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x22;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_90;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(unaff_x22 + 0x18);
  if (lVar13 == 0) {
    puVar12 = (undefined *)0x0;
    uVar10 = 1;
  }
  else {
    lVar11 = *(long *)(lVar13 + 0x10);
    if (lVar11 == 0) {
      FUN_10290e6a0(lVar13,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x00010290e1f8(0,lVar11,0);
      puVar15 = (undefined8 *)(lVar13 + 0x38);
      do {
        uVar10 = puVar15[-3];
        uVar5 = puVar15[-2];
        uVar1 = puVar15[-1];
        uVar6 = *puVar15;
        uVar2 = puVar15[1];
        uVar7 = puVar15[2];
        uVar3 = puVar15[3];
        uVar8 = puVar15[4];
        uStack_90 = puVar15[5];
        uVar14 = puVar15[6];
        uVar4 = uStack_90 & 0xffffffffffff;
        if ((uVar14 & 0x2000000000000000) != 0) {
          uVar4 = uVar14 >> 0x38 & 0xf;
        }
        if (uVar4 == 0) {
          uStack_90 = 0;
          uVar14 = 0;
        }
        else {
          func_0x000107c61434(uVar14);
        }
        uVar4 = *(ulong *)(puVar12 + 0x10);
        uVar9 = *(ulong *)(puVar12 + 0x18);
        func_0x000107c61434(uVar7);
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar8);
        if (uVar9 >> 1 <= uVar4) {
          func_0x00010290e1f8(1 < uVar9,uVar4 + 1,1);
        }
        puVar15 = puVar15 + 0xc;
        *(ulong *)(puVar12 + 0x10) = uVar4 + 1;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x20) = uVar10;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x28) = uVar5;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x30) = uVar1;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x38) = uVar6;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x40) = uVar2;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x48) = uVar7;
        *(ulong *)(puVar12 + uVar4 * 0x50 + 0x50) = uStack_90;
        *(ulong *)(puVar12 + uVar4 * 0x50 + 0x58) = uVar14;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x60) = uVar3;
        *(undefined8 *)(puVar12 + uVar4 * 0x50 + 0x68) = uVar8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      FUN_10290e6a0(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                    *(undefined8 *)(unaff_x22 + 0x28));
    }
    uVar10 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010290e69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar12,uVar10);
  return;
}



/* Entry: 10290e6a0; end: 10290e6d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10290e6a0(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 10290e6d4; end: 10290e6e3;  */

void FUN_10290e6d4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10290e6e4; end: 10290e713;  */

void FUN_10290e6e4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_102911b18();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10290e714; end: 10290e71b;  */

undefined8 FUN_10290e714(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10290e71c; end: 10290e78f;  */

void FUN_10290e71c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ecccc8;
  func_0x0001000285a8(0x112ecccc8,&UNK_10daf17f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10290e790; end: 10290e79b;  */

void FUN_10290e790(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10290e79c; end: 10290e847;  */

void FUN_10290e79c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10290e848; end: 10290e85b;  */

bool FUN_10290e848(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10290e85c; end: 10290e8eb;  */

uint FUN_10290e85c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_102911bdc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10290e8ec; end: 10290e98b;  */

/* WARNING: Possible PIC construction at 0x00010290e938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290e948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010290e93c) */
/* WARNING: Removing unreachable block (ram,0x00010290e94c) */

void FUN_10290e8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ecccd8 != -1) {
    func_0x000107c61568(0x112ecccd8,0x10290e8a4);
  }
  uVar5 = uRam0000000113804cd0;
  uVar4 = uRam0000000113804cc8;
  uVar3 = uRam0000000113804cc0;
  uVar2 = uRam0000000113804cb8;
  uVar1 = uRam0000000113804cb0;
  *param_1 = uRam0000000113804ca8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10290e98c; end: 10290e9d3;  */

void FUN_10290e98c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10daf2200,0x60,2);
  uRam0000000113804ce0 = uStack_38;
  uRam0000000113804cd8 = uStack_40;
  uRam0000000113804cf0 = uStack_28;
  uRam0000000113804ce8 = uStack_30;
  uRam0000000113804d00 = uStack_18;
  uRam0000000113804cf8 = uStack_20;
  return;
}



/* Entry: 10290e9d4; end: 10290eab3;  */

void FUN_10290e9d4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_10290ea80;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x168);
          goto LAB_10290ea80;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x168);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 5) goto LAB_10290ea90;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_10290ea80:
        (*pcVar3)();
      }
LAB_10290ea90:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10290eab4; end: 10290ec37;  */

void FUN_10290eab4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10290eb5c;
    }
    else {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
LAB_10290eb3c:
      if (lVar5 == lVar6) goto LAB_10290eb5c;
    }
    (**(code **)(param_3 + 0x78))(uVar1,uVar2,2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
    goto LAB_10290eb3c;
  }
LAB_10290eb5c:
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
      goto LAB_10290eb94;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10290ebb4;
  }
  else {
    if (uVar4 != 2) goto LAB_10290ebb4;
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
LAB_10290eb94:
    if (lVar5 == lVar6) goto LAB_10290ebb4;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10290ebb4:
  uVar2 = unaff_x20[7];
  uVar1 = unaff_x20[6] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[9];
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 10290ec38; end: 10290ec93;  */

void FUN_10290ec38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 10290ec94; end: 10290ecbb;  */

void FUN_10290ec94(void)

{
  FUN_10290e9d4();
  return;
}



/* Entry: 10290ecbc; end: 10290ecf3;  */

uint FUN_10290ecbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102914364();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10290ecf4; end: 10290ed4b;  */

uint FUN_10290ecf4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000102911e30(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10290ed4c; end: 10290edeb;  */

/* WARNING: Possible PIC construction at 0x00010290ed98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290eda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010290ed9c) */
/* WARNING: Removing unreachable block (ram,0x00010290edac) */

void FUN_10290ed4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112eccce0 != -1) {
    func_0x000107c61568(0x112eccce0,FUN_10290e98c);
  }
  uVar5 = uRam0000000113804d00;
  uVar4 = uRam0000000113804cf8;
  uVar3 = uRam0000000113804cf0;
  uVar2 = uRam0000000113804ce8;
  uVar1 = uRam0000000113804ce0;
  *param_1 = uRam0000000113804cd8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10290edec; end: 10290edff;  */

void FUN_10290edec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ecce88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ecce88,&UNK_10daf2110);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10290ee00; end: 10290ef1b;  */

void FUN_10290ee00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10290ef1c; end: 10290efbb;  */

uint FUN_10290ef1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000102911e30(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10290efbc; end: 10290f083;  */

/* WARNING: Removing unreachable block (ram,0x00010290f054) */

void FUN_10290efbc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      FUN_10290f2f4();
    }
    else if (lVar1 == 2) {
      FUN_10290f084();
    }
    else if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 10290f084; end: 10290f2f3;  */

/* WARNING: Removing unreachable block (ram,0x00010290f248) */

void FUN_10290f084(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar11 = param_1[7];
  uVar10 = param_1[9];
  uVar7 = uVar11 & uVar10 & 0x3000000000000000;
  puVar4 = param_1;
  if (uVar7 != 0x3000000000000000 && (uVar10 & 0x2000000000000000) == 0) {
    uVar8 = param_1[8];
    uVar5 = param_1[5];
    uVar2 = param_1[6];
    lVar1 = param_1[3];
    uVar3 = param_1[4];
    uVar12 = param_1[2];
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_f0 = uVar12;
    lStack_e8 = lVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar5;
    uStack_d0 = uVar2;
    uStack_c8 = uVar11;
    uStack_c0 = uVar8;
    uStack_b8 = uVar10;
    func_0x000102911b74(&uStack_f0,auStack_170);
    puVar4 = &uStack_130;
    func_0x000102914404(puVar4,0x112eccea0,&UNK_10daf21d8);
    uStack_b0 = uVar12;
    lStack_a8 = lVar1;
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar2;
    uStack_88 = uVar11;
    uStack_80 = uVar8;
    uStack_78 = uVar10;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_102912914();
  (*pcVar9)(&uStack_b0,&UNK_11056bad8,puVar4,param_3,param_4);
  uVar11 = uStack_78;
  uVar12 = uStack_80;
  uVar10 = uStack_88;
  uVar8 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  lVar1 = lStack_a8;
  uVar5 = uStack_b0;
  if (unaff_x21 == 0) {
    lStack_e8 = lStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    if (lStack_a8 != 0) {
      if (uVar7 == 0x3000000000000000) {
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000102911ba8(&uStack_130,auStack_170);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000102911ba8(&uStack_130,auStack_170);
        (*pcVar9)(param_3,param_4);
      }
      func_0x000102914404(&uStack_b0,0x112eccea0,&UNK_10daf21d8);
      lStack_128 = param_1[3];
      uStack_130 = param_1[2];
      uStack_118 = param_1[5];
      uStack_120 = param_1[4];
      uStack_108 = param_1[7];
      uStack_110 = param_1[6];
      uStack_f8 = param_1[9];
      uStack_100 = param_1[8];
      param_1[3] = lVar1;
      param_1[2] = uVar5;
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_1[6] = uVar8;
      param_1[7] = uVar10 & 0xcfffffffffffffff;
      param_1[8] = uVar12;
      param_1[9] = uVar11 & 0xcfffffffffffffff;
      uVar5 = 0x112ecccd0;
      puVar6 = &UNK_10daf17f8;
      puVar4 = &uStack_130;
      goto LAB_10290f1a8;
    }
  }
  uVar5 = 0x112eccea0;
  puVar6 = &UNK_10daf21d8;
  puVar4 = &uStack_b0;
LAB_10290f1a8:
  func_0x000102914404(puVar4,uVar5,puVar6);
  return;
}



/* Entry: 10290f2f4; end: 10290f513;  */

/* WARNING: Removing unreachable block (ram,0x00010290f490) */

void FUN_10290f2f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar6 = *(ulong *)(param_1 + 0x48);
  uVar7 = uVar10 & uVar6 & 0x3000000000000000;
  lVar5 = param_1;
  if (uVar7 != 0x3000000000000000 && (uVar6 & 0x2000000000000000) != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = *(long *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uStack_e0 = uVar8;
    uStack_d8 = uVar2;
    uStack_d0 = uVar4;
    lStack_c8 = lVar1;
    uStack_c0 = uVar3;
    uStack_b8 = uVar10;
    uStack_a8 = uVar6;
    func_0x000102911b74(&uStack_e0,auStack_120);
    lVar5 = 0;
    func_0x000102914444(0,0,0,0,0,0);
    uStack_98 = uVar2 & 0xff;
    uStack_a0 = uVar8;
    uStack_90 = uVar4;
    lStack_88 = lVar1;
    uStack_80 = uVar3;
    uStack_78 = uVar10;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_102912a10();
  (*pcVar9)(&uStack_a0,&UNK_11056bb60,lVar5,param_3,param_4);
  uVar10 = uStack_78;
  uVar8 = uStack_80;
  lVar5 = lStack_88;
  uVar4 = uStack_90;
  uVar6 = uStack_98;
  uVar3 = uStack_a0;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (uVar7 == 0x3000000000000000) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar8,uVar10);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar8,uVar10);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000102914444(uStack_a0,uStack_98,uStack_90,lStack_88,uStack_80,uStack_78);
    uStack_d8 = *(undefined8 *)(param_1 + 0x18);
    uStack_e0 = *(undefined8 *)(param_1 + 0x10);
    lStack_c8 = *(undefined8 *)(param_1 + 0x28);
    uStack_d0 = *(undefined8 *)(param_1 + 0x20);
    uStack_b8 = *(undefined8 *)(param_1 + 0x38);
    uStack_c0 = *(undefined8 *)(param_1 + 0x30);
    uStack_a8 = *(undefined8 *)(param_1 + 0x48);
    uStack_b0 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(ulong *)(param_1 + 0x18) = uVar6 & 0xff;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(long *)(param_1 + 0x28) = lVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(ulong *)(param_1 + 0x38) = uVar10 & 0xcfffffffffffffff;
    *(undefined8 *)(param_1 + 0x48) = 0x2000000000000000;
    func_0x000102914404(&uStack_e0,0x112ecccd0,&UNK_10daf17f8);
  }
  else {
    func_0x000102914444(uStack_a0,uStack_98,uStack_90,lStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10290f514; end: 10290f5cb;  */

void FUN_10290f514(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    if (((unaff_x20[7] & unaff_x20[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      if ((unaff_x20[9] >> 0x3d & 1) == 0) {
        FUN_10290f5cc();
      }
      else {
        FUN_10290f678();
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
  }
  return;
}



/* Entry: 10290f5cc; end: 10290f677;  */

void FUN_10290f5cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x38);
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (((uStack_58 & uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_48 & 0x2000000000000000) == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102912914();
    (*pcVar1)(&uStack_80,2,&UNK_11056bad8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10290f678);
  (*pcVar1)();
}



/* Entry: 10290f678; end: 10290f71b;  */

void FUN_10290f678(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (((uStack_48 & *(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (*(ulong *)(param_1 + 0x48) & 0x2000000000000000) != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102912a10();
    (*pcVar1)(&uStack_70,3,&UNK_11056bb60,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10290f71c);
  (*pcVar1)();
}



/* Entry: 10290f71c; end: 10290f783;  */

void FUN_10290f71c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3000000000000000;
  param_1[10] = 0;
  param_1[9] = 0x3000000000000000;
  param_1[0xb] = 0xc000000000000000;
  return;
}



/* Entry: 10290f784; end: 10290f797;  */

void FUN_10290f784(void)

{
  FUN_10290efbc();
  return;
}



/* Entry: 10290f798; end: 10290f7d7;  */

void FUN_10290f798(void)

{
  FUN_10290f514();
  return;
}



/* Entry: 10290f7d8; end: 10290f80f;  */

uint FUN_10290f7d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102914324();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10290f810; end: 10290f867;  */

uint FUN_10290f810(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_102911f34(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10290f868; end: 10290f907;  */

/* WARNING: Possible PIC construction at 0x00010290f8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290f8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010290f8b8) */
/* WARNING: Removing unreachable block (ram,0x00010290f8c8) */

void FUN_10290f868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ecccf0 != -1) {
    func_0x000107c61568(0x112ecccf0,0x10290ef74);
  }
  uVar5 = uRam0000000113804d30;
  uVar4 = uRam0000000113804d28;
  uVar3 = uRam0000000113804d20;
  uVar2 = uRam0000000113804d18;
  uVar1 = uRam0000000113804d10;
  *param_1 = uRam0000000113804d08;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10290f908; end: 10290f91b;  */

void FUN_10290f908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ecce78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ecce78,&UNK_10daf2108);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10290f91c; end: 10290fa37;  */

void FUN_10290f91c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10290fa38; end: 10290fad7;  */

uint FUN_10290fa38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_102911f34(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10290fad8; end: 10290fb83;  */

void FUN_10290fad8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x168);
      goto LAB_10290fb14;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_10290fb14:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x168);
  goto LAB_10290fb14;
}



/* Entry: 10290fb84; end: 10290fca7;  */

void FUN_10290fb84(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10290fc2c;
    }
    else {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
LAB_10290fc0c:
      if (lVar5 == lVar6) goto LAB_10290fc2c;
    }
    (**(code **)(param_3 + 0x78))(uVar1,uVar2,2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
    goto LAB_10290fc0c;
  }
LAB_10290fc2c:
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
      goto LAB_10290fc64;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10290fc84;
  }
  else {
    if (uVar4 != 2) goto LAB_10290fc84;
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
LAB_10290fc64:
    if (lVar5 == lVar6) goto LAB_10290fc84;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10290fc84:
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 10290fca8; end: 10290fce7;  */

void FUN_10290fca8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 10290fce8; end: 10290fd17;  */

undefined1  [16] FUN_10290fce8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10290fd18; end: 10290fd4b;  */

void FUN_10290fd18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 10290fd4c; end: 10290fd5f;  */

undefined1  [16] FUN_10290fd4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x10290fd5c;
  return auVar1;
}



/* Entry: 10290fd60; end: 10290fd87;  */

void FUN_10290fd60(void)

{
  FUN_10290fad8();
  return;
}



/* Entry: 10290fd88; end: 10290fd8b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10290fd88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10290fd8c; end: 10290fdc3;  */

uint FUN_10290fd8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001029142e4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10290fdc4; end: 10290fea7;  */

/* WARNING: Possible PIC construction at 0x00010290fe20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290fe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010290fe54) */
/* WARNING: Removing unreachable block (ram,0x00010290fe58) */
/* WARNING: Removing unreachable block (ram,0x00010290fe24) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10290fdc4(undefined8 *param_1)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  undefined8 *unaff_x20;
  undefined8 uVar26;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar30 = &stack0xfffffffffffffff0;
  pbVar16 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar10 = (byte *)param_1[4];
  pbVar17 = (byte *)param_1[5];
  uStack_68 = param_1[6];
  uStack_70 = param_1[7];
  pbVar12 = (byte *)*unaff_x20;
  pbVar15 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  uVar26 = unaff_x20[3];
  pbVar11 = (byte *)unaff_x20[4];
  pbVar1 = (byte *)unaff_x20[5];
  uStack_78 = unaff_x20[6];
  pbVar24 = (byte *)unaff_x20[7];
  if ((pbVar12 != pbVar16) || (pbVar15 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar13,0);
    return pbVar12;
  }
  pbVar13 = pbVar23;
  func_0x000100e25fcc(pbVar23,uVar26,param_1[2],param_1[3]);
  if (((ulong)pbVar13 & 1) == 0) {
    return (byte *)0x0;
  }
  uVar31 = 0x10290fe54;
  puVar8 = auStack_80;
  pbVar27 = pbVar1;
  pbVar16 = pbVar10;
  pbVar13 = pbVar17;
  pbVar29 = pbVar11;
  do {
    *(byte **)(puVar8 + -0x50) = pbVar1;
    *(byte **)(puVar8 + -0x48) = pbVar29;
    *(byte **)(puVar8 + -0x40) = pbVar13;
    *(byte **)(puVar8 + -0x38) = pbVar16;
    *(byte **)(puVar8 + -0x30) = pbVar24;
    *(undefined8 *)(puVar8 + -0x28) = uVar26;
    *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
    *(byte **)(puVar8 + -0x18) = pbVar23;
    *(undefined1 **)(puVar8 + -0x10) = puVar30;
    *(undefined8 *)(puVar8 + -8) = uVar31;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar27 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    uVar6 = (uint)((ulong)pbVar17 >> 0x20);
    uVar21 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          ((ulong)pbVar17 >> 0x3e < 3)) ||
         ((uVar20 = 0, pbVar10 != (byte *)0x0 || (pbVar17 != (byte *)0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar19,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar20 = (ulong)(iVar19 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = (ulong)pbVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)pbVar10 >> 0x20);
      if (SBORROW4(iVar19,(int)pbVar10)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar20 == (long)(iVar19 - (int)pbVar10)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar27;
            puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            uVar26 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          pbVar29 = (byte *)(long)iVar9;
          pbVar16 = (byte *)(((long)pbVar11 >> 0x20) - (long)pbVar29);
          if ((long)pbVar11 >> 0x20 < (long)pbVar29) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          pbVar13 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pbVar29,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)pbVar29 - (long)pbVar14);
            func_0x000107c5ec38();
            pbVar23 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)pbVar16 <= (long)pbVar14) {
                pbVar14 = pbVar16;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar14 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar11 + 0x10);
          pbVar13 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar25 - (long)pbVar14);
          }
          pbVar16 = pbVar13 + -lVar25;
          if (SBORROW8((long)pbVar13,lVar25)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          pbVar23 = pbVar11;
          pbVar29 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)pbVar16 <= (long)pbVar14) {
              pbVar14 = pbVar16;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar27 & 0x3fffffffffffffff);
        uVar26 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar14,pbVar10,pbVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        pbVar24 = pbVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = pbVar13;
    *(byte **)(puVar8 + -0xb8) = pbVar16;
    *(byte **)(puVar8 + -0xb0) = pbVar24;
    *(undefined8 *)(puVar8 + -0xa8) = uVar26;
    *(undefined8 **)(puVar8 + -0xa0) = unaff_x20;
    *(byte **)(puVar8 + -0x98) = pbVar23;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar32 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar32 < 3) {
      if (bVar32 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar26 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar26);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar32 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar26 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar26);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar16) && (pbVar27 == pbVar13)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar13 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar11 == pbVar13)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar11 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar11;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar32 < 5) {
      if (bVar32 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar13 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar11 == pbVar13)) &&
           (pbVar12 = pbVar27, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar13 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar13 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar13 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar16) || (pbVar27 != pbVar13)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar28,*(byte **)(pbVar14 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar32 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar32 = pbVar14[8] | (byte)lVar25;
        bVar33 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar34 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar35 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar36 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar37 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar38 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar39 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar40 = pbVar14[0x10] | (byte)lVar28;
        bVar41 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar42 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar43 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar44 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar45 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar46 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar47 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar48[1] = bVar33;
        auVar48[0] = bVar32;
        auVar48[2] = bVar34;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = bVar40;
        auVar48[9] = bVar41;
        auVar48[10] = bVar42;
        auVar48[0xb] = bVar43;
        auVar48[0xc] = bVar44;
        auVar48[0xd] = bVar45;
        auVar48[0xe] = bVar46;
        auVar48[0xf] = bVar47;
        auVar4[1] = bVar33;
        auVar4[0] = bVar32;
        auVar4[2] = bVar34;
        auVar4[3] = bVar35;
        auVar4[4] = bVar36;
        auVar4[5] = bVar37;
        auVar4[6] = bVar38;
        auVar4[7] = bVar39;
        auVar4[8] = bVar40;
        auVar4[9] = bVar41;
        auVar4[10] = bVar42;
        auVar4[0xb] = bVar43;
        auVar4[0xc] = bVar44;
        auVar4[0xd] = bVar45;
        auVar4[0xe] = bVar46;
        auVar4[0xf] = bVar47;
        auVar48 = NEON_ext(auVar48,auVar4,8,1);
        if (CONCAT17(bVar39 | auVar48[7],
                     CONCAT16(bVar38 | auVar48[6],
                              CONCAT15(bVar37 | auVar48[5],
                                       CONCAT14(bVar36 | auVar48[4],
                                                CONCAT13(bVar35 | auVar48[3],
                                                         CONCAT12(bVar34 | auVar48[2],
                                                                  CONCAT11(bVar33 | auVar48[1],
                                                                           bVar32 | auVar48[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar32 = pbVar14[8] | (byte)lVar25;
      bVar33 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar34 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar35 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar36 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar37 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar38 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar39 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar40 = pbVar14[0x10] | (byte)lVar28;
      bVar41 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar42 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar43 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar44 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar45 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar46 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar47 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar2[1] = bVar33;
      auVar2[0] = bVar32;
      auVar2[2] = bVar34;
      auVar2[3] = bVar35;
      auVar2[4] = bVar36;
      auVar2[5] = bVar37;
      auVar2[6] = bVar38;
      auVar2[7] = bVar39;
      auVar2[8] = bVar40;
      auVar2[9] = bVar41;
      auVar2[10] = bVar42;
      auVar2[0xb] = bVar43;
      auVar2[0xc] = bVar44;
      auVar2[0xd] = bVar45;
      auVar2[0xe] = bVar46;
      auVar2[0xf] = bVar47;
      auVar3[1] = bVar33;
      auVar3[0] = bVar32;
      auVar3[2] = bVar34;
      auVar3[3] = bVar35;
      auVar3[4] = bVar36;
      auVar3[5] = bVar37;
      auVar3[6] = bVar38;
      auVar3[7] = bVar39;
      auVar3[8] = bVar40;
      auVar3[9] = bVar41;
      auVar3[10] = bVar42;
      auVar3[0xb] = bVar43;
      auVar3[0xc] = bVar44;
      auVar3[0xd] = bVar45;
      auVar3[0xe] = bVar46;
      auVar3[0xf] = bVar47;
      auVar48 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    pbVar10 = *(byte **)(pbVar14 + 8);
    pbVar17 = *(byte **)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar26 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar26);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar30 = *(undefined1 **)(puVar8 + -0x90);
    uVar31 = *(undefined8 *)(puVar8 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar8 + -0xa0);
    pbVar23 = *(byte **)(puVar8 + -0x98);
    pbVar24 = *(byte **)(puVar8 + -0xb0);
    uVar26 = *(undefined8 *)(puVar8 + -0xa8);
    pbVar13 = *(byte **)(puVar8 + -0xc0);
    pbVar16 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 10290fea8; end: 10290ff47;  */

/* WARNING: Possible PIC construction at 0x00010290fef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290ff04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010290fef8) */
/* WARNING: Removing unreachable block (ram,0x00010290ff08) */

void FUN_10290fea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112eccd00 != -1) {
    func_0x000107c61568(0x112eccd00,0x10290fa90);
  }
  uVar5 = uRam0000000113804d60;
  uVar4 = uRam0000000113804d58;
  uVar3 = uRam0000000113804d50;
  uVar2 = uRam0000000113804d48;
  uVar1 = uRam0000000113804d40;
  *param_1 = uRam0000000113804d38;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10290ff48; end: 10290ff83;  */

void FUN_10290ff48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ecce68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ecce68,&UNK_10daf2100);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10290ff84; end: 102910087;  */

void FUN_10290ff84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102910088; end: 102910173;  */

/* WARNING: Possible PIC construction at 0x0001029100ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010291011c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102910120) */
/* WARNING: Removing unreachable block (ram,0x000102910124) */
/* WARNING: Removing unreachable block (ram,0x0001029100f0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102910088(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar30 = &stack0xfffffffffffffff0;
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  uVar13 = param_1[2];
  pbVar11 = (byte *)param_1[4];
  pbVar28 = (byte *)param_1[5];
  uStack_68 = param_1[6];
  uStack_70 = param_1[7];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  pbVar23 = (byte *)param_2[2];
  uVar24 = param_2[3];
  pbVar10 = (byte *)param_2[4];
  uVar1 = param_2[5];
  uVar26 = param_2[6];
  uVar27 = param_2[7];
  if ((pbVar12 != pbVar16) || (pbVar15 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  func_0x000100e25fcc(uVar13,param_1[3],pbVar23,uVar24);
  if ((uVar13 & 1) == 0) {
    return (byte *)0x0;
  }
  uVar31 = 0x102910120;
  puVar8 = &uStack_70;
  uVar13 = uVar1;
  pbVar17 = pbVar11;
  pbVar12 = pbVar28;
  pbVar16 = pbVar10;
  do {
    *(ulong *)((long)puVar8 + -0x50) = uVar1;
    *(byte **)((long)puVar8 + -0x48) = pbVar16;
    *(byte **)((long)puVar8 + -0x40) = pbVar12;
    *(byte **)((long)puVar8 + -0x38) = pbVar17;
    *(ulong *)((long)puVar8 + -0x30) = uVar27;
    *(undefined8 *)((long)puVar8 + -0x28) = uVar26;
    *(ulong *)((long)puVar8 + -0x20) = uVar24;
    *(byte **)((long)puVar8 + -0x18) = pbVar23;
    *(undefined1 **)((long)puVar8 + -0x10) = puVar30;
    *(undefined8 *)((long)puVar8 + -8) = uVar31;
    *(undefined8 *)((long)puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar28 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) ||
         ((uVar20 = 0, pbVar10 != (byte *)0x0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar19,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar20 = (ulong)(iVar19 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)pbVar10 >> 0x20);
      if (SBORROW4(iVar19,(int)pbVar10)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar20 == (long)(iVar19 - (int)pbVar10)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)puVar8 + -0x70) = (char)pbVar11;
            *(char *)((long)puVar8 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)puVar8 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)puVar8 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)puVar8 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)puVar8 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)puVar8 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)puVar8 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)puVar8 + -0x68) = (char)pbVar28;
            *(char *)((long)puVar8 + -0x67) = (char)((ulong)pbVar28 >> 8);
            *(char *)((long)puVar8 + -0x66) = (char)((ulong)pbVar28 >> 0x10);
            *(char *)((long)puVar8 + -0x65) = (char)((ulong)pbVar28 >> 0x18);
            *(char *)((long)puVar8 + -100) = (char)((ulong)pbVar28 >> 0x20);
            *(char *)((long)puVar8 + -99) = (char)((ulong)pbVar28 >> 0x28);
            pbVar14 = (byte *)((long)puVar8 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            uVar26 = 0;
            func_0x000100e25bdc((undefined1 *)((long)puVar8 + -0x71),
                                (undefined1 *)((long)puVar8 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)puVar8 + -0x71);
            goto code_r0x000100e262b0;
          }
          pbVar16 = (byte *)(long)iVar9;
          pbVar17 = (byte *)(((long)pbVar11 >> 0x20) - (long)pbVar16);
          if ((long)pbVar11 >> 0x20 < (long)pbVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          pbVar12 = pbVar28;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pbVar16,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)pbVar16 - (long)pbVar14);
            func_0x000107c5ec38();
            pbVar23 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)pbVar17 <= (long)pbVar14) {
                pbVar14 = pbVar17;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)puVar8 + -0x6a) = 0;
            *(undefined8 *)((long)puVar8 + -0x70) = 0;
            pbVar14 = (byte *)((long)puVar8 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar11 + 0x10);
          pbVar12 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar25 - (long)pbVar14);
          }
          pbVar17 = pbVar12 + -lVar25;
          if (SBORROW8((long)pbVar12,lVar25)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          pbVar23 = pbVar11;
          pbVar16 = pbVar28;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)pbVar17 <= (long)pbVar14) {
              pbVar14 = pbVar17;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        uVar24 = (ulong)pbVar28 & 0x3fffffffffffffff;
        uVar26 = 0;
        func_0x000100e25bdc((undefined1 *)((long)puVar8 + -0x70),pbVar11,pbVar14,pbVar10,uVar13);
        pbVar10 = (byte *)(ulong)*(byte *)((long)puVar8 + -0x70);
        uVar27 = uVar13;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)((long)puVar8 + -0xc0) = pbVar12;
    *(byte **)((long)puVar8 + -0xb8) = pbVar17;
    *(ulong *)((long)puVar8 + -0xb0) = uVar27;
    *(undefined8 *)((long)puVar8 + -0xa8) = uVar26;
    *(ulong *)((long)puVar8 + -0xa0) = uVar24;
    *(byte **)((long)puVar8 + -0x98) = pbVar23;
    *(undefined1 **)((long)puVar8 + -0x90) = (undefined1 *)((long)puVar8 + -0x10);
    *(undefined **)((long)puVar8 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar23 = *(byte **)(pbVar10 + 0x18);
    bVar32 = pbVar10[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar32 < 3) {
      if (bVar32 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar26 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar26);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar32 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar26 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar26);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar15 = pbVar28;
        if ((pbVar11 == pbVar16) && (pbVar28 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar11 == pbVar17)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar11 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar25);
            pbVar23 = pbVar11;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar29 = *(long *)(pbVar10 + 0x20);
    if (bVar32 < 5) {
      if (bVar32 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar11 == pbVar17)) &&
           (pbVar12 = pbVar28, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar28 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar11;
        pbVar15 = pbVar28;
        if ((pbVar11 != pbVar16) || (pbVar28 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar29 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar29,*(byte **)(pbVar14 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar32 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar32 = pbVar14[8] | (byte)lVar25;
        bVar33 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar34 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar35 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar36 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar37 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar38 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar39 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar40 = pbVar14[0x10] | (byte)lVar29;
        bVar41 = pbVar14[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar42 = pbVar14[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar43 = pbVar14[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar44 = pbVar14[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar45 = pbVar14[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar46 = pbVar14[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar47 = pbVar14[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar48[1] = bVar33;
        auVar48[0] = bVar32;
        auVar48[2] = bVar34;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = bVar40;
        auVar48[9] = bVar41;
        auVar48[10] = bVar42;
        auVar48[0xb] = bVar43;
        auVar48[0xc] = bVar44;
        auVar48[0xd] = bVar45;
        auVar48[0xe] = bVar46;
        auVar48[0xf] = bVar47;
        auVar4[1] = bVar33;
        auVar4[0] = bVar32;
        auVar4[2] = bVar34;
        auVar4[3] = bVar35;
        auVar4[4] = bVar36;
        auVar4[5] = bVar37;
        auVar4[6] = bVar38;
        auVar4[7] = bVar39;
        auVar4[8] = bVar40;
        auVar4[9] = bVar41;
        auVar4[10] = bVar42;
        auVar4[0xb] = bVar43;
        auVar4[0xc] = bVar44;
        auVar4[0xd] = bVar45;
        auVar4[0xe] = bVar46;
        auVar4[0xf] = bVar47;
        auVar48 = NEON_ext(auVar48,auVar4,8,1);
        if (CONCAT17(bVar39 | auVar48[7],
                     CONCAT16(bVar38 | auVar48[6],
                              CONCAT15(bVar37 | auVar48[5],
                                       CONCAT14(bVar36 | auVar48[4],
                                                CONCAT13(bVar35 | auVar48[3],
                                                         CONCAT12(bVar34 | auVar48[2],
                                                                  CONCAT11(bVar33 | auVar48[1],
                                                                           bVar32 | auVar48[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar32 = pbVar14[8] | (byte)lVar25;
      bVar33 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar34 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar35 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar36 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar37 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar38 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar39 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar40 = pbVar14[0x10] | (byte)lVar29;
      bVar41 = pbVar14[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar42 = pbVar14[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar43 = pbVar14[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar44 = pbVar14[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar45 = pbVar14[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar46 = pbVar14[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar47 = pbVar14[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar2[1] = bVar33;
      auVar2[0] = bVar32;
      auVar2[2] = bVar34;
      auVar2[3] = bVar35;
      auVar2[4] = bVar36;
      auVar2[5] = bVar37;
      auVar2[6] = bVar38;
      auVar2[7] = bVar39;
      auVar2[8] = bVar40;
      auVar2[9] = bVar41;
      auVar2[10] = bVar42;
      auVar2[0xb] = bVar43;
      auVar2[0xc] = bVar44;
      auVar2[0xd] = bVar45;
      auVar2[0xe] = bVar46;
      auVar2[0xf] = bVar47;
      auVar3[1] = bVar33;
      auVar3[0] = bVar32;
      auVar3[2] = bVar34;
      auVar3[3] = bVar35;
      auVar3[4] = bVar36;
      auVar3[5] = bVar37;
      auVar3[6] = bVar38;
      auVar3[7] = bVar39;
      auVar3[8] = bVar40;
      auVar3[9] = bVar41;
      auVar3[10] = bVar42;
      auVar3[0xb] = bVar43;
      auVar3[0xc] = bVar44;
      auVar3[0xd] = bVar45;
      auVar3[0xe] = bVar46;
      auVar3[0xf] = bVar47;
      auVar48 = NEON_ext(auVar2,auVar3,8,1);
      lVar25 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    pbVar10 = *(byte **)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar26 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar26);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar30 = *(undefined1 **)((long)puVar8 + -0x90);
    uVar31 = *(undefined8 *)((long)puVar8 + -0x88);
    uVar24 = *(ulong *)((long)puVar8 + -0xa0);
    pbVar23 = *(byte **)((long)puVar8 + -0x98);
    uVar27 = *(ulong *)((long)puVar8 + -0xb0);
    uVar26 = *(undefined8 *)((long)puVar8 + -0xa8);
    pbVar12 = *(byte **)((long)puVar8 + -0xc0);
    pbVar17 = *(byte **)((long)puVar8 + -0xb8);
    puVar8 = (undefined8 *)((long)puVar8 + -0x80);
  } while( true );
}



/* Entry: 102910174; end: 1029101bb;  */

void FUN_102910174(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10daf2180,0x16,2);
  uRam0000000113804d70 = uStack_38;
  uRam0000000113804d68 = uStack_40;
  uRam0000000113804d80 = uStack_28;
  uRam0000000113804d78 = uStack_30;
  uRam0000000113804d90 = uStack_18;
  uRam0000000113804d88 = uStack_20;
  return;
}



/* Entry: 1029101bc; end: 10291028f;  */

/* WARNING: Removing unreachable block (ram,0x00010291028c) */

void FUN_1029101bc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102912310();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102910290; end: 10291035b;  */

void FUN_102910290(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000102912310();
    (*pcVar4)(&lStack_50,1,&UNK_11056b8b8,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 10291035c; end: 1029103a3;  */

void FUN_10291035c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1029103a4; end: 1029103d3;  */

undefined1  [16] FUN_1029103a4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1029103d4; end: 102910407;  */

void FUN_1029103d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}


