/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022ad5ec; end: 1022ad637;  */

void FUN_1022ad5ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022ad634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Entry: 1022ad638; end: 1022ad67f;  */

void FUN_1022ad638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022ad67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ad680; end: 1022ad6f3;  */

void FUN_1022ad680(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x168) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022ad6f4,0,0);
  return;
}



/* Entry: 1022ad6f4; end: 1022ae0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ad6f4(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar19 = *(long *)(unaff_x22 + 0x148);
  *(undefined **)(unaff_x22 + 0x128) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(unaff_x22 + 0xc0) = unaff_x22 + 0x128;
  func_0x000103bc291c(FUN_1022b1b1c,unaff_x22 + 0xb0,FUN_1022ae428,0);
  lVar11 = *(long *)(lVar19 + _DAT_112ff4298);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *(undefined **)(unaff_x22 + 0x170) = puVar2;
  uVar3 = *(undefined8 *)(lVar11 + _DAT_112ff4420);
  lVar19 = ((undefined8 *)(lVar11 + _DAT_112ff4420))[1];
  uStack_90 = *(undefined8 *)(lVar11 + _DAT_112ff4408);
  lVar8 = ((undefined8 *)(lVar11 + _DAT_112ff4408))[1];
  uStack_98 = *(undefined8 *)(lVar11 + _DAT_112ff4410);
  lVar23 = ((undefined8 *)(lVar11 + _DAT_112ff4410))[1];
  puVar22 = (undefined8 *)(unaff_x22 + 0xf8);
  *puVar22 = 0;
  plVar21 = (long *)(unaff_x22 + 0x130);
  *plVar21 = 0;
  *(undefined8 *)(unaff_x22 + 0x100) = 0;
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar22;
  *(long **)(unaff_x22 + 0xa8) = plVar21;
  func_0x000107c61434(lVar23);
  func_0x000107c61434(lVar19);
  func_0x000107c61434(lVar8);
  func_0x000103bc2390(0x1022b1b24,unaff_x22 + 0x90,FUN_1022ae4d0,0);
  func_0x0001000d224c(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar15 = uVar14;
  func_0x000107c4263c();
  func_0x000107c615e8(uVar14);
  if ((int)uVar15 != 0) {
    func_0x000107c6142c(lVar23);
    func_0x000107c6142c(lVar8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x178) = uVar15;
    func_0x000103bd5d30(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar15);
    func_0x000107c61174(puVar2);
    func_0x000103bd5a20(uVar15,PTR___swiftEmptyArrayStorage_11034f1c8,puVar2,0,0,0,0,0,0);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar15;
    func_0x0001000d224c(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar15 = 0;
    if (lVar19 != 0) {
      func_0x000107c5fadc(uVar3,lVar19);
      func_0x000107c6142c(lVar19);
      uVar15 = uVar3;
    }
    *(long *)(unaff_x22 + 0x188) = *(long *)(unaff_x22 + 0x100);
    if (*(long *)(unaff_x22 + 0x100) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar22;
      func_0x000107c5fadc(uVar3);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar4 = uVar14;
    func_0x000107c5169c();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 400) = uVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(uVar14);
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x140;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_1022ae0dc;
    lVar19 = unaff_x22 + 0x50;
    func_0x000107c61448(lVar19,1);
    puVar2 = &UNK_1104ef688;
    func_0x000107c613fc(&UNK_1104ef688,0x20,7);
    puVar22 = (undefined8 *)(unaff_x22 + 200);
    *puVar22 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    *(long *)(puVar2 + 0x18) = lVar19;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x1022b1b2c;
    *(undefined **)(unaff_x22 + 0xf0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x1022b2008;
    *(undefined **)(unaff_x22 + 0xe0) = &UNK_1104ef6a0;
    func_0x000107c60bc4(puVar22);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c61174();
    func_0x000107c61574(uVar3);
    func_0x000107c5dc64(uVar4);
    func_0x000107c60bd0(puVar22);
    lVar19 = unaff_x22 + 0x50;
    goto LAB_1022ae0bc;
  }
  lVar16 = *plVar21;
  if (lVar16 != 0) {
    if (lVar19 == 0) {
      func_0x000107c61174(lVar16);
    }
    else {
      uVar1 = *(undefined4 *)(lVar11 + _DAT_112ff43f8);
      lVar20 = *(long *)(lVar11 + _DAT_112ff43e8);
      if (lVar20 == 0) {
        func_0x000107c61434(lVar19);
        func_0x000107c61174(lVar16);
        lVar6 = 0;
      }
      else {
        func_0x000107c61434(lVar19);
        func_0x000107c61174(lVar16);
        lVar6 = lVar20;
        func_0x000107c61434(lVar20);
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar20);
      }
      lVar20 = *(long *)(unaff_x22 + 0x158);
      uVar15 = uVar3;
      func_0x000107c5fadc(uVar3,lVar19);
      func_0x000107c6142c(lVar19);
      func_0x000107e66168(uVar1,lVar6,uVar15,*(undefined8 *)(lVar20 + _DAT_112e7a748),lVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c43c94();
    func_0x000107c61170(lVar16);
  }
  uStack_a8 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar20 = *(long *)(unaff_x22 + 0x100);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x1a8) = lVar20;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar15;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  if (lVar16 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar14,1,1,lVar6);
LAB_1022adc64:
    lStack_d0 = 0;
    uVar18 = 0;
  }
  else {
    lVar6 = lVar16;
    func_0x000107c42ed0();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5ee94(*(undefined8 *)(unaff_x22 + 0x168));
      func_0x000107c61170(lVar6);
    }
    uVar18 = (ulong)(lVar6 == 0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar14,uVar18,1,lVar6);
    lVar6 = lVar16;
    func_0x000107c42ee8();
    func_0x000107c61180();
    if (lVar6 == 0) goto LAB_1022adc64;
    lStack_d0 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  uVar14 = *(undefined8 *)(lVar11 + _DAT_112ff43c8);
  lVar6 = ((undefined8 *)(lVar11 + _DAT_112ff43c8))[1];
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  if (*(char *)(lVar11 + _DAT_112ff43f0) == '\x01') {
    func_0x000107c61434(lVar6);
    func_0x000107c5eea0(uVar12);
    lVar11 = 0;
    func_0x000107c5eea4();
    lVar10 = 0;
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar12,0,1,lVar11);
    if (lVar16 == 0) goto LAB_1022add4c;
LAB_1022add0c:
    func_0x000107c42c98();
    func_0x000107c61180();
    if (lVar16 == 0) goto LAB_1022add4c;
    lStack_d8 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
    if (lVar20 == 0) goto LAB_1022add40;
LAB_1022add5c:
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(uStack_a8,lVar20);
  }
  else {
    lVar11 = 0;
    func_0x000107c5eea4();
    lVar10 = 1;
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar12,1,1,lVar11);
    func_0x000107c61434(lVar6);
    if (lVar16 != 0) goto LAB_1022add0c;
LAB_1022add4c:
    lStack_d8 = 0;
    lVar10 = 0;
    if (lVar20 != 0) goto LAB_1022add5c;
LAB_1022add40:
    func_0x000107c61174(puVar2);
    uStack_a8 = 0;
  }
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(uVar15,PTR___sSSN_11034da80);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,puVar9);
  if (lVar8 == 0) {
    uStack_90 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_90,lVar8);
    func_0x000107c6142c(lVar8);
  }
  if (lVar23 == 0) {
    uStack_98 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_98,lVar23);
    func_0x000107c6142c(lVar23);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar23 = *(long *)(lVar8 + -8);
  pcVar13 = *(code **)(lVar23 + 0x30);
  uVar12 = uVar17;
  (*pcVar13)(uVar17,1,lVar8);
  uVar4 = 0;
  if ((int)uVar12 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar23 + 8))(uVar17,lVar8);
    uVar4 = uVar12;
  }
  if (uVar18 == 0) {
    lStack_d0 = 0;
    if (lVar19 != 0) goto LAB_1022ade5c;
LAB_1022adea0:
    uVar3 = 0;
    if (lVar6 != 0) goto LAB_1022ade78;
LAB_1022adea8:
    uVar14 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_d0,uVar18);
    func_0x000107c6142c(uVar18);
    if (lVar19 == 0) goto LAB_1022adea0;
LAB_1022ade5c:
    func_0x000107c5fadc(uVar3,lVar19);
    func_0x000107c6142c(lVar19);
    if (lVar6 == 0) goto LAB_1022adea8;
LAB_1022ade78:
    func_0x000107c5fadc(uVar14,lVar6);
    func_0x000107c6142c(lVar6);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = uVar17;
  (*pcVar13)(uVar17,1,lVar8);
  if ((int)uVar12 == 1) {
    uVar12 = 0;
    if (lVar10 == 0) goto LAB_1022adf14;
LAB_1022aded4:
    func_0x000107c5fadc(lStack_d8,lVar10);
    func_0x000107c6142c(lVar10);
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar23 + 8))(uVar17,lVar8);
    if (lVar10 != 0) goto LAB_1022aded4;
LAB_1022adf14:
    lStack_d8 = 0;
  }
  lVar19 = *(long *)(unaff_x22 + 0x158);
  puVar9 = PTR_PTR_1126bf820;
  func_0x000107c610f8();
  func_0x000107c48728();
  *(undefined **)(unaff_x22 + 0x1b8) = puVar9;
  func_0x000107c61170(lStack_d8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lStack_d0);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  lVar19 = *(long *)(lVar19 + _DAT_112e7a7a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar19 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar19;
    func_0x000107c516a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar19);
  }
  *(long *)(unaff_x22 + 0x1c0) = lVar8;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x138;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1022ae268;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_1022ae800();
  lVar19 = unaff_x22 + 0x10;
LAB_1022ae0bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(lVar19);
  return;
}



/* Entry: 1022ae0dc; end: 1022ae147;  */

