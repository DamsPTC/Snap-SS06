/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10873187c; end: 10873188f;  */

void FUN_10873187c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_68;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108738d18();
  puVar4 = (undefined8 *)*puVar2;
  puVar1 = (undefined8 *)puVar2[1];
  puVar5 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar4) / -200) * 200);
  func_0x0001087383b4();
  puVar3 = puVar5;
  for (puVar2 = puVar4; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar6 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar6;
    puVar3[2] = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    if (*(char *)(puVar2 + 6) == '\x01') {
      uVar7 = puVar2[4];
      uVar6 = puVar2[3];
      puVar3[5] = puVar2[5];
      puVar3[4] = uVar7;
      puVar3[3] = uVar6;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar3 + 6) = 1;
    }
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    uVar6 = puVar2[7];
    puVar3[8] = puVar2[8];
    puVar3[7] = uVar6;
    puVar3[9] = puVar2[9];
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    uVar7 = puVar2[0xb];
    uVar6 = puVar2[10];
    uVar8 = *(undefined8 *)((long)puVar2 + 0x5c);
    *(undefined8 *)((long)puVar3 + 100) = *(undefined8 *)((long)puVar2 + 100);
    *(undefined8 *)((long)puVar3 + 0x5c) = uVar8;
    puVar3[0xb] = uVar7;
    puVar3[10] = uVar6;
    func_0x000107c27b08(puVar3 + 0xe,puVar2 + 0xe);
    puVar3 = puStack_68 + 0x19;
    puStack_68 = puVar3;
  }
  func_0x000108738dcc();
  for (; puVar4 != puVar1; puVar4 = puVar4 + 0x19) {
    func_0x000104be4af8(puVar4);
  }
  func_0x000108738e40();
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  func_0x000108738530();
  return;
}



/* Entry: 108731890; end: 1087319b7;  */

void FUN_108731890(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_58;
  
  func_0x000108738d18();
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar3) / -200) * 200);
  func_0x0001087383b4();
  puVar2 = puVar4;
  for (puVar5 = puVar3; puVar5 != puVar1; puVar5 = puVar5 + 0x19) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    uVar6 = *puVar5;
    puVar2[1] = puVar5[1];
    *puVar2 = uVar6;
    puVar2[2] = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    if (*(char *)(puVar5 + 6) == '\x01') {
      uVar7 = puVar5[4];
      uVar6 = puVar5[3];
      puVar2[5] = puVar5[5];
      puVar2[4] = uVar7;
      puVar2[3] = uVar6;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar2 + 6) = 1;
    }
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    uVar6 = puVar5[7];
    puVar2[8] = puVar5[8];
    puVar2[7] = uVar6;
    puVar2[9] = puVar5[9];
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    uVar7 = puVar5[0xb];
    uVar6 = puVar5[10];
    uVar8 = *(undefined8 *)((long)puVar5 + 0x5c);
    *(undefined8 *)((long)puVar2 + 100) = *(undefined8 *)((long)puVar5 + 100);
    *(undefined8 *)((long)puVar2 + 0x5c) = uVar8;
    puVar2[0xb] = uVar7;
    puVar2[10] = uVar6;
    func_0x000107c27b08(puVar2 + 0xe,puVar5 + 0xe);
    puVar2 = puStack_58 + 0x19;
    puStack_58 = puVar2;
  }
  func_0x000108738dcc();
  for (; puVar3 != puVar1; puVar3 = puVar3 + 0x19) {
    func_0x000104be4af8(puVar3);
  }
  func_0x000108738e40();
  *(undefined8 **)(unaff_x19 + 8) = puVar4;
  func_0x000108738530();
  return;
}



/* Entry: 1087319b8; end: 108731abb;  */

void FUN_1087319b8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001087319f4(param_2);
  }
  func_0x000108738db4(200);
  return;
}



/* Entry: 108731abc; end: 108731bcb;  */

undefined8
FUN_108731abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [88];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  func_0x000107c27994(auStack_68);
  func_0x000107c279a0(auStack_88,param_3);
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_90 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar4 = *param_5;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = *param_7;
  func_0x000107c279f4(auStack_f8,param_8);
  func_0x00010528ae0c(param_1,auStack_68,auStack_88,&uStack_a0,uVar4,uVar1,uVar2,uVar3,auStack_f8);
  func_0x000107c279f8(auStack_f8);
  func_0x000104be4b28(&uStack_a0);
  func_0x000107c279a4(auStack_88);
  func_0x000107c27914(auStack_68);
  return param_1;
}



/* Entry: 108731bcc; end: 108731c2b;  */

