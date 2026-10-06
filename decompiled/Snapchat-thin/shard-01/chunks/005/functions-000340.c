/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10111cf08; end: 10111d09f;  */

/* WARNING: Possible PIC construction at 0x00010111d078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111d07c) */

void FUN_10111cf08(long param_1,long param_2,long param_3,ulong param_4)

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
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d03c);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_10111de9c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d040);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d058);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d05c);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
    lStack_70 = param_3;
    lStack_68 = lVar1;
    if (((long)param_4 < 0) || ((param_4 >> 0x3e & 1) != 0)) {
      FUN_10111ccf4(param_4,FUN_10111dedc,auStack_80);
    }
    else {
      if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) != param_3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d0a0);
        (*pcVar5)();
      }
      func_0x000107c6140c(lVar1,(param_4 & 0xffffffffffffff8) + 0x20,param_3,uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10111d0a0; end: 10111d113;  */

void FUN_10111d0a0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d110);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_10111de9c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    func_0x000107c6140c(param_4,param_1,param_2,uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d114);
  (*pcVar1)();
}



/* Entry: 10111d114; end: 10111d44f;  */

long FUN_10111d114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                  undefined8 param_17,byte param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  byte param_25)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  uint uStack_6c;
  
  uStack_6c = (uint)param_25;
  uStack_78 = param_24;
  uStack_88 = param_23;
  uStack_90 = param_22;
  uStack_a0 = param_20;
  uStack_98 = param_21;
  uStack_a4 = (uint)param_18;
  uStack_b0 = param_17;
  uStack_bc = (uint)param_15;
  uStack_d8 = param_14;
  uStack_e0 = param_13;
  uStack_f8 = param_11;
  uStack_f0 = param_12;
  uStack_108 = param_10;
  uStack_110 = param_9;
  lVar1 = 0;
  uStack_118 = param_4;
  uStack_e8 = param_5;
  uStack_c8 = param_7;
  uStack_b8 = param_8;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x00010111bd60();
  func_0x000107c613fc();
  uVar4 = 0x112d5ed58;
  func_0x0001000285a8(0x112d5ed58,&UNK_10d925c80);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar2 + 0xe8) = uVar4;
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101136fe0();
  *(undefined **)(lVar2 + 0xf8) = puVar3;
  *(undefined **)(lVar2 + 0x100) = puVar5;
  uVar4 = 0;
  FUN_10111de9c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(puVar5,uVar4);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar2 + 0x108) = puVar3;
  func_0x0001000285a8(0x112d5ed60,&UNK_10d925c88);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar2 + 0x120) = uVar4;
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = uStack_118;
  func_0x000107c61434(param_3);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  uVar6 = param_6;
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar4 = uStack_f0;
  *(undefined8 *)(lVar2 + 0x30) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined8 *)(lVar2 + 0x40) = param_6;
  *(undefined8 *)(lVar2 + 0x48) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_108;
  *(undefined8 *)(lVar2 + 0x58) = uStack_110;
  *(undefined8 *)(lVar2 + 0x68) = uStack_f8;
  func_0x00010111dd94(uStack_f0,lVar2 + 0x70,0x112d5ece0,&UNK_10d925bf0);
  *(undefined8 *)(lVar2 + 0xa0) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x98) = uStack_e0;
  *(char *)(lVar2 + 0xe0) = (char)uStack_bc;
  *(char *)(lVar2 + 0x110) = (char)uStack_a4;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_b0;
  *(undefined8 *)(lVar2 + 0xb0) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x118) = uStack_98;
  *(undefined8 *)(lVar2 + 0xc0) = uStack_88;
  *(undefined8 *)(lVar2 + 0xb8) = uStack_90;
  *(undefined8 *)(lVar2 + 200) = uStack_78;
  *(char *)(lVar2 + 0xd0) = (char)uStack_6c;
  (**(code **)(lVar7 + 0x68))
            (auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010d925b40);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  func_0x00010111dfa8(uVar4,0x112d5ece0,&UNK_10d925bf0);
  (**(code **)(lVar7 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(lVar2 + 0xd8) = puVar5;
  return lVar2;
}



/* Entry: 10111d450; end: 10111d65f;  */

ulong FUN_10111d450(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c4077c(param_4);
  func_0x000107c4077c(param_4);
  lVar3 = 0;
  func_0x0001038be9b4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  uVar5 = 0;
  func_0x0001038bee3c(0);
  uVar6 = uVar5;
  func_0x000107c610f8();
  func_0x0001038bea34(lVar4,uVar6);
  func_0x000107c4077c(param_5);
  func_0x000107c4077c(param_5);
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  func_0x000107c610f8(uVar5);
  func_0x0001038bea34(lVar3,uVar5);
  lVar7 = lVar3;
  FUN_1011452cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(long *)(lVar7 + 0x20) = lVar4;
  *(long *)(lVar7 + 0x28) = lVar3;
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  lVar8 = lVar3;
  func_0x000107c5ef04(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)lVar8;
  func_0x000107c5eee8();
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar6 = 5;
  if (param_3 != '\0') {
    uVar6 = 10;
  }
  func_0x0001038bf720(0);
  func_0x000107c610f8();
  uVar9 = (ulong)~uVar1 & 1;
  func_0x0001038bf128(uVar9,uVar6,lVar7);
  func_0x0001038bd84c(0);
  func_0x000107c610f8();
  func_0x0001038bd198(uVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return uVar9;
}



/* Entry: 10111d660; end: 10111d6bb;  */

undefined8 * FUN_10111d660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10111d6bc; end: 10111d737;  */

void FUN_10111d6bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1011190bc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                0x10111e048,&UNK_110386370);
  return;
}



/* Entry: 10111d738; end: 10111d73f;  */

void FUN_10111d738(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *param_2;
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101119390);
      (*pcVar2)();
    }
    uVar4 = *(ulong *)(lVar11 + 0x20);
    if (uVar4 != 0) {
      if (*(long *)(lVar11 + 0x10) == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101119394);
        (*pcVar2)();
      }
      uVar12 = *(ulong *)(lVar11 + 0x28);
      if (uVar12 != 0) {
        func_0x000107c61174();
        func_0x000107c61174(uVar12);
        uVar9 = 0;
        uVar7 = uVar4;
        FUN_10111da84();
        uVar10 = 1;
        uVar8 = uVar12;
        FUN_10111da84(uVar12,1);
        uVar1 = uVar7 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar1 = uVar9 >> 0x38 & 0xf;
        }
        uVar5 = uVar12;
        if (uVar1 != 0) {
          uVar5 = uVar4;
        }
        func_0x000107c61174(uVar5);
        func_0x000101119394();
        func_0x000107c61170(uVar5);
        puVar6 = PTR_PTR_1126a63a8;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar7,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000107c5fadc(uVar8,uVar10);
        func_0x000107c6142c(uVar10);
        func_0x000107c49564();
        func_0x000107c61170(uVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c61170(uVar12);
        goto LAB_101119358;
      }
    }
    func_0x000107c61574(lVar3);
  }
  puVar6 = PTR_PTR_1126a63a8;
  func_0x000107c610f8();
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c49564();
LAB_101119358:
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *param_1 = puVar6;
  return;
}



/* Entry: 10111d740; end: 10111d8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10111d740(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != 0) {
    uVar6 = *(ulong *)(param_1 + _DAT_112fa97b8);
    if (uVar6 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d8a0);
          (*pcVar1)();
        }
        lVar2 = *(long *)(uVar6 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61174(param_1);
        lVar2 = 0;
        FUN_10111c37c(0,uVar6);
        func_0x000107c61170(param_1);
      }
      lVar3 = *(long *)(lVar2 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = *(long *)(lVar3 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      dVar7 = *(double *)(lVar2 + _DAT_112fa98e8);
      func_0x000107c61170(lVar2);
      dVar7 = dVar7 / 60.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d89c);
        (*pcVar1)();
      }
      if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d8a4);
        (*pcVar1)();
      }
      if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d8a8);
        (*pcVar1)();
      }
      uVar4 = 0;
      lVar2 = (long)dVar7;
      goto LAB_10111d864;
    }
  }
  lVar2 = 0;
  uVar4 = 1;
LAB_10111d864:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = lVar2;
  return auVar8;
}



/* Entry: 10111d8a8; end: 10111da83;  */

undefined1  [16] FUN_10111d8a8(double param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10111da74);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10111da78);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10111da7c);
    (*pcVar1)();
  }
  lVar6 = (long)param_1;
  if (lVar6 < 0xe10) {
    if ((lVar6 / 0x3c) % 0x3c < 1) {
      if (lVar6 % 0x3c < 1) {
        lVar6 = 0;
        uVar7 = 0xe000000000000000;
        goto LAB_10111da44;
      }
      func_0x000106875064();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111da84);
        (*pcVar1)();
      }
    }
    else {
      func_0x00010687504c();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111d980);
        (*pcVar1)();
      }
    }
  }
  else {
    func_0x000106875034();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10111da80);
      (*pcVar1)();
    }
  }
  lVar6 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar3 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  puVar4 = puVar3;
  func_0x00010075bbf0();
  *(undefined **)(lVar2 + 0x40) = puVar4;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  *(undefined **)(lVar2 + 0x28) = puVar5;
  uVar7 = param_3;
  func_0x000107c5fb00(lVar6,param_3,lVar2);
  func_0x000107c6142c(param_3);
