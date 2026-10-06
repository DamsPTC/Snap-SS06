/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103add090; end: 103add1d7;  */

undefined8 FUN_103add090(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar9 = uVar2;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000101345fdc(0);
  uVar4 = uVar9;
  func_0x000107c5fc54(uVar9,uVar3);
  func_0x000107c61170(uVar9);
  uVar9 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    uVar7 = uVar9;
    if (0x7fffffffffffffff < uVar4) {
      uVar7 = uVar4;
    }
    func_0x000107c60480();
  }
  uVar8 = 0;
  uVar3 = 7;
  do {
    if (uVar7 == uVar8) {
      uVar3 = 0xffffffffffffffff;
      break;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103add1c4);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar8;
      func_0x000100fb1534(uVar8,uVar4);
    }
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103add18c);
      (*pcVar1)();
    }
    uVar6 = uVar5;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar5);
    uVar8 = uVar8 + 1;
  } while ((int)uVar6 != 5);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar4);
  return uVar3;
}



/* Entry: 103add1d8; end: 103add2c3;  */

undefined1  [16] FUN_103add1d8(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == '\0') {
    func_0x000107c602fc(0x1a);
    uVar2 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    func_0x00010011df08();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c5fb78(uVar3,param_2);
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
  }
  auVar1._8_8_ = 0x800000010f19cfd0;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 103add2c4; end: 103add303;  */

void FUN_103add2c4(long *param_1,code *param_2,long param_3)

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



/* Entry: 103add304; end: 103add3b7;  */

void FUN_103add304(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  plVar8 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103add3b8;
  plVar8[0x2a] = lVar9;
  plVar8[0x2b] = lVar4;
  *(undefined1 *)(plVar8 + 0x31) = uVar7;
  plVar8[0x28] = lVar6;
  plVar8[0x29] = lVar3;
  plVar8[0x26] = lVar5;
  plVar8[0x27] = lVar2;
  plVar8[0x25] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adb18c,0,0);
  return;
}



/* Entry: 103add3b8; end: 103add3f3;  */

void FUN_103add3b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103add3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103add3f4; end: 103add417;  */

void FUN_103add3f4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      **(undefined8 **)(*(long *)(lVar5 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
      return;
    }
    FUN_103addd84();
    puVar1 = &UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 2;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar2);
  return;
}



/* Entry: 103add418; end: 103add837;  */

undefined1  [16] FUN_103add418(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [8];
  long lStack_58;
  char cStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5fcbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    uVar4 = 0xe700000000000000;
    uVar5 = 0x73736563637573;
  }
  else {
    uVar4 = 0xe900000000000064;
    lStack_58 = param_1;
    func_0x000107c614b0(param_1);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar2 = puVar6;
    func_0x000107c6147c(puVar6,&lStack_58,uVar5,lVar1,6);
    if ((int)puVar2 == 0) {
      lStack_48 = param_1;
      func_0x000107c614b0(param_1);
      plVar3 = &lStack_58;
      func_0x000107c6147c(plVar3,&lStack_48,uVar5,&UNK_1106cd970,6);
      if ((int)plVar3 != 0) {
        if ((cStack_50 == '\x02') && (lStack_58 == 8)) {
          uVar5 = 0x656c6c65636e6163;
          goto LAB_103add5c8;
        }
        func_0x000103addd68();
      }
      lStack_48 = param_1;
      func_0x000107c614b0(param_1);
      plVar3 = &lStack_58;
      func_0x000107c6147c(plVar3,&lStack_48,uVar5,&UNK_1106cd970,6);
      if ((int)plVar3 != 0) {
        if ((cStack_50 == '\x02') && (lStack_58 == 7)) {
          uVar4 = 0xe900000000000074;
          uVar5 = 0x6e656e616d726570;
          goto LAB_103add5c8;
        }
        func_0x000103addd68();
      }
      uVar4 = 0xe900000000000065;
      uVar5 = 0x6c62617972746572;
    }
    else {
      uVar5 = 0x656c6c65636e6163;
      (**(code **)(lVar7 + 8))(puVar6,lVar1);
    }
  }
LAB_103add5c8:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 103add838; end: 103addbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103add838(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5fb10();
  lVar15 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(param_2 + _DAT_113077640);
  func_0x000107c5fb04(lVar14);
  func_0x000100e8b654();
  uVar11 = 0;
  lVar5 = lVar14;
  func_0x000107c60214(lVar14,0,PTR___sSSN_11034da80,lVar4);
  (**(code **)(lVar15 + 8))(lVar14,lVar3);
  lVar4 = 0;
  if (uVar11 >> 0x3c < 0xf) {
    lVar4 = lVar5;
  }
  uVar12 = 0xc000000000000000;
  if (uVar11 >> 0x3c < 0xf) {
    uVar12 = uVar11;
  }
  lVar5 = lVar4;
  func_0x000107c5ee20(lVar4,uVar12);
  func_0x00010006c090(lVar4,uVar12);
  func_0x000107c5389c(param_1);
  func_0x000107c61170(lVar5);
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar13 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    func_0x00010006c00c(lVar4,uVar12);
    lVar5 = lVar4;
    func_0x000107c5ee20(lVar4,uVar12);
    func_0x000107c45ae0();
    puStack_68 = puVar13;
    func_0x000107c61170(lVar5);
    func_0x00010006c090(lVar4,uVar12);
    uVar9 = *puVar1;
    uVar2 = puVar1[1];
    puVar6 = PTR_PTR_1126becd8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar9,uVar2);
    lVar3 = 0;
    func_0x000107c5ee20(0,0xc000000000000000);
    func_0x000107c48a8c();
    func_0x000107c61170(uVar9);
    func_0x000107c61170();
    func_0x0001029b8520();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x20) = puVar6;
    puVar7 = PTR_PTR_1126bece0;
    func_0x000107c610f8(PTR_PTR_1126bece0);
    func_0x000107c61174();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar13 = PTR___sSSN_11034da80;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_70 = puVar6;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    uVar9 = 0;
    func_0x000101345fdc(0);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar9);
    func_0x000107c61574(lVar3);
    puVar6 = puVar10;
    func_0x000107c5fc48(puVar10,puVar13);
    func_0x000107c5fc48(puVar10,puVar13);
    func_0x000107c461c0(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    puVar6 = PTR_PTR_1126bece8;
    func_0x000107c610f8(PTR_PTR_1126bece8);
    func_0x000107c46524();
    uVar9 = *(undefined8 *)(param_2 + _DAT_113077630);
    func_0x000107c5fadc(uVar9,((undefined8 *)(param_2 + _DAT_113077630))[1]);
    func_0x000107c54580(puVar6);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(param_2 + _DAT_113077638);
    func_0x000107c5fadc(uVar9,((undefined8 *)(param_2 + _DAT_113077638))[1]);
    func_0x000107c5457c(puVar6);
    func_0x000107c61170(uVar9);
    puVar13 = PTR_PTR_1126becf0;
    func_0x000107c610f8(PTR_PTR_1126becf0);
    puVar10 = puStack_68;
    func_0x000107c48720();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    func_0x00010006c090(lVar4,uVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puStack_70);
  }
  return puVar13;
}