void FUN_1022ae0dc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = *(long *)(lVar2 + 0x70);
  if (*(long *)(lVar2 + 0x70) == 0) {
    *(undefined8 *)(lVar2 + 0x1a0) = *(undefined8 *)(lVar2 + 0x140);
    pcVar1 = FUN_1022ae148;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1022ae1dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ae148; end: 1022ae1db;  */

void FUN_1022ae148(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001022ae1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 1022ae1dc; end: 1022ae267;  */

void FUN_1022ae1dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x180));
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001022ae264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ae268; end: 1022ae2d3;  */

void FUN_1022ae268(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0x138);
    pcVar1 = FUN_1022ae2d4;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1022ae368;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ae2d4; end: 1022ae367;  */

void FUN_1022ae2d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022ae364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 1022ae368; end: 1022ae3f3;  */

void FUN_1022ae368(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022ae3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ae3f4; end: 1022ae427;  */

void FUN_1022ae3f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *param_3;
    *param_3 = param_1;
    func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1022ae428; end: 1022ae42b;  */

void FUN_1022ae428(void)

{
  return;
}



/* Entry: 1022ae42c; end: 1022ae4cf;  */

/* WARNING: Possible PIC construction at 0x0001022ae470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ae474) */

void FUN_1022ae42c(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar1 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    func_0x000107c6142c(uVar1);
    puVar2 = PTR_PTR_1126af4c0;
    func_0x000107c61168(PTR_PTR_1126af4c0);
    lVar3 = param_1;
    func_0x000107c6148c(param_1,puVar2);
    if (lVar3 != 0) {
      func_0x000107c615f0(param_1);
    }
    lVar4 = *param_3;
    *param_3 = lVar3;
  }
  else {
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1022ae4d0; end: 1022ae4d3;  */

void FUN_1022ae4d0(void)

{
  return;
}



/* Entry: 1022ae4d4; end: 1022ae7ff;  */

/* WARNING: Possible PIC construction at 0x0001022ae58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ae610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ae7e0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae7d0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae7a0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae790) */
/* WARNING: Removing unreachable block (ram,0x0001022ae6d0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae6e8) */
/* WARNING: Removing unreachable block (ram,0x0001022ae590) */
/* WARNING: Removing unreachable block (ram,0x0001022ae668) */
/* WARNING: Removing unreachable block (ram,0x0001022ae594) */
/* WARNING: Removing unreachable block (ram,0x0001022ae670) */
/* WARNING: Removing unreachable block (ram,0x0001022ae5b0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae678) */
/* WARNING: Removing unreachable block (ram,0x0001022ae6ec) */
/* WARNING: Removing unreachable block (ram,0x0001022ae6b0) */
/* WARNING: Removing unreachable block (ram,0x0001022ae614) */
/* WARNING: Removing unreachable block (ram,0x000107c61454) */
/* WARNING: Removing unreachable block (ram,0x00010bdc008c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ae4d4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = -0x2fffffffffffffe4;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107c466bc(puVar2);
  }
  else {
    lVar3 = *(long *)(param_3 + _DAT_112e7a748);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126af4c0;
      func_0x000107c61168(PTR_PTR_1126af4c0);
      plVar1 = (long *)(param_1 + _DAT_112ff55c0);
      param_1 = *plVar1;
      lVar3 = plVar1[1];
      func_0x000107c61434(lVar3);
      func_0x000107c5fadc(param_1,lVar3);
      func_0x000107c6142c(lVar3);
      func_0x000107c430e8(puVar2);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022ae800; end: 1022ae8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ae800(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (param_2 != 0) {
    ppuVar2 = &puStack_60;
    func_0x000107c4da88(param_2,param_2,*(undefined8 *)(param_3 + _DAT_112e7a7c8));
    func_0x000107c61180();
    puVar1 = &UNK_1104ef6d8;
    func_0x000107c613fc(&UNK_1104ef6d8,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    uStack_40 = 0x1022b1b34;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x101e0ded0;
    puStack_48 = &UNK_1104ef6f0;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar3 = param_2;
    func_0x000107c5c320(param_2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c3e924(lVar3);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1022ae900; end: 1022aeaff;  */

void FUN_1022ae900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar3 = &UNK_1104ef728;
  func_0x000107c613fc(&UNK_1104ef728,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1104ef750;
  func_0x000107c613fc(&UNK_1104ef750,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1022b1b3c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1022b1b44;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x101dc2098;
  puStack_78 = &UNK_1104ef768;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104ef7a0;
  func_0x000107c613fc(&UNK_1104ef7a0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_1104ef7c8;
  func_0x000107c613fc(&UNK_1104ef7c8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1022b1b64;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_70 = (code *)0x1022b2000;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_1104ef7e0;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x78,0x236,0x36,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022aeafc);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x78,0x23d,0x1c,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022aeb00);
  (*pcVar2)();
}



/* Entry: 1022aeb00; end: 1022af0c7;  */

void FUN_1022aeb00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_2 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c466bc();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar2);
  return;
}



/* Entry: 1022af0c8; end: 1022af0e7;  */

void FUN_1022af0c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022af0e8,0,0);
  return;
}