LAB_10111da44:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 10111da84; end: 10111db87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111da84(ulong param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar2 = param_1;
  uVar5 = param_2;
  FUN_10111d740();
  if ((uVar5 & 0xff) != 1) {
    uVar6 = *(ulong *)(param_1 + _DAT_112fa97b8);
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111db88);
        (*pcVar1)();
      }
      lVar3 = *(long *)(uVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      FUN_10111c37c();
    }
    lVar4 = *(long *)(lVar3 + _DAT_112fa9758);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(lVar4 + _DAT_112fa98a8);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112fa98e8);
    func_0x000107c61170(lVar3);
    FUN_10111d8a8(uVar7);
    if (((param_2 & 0xff) == 0) && (0x2d < uVar2)) {
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}



/* Entry: 10111db88; end: 10111db8b;  */

void FUN_10111db88(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 10111db8c; end: 10111dbdf;  */

void FUN_10111db8c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 10111dbe0; end: 10111dc43;  */

void FUN_10111dbe0(long param_1)

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
  plVar3[1] = 0x10111e054;
  plVar3[0x14] = lVar1;
  plVar3[0x15] = lVar2;
  plVar3[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011188e8,0,0);
  return;
}



/* Entry: 10111dc44; end: 10111dc93;  */

void FUN_10111dc44(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong *puVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar12 = *(long *)(lVar9 + 0x10);
      if (lVar12 != 0) {
        puVar10 = (ulong *)(lVar9 + 0x28);
        do {
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar7 = puVar10[-1];
            uVar1 = *puVar10;
            func_0x000107c61434(uVar1);
            func_0x000107c61434(param_1);
            uVar3 = uVar7;
            uVar11 = uVar1;
            func_0x000100029284();
            if ((uVar11 & 1) == 0) {
              func_0x000107c6142c(param_1);
            }
            else {
              uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar3 * 8);
              func_0x000107c61174(uVar4);
              func_0x000107c6142c(param_1);
              uVar11 = *(ulong *)(lVar2 + 0x10);
              uVar3 = uVar7;
              func_0x000107c5fadc(uVar7,uVar1);
              func_0x000107c4a52c();
              func_0x000107c61170(uVar3);
              if ((uVar11 & 1) == 0) {
                puVar5 = PTR_PTR_1126b4a40;
                func_0x000107c610f8(PTR_PTR_1126b4a40);
                func_0x000107c48448();
                puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
                func_0x000107c61174(puVar5);
                func_0x000107c5fadc(uVar7,uVar1);
                func_0x000107c48af4(puVar6);
                func_0x000107c61170(uVar7);
                func_0x000107c56bcc(puVar8);
                func_0x000107c61170(uVar4);
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar6);
              }
              else {
                func_0x000107c61170(uVar4);
              }
            }
            func_0x000107c6142c(uVar1);
          }
          puVar10 = puVar10 + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      puStack_80 = puVar8;
      func_0x000100087f6c(&puStack_80);
      func_0x000100c7f554();
      func_0x000107c61574(lVar2);
      func_0x000107c61170(puVar8);
      return;
    }
    func_0x000107c61574(lVar2);
  }
  FUN_10111de9c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  puStack_80 = puVar8;
  func_0x000100087f6c(&puStack_80);
  func_0x000107c61170(puVar8);
  func_0x000100c7f554();
  return;
}



/* Entry: 10111dc94; end: 10111dd13;  */

void FUN_10111dc94(void)

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
  plVar6[1] = (long)FUN_10111dd14;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b46c,0,0);
  return;
}



/* Entry: 10111dd14; end: 10111dd4f;  */

void FUN_10111dd14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010111dd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10111dd50; end: 10111de17;  */

undefined8 FUN_10111dd50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10111de18; end: 10111de9b;  */

void FUN_10111de18(long param_1)

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
  plVar4[1] = 0x10111e05c;
  *(undefined1 *)(plVar4 + 0x10) = uVar3;
  plVar4[7] = lVar2;
  plVar4[8] = lVar5;
  plVar4[5] = param_1;
  plVar4[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011161e0,0,0);
  return;
}



/* Entry: 10111de9c; end: 10111dedb;  */

void FUN_10111de9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10111dedc; end: 10111def3;  */

void FUN_10111dedc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10111d0a0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Entry: 10111def4; end: 10111df5f;  */

void FUN_10111def4(void)

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
  plVar3[1] = 0x10111e060;
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101116a80,0,0);
  return;
}



/* Entry: 10111df60; end: 10111dfe7;  */

undefined8 FUN_10111df60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10111dfe8; end: 10111e063;  */

void FUN_10111dfe8(long param_1)

{
  func_0x00010111d678(param_1 + 0x20);
  return;
}



/* Entry: 10111e064; end: 10111e657;  */

uint FUN_10111e064(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10111e2a8);
          (*pcVar1)();
        }
        FUN_10111ee94(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10111e248);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10111e24c);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10111e250);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10111e170;
LAB_10111e140:
              FUN_10111c518(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_10111c518(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10111e140;
LAB_10111e170:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10111e254);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_10111e280;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_10111e280:
  return uVar8 & 1;
}



/* Entry: 10111e658; end: 10111e7bf;  */

undefined8 FUN_10111e658(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = lVar6 - extraout_x12_00;
  lVar2 = param_2;
  func_0x000107c4a984();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar8 + 0x20))(uVar4,lVar6,lVar1);
    func_0x000107c5ee84();
    if (param_1 <= -60.0) {
      (**(code **)(lVar8 + 8))(uVar4,lVar1);
    }
    else {
      func_0x000107c41324(param_2);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar5);
      func_0x000107c61170(param_2);
      uVar3 = uVar4;
      func_0x000107c5ee78(uVar4,puVar5);
      pcVar7 = *(code **)(lVar8 + 8);
      (*pcVar7)(puVar5,lVar1);
      (*pcVar7)(uVar4,lVar1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10111e7c0; end: 10111ee53;  */

uint FUN_10111e7c0(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  uint uVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_90 [8];
  long lStack_88;
  ulong uStack_80;
  undefined1 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puStack_78 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_68 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  lVar15 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar10 - extraout_x8_00;
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar20 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar12 - extraout_x12_02;
  uStack_70 = param_1;
  func_0x000107c49cec();
  if ((param_1 & 1) != 0) {
LAB_10111e92c:
    uVar13 = 0;
    goto LAB_10111ee30;
  }
  uVar3 = param_2;
  func_0x000107c4a984();
  func_0x000107c61180();
  uStack_80 = param_2;
  if (uVar3 != 0) {
    func_0x000107c5ee94(lVar21);
    func_0x000107c61170(uVar3);
  }
  pcVar11 = *(code **)(lVar14 + 0x38);
  (*pcVar11)(lVar21,uVar3 == 0,1,lVar2);
  (*pcVar11)(lVar12,1,1,lVar2);
  lVar15 = (long)*(int *)(lVar15 + 0x30);
  func_0x0001009f0578(lVar21,lVar18);
  func_0x0001009f0578(lVar12,lVar18 + lVar15);
  pcVar11 = *(code **)(lVar14 + 0x30);
  lVar4 = lVar18;
  lStack_88 = lVar14;
  (*pcVar11)(lVar18,1,lVar2);
  if ((int)lVar4 == 1) {
    FUN_10111ee54(lVar12,0x112d373d8,&UNK_10d9014c0);
    FUN_10111ee54(lVar21,0x112d373d8,&UNK_10d9014c0);
    lVar15 = lVar18 + lVar15;
    (*pcVar11)(lVar15,1,lVar2);
    lVar4 = lStack_88;
    if ((int)lVar15 == 1) {
      FUN_10111ee54(lVar18,0x112d373d8,&UNK_10d9014c0);
      uVar13 = 0;
      goto LAB_10111ee30;
    }
LAB_10111eaa8:
    lVar15 = 0x112d373d0;
    FUN_10111ee54(lVar18,0x112d373d0,&UNK_10d90f8f0);
  }
  else {
    func_0x0001009f0578(lVar18,uVar20);
    lVar14 = lVar18 + lVar15;
    (*pcVar11)(lVar14,1,lVar2);
    lVar4 = lStack_88;
    if ((int)lVar14 == 1) {
      FUN_10111ee54(lVar12,0x112d373d8,&UNK_10d9014c0);
      FUN_10111ee54(lVar21,0x112d373d8,&UNK_10d9014c0);
      lVar4 = lStack_88;
      (**(code **)(lStack_88 + 8))(uVar20,lVar2);
      goto LAB_10111eaa8;
    }
    lVar14 = lVar10;
    (**(code **)(lStack_88 + 0x20))(lVar10,lVar18 + lVar15,lVar2);
    FUN_100df4c40();
    uVar3 = uVar20;
    func_0x000107c5fab8(uVar20,lVar10,lVar2,lVar14);
    pcVar11 = *(code **)(lVar4 + 8);
    (*pcVar11)(lVar10,lVar2);
    lVar15 = 0x112d373d8;
    FUN_10111ee54(lVar12,0x112d373d8,&UNK_10d9014c0);
    FUN_10111ee54(lVar21,0x112d373d8,&UNK_10d9014c0);
    (*pcVar11)(uVar20,lVar2);
    FUN_10111ee54(lVar18,0x112d373d8,&UNK_10d9014c0);
    if ((uVar3 & 1) != 0) goto LAB_10111e92c;
  }
  uVar20 = uStack_70;
  uVar3 = uStack_70;
  func_0x000107c41324(uStack_70);
  func_0x000107c61180();
  func_0x000107c5ee94(lStack_68);
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  puVar19 = puVar5;
  func_0x000107c5ee70();
  puVar16 = puVar5;
  func_0x000107c43874(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  if (puVar16 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    lVar15 = -0x2000000000000000;
  }
  else {
    puVar19 = puVar16;
    func_0x000107c5faec();
    func_0x000107c61170(puVar16);
  }
  puVar1 = puStack_78;
  pcVar11 = *(code **)(lVar4 + 8);
  lVar12 = lVar2;
  (*pcVar11)(lStack_68);
  uVar3 = uStack_80;
  func_0x000107c41324(uStack_80);
  func_0x000107c61180();
  func_0x000107c5ee94(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c5ee70();
  func_0x000107c43874(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar5 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    lVar12 = -0x2000000000000000;
  }
  else {
    puVar16 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
  }
  (*pcVar11)(puVar1);
  if ((puVar19 == puVar16) && (lVar15 == lVar12)) {
    func_0x000107c6142c(lVar15);
    func_0x000107c6142c(lVar12);
    uVar13 = 0;
  }
  else {
    lVar2 = lVar15;
    func_0x000107c605b8(puVar19,lVar15,puVar16,lVar12,0);
    func_0x000107c6142c(lVar15);
    func_0x000107c6142c(lVar12);
    uVar13 = (uint)puVar19 ^ 1;
  }
  uVar3 = uStack_80;
  uVar6 = uVar20;
  func_0x00010111e2a8();
  uVar7 = uVar3;
  lVar15 = lVar2;
  func_0x00010111e2a8();
  if ((uVar6 == uVar7) && (lVar2 == lVar15)) {
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(lVar15);
    uVar17 = 0;
  }
  else {
    func_0x000107c605b8(uVar6,lVar2,uVar7,lVar15,0);
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(lVar15);
    uVar17 = (uint)uVar6 ^ 1;
  }
  uVar6 = uVar20;
  FUN_10111e658(uVar20);
  uVar7 = uVar3;
  FUN_10111e658(uVar3);
  func_0x000107c3cf1c(uVar20);
  func_0x000107c61180();
  uVar8 = 0;
  FUN_10111ee94(0);
  uVar9 = uVar20;
  func_0x000107c5fc54(uVar20,uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c3cf1c(uVar3);
  func_0x000107c61180();
  uVar20 = uVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar3);
  uVar3 = uVar9;
  func_0x00010111e064(uVar9,uVar20);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar20);
  uVar13 = uVar13 | uVar17 | (uint)uVar6 ^ (uint)uVar7 | (uint)uVar3 ^ 1;
LAB_10111ee30:
  return uVar13 & 1;
}



/* Entry: 10111ee54; end: 10111ee93;  */

undefined8 FUN_10111ee54(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10111ee94; end: 10111eed7;  */

void FUN_10111ee94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ecd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf310;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5ecd0 = puVar1;
  return;
}



/* Entry: 10111eed8; end: 10111ef27;  */

undefined8 FUN_10111eed8(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x13) {
    return *(undefined8 *)(&UNK_10d925c90 + param_1 * 8);
  }
  FUN_1011072dc(0);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10111ef28);
  (*pcVar1)();
}