/* Entry: 103addbdc; end: 103addd5b;  */

undefined1  [16] FUN_103addbdc(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lStack_58;
  byte bStack_50;
  ulong uStack_48;
  
  uStack_48 = param_1;
  func_0x000107c614b0();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar1 = &lStack_58;
  puVar4 = &uStack_48;
  func_0x000107c6147c(plVar1,puVar4,uVar5,&UNK_1106cd970,6);
  if ((int)plVar1 != 0) {
    puVar4 = (ulong *)(ulong)bStack_50;
    if (bStack_50 == 2 && lStack_58 == 1) {
      uVar5 = 0xeb000000006c696e;
      uVar6 = 0x5f636f6470616e73;
      goto LAB_103addd3c;
    }
    func_0x000103addd68();
  }
  uVar5 = 0xea00000000006564;
  func_0x000107c5ed2c();
  uVar2 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar6 = 0x6f6365645f676d69;
  if ((uVar3 == 0xd000000000000027) && (puVar4 == (ulong *)0x800000010f19ccf0)) {
    func_0x000107c6142c(0x800000010f19ccf0);
  }
  else {
    func_0x000107c605b8(uVar3,puVar4,0xd000000000000027,0x800000010f19ccf0,0);
    func_0x000107c6142c(puVar4);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0xe900000000000061;
      uVar6 = 0x6964656d5f646461;
    }
  }
LAB_103addd3c:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 103addd5c; end: 103addd83;  */

/* WARNING: Possible PIC construction at 0x000103adb998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adba24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adb99c) */
/* WARNING: Removing unreachable block (ram,0x000103adba28) */

void FUN_103addd5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x64616f6c7075;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar2 = 0x6c696166;
    func_0x000107c5fadc(0x6c696166,0xe400000000000000,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined1 *)(unaff_x20 + 0x20));
    func_0x000107c5fadc(0x64616f6c7075,0xe600000000000000);
    func_0x000106f472ec(uVar1,uVar2,uVar3,1);
  }
  else {
    uVar2 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined1 *)(unaff_x20 + 0x20));
    func_0x000107c5fadc(0x64616f6c7075,0xe600000000000000);
    func_0x000106f472ec(uVar1,uVar2,uVar3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103addd84; end: 103adddfb;  */

void FUN_103addd84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5052c;
  func_0x000107c61520(&UNK_10dc5052c,&UNK_1106cd970);
  puRam0000000112fe8b60 = puVar1;
  return;
}



/* Entry: 103adddfc; end: 103adde8b;  */

void FUN_103adddfc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x48);
  plVar8 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x103adecd8;
  *(undefined1 *)(plVar8 + 0x12) = uVar7;
  plVar8[0xd] = lVar6;
  plVar8[0xe] = lVar9;
  plVar8[0xb] = lVar5;
  plVar8[0xc] = lVar3;
  plVar8[9] = lVar4;
  plVar8[10] = lVar2;
  plVar8[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adaaa8,0,0);
  return;
}



/* Entry: 103adde8c; end: 103adde9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adde8c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar3,uVar4);
      func_0x000107c50040(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103addea0; end: 103addf1f;  */

undefined8 FUN_103addea0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103adddc4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103addf20; end: 103addf6b;  */

void FUN_103addf20(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = param_1;
  }
  uVar2 = 0xc000000000000000;
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = param_2;
  }
  func_0x000100de78a0();
  puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar4);
  return;
}



/* Entry: 103addf6c; end: 103addffb;  */

void FUN_103addf6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103addffc;
  *(undefined1 *)((long)plVar8 + 0x59) = uVar7;
  plVar8[0x27] = lVar6;
  plVar8[0x28] = lVar9;
  plVar8[0x25] = lVar5;
  plVar8[0x26] = lVar3;
  plVar8[0x23] = lVar4;
  plVar8[0x24] = lVar2;
  plVar8[0x22] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ada400,0,0);
  return;
}



/* Entry: 103addffc; end: 103ade067;  */

void FUN_103addffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ade064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103ade068; end: 103ade06f;  */

void FUN_103ade068(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5ceec(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ade070; end: 103ade0a3;  */

void FUN_103ade070(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103ada780(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103ade0a4; end: 103ade0a7;  */

void FUN_103ade0a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  if (param_5 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_1);
      uVar1 = 0x112fe8b88;
      func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
      func_0x000107c5fcb4(&stack0xffffffffffffffc0,uVar1);
      return;
    }
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  else {
    func_0x000107c614b0(param_5);
  }
  uVar1 = 0x112fe8b88;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  func_0x000107c5fcb0(&stack0xffffffffffffffc0,uVar1);
  return;
}



/* Entry: 103ade0a8; end: 103ade10b;  */

void FUN_103ade0a8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x112fe8b88;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ade10c; end: 103ade183;  */

void FUN_103ade10c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  if (param_5 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_1);
      uVar1 = 0x112fe8b88;
      func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
      func_0x000107c5fcb4(&stack0xffffffffffffffc0,uVar1);
      return;
    }
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  else {
    func_0x000107c614b0(param_5);
  }
  uVar1 = 0x112fe8b88;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  func_0x000107c5fcb0(&stack0xffffffffffffffc0,uVar1);
  return;
}



/* Entry: 103ade184; end: 103ade18b;  */

void FUN_103ade184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000103adddc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(puVar4 + -extraout_x12);
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x10))((undefined1 *)((long)puVar5 + (long)iVar1),param_3,lVar2);
  (**(code **)(lVar6 + 0x38))((undefined1 *)((long)puVar5 + (long)iVar1),0,1,lVar2);
  *puVar5 = param_1;
  puVar5[1] = param_2;
  FUN_103addea0(puVar5,puVar4);
  func_0x00010006c00c(param_1,param_2);
  FUN_103addea0(puVar4,*(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x28));
  func_0x000107c61450(lVar3);
  return;
}



/* Entry: 103ade18c; end: 103ade1ab;  */

void FUN_103ade18c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103ade1ac; end: 103ade1b3;  */

void FUN_103ade1ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = param_1;
  FUN_103addd84();
  puVar2 = &UNK_1106cd970;
  func_0x000107c613f8(&UNK_1106cd970,puVar1,0,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar1 = puVar2;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar4,uVar3);
  return;
}



/* Entry: 103ade1b4; end: 103ade1d3;  */

void FUN_103ade1b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103ade1d4; end: 103ade1db;  */

void FUN_103ade1d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103addd84();
  puVar1 = &UNK_1106cd970;
  func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
  *param_1 = 7;
  *(undefined1 *)(param_1 + 1) = 2;
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



/* Entry: 103ade1dc; end: 103ade1fb;  */

void FUN_103ade1dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103ade1fc; end: 103ade2ff;  */