/* Entry: 1022af0e8; end: 1022af183;  */

void FUN_1022af0e8(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    FUN_1022b1bf4(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e7a818,&UNK_10da84be8);
                    /* WARNING: Could not recover jumptable at 0x0001022af138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1022af184;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_1022afe48();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1022af184; end: 1022af1fb;  */

void FUN_1022af184(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001022af1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(lVar1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022af1fc,0,0);
  return;
}



/* Entry: 1022af1fc; end: 1022af263;  */

void FUN_1022af1fc(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1022af264;
  func_0x000107c61448(unaff_x22 + 0x50,1);
  FUN_1022af844();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1022af264; end: 1022af2cf;  */

void FUN_1022af264(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0x70);
  if (*(long *)(lVar2 + 0x70) == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0x90);
    pcVar1 = FUN_1022af2d0;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1022af308;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022af2d0; end: 1022af33b;  */

void FUN_1022af2d0(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001022af304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 1022af33c; end: 1022af7cb;  */

/* WARNING: Possible PIC construction at 0x0001022af6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022af6bc) */

void FUN_1022af33c(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uStack_88;
  undefined *apuStack_80 [4];
  
  if (param_1 != 0) {
    func_0x000107c61174();
    uVar4 = param_1;
    func_0x000107c40808();
    if (param_3 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar5 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar5 = param_3;
      }
      func_0x000107c60480();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
    if (uVar4 == uVar5) {
      FUN_1022b1bf4(puVar12,0x112e7a810,&UNK_10da84be0);
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022af7bc);
        (*pcVar3)();
      }
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          if ((param_3 & 0xc000000000000001) == 0) {
            if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1022af6f8);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(param_3 + uVar5 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar5;
            FUN_1022b0808(uVar5,param_3,&PTR_PTR_1126aff40,0x112d62390);
          }
          uVar7 = param_1;
          func_0x000107c4d9a4(param_1);
          func_0x000107c61180();
          func_0x000107c60234(apuStack_80);
          func_0x000107c615e8(uVar7);
          uVar8 = 0;
          FUN_1022b1ed4(0,0x112d50c78,&PTR_PTR_1126b25c0);
          puVar9 = &uStack_88;
          ppuVar13 = apuStack_80;
          func_0x000107c6147c(puVar9,ppuVar13,PTR___sypN_11034f1a8 + 8,uVar8,6);
          uVar8 = uStack_88;
          if (((ulong)puVar9 & 1) == 0) {
            puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c610f8();
            uVar8 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            func_0x000107c466bc();
            func_0x000107c61170(uVar8);
            uVar8 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
            func_0x000107c613f8();
            *puVar9 = puVar12;
            goto code_r0x000107c61454;
          }
          uVar7 = uVar6;
          func_0x000107c45214();
          func_0x000107c61180();
          uVar10 = uVar7;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
          func_0x000107c61174();
          puVar11 = puVar12;
          func_0x000107c61558();
          uVar7 = uVar10;
          ppuVar14 = ppuVar13;
          apuStack_80[0] = puVar12;
          func_0x000100029284();
          uVar16 = (ulong)~(uint)ppuVar14 & 1;
          lVar1 = *(long *)(puVar12 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(puVar12 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1022af6fc);
            (*pcVar3)();
          }
          if (*(long *)(puVar12 + 0x18) < lVar1) {
            FUN_1022b11fc(lVar1,puVar11,0x112e7a810,&UNK_10da84be0);
            uVar7 = uVar10;
            ppuVar15 = ppuVar13;
            func_0x000100029284();
            if (((uint)ppuVar14 & 1) != ((uint)ppuVar15 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1022af7cc);
              (*pcVar3)();
            }
joined_r0x0001022af60c:
            if (((ulong)ppuVar14 & 1) != 0) goto LAB_1022af3d4;
LAB_1022af57c:
            puVar12 = apuStack_80[0];
            *(ulong *)(apuStack_80[0] + (uVar7 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_80[0] + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
            puVar2 = (ulong *)(*(long *)(apuStack_80[0] + 0x30) + uVar7 * 0x10);
            *puVar2 = uVar10;
            puVar2[1] = (ulong)ppuVar13;
            *(undefined8 *)(*(long *)(apuStack_80[0] + 0x38) + uVar7 * 8) = uVar8;
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar6);
            if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1022af700);
              (*pcVar3)();
            }
            *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
          }
          else {
            if (((ulong)puVar11 & 1) == 0) {
              func_0x0001022b109c(0x112e7a810,&UNK_10da84be0);
              goto joined_r0x0001022af60c;
            }
            if (((ulong)ppuVar14 & 1) == 0) goto LAB_1022af57c;
LAB_1022af3d4:
            puVar12 = apuStack_80[0];
            uVar17 = *(undefined8 *)(*(long *)(apuStack_80[0] + 0x38) + uVar7 * 8);
            *(undefined8 *)(*(long *)(apuStack_80[0] + 0x38) + uVar7 * 8) = uVar8;
            func_0x000107c61170(uVar8);
            func_0x000107c6142c(ppuVar13);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar17);
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = puVar12;
      func_0x000107c61434(puVar12);
      func_0x000107c61450(param_4);
      func_0x000107c6142c(puVar12);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c61170(param_1);
  }
  puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c466bc();
  func_0x000107c61170(uVar8);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar9 = puVar12;
code_r0x000107c61454:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar8);
  return;
}



/* Entry: 1022af7cc; end: 1022af843;  */

/* WARNING: Possible PIC construction at 0x0001022af828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022af82c) */