/* Entry: 10111ef28; end: 10111ef9f;  */

/* WARNING: Possible PIC construction at 0x00010111ef84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111ef88) */

void FUN_10111ef28(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10111efa0; end: 10111f05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10111efa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d5eda8);
  func_0x000107c5fadc();
  func_0x000107c43aa0(lVar2,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = lVar2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4cda8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107cfdba8(lVar1);
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      goto LAB_10111f03c;
    }
  }
  lVar3 = 0;
LAB_10111f03c:
  func_0x000107c61170(lVar2);
  return lVar3;
}



/* Entry: 10111f060; end: 10111f38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111f060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar9 = *(long *)(unaff_x20 + _DAT_112d5edc8);
  if ((lVar9 != 0) && (lVar1 = *(long *)(unaff_x20 + _DAT_112d5edb0), lVar1 != 0)) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d5ed80);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d5ed88);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d5ed88))[1];
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5fadc(uVar8,uVar2);
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (lVar6 != 0) {
      lVar7 = ((undefined8 *)(lVar6 + _DAT_112fcd628))[1];
      if (lVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar6 + _DAT_112fcd628);
        func_0x000107c61434(lVar7);
        func_0x000107c5fadc(uVar8,lVar7);
        func_0x000107c6142c(lVar7);
      }
      func_0x000107c58e4c(lVar9);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar8);
    }
    uVar8 = 0;
    FUN_10111fa7c(0,lVar1,param_1);
    uVar2 = 1;
    FUN_10111fa7c(1,lVar1,param_1);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d5ed90);
    puVar3 = &UNK_1103865e8;
    func_0x000107c613fc(&UNK_1103865e8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110386610;
    func_0x000107c613fc(&UNK_110386610,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(long *)(puVar4 + 0x28) = lVar9;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    *(undefined8 *)(puVar4 + 0x38) = param_5;
    pcStack_80 = (code *)0x10111fc8c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10111ef28;
    puStack_88 = &UNK_110386628;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_78;
    func_0x000107c61174();
    func_0x000107c6157c(param_3);
    func_0x00010111fc98(param_4,param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4426c(uVar10);
    func_0x000107c60bd0(ppuVar5);
    puVar3 = &UNK_1103865e8;
    func_0x000107c613fc(&UNK_1103865e8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110386660;
    func_0x000107c613fc(&UNK_110386660,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(long *)(puVar4 + 0x28) = lVar9;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    *(undefined8 *)(puVar4 + 0x38) = param_5;
    pcStack_80 = FUN_10111fcec;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10111ef28;
    puStack_88 = &UNK_110386678;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_78;
    func_0x000107c61174(lVar9);
    func_0x000107c6157c(param_3);
    func_0x00010111fc98(param_4,param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4426c(uVar10);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10111f390; end: 10111f69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111f390(ulong param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [24];
  
  puVar3 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      uVar1 = param_1;
      func_0x000107c61174(param_1);
      uVar2 = param_1;
      FUN_10111fd0c();
      if (((uint)puVar3 & 0xff) != 1) {
        if (0x2d < uVar2) {
          param_1 = 0;
          puVar3 = (undefined1 *)0xe000000000000000;
LAB_10111f488:
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar3);
          func_0x000107c5a630(param_6);
          func_0x000107c61170(param_1);
          func_0x000107c4d664(*(undefined8 *)(param_3 + _DAT_112d5edc0));
          (*param_4)(uVar2,0,0,1);
          if (param_7 != (code *)0x0) {
            (*param_7)(uVar1);
          }
          func_0x000107c61170(param_3);
          func_0x000107c61170(uVar1);
          return;
        }
        FUN_101120050(param_1);
        if (puVar3 != (undefined1 *)0x0) goto LAB_10111f488;
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  (*param_4)(0,0,0,1);
  return;
}



/* Entry: 10111f69c; end: 10111f6f7; -[_TtC32MapFriendFocusViewImplementation26FocusViewBaseBusinessLogic init] */

void FUN_10111f69c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendFocusViewImplementation.FocusViewBaseBusinessLogic",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10111f6c8);
  (*pcVar1)();
}



/* Entry: 10111f6f8; end: 10111f803; -[_TtC32MapFriendFocusViewImplementation26FocusViewBaseBusinessLogic .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010111f744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010111f768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010111f788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111f76c) */
/* WARNING: Removing unreachable block (ram,0x00010111f748) */
/* WARNING: Removing unreachable block (ram,0x00010111f78c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111f6f8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5ed68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5ed70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ed78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d5ed80));
  return;
}



/* Entry: 10111f804; end: 10111f823;  */

void FUN_10111f804(void)

{
  func_0x000107c61168(&PTR_PTR_1127b02f0);
  return;
}



/* Entry: 10111f824; end: 10111fa03;  */

/* WARNING: Possible PIC construction at 0x00010111f86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010111f8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010111f9dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111f8c8) */
/* WARNING: Removing unreachable block (ram,0x00010111f9bc) */
/* WARNING: Removing unreachable block (ram,0x00010111f8f0) */
/* WARNING: Removing unreachable block (ram,0x00010111f870) */
/* WARNING: Removing unreachable block (ram,0x00010111f884) */
/* WARNING: Removing unreachable block (ram,0x00010111f9c0) */
/* WARNING: Removing unreachable block (ram,0x00010111f9c4) */
/* WARNING: Removing unreachable block (ram,0x00010111f894) */
/* WARNING: Removing unreachable block (ram,0x00010111f9e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111f824(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c5194c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10111fa04; end: 10111fa57; -[_TtC32MapFriendFocusViewImplementation26FocusViewBaseBusinessLogic friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010111fa40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111fa44) */