long * FUN_108731bcc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((long *)0x147ae147ae147ae < param_2) {
    FUN_10873187c();
    *param_1 = (long)&PTR_DAT_110a696f0;
    param_1[1] = (long)&PTR_FUN_110a69750;
    if (param_1[0x42] != 0) {
      plVar4 = (long *)param_1[0x41];
      plVar2 = *(long **)(param_1[0x40] + 8);
      lVar3 = *plVar4;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
      param_1[0x42] = 0;
      while (plVar4 != param_1 + 0x40) {
        plVar4 = (long *)plVar4[1];
        __ZdlPv();
      }
    }
    FUN_108731d38(param_1[0x3e]);
    func_0x000107c28800(param_1 + 0x39);
    func_0x000108731d74(param_1 + 0x34);
    func_0x000107c27f98(param_1 + 0x2b);
    func_0x000107c27f9c(param_1 + 0x2a);
    func_0x000107c28a38(param_1 + 0x29);
    func_0x000107c28a3c(param_1 + 0x28);
    func_0x000108738858();
    func_0x000107c27f9c(param_1 + 0x26);
    func_0x000107c28cc4(param_1 + 0x24);
    func_0x000107c29710(param_1 + 0x22);
    func_0x000107c288a4(param_1 + 0x20);
    func_0x000107c286ec(param_1 + 0x1e);
    func_0x000107c28cc8(param_1 + 0x1c);
    func_0x000107c28800(param_1 + 0x1a);
    func_0x000107c288e8(param_1 + 0x18);
    func_0x000107c28808(param_1 + 0x16);
    FUN_10865a95c(param_1 + 10);
    FUN_108687d5c(param_1 + 1);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 200;
  plVar4 = (long *)(uVar1 * 2);
  if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
    plVar4 = param_2;
  }
  if (0xa3d70a3d70a3d6 < uVar1) {
    plVar4 = (long *)0x147ae147ae147ae;
  }
  return plVar4;
}



/* Entry: 108731c2c; end: 108731d37;  */