void FUN_1022af7cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1022af844; end: 1022afe47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022af844(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_2 >> 0x3e == 0) {
    func_0x000107c61434(param_2);
    func_0x000107c605f8();
    uVar6 = param_2;
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    func_0x000107c61434(param_2);
    uVar2 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    func_0x000107c60458(uVar6,uVar2);
    func_0x000107c6142c(param_2);
  }
  uVar2 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  uVar1 = uVar6;
  func_0x000107c5fc48(uVar6,uVar2);
  func_0x000107c6142c(uVar6);
  uVar7 = *(undefined8 *)(param_3 + _DAT_112e7a748);
  uVar9 = *(undefined8 *)(param_3 + _DAT_112e7a770);
  uVar10 = *(undefined8 *)(param_3 + _DAT_112e7a758);
  uVar2 = *(undefined8 *)(param_3 + _DAT_112e7a760);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_3 + _DAT_112e7a768);
  uVar8 = *(undefined8 *)(param_3 + _DAT_112e7a7c8);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
  puVar4 = &UNK_1104ef9a8;
  func_0x000107c613fc(&UNK_1104ef9a8,0x20,7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_70 = FUN_1022b1cec;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101dc0188;
  puStack_78 = &UNK_1104ef9c0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107e614a0(uVar1,0,uVar7,uVar9,uVar10,uVar2,uVar11,uVar8,1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1022afe48; end: 1022aff93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022afe48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112e7a748);
  uVar6 = *(undefined8 *)(param_3 + _DAT_112e7a750);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
  uVar2 = param_2;
  func_0x000107e666f0(param_2,uVar5,uVar6,uVar1,*(undefined8 *)(param_3 + _DAT_112e7a7c8));
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_1104ef9f8;
  func_0x000107c613fc(&UNK_1104ef9f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_50 = 0x1022b1cf4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100bcda3c;
  puStack_58 = &UNK_1104efa10;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5dc64(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022aff94; end: 1022b0343;  */

/* WARNING: Possible PIC construction at 0x0001022b0300: Changing call to branch */

void FUN_1022aff94(undefined *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar12 = param_1;
    func_0x000107c40808();
    if (0 < (long)puVar12) {
      lStack_e0 = lVar11;
      puStack_d8 = param_1;
      lStack_d0 = param_3;
      func_0x000107c600f4(lVar13);
      func_0x000100e15a08();
      func_0x000107c601c0(auStack_80,lVar3,puVar12);
      puVar2 = PTR___sypN_11034f1a8;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_68 != 0) {
        func_0x000100102924(auStack_80,auStack_a0);
        func_0x000100102924(auStack_a0,auStack_c8);
        uVar6 = 0;
        FUN_1022b1ed4(0,0x112d63638,&PTR_PTR_1126af4d0);
        plVar7 = &lStack_a8;
        func_0x000107c6147c(plVar7,auStack_c8,puVar2 + 8,uVar6,6);
        lVar11 = lStack_a8;
        if ((((ulong)plVar7 & 1) != 0) && (lStack_a8 != 0)) {
          puVar5 = puVar8;
          func_0x000107c61550();
          if (((int)puVar5 == 0) ||
             (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar4 = puVar8;
              }
              func_0x000107c60480(puVar4);
            }
            puVar5 = (undefined *)0x0;
            func_0x0001022b0b6c(0,puVar4 + 1,1,puVar8);
          }
          uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar8 = puVar5;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x0001022b0b6c(puVar8,uVar1 + 1,1,puVar5);
            uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar11;
        }
        func_0x000107c601c0(auStack_80,lVar3,puVar12);
      }
      (**(code **)(lStack_e0 + 8))(lVar13,lVar3);
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar12 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar12 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar12 = puVar8;
        }
        func_0x000107c60480();
      }
      puVar2 = puStack_d8;
      puVar5 = puStack_d8;
      func_0x000107c40808();
      if (puVar12 == puVar5) {
        **(ulong **)(*(long *)(lStack_d0 + 0x40) + 0x28) = (ulong)puVar8;
        func_0x000107c61450();
        func_0x000107c61170(puVar2);
        return;
      }
      func_0x000107c6142c(puVar8);
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      uVar6 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
      func_0x000107c466bc();
      func_0x000107c61170(uVar6);
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar9 = puVar12;
      param_3 = lStack_d0;
      goto code_r0x000107c61454;
    }
    func_0x000107c61170(param_1);
  }
  puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
  func_0x000107c466bc();
  func_0x000107c61170(uVar6);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar9 = puVar12;
code_r0x000107c61454:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar6);
  return;
}



/* Entry: 1022b0344; end: 1022b03d3;  */

void FUN_1022b0344(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf800;
  func_0x000107c61168();
  func_0x000107c43c54();
  func_0x000107c61180();
  uVar2 = *param_2;
  *param_2 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1022b03d4; end: 1022b0447;  */

undefined1  [16] FUN_1022b03d4(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 != 0) {
    lVar4 = 0;
    uVar5 = uVar3;
    do {
      if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b0444);
        (*pcVar1)();
      }
      if (((long)(lVar4 + uVar5) < -1) ||
         (uVar2 = (long)(lVar4 + uVar5) / 2, (long)uVar3 <= (long)uVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b0448);
        (*pcVar1)();
      }
      lVar6 = *(long *)(param_2 + 0x20 + uVar2 * 0x10);
      if (lVar6 == param_1) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar2;
        return auVar7;
      }
      if (lVar6 < param_1) {
        lVar4 = uVar2 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (lVar4 < (long)uVar5);
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 1022b0448; end: 1022b04cf;  */

undefined1  [16] FUN_1022b0448(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  func_0x000107c61558();
  if ((uVar4 & 1) == 0) {
    FUN_1022b1640();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    func_0x000107c610b8(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1022b04d0);
  (*pcVar3)();
}



/* Entry: 1022b04d0; end: 1022b0807;  */

ulong FUN_1022b04d0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b05a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b05a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103bc1934(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103bc1934(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000002f,0x800000010f07ffa0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b066c);
  (*pcVar2)();
}



/* Entry: 1022b0808; end: 1022b0a3b;  */

ulong FUN_1022b0808(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b08ec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b08f0);
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
  FUN_1022b1ed4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b09c4);
  (*pcVar2)();
}



/* Entry: 1022b0a3c; end: 1022b0cb3;  */