void FUN_10111fa04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10111f824(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10111fa58; end: 10111fa7b;  */

void FUN_10111fa58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 0x40) != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
      func_0x000107c615f0(lVar1);
      func_0x000107c50048();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10111fa7c; end: 10111fc8b;  */

ulong FUN_10111fa7c(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c4077c(param_4);
  func_0x000107c4077c(param_4);
  lVar3 = 0;
  func_0x0001038be9b4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  uVar5 = 0;
  func_0x0001038bee3c(0);
  uVar6 = uVar5;
  func_0x000107c610f8();
  func_0x0001038bea34(lVar4,uVar6);
  func_0x000107c4077c(param_5);
  func_0x000107c4077c(param_5);
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  func_0x000107c610f8(uVar5);
  func_0x0001038bea34(lVar3,uVar5);
  lVar7 = lVar3;
  FUN_1011452cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(long *)(lVar7 + 0x20) = lVar4;
  *(long *)(lVar7 + 0x28) = lVar3;
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  lVar8 = lVar3;
  func_0x000107c5ef04(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)lVar8;
  func_0x000107c5eee8();
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar6 = 5;
  if (param_3 != '\0') {
    uVar6 = 10;
  }
  func_0x0001038bf720(0);
  func_0x000107c610f8();
  uVar9 = (ulong)~uVar1 & 1;
  func_0x0001038bf128(uVar9,uVar6,lVar7);
  func_0x0001038bd84c(0);
  func_0x000107c610f8();
  func_0x0001038bd198(uVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return uVar9;
}



/* Entry: 10111fc8c; end: 10111fca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111fc8c(ulong param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  puVar7 = auStack_78;
  func_0x000107c61428(lVar4 + 0x10,puVar7,0,0,*(undefined8 *)(unaff_x20 + 0x20),uVar3,pcVar1,
                      *(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      uVar5 = param_1;
      func_0x000107c61174(param_1);
      uVar6 = param_1;
      FUN_10111fd0c();
      if (((uint)puVar7 & 0xff) != 1) {
        if (0x2d < uVar6) {
          param_1 = 0;
          puVar7 = (undefined1 *)0xe000000000000000;
LAB_10111f488:
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar7);
          func_0x000107c5a630(uVar3);
          func_0x000107c61170(param_1);
          func_0x000107c4d664(*(undefined8 *)(lVar4 + _DAT_112d5edc0));
          (*pcVar2)(uVar6,0,0,1);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(uVar5);
          }
          func_0x000107c61170(lVar4);
          func_0x000107c61170(uVar5);
          return;
        }
        FUN_101120050(param_1);
        if (puVar7 != (undefined1 *)0x0) goto LAB_10111f488;
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
  (*pcVar2)(0,0,0,1);
  return;
}



/* Entry: 10111fca8; end: 10111fceb;  */

void FUN_10111fca8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10111fcec; end: 10111fd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111fcec(long param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  puVar7 = auStack_78;
  func_0x000107c61428(lVar4 + 0x10,puVar7,0,0,*(undefined8 *)(unaff_x20 + 0x20),uVar3,pcVar1,
                      *(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      lVar5 = param_1;
      func_0x000107c61174();
      lVar6 = param_1;
      FUN_101120050(param_1);
      if (puVar7 != (undefined1 *)0x0) {
        puVar8 = puVar7;
        FUN_10111fd0c(param_1);
        if (((uint)puVar8 & 0xff) != 1) {
          func_0x000107c5fadc(lVar6,puVar7);
          func_0x000107c6142c(puVar7);
          func_0x000107c54330(uVar3);
          func_0x000107c61170(lVar6);
          func_0x000107c4d664(*(undefined8 *)(lVar4 + _DAT_112d5edc0));
          (*pcVar2)(0,1,param_1,puVar8);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(lVar5);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar5);
            return;
          }
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          return;
        }
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c6142c(puVar7);
        goto code_r0x00010111f568;
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
code_r0x00010111f568:
  (*pcVar2)(0,1,0,0);
  return;
}



/* Entry: 10111fd0c; end: 10111fe73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10111fd0c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != 0) {
    uVar6 = *(ulong *)(param_1 + _DAT_112fa97b8);
    if (uVar6 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10111fe6c);
          (*pcVar1)();
        }
        lVar2 = *(long *)(uVar6 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61174(param_1);
        lVar2 = 0;
        FUN_10111c37c(0,uVar6);
        func_0x000107c61170(param_1);
      }
      lVar3 = *(long *)(lVar2 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = *(long *)(lVar3 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      dVar7 = *(double *)(lVar2 + _DAT_112fa98e8);
      func_0x000107c61170(lVar2);
      dVar7 = dVar7 / 60.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111fe68);
        (*pcVar1)();
      }
      if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111fe70);
        (*pcVar1)();
      }
      if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111fe74);
        (*pcVar1)();
      }
      uVar4 = 0;
      lVar2 = (long)dVar7;
      goto LAB_10111fe30;
    }
  }
  lVar2 = 0;
  uVar4 = 1;
LAB_10111fe30:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = lVar2;
  return auVar8;
}



/* Entry: 10111fe74; end: 10112004f;  */

undefined1  [16] FUN_10111fe74(double param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101120040);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101120044);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101120048);
    (*pcVar1)();
  }
  lVar6 = (long)param_1;
  if (lVar6 < 0xe10) {
    if ((lVar6 / 0x3c) % 0x3c < 1) {
      if (lVar6 % 0x3c < 1) {
        lVar6 = 0;
        uVar7 = 0xe000000000000000;
        goto LAB_101120010;
      }
      func_0x000106875064();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101120050);
        (*pcVar1)();
      }
    }
    else {
      func_0x00010687504c();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10111ff4c);
        (*pcVar1)();
      }
    }
  }
  else {
    func_0x000106875034();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10112004c);
      (*pcVar1)();
    }
  }
  lVar6 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar3 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  puVar4 = puVar3;
  func_0x00010075bbf0();
  *(undefined **)(lVar2 + 0x40) = puVar4;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  *(undefined **)(lVar2 + 0x28) = puVar5;
  uVar7 = param_3;
  func_0x000107c5fb00(lVar6,param_3,lVar2);
  func_0x000107c6142c(param_3);
LAB_101120010:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101120050; end: 10112018f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101120050(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_112fa97b8);
    if (uVar4 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar3 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101120190);
          (*pcVar1)();
        }
        lVar5 = *(long *)(uVar4 + 0x20);
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = param_2;
      }
      else {
        func_0x000107c61174();
        lVar5 = 0;
        FUN_10111c37c(0,uVar4);
      }
      lVar2 = *(long *)(lVar5 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      lVar5 = *(long *)(lVar2 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112fa98e8);
      func_0x000107c61170(lVar5);
      FUN_10111fe74(uVar6);
      func_0x000107c61170(param_1);
      goto LAB_101120160;
    }
  }
  lVar5 = 0;
  uVar4 = 0;
LAB_101120160:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 101120190; end: 1011201b3;  */

undefined8 FUN_101120190(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011201b4; end: 1011201c3;  */

void FUN_1011201b4(long param_1,long param_2)

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



/* Entry: 1011201c4; end: 101120557;  */

ulong FUN_1011201c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,char param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_101120794();
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar1 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar1 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar1);
  }
  uVar2 = 0;
  func_0x000101136b6c(0,puVar1 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar7 = uVar2 & 0xffffffffffffff8;
  uVar5 = *(ulong *)(uVar7 + 0x10);
  uVar6 = uVar2;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    func_0x000101136b6c(uVar6,uVar5 + 1,1,uVar2);
    uVar7 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  *(undefined8 *)(uVar7 + uVar5 * 8 + 0x20) = param_1;
  if (param_7 != '\x01') {
    puVar1 = &UNK_106874fd4;
    FUN_101122168(param_5,param_6,&UNK_106874fd4,&UNK_110386750,0x1011224bc,&UNK_110386768);
    uVar5 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      func_0x000107c60480(uVar7);
      uVar5 = 0;
      func_0x000101136b6c(0,uVar7 + 1,1,uVar6);
      uVar7 = uVar5 & 0xffffffffffffff8;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar2 = uVar5;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000101136b6c(uVar2,uVar6 + 1,1,uVar5);
      uVar7 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(undefined **)(uVar7 + uVar6 * 8 + 0x20) = puVar1;
    puVar1 = &UNK_106874fec;
    FUN_101122168(param_5,param_6,&UNK_106874fec,&UNK_110386700,0x1011224b4,&UNK_110386718);
    uVar5 = uVar2;
    if (uVar2 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar2) {
        uVar7 = uVar2;
      }
      func_0x000107c60480(uVar7);
      uVar5 = 0;
      func_0x000101136b6c(0,uVar7 + 1,1,uVar2);
      uVar7 = uVar5 & 0xffffffffffffff8;
    }
    uVar2 = *(ulong *)(uVar7 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar2) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000101136b6c(uVar6,uVar2 + 1,1,uVar5);
      uVar7 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar7 + uVar2 * 8 + 0x20) = puVar1;
  }
  if (param_3 != 0) {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c4d8a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      lVar3 = param_3;
      func_0x000107c5d9e4();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c4f5a0();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          lVar3 = lVar4;
          func_0x000107c49804(lVar4);
          func_0x000107c61170(lVar4);
          lVar4 = param_3;
          FUN_1011209d0(param_3,lVar3,param_4);
          func_0x000107c61174();
          uVar7 = uVar6;
          if (uVar6 >> 0x3e != 0) {
            uVar5 = uVar6 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar6) {
              uVar5 = uVar6;
            }
            func_0x000107c60480(uVar5);
            uVar7 = 0;
            func_0x000101136b6c(0,uVar5 + 1,1,uVar6);
          }
          uVar2 = uVar7 & 0xffffffffffffff8;
          uVar5 = *(ulong *)(uVar2 + 0x10);
          uVar6 = uVar7;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar5) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x000101136b6c(uVar6,uVar5 + 1,1,uVar7);
            uVar2 = uVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar2 + 0x10) = uVar5 + 1;
          *(long *)(uVar2 + uVar5 * 8 + 0x20) = lVar4;
          func_0x000107c61170();
        }
      }
    }
    func_0x000107c61170(param_3);
  }
  return uVar6;
}