undefined8 * FUN_108731c2c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_DAT_110a696f0;
  param_1[1] = &PTR_FUN_110a69750;
  if (param_1[0x42] != 0) {
    plVar1 = (long *)param_1[0x41];
    plVar2 = *(long **)(param_1[0x40] + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[0x42] = 0;
    while (plVar1 != param_1 + 0x40) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  FUN_108731d38(param_1[0x3e]);
  func_0x000107c28800(param_1 + 0x39);
  func_0x000108731d74(param_1 + 0x34);
  func_0x000107c27f98(param_1 + 0x2b);
  func_0x000107c27f9c(param_1 + 0x2a);
  func_0x000107c28a38(param_1 + 0x29);
  func_0x000107c28a3c(param_1 + 0x28);
  func_0x000108738858();
  func_0x000107c27f9c(param_1 + 0x26);
  func_0x000107c28cc4(param_1 + 0x24);
  func_0x000107c29710(param_1 + 0x22);
  func_0x000107c288a4(param_1 + 0x20);
  func_0x000107c286ec(param_1 + 0x1e);
  func_0x000107c28cc8(param_1 + 0x1c);
  func_0x000107c28800(param_1 + 0x1a);
  func_0x000107c288e8(param_1 + 0x18);
  func_0x000107c28808(param_1 + 0x16);
  FUN_10865a95c(param_1 + 10);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 108731d38; end: 108731de7;  */

void FUN_108731d38(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_108731d38(*param_1);
    FUN_108731d38(param_1[1]);
    func_0x00010872b34c(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108731de8; end: 108731dff;  */

void FUN_108731de8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108731e00; end: 108731f57;  */

void FUN_108731e00(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108738890();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_108731f58(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_108731f58(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar4 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x0001087390dc();
      func_0x0001087390bc();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9;
      uVar5 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
        plVar6 = (long *)plVar4[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            func_0x000108738870();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_00;
            uVar5 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108731f58; end: 108731f6f;  */

void FUN_108731f58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108731f70; end: 108731fb3;  */

long * FUN_108731f70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108731fb4; end: 10873205b;  */

void FUN_108731fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  func_0x000108739298();
  func_0x000107c28874(&stack0x00000008);
  func_0x000107c28878(3);
  func_0x000107c28888(in_stack_00000018 + 0x18,in_stack_00000000);
  func_0x000107c28890();
  *(undefined8 *)(in_stack_00000018 + 8) = 3;
  func_0x000107c2887c(in_stack_00000018,&stack0x00000010);
  FUN_10865ba74(in_stack_00000018,0,param_1,param_2,param_3);
  uVar1 = in_stack_00000008;
  in_stack_00000008 = 0;
  *extraout_x8 = uVar1;
  func_0x00010086e6a0();
  func_0x000107c2889c(&stack0x00000008);
  return;
}



/* Entry: 10873205c; end: 1087320c7;  */

/* WARNING: Removing unreachable block (ram,0x000108732094) */

long FUN_10873205c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000108738d18();
  do {
    lVar1 = unaff_x20 + 0x10;
    func_0x000108738124();
  } while ((int)lVar1 == 0);
  *(undefined4 *)(unaff_x20 + 0x98) = *param_3;
  *(undefined1 *)(unaff_x20 + 0x9c) = 1;
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
  func_0x0001087381c4();
  return lVar1;
}



/* Entry: 1087320c8; end: 108732163;  */

void FUN_1087320c8(undefined8 *param_1)

{
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar1;
  
  func_0x000107c33070();
  func_0x000107c33164();
  *param_1 = FUN_10873633c;
  param_1[1] = FUN_108736468;
  uVar1 = *unaff_x23;
  param_1[5] = unaff_x23[1];
  param_1[4] = uVar1;
  param_1[6] = unaff_x23[2];
  unaff_x23[2] = 0;
  FUN_108733f9c(param_1 + 2);
  FUN_10872f6d4();
  param_1[7] = unaff_x21;
  *(undefined1 *)(param_1 + 9) = 0;
  func_0x000107c33074();
  func_0x000107c33054();
  return;
}



/* Entry: 108732164; end: 1087322a3;  */

void FUN_108732164(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uStack_48;
  
  func_0x000107c3303c();
  *param_1 = FUN_108736290;
  param_1[1] = FUN_108736318;
  FUN_108733f9c(param_1 + 2);
  func_0x000108738cf4();
  FUN_10872f6d4();
  plVar2 = (long *)*unaff_x20;
  FUN_10872edec(param_1 + 5,plVar2,*(undefined1 *)(unaff_x20 + 1));
  func_0x000107c3305c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c33048();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c32ff0();
    unaff_x21 = *plVar2;
    if (unaff_x21 == 0) {
      func_0x000107c3a5c0();
      unaff_x21 = *plVar2;
    }
    func_0x000107c330d0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c33024();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c33010();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x000107c32fe0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  param_1 = param_1 + 4;
  FUN_1087322a4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)param_1 != 0) {
      func_0x000108738820();
      func_0x000108738da8();
      FUN_108732300();
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 1087322a4; end: 1087322db;  */

long FUN_1087322a4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108738298();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010873835c();
  func_0x0001087387dc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087322d4);
  (*pcVar1)();
}



/* Entry: 1087322dc; end: 1087322ff;  */

void FUN_1087322dc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000104be51d4();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108732300; end: 108732343;  */

void FUN_108732300(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  cVar1 = *(char *)(param_2 + 6);
  if (cVar1 != '\x01') {
    *param_1 = *param_2;
  }
  else {
    FUN_108732344();
  }
  *(bool *)(param_1 + 6) = cVar1 == '\x01';
  return;
}



/* Entry: 108732344; end: 10873239b;  */

void FUN_108732344(void)

{
  undefined1 in_ZR;
  
  func_0x0001087382f0();
  if (!(bool)in_ZR) {
    FUN_10873239c();
    func_0x000108738be4();
    FUN_1087323dc();
  }
  func_0x000108738cd4();
  func_0x000108732540();
  return;
}



/* Entry: 10873239c; end: 1087323db;  */

void FUN_10873239c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong extraout_x8;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uStack_68;
  
  func_0x000108738430();
  if (param_2 < extraout_x8) {
    uVar1 = param_2;
    func_0x0001087319f4();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar1 * 200;
    return;
  }
  FUN_10873187c();
  uVar1 = param_1[1];
  func_0x0001087383b4();
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    func_0x000107c27994(uVar1,param_2);
    func_0x000107c279a0(uVar1 + 0x18,param_2 + 0x18);
    FUN_1087324bc(uVar1 + 0x38,param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(uVar1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(uVar1 + 0x5c) = uVar4;
    *(undefined8 *)(uVar1 + 0x58) = uVar3;
    *(undefined8 *)(uVar1 + 0x50) = uVar2;
    func_0x000107c279f4(uVar1 + 0x70,param_2 + 0x70);
    uVar1 = uStack_68 + 200;
    uStack_68 = uVar1;
  }
  func_0x000108738dcc();
  func_0x000108738e40();
  param_1[1] = uVar1;
  return;
}



/* Entry: 1087323dc; end: 1087324bb;  */

void FUN_1087323dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001087383b4();
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    func_0x000107c27994(lVar1,param_2);
    func_0x000107c279a0(lVar1 + 0x18,param_2 + 0x18);
    FUN_1087324bc(lVar1 + 0x38,param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(lVar1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(lVar1 + 0x5c) = uVar4;
    *(undefined8 *)(lVar1 + 0x58) = uVar3;
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    func_0x000107c279f4(lVar1 + 0x70,param_2 + 0x70);
    lVar1 = uStack_48 + 200;
    uStack_48 = lVar1;
  }
  func_0x000108738dcc();
  func_0x000108738e40();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1087324bc; end: 108732513;  */

void FUN_1087324bc(void)

{
  undefined1 in_ZR;
  
  func_0x0001087382f0();
  if (!(bool)in_ZR) {
    FUN_108730bdc();
    func_0x000108738be4();
    FUN_108730b58();
  }
  func_0x000108738cd4();
  FUN_108732514();
  return;
}



/* Entry: 108732514; end: 10873256b;  */

long FUN_108732514(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000104be4b4c(param_1);
  }
  return param_1;
}



/* Entry: 10873256c; end: 10873256f;  */

undefined8 * FUN_10873256c(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a69938;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_1087326ac(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x000104be4f5c(param_1 + 3);
  func_0x000104be4f5c(param_1 + 1);
  return param_1;
}



/* Entry: 108732570; end: 108732583;  */

void FUN_108732570(void)

{
  FUN_108732630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732584; end: 108732587;  */

undefined8 * FUN_108732584(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a69938;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_1087326ac(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x000104be4f5c(param_1 + 3);
  func_0x000104be4f5c(param_1 + 1);
  return param_1;
}



/* Entry: 108732588; end: 10873259b;  */

void FUN_108732588(void)

{
  FUN_108732630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873259c; end: 10873259f;  */

void FUN_10873259c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087325a0; end: 1087325b3;  */

void FUN_1087325a0(void)

{
  FUN_1087325fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087325b4; end: 1087325fb;  */

void FUN_1087325b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar1 != 0) {
    func_0x0001087384bc();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104be51d4();
  }
  return;
}



/* Entry: 1087325fc; end: 10873260f;  */

void FUN_1087325fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732610; end: 10873262f;  */

void FUN_108732610(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000104be51d4();
  }
  return;
}



/* Entry: 108732630; end: 1087326ab;  */

undefined8 * FUN_108732630(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a69938;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_1087326ac(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x000104be4f5c(param_1 + 3);
  func_0x000104be4f5c(param_1 + 1);
  return param_1;
}



/* Entry: 1087326ac; end: 10873277b;  */

void FUN_1087326ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000104be4db4(auStack_40,param_1 + 8,&uStack_50);
  func_0x000104be4ddc(alStack_30,auStack_40);
  func_0x000104be4f5c(auStack_40);
  func_0x000108738970();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x58);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x98,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0xa0);
  *(undefined8 *)(alStack_30[0] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x58);
  if (plVar2 == (long *)0x0) {
    func_0x000108738f6c(alStack_30[0]);
  }
  else {
    func_0x000108739058(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108738288();
  }
  func_0x000104be4f5c(alStack_30);
  return;
}



/* Entry: 10873277c; end: 1087327fb;  */

void FUN_10873277c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000108738720();
  func_0x000108738f64();
  *param_1 = FUN_108736720;
  param_1[1] = FUN_108736818;
  FUN_108732bac(param_1 + 4);
  func_0x000108738bd4();
  func_0x000107c33068();
  param_1[10] = unaff_x20;
  *(undefined1 *)(param_1 + 0xc) = 0;
  func_0x000107c330f8(*unaff_x20);
  func_0x000107c33054();
  return;
}



/* Entry: 1087327fc; end: 108732b2f;  */

void FUN_1087327fc(void)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar9;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long *unaff_x20;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  func_0x000107c33110();
  plVar6 = (long *)0x60;
  __Znwm();
  *plVar6 = (long)FUN_1087364a0;
  plVar6[1] = (long)FUN_1087366f8;
  plVar6[10] = (long)unaff_x20;
  plVar12 = plVar6;
  func_0x000107c33158();
  func_0x000107c33068();
  plVar7 = plVar6 + 8;
  *plVar7 = *unaff_x20;
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c3309c(*plVar7);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar6 + 0xb) = 0;
    lVar11 = plVar6[8];
    func_0x000107c32ffc();
    if (*plVar12 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087385ec();
    plVar9 = extraout_x8;
    do {
      if (*plVar9 == 0) {
        func_0x000107c33024();
        plVar9 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar9 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        func_0x000108738154();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738084();
          *(long **)(lVar11 + 0x90) = plVar12;
        }
        func_0x000108738040();
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  FUN_1087322a4();
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  func_0x000108738bf0();
  func_0x000108738fa4();
  func_0x000108738970();
  func_0x000108738a80();
  lVar11 = plVar6[4];
  __ZNSt3__15mutex4lockEv(lVar11 + 0x58);
  plVar12 = (long *)plVar6[4];
  if ((char)plVar12[4] == '\x01') {
    bVar2 = *(byte *)(plVar7 + 3);
    if (((*(byte *)(plVar12 + 3) & 1) == 0) && (bVar2 != 0)) {
      FUN_108732344(&lStack_70,plVar7);
      plVar12[1] = lStack_68;
      *plVar12 = lStack_70;
      plVar12[2] = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      *(undefined1 *)(plVar12 + 3) = 1;
      func_0x000104be4d64(&lStack_70);
    }
    else if (*(byte *)(plVar12 + 3) == 0) {
      if ((bVar2 & 1) == 0) {
        *(int *)plVar12 = (int)*plVar7;
      }
    }
    else if (bVar2 == 0) {
      func_0x000104be4d64(plVar12);
      *(int *)plVar12 = (int)*plVar7;
      *(undefined1 *)(plVar12 + 3) = 0;
    }
    else {
      bVar4 = plVar7 <= plVar12;
      bVar5 = plVar12 == plVar7;
      if (!bVar5) {
        lVar8 = *plVar7;
        lVar1 = plVar7[1];
        func_0x000108738d24(lVar1 - lVar8);
        if (!bVar4 || bVar5) {
          func_0x000108738d24();
          if (!bVar4 || bVar5) {
            FUN_108732b30(lVar8,lVar1);
            func_0x000104be4ac8(plVar12,lVar8);
            goto LAB_108732948;
          }
          lVar13 = lVar8 + extraout_x9;
          FUN_108732b30(lVar8,lVar13);
        }
        else {
          func_0x000104be4a88(plVar12);
          plVar7 = plVar12;
          FUN_108731bcc(plVar12,extraout_x8_02 / 200);
          FUN_10873239c(plVar12,plVar7);
          lVar13 = lVar8;
        }
        FUN_1087323dc(plVar12,lVar13,lVar1);
      }
    }
  }
  else {
    func_0x000108738730();
    FUN_108732300();
    *(undefined1 *)(plVar12 + 4) = 1;
  }
LAB_108732948:
  plVar12 = *(long **)(plVar6[4] + 0xa0);
  *(undefined8 *)(plVar6[4] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x58);
  if (plVar12 == (long *)0x0) {
    func_0x000108738f6c(plVar6[4]);
  }
  else {
    (**(code **)(*plVar12 + 0x10))(plVar12,plVar6 + 4);
    func_0x000108738a28();
  }
  func_0x000108738b54();
  func_0x000107c330d8();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108732b30; end: 108732bab;  */

long FUN_108732b30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_3;
  func_0x000108738adc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 200) {
    func_0x00010873914c();
    func_0x000107c27cfc();
    func_0x000107c27c5c(lVar1 + 0x18,unaff_x21 + 0x18);
    FUN_10872eb1c(lVar1 + 0x38,unaff_x21 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x21 + 0x5c);
    *(undefined8 *)(lVar1 + 100) = *(undefined8 *)(unaff_x21 + 100);
    *(undefined8 *)(lVar1 + 0x5c) = uVar4;
    *(undefined8 *)(lVar1 + 0x58) = uVar3;
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    FUN_108726c04(lVar1 + 0x70,unaff_x21 + 0x70);
    param_3 = param_3 + 200;
    lVar1 = lVar1 + 200;
  }
  return param_3;
}



/* Entry: 108732bac; end: 108732bcb;  */

void FUN_108732bac(void)

{
  func_0x00010873875c();
  FUN_108732bcc();
  return;
}



/* Entry: 108732bcc; end: 108732be3;  */

void FUN_108732bcc(undefined8 *param_1)

{
  func_0x00010873927c();
  *param_1 = &PTR_FUN_110a698f0;
  return;
}



/* Entry: 108732be4; end: 108732c03;  */

void FUN_108732be4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108738e14();
  FUN_108732630();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108732c04; end: 108732c7b;  */

void FUN_108732c04(void)

{
  func_0x000107c33070();
  func_0x000107c33144();
  func_0x000107c33038(FUN_108736904);
  FUN_108734aac();
  FUN_10872fb8c();
  func_0x000107c33060();
  func_0x000107c33054();
  return;
}



/* Entry: 108732c7c; end: 108732dc3;  */

void FUN_108732c7c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint uStack_48;
  
  func_0x000107c3303c();
  *param_1 = FUN_10873684c;
  param_1[1] = FUN_1087368e0;
  FUN_108734aac(param_1 + 2);
  func_0x000108738cf4();
  FUN_10872fb8c();
  plVar2 = (long *)*unaff_x20;
  FUN_10872fa24(param_1 + 5);
  func_0x000107c3305c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c33048();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c32ff0();
    unaff_x21 = *plVar2;
    if (unaff_x21 == 0) {
      func_0x000107c3a5c0();
      unaff_x21 = *plVar2;
    }
    func_0x000107c330d0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c33024();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c33010();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x000107c32fe0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  param_1 = param_1 + 4;
  FUN_108732dc4();
  func_0x0001087382e0();
  do {
    func_0x0001087380cc();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x21 + 0x98) = *unaff_x22;
      *(undefined1 *)(unaff_x21 + 0xa0) = 1;
      func_0x00010873806c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x0001087381dc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108732dc4; end: 108732dfb;  */

long FUN_108732dc4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108738298();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010873835c();
  func_0x0001087387dc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108732df4);
  (*pcVar1)();
}



/* Entry: 108732dfc; end: 108732dff;  */

undefined8 * FUN_108732dfc(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a699f0;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_108732f14(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010862c9b0(param_1 + 3);
  func_0x00010862c9b0(param_1 + 1);
  return param_1;
}



/* Entry: 108732e00; end: 108732e13;  */

void FUN_108732e00(void)

{
  FUN_108732e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732e14; end: 108732e17;  */

undefined8 * FUN_108732e14(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a699f0;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_108732f14(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010862c9b0(param_1 + 3);
  func_0x00010862c9b0(param_1 + 1);
  return param_1;
}



/* Entry: 108732e18; end: 108732e2b;  */

void FUN_108732e18(void)

{
  FUN_108732e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732e2c; end: 108732e2f;  */

void FUN_108732e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108732e30; end: 108732e43;  */

void FUN_108732e30(void)

{
  FUN_108732e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732e44; end: 108732e83;  */

void FUN_108732e44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    func_0x0001087384bc();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x28);
  return;
}



/* Entry: 108732e84; end: 108732e97;  */

void FUN_108732e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108732e98; end: 108732f13;  */

undefined8 * FUN_108732e98(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a699f0;
  if (param_1[1] != 0) {
    func_0x000108738658();
    FUN_108732f14(param_1,auStack_28);
    func_0x000108738978();
    func_0x0001087389b8();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010862c9b0(param_1 + 3);
  func_0x00010862c9b0(param_1 + 1);
  return param_1;
}



/* Entry: 108732f14; end: 108732fdf;  */

void FUN_108732f14(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10862ce14(auStack_40,param_1 + 8,&uStack_50);
  FUN_10862ce70(alStack_30,auStack_40);
  func_0x0001087389c0();
  func_0x0001087387b8();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x40);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x80,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x88);
  *(undefined8 *)(alStack_30[0] + 0x88) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x40);
  if (plVar2 == (long *)0x0) {
    func_0x000108738f10(alStack_30[0]);
  }
  else {
    func_0x000108739058(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000108738288();
  }
  func_0x00010862c9b0(alStack_30);
  return;
}



/* Entry: 108732fe0; end: 10873305f;  */

void FUN_108732fe0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000108738720();
  func_0x000108738f64();
  *param_1 = FUN_108736bd0;
  param_1[1] = FUN_108736cc8;
  FUN_108733260(param_1 + 4);
  func_0x000108738bd4();
  func_0x000107c33068();
  param_1[10] = unaff_x20;
  *(undefined1 *)(param_1 + 0xc) = 0;
  func_0x000107c330f8(*unaff_x20);
  func_0x000107c33054();
  return;
}



/* Entry: 108733060; end: 10873325f;  */

void FUN_108733060(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar6;
  undefined8 *in_stack_00000010;
  
  func_0x000108739298();
  func_0x000107c33110();
  func_0x000107c33164();
  *param_1 = (long)FUN_108736a5c;
  param_1[1] = (long)FUN_108736bb0;
  param_1[8] = (long)unaff_x20;
  plVar6 = param_1;
  func_0x000107c33158();
  func_0x000107c33068();
  func_0x00010873916c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c3309c(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    unaff_x21 = (undefined8 *)param_1[6];
    func_0x000107c32ffc();
    if (*plVar6 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087385ec();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000107c33024();
        plVar4 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar4 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x000108738154();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738084();
          unaff_x21[0x12] = plVar6;
        }
        func_0x000108738040();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_108732dc4();
  func_0x000108739220();
  func_0x000108738edc();
  FUN_10862ce70(&stack0x00000010);
  func_0x0001087387b8();
  func_0x000108738b6c();
  puVar3 = in_stack_00000010;
  __ZNSt3__15mutex4lockEv(in_stack_00000010 + 8);
  if (*(char *)(in_stack_00000010 + 1) == '\x01') {
    uVar1 = *(undefined4 *)unaff_x21;
    *(undefined1 *)((long)in_stack_00000010 + 4) = *(undefined1 *)((long)unaff_x21 + 4);
    *(undefined4 *)in_stack_00000010 = uVar1;
  }
  else {
    *in_stack_00000010 = *unaff_x21;
    *(undefined1 *)(in_stack_00000010 + 1) = 1;
  }
  plVar6 = (long *)in_stack_00000010[0x11];
  in_stack_00000010[0x11] = 0;
  __ZNSt3__15mutex6unlockEv(puVar3 + 8);
  if (plVar6 == (long *)0x0) {
    func_0x000108738f10(in_stack_00000010);
  }
  else {
    func_0x000108738818(*(undefined8 *)(*plVar6 + 0x10));
    func_0x000108738268();
  }
  func_0x0001087389c0();
  func_0x000107c330d8();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108733260; end: 10873327f;  */

void FUN_108733260(void)

{
  func_0x00010873875c();
  FUN_108733280();
  return;
}



/* Entry: 108733280; end: 108733297;  */

void FUN_108733280(undefined8 *param_1)

{
  func_0x00010873927c();
  *param_1 = &PTR_FUN_110a699a8;
  return;
}



/* Entry: 108733298; end: 1087332b7;  */

void FUN_108733298(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108738e14();
  FUN_108732e98();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 1087332b8; end: 10873332f;  */

void FUN_1087332b8(void)

{
  func_0x000107c33070();
  func_0x000107c33144();
  func_0x000107c33038(FUN_108737224);
  FUN_108734b38();
  FUN_1087301c4();
  func_0x000107c33060();
  func_0x000107c33054();
  return;
}



/* Entry: 108733330; end: 10873343f;  */

void FUN_108733330(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 *unaff_x20;
  
  func_0x000107c3303c();
  *param_1 = FUN_1087371ac;
  param_1[1] = FUN_108737200;
  FUN_108734b38(param_1 + 2);
  func_0x000108738cf4();
  FUN_1087301c4();
  plVar2 = (long *)*unaff_x20;
  FUN_10872fbcc(param_1 + 5);
  func_0x000107c3305c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c33048();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c32ff0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c330d0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c33024();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c33010();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x000107c32fe0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108733440(param_1 + 4);
  func_0x000108738bcc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108733440; end: 108733477;  */

long FUN_108733440(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108738298();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010873835c();
  func_0x0001087387dc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108733470);
  (*pcVar1)();
}



/* Entry: 108733478; end: 1087334df;  */

/* WARNING: Removing unreachable block (ram,0x0001087334b0) */

void FUN_108733478(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(param_1 + 8);
  do {
    iVar4 = (int)lVar7 + 0x10;
    func_0x000108738124();
  } while (iVar4 == 0);
  FUN_1087334e0(lVar7 + 0x98);
  plVar5 = (long *)(lVar7 + 0x98);
  FUN_1087317f0();
  *(undefined1 *)(lVar7 + 0xb0) = 1;
  func_0x0001087381c4();
  func_0x000107c3328c();
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)*plVar5;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar5 = param_2;
  return;
}



/* Entry: 1087334e0; end: 108733503;  */

void FUN_1087334e0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be58b8();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 108733504; end: 108733507;  */

void FUN_108733504(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x000104be6574();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be64e4();
    func_0x000104be6568();
    func_0x000104be577c();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  func_0x000104be55fc(unaff_x19 + 0x18);
  func_0x000104be55fc((long *)(param_1 + 8));
  return;
}



/* Entry: 108733508; end: 10873351b;  */

void FUN_108733508(void)

{
  func_0x000104be5724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873351c; end: 10873359b;  */

void FUN_10873351c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000108738720();
  func_0x000108738f64();
  *param_1 = FUN_1087374c0;
  param_1[1] = FUN_1087375b8;
  FUN_1087337bc(param_1 + 4);
  func_0x000108738bd4();
  func_0x000107c33068();
  param_1[10] = unaff_x20;
  *(undefined1 *)(param_1 + 0xc) = 0;
  func_0x000107c330f8(*unaff_x20);
  func_0x000107c33054();
  return;
}



/* Entry: 10873359c; end: 10873379f;  */

void FUN_10873359c(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar5;
  long in_stack_00000010;
  
  func_0x000108739298();
  func_0x000107c33110();
  func_0x000107c33164();
  *param_1 = (long)FUN_108737348;
  param_1[1] = (long)FUN_1087374a0;
  param_1[8] = (long)unaff_x20;
  plVar5 = param_1;
  func_0x000107c33158();
  func_0x000107c33068();
  func_0x00010873916c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c3309c(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    unaff_x21 = param_1[6];
    func_0x000107c32ffc();
    if (*plVar5 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087385ec();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c33024();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108738154();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738084();
          *(long **)(unaff_x21 + 0x90) = plVar5;
        }
        func_0x000108738040();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108733440();
  func_0x000108739220();
  func_0x000108738ee8();
  func_0x000104be5658(&stack0x00000010);
  func_0x000108738e38();
  func_0x000108738b44();
  lVar2 = in_stack_00000010;
  __ZNSt3__15mutex4lockEv(in_stack_00000010 + 0x50);
  if (*(char *)(in_stack_00000010 + 0x18) == '\x01') {
    FUN_10872adfc(in_stack_00000010,unaff_x21);
  }
  else {
    FUN_1087337a0(in_stack_00000010,unaff_x21);
  }
  plVar5 = *(long **)(in_stack_00000010 + 0x98);
  *(undefined8 *)(in_stack_00000010 + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x50);
  if (plVar5 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(in_stack_00000010 + 0x20);
  }
  else {
    func_0x000108738818(*(undefined8 *)(*plVar5 + 0x10));
    func_0x000108738268();
  }
  func_0x000108738e9c();
  func_0x000107c330d8();
  func_0x000107c330d4();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 1087337a0; end: 1087337bb;  */

void FUN_1087337a0(long param_1)

{
  FUN_1087317f0();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1087337bc; end: 1087337db;  */

void FUN_1087337bc(void)

{
  func_0x00010873875c();
  FUN_1087337dc();
  return;
}



/* Entry: 1087337dc; end: 1087337f3;  */

void FUN_1087337dc(undefined8 *param_1)

{
  func_0x00010873927c();
  *param_1 = &PTR_FUN_110a69a60;
  return;
}



/* Entry: 1087337f4; end: 108733867;  */

void FUN_1087337f4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108738e14();
  func_0x000104be5724();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108733868; end: 1087338f3;  */

void FUN_108733868(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x000108738720();
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = FUN_108737958;
  puVar1[1] = FUN_108737a68;
  FUN_1087338f4(puVar1 + 4);
  FUN_108734b38(puVar1 + 2);
  func_0x000108738cf4();
  FUN_1087301c4();
  puVar1[9] = unaff_x20;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  func_0x000107c330f8(*unaff_x20);
  func_0x000107c33054();
  return;
}



/* Entry: 1087338f4; end: 10873391b;  */

void FUN_1087338f4(long param_1,long param_2)

{
  func_0x000108733814();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10873391c; end: 108733a57;  */

void FUN_10873391c(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  func_0x000108739298();
  func_0x000107c33288();
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_1087378e0;
  puVar2[1] = FUN_108737934;
  FUN_108734b38(puVar2 + 2);
  func_0x000108738e2c();
  uVar5 = *unaff_x21;
  func_0x000107c27994(&stack0x00000008,unaff_x21 + 1);
  FUN_1087304fc(puVar2 + 5,uVar5,&stack0x00000008);
  plVar3 = (long *)&stack0x00000008;
  func_0x000107c27914();
  func_0x000107c3305c();
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c33048();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c32ff0();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c330d0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c33024();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c33010();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x000107c32fe0();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108733440(puVar2 + 4);
  func_0x000108738bcc();
  func_0x000107c33084();
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 108733a58; end: 108733a93;  */

undefined8 * FUN_108733a58(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108733a94(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 108733a94; end: 108733acf;  */

void FUN_108733a94(void)

{
  __Znwm(0xd0);
  FUN_108733ad0();
  func_0x000108738c08();
  func_0x00010873845c();
  return;
}



/* Entry: 108733ad0; end: 108733af7;  */

void FUN_108733ad0(long param_1)

{
  func_0x000107c31510();
  func_0x000108738d9c(&PTR_FUN_110a69a98);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 108733af8; end: 108733afb;  */

undefined8 * FUN_108733af8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69a98;
  FUN_108733b40(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108733afc; end: 108733b0f;  */

void FUN_108733afc(void)

{
  FUN_108733b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108733b10; end: 108733b3f;  */

undefined8 * FUN_108733b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69a98;
  FUN_108733b40(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108733b40; end: 108733b83;  */

void FUN_108733b40(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000108731490();
  }
  return;
}



/* Entry: 108733b84; end: 108733bc7;  */

void FUN_108733b84(void)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm();
  func_0x00010873848c();
  func_0x000108738d9c(&PTR_FUN_110a69ad8);
  *(undefined1 *)(lVar1 + 0xb0) = 0;
  func_0x000108738c08();
  func_0x00010873845c();
  return;
}



/* Entry: 108733bc8; end: 108733bcb;  */

undefined8 * FUN_108733bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69ad8;
  FUN_10862e374(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108733bcc; end: 108733bdf;  */

void FUN_108733bcc(void)

{
  FUN_108733be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108733be0; end: 108733c53;  */

undefined8 * FUN_108733be0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69ad8;
  FUN_10862e374(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108733c54; end: 108733e9b;  */

void FUN_108733c54(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000108738224();
    } while (extraout_w10 != 0);
    do {
      func_0x000108738224();
    } while (extraout_w10_00 != 0);
  }
  puStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_10862e548(&puStack_60,&uStack_b0,&uStack_70);
  FUN_10862e5a4(&puStack_50,&puStack_60);
  FUN_10862e394(&puStack_60);
  FUN_10862e394(&uStack_70);
  puStack_60 = puStack_50 + 10;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar3 = puStack_50;
  puStack_80 = puStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x000108738224();
    } while (extraout_w10_01 != 0);
  }
  while (puVar5 = puVar3, func_0x000108733c0c(), ((ulong)puVar5 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar3 + 4,&puStack_60);
  }
  FUN_10862e394(&puStack_80);
  if (puStack_50[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108733de4);
    (*pcVar4)();
  }
  uVar1 = *puStack_50;
  uVar2 = puStack_50[1];
  uVar8 = puStack_50[2];
  *puStack_50 = 0;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  uStack_a0 = uVar1;
  uStack_98 = uVar2;
  uStack_90 = uVar8;
  func_0x000107c2798c(&puStack_60);
  FUN_10862e394(&puStack_50);
  lVar7 = *param_1;
  do {
    puStack_50 = (undefined8 *)0x0;
    lVar6 = lVar7 + 0x10;
    func_0x00010873818c(lVar6,&puStack_50);
    if ((int)lVar6 != 0) {
      FUN_108733f34(lVar7 + 0x98);
      *(undefined8 *)(lVar7 + 0x98) = uVar1;
      *(undefined8 *)(lVar7 + 0xa0) = uVar2;
      *(undefined8 *)(lVar7 + 0xa8) = uVar8;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      *(undefined1 *)(lVar7 + 0xb0) = 1;
      func_0x0001087381c4();
      break;
    }
  } while (((uint)puStack_50 >> 1 & 1) == 0);
  func_0x000104be4b28(&uStack_a0);
  FUN_10862e394(&uStack_b0);
  FUN_10862e394(&uStack_c0);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108733e9c; end: 108733e9f;  */

undefined8 * FUN_108733e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69b18;
  FUN_108733f58(param_1 + 1);
  return param_1;
}



/* Entry: 108733ea0; end: 108733eb3;  */

void FUN_108733ea0(void)

{
  FUN_108733f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108733eb4; end: 108733f07;  */

void FUN_108733eb4(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 != 0) {
    do {
      func_0x000108738224();
    } while (extraout_w10 != 0);
  }
  FUN_108733c54(param_1 + 8);
  FUN_10862e394(&uStack_30);
  return;
}



/* Entry: 108733f08; end: 108733f33;  */

undefined8 * FUN_108733f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69b18;
  FUN_108733f58(param_1 + 1);
  return param_1;
}



/* Entry: 108733f34; end: 108733f57;  */

void FUN_108733f34(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be4b28();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 108733f58; end: 108733f9b;  */

void FUN_108733f58(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108738e14();
  func_0x000107c27b70();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108733f9c; end: 108733feb;  */

undefined8 FUN_108733f9c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  func_0x00010873848c();
  func_0x000108738d9c(&PTR_FUN_110a69b68);
  *(undefined1 *)(lVar1 + 0xb8) = 0;
  func_0x0001087384d4();
  func_0x00010086e6a0();
  func_0x00010873847c();
  return param_1;
}



/* Entry: 108733fec; end: 108733fef;  */

undefined8 * FUN_108733fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69b68;
  FUN_108732610(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108733ff0; end: 108734003;  */

void FUN_108733ff0(void)

{
  FUN_108734004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108734004; end: 10873402f;  */

undefined8 * FUN_108734004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69b68;
  FUN_108732610(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108734030; end: 108734037;  */

void FUN_108734030(void)

{
  return;
}



/* Entry: 108734038; end: 10873406b;  */

void FUN_108734038(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110a69ba8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10873406c; end: 10873409b;  */

void FUN_10873406c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a69ba8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10873409c; end: 1087340eb;  */

void FUN_10873409c(void)

{
  long unaff_x19;
  undefined1 auStack_3f0 [976];
  
  func_0x000108738954();
  func_0x000107c28918();
  FUN_1086995ac(*(undefined8 *)(unaff_x19 + 8),auStack_3f0);
  FUN_1086d6ea8(*(undefined8 *)(unaff_x19 + 0x10),auStack_3f0);
  func_0x000107c288d0(auStack_3f0);
  return;
}