undefined * FUN_1022b0a3c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b0b6c);
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
    puVar3 = (undefined *)0x112e7a820;
    func_0x0001000285a8(0x112e7a820,&UNK_10da84bf0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e7a828;
    func_0x0001000285a8(0x112e7a828,&UNK_10da84bf8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1022b0cb4; end: 1022b0d43;  */

undefined *
FUN_1022b0cb4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x0001022b09c4(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1022b0d44; end: 1022b0e5b;  */

long FUN_1022b0d44(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022b0e58);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022b0e5c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1022b1ed4(0,0x112d63638,&PTR_PTR_1126af4d0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1022b1ed4(0,0x112d63638,&PTR_PTR_1126af4d0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022b0e54);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1022b0e5c; end: 1022b0f27;  */

undefined8 FUN_1022b0e5c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001022b109c(0x112e7a7f8,&UNK_10da84b98);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x0001022b1490(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 1022b0f28; end: 1022b11fb;  */

void FUN_1022b0f28(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b1010);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1022b11fc(lVar6,param_4 & 1,0x112e7a7f8,&UNK_10da84b98);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b0fd8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001022b109c(0x112e7a7f8,&UNK_10da84b98);
    lVar6 = *unaff_x20;
    goto joined_r0x0001022b1038;
  }
  lVar6 = *unaff_x20;
joined_r0x0001022b1038:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b109c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1022b11fc; end: 1022b163f;  */

void FUN_1022b11fc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1022b145c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b148c);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1022b145c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1490);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1022b1640; end: 1022b1653;  */

/* WARNING: Removing unreachable block (ram,0x0001022b0a5c) */
/* WARNING: Removing unreachable block (ram,0x0001022b0a6c) */
/* WARNING: Removing unreachable block (ram,0x0001022b0b68) */
/* WARNING: Removing unreachable block (ram,0x0001022b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001022b0a80) */
/* WARNING: Removing unreachable block (ram,0x0001022b0af8) */
/* WARNING: Removing unreachable block (ram,0x0001022b0b00) */
/* WARNING: Removing unreachable block (ram,0x0001022b0b04) */
/* WARNING: Removing unreachable block (ram,0x0001022b0b08) */
/* WARNING: Removing unreachable block (ram,0x0001022b0b18) */

undefined * FUN_1022b1640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e7a820;
    func_0x0001000285a8(0x112e7a820,&UNK_10da84bf0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112e7a828;
  func_0x0001000285a8(0x112e7a828,&UNK_10da84bf8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 1022b1654; end: 1022b179f;  */

long FUN_1022b1654(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b17a0);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar8 = 0;
    uVar10 = 0x3f - uVar6 >> 6;
    lVar9 = lVar4;
    while( true ) {
      while (uVar7 == 0) {
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b179c);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar9) {
          uVar7 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar9 = uVar10 - 1;
          param_3 = lVar8;
          goto LAB_1022b1760;
        }
        uVar7 = puVar5[lVar9];
      }
      lVar8 = lVar8 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar9 * 0x200);
      if (lVar8 == param_3) break;
      func_0x000107c61174();
      lVar4 = lVar9;
      param_2 = param_2 + 1;
    }
    func_0x000107c61174();
  }
LAB_1022b1760:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar9;
  param_1[4] = uVar7;
  return param_3;
}



/* Entry: 1022b17a0; end: 1022b17ef;  */

undefined * FUN_1022b17a0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e7a7f8,&UNK_10da84b98);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022b1ce8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022b1cec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1022b17f0; end: 1022b180f;  */

void FUN_1022b17f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128322f8);
  return;
}



/* Entry: 1022b1810; end: 1022b18af;  */

int FUN_1022b1810(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1022b18b0; end: 1022b190f;  */

void FUN_1022b18b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022b1910; end: 1022b198f;  */

void FUN_1022b1910(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1022b1990;
  plVar6[0x18] = lVar4;
  plVar6[0x19] = lVar7;
  plVar6[0x16] = lVar1;
  plVar6[0x17] = lVar2;
  plVar5 = (long *)0x250;
  func_0x000107c615b8();
  plVar6[0x1a] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1022ab9b0;
  plVar5[0x31] = lVar3;
  plVar5[0x32] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022abef8,0,0);
  return;
}



/* Entry: 1022b1990; end: 1022b19cb;  */

void FUN_1022b1990(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022b19c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022b19cc; end: 1022b19ff;  */

void FUN_1022b19cc(void)

{
  long unaff_x20;
  
  FUN_1022ab3c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,1,1);
  return;
}



/* Entry: 1022b1a00; end: 1022b1a2b;  */

void FUN_1022b1a00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022b1a2c; end: 1022b1a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b1a2c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e7a728;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + _DAT_112e7a728,auStack_58,0x20,0);
  lVar8 = *(long *)(lVar1 + lVar2);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar3 = lVar5;
    uVar6 = uVar7;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
      func_0x000107c61174(uVar4);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar8);
      func_0x000107c61428(lVar1 + lVar2,auStack_58,0x21,0);
      func_0x000107c61434(uVar7);
      FUN_1022b0e5c(lVar5,uVar7);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(lVar5);
      FUN_1022aa970();
      func_0x000107c61170(uVar4);
      return;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_58);
  FUN_1022aa970();
  return;
}



/* Entry: 1022b1a38; end: 1022b1abb;  */

undefined8 FUN_1022b1a38(undefined8 param_1)

{
  (*(code *)&DAT_103bc0520)();
  return param_1;
}



/* Entry: 1022b1abc; end: 1022b1ad3;  */

long FUN_1022b1abc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1022b1ad4; end: 1022b1b1b;  */

undefined8 FUN_1022b1ad4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e7a800;
  func_0x0001000285a8(0x112e7a800,&UNK_10da84ba8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1022b1b1c; end: 1022b1b43;  */

void FUN_1022b1b1c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = **(long **)(unaff_x20 + 0x10);
    **(long **)(unaff_x20 + 0x10) = param_1;
    func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1022b1b44; end: 1022b1b63;  */

void FUN_1022b1b44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022b1b64; end: 1022b1b73;  */

void FUN_1022b1b64(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c466bc();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar4,uVar2);
  return;
}



/* Entry: 1022b1b74; end: 1022b1bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b1b74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c50098(uVar2,param_2,*(undefined8 *)(unaff_x20 + 0x20),0,0);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112e7a710);
  *(undefined8 *)(lVar1 + _DAT_112e7a710) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 1022b1bdc; end: 1022b1bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b1bdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c466bc();
    func_0x000107c61170(uVar3);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar5;
    func_0x000107c61454(lVar1,uVar3);
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112e7a710);
  *(undefined8 *)(lVar2 + _DAT_112e7a710) = 0;
  func_0x000107c615e8(uVar3);
  if (param_1 == 0) {
    if (param_2 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      uVar3 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c466bc();
      func_0x000107c61170(uVar3);
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar6 = puVar5;
      goto LAB_1022af02c;
    }
  }
  else if (param_2 == 0) {
    lVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c5b198();
    func_0x000107c61180();
    **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = lVar4;
    func_0x000107c61450(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(param_1);
    return;
  }
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar7 = (long *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *plVar7 = param_2;
  func_0x000107c614b0(param_2);
LAB_1022af02c:
  func_0x000107c61454(lVar1,uVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1022b1bf4; end: 1022b1ceb;  */

undefined * FUN_1022b1bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022b1ce8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022b1cec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1022b1cec; end: 1022b1d0b;  */