void FUN_103ade1fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long unaff_x22;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar16 = *(long *)(unaff_x20 + 0x40);
  lVar24 = *(long *)(unaff_x20 + 0x50);
  lVar23 = *(long *)(unaff_x20 + 0x48);
  lVar21 = *(long *)(unaff_x20 + 0x60);
  lVar19 = *(long *)(unaff_x20 + 0x58);
  lVar17 = *(long *)(unaff_x20 + 0x68);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x70);
  lVar22 = *(long *)(unaff_x20 + 0x80);
  lVar20 = *(long *)(unaff_x20 + 0x78);
  lVar3 = *(long *)(unaff_x20 + 0x88);
  lVar7 = *(long *)(unaff_x20 + 0x90);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x98);
  lVar18 = *(long *)(unaff_x20 + 0xa0);
  uVar10 = *(undefined1 *)(unaff_x20 + 0xa8);
  plVar15 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = 0x103aded3c;
  *(undefined1 *)((long)plVar15 + 0x163) = uVar10;
  plVar15[0x28] = lVar18;
  *(undefined1 *)((long)plVar15 + 0x162) = uVar9;
  plVar15[0x27] = lVar7;
  plVar15[0x26] = lVar3;
  plVar15[0x24] = lVar5;
  plVar15[0x25] = lVar2;
  plVar15[0x22] = lVar4;
  plVar15[0x23] = lVar1;
  plVar11 = (long *)0x460;
  func_0x000107c615b8();
  plVar15[0x29] = (long)plVar11;
  *plVar11 = (long)plVar15;
  plVar11[1] = (long)FUN_103ad7378;
  plVar11[99] = lVar4;
  plVar11[0x62] = lVar22;
  plVar11[0x61] = lVar20;
  *(undefined1 *)(plVar11 + 0x8a) = uVar8;
  plVar11[0x60] = lVar17;
  plVar11[0x5f] = lVar21;
  plVar11[0x5e] = lVar19;
  plVar11[0x5d] = lVar24;
  plVar11[0x5c] = lVar23;
  plVar11[0x5b] = lVar16;
  plVar11[0x5a] = lVar6;
  plVar11[0x59] = lVar2;
  plVar11[0x58] = lVar5;
  plVar11[0x57] = lVar1;
  plVar11[0x56] = lVar13;
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar12 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[100] = uVar12;
  lVar13 = 0;
  func_0x000103adddc4();
  plVar11[0x65] = lVar13;
  uVar12 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xf;
  uVar14 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x66] = uVar14;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x67] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad7c80,0,0);
  return;
}



/* Entry: 103ade300; end: 103ade31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ade300(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___sytN_11034f1b0;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5fd50(*(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112fe89c8;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112fe89c8,auStack_60,0,0);
    lVar4 = *(long *)(lVar2 + lVar4);
    func_0x000107c6157c(lVar4);
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fd50(lVar4,puVar1 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 103ade320; end: 103ade43b;  */

long * FUN_103ade320(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar3 = param_2[1];
    if (uVar3 >> 0x3c < 0xf) {
      lVar4 = *param_2;
      func_0x00010006c00c(lVar4,uVar3);
      *param_1 = lVar4;
      param_1[1] = uVar3;
    }
    else {
      lVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar4;
    }
    lVar5 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar6 = *(long *)(lVar2 + -8);
    lVar4 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103ade43c; end: 103ade4c3;  */

void FUN_103ade43c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*param_1);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_1 + (long)iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ade4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 103ade4c4; end: 103ade5af;  */

undefined8 * FUN_103ade4c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = param_2[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = *param_2;
    func_0x00010006c00c(uVar5,uVar3);
    *param_1 = uVar5;
    param_1[1] = uVar3;
  }
  else {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
  }
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar6 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ade5b0; end: 103ade72b;  */

undefined8 * FUN_103ade5b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar5 = param_2[1];
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      uVar7 = *param_2;
      func_0x00010006c00c(uVar7,uVar5);
      uVar6 = *param_1;
      uVar1 = param_1[1];
      *param_1 = uVar7;
      param_1[1] = uVar5;
      func_0x00010006c090(uVar6,uVar1);
      goto LAB_103ade648;
    }
    func_0x0001006e5814(param_1);
  }
  else if (uVar5 >> 0x3c < 0xf) {
    uVar6 = *param_2;
    func_0x00010006c00c(uVar6,uVar5);
    *param_1 = uVar6;
    param_1[1] = uVar5;
    goto LAB_103ade648;
  }
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
LAB_103ade648:
  lVar8 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar3 = (long)param_1 + lVar8;
  (*pcVar10)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar8;
  (*pcVar10)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar9 + 0x18))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar2);
      return param_1;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar2);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar2);
    return param_1;
  }
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103ade72c; end: 103ade7eb;  */

undefined8 * FUN_103ade72c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103ade7ec; end: 103ade937;  */

undefined8 * FUN_103ade7ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    uVar5 = param_2[1];
    if (uVar5 >> 0x3c < 0xf) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1[1] = uVar5;
      func_0x00010006c090(uVar1);
      goto LAB_103ade854;
    }
    func_0x0001006e5814(param_1);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
LAB_103ade854:
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = (long)param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    return param_1;
  }
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103ade938; end: 103ade94f;  */

void FUN_103ade938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103ade950; end: 103ade9c3;  */

void FUN_103ade950(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dc501a8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103ade9c4; end: 103adea2b;  */

void FUN_103ade9c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106cd898;
  if (lRam0000000112fe8c20 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fe8c20 = param_1;
  }
  return;
}



/* Entry: 103adea2c; end: 103adea7b;  */

undefined8 * FUN_103adea2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103adea00(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103addd68(uVar3,uVar2);
  return param_1;
}



/* Entry: 103adea7c; end: 103adeab7;  */

undefined8 * FUN_103adea7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103addd68(uVar3,uVar2);
  return param_1;
}



/* Entry: 103adeab8; end: 103adeb87;  */

int FUN_103adeab8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103adeb88; end: 103adec37;  */

void FUN_103adeb88(void)

{
  FUN_103add2c4(0x112fe8c38,0x103ade9ec,&UNK_10dc5030c);
  return;
}



/* Entry: 103adec38; end: 103adec4b;  */

void FUN_103adec38(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106cd990;
  if (lRam0000000112fe8c58 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fe8c58 = param_1;
  }
  return;
}



/* Entry: 103adec4c; end: 103adec8f;  */

void FUN_103adec4c(long param_1,long *param_2,long param_3)

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



/* Entry: 103adec90; end: 103aded53;  */

void FUN_103adec90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103aded54; end: 103adf033;  */

void FUN_103aded54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x4b636f4470616e73;
  uVar1 = 0xec00000064497965;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000014;
    uVar1 = 0x800000010f19d160;
  }
  uVar2 = 0xeb000000006e6f69;
  uVar4 = 0x74616e6974736564;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0x636f4470616e73;
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000017;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f19d120;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103adf034; end: 103adf197;  */

void FUN_103adf034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x4b636f4470616e73;
  uVar1 = 0xec00000064497965;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000014;
    uVar1 = 0x800000010f19d160;
  }
  uVar2 = 0xeb000000006e6f69;
  uVar4 = 0x74616e6974736564;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0x636f4470616e73;
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000017;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f19d120;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103adf198; end: 103adf1bb;  */

