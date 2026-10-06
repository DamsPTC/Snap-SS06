/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ea7764; end: 101ea78eb;  */

/* WARNING: Possible PIC construction at 0x000101ea77ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ea77b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea7764(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  func_0x000107c615f0(uVar1);
  func_0x000104880bc0(0x3fd0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101ea78ec; end: 101ea7bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea78ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  if (param_6 == 0) {
    func_0x0001000285a8(0x112e371f0,&UNK_10da20f70);
    lStack_a0 = 0;
    func_0x000100854cb0(&lStack_a0);
    return;
  }
  lVar2 = *(long *)(param_6 + _DAT_112e370e8);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    lVar3 = param_1;
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c3f3ac();
    func_0x000107c61170(lVar3);
    if ((int)lVar1 != 0) {
      func_0x000107c2babc(param_1);
      func_0x000107c61180();
      func_0x000107c57508(lVar2);
      goto LAB_101ea7b44;
    }
    func_0x000107c615e8(lVar2);
  }
  if (*(char *)(param_6 + _DAT_112e37108) == '\x01') {
    func_0x0001000d224c(&lStack_a0);
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar2 = *(long *)(param_6 + _DAT_112e370b8);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c61434(lVar2);
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar2);
    }
    lVar2 = lStack_a0;
    func_0x000107c49884();
    lVar1 = param_1;
    param_1 = lVar3;
  }
  else {
    func_0x0001000d224c(&lStack_a0);
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar2 = *(long *)(param_6 + _DAT_112e370b8);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c61434(lVar2);
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar2);
    }
    func_0x000109128604();
    lVar2 = lStack_a0;
    func_0x000107c4e9bc();
    lVar1 = param_1;
    param_1 = lVar3;
  }
  func_0x000107c61180();
  func_0x000107c615e8(lStack_a0);
  func_0x000107c61170(lVar1);
LAB_101ea7b44:
  func_0x000107c61170(param_1);
  func_0x000107c615f0(lVar2);
  func_0x0001000285a8(0x112e371f0,&UNK_10da20f70);
  lStack_a0 = lVar2;
  func_0x000100854cb0(&lStack_a0);
  func_0x000107c61170(param_6);
  func_0x000107c615ec(lVar2,2);
  return;
}



/* Entry: 101ea7bb8; end: 101ea7c5f;  */

void FUN_101ea7bb8(long param_1)

{
  long in_x5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(in_x5 + 0x10,auStack_58,0,0);
  in_x5 = in_x5 + 0x10;
  func_0x000107c61618();
  if (in_x5 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(param_1);
      FUN_101ea7c60();
      func_0x000107c61170(in_x5);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 101ea7c60; end: 101ea85fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea7c60(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 *param_5,long param_6,ulong param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  double dVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar21;
  long unaff_x20;
  double dVar22;
  double dVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uStack_118;
  long lStack_110;
  undefined1 uStack_fc;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e0;
  ulong uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  double dStack_b0;
  double dStack_a8;
  
  puVar7 = param_5;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar8 = *puVar7;
  func_0x000107c61174(uVar8);
  uVar9 = 0xd000000000000026;
  func_0x000100029b28(0xd000000000000026,0x800000010f017b20);
  func_0x000107c61170(uVar8);
  lVar6 = _DAT_112e370e8;
  uStack_118 = (undefined4)(param_7 >> 0x20);
  if (*(undefined8 **)(unaff_x20 + _DAT_112e370e8) != (undefined8 *)0x0 &&
      param_5 == *(undefined8 **)(unaff_x20 + _DAT_112e370e8)) {
    if (((uint)param_9 & 0xff) != 1) {
      puVar10 = param_5;
      func_0x000107c5ab48();
      puVar11 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar12 = &UNK_1104944c0;
      func_0x000107c613fc(&UNK_1104944c0,0x40,7);
      *(undefined **)(puVar12 + 0x10) = puVar11;
      *(long *)(puVar12 + 0x18) = param_6;
      *(int *)(puVar12 + 0x20) = (int)param_7;
      *(undefined4 *)(puVar12 + 0x24) = uStack_118;
      *(undefined8 **)(puVar12 + 0x28) = param_8;
      puVar12[0x30] = (char)puVar10;
      *(undefined8 **)(puVar12 + 0x38) = param_5;
      pcStack_c0 = (code *)0x101eae050;
      uStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      pcStack_d0 = (code *)&UNK_100ab47f8;
      puStack_c8 = &UNK_1104944d8;
      puVar10 = &uStack_e0;
      puStack_b8 = puVar12;
      func_0x000107c60bc4(puVar10);
      puVar11 = puStack_b8;
      func_0x000107c615f0(param_5);
      func_0x000107c61574(puVar11);
      uStack_e0 = (undefined *)param_6;
      uStack_d8 = param_7;
      pcStack_d0 = (code *)param_8;
      func_0x000107c51be0(param_5);
      func_0x000107c60bd0(puVar10);
    }
    goto LAB_101ea85a8;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e370d0);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(&uStack_e0);
  func_0x000107c61574(uVar8);
  lVar17 = (long)uStack_e0;
  if (uStack_e0 == (undefined *)0x0) {
    FUN_101ea8c98(param_5,param_6,param_7,param_8,param_9);
    goto LAB_101ea85a8;
  }
  puVar10 = (undefined8 *)(unaff_x20 + _DAT_112e370f8);
  uVar8 = *puVar10;
  dVar22 = 0.0;
  *(undefined1 *)(puVar10 + 4) = 0;
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[2] = 0;
  func_0x000107c615e8(uVar8);
  cVar3 = *(char *)(unaff_x20 + _DAT_112e370e0);
  if (cVar3 == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e37100);
    func_0x000107c6157c(uVar8);
    func_0x000100075034(&uStack_e0,FUN_101ea85fc,0,PTR___ss6UInt64VN_11034f048);
    func_0x000107c61574(uVar8);
    lStack_110 = (long)uStack_e0;
  }
  else {
    lStack_110 = 0;
  }
  func_0x000107c59178(param_5);
  func_0x000107c5765c(param_5);
  puStack_c8 = (undefined *)lVar17;
  pcStack_d0 = (code *)param_5;
  if (cVar3 == '\0') {
LAB_101ea7efc:
    func_0x000107c5751c(param_5);
    puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar11);
    dStack_b0 = param_3;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    func_0x000107c4a02c();
    if (((ulong)puVar11 & 1) != 0) goto LAB_101ea7efc;
    uVar8 = 0;
    FUN_101eadf58(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    uVar13 = 0;
    func_0x000100f6e330(0);
    func_0x000107c5ffe4(&dStack_b0,0x101eaddec,&uStack_e0,uVar13);
    func_0x000107c61170(uVar8);
    param_4 = dStack_a8;
  }
  dVar5 = dStack_b0;
  if (*(char *)(unaff_x20 + _DAT_112e37108) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e37088);
    func_0x000107c3fa04(uVar8);
    func_0x000107c61180();
    func_0x000109128084();
    dVar23 = dVar22;
    dVar20 = param_2;
    func_0x000107c615e8(uVar8);
    dVar26 = param_2;
    dVar27 = dVar22;
  }
  else {
    dVar26 = 1280.0;
    dVar27 = 720.0;
    dVar23 = dVar22;
    dVar20 = param_2;
  }
  puVar10 = param_5;
  func_0x000107c4e9a0();
  func_0x000107c61180();
  puVar14 = puVar10;
  func_0x000109122928();
  func_0x000107c61170(puVar10);
  if ((int)puVar14 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e37088);
    func_0x000107c3fa04(uVar8);
    func_0x000107c61180();
    func_0x0001091280ec();
    func_0x000107c615e8(uVar8);
    dVar26 = dVar20;
    dVar27 = dVar23;
  }
  dVar22 = dVar26;
  dVar23 = dVar27;
  if (*(char *)(unaff_x20 + _DAT_112e37098) == '\x01') {
    pdVar1 = (double *)(unaff_x20 + _DAT_112e37090);
    if ((((*(char *)(pdVar1 + 2) == '\x01') ||
         (dVar20 = *pdVar1, ((ulong)dVar20 & 0x7ff0000000000000) == 0x7ff0000000000000)) ||
        (dVar20 <= 0.0)) ||
       (((dVar21 = pdVar1[1], ((ulong)dVar21 & 0x7ff0000000000000) == 0x7ff0000000000000 ||
         (dVar21 <= 0.0)) || (dVar20 == dVar21)))) {
      dVar20 = dVar5;
      dVar21 = param_4;
    }
    if ((((ulong)ABS(dVar27) < 0x7ff0000000000000) && ((ulong)ABS(dVar26) < 0x7ff0000000000000)) &&
       ((0.0 < dVar27 &&
        ((((0.0 < dVar26 && (dVar27 != dVar26)) &&
          ((((ulong)dVar20 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0)) &&
         ((0.0 < dVar20 && (((ulong)dVar21 & 0x7ff0000000000000) != 0x7ff0000000000000)))))))) {
      dVar25 = dVar27;
      dVar5 = dVar26;
      if (dVar26 < dVar27 == dVar21 < dVar20) {
        dVar25 = dVar26;
        dVar5 = dVar27;
      }
      if (dVar20 != dVar21) {
        dVar26 = dVar25;
        dVar27 = dVar5;
      }
      if (0.0 < dVar21) {
        dVar22 = dVar26;
        dVar23 = dVar27;
      }
    }
  }
  else {
    dVar22 = dVar27;
    dVar23 = dVar26;
    if (dVar5 <= param_4) {
      dVar22 = dVar26;
      dVar23 = dVar27;
    }
  }
  func_0x000107c57d0c(dVar23,dVar22,param_5);
  lStack_f8 = param_6;
  puStack_f0 = param_8;
  if (((uint)param_9 & 0xff) == 1) {
    if (*(long *)(unaff_x20 + lVar6) == 0) {
      lStack_f8 = *(long *)PTR__kCMTimeZero_110348670;
      uVar2 = *(uint *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_118 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      puStack_f0 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    else {
      func_0x000107c41014(&uStack_e0);
      lStack_f8 = (long)uStack_e0;
      uStack_118 = (undefined4)(uStack_d8 >> 0x20);
      puStack_f0 = (undefined8 *)pcStack_d0;
      uVar2 = (uint)uStack_d8;
    }
    param_7 = (ulong)uVar2;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e37190);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(&uStack_e0);
  func_0x000107c61574(uVar8);
  uVar4 = 0;
  if (uStack_e0._4_1_ == '\0') {
    uVar4 = (undefined4)uStack_e0;
  }
  lVar15 = *(long *)(unaff_x20 + lVar6);
  if (lVar15 == 0) {
    uStack_fc = 1;
  }
  else {
    func_0x000107c5ab48();
    uStack_fc = (undefined1)lVar15;
    if (*(long *)(unaff_x20 + lVar6) != 0) {
      uStack_e0 = *(undefined **)PTR__kCMTimeZero_110348670;
      pcStack_d0 = *(code **)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_d8 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c597e4();
      if (*(long *)(unaff_x20 + lVar6) != 0) {
        uStack_e0 = *(undefined **)PTR__kCMTimeInvalid_110348648;
        pcStack_d0 = *(code **)(PTR__kCMTimeInvalid_110348648 + 0x10);
        uStack_d8 = *(ulong *)(PTR__kCMTimeInvalid_110348648 + 8);
        func_0x000107c545ac();
        if (*(long *)(unaff_x20 + lVar6) != 0) {
          func_0x000107c5be70();
        }
      }
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112e37168) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_112e37158) = 0;
  puVar11 = &UNK_110493f48;
  puVar16 = puVar11;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar16 + 0x10);
  puVar12 = &UNK_1104943d0;
  func_0x000107c613fc(&UNK_1104943d0,0x20,7);
  *(undefined **)(puVar12 + 0x10) = puVar16;
  *(long *)(puVar12 + 0x18) = lVar17;
  puVar16 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_c0 = FUN_101eade20;
  uStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  pcStack_d0 = (code *)&UNK_1000f6b44;
  puStack_c8 = &UNK_1104943e8;
  puVar10 = &uStack_e0;
  puStack_b8 = puVar12;
  func_0x000107c60bc4(puVar10);
  puVar12 = puStack_b8;
  func_0x000107c61174();
  func_0x000107c61574(puVar12);
  func_0x0001000d76cc("MediaPlayerController.logPlayerViewBinding",puVar10);
  func_0x000107c60bd0(puVar10);
  *(undefined8 *)(unaff_x20 + _DAT_112e37150) = 0;
  func_0x000107c4ee24(param_5);
  lVar15 = _DAT_112e370f0;
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e370f0));
  iVar24 = *(int *)(unaff_x20 + _DAT_112e37128);
  puVar10 = param_5;
  func_0x000107c4e9b0();
  func_0x000107c61180();
  puVar14 = puVar10;
  func_0x000107c5c900((double)((1000.0 / (float)iVar24) / 1000.0));
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar18 = puVar11;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar18 + 0x10);
  puVar12 = &UNK_110494420;
  func_0x000107c613fc(&UNK_110494420,0x28,7);
  *(undefined **)(puVar12 + 0x10) = puVar18;
  *(undefined8 **)(puVar12 + 0x18) = param_5;
  *(long *)(puVar12 + 0x20) = lStack_110;
  pcStack_c0 = (code *)0x101eade28;
  uStack_e0 = puVar16;
  uStack_d8 = 0x42000000;
  pcStack_d0 = FUN_101ea8c4c;
  puStack_c8 = &UNK_110494438;
  puVar10 = &uStack_e0;
  puStack_b8 = puVar12;
  func_0x000107c60bc4(puVar10);
  puVar12 = puStack_b8;
  func_0x000107c615f0(param_5);
  func_0x000107c61574(puVar12);
  puVar19 = puVar14;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(puVar10);
  func_0x000107c61170(puVar14);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar15);
  *(undefined8 **)(unaff_x20 + lVar15) = puVar19;
  func_0x000107c61170(uVar8);
  func_0x000107c5a604(uVar4,param_5);
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar12 = &UNK_110494470;
  func_0x000107c613fc(&UNK_110494470,0x40,7);
  *(undefined **)(puVar12 + 0x10) = puVar11;
  *(long *)(puVar12 + 0x18) = lStack_f8;
  *(int *)(puVar12 + 0x20) = (int)param_7;
  *(undefined4 *)(puVar12 + 0x24) = uStack_118;
  *(undefined8 **)(puVar12 + 0x28) = puStack_f0;
  puVar12[0x30] = uStack_fc;
  *(undefined8 **)(puVar12 + 0x38) = param_5;
  pcStack_c0 = (code *)0x101eae04c;
  uStack_e0 = puVar16;
  uStack_d8 = 0x42000000;
  pcStack_d0 = (code *)&UNK_100ab47f8;
  puStack_c8 = &UNK_110494488;
  puVar10 = &uStack_e0;
  puStack_b8 = puVar12;
  func_0x000107c60bc4(puVar10);
  puVar11 = puStack_b8;
  func_0x000107c615f0(param_5);
  func_0x000107c61574(puVar11);
  uStack_e0 = (undefined *)lStack_f8;
  uStack_d8 = CONCAT44(uStack_118,(int)param_7);
  pcStack_d0 = (code *)puStack_f0;
  func_0x000107c51be0(param_5);
  func_0x000107c61170(lVar17);
  func_0x000107c60bd0(puVar10);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 **)(unaff_x20 + lVar6) = param_5;
  func_0x000107c615f0(param_5);
  func_0x000107c615e8(uVar8);