/* Entry: 101120558; end: 101120793;  */

undefined * FUN_101120558(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar9 = &puStack_70;
  lVar2 = 0x7373656c5f656573;
  func_0x000107c5fadc(0x7373656c5f656573,0xed0000737465705f);
  uVar3 = 0x6569567375636f46;
  func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar10 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    puVar6 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    puVar8 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar2,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c4dfd0(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar7 = &UNK_1103867a0;
    func_0x000107c613fc(&UNK_1103867a0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    pcStack_50 = FUN_101122690;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101054b14;
    puStack_58 = &UNK_1103868f8;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar7 = puVar8;
    func_0x000107c3eae8(puVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101120794);
  (*pcVar1)();
}



/* Entry: 101120794; end: 1011209cf;  */

undefined * FUN_101120794(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  lVar2 = param_1;
  lVar3 = param_2;
  func_0x000107c5fadc();
  lVar11 = lVar2;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar11 == 0) {
    lVar10 = 0;
    lVar11 = 0;
    lVar9 = lVar3;
  }
  else {
    lVar10 = lVar11;
    func_0x000107c5faec();
    lVar9 = lVar3;
    func_0x000107c61170();
    lVar2 = lVar11;
    lVar11 = lVar3;
  }
  func_0x0001068751e4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
    lVar4 = lVar2;
    func_0x00010075bbf0();
    *(long *)(lVar2 + 0x40) = lVar4;
    if (lVar11 == 0) {
      func_0x000107c61434(param_2);
      lVar10 = param_1;
      lVar11 = param_2;
    }
    *(long *)(lVar2 + 0x20) = lVar10;
    *(long *)(lVar2 + 0x28) = lVar11;
    lVar11 = lVar9;
    func_0x000107c5fb00(lVar3,lVar9,lVar2);
    func_0x000107c6142c(lVar9);
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar3,lVar11);
    func_0x000107c6142c(lVar11);
    func_0x000107c4dfcc(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar6 = &UNK_1103867a0;
    func_0x000107c613fc(&UNK_1103867a0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_110386840;
    func_0x000107c613fc(&UNK_110386840,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    *(long *)(puVar7 + 0x20) = param_2;
    uStack_60 = 0x10112263c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101054b14;
    puStack_68 = &UNK_110386858;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar6);
    puVar6 = puVar5;
    func_0x000107c3eae8(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar5);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011209d0);
  (*pcVar1)();
}



/* Entry: 1011209d0; end: 101120d23;  */

undefined * FUN_1011209d0(undefined8 param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar11 = &puStack_90;
  if (param_2 == 0) {
    uVar13 = 0xe700000000000000;
    uVar14 = 0x796669746f7053;
  }
  else {
    if (param_2 != 1) {
      func_0x000101107304(0);
      puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,param_2);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101120d24);
      (*pcVar1)();
    }
    uVar13 = 0xeb00000000636973;
    uVar14 = 0x754d20656c707041;
  }
  lVar2 = 0x5f6e695f6e65706f;
  func_0x000107c5fadc(0x5f6e695f6e65706f,0xeb00000000707061);
  uVar3 = 0x6569567375636f46;
  func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar12 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    lVar5 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar5;
    func_0x00010075bbf0();
    *(long *)(lVar5 + 0x40) = lVar6;
    *(undefined8 *)(lVar5 + 0x20) = uVar14;
    *(undefined8 *)(lVar5 + 0x28) = uVar13;
    uVar13 = uVar12;
    func_0x000107c5fb00(lVar2,uVar12,lVar5);
    func_0x000107c6142c(uVar12);
    puVar7 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    puVar9 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar2,uVar13);
    func_0x000107c6142c(uVar13);
    func_0x000107c4dfd4(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar8 = &UNK_1103867a0;
    func_0x000107c613fc(&UNK_1103867a0,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar10 = &UNK_1103867c8;
    func_0x000107c613fc(&UNK_1103867c8,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar8;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(int *)(puVar10 + 0x20) = param_2;
    *(undefined8 *)(puVar10 + 0x28) = param_3;
    uStack_70 = 0x1011224c4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101054b14;
    puStack_78 = &UNK_1103867e0;
    puStack_68 = puVar10;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar8);
    puVar8 = puVar9;
    func_0x000107c3eae8(puVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101120d00);
  (*pcVar1)();
}



/* Entry: 101120d24; end: 1011211db;  */

void FUN_101120d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010ef26fb0);
  puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar3 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(param_1,&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  func_0x000107c5fddc(param_2,&uStack_70,puVar3,puVar4);
  uVar7 = uStack_68;
  func_0x000107c5edd0(lVar10,uStack_70,uStack_68);
  func_0x000107c6142c(uVar7);
  lVar1 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar10,lVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    FUN_100dfa6ec(0);
    uVar7 = 0x112d377a8;
    FUN_1011225a0(0x112d377a8,FUN_100dfa6ec,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
  }
  func_0x000107c4200c(param_3);
  return;
}



/* Entry: 1011211dc; end: 10112126f;  */

void FUN_1011211dc(long param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(param_1);
      FUN_101121270();
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101121270; end: 101121697;  */

void FUN_101121270(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = param_2;
  lVar3 = param_3;
  func_0x000107c5fadc();
  lVar16 = lVar2;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar16 == 0) {
    lVar15 = 0;
    lVar16 = 0;
    lVar5 = lVar3;
  }
  else {
    lVar15 = lVar16;
    func_0x000107c5faec();
    lVar5 = lVar3;
    func_0x000107c61170();
    lVar2 = lVar16;
    lVar16 = lVar3;
  }
  func_0x000101146e28();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  if (lVar16 == 0) {
    func_0x000107c61434(param_3);
    lVar16 = param_3;
    lVar15 = param_2;
  }
  *(long *)(lVar3 + 0x20) = lVar15;
  *(long *)(lVar3 + 0x28) = lVar16;
  lVar16 = lVar5;
  func_0x000107c5fb00(lVar2,lVar5,lVar3);
  lVar3 = lVar16;
  func_0x000107c6142c();
  func_0x000101146ef0();
  lVar15 = lVar3;
  func_0x000107c5fb00();
  lVar4 = lVar15;
  func_0x000107c6142c(lVar3);
  func_0x000101146fb8();
  lVar12 = lVar4;
  func_0x000107c5fb00();
  lVar13 = lVar12;
  func_0x000107c6142c(lVar4);
  func_0x000101147080();
  lVar14 = lVar13;
  func_0x000107c5fb00();
  func_0x000107c6142c(lVar13);
  puVar6 = &UNK_1103867a0;
  func_0x000107c613fc(&UNK_1103867a0,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110386890;
  func_0x000107c613fc(&UNK_110386890,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_1;
  func_0x000107c6157c(puVar6);
  func_0x000107c61174();
  func_0x000107c5fadc(lVar3,lVar12);
  func_0x000107c6142c(lVar12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101122648;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_1103868a8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar10 = puVar9;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar3);
  puVar7 = puStack_78;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c5fadc(lVar4,lVar14);
  func_0x000107c6142c(lVar14);
  pcStack_80 = FUN_101121754;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_1103868d0;
  ppuVar8 = &puStack_a0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar4);
  puVar6 = puStack_78;
  func_0x000107c61574();
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)((long)puVar6 + 0x18) = 5;
  *(undefined8 *)((long)puVar6 + 0x10) = 2;
  *(undefined **)((long)puVar6 + 0x20) = puVar10;
  *(undefined **)((long)puVar6 + 0x28) = puVar9;
  puVar7 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar9);
  func_0x000107c5fadc(lVar2,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c5fadc(lVar5,lVar15);
  func_0x000107c6142c(lVar15);
  uVar11 = 0;
  FUN_101122650(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar16 = (long)puVar6;
  func_0x000107c5fc48(puVar6,uVar11);
  func_0x000107c61574(puVar6);
  func_0x000107c48d50(puVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar16);
  func_0x000107c4f018(param_1);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101121698; end: 101121753;  */

void FUN_101121698(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2 + 0x40;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_2 + 0x48);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x20))(5,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c420a8(param_1);
    func_0x000107c420a8(param_3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101121754; end: 10112175f;  */

void FUN_101121754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 101121760; end: 1011218c7;  */

void FUN_101121760(long param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      func_0x000107c4d8a8();
      func_0x000107c61180();
      if (param_3 != 0) {
        lVar1 = param_3;
        func_0x000107c4f59c();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        if (lVar1 != 0) {
          lVar2 = lVar1;
          func_0x000107c5faec();
          func_0x000107c61170(lVar1);
          puVar3 = &UNK_110386818;
          func_0x000107c613fc(&UNK_110386818,0x3c,7);
          *(long *)(puVar3 + 0x10) = param_1;
          *(long *)(puVar3 + 0x18) = param_2;
          *(long *)(puVar3 + 0x20) = lVar2;
          *(undefined1 **)(puVar3 + 0x28) = puVar5;
          *(undefined8 *)(puVar3 + 0x30) = param_5;
          *(undefined4 *)(puVar3 + 0x38) = param_4;
          func_0x000107c61174(param_1);
          func_0x000107c6157c(param_2);
          func_0x000107c61174(param_5);
          uVar4 = 0x12;
          func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925dc8,puVar3,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(puVar3);
          func_0x000107c61574(uVar4);
        }
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1011218c8; end: 101121963;  */

void FUN_1011218c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1011225a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121964,uVar2,uVar3);
  return;
}



/* Entry: 101121964; end: 101121a3b;  */

void FUN_101121964(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000107c420a8(*(undefined8 *)(unaff_x22 + 0x10),param_2,1,0);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1011219c8;
  lVar1 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  *(undefined4 *)((long)plVar5 + 0xb4) = *(undefined4 *)(unaff_x22 + 0x58);
  plVar5[0x13] = lVar3;
  plVar5[0x14] = lVar2;
  plVar5[0x11] = lVar4;
  plVar5[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121a5c,0,0);
  return;
}



/* Entry: 101121a3c; end: 101121a5b;  */

void FUN_101121a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0xb4) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121a5c,0,0);
  return;
}