void FUN_1022b1cec(undefined *param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar15 = param_1;
    }
    func_0x000107c60480();
  }
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  else {
    puVar6 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar6 = puVar3;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar12;
  if (puVar15 != puVar6) {
    func_0x000107c610f8();
    uVar16 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107c466bc();
    func_0x000107c61170(uVar16);
    uVar16 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar13 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar13 = puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar16);
    return;
  }
  puVar6 = (undefined *)0x112e7a818;
  FUN_1022b1bf4(puVar7,0x112e7a818,&UNK_10da84be8);
  if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afe34);
    (*pcVar5)();
  }
  if (puVar15 != (undefined *)0x0) {
    lVar18 = 4;
    do {
      uVar17 = lVar18 - 4;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afd48);
          (*pcVar5)();
        }
        uVar8 = *(ulong *)(puVar3 + lVar18 * 8);
        func_0x000107c61174();
        puVar12 = puVar6;
      }
      else {
        uVar8 = uVar17;
        puVar12 = puVar3;
        FUN_1022b0808(uVar17,puVar3,&PTR_PTR_1126af4d0,0x112d63638);
      }
      uVar9 = uVar8;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afe38);
        (*pcVar5)();
      }
      uVar10 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afd50);
          (*pcVar5)();
        }
        uVar17 = *(ulong *)(param_1 + lVar18 * 8);
        func_0x000107c61174();
      }
      else {
        FUN_1022b0808(uVar17,param_1,&PTR_PTR_1126aff40,0x112d62390);
      }
      puVar11 = puVar7;
      func_0x000107c61558();
      uVar9 = uVar10;
      puVar6 = puVar12;
      func_0x000100029284();
      uVar14 = (ulong)~(uint)puVar6 & 1;
      lVar1 = *(long *)(puVar7 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afd4c);
        (*pcVar5)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar1) {
        FUN_1022b11fc(lVar1,puVar11,0x112e7a818,&UNK_10da84be8);
        uVar9 = uVar10;
        puVar11 = puVar12;
        func_0x000100029284();
        if (((uint)puVar6 & 1) != ((uint)puVar11 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afe48);
          (*pcVar5)();
        }
joined_r0x0001022afd0c:
        uVar14 = (ulong)puVar6 & 1;
        puVar6 = puVar11;
        if (uVar14 != 0) goto LAB_1022afb10;
LAB_1022afc60:
        *(ulong *)(puVar7 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar10;
        puVar2[1] = (ulong)puVar12;
        *(ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 8) = uVar17;
        func_0x000107c61170(uVar8);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022afd54);
          (*pcVar5)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        puVar6 = puVar11;
      }
      else {
        if (((ulong)puVar11 & 1) == 0) {
          puVar11 = &UNK_10da84be8;
          func_0x0001022b109c(0x112e7a818);
          goto joined_r0x0001022afd0c;
        }
        puVar11 = puVar6;
        if (((ulong)puVar6 & 1) == 0) goto LAB_1022afc60;
LAB_1022afb10:
        uVar16 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar9 * 8);
        *(ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 8) = uVar17;
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar16);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 - (long)puVar15 != 4);
  }
  **(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)();
  return;
}



/* Entry: 1022b1d0c; end: 1022b1ed3;  */

void FUN_1022b1d0c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1dec);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  puVar1 = (undefined8 *)(lVar8 + 0x20 + param_1 * 0x10);
  uVar7 = 0x112e7a828;
  func_0x0001000285a8(0x112e7a828,&UNK_10da84bf8);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1df0);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1df4);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3 * 2;
    puVar3 = (undefined8 *)(lVar8 + 0x20 + param_2 * 0x10);
    if (puVar2 != puVar3 || puVar3 + lVar4 * 2 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1df8);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    puVar1[1] = param_5;
    func_0x000107c61434(param_5);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1022b1dfc);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 1022b1ed4; end: 1022b1f67;  */

void FUN_1022b1ed4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022b1f68; end: 1022b2017;  */

void FUN_1022b1f68(long param_1,long param_2)

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



/* Entry: 1022b2018; end: 1022b2027; -[_TtC26SCMemoriesClientGenManager32MemoriesClientGenManagerServices memoriesClientGenManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b2018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e7a830));
  return;
}



/* Entry: 1022b2028; end: 1022b2073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b2028(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a830) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022b2074; end: 1022b20d3; -[_TtC26SCMemoriesClientGenManager32MemoriesClientGenManagerServices init] */

void FUN_1022b2074(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesClientGenManager.MemoriesClientGenManagerServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b20a0);
  (*pcVar1)();
}



/* Entry: 1022b20d4; end: 1022b20e3; -[_TtC26SCMemoriesClientGenManager32MemoriesClientGenManagerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b20d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a830));
  return;
}



/* Entry: 1022b20e4; end: 1022b2103;  */

void FUN_1022b20e4(void)

{
  func_0x000107c61168(&PTR_PTR_112832470);
  return;
}