LAB_101ea85a8:
  func_0x000107c61428(puVar7,&uStack_e0,0,0);
  uVar8 = *puVar7;
  func_0x000107c61174(uVar8);
  func_0x000100069b5c(uVar9);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101ea85fc; end: 101ea860f;  */

void FUN_101ea85fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = lVar1 + 1;
  *param_1 = lVar1 + 1;
  return;
}



/* Entry: 101ea8610; end: 101ea866f;  */

void FUN_101ea8610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c5751c(param_6,param_7,param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}



/* Entry: 101ea8670; end: 101ea8ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea8670(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  byte bVar15;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112e37150;
  if (param_2 == 0) {
    return;
  }
  if ((*(long *)(param_2 + _DAT_112e37150) == 0) &&
     (lVar2 = param_1, func_0x000107c2bab0(), lVar2 == 1)) {
    bVar15 = *(byte *)(param_2 + _DAT_112e37158) ^ 1;
  }
  else {
    bVar15 = 0;
  }
  lVar2 = param_1;
  func_0x000107c2bab0();
  *(long *)(param_2 + lVar3) = lVar2;
  func_0x000107c2bab4(&puStack_a8,param_1);
  uVar12 = uStack_a0;
  func_0x000107c60a3c(&puStack_a8);
  lVar3 = param_1;
  func_0x000107c2bab0();
  if ((bVar15 & 1) != 0) goto LAB_101ea8aac;
  if ((uVar12 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    func_0x000107c2bab4(&puStack_a8,param_1);
    FUN_101eabad0(puStack_a8,uStack_a0,puStack_98,lVar3 == 2);
  }
  lVar2 = _DAT_112e37158;
  if (*(char *)(param_2 + _DAT_112e37158) == '\x01') {
    uVar13 = param_3;
    func_0x000107c4e9a0();
    func_0x000107c61180();
    uVar4 = uVar13;
    func_0x000109122928();
    func_0x000107c61170(uVar13);
    if (((int)uVar4 == 0) || (0x7fefffffffffffff < (uVar12 & 0x7fffffffffffffff)))
    goto LAB_101ea8800;
    *(undefined1 *)(param_2 + lVar2) = 0;
    if (lVar3 == 2) {
      puVar11 = (ulong *)(param_2 + _DAT_112e37168);
      uVar12 = *puVar11;
      if ((long)uVar12 < 1) goto LAB_101ea8aac;
      goto LAB_101ea8820;
    }
    func_0x000107c5bba0(param_3);
    puVar11 = (ulong *)(param_2 + _DAT_112e37168);
    uVar12 = *puVar11;
    if ((long)uVar12 < 1) goto LAB_101ea8aac;
LAB_101ea8850:
    if (2 < uVar12) goto LAB_101ea8aac;
    *puVar11 = 0;
  }
  else {
LAB_101ea8800:
    puVar11 = (ulong *)(param_2 + _DAT_112e37168);
    uVar12 = *puVar11;
    if ((long)uVar12 < 1) goto LAB_101ea8aac;
    if (lVar3 != 2) goto LAB_101ea8850;
LAB_101ea8820:
    *puVar11 = uVar12 - 1;
    if (uVar12 - 1 != 0) goto LAB_101ea8aac;
  }
  if (*(char *)(param_2 + _DAT_112e370e0) == '\x01') {
    puVar9 = &UNK_110493f48;
    puVar5 = puVar9;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    puVar6 = &UNK_110494538;
    func_0x000107c613fc(&UNK_110494538,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_2);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar9);
    pcVar8 = "deliverUIEffect(enabled:isCurrent:_:)";
    func_0x0001000c10c0("deliverUIEffect(enabled:isCurrent:_:)");
    func_0x000107c61180();
    puVar7 = &UNK_110494560;
    func_0x000107c613fc(&UNK_110494560,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x101eade68;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(undefined8 *)(puVar7 + 0x20) = 0x101eade70;
    *(undefined **)(puVar7 + 0x28) = puVar9;
    pcStack_88 = (code *)0x101eadfe4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110494578;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar10);
    puVar7 = puStack_80;
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61578(puVar9,2);
    func_0x000107c615e8(pcVar8);
  }
  else {
    pcVar8 = "updatePlayer(_:timestamp:)";
    func_0x0001000c10c0("updatePlayer(_:timestamp:)");
    func_0x000107c61180();
    puVar9 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_2);
    pcStack_88 = FUN_101eade60;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110494500;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c615e8(pcVar8);
    puVar1 = (undefined8 *)(param_2 + _DAT_112e37170);
    pcVar14 = (code *)*puVar1;
    if (pcVar14 != (code *)0x0) {
      uVar13 = puVar1[1];
      func_0x000107c6157c(uVar13);
      (*pcVar14)();
      func_0x000100cd54c8(pcVar14,uVar13);
      uVar13 = *puVar1;
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000100cd54c8(uVar13,uVar4);
    }
  }
  func_0x000107c3fac0(param_3);
LAB_101ea8aac:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101ea8ad4; end: 101ea8bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea8ad4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e37100);
    func_0x000107c6157c(uVar1);
    func_0x0001000c74f0(auStack_50);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101ea8bf8; end: 101ea8c4b;  */

void FUN_101ea8bf8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101ea7180();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101ea8c4c; end: 101ea8c97;  */

void FUN_101ea8c4c(long param_1,undefined8 param_2)

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



/* Entry: 101ea8c98; end: 101ea8d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea8c98(long param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  
  ppuVar3 = &puStack_50;
  plVar1 = (long *)(unaff_x20 + _DAT_112e370f8);
  lVar4 = *plVar1;
  *plVar1 = param_1;
  plVar1[1] = param_2;
  plVar1[2] = param_3;
  plVar1[3] = param_4;
  *(undefined1 *)(plVar1 + 4) = param_5;
  func_0x000107c615f0();
  func_0x000107c615e8(lVar4);
  if (lVar4 == 0) {
    puVar2 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_30 = FUN_101eadd98;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_1000f6b44;
    puStack_38 = &UNK_110494370;
    puStack_28 = puVar2;
    func_0x000107c60bc4(&puStack_50);
    func_0x000107c61574(puStack_28);
    func_0x0001000d76cc("MediaPlayerController.deferPlayerSetup",ppuVar3);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 101ea8d6c; end: 101ea8f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea8d6c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_80;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e370d0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112e370d0);
    func_0x000107c6157c(uVar5);
    func_0x0001000c74f0(&puStack_80);
    func_0x000107c61574(uVar5);
    if (puStack_80 == (undefined *)0x0) {
      func_0x0001000d224c(&puStack_80);
      puVar2 = puStack_80;
      func_0x000107c4e9b4(0,0,0,0);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_80);
      func_0x000107c5a51c(puVar2);
      func_0x000107c5a050(puVar2);
      func_0x000107c52ab8(puVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c6157c(uVar5);
      func_0x000100075034(FUN_101eadda0,&puStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar5);
      func_0x000107c61174(puVar2);
      puVar4 = PTR___sSvN_11034e250;
      func_0x000107c5fb18(&puStack_80,PTR___sSvN_11034e250);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c6142c(puVar4);
    }
    else {
      func_0x000107c61170();
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_112e37120);
    puVar2 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    pcStack_60 = FUN_101eadde4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110494398;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 101ea8f8c; end: 101ea9023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea8f8c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + _DAT_112e370f8);
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = plVar1[2];
      lVar3 = plVar1[3];
      lVar5 = plVar1[1];
      plVar1[1] = 0;
      *plVar1 = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      lVar4 = plVar1[4];
      *(undefined1 *)(plVar1 + 4) = 0;
      FUN_101ea7c60(lVar6,lVar5,lVar2,lVar3,(char)lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar6);
    }
  }
  return;
}



/* Entry: 101ea9024; end: 101ea90df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9024(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112e37188);
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      func_0x000107c5c42c(param_2);
      func_0x000107c61180();
      func_0x000107c61170();
      goto LAB_101ea90a4;
    }
  }
  lVar2 = 0;
LAB_101ea90a4:
  puVar1 = PTR___sSvN_11034e250;
  uStack_50 = param_2;
  func_0x000107c5fb18(&uStack_50,PTR___sSvN_11034e250);
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 101ea90e0; end: 101ea926b;  */

void FUN_101ea90e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101eabad0(param_3,param_4,param_5,0);
    if ((param_6 & 1) != 0) {
      func_0x000107c5bba0(param_7);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ea926c; end: 101ea942f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea926c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar8 = *(long *)(param_1 + _DAT_112e370e8);
  if (lVar8 != 0) {
    func_0x000107c615f0(lVar8);
    func_0x000107c41014(&puStack_80);
    uVar11 = uStack_78;
    func_0x000107c60a3c(&puStack_80);
    lVar3 = lVar8;
    func_0x000107c4e9a0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000109122928();
    func_0x000107c61170(lVar3);
    if ((int)lVar4 == 0 || (uVar11 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      *(undefined1 *)(param_1 + _DAT_112e37158) = 0;
      func_0x000107c5bba0(lVar8);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112e37158) = 1;
      puVar9 = *(undefined **)PTR__kCMTimeZero_110348670;
      uVar2 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
      uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uVar11 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
      uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar5 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_1);
      puVar6 = &UNK_110494330;
      func_0x000107c613fc(&UNK_110494330,0x40,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + 0x18) = puVar9;
      *(int *)(puVar6 + 0x20) = (int)uVar2;
      *(undefined4 *)(puVar6 + 0x24) = uVar1;
      *(undefined8 *)(puVar6 + 0x28) = uVar10;
      puVar6[0x30] = 0;
      *(long *)(puVar6 + 0x38) = lVar8;
      pcStack_60 = FUN_101eae048;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110494348;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c615f0(lVar8);
      func_0x000107c61574(puVar5);
      puStack_80 = puVar9;
      uStack_78 = uVar11;
      puStack_70 = (undefined *)uVar10;
      func_0x000107c51be0(lVar8);
      func_0x000107c60bd0(ppuVar7);
    }
    func_0x000107c615e8(lVar8);
  }
  return;
}



/* Entry: 101ea9430; end: 101ea9457; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController play] */

void FUN_101ea9430(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101ea9178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ea9458; end: 101ea953b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110494290;
  func_0x000107c613fc(&UNK_110494290,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  uStack_50 = 0x101eadd44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104942a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 101ea953c; end: 101ea9563; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController pause] */

void FUN_101ea953c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ea9458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ea9564; end: 101ea9677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9564(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e37088);
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x000109127fbc();
  func_0x000107c615e8(uVar2);
  if ((int)uVar5 != 0) {
    puVar3 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
    pcStack_40 = FUN_101eadd3c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110494258;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61580(puVar3,2);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61578(puVar3,2);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 101ea9678; end: 101ea970f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112e37160) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112e37160) = 1;
      *(undefined1 *)(param_1 + _DAT_112e37158) = 0;
      lVar1 = *(long *)(param_1 + _DAT_112e370e8);
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        func_0x000107c5be70();
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101ea9710; end: 101ea9737; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController teardown] */