/* Entry: 101121a5c; end: 101121b9b;  */

void FUN_101121a5c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  iVar2 = *(int *)(unaff_x22 + 0xb4);
  if (iVar2 == 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0xa0) + 0x30);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) && (FUN_101137240(), (param_2 & 1) != 0)) {
      func_0x0001011225e0(*(long *)(lVar5 + 0x38) + param_1 * 0x28,unaff_x22 + 0x38);
      FUN_101122624(unaff_x22 + 0x38,unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar5 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
      (**(code **)(lVar5 + 0x20))(unaff_x22 + 0x60,uVar1,lVar5);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar5 = *(long *)(unaff_x22 + 0x80);
      func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
      piVar4 = *(int **)(lVar5 + 8);
      iVar2 = *piVar4;
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101121b9c;
                    /* WARNING: Could not recover jumptable at 0x000101121b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar4))
                (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),
                 *(undefined8 *)(unaff_x22 + 0x98),uVar1,lVar5);
      return;
    }
  }
  else if (iVar2 != 1) {
    func_0x000101107304(0);
    *(int *)(unaff_x22 + 0xb0) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)()
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101121b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101121b9c; end: 101121c33;  */

void FUN_101121b9c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101121bfc;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101122788;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101121c34; end: 101121caf;  */

void FUN_101121c34(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c61174(param_1);
      FUN_101121cb0();
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101121cb0; end: 101121eab;  */

void FUN_101121cb0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long alStack_60 [2];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  lVar4 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + lVar6);
  func_0x000107c5ee70();
  (**(code **)(lVar8 + 8))(&stack0xffffffffffffffb0 + lVar6,lVar1);
  func_0x000107c55a9c(uVar7);
  func_0x000107c61170(lVar4);
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000101147148();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar1);
  func_0x000107c40930();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar3 = &UNK_110386930;
    func_0x000107c613fc(&UNK_110386930,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar5 = &UNK_110386958;
    func_0x000107c613fc(&UNK_110386958,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10d925de0;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    func_0x000107c615f0(lVar4);
    func_0x000107c61174(puVar2);
    *(undefined **)((long)alStack_60 + lVar6) = PTR___sytN_11034f1b0 + 8;
    uVar7 = 0x12;
    func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925de8,puVar5);
    func_0x000107c615e8(lVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar7);
  }
  lVar6 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c614f0();
    (**(code **)(lVar4 + 0x28))();
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c420a8(param_1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101121eac; end: 101121f3b;  */

void FUN_101121eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1011225a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121f3c,uVar2,uVar3);
  return;
}



/* Entry: 101121f3c; end: 101121f7b;  */

void FUN_101121f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101121f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101121f7c; end: 101121f7f;  */

void FUN_101121f7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 101121f80; end: 101121ff3;  */

void FUN_101121f80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000101122144(unaff_x20 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101121ff4; end: 101122113;  */

/* WARNING: Possible PIC construction at 0x0001011220dc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101121ff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    return;
  }
  uVar1 = 6;
  if (*(long *)(lVar6 + _DAT_113072cf8) != 2) {
    uVar1 = 8;
  }
  uVar2 = 7;
  if (*(long *)(lVar6 + _DAT_113072cf8) != 3) {
    uVar2 = uVar1;
  }
  if (param_1 == 3) {
    lVar3 = unaff_x20 + 0x40;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar6 = 0x18;
LAB_1011220b8:
      lVar5 = *(long *)(unaff_x20 + 0x48);
      lVar4 = lVar3;
      func_0x000107c614f0();
      (**(code **)(lVar5 + lVar6))(uVar2,lVar4,lVar5);
      lVar4 = lVar3;
      goto code_r0x000107c615e8;
    }
  }
  else if (param_1 == 2) {
    lVar3 = unaff_x20 + 0x40;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar6 = 0x10;
      goto LAB_1011220b8;
    }
  }
  else if (param_1 == 1) {
    lVar3 = unaff_x20 + 0x40;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar6 = 8;
      goto LAB_1011220b8;
    }
  }
  func_0x000107c4ffe8(lVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 101122114; end: 101122167; -[_TtC32MapFriendFocusViewImplementation15FocusViewRouter didCloseDirectionsSheetWithAction:] */

void FUN_101122114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101121ff4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101122168; end: 1011222f3;  */

undefined *
FUN_101122168(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_80;
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = puVar3;
  }
  (*param_3)();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c4dfd4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c613fc(param_4,0x20,7);
    *(undefined8 *)(param_4 + 0x10) = param_1;
    *(undefined8 *)(param_4 + 0x18) = param_2;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101054b14;
    uStack_68 = param_6;
    uStack_60 = param_5;
    lStack_58 = param_4;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(lStack_58);
    puVar3 = puVar4;
    func_0x000107c3eae8(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011222f4);
  (*pcVar1)();
}



/* Entry: 1011222f4; end: 101122497;  */