/* Entry: 1022b2104; end: 1022b3293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b2104(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14,undefined8 param_15,long param_16,long param_17)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  uStack_c8 = param_13;
  lStack_c0 = param_14;
  uStack_d0 = param_12;
  lVar6 = 0;
  uStack_150 = param_1;
  uStack_f8 = param_7;
  func_0x000107c5f804();
  lStack_168 = *(long *)(lVar6 + -8);
  lStack_160 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lStack_170 = (long)&puStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  lStack_130 = unaff_x20;
  func_0x0001000285a8(0x112e2fb98,&UNK_10da84c50);
  uStack_148 = param_2;
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar7 = param_2;
  func_0x0001000bda74();
  uStack_d8 = uVar7;
  func_0x000107c61170(param_2);
  uStack_140 = param_4;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uStack_120 = param_6;
  func_0x000107c4cb80();
  func_0x000107c61180();
  uStack_110 = param_8;
  func_0x000107c5b1b4();
  func_0x000107c61180();
  uStack_128 = param_9;
  uStack_178 = param_8;
  func_0x000107c42d48();
  func_0x000107c61180();
  uStack_138 = param_5;
  uStack_e0 = param_9;
  func_0x000107c42798();
  func_0x000107c61180();
  uStack_118 = param_10;
  uStack_180 = param_5;
  func_0x000107c4cbc4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_3 + _DAT_112ff4488);
  uStack_188 = param_10;
  lStack_158 = param_3;
  func_0x000107c61174();
  uStack_108 = param_11;
  uStack_1a0 = uVar7;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar7 = uStack_d0;
  uStack_190 = param_11;
  func_0x000107c4cbc0();
  func_0x000107c61180();
  uVar8 = uStack_c8;
  uStack_f0 = uVar7;
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar6 = lStack_c0;
  uStack_198 = uVar8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lStack_e8 = lVar6;
  if (lVar6 != 0) {
    lStack_1b0 = param_17;
    lStack_1b8 = param_16;
    uStack_1a8 = param_15;
    func_0x000107c51694();
    func_0x000107c61180();
    uVar21 = *(undefined8 *)(param_16 + _DAT_112ff5600);
    uVar22 = *(undefined8 *)(param_17 + _DAT_1130806b8);
    lVar9 = 0;
    uStack_100 = param_15;
    FUN_1022b17f0();
    lStack_1c0 = lVar9;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112e7a710) = 0;
    *(undefined8 *)(lVar9 + _DAT_112e7a718) = uStack_d8;
    func_0x000107c61580(uStack_d8,2);
    func_0x000107c6157c(uVar21);
    func_0x000107c6157c(uVar22);
    uVar10 = uStack_f8;
    func_0x000107c61174();
    uStack_1d8 = uVar10;
    func_0x000107c61174();
    uStack_f8 = param_6;
    func_0x000107c61174();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_1e0 = param_4;
    func_0x0001003d21d8();
    *(undefined **)(lVar9 + _DAT_112e7a720) = puVar11;
    puVar11 = puVar12;
    FUN_1022b17a0();
    uVar4 = uStack_e0;
    uVar13 = uStack_178;
    uVar14 = uStack_180;
    uVar15 = uStack_188;
    uVar16 = uStack_190;
    uVar8 = uStack_198;
    uVar7 = uStack_1a0;
    *(undefined **)(lVar9 + _DAT_112e7a728) = puVar11;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112e7a730);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)(lVar9 + _DAT_112e7a738) = 0;
    *(undefined **)(lVar9 + _DAT_112e7a740) = puVar12;
    *(undefined8 *)(lVar9 + _DAT_112e7a748) = param_4;
    *(undefined8 *)(lVar9 + _DAT_112e7a750) = param_6;
    *(undefined8 *)(lVar9 + _DAT_112e7a758) = uVar10;
    *(undefined8 *)(lVar9 + _DAT_112e7a760) = uStack_178;
    *(undefined8 *)(lVar9 + _DAT_112e7a768) = uStack_e0;
    *(undefined8 *)(lVar9 + _DAT_112e7a770) = uStack_180;
    *(undefined8 *)(lVar9 + _DAT_112e7a778) = uStack_188;
    *(undefined8 *)(lVar9 + _DAT_112e7a780) = uStack_1a0;
    *(undefined8 *)(lVar9 + _DAT_112e7a788) = uStack_190;
    *(undefined8 *)(lVar9 + _DAT_112e7a790) = uStack_f0;
    *(undefined8 *)(lVar9 + _DAT_112e7a798) = uStack_198;
    *(long *)(lVar9 + _DAT_112e7a7a0) = lStack_e8;
    *(undefined8 *)(lVar9 + _DAT_112e7a7a8) = uStack_100;
    *(undefined8 *)(lVar9 + _DAT_112e7a7b0) = uVar21;
    *(undefined8 *)(lVar9 + _DAT_112e7a7b8) = uVar22;
    puVar12 = PTR_PTR_1126ae810;
    uStack_1d0 = uVar21;
    uStack_1c8 = uVar22;
    func_0x000107c610f8();
    puStack_1f0 = puVar12;
    func_0x000107c61174();
    uStack_1a0 = uVar7;
    func_0x000107c6157c(uVar21);
    func_0x000107c6157c(uVar22);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar10 = uStack_1e0;
    func_0x000107c61174(uStack_1e0);
    func_0x000107c61174();
    uStack_1e0 = uVar13;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174();
    uStack_1e8 = uVar14;
    func_0x000107c61174();
    uStack_188 = uVar15;
    func_0x000107c61174();
    uVar15 = uStack_f0;
    uStack_178 = uVar16;
    func_0x000107c615f0(uStack_f0);
    func_0x000107c61174();
    lVar3 = lStack_e8;
    uStack_180 = uVar8;
    func_0x000107c615f0(lStack_e8);
    func_0x000107c61174();
    puVar12 = puStack_1f0;
    func_0x000107c453e4();
    lVar2 = lStack_160;
    lVar19 = lStack_168;
    lVar6 = lStack_170;
    *(undefined **)(lVar9 + _DAT_112e7a7c0) = puVar12;
    (**(code **)(lStack_168 + 0x68))
              (lStack_170,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0
               ,lStack_160);
    puVar12 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar7 = 0xd000000000000047;
    func_0x000107c5fadc(0xd000000000000047,0x800000010f07fef0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar7);
    (**(code **)(lVar19 + 8))(lVar6,lVar2);
    *(undefined **)(lVar9 + _DAT_112e7a7c8) = puVar12;
    lStack_70 = lStack_1c0;
    plVar18 = &lStack_78;
    lStack_78 = lVar9;
    func_0x000107c61154(plVar18,PTR_s_init_1125d9248);
    uVar8 = uStack_d8;
    func_0x000107c61574(uStack_d8);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uStack_f8);
    uVar7 = uStack_1d8;
    func_0x000107c61170(uStack_1d8);
    func_0x000107c61170(uStack_1e0);
    func_0x000107c615e8(uStack_e0);
    func_0x000107c61170(uStack_1e8);
    func_0x000107c61170(uStack_188);
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61170(uStack_178);
    func_0x000107c615e8(uVar15);
    func_0x000107c61170(uStack_180);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uStack_100);
    func_0x000107c61574(uStack_1d0);
    func_0x000107c61574(uStack_1c8);
    puVar11 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar12 = &UNK_1104efa98;
    func_0x000107c613fc(&UNK_1104efa98,0x18,7);
    *(long **)(puVar12 + 0x10) = plVar18;
    uStack_88 = 0x1022b330c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1022b3294;
    puStack_90 = &UNK_1104efab0;
    ppuVar17 = &puStack_a8;
    puStack_80 = puVar12;
    func_0x000107c60bc4();
    puVar12 = puStack_80;
    func_0x000107c61174(plVar18);
    func_0x000107c61574(puVar12);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar17);
    lVar19 = 0;
    FUN_1022b20e4();
    lVar6 = lVar19;
    func_0x000107c610f8();
    *(undefined **)(lVar6 + _DAT_112e7a830) = puVar11;
    puVar12 = PTR_s_init_1125d9248;
    lStack_b8 = lVar6;
    lStack_b0 = lVar19;
    func_0x000107c61174();
    plVar20 = &lStack_b8;
    func_0x000107c61154(plVar20,puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(lStack_158);
    func_0x000107c61170(lStack_1b8);
    func_0x000107c61170(lStack_1b0);
    func_0x000107c61170(uStack_150);
    func_0x000107c61170(uStack_148);
    func_0x000107c61170(uStack_140);
    func_0x000107c61170(uStack_138);
    func_0x000107c61170(uStack_120);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(uStack_128);
    func_0x000107c61170(uStack_118);
    func_0x000107c61170(uStack_108);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(lStack_c0);
    func_0x000107c61170(uStack_1a8);
    *(long **)(lStack_130 + 0x10) = plVar20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1022b29d4);
  (*pcVar5)();
}



/* Entry: 1022b3294; end: 1022b32cb;  */