void FUN_101ea9710(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ea9564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ea9738; end: 101ea9793; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController getVolume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101ea9738(long param_1)

{
  undefined8 uVar1;
  float afStack_28 [2];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e37190);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(afStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return (double)afStack_28[0];
}



/* Entry: 101ea9794; end: 101ea99ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9794(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e37190);
  puStack_60 = (undefined *)CONCAT44(puStack_60._4_4_,(float)param_1);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(0x101eadd18,&puStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  puVar2 = &UNK_110493f48;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  pcStack_50 = FUN_101eadd24;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110494230;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61580(puVar2,2);
  func_0x000107c615f0(uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61578(puVar2,2);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 101ea99ac; end: 101ea99e3; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController setVolumeWithVolume:] */

void FUN_101ea99ac(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101ea9794(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ea99e4; end: 101ea9ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea99e4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000107c2bb50();
  uVar2 = 1000000000;
  func_0x000107c600d0((double)param_1 / 1000.0);
  puVar3 = &UNK_110493f48;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1104941a0;
  func_0x000107c613fc(&UNK_1104941a0,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(int *)(puVar4 + 0x20) = (int)param_2;
  *(int *)(puVar4 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  uStack_60 = 0x101eadd08;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104941b8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 101ea9ca8; end: 101ea9cf7; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController seekWithTimestampMs:] */

/* WARNING: Possible PIC construction at 0x000101ea9ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ea9ce4) */

void FUN_101ea9ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ea99e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101ea9cf8; end: 101eaa033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ea9cf8(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_110493f48;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110494150;
  func_0x000107c613fc(&UNK_110494150,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined4 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  uStack_60 = 0x101eadcf8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110494168;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(uVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 101eaa034; end: 101eaa0b7; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController setRepeatModeWithRepeatMode:startTimeMs:endTimeMs:] */

/* WARNING: Possible PIC construction at 0x000101eaa094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eaa098) */

void FUN_101eaa034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101ea9cf8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101eaa0b8; end: 101eaa1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eaa0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_110493f48;
  func_0x000107c613fc(&UNK_110493f48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110494088;
  func_0x000107c613fc(&UNK_110494088,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e37120);
  pcStack_60 = FUN_101eadc8c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104940a0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 101eaa1f0; end: 101eab2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eaa1f0(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined1 auStack_150 [8];
  ulong uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined auStack_e8 [24];
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar23 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  puVar4 = (undefined8 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    puStack_f8 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar6 = *puVar5;
    func_0x000107c61174(uVar6);
    uVar7 = 0xd000000000000027;
    func_0x0001000a9a18(0xd000000000000027,0x800000010f017a70);
    func_0x000107c61170(uVar6);
    if ((*(long *)((long)puVar4 + _DAT_112e37148) == 0) ||
       (uVar8 = param_3, func_0x000107c49cec(), (int)uVar8 == 0)) {
      puVar22 = &UNK_1104940d8;
      uStack_110 = uVar7;
      puStack_108 = puVar5;
      func_0x000107c613fc(&UNK_1104940d8,0x38,7);
      func_0x0001000d224c(apuStack_d0);
      lVar9 = lStack_b0;
      uVar7 = uStack_b8;
      func_0x0001000a8868(apuStack_d0,uStack_b8);
      (**(code **)(lVar9 + 8))(puVar22 + 0x10,uVar7,lVar9);
      func_0x0001000834e4(apuStack_d0);
      uVar7 = *(undefined8 *)(puVar22 + 0x28);
      lVar9 = *(long *)(puVar22 + 0x30);
      func_0x0001000c6518(puVar22 + 0x10,uVar7);
      (**(code **)(lVar9 + 0x50))(1,uVar7,lVar9);
      func_0x0001000d224c(apuStack_d0);
      func_0x0001000a8868(apuStack_d0,uStack_b8);
      uVar8 = param_3;
      FUN_101ea393c();
      func_0x0001000834e4(apuStack_d0);
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar9 = 0;
      func_0x00010095c380();
      puVar10 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,puVar4);
      puVar20 = &UNK_110494100;
      func_0x000107c613fc(&UNK_110494100,0x28,7);
      *(undefined **)(puVar20 + 0x10) = puVar10;
      *(long *)(puVar20 + 0x18) = lVar9;
      *(undefined **)(puVar20 + 0x20) = puVar22;
      puVar5 = puVar4;
      func_0x000107c61174();
      puStack_140 = puVar5;
      func_0x000107c6157c(lVar9);
      puStack_f0 = puVar22;
      func_0x000107c6157c(puVar22);
      uStack_130 = uVar8;
      func_0x00010075a04c(0,1,0x101eadc98,puVar20);
      func_0x000107c61574(puVar20);
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      lStack_138 = lVar9;
      func_0x000107c6157c(uVar7);
      if ((ulong)puVar22 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar22) {
          puVar10 = puVar22;
        }
        func_0x000107c60480(puVar10);
      }
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar11 = 0;
      FUN_101eac0f4(0,puVar10 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,FUN_101d72b10,
                    FUN_101d72d5c);
      uVar19 = uVar11 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar19 + 0x10);
      uStack_148 = uVar11;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar8) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
        FUN_101eac0f4(uVar12,uVar8 + 1,1,uVar11,FUN_101d72b10,FUN_101d72d5c);
        uVar19 = uVar12 & 0xffffffffffffff8;
        uStack_148 = uVar12;
      }
      *(ulong *)(uVar19 + 0x10) = uVar8 + 1;
      *(undefined8 *)(uVar19 + uVar8 * 8 + 0x20) = uVar7;
      func_0x000107c5ce74();
      func_0x000107c61180();
      uVar7 = 0;
      FUN_101eadf58(0,0x112e36dd0,&PTR_PTR_1126a9710);
      uVar8 = param_3;
      func_0x000107c5fc54(param_3,uVar7);
      func_0x000107c61170(param_3);
      apuStack_d0[0] = puVar22;
      if (uVar8 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar11 = uVar8;
        }
        func_0x000107c60480();
      }
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_128 = lVar23;
      lStack_120 = lVar3;
      uStack_118 = param_4;
      puStack_100 = puVar4;
      if (uVar11 != 0) {
        uVar19 = 0;
        do {
          if ((uVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa758);
              (*pcVar2)();
            }
            uVar12 = *(ulong *)(uVar8 + uVar19 * 8 + 0x20);
            func_0x000107c61174(uVar12);
          }
          else {
            uVar12 = uVar19;
            FUN_101ea2d98(uVar19,uVar8);
          }
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa630);
            (*pcVar2)();
          }
          uVar25 = uVar19 + 1;
          func_0x000107c61174();
          uVar13 = uVar12;
          func_0x000107c3e254();
          func_0x000107c61180();
          uVar7 = 0;
          FUN_101eadf58(0,0x112e36dc8,&PTR_PTR_1126a9708);
          uVar14 = uVar13;
          func_0x000107c5fc54(uVar13,uVar7);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar13);
          func_0x000101eac55c(uVar14);
          uVar19 = uVar19 + 1;
          puVar22 = apuStack_d0[0];
        } while (uVar25 != uVar11);
      }
      func_0x000107c6142c(uVar8);
      puVar10 = puStack_f0;
      puVar20 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
      if ((ulong)puVar22 >> 0x3e == 0) {
        puVar24 = *(undefined **)(puVar20 + 0x10);
      }
      else {
        puVar24 = puVar20;
        if ((undefined *)0x7fffffffffffffff < puVar22) {
          puVar24 = puVar22;
        }
        func_0x000107c60480();
      }
      puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar24 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar22 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar20 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa760);
                (*pcVar2)();
              }
              puVar15 = *(undefined **)(puVar22 + (long)puVar18 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar15 = puVar18;
              func_0x000101ea2bc8(puVar18,puVar22);
            }
            puVar17 = puVar18 + 1;
            if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa75c);
              (*pcVar2)();
            }
            puVar16 = puVar15;
            func_0x000107c4adb4();
            func_0x000107c61180();
            if (puVar16 != (undefined *)0x0) break;
            func_0x000107c61170(puVar15);
            puVar18 = puVar18 + 1;
            if (puVar17 == puVar24) goto LAB_101eaa7dc;
          }
          func_0x000107c61170();
          puVar10 = puVar21;
          func_0x000107c61558();
          apuStack_d0[0] = puVar21;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000101eac664(0,*(long *)(puVar21 + 0x10) + 1,1);
          }
          uVar8 = *(ulong *)(apuStack_d0[0] + 0x10);
          if (*(ulong *)(apuStack_d0[0] + 0x18) >> 1 <= uVar8) {
            func_0x000101eac664(1 < *(ulong *)(apuStack_d0[0] + 0x18),uVar8 + 1,1);
          }
          *(ulong *)(apuStack_d0[0] + 0x10) = uVar8 + 1;
          *(undefined **)(apuStack_d0[0] + uVar8 * 8 + 0x20) = puVar15;
          puVar18 = puVar17;
          puVar21 = apuStack_d0[0];
          puVar10 = puStack_f0;
        } while (puVar17 != puVar24);
      }