void FUN_1011222f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  lVar2 = param_1;
  func_0x000106874f8c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c437a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    pcStack_60 = FUN_101121f7c;
    uStack_58 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101054b14;
    puStack_68 = &UNK_1103866c8;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puVar3;
    func_0x000107c3eae8(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar3);
    if (param_4 == 0) {
      func_0x000107c61174(puVar5);
      param_3 = 0;
    }
    else {
      func_0x000107c61174(puVar5);
      func_0x000107c5fadc(param_3,param_4);
    }
    puVar3 = PTR_PTR_1126b10a8;
    func_0x000107c610f8(PTR_PTR_1126b10a8);
    uVar6 = 0;
    FUN_101122650(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    func_0x000107c5fc48(param_1,uVar6);
    func_0x000107c46c9c(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c4ee8c(param_2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101122498);
  (*pcVar1)();
}



/* Entry: 101122498; end: 1011224d3;  */

void FUN_101122498(long param_1,long param_2)

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



/* Entry: 1011224d4; end: 101122563;  */

void FUN_1011224d4(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101122564;
  *(undefined4 *)(plVar7 + 0xb) = uVar3;
  plVar7[5] = lVar2;
  plVar7[6] = lVar8;
  plVar7[3] = lVar1;
  plVar7[4] = lVar5;
  plVar7[2] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[7] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1011225a0(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[8] = lVar5;
  plVar7[9] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121964,lVar5,lVar6);
  return;
}



/* Entry: 101122564; end: 10112259f;  */

void FUN_101122564(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010112259c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011225a0; end: 101122623;  */

void FUN_1011225a0(long *param_1,code *param_2,long param_3)

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



/* Entry: 101122624; end: 10112264f;  */

undefined8 * FUN_101122624(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101122650; end: 10112268f;  */

void FUN_101122650(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101122690; end: 101122697;  */

void FUN_101122690(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c61174(param_1);
      FUN_101121cb0();
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101122698; end: 1011226c7;  */

void FUN_101122698(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011226c8; end: 101122717;  */

void FUN_1011226c8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1011227c4;
  plVar5[2] = lVar3;
  plVar5[3] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar3;
  uVar4 = 0x112d45220;
  FUN_1011225a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101121f3c,lVar2,uVar4);
  return;
}



/* Entry: 101122718; end: 101122787;  */

void FUN_101122718(undefined8 param_1)

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
  plVar3[1] = 0x1011227c8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101122788; end: 1011227cb;  */

void FUN_101122788(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101121c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011227cc; end: 10112335f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011227cc(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  byte abStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = _DAT_112d5eee0;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d5eee0);
  func_0x000107c4c3a0();
  func_0x000107c61180();
  uVar14 = param_2;
  lStack_80 = lVar6;
  if (lVar6 == 0) {
    func_0x000107c5faec();
    uVar14 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5faec();
  lStack_78 = _DAT_112d5eef0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d5eef0);
  uStack_68 = uVar14;
  func_0x000107c41324(uVar7);
  func_0x000107c61180();
  func_0x000107c5ee94(auStack_90 + lVar4);
  func_0x000107c61170(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c5ee70();
  func_0x000107c43874(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar8 == (undefined *)0x0) {
    puStack_88 = (undefined *)0x0;
    uVar14 = 0xe000000000000000;
  }
  else {
    puVar9 = puVar8;
    func_0x000107c5faec();
    puStack_88 = puVar9;
    func_0x000107c61170(puVar8);
  }
  (**(code **)(lVar13 + 8))(auStack_90 + lVar4,lVar5);
  lVar13 = *(long *)(unaff_x20 + _DAT_112d5ef90);
  lVar5 = ((undefined8 *)(lVar13 + _DAT_112fcd620))[1];
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(lVar13 + _DAT_112fcd618);
    lVar16 = ((undefined8 *)(lVar13 + _DAT_112fcd618))[1];
    func_0x000107c61434(lVar16);
  }
  else {
    uVar7 = *(undefined8 *)(lVar13 + _DAT_112fcd620);
    lVar16 = lVar5;
  }
  puVar1 = (ulong *)(lVar13 + _DAT_112fcd610);
  uVar11 = *puVar1;
  uVar10 = puVar1[1];
  func_0x000107c61434(uVar10);
  func_0x000107c61434(lVar5);
  FUN_10111efa0(lVar6,uStack_68);
  puVar8 = PTR_PTR_1126a63b0;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar7,lVar16);
  func_0x000107c6142c(lVar16);
  puVar9 = puStack_88;
  func_0x000107c5fadc(puStack_88,uVar14);
  func_0x000107c6142c(uVar14);
  func_0x000107c5fadc(uVar11,uVar10);
  func_0x000107c6142c(uVar10);
  abStack_a0[lVar4 + 1] = (byte)lVar6 & 1;
  abStack_a0[lVar4] = 0;
  func_0x000107c465e4();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar11);
  lVar4 = _DAT_112d5efb8;
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d5efb8);
  *(undefined **)(unaff_x20 + _DAT_112d5efb8) = puVar8;
  func_0x000107c61174(puVar8);
  func_0x000107c61170(uVar14);
  lVar5 = ((undefined8 *)(lVar13 + _DAT_112fcd628))[1];
  if (lVar5 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar13 + _DAT_112fcd628);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar14,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c52ae0(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
  lVar5 = ((undefined8 *)(lVar13 + _DAT_112fcd630))[1];
  if (lVar5 == 0) {
    func_0x000107c61174(uVar14);
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar13 + _DAT_112fcd630);
    func_0x000107c61174(uVar14);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar7,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c58e54(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  uVar11 = *puVar1;
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112d5ef50);
  uVar12 = ((ulong *)(unaff_x20 + _DAT_112d5ef50))[1];
  if (((uVar11 == uVar10) && (puVar1[1] == uVar12)) ||
     (func_0x000107c605b8(uVar11,puVar1[1],uVar10,uVar12,0), (uVar11 & 1) != 0)) {
    func_0x000107c55818(*(undefined8 *)(unaff_x20 + lVar4));
  }
  uVar11 = *puVar1;
  uVar3 = puVar1[1];
  uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar14);
  FUN_101123360(uVar11,uVar3,uVar14);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(uVar14);
  uVar11 = *puVar1;
  uVar3 = puVar1[1];
  uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar14);
  FUN_1011234cc(uVar11,uVar3,uVar14);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(uVar14);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61174(uVar7);
  uVar14 = uVar7;
  FUN_1011235fc();
  func_0x000107c53980(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
  puVar8 = PTR_PTR_1126c7238;
  func_0x000107c61168(PTR_PTR_1126c7238);
  func_0x000107c61174(uVar14);
  func_0x000107c5fadc(uVar10,uVar12);
  lVar5 = lStack_80;
  uVar11 = uVar10;
  func_0x000107c4b920(puVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar10);
  func_0x00010601db50(puVar8);
  func_0x000107c6142c(uStack_68);
  func_0x000107c591a8(uVar14);
  func_0x000107c61170(uVar14);
  lVar5 = lStack_78;
  uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + lStack_78);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar7);
  FUN_101125a90();
  func_0x000107c61170(uVar7);
  func_0x000107c55810(uVar14);
  func_0x000107c61170(uVar14);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61174(uVar7);
  uVar14 = uVar7;
  func_0x000101122fac();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar12);
  func_0x000107c55a68(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c3cf1c(uVar7);
  func_0x000107c61180();
  ppuVar15 = &PTR_PTR_1126bf310;
  lVar6 = 0;
  FUN_101125c08(0,0x112d5ecd0,&PTR_PTR_1126bf310);
  uVar14 = uVar7;
  func_0x000107c5fc54(uVar7);
  func_0x000107c61170(uVar7);
  func_0x0001026ea7b8(uVar14);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    func_0x000107c61174(uVar7);
    func_0x000107c5fadc(uVar14,lVar6);
    func_0x000107c57338(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar14);
    uVar14 = *(undefined8 *)(unaff_x20 + lVar4);
    if (uVar11 == 0) {
      func_0x000107c61174(uVar14);
      ppuVar15 = (undefined **)0x0;
    }
    else {
      func_0x000107c61174(uVar14);
      func_0x000107c61434(uVar11);
      func_0x000107c5fadc(ppuVar15,uVar11);
      func_0x000107c61430(uVar11,2);
    }
    func_0x000107c6142c(lVar6);
    func_0x000107c57340(uVar14);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(ppuVar15);
  }
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5ef08));
  FUN_101123a10();
  uVar11 = *(ulong *)(unaff_x20 + lStack_70);
  func_0x000107c4a3bc();
  if ((uVar11 & 1) == 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + lVar5);
    puVar8 = &UNK_110386a48;
    puVar9 = puVar8;
    func_0x000107c613fc(&UNK_110386a48,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    func_0x000107c613fc(&UNK_110386a48,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    func_0x000107c61174(uVar14);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar8);
    FUN_10111f060(uVar14,FUN_101125bf8,puVar9,0x101125c00,puVar8);
    func_0x000107c61170(uVar14);
    func_0x000107c61578(puVar9,2);
    func_0x000107c61578(puVar8,2);
  }
  else {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d5f000);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d5f008);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  return;
}