void FUN_103adf198(undefined1 *param_1,undefined1 param_2)

{
  FUN_103ae3c14();
  *param_1 = param_2;
  return;
}



/* Entry: 103adf1bc; end: 103adf1d3;  */

undefined1  [16] FUN_103adf1bc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103adf1d4; end: 103adf223;  */

void FUN_103adf1d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103ae5b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103adf224; end: 103adf463;  */

void FUN_103adf224(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long extraout_x8;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [23];
  undefined1 uStack_71;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112fe8e60;
  func_0x0001000285a8(0x112fe8e60,&UNK_10dc50848);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000103ae5b2c(param_1,uVar3);
  FUN_103ae5b50();
  puVar7 = &UNK_1106ce1b0;
  func_0x000107c606ec(auStack_90 + -extraout_x8,&UNK_1106ce1b0,&UNK_1106ce1b0,param_1,uVar3,uVar4);
  lVar2 = *unaff_x20;
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar6 = 0;
    puVar7 = (undefined *)0xf000000000000000;
  }
  else {
    lVar6 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
  }
  auStack_88[0] = 0;
  uVar3 = 0x112d56fe0;
  lStack_70 = lVar6;
  puStack_68 = puVar7;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  uVar4 = uVar3;
  FUN_103ae5bb0();
  func_0x000107c60554(&lStack_70,auStack_88,lVar1,uVar3,uVar4);
  if (unaff_x21 == 0) {
    func_0x0001000b44c0(lStack_70,puStack_68);
    lStack_70._0_1_ = 1;
    func_0x000107c6054c(unaff_x20[1],&lStack_70,lVar1);
    lStack_70._0_1_ = 2;
    func_0x000107c60550(unaff_x20[2],&lStack_70,lVar1);
    lStack_70 = CONCAT71(lStack_70._1_7_,3);
    func_0x000107c6053c(unaff_x20[3],unaff_x20[4],&lStack_70,lVar1);
    lStack_58 = unaff_x20[6];
    lStack_60 = unaff_x20[5];
    puStack_68 = (undefined *)unaff_x20[6];
    lStack_70 = unaff_x20[5];
    uStack_71 = 4;
    plVar5 = &lStack_60;
    func_0x000103ae5c20(plVar5,auStack_88,0x112d56fe0,&UNK_10d91dda0);
    func_0x000101480d6c();
    func_0x000107c60530(&lStack_70,&uStack_71,lVar1,PTR___s10Foundation4DataVN_110350ae0,plVar5);
  }
  func_0x0001000b44c0(lStack_70,puStack_68);
  (**(code **)(lVar8 + 8))(auStack_90 + -extraout_x8,lVar1);
  return;
}



/* Entry: 103adf464; end: 103adf4af;  */

void FUN_103adf464(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103ae3c78(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 103adf4b0; end: 103adf4c3;  */

void FUN_103adf4b0(void)

{
  FUN_103adf224();
  return;
}



/* Entry: 103adf4c4; end: 103adf4d3;  */

void FUN_103adf4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103adf4d4; end: 103adf51f; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl transcodeStatusReporter] */

void FUN_103adf4d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6157c();
  func_0x000107c4b940(uVar2);
  lVar1 = param_1 + 0x68;
  func_0x000107c61618(lVar1);
  func_0x000107c5d278(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103adf520; end: 103adf583; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl setTranscodeStatusReporter:] */

void FUN_103adf520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c4b940(uVar1);
  func_0x000107c61604(param_1 + 0x68,param_3);
  func_0x000107c5d278(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103adf584; end: 103adf727;  */

undefined1  [16] FUN_103adf584(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x60,auStack_68,0,0);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar9 = param_1;
    uVar6 = param_2;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + lVar9 * 8);
      func_0x000107c6142c(lVar8);
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103adf600);
        (*pcVar1)();
      }
      goto LAB_103adf60c;
    }
    func_0x000107c6142c(lVar8);
  }
  lVar8 = 0;
LAB_103adf60c:
  func_0x000107c61428(unaff_x20 + 0x60,auStack_80,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c61558(uVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0x8000000000000000;
  func_0x000101687ce0(lVar8,param_1,param_2,uVar2);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar7;
  func_0x000107c614a8(auStack_80);
  lVar9 = unaff_x20 + 0x68;
  func_0x000107c61618();
  if (lVar9 == 0) {
    lVar4 = 0;
  }
  else {
    puVar3 = &UNK_1106cde30;
    func_0x000107c613fc(&UNK_1106cde30,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar9);
    lVar4 = 0;
    func_0x000103ae8d6c();
    func_0x000107c613fc();
    puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000107c453e4();
    func_0x000107c615e8(lVar9);
    *(undefined **)(lVar4 + 0x40) = puVar5;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined1 *)(lVar4 + 0x50) = 0;
    *(long *)(lVar4 + 0x10) = param_1;
    *(ulong *)(lVar4 + 0x18) = param_2;
    *(code **)(lVar4 + 0x30) = FUN_103ae8c54;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(code **)(lVar4 + 0x20) = FUN_103ae4f54;
    *(undefined **)(lVar4 + 0x28) = puVar3;
  }
  auVar10._8_8_ = lVar4;
  auVar10._0_8_ = lVar8;
  return auVar10;
}



/* Entry: 103adf728; end: 103adf933;  */