LAB_101eaa7dc:
      func_0x000107c6142c(puVar22);
      if (((long)puVar21 < 0) || (((ulong)puVar21 >> 0x3e & 1) != 0)) {
        puVar22 = puVar21;
        func_0x000107c60480();
      }
      else {
        puVar22 = *(undefined **)(puVar21 + 0x10);
      }
      if (puVar22 != (undefined *)0x0) {
        if ((long)puVar22 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaaa90);
          (*pcVar2)();
        }
        puVar24 = auStack_e8;
        func_0x000107c61428(puVar10 + 0x10,puVar24,0,0);
        puVar20 = (undefined *)0x0;
        do {
          if (((ulong)puVar21 & 0xc000000000000001) == 0) {
            puVar18 = *(undefined **)(puVar21 + (long)puVar20 * 8 + 0x20);
            func_0x000107c61174();
            puVar15 = puVar24;
          }
          else {
            puVar18 = puVar20;
            puVar15 = puVar21;
            func_0x000101ea2bc8(puVar20,puVar21);
          }
          puVar24 = puVar18;
          func_0x000107c4adb4();
          func_0x000107c61180();
          if (puVar24 == (undefined *)0x0) {
            func_0x000107c61170(puVar18);
            puVar24 = puVar15;
          }
          else {
            puVar17 = puVar24;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            func_0x000107c61170(puVar24);
            puVar16 = puVar17;
            func_0x000107c5faec(puVar17);
            func_0x000107c61170(puVar17);
            FUN_101eadca4(puVar10 + 0x10,apuStack_d0);
            lVar3 = lStack_b0;
            uVar7 = uStack_b8;
            func_0x0001000a8868(apuStack_d0,uStack_b8);
            puVar24 = puVar15;
            (**(code **)(lVar3 + 0x30))(puVar16,puVar15,1,0,uVar7,lVar3);
            func_0x000107c6142c(puVar15);
            func_0x000107c61170(puVar18);
            func_0x0001000834e4(apuStack_d0);
          }
          puVar20 = puVar20 + 1;
        } while (puVar22 != puVar20);
      }
      func_0x000107c61574(puVar21);
      puVar1 = puStack_f8;
      func_0x000107c5eea0(puStack_f8);
      func_0x000107c5ee8c();
      (**(code **)(lStack_128 + 8))(puVar1,lStack_120);
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      uVar8 = uStack_148;
      uVar11 = uStack_148;
      func_0x00010488813c(uStack_148);
      puVar22 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      puVar4 = puStack_140;
      func_0x000107c61614(puVar22 + 0x10,puStack_140);
      func_0x000107c61170(puVar4);
      puVar20 = &UNK_110494128;
      func_0x000107c613fc(&UNK_110494128,0x30,7);
      *(undefined **)(puVar20 + 0x10) = puVar22;
      *(undefined **)(puVar20 + 0x18) = puVar10;
      *(undefined8 *)(puVar20 + 0x20) = uStack_118;
      *(undefined8 *)(puVar20 + 0x28) = param_1;
      func_0x000107c61174();
      func_0x000107c6157c(puVar10);
      func_0x00010075a04c(0,1,FUN_101eadce8,puVar20);
      func_0x000107c61574(puVar10);
      func_0x000107c6142c(uVar8);
      func_0x000107c61574(uVar11);
      func_0x000107c61574(puVar20);
      func_0x000107c61574(lStack_138);
      func_0x000107c61574(uStack_130);
      uVar7 = uStack_110;
      puVar4 = puStack_100;
      puVar5 = puStack_108;
    }
    func_0x000107c61428(puVar5,apuStack_d0,0,0);
    uVar6 = *puVar5;
    func_0x000107c61174(uVar6);
    func_0x0001000aa0a8(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101eab2fc; end: 101eab4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eab2fc(double param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  cVar2 = *(char *)(param_2 + 8);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (cVar2 != '\x01') {
      func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
      FUN_101eadca4(param_4 + 0x10,&puStack_b8);
      uVar4 = uStack_a0;
      lVar3 = CONCAT71(uStack_97,uStack_98);
      func_0x0001000a8868(&puStack_b8,uStack_a0);
      (**(code **)(lVar3 + 0x60))(uVar4,lVar3);
      func_0x0001000834e4(&puStack_b8);
      puVar5 = PTR_PTR_1126bf678;
      func_0x000107c610f8();
      uVar8 = 0;
      uVar9 = uVar4;
      func_0x000107c2bab8();
      bVar1 = param_5 == 0;
      if (bVar1) {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        func_0x000107c61174(param_5);
        uVar6 = param_5;
        func_0x000107c2bb50();
        uVar7 = 1000000000;
        func_0x000107c600d0((double)uVar6 / 1000.0);
        func_0x000107c61170(param_5);
      }
      if (*(double *)(param_3 + _DAT_112e37130) <= param_1) {
        *(double *)(param_3 + _DAT_112e37130) = param_1;
        puStack_b8 = puVar5;
        uStack_b0 = uVar7;
        uStack_a8 = uVar9;
        uStack_a0 = uVar8;
        uStack_98 = bVar1;
        func_0x000107c61174(puVar5);
        func_0x000100087c34(&puStack_b8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101eab4c0; end: 101eab5df; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController setTimelineWithTimeline:timestampMs:] */

/* WARNING: Possible PIC construction at 0x000101eab50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eab510) */

void FUN_101eab4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101eaa0b8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101eab5e0; end: 101eaba9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eab5e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_120;
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar8 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar8 + 0x20) = uVar4;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar8 + 0x28) = puVar7;
    *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000025;
    *(undefined8 *)(lVar8 + 0x38) = 0x800000010f017a00;
    lVar5 = lVar8;
    func_0x000100214a84(lVar8);
    func_0x000107c61588(lVar8);
    func_0x000101eadf14((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010da20ee0);
    lVar8 = lVar5;
    func_0x000107c5f9dc(lVar5,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar8);
    func_0x00010488ade0(puVar6);
  }
  else {
    lVar8 = *(long *)(param_2 + _DAT_112e370e8);
    if (lVar8 != 0) {
      func_0x000107c615f0(lVar8);
      func_0x0001000d224c(&lStack_120);
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      lVar5 = lVar8;
      func_0x000107c44254(lVar8);
      func_0x000107c61180();
      lVar1 = lVar5;
      func_0x000100759c94();
      func_0x000107c61170(lVar5);
      uVar9 = *(undefined8 *)(lStack_120 + 0x10);
      puVar2 = &UNK_110494010;
      func_0x000107c613fc(&UNK_110494010,0x18,7);
      *(undefined8 *)(puVar2 + 0x10) = uVar9;
      puVar6 = &UNK_110494038;
      func_0x000107c613fc(&UNK_110494038,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x101eadc40;
      *(undefined **)(puVar6 + 0x18) = puVar2;
      func_0x000107c615f0(uVar9);
      uVar4 = 0x112dec590;
      func_0x0001000285a8(0x112dec590,&UNK_10d9b8360);
      uVar3 = 0;
      func_0x0001048898b8(0,1,FUN_101eadc48,puVar6,uVar4);
      func_0x000107c61574(puVar6);
      puVar2 = &UNK_110494060;
      func_0x000107c613fc(&UNK_110494060,0x18,7);
      *(undefined8 *)(puVar2 + 0x10) = uVar9;
      uVar4 = 0;
      FUN_101eadf58(0,0x112e371d0,&PTR_PTR_1126a9720);
      func_0x000107c615f0(uVar9);
      uVar9 = 0;
      func_0x000100759f5c(0,1,FUN_101eadc74,puVar2,uVar4);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(puVar2);
      uVar4 = 0;
      func_0x000104889f74(0,1,FUN_101eae4f4,0);
      func_0x000107c61574(lStack_120);
      func_0x000107c61574(lVar1);
      func_0x000107c61574(uVar9);
      func_0x000104889c84(0,1,param_1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar8);
      func_0x000107c61574(uVar4);
      return;
    }
    lVar8 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_118;
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar8 + 0x20) = uVar4;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar8 + 0x28) = puVar7;
    *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000038;
    *(undefined8 *)(lVar8 + 0x38) = 0x800000010f017a30;
    lVar5 = lVar8;
    func_0x000100214a84(lVar8);
    func_0x000107c61588(lVar8);
    func_0x000101eadf14((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010da20ee0);
    lVar8 = lVar5;
    func_0x000107c5f9dc(lVar5,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar8);
    func_0x00010488ade0(puVar6);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 101eaba9c; end: 101eabacf; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController getRenderedImage] */

void FUN_101eaba9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101eab52c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101eabad0; end: 101eabdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eabad0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e37060);
  *puVar1 = param_2;
  *(int *)(puVar1 + 1) = (int)param_3;
  *(int *)((long)puVar1 + 0xc) = (int)((ulong)param_3 >> 0x20);
  puVar1[2] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112e37068) = param_5;
  func_0x000107c600d4();
  dVar12 = 0.0;
  if (!NAN(param_1)) {
    func_0x000107c600d4(*puVar1,puVar1[1],puVar1[2]);
    dVar12 = dVar12 * 1000.0;
  }
  dVar13 = 0.0;
  if (0.0 < dVar12) {
    dVar13 = dVar12;
  }
  dVar12 = dVar13;
  if (((ulong)dVar13 & 0xfffffffffffff) != 0) {
    dVar12 = 0.0;
  }
  if ((((ulong)dVar13 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
    dVar12 = dVar13;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101eabdc0);
    (*pcVar3)();
  }
  if (dVar12 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101eabdc4);
    (*pcVar3)();
  }
  if (dVar12 < 1.8446744073709552e+19) {
    lVar4 = (long)dVar12;
    func_0x000107c2bb54(lVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126a9718;
    func_0x000107c610f8();
    func_0x000107c462b8();
    func_0x000107c61170(lVar4);
    cVar2 = *(char *)(unaff_x20 + _DAT_112e370e0);
    puVar6 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_110493f98;
    func_0x000107c613fc(&UNK_110493f98,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    if (cVar2 == '\x01') {
      func_0x000107c61174(puVar5);
      func_0x000107c6157c(puVar6);
      pcVar8 = "deliverUIEffect(enabled:isCurrent:_:)";
      func_0x0001000c10c0("deliverUIEffect(enabled:isCurrent:_:)");
      func_0x000107c61180();
      puVar10 = &UNK_110493fc0;
      func_0x000107c613fc(&UNK_110493fc0,0x30,7);
      *(code **)(puVar10 + 0x10) = FUN_101eae094;
      *(undefined8 *)(puVar10 + 0x18) = 0;
      *(code **)(puVar10 + 0x20) = FUN_101eadc24;
      *(undefined **)(puVar10 + 0x28) = puVar7;
      uStack_68 = 0x101eadc2c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110493fd8;
      ppuVar9 = &puStack_88;
      puStack_60 = puVar10;
      func_0x000107c60bc4(ppuVar9);
      puVar10 = puStack_60;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar10);
      func_0x000107c4e524(pcVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puVar6);
      func_0x000107c615e8(pcVar8);
    }
    else {
      func_0x000107c61428(puVar6 + 0x10,&puStack_88,0,0);
      puVar10 = puVar6 + 0x10;
      func_0x000107c61618();
      if (puVar10 != (undefined *)0x0) {
        puVar11 = *(undefined **)(puVar10 + _DAT_112e37070);
        func_0x000107c61174();
        func_0x000107c6157c(puVar6);
        func_0x000107c6157c(puVar11);
        func_0x000107c61170(puVar10);
        puStack_58 = puVar5;
        func_0x000100087c34(&puStack_58);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61574(puVar7);
        puVar7 = puVar11;
      }
      func_0x000107c61574(puVar7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101eabdc8);
  (*pcVar3)();
}



/* Entry: 101eabdc8; end: 101eabe4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eabdc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e37070);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_50 = param_2;
    func_0x000100087c34(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101eabe4c; end: 101eabe97; -[_TtC29SCSnapMediaPlayerServicesImpl21MediaPlayerController init] */

void FUN_101eabe4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapMediaPlayerServicesImpl.MediaPlayerController",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eabe78);
  (*pcVar1)();
}



/* Entry: 101eabe98; end: 101eabf3f;  */

int FUN_101eabe98(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 5) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 1)) {
    uVar1 = *(byte *)(param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101eabf40; end: 101eabf6f;  */

void FUN_101eabf40(code *param_1)

{
  (*param_1)(0,0,0);
  return;
}



/* Entry: 101eabf70; end: 101eabf97;  */

void FUN_101eabf70(long param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 101eabf98; end: 101eabff3;  */

void FUN_101eabf98(void)

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
    func_0x000101eae854();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e371e0;
  plVar5 = (long *)&UNK_10da20f58;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101eabff4; end: 101eac0df;  */

void FUN_101eabff4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101eadf58(0,param_1,param_2);
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



/* Entry: 101eac0e0; end: 101eac0f3;  */

ulong FUN_101eac0e0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eac22c);
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
  (*(code *)0x101eac2cc)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eac228);
      (*pcVar1)();
    }
    (*(code *)0x101eac464)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101eac0f4; end: 101eac22b;  */

ulong FUN_101eac0f4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eac22c);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eac228);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101eac22c; end: 101eac34b;  */

undefined * FUN_101eac22c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e36dc8;
    FUN_101eabff4(0x112e36dc8,&PTR_PTR_1126a9708,0x112e371d8,&UNK_10da20f50);
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



/* Entry: 101eac34c; end: 101eac647;  */

long FUN_101eac34c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101eac460);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101eac464);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101eadf58(0,0x112e36dc8,&PTR_PTR_1126a9708);
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
      FUN_101eadf58(0,0x112e36dc8,&PTR_PTR_1126a9708);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101eac45c);
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



/* Entry: 101eac648; end: 101eac69b;  */

void FUN_101eac648(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101eac69c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101eac69c; end: 101eacb23;  */

undefined * FUN_101eac69c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101eac7ec);
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
    puVar3 = (undefined *)0x112e36fd8;
    func_0x000101eac06c(0x112e36fd8,&UNK_10da20e08,0x112e371f8,&UNK_10da20f80);
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
    uVar5 = 0x112e36fd8;
    func_0x0001000285a8(0x112e36fd8,&UNK_10da20e08);
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



/* Entry: 101eacb24; end: 101eacc23;  */

void FUN_101eacb24(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101ead8ec();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000101eae854(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_101eacc24(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_101ead054(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101eacc24; end: 101ead053;  */

void FUN_101eacc24(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x21;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = param_3[1];
  if (0 < lVar16) {
    lVar11 = 0;
    do {
      lVar8 = lVar11 + 1;
      if (lVar8 < lVar16) {
        lVar12 = *(long *)(*param_3 + lVar8 * 8);
        plVar19 = (long *)(*param_3 + lVar11 * 8);
        plVar15 = plVar19 + 2;
        lVar8 = *plVar19;
        uStack_78 = *(undefined8 *)(lVar12 + 0x4c);
        uStack_68 = *(undefined8 *)(lVar12 + 0x5c);
        uStack_90 = *(undefined8 *)(lVar8 + 0x4c);
        uStack_80 = *(undefined8 *)(lVar8 + 0x5c);
        uStack_70 = *(undefined8 *)(lVar12 + 0x54);
        uStack_88 = *(undefined8 *)(lVar8 + 0x54);
        puVar3 = &uStack_78;
        func_0x000107c60a38(puVar3,&uStack_90);
        lVar12 = lVar11 + 2;
        do {
          lVar9 = lVar12;
          lVar8 = lVar16;
          if (lVar16 == lVar9) break;
          lVar8 = plVar15[-1];
          lVar12 = *plVar15;
          uStack_78 = *(undefined8 *)(lVar12 + 0x4c);
          uStack_68 = *(undefined8 *)(lVar12 + 0x5c);
          uStack_90 = *(undefined8 *)(lVar8 + 0x4c);
          uStack_80 = *(undefined8 *)(lVar8 + 0x5c);
          uStack_70 = *(undefined8 *)(lVar12 + 0x54);
          uStack_88 = *(undefined8 *)(lVar8 + 0x54);
          puVar4 = &uStack_78;
          func_0x000107c60a38(puVar4,&uStack_90);
          plVar15 = plVar15 + 1;
          lVar12 = lVar9 + 1;
          lVar8 = lVar9;
        } while (-1 < (int)((uint)puVar4 ^ (uint)puVar3));
        if ((int)(uint)puVar3 < 0) {
          if (lVar8 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead030);
            (*pcVar1)();
          }
          if (lVar11 < lVar8) {
            lVar9 = *param_3;
            puVar4 = (undefined8 *)(lVar9 + lVar8 * 8);
            puVar3 = (undefined8 *)(lVar9 + lVar11 * 8);
            lVar12 = lVar8;
            lVar16 = lVar11;
            do {
              puVar4 = puVar4 + -1;
              lVar12 = lVar12 + -1;
              if (lVar16 != lVar12) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead048);
                  (*pcVar1)();
                }
                uVar14 = *puVar3;
                *puVar3 = *puVar4;
                *puVar4 = uVar14;
              }
              lVar16 = lVar16 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar16 < lVar12);
          }
        }
      }
      lVar16 = param_3[1];
      lVar12 = lVar8;
      if (lVar8 < lVar16) {
        if (SBORROW8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead024);
          (*pcVar1)();
        }
        if (lVar8 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead028);
            (*pcVar1)();
          }
          lVar9 = lVar11 + param_4;
          if (lVar16 <= lVar11 + param_4) {
            lVar9 = lVar16;
          }
          if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead02c);
            (*pcVar1)();
          }
          if (lVar8 != lVar9) {
            lVar17 = *param_3;
            plVar15 = (long *)(lVar17 + lVar8 * 8 + -8);
            lVar16 = lVar11 - lVar8;
            do {
              lVar10 = *(long *)(lVar17 + lVar8 * 8);
              lVar12 = lVar16;
              plVar19 = plVar15;
              do {
                lVar13 = *plVar19;
                uStack_78 = *(undefined8 *)(lVar10 + 0x4c);
                uStack_68 = *(undefined8 *)(lVar10 + 0x5c);
                uStack_90 = *(undefined8 *)(lVar13 + 0x4c);
                uStack_80 = *(undefined8 *)(lVar13 + 0x5c);
                uStack_70 = *(undefined8 *)(lVar10 + 0x54);
                uStack_88 = *(undefined8 *)(lVar13 + 0x54);
                puVar3 = &uStack_78;
                func_0x000107c60a38(puVar3,&uStack_90);
                if (-1 < (int)puVar3) break;
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead034);
                  (*pcVar1)();
                }
                lVar13 = *plVar19;
                lVar10 = plVar19[1];
                *plVar19 = lVar10;
                plVar19[1] = lVar13;
                bVar2 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar2);
              lVar8 = lVar8 + 1;
              plVar15 = plVar15 + 1;
              lVar16 = lVar16 + -1;
              lVar12 = lVar9;
            } while (lVar8 != lVar9);
          }
        }
      }
      puVar7 = puStack_58;
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead018);
        (*pcVar1)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar18 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar18) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar18 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x28) = lVar12;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead04c);
        (*pcVar1)();
      }
      FUN_101ead134(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101eacfe8;
      lVar16 = param_3[1];
      lVar11 = lVar12;
    } while (lVar12 < lVar16);
  }
  puVar7 = puStack_58;
  lVar16 = *param_1;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead054);
    (*pcVar1)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar18 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar18) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead050);
      (*pcVar1)();
    }
    lVar12 = uVar18 - 1;
    lVar9 = *(long *)(puVar7 + uVar18 * 0x10);
    lVar8 = *(long *)(puVar7 + lVar12 * 0x10 + 0x28);
    FUN_101ead39c(lVar11 + lVar9 * 8,lVar11 + *(long *)(puVar7 + lVar12 * 0x10 + 0x20) * 8,
                  lVar11 + lVar8 * 8,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead01c);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead020);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar18 * 0x10) = lVar9;
    *(long *)((long)(puVar7 + uVar18 * 0x10) + 8) = lVar8;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar12);
    puVar7 = puStack_58;
    uVar18 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101eacfe8:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 101ead054; end: 101ead133;  */