void FUN_1022b3294(long param_1)

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



/* Entry: 1022b32cc; end: 1022b32db;  */

void FUN_1022b32cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022b32dc; end: 1022b32ff;  */

void FUN_1022b32dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022b3300; end: 1022b332f;  */

void FUN_1022b3300(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1022b3330; end: 1022b33ab;  */

void FUN_1022b3330(undefined8 param_1)

{
  if (lRam0000000112e7a888 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6c6bc0);
  return;
}



/* Entry: 1022b33ac; end: 1022b33b7;  */

void FUN_1022b33ac(long param_1,long param_2)

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



/* Entry: 1022b33b8; end: 1022b33cb;  */

void FUN_1022b33b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1022b33cc; end: 1022b3437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b33cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1022b37c0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e7a9b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1022b3438; end: 1022b34a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b3438(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a9b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022b34a4; end: 1022b3503; -[_TtC53FaceTaggingPermissionTrayScopedFactoryServiceProvider39FaceTaggingPermissionTrayScopedServices init] */

void FUN_1022b34a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingPermissionTrayScopedFactoryServiceProvider.FaceTaggingPermissionTrayScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b34d0);
  (*pcVar1)();
}



/* Entry: 1022b3504; end: 1022b3513; -[_TtC53FaceTaggingPermissionTrayScopedFactoryServiceProvider39FaceTaggingPermissionTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b3504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a9b8));
  return;
}



/* Entry: 1022b3514; end: 1022b357f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b3514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104efd10;
  func_0x000107c613fc(&UNK_1104efd10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1022b3858,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1022b3580; end: 1022b361b;  */

void FUN_1022b3580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104efc20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104efc20;
  return;
}



/* Entry: 1022b361c; end: 1022b3653;  */

void FUN_1022b361c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1022b3654; end: 1022b365b;  */

undefined8 FUN_1022b3654(void)

{
  return 0x1b;
}



/* Entry: 1022b365c; end: 1022b378f;  */

void FUN_1022b365c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104efd38;
  func_0x000107c613fc(&UNK_1104efd38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022b3830;
  func_0x00010058fa64(FUN_1022b3830,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022b3790; end: 1022b37bf;  */

undefined ** FUN_1022b3790(void)

{
  return &PTR_DAT_1130665e0;
}



/* Entry: 1022b37c0; end: 1022b37df;  */

void FUN_1022b37c0(void)

{
  func_0x000107c61168(&PTR_PTR_112832530);
  return;
}



/* Entry: 1022b37e0; end: 1022b382f;  */

undefined1  [16] FUN_1022b37e0(void)

{
  return ZEXT816(0x1104efc70);
}



/* Entry: 1022b3830; end: 1022b3857;  */

void FUN_1022b3830(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1022b3858; end: 1022b385b;  */

void FUN_1022b3858(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022b385c; end: 1022b3a5b;  */

void FUN_1022b385c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7aa20,&UNK_10da84f70);
  puVar1 = &UNK_1104efd78;
  func_0x000107c613fc(&UNK_1104efd78,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1022b3a5c,puVar1);
  return;
}



/* Entry: 1022b3a5c; end: 1022b3a7f;  */

/* WARNING: Possible PIC construction at 0x0001022b3a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b3a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b3a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b3a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b3a2c) */
/* WARNING: Removing unreachable block (ram,0x0001022b3a1c) */
/* WARNING: Removing unreachable block (ram,0x0001022b3a0c) */
/* WARNING: Removing unreachable block (ram,0x0001022b3a3c) */

void FUN_1022b3a5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_1104efdc0;
  func_0x000107c613fc(&UNK_1104efdc0,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112e7aa28;
  func_0x0001000285a8(0x112e7aa28,&UNK_10da84fb8);
  func_0x000107c613fc();
  uVar9 = 0x1022b3e4c;
  func_0x0001000841fc(0x1022b3e4c,puVar7,uVar8);
  func_0x000100084214(&UNK_10da84f80,0x35,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1022b3a80; end: 1022b3def;  */

void FUN_1022b3a80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e7aa30,&UNK_10da84fc0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e7aa38,&UNK_10da84fd0);
  puVar2 = &UNK_1104efde8;
  func_0x000107c613fc(&UNK_1104efde8,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar8 = 0x1022b3e7c;
  func_0x0001000823a8(0x1022b3e7c,puVar2);
  pcVar3 = "FaceTaggingPermissionTrayEntryPointWrapperServiceProvider";
  func_0x000100082720("FaceTaggingPermissionTrayEntryPointWrapperServiceProvider",0x39,2);
  FUN_1022b4de8();
  func_0x000100082720("FaceTaggingPermissionTrayScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1022b361c;
  func_0x0001000823a8(FUN_1022b361c,0);
  func_0x000100082720("FaceTaggingPermissionTrayScopedServicesCleanupRelayServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e7aa40,&UNK_10da84fc8);
  puVar2 = &UNK_1104efe10;
  func_0x000107c613fc(&UNK_1104efe10,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1022b3eb0;
  func_0x0001000823a8(FUN_1022b3eb0,puVar2);
  func_0x000100082720("FaceTaggingPermissionTrayScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e7a9c0,&UNK_10da84d00);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1022b3ebc;
  func_0x0001000823a8(0x1022b3ebc,pcVar5);
  func_0x000100082720("FaceTaggingPermissionTrayScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e7a9b0,&UNK_10da84cf0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1022b3ec4;
  func_0x0001000823a8(0x1022b3ec4,uVar6);
  func_0x000100082720("FaceTaggingPermissionTrayScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104efe38;
  func_0x000107c613fc(&UNK_1104efe38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1022b3ecc;
  func_0x0001000823a8(0x1022b3ecc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("FaceTaggingPermissionTrayScopeEntryPointProvider",0x30,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1022b3df0; end: 1022b3eaf;  */

void FUN_1022b3df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022b3eb0; end: 1022b3ed3;  */

void FUN_1022b3eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1022b45a4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("FaceTaggingPermissionTrayScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022b3ed4; end: 1022b4373;  */

void FUN_1022b3ed4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_1022b44f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  FUN_1022b6970(0);
  func_0x000107c613fc();
  uVar1 = uStack_68;
  FUN_1022b5dc8(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,
                uStack_a8);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar9 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar1);
  FUN_1022b5dec();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1022b4374; end: 1022b43ef;  */

void FUN_1022b4374(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1022b43f0; end: 1022b43f7;  */

undefined8 FUN_1022b43f0(void)

{
  return 0x1b;
}



/* Entry: 1022b43f8; end: 1022b447b;  */

void FUN_1022b43f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1022b4534,param_2,FUN_1022b4538,param_2,FUN_1022b4560,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