long FUN_103adf728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46814();
  func_0x000107c61170(param_2);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lStack_50 = 0;
    func_0x000107c3e418();
    func_0x000107c615e8(lVar2);
    lVar2 = lStack_50;
    param_5 = (undefined1 *)plVar8;
    if (lStack_50 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar3 = lStack_50;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar7 = lVar3;
      func_0x000107c4b85c();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_3);
      }
      uVar4 = 0x6c696166;
      func_0x000107c5fadc(0x6c696166,0xe400000000000000);
      func_0x000106f47e10(uVar9,lVar7,uVar4,1);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar4);
      uVar9 = 2;
      pcVar6 = (code *)0x12;
      lVar7 = 0;
      lStack_50 = lVar2;
      func_0x000100029b9c(2,0x12,0);
      if ((int)uVar9 != 0) {
        FUN_103ae4a70();
        lVar5 = lVar3;
        func_0x000107c61174();
        pcVar6 = (code *)&UNK_1106ce120;
        func_0x000107c61658(&lStack_50,&UNK_1106ce120,uVar9);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(lVar3);
      func_0x000107c61170();
      goto LAB_103adf8f8;
    }
  }
  plVar8 = (long *)param_5;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  pcVar6 = (code *)0x0;
  lVar7 = 1;
  func_0x000106f47e10(uVar9,0,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
LAB_103adf8f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  func_0x000107c60e78();
  (*pcVar6)();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = 0x6c696166;
    func_0x000107c61428(lVar7 + 0x10,auStack_b8,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61648();
    if (lVar7 != 0) {
      FUN_103adfa2c(plVar8,param_6,param_7);
      func_0x000107c61574(lVar7);
    }
    uVar9 = 0xe400000000000000;
  }
  else {
    uVar9 = 0xe700000000000000;
    lVar2 = 0x73736563637573;
  }
  func_0x000107c5fadc(lVar2,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000106f479b0(param_8,0,lVar2,1);
  func_0x000107c61170(lVar2);
  return lVar2;
}



/* Entry: 103adf934; end: 103adfa2b;  */

void FUN_103adf934(ulong param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  (*param_2)(param_1,0);
  if ((param_1 & 1) == 0) {
    uVar2 = 0x6c696166;
    func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 != 0) {
      FUN_103adfa2c(param_5,param_6,param_7);
      func_0x000107c61574(param_4);
    }
    uVar1 = 0xe400000000000000;
  }
  else {
    uVar1 = 0xe700000000000000;
    uVar2 = 0x73736563637573;
  }
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000106f479b0(param_8,0,uVar2,1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103adfa2c; end: 103adfb3b;  */

/* WARNING: Possible PIC construction at 0x000103adfb1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adfb20) */

void FUN_103adfa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46814();
  func_0x000107c61170(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_1106cddb8;
  func_0x000107c613fc(&UNK_1106cddb8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(long *)(puVar2 + 0x18) = unaff_x20;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c();
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_1);
  func_0x0001009548b0(0,4,0x40,0,0,0,&UNK_10dc50720,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103adfb3c; end: 103adfe6f; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl persistTranscodeWithSnapDoc:snapRendererDestination:destination:mediaId:crossPostToStoryInfo:completion:] */

void FUN_103adfb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_6);
  if (param_7 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_1);
    uVar2 = 0xf000000000000000;
  }
  else {
    uVar2 = param_2;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_1);
    lVar1 = param_7;
    func_0x000107c61174(param_7);
    func_0x000107c5ee30(param_7);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_8);
  FUN_103ae3f94(param_3,param_4,param_5,param_6,param_2,param_7,uVar2,param_1,param_8);
  func_0x000107c60bd0(param_8);
  func_0x000107c60bd0(param_8);
  func_0x0001000b44c0(param_7,uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103adfe70; end: 103adfeb3;  */

void FUN_103adfe70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_15;
  *(undefined8 *)(unaff_x22 + 0x100) = param_16;
  *(undefined1 *)(unaff_x22 + 0x138) = param_13;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_12;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_9;
  *(undefined8 *)(unaff_x22 + 200) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adfeb4,0,0);
  return;
}



/* Entry: 103adfeb4; end: 103adffa3;  */

void FUN_103adfeb4(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0xc0) != 0) {
    FUN_103ae8ae0(2);
  }
  plVar1 = (long *)0x410;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103adff3c;
                    /* WARNING: Could not recover jumptable at 0x000103adff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103ae6614(*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),0,*(undefined8 *)(unaff_x22 + 0xe0),
                *(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xf0),
                *(undefined1 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 103adffa4; end: 103ae014b;  */