void FUN_101ead054(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    plVar7 = (long *)(lVar6 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar4 = *(long *)(lVar6 + param_3 * 8);
      lVar8 = param_1;
      plVar9 = plVar7;
      do {
        lVar5 = *plVar9;
        uStack_68 = *(undefined8 *)(lVar4 + 0x4c);
        uStack_58 = *(undefined8 *)(lVar4 + 0x5c);
        uStack_80 = *(undefined8 *)(lVar5 + 0x4c);
        uStack_70 = *(undefined8 *)(lVar5 + 0x5c);
        uStack_60 = *(undefined8 *)(lVar4 + 0x54);
        uStack_78 = *(undefined8 *)(lVar5 + 0x54);
        puVar3 = &uStack_68;
        func_0x000107c60a38(puVar3,&uStack_80);
        if (-1 < (int)puVar3) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead134);
          (*pcVar1)();
        }
        lVar5 = *plVar9;
        lVar4 = plVar9[1];
        *plVar9 = lVar4;
        plVar9[1] = lVar5;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar7 = plVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101ead134; end: 101ead39b;  */

undefined8 FUN_101ead134(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101ead208;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead384);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101ead26c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead374);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead37c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead35c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead360);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead368);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead370);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101ead208:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead364);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead36c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead378);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead380);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101ead26c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead388);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead350);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead39c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101ead39c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead354);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ead358);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101ead39c; end: 101ead62b;  */

undefined8 FUN_101ead39c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar3 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 3;
  lVar12 = (long)param_3 - (long)param_2;
  lVar5 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 3;
  if (lVar3 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar9 = param_4 + lVar3;
    plVar6 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar3 = *param_2;
        lVar10 = *param_4;
        uStack_78 = *(undefined8 *)(lVar3 + 0x4c);
        uStack_68 = *(undefined8 *)(lVar3 + 0x5c);
        uStack_90 = *(undefined8 *)(lVar10 + 0x4c);
        uStack_80 = *(undefined8 *)(lVar10 + 0x5c);
        uStack_70 = *(undefined8 *)(lVar3 + 0x54);
        uStack_88 = *(undefined8 *)(lVar10 + 0x54);
        puVar2 = &uStack_78;
        func_0x000107c60a38(puVar2,&uStack_90);
        if ((int)puVar2 < 0) {
          plVar7 = param_2 + 1;
          plVar11 = param_4;
          plVar8 = param_2;
        }
        else {
          plVar7 = param_2;
          plVar11 = param_4 + 1;
          plVar8 = param_4;
        }
        param_4 = plVar11;
        param_2 = plVar7;
        if (plVar6 != plVar8) {
          *plVar6 = *plVar8;
        }
        plVar6 = plVar6 + 1;
      } while (param_4 < plVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 3);
    }
    plVar8 = param_4 + lVar5;
    plVar6 = param_2;
    plVar9 = plVar8;
    if ((param_1 < param_2) && (7 < lVar12)) {
      do {
        plVar11 = param_2 + -1;
        plVar7 = param_3;
        while( true ) {
          param_3 = plVar7 + -1;
          plVar9 = plVar8 + -1;
          lVar3 = *plVar9;
          lVar10 = *plVar11;
          uStack_78 = *(undefined8 *)(lVar3 + 0x4c);
          uStack_68 = *(undefined8 *)(lVar3 + 0x5c);
          uStack_90 = *(undefined8 *)(lVar10 + 0x4c);
          uStack_80 = *(undefined8 *)(lVar10 + 0x5c);
          uStack_70 = *(undefined8 *)(lVar3 + 0x54);
          uStack_88 = *(undefined8 *)(lVar10 + 0x54);
          puVar2 = &uStack_78;
          func_0x000107c60a38(puVar2,&uStack_90);
          if ((int)puVar2 < 0) break;
          if (plVar7 != plVar8) {
            *param_3 = *plVar9;
          }
          plVar6 = param_2;
          plVar8 = plVar9;
          plVar7 = param_3;
          if (plVar9 <= param_4) goto LAB_101ead5c8;
        }
        if (plVar7 != param_2) {
          *param_3 = *plVar11;
        }
        plVar6 = plVar11;
        plVar9 = plVar8;
      } while ((param_1 < plVar11) && (param_2 = plVar11, param_4 < plVar8));
    }
  }
LAB_101ead5c8:
  uVar4 = (long)plVar9 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar6 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar6)) {
    func_0x000107c610b8(plVar6,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101ead62c; end: 101ead8eb;  */

ulong FUN_101ead62c(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead794);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead788);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101eadf58(0,0x112e36dc8,&PTR_PTR_1126a9708);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead78c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ead790);
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
          func_0x000101ea2bc8(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101ead8ec; end: 101ead8ff;  */

/* WARNING: Removing unreachable block (ram,0x000101eac960) */
/* WARNING: Removing unreachable block (ram,0x000101eac970) */
/* WARNING: Removing unreachable block (ram,0x000101eaca60) */
/* WARNING: Removing unreachable block (ram,0x000101eac97c) */
/* WARNING: Removing unreachable block (ram,0x000101eac984) */
/* WARNING: Removing unreachable block (ram,0x000101eac9fc) */
/* WARNING: Removing unreachable block (ram,0x000101eaca04) */
/* WARNING: Removing unreachable block (ram,0x000101eaca08) */
/* WARNING: Removing unreachable block (ram,0x000101eaca0c) */
/* WARNING: Removing unreachable block (ram,0x000101eaca1c) */

undefined * FUN_101ead8ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_101eabf98();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  func_0x000101eae854(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 101ead900; end: 101eadc23;  */

ulong FUN_101ead900(ulong param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  if ((param_1 & 1) != 0) {
    return 1;
  }
  uVar5 = 0;
  uVar8 = 0;
  uVar3 = param_3;
  func_0x000109128034();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c61434(param_2);
  lVar4 = 0x6f4d6172656d6163;
  uVar3 = 0;
  func_0x000100029284(0x6f4d6172656d6163);
  if ((uVar3 & 1) == 0) {
    func_0x000107c6142c(param_2);
    return 0;
  }
  func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar4 * 0x20,auStack_80);
  func_0x000107c6142c(param_2);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&lStack_90,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar4 = lStack_90;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_101eadae8:
    uVar8 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    uVar3 = 0;
    lVar6 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar3 & 1) == 0) {
LAB_101eadae4:
      func_0x000107c6142c(param_2);
      goto LAB_101eadae8;
    }
    func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar6 * 0x20,auStack_80);
    func_0x000107c6142c(param_2);
    uVar7 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    func_0x000107c6147c(&lStack_90,auStack_80,puVar1 + 8,uVar7,6);
    if ((uVar8 & 1) == 0) goto LAB_101eadae8;
    param_2 = lStack_90;
    if (*(long *)(lStack_90 + 0x10) != 1) goto LAB_101eadae4;
    uVar8 = *(ulong *)(lStack_90 + 0x20);
    lVar6 = *(long *)(lStack_90 + 0x28);
    func_0x000107c61434(lVar6);
    func_0x000107c6142c(lStack_90);
    if ((uVar8 == 0x434953554d) && (lVar6 == -0x1b00000000000000)) {
      func_0x000107c6142c(0xe500000000000000);
      uVar8 = 1;
    }
    else {
      func_0x000107c605b8(uVar8,lVar6,0x434953554d,0xe500000000000000,0);
      func_0x000107c6142c(lVar6);
    }
  }
  if (((lVar4 == 0x41435f4843544142) && (lStack_88 == -0x12ffffbaadaaabb0)) ||
     (func_0x000107c605b8(0x41435f4843544142,0xed00004552555450,lVar4,lStack_88,0), (uVar5 & 1) != 0
     )) {
    func_0x000107c6142c(lStack_88);
    func_0x000109128048(param_3);
    return param_3;
  }
  uVar5 = 0;
  if (((lVar4 == 0x524f544345524944) && (lStack_88 == -0x12ffffbabbb0b2a1)) ||
     (func_0x000107c605b8(0x524f544345524944,0xed000045444f4d5f,lVar4,lStack_88,0), (uVar5 & 1) != 0
     )) {
    func_0x000107c6142c(lStack_88);
    func_0x00010912805c(param_3);
    return param_3;
  }
  if ((lVar4 == 0x454e4f4e) && (lStack_88 == -0x1c00000000000000)) {
    func_0x000107c6142c(0xe400000000000000);
    if ((uVar8 & 1) != 0) {
LAB_101eadc18:
      func_0x000109128070(param_3);
      return param_3;
    }
  }
  else {
    uVar2 = 0;
    func_0x000107c605b8(0x454e4f4e,0xe400000000000000,lVar4,lStack_88,0);
    func_0x000107c6142c(lStack_88);
    if ((uVar2 & (uint)uVar8 & 1) != 0) goto LAB_101eadc18;
  }
  return 0;
}



/* Entry: 101eadc24; end: 101eadc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadc24(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112e37070);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    uStack_50 = uVar1;
    func_0x000100087c34(&uStack_50);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101eadc48; end: 101eadc73;  */