/* Entry: 101123360; end: 1011234cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101123360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d5ef00);
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
  puVar3 = &UNK_110386a48;
  func_0x000107c613fc(&UNK_110386a48,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110386b88;
  func_0x000107c613fc(&UNK_110386b88,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  uStack_60 = 0x101125c50;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101132f70;
  puStack_68 = &UNK_110386ba0;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c5c070(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1011234cc; end: 1011235fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011234cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5ef78);
  func_0x000107c5fadc();
  uVar1 = 0;
  FUN_101125c08(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar2 = &UNK_110386a48;
  func_0x000107c613fc(&UNK_110386a48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110386b38;
  func_0x000107c613fc(&UNK_110386b38,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_50 = FUN_101125c48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101043a98;
  puStack_58 = &UNK_110386b50;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c5b49c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1011235fc; end: 101123a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011235fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar12 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = PTR_PTR_1126a63c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar11 = *(undefined **)(unaff_x20 + _DAT_112d5efc8);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d5eee0);
  func_0x000107c4c3a0();
  func_0x000107c61180();
  lVar10 = param_2;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    lVar10 = param_2;
    puStack_88 = puVar3;
    func_0x000107c5fadc();
    puVar3 = puStack_88;
    func_0x000107c6142c(param_2);
  }
  func_0x000107c43aa0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5efd0);
  func_0x000107c44f90(uVar5);
  func_0x000107c61180();
  func_0x000107c551f8(puVar3);
  func_0x000107c61170(uVar5);
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112d5efc0);
  func_0x000107c3cfe4();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
  }
  else {
    if (puVar11 != (undefined *)0x0) {
      puVar7 = puVar11;
      func_0x000107c3d15c();
      func_0x000107c61180();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x000107c42168();
        func_0x000107c61180();
        puStack_88 = puVar6;
        func_0x000107c61170(puVar7);
        func_0x000107c5ee94(lVar14,puVar8);
        func_0x000107c61170(puVar8);
        (**(code **)(lVar16 + 0x20))(lVar14 - extraout_x12_01,lVar14,lVar2);
        func_0x000107c5ee6c(lVar13,0x40f5180000000000);
        func_0x000107c5eea0(puVar12);
        func_0x000107c5ee78(lVar13,puVar12);
        puVar6 = puStack_88;
        pcVar15 = *(code **)(lVar16 + 8);
        (*pcVar15)(puVar12,lVar2);
        (*pcVar15)(lVar13,lVar2);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c58f50(puVar3);
        func_0x000107c61170(puVar7);
        (*pcVar15)(lVar14 - extraout_x12_01);
        lVar10 = lVar2;
      }
    }
    puVar7 = puVar6;
    func_0x000107c5c158();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    uStack_80 = 0x20b7c220;
    uStack_78 = 0xa400000000000000;
    puStack_70 = puVar8;
    lStack_68 = lVar10;
    FUN_100e8b654();
    puVar9 = &uStack_80;
    func_0x000107c601dc(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar7,puVar7);
    func_0x000107c6142c(lVar10);
    if (puVar9[2] != 0) {
      uVar5 = puVar9[4];
      uVar1 = puVar9[5];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c553b0(puVar3);
      func_0x000107c61170(uVar5);
      if (puVar9[2] == 2) {
        uVar5 = puVar9[6];
        uVar1 = puVar9[7];
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(puVar9);
        func_0x000107c5fadc(uVar5,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c59de8(puVar3);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar5);
        return puVar3;
      }
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar11);
    func_0x000107c6142c(puVar9);
    puVar11 = puVar6;
  }
  func_0x000107c61170(puVar11);
  return (undefined *)0x0;
}



/* Entry: 101123a10; end: 101123c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101123a10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  lVar4 = _DAT_112d5f010;
  if (((((*(byte *)(unaff_x20 + _DAT_112d5f010) & 1) == 0) &&
       (*(char *)(unaff_x20 + _DAT_112d5f000 + 8) != '\x01')) &&
      (*(char *)(unaff_x20 + _DAT_112d5f008 + 8) != '\x01')) &&
     (*(char *)(unaff_x20 + _DAT_112d5eff8 + 8) != '\x01')) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5eee8);
    func_0x000107c3e884(uVar5);
    func_0x000107c61180();
    puVar2 = PTR___sSSN_11034da80;
    uVar9 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d5ef90) + _DAT_112fcd610);
    func_0x000100077018(*puVar1,puVar1[1],uVar9);
    func_0x000107c6142c(uVar9);
    lVar6 = *(long *)(unaff_x20 + _DAT_112d5efe0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      uVar10 = 0x40;
      func_0x000107c613fc();
      uVar11 = 1;
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      lVar3 = _DAT_112d5eee0;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5eee0);
      func_0x000107c4c3a0();
      func_0x000107c61180();
      uVar9 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      *(undefined **)(lVar7 + 0x38) = puVar2;
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      *(undefined8 *)(lVar7 + 0x28) = uVar10;
      lVar8 = lVar7;
      func_0x000107c5fc48(lVar7,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar7);
      func_0x000107c5ea20(*(undefined8 *)(unaff_x20 + lVar3));
      func_0x000107c43744();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c5b674();
      func_0x000107c61180();
      func_0x000107c5d388();
      func_0x000107c61170(uVar9);
      func_0x000107c4bca8(uVar11,lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar8);
    }
    *(undefined1 *)(unaff_x20 + lVar4) = 1;
  }
  return;
}



/* Entry: 101123c6c; end: 101123f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101123c6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  if (param_1 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x00010901d430();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(param_3 + _DAT_112d5efd8);
      *(long *)(param_3 + _DAT_112d5efd8) = lVar2;
      func_0x000107c61170(uVar3);
      func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      func_0x00010901cdb0(param_1,uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c5557c(param_4);
      func_0x000107c4d664(*(undefined8 *)(param_3 + _DAT_112d5ef08));
      FUN_101123a10();
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101123f60; end: 10112404f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101123f60(undefined8 param_1,char param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_2 != '\x01') {
    func_0x000107c61428(param_5 + 0x10,auStack_78,0,0);
    lVar2 = param_5 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5f000);
      *puVar1 = param_1;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170();
    }
  }
  if (param_4 != '\x01') {
    func_0x000107c61428(param_5 + 0x10,auStack_60,0,0);
    lVar2 = param_5 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5f008);
      *puVar1 = param_3;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170();
    }
  }
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_101123a10();
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101124050; end: 1011240ab;  */

void FUN_101124050(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1011240ac(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011240ac; end: 101124383;  */

/* WARNING: Possible PIC construction at 0x000101124194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010112420c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011242f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101124308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101124210) */
/* WARNING: Removing unreachable block (ram,0x0001011242fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011240ac(long param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar7 = *(ulong *)(param_1 + _DAT_112fa97b8);
  if (uVar7 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101124384);
        (*pcVar2)();
      }
      lVar4 = *(long *)(uVar7 + 0x20);
      func_0x000107c61174();
      uVar7 = param_2;
    }
    else {
      lVar4 = 0;
      FUN_10111c37c();
    }
    lVar5 = *(long *)(lVar4 + _DAT_112fa9758);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar1 = *(undefined8 *)(lVar5 + _DAT_112fa98b0);
    uVar3 = ((undefined8 *)(lVar5 + _DAT_112fa98b0))[1];
    func_0x000107c61434(uVar3);
    func_0x000107c61170(lVar5);
    lVar5 = *(long *)(unaff_x20 + _DAT_112d5efa8);
    lVar4 = *(long *)(unaff_x20 + _DAT_112d5eee0);
    func_0x000107c4c3a0();
    func_0x000107c61180();
    if (lVar4 == 0) {
      uVar3 = uVar7;
      func_0x000107c5faec();
      func_0x000107c5fadc();
    }
    else {
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar5 != 0) {
        lVar4 = lVar5;
        func_0x000107c3fc6c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar5);
        }
        else {
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
          uVar6 = 0;
          func_0x000102660d54(0);
          func_0x00010265f298(uVar1,uVar3,uVar6);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  return;
}



/* Entry: 101124384; end: 10112449f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101124384(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112d5efa8);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d5ef90) + _DAT_112fcd610);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c4e67c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar6 == 0) {
    bVar3 = false;
  }
  else {
    uVar7 = uVar6;
    func_0x000107c4e684();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_101125c08(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    uVar5 = uVar7;
    func_0x000107c5fc54(uVar7,uVar4);
    func_0x000107c61170(uVar7);
    if (uVar5 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar7 = uVar5;
      }
      func_0x000107c60480(uVar7);
    }
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar6);
    bVar3 = 1 < (long)uVar7;
  }
  return bVar3;
}



/* Entry: 1011244a0; end: 1011246f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011244a0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  lVar4 = _DAT_112d5f010;
  if ((*(byte *)(unaff_x20 + _DAT_112d5f010) & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5eee8);
    func_0x000107c3e884(uVar5);
    func_0x000107c61180();
    puVar2 = PTR___sSSN_11034da80;
    uVar9 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d5ef90) + _DAT_112fcd610);
    func_0x000100077018(*puVar1,puVar1[1],uVar9);
    func_0x000107c6142c(uVar9);
    lVar6 = *(long *)(unaff_x20 + _DAT_112d5efe0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      uVar10 = 0x40;
      func_0x000107c613fc();
      uVar11 = 1;
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      lVar3 = _DAT_112d5eee0;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5eee0);
      func_0x000107c4c3a0();
      func_0x000107c61180();
      uVar9 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      *(undefined **)(lVar7 + 0x38) = puVar2;
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      *(undefined8 *)(lVar7 + 0x28) = uVar10;
      lVar8 = lVar7;
      func_0x000107c5fc48(lVar7,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar7);
      func_0x000107c5ea20(*(undefined8 *)(unaff_x20 + lVar3));
      func_0x000107c43744();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c5b674();
      func_0x000107c61180();
      func_0x000107c5d388();
      func_0x000107c61170(uVar9);
      func_0x000107c4bca8(uVar11,lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar8);
    }
    *(undefined1 *)(unaff_x20 + lVar4) = 1;
  }
  return;
}



/* Entry: 1011246f4; end: 101124977;  */

/* WARNING: Possible PIC construction at 0x0001011247fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101124800) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011246f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5eee0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5eee8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5eef0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5eef8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5ef00));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef08));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5ef20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5ef28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d5ef30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d5ef48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d5ef50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112d5ef58));
  return;
}



/* Entry: 101124978; end: 101124bd3; -[_TtC32MapFriendFocusViewImplementation22FocusViewBusinessLogic .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101124a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101124a8c) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101124978(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5eee0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5eee8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5eef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5eef8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5ef00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5ef20));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5ef28));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5ef30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5ef48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d5ef50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5ef58));
  return;
}



/* Entry: 101124bd4; end: 101124bf3;  */

void FUN_101124bd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b0510);
  return;
}



/* Entry: 101124bf4; end: 101124d1f;  */

void FUN_101124bf4(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_110386bd8;
  func_0x000107c613fc(&UNK_110386bd8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110386c00;
  func_0x000107c613fc(&UNK_110386c00,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101125c5c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_101125c80;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110386c18;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x72,0x2aa,0x1c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101124d20);
  (*pcVar2)();
}



/* Entry: 101124d20; end: 101124d6f; -[_TtC32MapFriendFocusViewImplementation22FocusViewBusinessLogic didUpdateSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x000101124d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101124d5c) */

void FUN_101124d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101124bf4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