void FUN_103adffa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x70,0,0);
  puVar6 = (undefined8 *)(lVar10 + 0x10);
  func_0x000107c61648();
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *(ulong *)(unaff_x22 + 0xa8);
    FUN_103ae13f8(uVar7,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8));
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0xc0) != 0) {
        FUN_103ae8ae0(7);
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
      pcVar3 = *(code **)(unaff_x22 + 0xf8);
      uVar8 = uVar2;
      func_0x000107c61174(uVar2);
      (*pcVar3)(uVar2,uVar5,uVar1,uVar4,0);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(uVar5);
      lVar10 = *(long *)(unaff_x22 + 0xa0);
      func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x58,0,0);
      lVar10 = lVar10 + 0x10;
      func_0x000107c61648();
      goto joined_r0x000103ae0110;
    }
    func_0x000107c61574();
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  pcVar3 = *(code **)(unaff_x22 + 0xf8);
  lVar10 = *(long *)(unaff_x22 + 0xa0);
  FUN_103ae4a70();
  puVar9 = &UNK_1106ce120;
  func_0x000107c613f8(&UNK_1106ce120,puVar6,0,0);
  *puVar6 = 6;
  (*pcVar3)(0,0,0xffffffffffffffff,0,puVar9);
  func_0x000107c614ac(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x88,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61648();
joined_r0x000103ae0110:
  if (lVar10 != 0) {
    func_0x000103ae1504(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                        *(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c61574(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae0148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae014c; end: 103ae033b;  */

void FUN_103ae014c(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  puVar2 = (undefined8 *)(lVar6 + 0x10);
  func_0x000107c61648();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c4b940(puVar2[10]);
    func_0x000107c61428(puVar2 + 0xc,unaff_x22 + 0x28,0,0);
    lVar6 = puVar2[0xc];
    if (*(long *)(lVar6 + 0x10) != 0) {
      lVar8 = *(long *)(unaff_x22 + 0xa8);
      uVar4 = *(ulong *)(unaff_x22 + 0xb0);
      func_0x000107c61434(lVar6);
      func_0x000100029284();
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(unaff_x22 + 0xb8);
        lVar8 = *(long *)(*(long *)(lVar6 + 0x38) + lVar8 * 8);
        func_0x000107c6142c(lVar6);
        func_0x000107c5d278(puVar2[10]);
        func_0x000107c61574();
        if (lVar8 == lVar7) {
          if (*(long *)(unaff_x22 + 0xc0) != 0) {
            FUN_103ae8d8c(*(undefined8 *)(unaff_x22 + 0x130));
            FUN_103ae8ae0();
          }
          uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
          pcVar1 = *(code **)(unaff_x22 + 0xf8);
          func_0x000107c614b0(uVar5);
          (*pcVar1)(0,0,0xffffffffffffffff,0,uVar5);
          func_0x000107c614ac(uVar5);
          func_0x000107c614ac(uVar5);
          lVar6 = *(long *)(unaff_x22 + 0xa0);
          func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x58,0,0);
          lVar6 = lVar6 + 0x10;
          func_0x000107c61648();
          goto joined_r0x000103ae0304;
        }
        goto LAB_103ae028c;
      }
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c5d278(puVar2[10]);
    func_0x000107c61574();
  }
LAB_103ae028c:
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  pcVar1 = *(code **)(unaff_x22 + 0xf8);
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  FUN_103ae4a70();
  puVar3 = &UNK_1106ce120;
  func_0x000107c613f8(&UNK_1106ce120,puVar2,0,0);
  *puVar2 = 6;
  (*pcVar1)(0,0,0xffffffffffffffff,0,puVar3);
  func_0x000107c614ac(puVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x40,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
joined_r0x000103ae0304:
  if (lVar6 != 0) {
    func_0x000103ae1504(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                        *(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c61574(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae033c; end: 103ae042f; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl firstTranscodeWithMediaId:snapDoc:source:snapRendererDestination:destination:deriveVideoCodec:completion:] */

/* WARNING: Possible PIC construction at 0x000103ae0400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ae0404) */

void FUN_103ae033c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1106cdef8;
  func_0x000107c613fc(&UNK_1106cdef8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000103adfc5c(param_3,param_2,param_4,param_5,param_6,param_7,param_8,0x103ae5388,puVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103ae0430; end: 103ae04a7;  */

void FUN_103ae0430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5ed2c(param_5);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 103ae04a8; end: 103ae0653;  */

void FUN_103ae04a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c4b940();
  uVar4 = param_1;
  uVar5 = param_2;
  FUN_103adf584();
  puVar2 = &UNK_1106cdcf0;
  func_0x000107c613fc(&UNK_1106cdcf0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1106cdd18;
  func_0x000107c613fc(&UNK_1106cdd18,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = uVar4;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  *(undefined8 *)(puVar3 + 0x48) = uVar7;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(uVar7);
  func_0x000107c61434(param_2);
  uVar4 = 0;
  func_0x0001001ca524(0,4,0x40,0,0,0,&UNK_10dc50700,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61428(unaff_x20 + 0x58,auStack_78,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c61558(uVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0x8000000000000000;
  func_0x000102768548(uVar4,param_1,param_2,uVar7);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar6;
  func_0x000107c614a8(auStack_78);
  func_0x000107c5d278(uVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 103ae0654; end: 103ae067f;  */

void FUN_103ae0654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_8;
  *(undefined8 *)(unaff_x22 + 0x130) = param_9;
  *(undefined8 *)(unaff_x22 + 0x118) = param_6;
  *(undefined8 *)(unaff_x22 + 0x120) = param_7;
  *(undefined8 *)(unaff_x22 + 0x108) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae0680,0,0);
  return;
}



/* Entry: 103ae0680; end: 103ae0927;  */

void FUN_103ae0680(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  if (*(long *)(unaff_x22 + 0x118) != 0) {
    FUN_103ae8ae0(2);
  }
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x48,0,0);
  puVar2 = (undefined8 *)(lVar9 + 0x10);
  func_0x000107c61648();
  *(undefined8 **)(unaff_x22 + 0x138) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = (long *)0x190;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x140) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103ae0928;
    lVar9 = *(long *)(unaff_x22 + 0x100);
    lVar10 = *(long *)(unaff_x22 + 0x108);
    plVar3[0x1f] = *(long *)(unaff_x22 + 0x118);
    plVar3[0x20] = (long)puVar2;
    plVar3[0x1e] = unaff_x22 + 0x10;
    plVar6 = (long *)0xc0;
    func_0x000107c615b8();
    plVar3[0x21] = (long)plVar6;
    *plVar6 = (long)plVar3;
    plVar6[1] = (long)FUN_103ae1670;
    plVar6[0x13] = lVar10;
    plVar6[0x14] = (long)puVar2;
    plVar6[0x11] = (long)(plVar3 + 0xb);
    plVar6[0x12] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae10d4,0,0);
    return;
  }
  FUN_103ae4a70();
  puVar4 = &UNK_1106ce120;
  func_0x000107c613f8(&UNK_1106ce120,puVar2,0,0);
  *puVar2 = 0;
  func_0x000107c61654();
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x60,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61648();
  if (lVar9 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar9 + 0x50));
    func_0x000107c61428(lVar9 + 0x60,unaff_x22 + 0x78,0,0);
    lVar10 = *(long *)(lVar9 + 0x60);
    if (*(long *)(lVar10 + 0x10) != 0) {
      lVar13 = *(long *)(unaff_x22 + 0x100);
      uVar7 = *(ulong *)(unaff_x22 + 0x108);
      func_0x000107c61434(lVar10);
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
        lVar11 = *(long *)(unaff_x22 + 0x110);
        lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + lVar13 * 8);
        func_0x000107c6142c(lVar10);
        func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x50));
        func_0x000107c61574(lVar9);
        if (lVar13 == lVar11) {
          if (*(long *)(unaff_x22 + 0x118) != 0) {
            FUN_103ae8d8c(puVar4);
            FUN_103ae8ae0();
          }
          uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
          pcVar12 = *(code **)(unaff_x22 + 0x120);
          func_0x000107c614b0(puVar4);
          (*pcVar12)(0,0,0xffffffffffffffff,0,puVar4,0,0);
          func_0x000107c614ac(puVar4);
          func_0x000107c614cc(puVar4,unaff_x22 + 0xf0,unaff_x22 + 0xa8);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
          func_0x000107c60640(uVar5,uVar8);
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar8);
          uVar8 = 0x6c696166;
          func_0x000107c5fadc(0x6c696166,0xe400000000000000);
          func_0x000106f48270(uVar1,uVar5,uVar8,1);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar5);
          func_0x000107c614ac(puVar4);
          lVar10 = *(long *)(unaff_x22 + 0xf8);
          lVar9 = unaff_x22 + 0xc0;
          goto LAB_103ae08dc;
        }
        goto LAB_103ae08c8;
      }
      func_0x000107c6142c(lVar10);
    }
    func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x50));
    func_0x000107c61574(lVar9);
  }
LAB_103ae08c8:
  lVar10 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c614ac(puVar4);
  lVar9 = unaff_x22 + 0x90;
LAB_103ae08dc:
  func_0x000107c61428(lVar10 + 0x10,lVar9,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    func_0x000103ae1504(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                        *(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c61574(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae0924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae0928; end: 103ae0983;  */

void FUN_103ae0928(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ae0984;
  }
  else {
    pcVar1 = FUN_103ae0bd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae0984; end: 103ae0bd7;  */

void FUN_103ae0984(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x100);
  FUN_103ae13f8(uVar4,*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110));
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    FUN_103ae4d14(unaff_x22 + 0x10);
    func_0x000107c61574(uVar7);
    func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0xd8,0,0);
    lVar10 = lVar10 + 0x10;
    func_0x000107c61648();
  }
  else {
    if (*(long *)(unaff_x22 + 0x118) != 0) {
      FUN_103ae8ae0(7);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    puVar5 = &UNK_1106cdcf0;
    func_0x000107c613fc(&UNK_1106cdcf0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,uVar8);
    puVar6 = &UNK_1106cdd40;
    func_0x000107c613fc(&UNK_1106cdd40,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    *(undefined8 *)(puVar6 + 0x20) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x00010488e6a4(0,4,0x40,0,0,0,&UNK_10dc50710,puVar6,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar6);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar10 = *(long *)(unaff_x22 + 0x40);
    uVar8 = uVar2;
    if (lVar10 == 0) {
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar7);
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar7);
      func_0x000107c5fadc(uVar11,lVar10);
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
    (**(code **)(unaff_x22 + 0x120))(uVar7,uVar2,uVar9,1,0,*(undefined8 *)(unaff_x22 + 0x30),uVar11)
    ;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar11);
    uVar7 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000106f48270(uVar1,0,uVar7,1);
    func_0x000107c61170(uVar7);
    FUN_103ae4d14(unaff_x22 + 0x10);
    func_0x000107c61574(uVar3);
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0xc0,0,0);
    lVar10 = lVar10 + 0x10;
    func_0x000107c61648();
  }
  if (lVar10 != 0) {
    func_0x000103ae1504(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                        *(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c61574(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae0bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae0bd8; end: 103ae0ddb;  */

void FUN_103ae0bd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar6 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x60,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar6 + 0x50));
    func_0x000107c61428(lVar6 + 0x60,unaff_x22 + 0x78,0,0);
    lVar7 = *(long *)(lVar6 + 0x60);
    if (*(long *)(lVar7 + 0x10) != 0) {
      lVar10 = *(long *)(unaff_x22 + 0x100);
      uVar3 = *(ulong *)(unaff_x22 + 0x108);
      func_0x000107c61434(lVar7);
      func_0x000100029284();
      if ((uVar3 & 1) != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x110);
        lVar10 = *(long *)(*(long *)(lVar7 + 0x38) + lVar10 * 8);
        func_0x000107c6142c(lVar7);
        func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x50));
        func_0x000107c61574(lVar6);
        if (lVar10 == lVar8) {
          if (*(long *)(unaff_x22 + 0x118) != 0) {
            FUN_103ae8d8c(uVar5);
            FUN_103ae8ae0();
          }
          uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
          pcVar9 = *(code **)(unaff_x22 + 0x120);
          func_0x000107c614b0(uVar5);
          (*pcVar9)(0,0,0xffffffffffffffff,0,uVar5,0,0);
          func_0x000107c614ac(uVar5);
          func_0x000107c614cc(uVar5,unaff_x22 + 0xf0,unaff_x22 + 0xa8);
          uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
          func_0x000107c60640(uVar2,uVar4);
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar4);
          uVar4 = 0x6c696166;
          func_0x000107c5fadc(0x6c696166,0xe400000000000000);
          func_0x000106f48270(uVar1,uVar2,uVar4,1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar2);
          func_0x000107c614ac(uVar5);
          lVar7 = *(long *)(unaff_x22 + 0xf8);
          lVar6 = unaff_x22 + 0xc0;
          goto LAB_103ae0d90;
        }
        goto LAB_103ae0d7c;
      }
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c5d278(*(undefined8 *)(lVar6 + 0x50));
    func_0x000107c61574(lVar6);
  }