void FUN_101eadc48(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 101eadc74; end: 101eadc8b;  */

void FUN_101eadc74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101eae2b8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101eadc8c; end: 101eadca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadc8c(undefined8 param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  ulong uVar19;
  long unaff_x20;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined1 auStack_150 [8];
  ulong uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined auStack_e8 [24];
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_90 [32];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar22 = *(ulong *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar24 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  func_0x000107c61428(lVar9 + 0x10,auStack_90,0,0);
  puVar4 = (undefined8 *)(lVar9 + 0x10);
  func_0x000107c61618();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    puStack_f8 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar6 = *puVar5;
    func_0x000107c61174(uVar6);
    uVar7 = 0xd000000000000027;
    func_0x0001000a9a18(0xd000000000000027,0x800000010f017a70);
    func_0x000107c61170(uVar6);
    if ((*(long *)((long)puVar4 + _DAT_112e37148) == 0) ||
       (uVar8 = uVar22, func_0x000107c49cec(), (int)uVar8 == 0)) {
      puVar23 = &UNK_1104940d8;
      uStack_110 = uVar7;
      puStack_108 = puVar5;
      func_0x000107c613fc(&UNK_1104940d8,0x38,7);
      func_0x0001000d224c(apuStack_d0);
      lVar9 = lStack_b0;
      uVar7 = uStack_b8;
      func_0x0001000a8868(apuStack_d0,uStack_b8);
      (**(code **)(lVar9 + 8))(puVar23 + 0x10,uVar7,lVar9);
      func_0x0001000834e4(apuStack_d0);
      uVar7 = *(undefined8 *)(puVar23 + 0x28);
      lVar9 = *(long *)(puVar23 + 0x30);
      func_0x0001000c6518(puVar23 + 0x10,uVar7);
      (**(code **)(lVar9 + 0x50))(1,uVar7,lVar9);
      func_0x0001000d224c(apuStack_d0);
      func_0x0001000a8868(apuStack_d0,uStack_b8);
      uVar8 = uVar22;
      FUN_101ea393c();
      func_0x0001000834e4(apuStack_d0);
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar9 = 0;
      func_0x00010095c380();
      puVar10 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,puVar4);
      puVar20 = &UNK_110494100;
      func_0x000107c613fc(&UNK_110494100,0x28,7);
      *(undefined **)(puVar20 + 0x10) = puVar10;
      *(long *)(puVar20 + 0x18) = lVar9;
      *(undefined **)(puVar20 + 0x20) = puVar23;
      puVar5 = puVar4;
      func_0x000107c61174();
      puStack_140 = puVar5;
      func_0x000107c6157c(lVar9);
      puStack_f0 = puVar23;
      func_0x000107c6157c(puVar23);
      uStack_130 = uVar8;
      func_0x00010075a04c(0,1,0x101eadc98,puVar20);
      func_0x000107c61574(puVar20);
      puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      lStack_138 = lVar9;
      func_0x000107c6157c(uVar7);
      if ((ulong)puVar23 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar23) {
          puVar10 = puVar23;
        }
        func_0x000107c60480(puVar10);
      }
      puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar11 = 0;
      FUN_101eac0f4(0,puVar10 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,FUN_101d72b10,
                    FUN_101d72d5c);
      uVar19 = uVar11 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar19 + 0x10);
      uStack_148 = uVar11;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar8) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
        FUN_101eac0f4(uVar15,uVar8 + 1,1,uVar11,FUN_101d72b10,FUN_101d72d5c);
        uVar19 = uVar15 & 0xffffffffffffff8;
        uStack_148 = uVar15;
      }
      *(ulong *)(uVar19 + 0x10) = uVar8 + 1;
      *(undefined8 *)(uVar19 + uVar8 * 8 + 0x20) = uVar7;
      func_0x000107c5ce74();
      func_0x000107c61180();
      uVar7 = 0;
      FUN_101eadf58(0,0x112e36dd0,&PTR_PTR_1126a9710);
      uVar8 = uVar22;
      func_0x000107c5fc54(uVar22,uVar7);
      func_0x000107c61170(uVar22);
      apuStack_d0[0] = puVar23;
      if (uVar8 >> 0x3e == 0) {
        uVar22 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar22 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar22 = uVar8;
        }
        func_0x000107c60480();
      }
      puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_128 = lVar24;
      lStack_120 = lVar3;
      uStack_118 = uVar18;
      puStack_100 = puVar4;
      if (uVar22 != 0) {
        uVar11 = 0;
        do {
          if ((uVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa758);
              (*pcVar2)();
            }
            uVar19 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
            func_0x000107c61174(uVar19);
          }
          else {
            uVar19 = uVar11;
            FUN_101ea2d98(uVar11,uVar8);
          }
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa630);
            (*pcVar2)();
          }
          uVar26 = uVar11 + 1;
          func_0x000107c61174();
          uVar15 = uVar19;
          func_0x000107c3e254();
          func_0x000107c61180();
          uVar18 = 0;
          FUN_101eadf58(0,0x112e36dc8,&PTR_PTR_1126a9708);
          uVar12 = uVar15;
          func_0x000107c5fc54(uVar15,uVar18);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar15);
          func_0x000101eac55c(uVar12);
          uVar11 = uVar11 + 1;
          puVar23 = apuStack_d0[0];
        } while (uVar26 != uVar22);
      }
      func_0x000107c6142c(uVar8);
      puVar10 = puStack_f0;
      puVar20 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
      if ((ulong)puVar23 >> 0x3e == 0) {
        puVar25 = *(undefined **)(puVar20 + 0x10);
      }
      else {
        puVar25 = puVar20;
        if ((undefined *)0x7fffffffffffffff < puVar23) {
          puVar25 = puVar23;
        }
        func_0x000107c60480();
      }
      puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar25 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar23 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar20 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa760);
                (*pcVar2)();
              }
              puVar13 = *(undefined **)(puVar23 + (long)puVar17 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar13 = puVar17;
              func_0x000101ea2bc8(puVar17,puVar23);
            }
            puVar16 = puVar17 + 1;
            if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaa75c);
              (*pcVar2)();
            }
            puVar14 = puVar13;
            func_0x000107c4adb4();
            func_0x000107c61180();
            if (puVar14 != (undefined *)0x0) break;
            func_0x000107c61170(puVar13);
            puVar17 = puVar17 + 1;
            if (puVar16 == puVar25) goto LAB_101eaa7dc;
          }
          func_0x000107c61170();
          puVar10 = puVar21;
          func_0x000107c61558();
          apuStack_d0[0] = puVar21;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000101eac664(0,*(long *)(puVar21 + 0x10) + 1,1);
          }
          uVar22 = *(ulong *)(apuStack_d0[0] + 0x10);
          if (*(ulong *)(apuStack_d0[0] + 0x18) >> 1 <= uVar22) {
            func_0x000101eac664(1 < *(ulong *)(apuStack_d0[0] + 0x18),uVar22 + 1,1);
          }
          *(ulong *)(apuStack_d0[0] + 0x10) = uVar22 + 1;
          *(undefined **)(apuStack_d0[0] + uVar22 * 8 + 0x20) = puVar13;
          puVar17 = puVar16;
          puVar21 = apuStack_d0[0];
          puVar10 = puStack_f0;
        } while (puVar16 != puVar25);
      }
LAB_101eaa7dc:
      func_0x000107c6142c(puVar23);
      if (((long)puVar21 < 0) || (((ulong)puVar21 >> 0x3e & 1) != 0)) {
        puVar23 = puVar21;
        func_0x000107c60480();
      }
      else {
        puVar23 = *(undefined **)(puVar21 + 0x10);
      }
      if (puVar23 != (undefined *)0x0) {
        if ((long)puVar23 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaaa90);
          (*pcVar2)();
        }
        puVar25 = auStack_e8;
        func_0x000107c61428(puVar10 + 0x10,puVar25,0,0);
        puVar20 = (undefined *)0x0;
        do {
          if (((ulong)puVar21 & 0xc000000000000001) == 0) {
            puVar17 = *(undefined **)(puVar21 + (long)puVar20 * 8 + 0x20);
            func_0x000107c61174();
            puVar13 = puVar25;
          }
          else {
            puVar17 = puVar20;
            puVar13 = puVar21;
            func_0x000101ea2bc8(puVar20,puVar21);
          }
          puVar25 = puVar17;
          func_0x000107c4adb4();
          func_0x000107c61180();
          if (puVar25 == (undefined *)0x0) {
            func_0x000107c61170(puVar17);
            puVar25 = puVar13;
          }
          else {
            puVar16 = puVar25;
            func_0x000107c4b1dc();
            func_0x000107c61180();
            func_0x000107c61170(puVar25);
            puVar14 = puVar16;
            func_0x000107c5faec(puVar16);
            func_0x000107c61170(puVar16);
            FUN_101eadca4(puVar10 + 0x10,apuStack_d0);
            lVar9 = lStack_b0;
            uVar18 = uStack_b8;
            func_0x0001000a8868(apuStack_d0,uStack_b8);
            puVar25 = puVar13;
            (**(code **)(lVar9 + 0x30))(puVar14,puVar13,1,0,uVar18,lVar9);
            func_0x000107c6142c(puVar13);
            func_0x000107c61170(puVar17);
            func_0x0001000834e4(apuStack_d0);
          }
          puVar20 = puVar20 + 1;
        } while (puVar23 != puVar20);
      }
      func_0x000107c61574(puVar21);
      puVar1 = puStack_f8;
      func_0x000107c5eea0(puStack_f8);
      func_0x000107c5ee8c();
      (**(code **)(lStack_128 + 8))(puVar1,lStack_120);
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      uVar22 = uStack_148;
      uVar8 = uStack_148;
      func_0x00010488813c(uStack_148);
      puVar23 = &UNK_110493f48;
      func_0x000107c613fc(&UNK_110493f48,0x18,7);
      puVar4 = puStack_140;
      func_0x000107c61614(puVar23 + 0x10,puStack_140);
      func_0x000107c61170(puVar4);
      puVar20 = &UNK_110494128;
      func_0x000107c613fc(&UNK_110494128,0x30,7);
      *(undefined **)(puVar20 + 0x10) = puVar23;
      *(undefined **)(puVar20 + 0x18) = puVar10;
      *(undefined8 *)(puVar20 + 0x20) = uStack_118;
      *(undefined8 *)(puVar20 + 0x28) = param_1;
      func_0x000107c61174();
      func_0x000107c6157c(puVar10);
      func_0x00010075a04c(0,1,FUN_101eadce8,puVar20);
      func_0x000107c61574(puVar10);
      func_0x000107c6142c(uVar22);
      func_0x000107c61574(uVar8);
      func_0x000107c61574(puVar20);
      func_0x000107c61574(lStack_138);
      func_0x000107c61574(uStack_130);
      uVar7 = uStack_110;
      puVar4 = puStack_100;
      puVar5 = puStack_108;
    }
    func_0x000107c61428(puVar5,apuStack_d0,0,0);
    uVar18 = *puVar5;
    func_0x000107c61174(uVar18);
    func_0x0001000aa0a8(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar18);
  }
  return;
}



/* Entry: 101eadca4; end: 101eadce7;  */

long FUN_101eadca4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101eadce8; end: 101eadd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadce8(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(ulong *)(unaff_x20 + 0x20);
  dVar12 = *(double *)(unaff_x20 + 0x28);
  cVar3 = *(char *)(param_1 + 8);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (cVar3 != '\x01') {
      func_0x000107c61428(lVar2 + 0x10,auStack_90,0,0);
      FUN_101eadca4(lVar2 + 0x10,&puStack_b8);
      uVar5 = uStack_a0;
      lVar2 = CONCAT71(uStack_97,uStack_98);
      func_0x0001000a8868(&puStack_b8,uStack_a0);
      (**(code **)(lVar2 + 0x60))(uVar5,lVar2);
      func_0x0001000834e4(&puStack_b8);
      puVar6 = PTR_PTR_1126bf678;
      func_0x000107c610f8();
      uVar9 = 0;
      uVar11 = uVar5;
      func_0x000107c2bab8();
      bVar1 = uVar10 == 0;
      if (bVar1) {
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        func_0x000107c61174(uVar10);
        uVar7 = uVar10;
        func_0x000107c2bb50();
        uVar8 = 1000000000;
        func_0x000107c600d0((double)uVar7 / 1000.0);
        func_0x000107c61170(uVar10);
      }
      if (*(double *)(lVar4 + _DAT_112e37130) <= dVar12) {
        *(double *)(lVar4 + _DAT_112e37130) = dVar12;
        puStack_b8 = puVar6;
        uStack_b0 = uVar8;
        uStack_a8 = uVar11;
        uStack_a0 = uVar9;
        uStack_98 = bVar1;
        func_0x000107c61174(puVar6);
        func_0x000100087c34(&puStack_b8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar6);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101eadd24; end: 101eadd3b;  */

void FUN_101eadd24(void)

{
  func_0x000101ea98c0();
  return;
}



/* Entry: 101eadd3c; end: 101eadd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadd3c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112e37160) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112e37160) = 1;
      *(undefined1 *)(lVar1 + _DAT_112e37158) = 0;
      lVar1 = *(long *)(lVar1 + _DAT_112e370e8);
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        func_0x000107c5be70();
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101eadd74; end: 101eadd97;  */

void FUN_101eadd74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ea90e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101eadd98; end: 101eadd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadd98(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_80;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e370d0;
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112e370d0);
    func_0x000107c6157c(uVar6);
    func_0x0001000c74f0(&puStack_80);
    func_0x000107c61574(uVar6);
    if (puStack_80 == (undefined *)0x0) {
      func_0x0001000d224c(&puStack_80);
      puVar3 = puStack_80;
      func_0x000107c4e9b4(0,0,0,0);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_80);
      func_0x000107c5a51c(puVar3);
      func_0x000107c5a050(puVar3);
      func_0x000107c52ab8(puVar3);
      uVar6 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c6157c(uVar6);
      func_0x000100075034(FUN_101eadda0,&puStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar6);
      func_0x000107c61174(puVar3);
      puVar5 = PTR___sSvN_11034e250;
      func_0x000107c5fb18(&puStack_80,PTR___sSvN_11034e250);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c6142c(puVar5);
    }
    else {
      func_0x000107c61170();
    }
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112e37120);
    puVar3 = &UNK_110493f48;
    func_0x000107c613fc(&UNK_110493f48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    pcStack_60 = FUN_101eadde4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110494398;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c615f0(uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 101eadda0; end: 101eadde3;  */

void FUN_101eadda0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 101eadde4; end: 101eaddf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadde4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + _DAT_112e370f8);
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      func_0x000107c61170(lVar5);
    }
    else {
      lVar2 = plVar1[2];
      lVar3 = plVar1[3];
      lVar6 = plVar1[1];
      plVar1[1] = 0;
      *plVar1 = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      lVar4 = plVar1[4];
      *(undefined1 *)(plVar1 + 4) = 0;
      FUN_101ea7c60(lVar7,lVar6,lVar2,lVar3,(char)lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(lVar7);
    }
  }
  return;
}



/* Entry: 101eaddf4; end: 101eade1f;  */

void FUN_101eaddf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101eade20; end: 101eade33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eade20(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + _DAT_112e37188);
    lVar4 = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      func_0x000107c5c42c(uVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      goto LAB_101ea90a4;
    }
  }
  lVar4 = 0;
LAB_101ea90a4:
  puVar3 = PTR___sSvN_11034e250;
  uStack_50 = uVar1;
  func_0x000107c5fb18(&uStack_50,PTR___sSvN_11034e250);
  func_0x000107c61170(lVar4);
  func_0x000107c6142c(puVar3);
  return;
}



/* Entry: 101eade34; end: 101eade5f;  */

void FUN_101eade34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101eade60; end: 101eade77;  */

void FUN_101eade60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101ea7180();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101eade78; end: 101eadea3;  */

void FUN_101eade78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101eadea4; end: 101eadeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eadea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112e371f0,&UNK_10da20f70);
    lStack_a0 = 0;
    func_0x000100854cb0(&lStack_a0);
    return;
  }
  lVar3 = *(long *)(lVar1 + _DAT_112e370e8);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    lVar4 = param_1;
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c3f3ac();
    func_0x000107c61170(lVar4);
    if ((int)lVar2 != 0) {
      func_0x000107c2babc(param_1);
      func_0x000107c61180();
      func_0x000107c57508(lVar3);
      goto LAB_101ea7b44;
    }
    func_0x000107c615e8(lVar3);
  }
  if (*(char *)(lVar1 + _DAT_112e37108) == '\x01') {
    func_0x0001000d224c(&lStack_a0);
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(lVar1 + _DAT_112e370b8);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c61434(lVar3);
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar3);
    }
    lVar3 = lStack_a0;
    func_0x000107c49884();
    lVar2 = param_1;
    param_1 = lVar4;
  }
  else {
    func_0x0001000d224c(&lStack_a0);
    func_0x000107c2babc(param_1);
    func_0x000107c61180();
    lVar3 = *(long *)(lVar1 + _DAT_112e370b8);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c61434(lVar3);
      func_0x000107c5f9dc();
      func_0x000107c6142c(lVar3);
    }
    func_0x000109128604();
    lVar3 = lStack_a0;
    func_0x000107c4e9bc();
    lVar2 = param_1;
    param_1 = lVar4;
  }
  func_0x000107c61180();
  func_0x000107c615e8(lStack_a0);
  func_0x000107c61170(lVar2);
LAB_101ea7b44:
  func_0x000107c61170(param_1);
  func_0x000107c615f0(lVar3);
  func_0x0001000285a8(0x112e371f0,&UNK_10da20f70);
  lStack_a0 = lVar3;
  func_0x000100854cb0(&lStack_a0);
  func_0x000107c61170(lVar1);
  func_0x000107c615ec(lVar3,2);
  return;
}



/* Entry: 101eadeac; end: 101eadedb;  */

void FUN_101eadeac(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Entry: 101eadedc; end: 101eadee3;  */

void FUN_101eadedc(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(param_1);
      FUN_101ea7c60();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 101eadee4; end: 101eadf53;  */

void FUN_101eadee4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Entry: 101eadf54; end: 101eadf57;  */

void FUN_101eadf54(void)

{
  return;
}



/* Entry: 101eadf58; end: 101eadf97;  */

void FUN_101eadf58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101eadf98; end: 101eae033;  */

void FUN_101eadf98(long param_1,long param_2)

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



/* Entry: 101eae034; end: 101eae047;  */

void FUN_101eae034(void)

{
  FUN_101eadda0();
  return;
}



/* Entry: 101eae048; end: 101eae057;  */

void FUN_101eae048(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ea90e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101eae058; end: 101eae093;  */

void FUN_101eae058(code *param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  (*param_1)();
  if ((uVar1 & 1) != 0) {
    (*param_3)();
  }
  return;
}



/* Entry: 101eae094; end: 101eae0af;  */

undefined8 FUN_101eae094(void)

{
  return 1;
}



/* Entry: 101eae0b0; end: 101eae15b;  */

void FUN_101eae0b0(void)

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



/* Entry: 101eae15c; end: 101eae16b;  */

void FUN_101eae15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101eae16c; end: 101eae2b7;  */

undefined * FUN_101eae16c(long param_1,undefined *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    puVar1 = (undefined1 *)0x112e372a0;
    func_0x0001000285a8(0x112e372a0,&UNK_10da20fc8);
    func_0x000101eae580();
    puVar2 = &UNK_1104946c8;
    func_0x000107c613f8(&UNK_1104946c8,puVar1,0,0);
    *puVar1 = 0;
    puVar3 = puVar2;
    func_0x00010488904c();
    func_0x000107c614ac(puVar2);
  }
  else {
    func_0x0001000285a8(0x112d558a8,&UNK_10d91c8c0);
    puVar2 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    func_0x000107c61174(param_1);
    func_0x000107c5d19c(puVar2);
    func_0x000107c61180();
    func_0x000107c3d5d4(param_2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar3 = param_2;
    func_0x000100759c94(param_2,0);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  return puVar3;
}



/* Entry: 101eae2b8; end: 101eae4f3;  */

void FUN_101eae2b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar9 = (undefined *)*param_2;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b25d0;
    lVar8 = param_3;
    func_0x000107c610f8(PTR_PTR_1126b25d0);
    func_0x000107c61174();
    func_0x000107c453e4(puVar2);
    func_0x000107c563e8();
    puVar10 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    func_0x000107c4b838();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c3d7f4(param_3);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar3);
    puVar10 = puVar9;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61170(puVar9);
    }
    else {
      puVar4 = puVar10;
      func_0x000107c5ee30();
      lVar3 = lVar8;
      func_0x000107c61170(puVar10);
      puVar10 = puVar9;
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eae4f4);
        (*pcVar1)();
      }
      func_0x000107c4ca08();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      if (param_3 != 0) {
        lVar5 = param_3;
        func_0x000107c41214();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar5);
          puVar10 = PTR_PTR_1126a9720;
          func_0x000107c610f8();
          lVar5 = lVar6;
          func_0x000107c5ee20(lVar6,lVar3);
          puVar7 = puVar4;
          func_0x000107c5ee20(puVar4,lVar8);
          func_0x000107c47694();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar7);
          func_0x00010006c090(puVar4,lVar8);
          func_0x00010006c090(lVar6,lVar3);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar2);
          goto LAB_101eae4cc;
        }
      }
      func_0x000107c61170(puVar2);
      func_0x00010006c090(puVar4,lVar8);
      puVar2 = puVar9;
    }
    func_0x000107c61170(puVar2);
    puVar10 = (undefined *)0x0;
  }
LAB_101eae4cc:
  *param_1 = puVar10;
  return;
}



/* Entry: 101eae4f4; end: 101eae53b;  */

void FUN_101eae4f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e371c8;
  func_0x0001000285a8(0x112e371c8,&UNK_10da20f40);
  func_0x00010488904c(param_1,uVar1);
  return;
}



/* Entry: 101eae53c; end: 101eae5bf;  */

void FUN_101eae53c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eae5c0; end: 101eae727;  */

int FUN_101eae5c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101eae63c;
        goto LAB_101eae620;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101eae620:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101eae63c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101eae728; end: 101eae767;  */

void FUN_101eae728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e372b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da21028;
  func_0x000107c61520(&UNK_10da21028,&UNK_1104946c8);
  puRam0000000112e372b0 = puVar1;
  return;
}



/* Entry: 101eae768; end: 101eae77b;  */