LAB_103ae0d7c:
  lVar7 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c614ac(uVar5);
  lVar6 = unaff_x22 + 0x90;
LAB_103ae0d90:
  func_0x000107c61428(lVar7 + 0x10,lVar6,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    func_0x000103ae1504(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                        *(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c61574(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae0ddc; end: 103ae0e77; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl retryTranscodingWithMediaId:completion:] */

/* WARNING: Possible PIC construction at 0x000103ae0e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ae0e58) */

void FUN_103ae0ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1106cded0;
  func_0x000107c613fc(&UNK_1106cded0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c6157c(param_1);
  FUN_103ae04a8(param_3,param_2,FUN_103ae5380,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103ae0e78; end: 103ae0f07;  */

void FUN_103ae0e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5ed2c(param_5);
  }
  (**(code **)(param_8 + 0x10))(param_8,param_1,param_2,param_3,param_4 & 1,param_5,param_6,param_7)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 103ae0f08; end: 103ae0f27;  */

void FUN_103ae0f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae0f28,0,0);
  return;
}



/* Entry: 103ae0f28; end: 103ae0fbf;  */

void FUN_103ae0f28(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_103ae0fc0;
    lVar1 = *(long *)(unaff_x22 + 0x78);
    plVar2[0x13] = *(long *)(unaff_x22 + 0x80);
    plVar2[0x14] = lVar3;
    plVar2[0x11] = unaff_x22 + 0x10;
    plVar2[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae10d4,0,0);
    return;
  }
  (**(code **)(unaff_x22 + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x000103ae0fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae0fc0; end: 103ae1023;  */

void FUN_103ae0fc0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    FUN_103ae4ab0(lVar2 + 0x10);
    pcVar1 = FUN_103ae1024;
  }
  else {
    pcVar1 = FUN_103ae1064;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae1024; end: 103ae1063;  */

void FUN_103ae1024(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 0x68))(1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ae1060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae1064; end: 103ae10b7;  */

void FUN_103ae1064(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 0x68))(0);
  func_0x000107c61574(uVar2);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ae10b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae10b8; end: 103ae10d3;  */

void FUN_103ae10b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae10d4,0,0);
  return;
}



/* Entry: 103ae10d4; end: 103ae113b;  */

void FUN_103ae10d4(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103ae113c;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_103ae3590();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103ae113c; end: 103ae11b3;  */

void FUN_103ae113c(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103ae1184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(lVar1 + 0x58);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae11b4,0,0);
  return;
}



/* Entry: 103ae11b4; end: 103ae1373;  */

/* WARNING: Removing unreachable block (ram,0x000103ae1234) */

void FUN_103ae11b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = 0;
  func_0x000107c5ecdc();
  func_0x000107c613fc();
  func_0x000107c5ecd8();
  uVar5 = uVar4;
  FUN_103ae4c2c();
  func_0x000107c5ecd4(unaff_x22 + 0x50,&UNK_1106ce078,uVar1,uVar2,&UNK_1106ce078,uVar5);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x30);
  uVar6 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106f47be0(uVar7,0,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar4);
  func_0x00010006c090(uVar1,uVar5);
  puVar3[1] = uVar13;
  *puVar3 = uVar12;
  puVar3[3] = uVar10;
  puVar3[2] = uVar8;
  puVar3[5] = uVar11;
  puVar3[4] = uVar9;
  puVar3[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103ae1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae1374; end: 103ae13f7; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl resetTranscodingWithMediaId:completion:] */

void FUN_103ae1374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c6157c(param_1);
  FUN_103ae5030(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103ae13f8; end: 103ae1603;  */

undefined8 FUN_103ae13f8(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c4b940(uVar2);
  func_0x000107c61428(unaff_x20 + 0x60,auStack_68,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar5 = param_1;
    uVar1 = param_2;
    func_0x000100029284();
    if ((uVar1 & 1) == 0) {
      func_0x000107c6142c(lVar3);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + lVar5 * 8);
      func_0x000107c6142c(lVar3);
      if (lVar5 == param_3) {
        func_0x000107c61428(unaff_x20 + 0x58,auStack_80,0x21,0);
        func_0x000107c61434(param_2);
        func_0x0001027617d4(param_1,param_2);
        func_0x000107c614a8(auStack_80);
        func_0x000107c6142c(param_2);
        func_0x000107c61574(param_1);
        uVar4 = 1;
        goto LAB_103ae14dc;
      }
    }
  }
  uVar4 = 0;
LAB_103ae14dc:
  func_0x000107c5d278(uVar2);
  return uVar4;
}



/* Entry: 103ae1604; end: 103ae166f;  */

void FUN_103ae1604(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(long *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103ae1670;
  plVar1[0x13] = param_3;
  plVar1[0x14] = unaff_x20;
  plVar1[0x11] = unaff_x22 + 0x58;
  plVar1[0x12] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae10d4,0,0);
  return;
}



/* Entry: 103ae1670; end: 103ae16cf;  */

void FUN_103ae1670(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103ae16ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae16d0,0,0);
  return;
}



/* Entry: 103ae16d0; end: 103ae1947;  */