bool FUN_101eae768(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eae77c; end: 101eae827;  */

void FUN_101eae77c(void)

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



/* Entry: 101eae828; end: 101eae873;  */

void FUN_101eae828(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eae874; end: 101eae9db;  */

int FUN_101eae874(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101eae8f0;
        goto LAB_101eae8d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101eae8d4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101eae8f0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101eae9dc; end: 101eaea1b;  */

void FUN_101eae9dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e37388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da21148;
  func_0x000107c61520(&UNK_10da21148,&UNK_1104947b8);
  puRam0000000112e37388 = puVar1;
  return;
}



/* Entry: 101eaea1c; end: 101eaf893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eaea1c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined **ppuVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  long lVar44;
  undefined8 uVar45;
  long lVar46;
  long *plVar47;
  undefined8 uVar48;
  long unaff_x20;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 uVar51;
  double dVar52;
  double dVar53;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if ((param_9 & 0x100) != 0) {
    FUN_101eafc10();
    return;
  }
  dVar52 = 0.0;
  if ((param_9 & 1) != 0) {
    uVar24 = param_2;
    func_0x000107c5b198();
    func_0x000107c61180();
    uVar25 = uVar24;
    func_0x000107c444cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar24);
    if (uVar25 != 0) {
      uVar24 = uVar25;
      func_0x000107c5e304();
      dVar52 = (double)(uVar24 & 0xffffffff);
      uVar24 = uVar25;
      func_0x000107c44d98();
      func_0x000107c61170(uVar25);
      uVar51 = 0;
      dVar53 = (double)(uVar24 & 0xffffffff);
      goto LAB_101eaeadc;
    }
  }
  uVar51 = 1;
  dVar53 = 0.0;
LAB_101eaeadc:
  lVar26 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar26 == 0) {
    return;
  }
  lVar27 = *(long *)(lVar26 + 0x28);
  func_0x000107c4d6b0();
  func_0x000107c61180();
  lVar28 = lVar27;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  if (lVar28 != 0) {
    lVar29 = *(long *)(lVar26 + 0x30);
    func_0x000107c4d6b4();
    func_0x000107c61180();
    lVar27 = lVar29;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar29);
    if (lVar27 == 0) {
      func_0x000107c61574(lVar26);
      func_0x000107c615e8(lVar28);
      return;
    }
    puVar30 = &UNK_110494810;
    func_0x000107c613fc(&UNK_110494810,0x20,7);
    *(long *)(puVar30 + 0x10) = lVar26;
    *(ulong *)(puVar30 + 0x18) = param_2;
    func_0x0001000285a8(0x112e37458,&UNK_10da211a8);
    func_0x000107c613fc();
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(lVar26);
    pcVar23 = FUN_101eafbb0;
    func_0x0001000bdd8c(FUN_101eafbb0,puVar30);
    puVar30 = &UNK_110494838;
    func_0x000107c613fc(&UNK_110494838,0x18,7);
    *(ulong *)(puVar30 + 0x10) = param_2;
    func_0x0001000285a8(0x112e37460,&UNK_10da211b0);
    func_0x000107c613fc();
    func_0x000107c615f0(param_2);
    uVar31 = 0x101eafbb8;
    func_0x0001000bdd8c(0x101eafbb8,puVar30);
    puVar30 = &UNK_110494860;
    func_0x000107c613fc(&UNK_110494860,0x18,7);
    *(long *)(puVar30 + 0x10) = lVar28;
    func_0x0001000285a8(0x112d54100,&UNK_10d91ad50);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar28);
    uVar45 = 0x101eafd84;
    func_0x0001000bdd8c(0x101eafd84,puVar30);
    puVar30 = &UNK_110494888;
    func_0x000107c613fc(&UNK_110494888,0x18,7);
    *(long *)(puVar30 + 0x10) = lVar27;
    func_0x0001000285a8(0x112e37468,&UNK_10da211c0);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar27);
    uVar32 = 0x101eafbc0;
    func_0x0001000bdd8c(0x101eafbc0,puVar30);
    if (param_4 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x101eaf884);
      (*pcVar23)();
    }
    if (0x7fffffff < param_4) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x101eaf888);
      (*pcVar23)();
    }
    lVar46 = *(long *)(lVar26 + 0x40);
    uVar50 = *(undefined8 *)(*(long *)(lVar26 + 0x38) + _DAT_112e37560);
    lVar29 = *(long *)(lVar26 + 0x48);
    uVar35 = *(undefined8 *)(lVar26 + 0x50);
    uVar36 = *(undefined8 *)(lVar26 + 0x58);
    uVar37 = *(undefined8 *)(lVar26 + 0x60);
    lVar33 = 0;
    func_0x000101eabe78();
    lVar34 = lVar33;
    func_0x000107c610f8();
    *(undefined4 *)(lVar34 + _DAT_112e37050) = 300;
    puVar30 = PTR__kCMTimeZero_110348670;
    puVar1 = (undefined8 *)(lVar34 + _DAT_112e37060);
    uVar48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    *puVar1 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[1] = *(undefined8 *)(puVar30 + 8);
    puVar1[2] = uVar48;
    *(undefined1 *)(lVar34 + _DAT_112e37068) = 0;
    lVar44 = _DAT_112e37070;
    func_0x0001000285a8(0x112e37470,&UNK_10da211c8);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar50);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar48 = 1;
    func_0x00010008747c();
    *(undefined8 *)(lVar34 + lVar44) = uVar48;
    lVar10 = _DAT_112e370c0;
    *(undefined8 *)(lVar34 + _DAT_112e370c0) = 0;
    lVar11 = _DAT_112e370c8;
    *(undefined8 *)(lVar34 + _DAT_112e370c8) = 0;
    lVar12 = _DAT_112e370d0;
    puStack_c8 = (undefined *)0x0;
    func_0x0001000285a8(0x112e37478,&UNK_10da211d0);
    func_0x000107c613fc();
    ppuVar38 = &puStack_c8;
    func_0x00010006c248();
    *(undefined ***)(lVar34 + lVar12) = ppuVar38;
    *(undefined8 *)(lVar34 + _DAT_112e370d8) = 0x3fd0000000000000;
    lVar13 = _DAT_112e370e8;
    *(undefined8 *)(lVar34 + _DAT_112e370e8) = 0;
    lVar14 = _DAT_112e370f0;
    *(undefined8 *)(lVar34 + _DAT_112e370f0) = 0;
    puVar1 = (undefined8 *)(lVar34 + _DAT_112e370f8);
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    lVar15 = _DAT_112e37100;
    puStack_c8 = (undefined *)0x0;
    func_0x0001000285a8(0x112e37480,&UNK_10da211d8);
    func_0x000107c613fc();
    ppuVar38 = &puStack_c8;
    func_0x00010006c248();
    *(undefined ***)(lVar34 + lVar15) = ppuVar38;
    puVar2 = (undefined8 *)(lVar34 + _DAT_112e37110);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    lVar16 = _DAT_112e37118;
    *(undefined8 *)(lVar34 + _DAT_112e37118) = 0;
    *(undefined8 *)(lVar34 + _DAT_112e37130) = 0;
    lVar17 = _DAT_112e37138;
    func_0x0001000285a8(0x112e37488,&UNK_10da211e0);
    func_0x000107c613fc();
    uVar48 = 1;
    func_0x00010008747c();
    *(undefined8 *)(lVar34 + lVar17) = uVar48;
    lVar18 = _DAT_112e37140;
    uVar48 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar34 + lVar18) = uVar48;
    lVar19 = _DAT_112e37148;
    *(undefined8 *)(lVar34 + _DAT_112e37148) = 0;
    *(undefined8 *)(lVar34 + _DAT_112e37150) = 0;
    *(undefined1 *)(lVar34 + _DAT_112e37158) = 0;
    *(undefined1 *)(lVar34 + _DAT_112e37160) = 0;
    *(undefined8 *)(lVar34 + _DAT_112e37168) = 3;
    puVar3 = (undefined8 *)(lVar34 + _DAT_112e37170);
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar20 = _DAT_112e37180;
    *(undefined8 *)(lVar34 + _DAT_112e37180) = 0;
    lVar21 = _DAT_112e37188;
    *(undefined8 *)(lVar34 + _DAT_112e37188) = 0;
    lVar22 = _DAT_112e37190;
    puStack_c8 = (undefined *)CONCAT35(puStack_c8._5_3_,0x3f800000);
    func_0x0001000285a8(0x112e37490,&UNK_10da211e8);
    func_0x000107c613fc();
    ppuVar38 = &puStack_c8;
    func_0x00010006c248();
    *(undefined ***)(lVar34 + lVar22) = ppuVar38;
    lVar7 = _DAT_112e370a0;
    *(undefined8 *)(lVar34 + _DAT_112e370a0) = uVar45;
    lVar8 = _DAT_112e370a8;
    *(undefined8 *)(lVar34 + _DAT_112e370a8) = uVar32;
    lVar9 = _DAT_112e370b0;
    *(undefined8 *)(lVar34 + _DAT_112e370b0) = uVar50;
    lVar42 = _DAT_112e37078;
    *(code **)(lVar34 + _DAT_112e37078) = pcVar23;
    lVar5 = _DAT_112e37080;
    *(undefined8 *)(lVar34 + _DAT_112e37080) = uVar31;
    lVar6 = _DAT_112e37088;
    *(long *)(lVar34 + _DAT_112e37088) = lVar29;
    pdVar4 = (double *)(lVar34 + _DAT_112e37090);
    *pdVar4 = dVar52;
    pdVar4[1] = dVar53;
    *(undefined1 *)(pdVar4 + 2) = uVar51;
    *(byte *)(lVar34 + _DAT_112e37098) = (byte)param_9 & 1;
    func_0x000107c6157c(uVar50);
    func_0x000107c61174();
    func_0x000107c6157c(uVar45);
    func_0x000107c6157c(uVar32);
    func_0x000107c6157c(pcVar23);
    func_0x000107c6157c(uVar31);
    lVar39 = lVar29;
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar39 == 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x101eaf88c);
      (*pcVar23)();
    }
    uVar48 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f017be0);
    lVar40 = lVar39;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar39);
    func_0x000107c61170(uVar48);
    *(char *)(lVar34 + _DAT_112e370e0) = (char)lVar40;
    lVar40 = _DAT_112e370b8;
    *(undefined8 *)(lVar34 + _DAT_112e370b8) = param_3;
    uVar49 = *(undefined8 *)(lVar34 + lVar44);
    func_0x000107c61434(param_3);
    uVar48 = uVar49;
    func_0x000107c6157c();
    func_0x0001004575f0();
    func_0x000107c61574(uVar49);
    uVar49 = uVar48;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170();
    lVar39 = _DAT_112e37058;
    *(undefined8 *)(lVar34 + _DAT_112e37058) = uVar49;
    func_0x00010912802c();
    lVar41 = lVar29;
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar41 == 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x101eaf890);
      (*pcVar23)();
    }
    FUN_101ead900(uVar48,param_3,lVar41);
    func_0x000107c615e8(lVar41);
    *(byte *)(lVar34 + _DAT_112e37108) = (byte)uVar48 & 1;
    lVar41 = *(long *)(lVar46 + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar41 != 0) {
      uVar48 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f017c10);
      lVar44 = lVar41;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000107c61170(uVar48);
      *(long *)(lVar34 + _DAT_112e37120) = lVar44;
      *(int *)(lVar34 + _DAT_112e37128) = (int)param_4;
      uVar48 = *puVar3;
      uVar49 = puVar3[1];
      *puVar3 = param_5;
      puVar3[1] = param_6;
      func_0x000100cd559c(uVar48,uVar49);
      puVar1 = (undefined8 *)(lVar34 + _DAT_112e37178);
      *puVar1 = param_7;
      puVar1[1] = param_8;
      lVar42 = 0;
      FUN_101ea2b84();
      lVar44 = lVar42;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar44 + _DAT_112e36d58);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar44 + _DAT_112e36d88) = 0;
      *(undefined1 *)(lVar44 + _DAT_112e36d90) = 0;
      *(undefined8 *)(lVar44 + _DAT_112e36d80) = 0;
      *(undefined8 *)(lVar44 + _DAT_112e36d60) = uVar35;
      *(undefined8 *)(lVar44 + _DAT_112e36d68) = uVar36;
      *(long *)(lVar44 + _DAT_112e36d70) = lVar29;
      *(undefined8 *)(lVar44 + _DAT_112e36d78) = uVar37;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar36);
      func_0x000107c61174(uVar37);
      func_0x000107c6157c(param_6);
      func_0x000100ba5290(param_7,param_8);
      plVar43 = &lStack_88;
      lStack_88 = lVar44;
      lStack_80 = lVar42;
      func_0x000107c61154(plVar43,PTR_s_init_1125d9248);
      *(long **)(lVar34 + _DAT_112e37198) = plVar43;
      plVar43 = &lStack_98;
      lStack_98 = lVar34;
      lStack_90 = lVar33;
      func_0x000107c61154(plVar43,PTR_s_init_1125d9248);
      FUN_101ea7764();
      lVar44 = _DAT_112e37198;
      lVar42 = *(long *)((long)plVar43 + _DAT_112e37198);
      if (lVar42 != 0) {
        puVar30 = &UNK_1104948b0;
        func_0x000107c613fc(&UNK_1104948b0,0x18,7);
        func_0x000107c61614(puVar30 + 0x10,plVar43);
        puVar1 = (undefined8 *)(lVar42 + _DAT_112e36d58);
        uVar48 = *puVar1;
        uVar49 = puVar1[1];
        *puVar1 = 0x101eafbcc;
        puVar1[1] = puVar30;
        func_0x000107c61174(lVar42);
        func_0x000107c6157c(puVar30);
        func_0x000100cd559c(uVar48,uVar49);
        func_0x000107c61574(puVar30);
        func_0x000107c61170(lVar42);
        lVar44 = *(long *)((long)plVar43 + lVar44);
        if (lVar44 != 0) {
          func_0x000107c61174();
          FUN_101ea18cc();
          func_0x000107c61170(lVar44);
        }
      }
      func_0x000107c61170(lVar46);
      func_0x000107c615e8(lVar41);
      func_0x000107c61574(pcVar23);
      func_0x000107c61574(uVar31);
      func_0x000107c61574(uVar45);
      func_0x000107c61574(uVar32);
      func_0x000107c61574(uVar50);
      func_0x000107c61170(lVar29);
      func_0x000107c61170(uVar35);
      func_0x000107c61170(uVar36);
      func_0x000107c61170(uVar37);
      puVar30 = &UNK_1104948d8;
      func_0x000107c613fc(&UNK_1104948d8,0x18,7);
      *(long **)(puVar30 + 0x10) = plVar43;
      pcStack_a8 = FUN_101eafbd4;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      puStack_b8 = &UNK_100f11710;
      puStack_b0 = &UNK_1104948f0;
      ppuVar38 = &puStack_c8;
      puStack_a0 = puVar30;
      func_0x000107c60bc4(ppuVar38);
      puVar30 = puStack_a0;
      func_0x000107c61174(plVar43);
      func_0x000107c61574(puVar30);
      func_0x000100f115fc(0);
      func_0x000107c614e8();
      func_0x000107c4c214(param_1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar38);
      puVar30 = PTR_PTR_1126a9728;
      func_0x000107c610f8(PTR_PTR_1126a9728);
      func_0x000107c47690();
      lVar29 = *(long *)(lVar26 + 0x48);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar29 != 0) {
        uVar31 = 0xd000000000000032;
        func_0x000107c5fadc(0xd000000000000032,0x800000010f017c30);
        lVar46 = lVar29;
        func_0x000107c3ebd4();
        func_0x000107c615e8(lVar29);
        func_0x000107c61170(uVar31);
        if ((int)lVar46 != 0) {
          uVar45 = *(undefined8 *)(lVar26 + 0x50);
          func_0x000107c41178();
          func_0x000107c61180();
          uVar31 = uVar45;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(uVar45);
          lVar46 = 0;
          FUN_101eaff40();
          lVar29 = lVar46;
          func_0x000107c610f8();
          *(undefined8 *)(lVar29 + _DAT_112e37498) = uVar31;
          plVar47 = &lStack_d8;
          lStack_d8 = lVar29;
          lStack_d0 = lVar46;
          func_0x000107c61154(plVar47,PTR_s_init_1125d9248);
          func_0x000107c5a610(puVar30);
          func_0x000107c61170(plVar47);
        }
        func_0x000107c61574(lVar26);
        func_0x000107c615e8(param_1);
        func_0x000107c61170(plVar43);
        func_0x000107c615e8(lVar27);
        func_0x000107c615e8(lVar28);
        return;
      }
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x101eaf894);
      (*pcVar23)();
    }
    func_0x000107c61170(lVar46);
    func_0x000107c61574(pcVar23);
    func_0x000107c61574(uVar31);
    func_0x000107c61574(uVar45);
    func_0x000107c61574(uVar32);
    func_0x000107c61574(uVar50);
    func_0x000107c61170(lVar29);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c615e8(lVar28);
    func_0x000107c615e8(lVar27);
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar39));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar44));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar42));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar5));
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar6));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar7));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar8));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar9));
    func_0x000107c6142c(*(undefined8 *)(lVar34 + lVar40));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar10));
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar11));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar12));
    func_0x000107c615e8(*(undefined8 *)(lVar34 + lVar13));
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar14));
    func_0x000107c615e8(*puVar1);
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar15));
    func_0x00010006e7f4(puVar2);
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar16));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar17));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar18));
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar19));
    func_0x000100cd559c(*puVar3,puVar3[1]);
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar20));
    func_0x000107c61170(*(undefined8 *)(lVar34 + lVar21));
    func_0x000107c61574(*(undefined8 *)(lVar34 + lVar22));
    func_0x000107c61464(lVar34,lVar33,0x1b0,7);
  }
  func_0x000107c61574(lVar26);
  return;
}



/* Entry: 101eaf894; end: 101eaf993;  */

void FUN_101eaf894(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar9 = *(long *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar9 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c4c9c0();
    func_0x000107c61180();
    lVar6 = 0;
    func_0x000101ea5910();
    lVar7 = lVar6;
    func_0x000107c613fc();
    puVar8 = PTR__OBJC_CLASS___NSCache_1126b3388;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar7 + 0x58) = 1;
    *(undefined8 *)(lVar7 + 0x50) = 1;
    *(undefined8 *)(lVar7 + 0x48) = 1;
    *(undefined8 *)(lVar7 + 0x10) = uVar2;
    *(undefined8 *)(lVar7 + 0x18) = uVar3;
    *(undefined8 *)(lVar7 + 0x20) = uVar4;
    *(undefined8 *)(lVar7 + 0x28) = param_3;
    *(undefined **)(lVar7 + 0x30) = puVar8;
    *(long *)(lVar7 + 0x38) = lVar9;
    *(undefined8 *)(lVar7 + 0x40) = uVar5;
    param_1[3] = lVar6;
    param_1[4] = (long)&PTR_DAT_110493c68;
    *param_1 = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eaf994);
  (*pcVar1)();
}