void FUN_103ae16d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  puVar4 = *(undefined8 **)(*(long *)(unaff_x22 + 0x100) + 0x38);
  func_0x000107c4b34c();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x110) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    FUN_103ae4a70();
    func_0x000107c613f8(&UNK_1106ce120,puVar4,0,0);
    *puVar4 = 4;
    func_0x000107c61654();
    FUN_103ae4ab0(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000103ae18b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar5 = &UNK_1106cdb60;
  func_0x000107c613fc(&UNK_1106cdb60,0x30,7);
  *(undefined **)(unaff_x22 + 0x118) = puVar5;
  FUN_103aeb250(0);
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  func_0x000107c615f0(puVar4);
  FUN_103ae9d4c(unaff_x22 + 0x10,uVar10);
  lVar9 = *(long *)(unaff_x22 + 0x100);
  if (*(long *)(unaff_x22 + 0x18) != 0) {
    FUN_103ae5398(unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
    puVar6 = &UNK_1106cdc28;
    func_0x000107c613fc(&UNK_1106cdc28,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = lVar9;
    *(undefined8 **)(puVar6 + 0x20) = puVar4;
    puVar7 = &UNK_1106cdc50;
    func_0x000107c613fc(&UNK_1106cdc50,0x20,7);
    *(undefined **)(puVar7 + 0x10) = &UNK_10dc506d0;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    func_0x000107c615f0(puVar4);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(lVar9);
    uVar10 = 0;
    func_0x0001001ca524(0,4,0x40,4,0,0,&UNK_10dc506e0,puVar7,PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
    func_0x000107c61574(puVar7);
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_103ae1948;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(lVar9 + 0x18);
  uVar3 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar3;
  plVar8 = (long *)0x410;
  func_0x000107c61174(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103ae1a48;
                    /* WARNING: Could not recover jumptable at 0x000103ae1944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103ae6614(*(undefined8 *)(unaff_x22 + 0x120),uVar2,0,1,uVar1,uVar10,uVar3,0,
                *(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 103ae1948; end: 103ae1997;  */

void FUN_103ae1948(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x128);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1998,0,0);
  return;
}



/* Entry: 103ae1998; end: 103ae1a47;  */

void FUN_103ae1998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x100) + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x100) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar4;
  plVar5 = (long *)0x410;
  func_0x000107c61174(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ae1a48;
                    /* WARNING: Could not recover jumptable at 0x000103ae1a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103ae6614(*(undefined8 *)(unaff_x22 + 0x120),uVar3,0,1,uVar2,uVar1,uVar4,0,
                *(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 103ae1a48; end: 103ae1b27;  */

void FUN_103ae1a48(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar7 + 0x138);
  lVar6 = *unaff_x22;
  *(long *)(lVar7 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x140));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar7 + 0x150) = param_4;
    *(long *)(lVar7 + 0x158) = param_3;
    *(long *)(lVar7 + 0x160) = param_2;
    *(long *)(lVar7 + 0x168) = param_1;
    lVar2 = *(long *)(lVar7 + 0x80);
    lVar3 = *(long *)(lVar7 + 0x88);
    plVar4 = (long *)0x1e0;
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x170) = plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)FUN_103ae1b28;
    lVar6 = *(long *)(lVar7 + 0x100);
    plVar4[0x2b] = param_3;
    plVar4[0x2c] = lVar6;
    plVar4[0x29] = param_1;
    plVar4[0x2a] = param_2;
    plVar4[0x27] = lVar2;
    plVar4[0x28] = lVar3;
    pcVar5 = FUN_103ae2718;
  }
  else {
    pcVar5 = FUN_103ae1ce0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 103ae1b28; end: 103ae1b7b;  */

void FUN_103ae1b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x178) = param_1;
  *(undefined8 *)(lVar1 + 0x180) = param_2;
  *(undefined8 *)(lVar1 + 0x188) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1b7c,0,0);
  return;
}



/* Entry: 103ae1b7c; end: 103ae1cdf;  */

void FUN_103ae1b7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar15 = *(undefined8 **)(unaff_x22 + 0xf0);
  pcVar9 = "retryTranscodingAsync(mediaId:statusReporter:)";
  func_0x0001000c10c0("retryTranscodingAsync(mediaId:statusReporter:)");
  func_0x000107c61180();
  puVar10 = &UNK_1106cdbd8;
  func_0x000107c613fc(&UNK_1106cdbd8,0x28,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(undefined8 *)(puVar10 + 0x18) = uVar8;
  *(undefined8 *)(puVar10 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x103ae5f08;
  *(undefined **)(unaff_x22 + 0xe8) = puVar10;
  puVar11 = (undefined8 *)(unaff_x22 + 0xc0);
  *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xd0) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0xd8) = &UNK_1106cdbf0;
  func_0x000107c60bc4();
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c4e524(pcVar9);
  func_0x000107c60bd0(puVar11);
  func_0x000107c615e8(pcVar9);
  func_0x000107c61574(uVar8);
  func_0x000107c615ec(uVar4,2);
  FUN_103ae4ab0(unaff_x22 + 0x58);
  *puVar15 = uVar6;
  puVar15[1] = uVar2;
  puVar15[2] = uVar7;
  puVar15[3] = uVar3;
  puVar15[4] = uVar12;
  puVar15[5] = uVar1;
  puVar15[6] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000103ae1cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae1ce0; end: 103ae1df7;  */

void FUN_103ae1ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  pcVar3 = "retryTranscodingAsync(mediaId:statusReporter:)";
  func_0x0001000c10c0("retryTranscodingAsync(mediaId:statusReporter:)");
  func_0x000107c61180();
  puVar4 = &UNK_1106cdb88;
  func_0x000107c613fc(&UNK_1106cdb88,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(code **)(unaff_x22 + 0xb0) = FUN_103ae4adc;
  *(undefined **)(unaff_x22 + 0xb8) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106cdba0;
  func_0x000107c60bc4();
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(puVar5);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c615ec(uVar1,2);
  FUN_103ae4ab0(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000103ae1df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae1df8; end: 103ae1e87;  */

void FUN_103ae1df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_103ae4bec(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1e88,uVar2,uVar3);
  return;
}



/* Entry: 103ae1e88; end: 103ae1f53;  */

void FUN_103ae1e88(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c49f74();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c4ab5c(uVar2);
    func_0x000107c61180();
    func_0x000107c60234(unaff_x22 + 0x10);
    func_0x000107c615e8(uVar2);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
  }
  lVar3 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x30,1,0);
  func_0x000100f72e88(unaff_x22 + 0x10,lVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103ae1f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae1f54; end: 103ae1f6f;  */

void FUN_103ae1f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 *)(unaff_x22 + 0x160) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1f70,0,0);
  return;
}



/* Entry: 103ae1f70; end: 103ae205b;  */

void FUN_103ae1f70(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x160);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x148,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x178) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x180) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x103ae2000;
    lVar1 = *(long *)(unaff_x22 + 0x168);
    plVar2[0x13] = *(long *)(unaff_x22 + 0x170);
    plVar2[0x14] = lVar3;
    plVar2[0x11] = unaff_x22 + 0x110;
    plVar2[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae10d4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ae1ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


