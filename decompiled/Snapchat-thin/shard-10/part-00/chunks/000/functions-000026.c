/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10736c90c; end: 10736c9ff;  */

void FUN_10736c90c(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = 0;
  puVar4 = (undefined8 *)(param_2 + 0x24);
  while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
    if (*(int *)(puVar4 + 0xc) != 0) {
      uStack_68 = puVar4[0xb];
      uStack_70 = puVar4[10];
      if (puVar4[0xb] != 0) {
        do {
          FUN_10736df44();
        } while (extraout_w10 != 0);
      }
      lVar3 = lVar3 + 1;
      func_0x00010736e15c();
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = lVar3;
  for (lVar6 = *(long *)(param_2 + 4); uVar2 = uStack_60, lVar6 != lVar1; lVar6 = lVar6 + 0x78) {
    lVar7 = *(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 5;
    lStack_58 = lVar7;
    func_0x0001057f9264(&uStack_70,&lStack_58);
    lVar5 = lVar7 + lVar5;
  }
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = uStack_68;
  *(undefined8 *)(param_1 + 4) = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x14) = *(long *)(param_2 + 0x14) - *(long *)(param_2 + 0x10) >> 4;
  *(long *)(param_1 + 0x18) = lVar5;
  func_0x0001057f951c(&uStack_70);
  return;
}



/* Entry: 10736ca00; end: 10736cb03;  */

long * FUN_10736ca00(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint uStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar3 = param_1 + 3;
  param_1[4] = 0;
  *plVar3 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  func_0x00010028af84(param_1 + 8,param_3);
  lVar2 = *param_1;
  for (uVar4 = 0; uVar4 < (ulong)((param_1[1] - lVar2) / 0x60); uVar4 = uVar4 + 1) {
    for (uStack_34 = (uint)*(byte *)(lVar2 + uVar4 * 0x60);
        uStack_34 < *(byte *)(lVar2 + uVar4 * 0x60 + 1); uStack_34 = uStack_34 + 1) {
      plVar1 = plVar3;
      FUN_10736cb04(plVar3,&uStack_34);
      *(int *)plVar1 = (int)uVar4;
      lVar2 = *param_1;
    }
  }
  return param_1;
}



/* Entry: 10736cb04; end: 10736cb37;  */

long FUN_10736cb04(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10736da54(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x14;
}



/* Entry: 10736cb38; end: 10736cb7f;  */

void FUN_10736cb38(long param_1,undefined4 param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  func_0x00010736de50(param_1 + 0x18,&uStack_24);
  return;
}



/* Entry: 10736cb80; end: 10736cbfb;  */

void FUN_10736cb80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010736e0e0();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uStack_28 = extraout_x8;
  FUN_10736def0(auStack_68);
  puVar3 = auStack_68;
  FUN_10736cbfc(auStack_48,uVar1,uVar2,puVar3);
  FUN_10735e63c(auStack_48);
  FUN_10735e63c(auStack_68);
  func_0x00010736e010(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736e054();
  FUN_10735e63c();
  func_0x00010736df7c();
  FUN_10736d94c();
  FUN_10736d9b0(extraout_x8_00,puVar3);
  return;
}



/* Entry: 10736cbfc; end: 10736cc37;  */

void FUN_10736cbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10736d94c();
  FUN_10736d9b0(param_1,param_4);
  return;
}



/* Entry: 10736cc38; end: 10736cc9b;  */

uint * FUN_10736cc38(uint *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  puVar5 = param_1 + 2;
  uVar1 = 5 < *param_1;
  if (*param_1 != 6) {
    lVar2 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c2dd4c();
    lVar3 = lVar2;
    ___cxa_throw(lVar2,&PTR_DAT_1107eaec8,&DAT_104c2dd50);
    ___cxa_free_exception(lVar2);
    lVar4 = lVar3;
    __Unwind_Resume();
    func_0x00010736e044();
    if ((bool)uVar1) {
      FUN_10736ccf8();
    }
    else {
      func_0x00010736ccd0();
      lVar4 = lVar3 + 0x20;
    }
    *(long *)(lVar2 + 8) = lVar4;
    puVar5 = (uint *)(lVar4 + -0x20);
  }
  return puVar5;
}



/* Entry: 10736cc9c; end: 10736ccf7;  */

long FUN_10736cc9c(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736e044();
  if ((bool)in_CY) {
    FUN_10736ccf8();
  }
  else {
    func_0x00010736ccd0();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 10736ccf8; end: 10736cd53;  */

void FUN_10736ccf8(void)

{
  undefined8 uStack_38;
  
  func_0x00010736df54();
  func_0x00010736e170();
  func_0x00010736dfe4();
  func_0x00010736e0b8();
  FUN_10735c118(uStack_38);
  func_0x00010736e0f0();
  FUN_10736cd94();
  func_0x00010736e144();
  return;
}



/* Entry: 10736cd54; end: 10736cd93;  */

long * FUN_10736cd54(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10735c064();
  func_0x00010736e078();
  FUN_10736ce00();
  func_0x00010736dfa0();
  return param_1;
}



/* Entry: 10736cd94; end: 10736cdb7;  */

void FUN_10736cd94(void)

{
  func_0x00010736e078();
  FUN_10736ce00();
  func_0x00010736dfa0();
  return;
}



/* Entry: 10736cdb8; end: 10736cdff;  */

long * FUN_10736cdb8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10735c070();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10736ce00; end: 10736ce87;  */

void FUN_10736ce00(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lVar1 = param_2;
  func_0x00010736e1ac();
  for (; lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_10736cebc(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
    lStack_38 = param_4;
  }
  func_0x00010736e1a0();
  FUN_10736ce88(param_1,param_2,param_3);
  FUN_10735c150(auStack_60);
  return;
}



/* Entry: 10736ce88; end: 10736cebb;  */

void FUN_10736ce88(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107358a58(param_2 + 8);
  }
  return;
}



/* Entry: 10736cebc; end: 10736cedb;  */

void FUN_10736cebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 10736cedc; end: 10736cf07;  */

long * FUN_10736cedc(long *param_1)

{
  FUN_10736cf08();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10736cf08; end: 10736cf0f;  */

void FUN_10736cf08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x20;
    func_0x000107358a58(lVar2 + -0x18);
  }
  return;
}



/* Entry: 10736cf10; end: 10736cfa7;  */

void FUN_10736cf10(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x20;
    func_0x000107358a58(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10736cfa8; end: 10736d003;  */

void FUN_10736cfa8(void)

{
  undefined8 uStack_38;
  
  func_0x00010736df54();
  func_0x00010736e170();
  func_0x00010736dfe4();
  func_0x00010736e0b8();
  FUN_10736cebc(uStack_38);
  func_0x00010736e0f0();
  FUN_10736cd94();
  func_0x00010736e144();
  return;
}



/* Entry: 10736d004; end: 10736d32b;  */

void FUN_10736d004(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *extraout_x10;
  long *plVar8;
  long *plVar9;
  long *extraout_x11;
  long *plVar10;
  long *unaff_x19;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x25;
  
  func_0x00010736e188();
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar11) == 0) {
      unaff_x25 = (long *)(uVar11 & (ulong)param_3);
    }
    else {
      unaff_x25 = param_3;
      if (plVar14 <= param_3) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)param_3 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)param_3 - uVar7 * (long)plVar14);
      }
    }
    plVar13 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10736d0bc;
          plVar5 = (long *)plVar13[1];
          if (plVar5 != param_3) break;
          uVar7 = (ulong)(plVar13 + 2);
          func_0x00010735c498(uVar7,param_4);
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar14 & uVar11) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar11);
        }
        else if (plVar14 <= plVar5) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar5 / (ulong)plVar14;
          }
          plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar14);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_10736d0bc:
  plVar13 = unaff_x19 + 2;
  plVar4 = (long *)0x50;
  __Znwm();
  plVar5 = plVar4 + 2;
  *plVar4 = 0;
  plVar4[1] = (long)param_3;
  func_0x000107269bac(plVar5,param_4);
  func_0x00010736e1a0();
  func_0x00010736e030();
  if ((plVar14 != (long *)0x0) && (param_1 <= param_2 * (float)plVar14)) goto LAB_10736d2a4;
  bVar2 = (long *)0x2 < plVar14;
  bVar3 = plVar14 == (long *)0x3;
  func_0x00010736dffc((long)plVar14 << 1);
  plVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = plVar12;
  }
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 < plVar12) {
LAB_10736d150:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10736d31c);
      (*pcVar1)();
    }
    __Znwm((long)plVar12 << 3);
    FUN_10736d32c();
    unaff_x19[1] = (long)plVar12;
    lVar6 = *unaff_x19;
    for (plVar14 = (long *)0x0; plVar12 != plVar14; plVar14 = (long *)((long)plVar14 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar14 * 8) = 0;
    }
    plVar5 = (long *)*plVar13;
    plVar14 = plVar12;
    if (plVar5 != (long *)0x0) {
      plVar8 = (long *)plVar5[1];
      uVar7 = (long)plVar12 - 1;
      uVar11 = 0;
      if (plVar12 != (long *)0x0) {
        uVar11 = (ulong)plVar8 / (ulong)plVar12;
      }
      plVar9 = plVar8;
      if (plVar12 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar11 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar7) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar7);
      }
      *(long **)(lVar6 + (long)plVar9 * 8) = plVar13;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar10 = (long *)plVar5[1];
        if (((ulong)plVar12 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (plVar12 <= plVar10) {
          uVar11 = 0;
          if (plVar12 != (long *)0x0) {
            uVar11 = (ulong)plVar10 / (ulong)plVar12;
          }
          plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar12);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar6 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar5;
            func_0x00010736e12c();
            lVar6 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar5 = extraout_x10;
            plVar9 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar12 < plVar14) {
    func_0x00010736e0fc();
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010736e098();
    }
    if (plVar12 <= plVar5) {
      plVar12 = plVar5;
    }
    if (plVar12 < plVar14) {
      if (plVar12 != (long *)0x0) goto LAB_10736d150;
      FUN_10736d32c();
      unaff_x19[1] = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar14 - 1U & (ulong)param_3);
  }
  else {
    unaff_x25 = param_3;
    if (plVar14 <= param_3) {
      uVar11 = 0;
      if (plVar14 != (long *)0x0) {
        uVar11 = (ulong)param_3 / (ulong)plVar14;
      }
      unaff_x25 = (long *)((long)param_3 - uVar11 * (long)plVar14);
    }
  }
LAB_10736d2a4:
  lVar6 = *unaff_x19;
  plVar5 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar4 = *plVar13;
    *plVar13 = (long)plVar4;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar13;
    if (*plVar4 != 0) {
      plVar13 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar13) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar13 / (ulong)plVar14;
        }
        plVar13 = (long *)((long)plVar13 - uVar11 * (long)plVar14);
      }
      *(long **)(lVar6 + (long)plVar13 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
  }
  func_0x00010736e114();
  FUN_10736d344();
  return;
}



/* Entry: 10736d32c; end: 10736d343;  */

void FUN_10736d32c(long *param_1,long param_2)

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



/* Entry: 10736d344; end: 10736d387;  */

long * FUN_10736d344(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000104c319e0(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10736d388; end: 10736d433;  */

void FUN_10736d388(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1073596c8(param_1,((long)puVar1 - *param_1 >> 4) + 1);
    func_0x00010736dfe4();
    FUN_10735b838(auStack_58);
    uVar3 = *param_2;
    puStack_48[1] = param_2[1];
    *puStack_48 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_48 = puStack_48 + 2;
    func_0x00010736e0f0();
    FUN_10735b804();
    puVar2 = (undefined8 *)param_1[1];
    func_0x00010735b868(auStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10736d434; end: 10736d48f;  */

long FUN_10736d434(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736e044();
  if ((bool)in_CY) {
    FUN_10736d490();
  }
  else {
    func_0x00010736d468();
    param_1 = unaff_x20 + 0x80;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x80;
}



/* Entry: 10736d490; end: 10736d4eb;  */

void FUN_10736d490(void)

{
  undefined8 uStack_38;
  
  func_0x00010736df54();
  func_0x00010736e17c();
  func_0x00010736dfe4();
  func_0x00010736e0c8();
  FUN_10736d4ec(uStack_38);
  func_0x00010736e0f0();
  FUN_10736d650();
  func_0x00010736e150();
  return;
}



/* Entry: 10736d4ec; end: 10736d51b;  */

undefined1 * FUN_10736d4ec(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  FUN_10736d51c();
  return param_1;
}



/* Entry: 10736d51c; end: 10736d57b;  */

void FUN_10736d51c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10735a134();
  uVar1 = *(uint *)(param_2 + 0x78);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_1109a6338)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  return;
}



/* Entry: 10736d57c; end: 10736d597;  */

void FUN_10736d57c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10736d598; end: 10736d5df;  */

undefined8 * FUN_10736d598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10736d5e0(param_1 + 2,param_2 + 2);
  func_0x000104c318bc(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10736d5e0; end: 10736d60f;  */

void FUN_10736d5e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10736d610; end: 10736d64f;  */

long * FUN_10736d610(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x39 == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 6);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1ffffffffffffff;
    }
    return plVar1;
  }
  FUN_10736d674();
  func_0x00010736e078();
  FUN_10736d710();
  func_0x00010736dfa0();
  return param_1;
}



/* Entry: 10736d650; end: 10736d673;  */

void FUN_10736d650(void)

{
  func_0x00010736e078();
  FUN_10736d710();
  func_0x00010736dfa0();
  return;
}



/* Entry: 10736d674; end: 10736d687;  */

long * FUN_10736d674(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f40aeeb;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010736d6d0();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x80;
  return plVar2;
}



/* Entry: 10736d688; end: 10736d6f3;  */

long * FUN_10736d688(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010736d6d0();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x80;
  return param_1;
}



/* Entry: 10736d6f4; end: 10736d70f;  */

void FUN_10736d6f4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  uVar1 = param_2;
  func_0x00010736e1ac();
  for (; uVar1 != param_3; uVar1 = uVar1 + 0x80) {
    FUN_10736d4ec(param_4,uVar1);
    param_4 = lStack_48 + 0x80;
    lStack_48 = param_4;
  }
  func_0x00010736e1a0();
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    FUN_10735a134(param_2);
  }
  func_0x00010736d78c(auStack_70);
  return;
}



/* Entry: 10736d710; end: 10736d7d7;  */

void FUN_10736d710(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lVar1 = param_2;
  func_0x00010736e1ac();
  for (; lVar1 != param_3; lVar1 = lVar1 + 0x80) {
    FUN_10736d4ec(param_4,lVar1);
    param_4 = lStack_38 + 0x80;
    lStack_38 = param_4;
  }
  func_0x00010736e1a0();
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    FUN_10735a134(param_2);
  }
  func_0x00010736d78c(auStack_60);
  return;
}



/* Entry: 10736d7d8; end: 10736d803;  */

long * FUN_10736d7d8(long *param_1)

{
  FUN_10736d804();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10736d804; end: 10736d80b;  */

void FUN_10736d804(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x80;
    FUN_10735a134();
  }
  return;
}



/* Entry: 10736d80c; end: 10736d843;  */

void FUN_10736d80c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x80;
    FUN_10735a134();
  }
  return;
}



/* Entry: 10736d844; end: 10736d85f;  */

void FUN_10736d844(long param_1)

{
  FUN_10735befc();
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10736d860; end: 10736d893;  */

long FUN_10736d860(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736e044();
  if ((bool)in_CY) {
    FUN_10736d8cc();
  }
  else {
    FUN_10736d894();
    param_1 = unaff_x20 + 0x80;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x80;
}



/* Entry: 10736d894; end: 10736d8cb;  */

void FUN_10736d894(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined8 **)(param_1 + 8) = puVar4 + 0x10;
  return;
}



/* Entry: 10736d8cc; end: 10736d94b;  */

void FUN_10736d8cc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 *puStack_38;
  
  func_0x00010736df54();
  func_0x00010736e17c();
  func_0x00010736dfe4();
  func_0x00010736e0c8();
  lVar4 = unaff_x20[1];
  uVar5 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puStack_38 + 0xf) = 0;
  func_0x00010736e0f0();
  FUN_10736d650();
  func_0x00010736e150();
  return;
}



/* Entry: 10736d94c; end: 10736d98f;  */

long FUN_10736d94c(long param_1,long param_2,undefined8 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    FUN_10736d990(param_3,param_1);
  }
  return param_2;
}



/* Entry: 10736d990; end: 10736d9af;  */

long * FUN_10736d990(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  code *extraout_x8;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010736d9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    plVar1[3] = 0;
  }
  else if (lVar2 == param_2) {
    func_0x00010736e1c0();
    (*extraout_x8)();
  }
  else {
    plVar1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return plVar1;
}



/* Entry: 10736d9b0; end: 10736d9ff;  */

long FUN_10736d9b0(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010736e1c0();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10736da00; end: 10736da53;  */

long * FUN_10736da00(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000104c319e0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10736da54; end: 10736dc53;  */

undefined1  [16]
FUN_10736da54(float param_1,float param_2,long *param_3,uint *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x9;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x23;
  undefined1 auVar17 [16];
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar2 = *param_4;
  uVar16 = (ulong)uVar2;
  uVar15 = param_3[1];
  if (uVar15 != 0) {
    uVar8 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar8) == 0) {
      unaff_x23 = (ulong)(uVar14 - 1 & uVar2);
    }
    else {
      unaff_x23 = uVar16;
      if (uVar15 <= uVar16) {
        uVar3 = 0;
        if (uVar14 != 0) {
          uVar3 = uVar2 / uVar14;
        }
        unaff_x23 = (ulong)(uVar2 - uVar3 * uVar14);
      }
    }
    plVar12 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10736db04;
          uVar10 = plVar12[1];
          if (uVar10 != uVar16) break;
          if (*(uint *)(plVar12 + 2) == uVar2) {
            uVar7 = 0;
            goto LAB_10736dc2c;
          }
        }
        if ((uVar15 & uVar8) == 0) {
          uVar10 = uVar10 & uVar8;
        }
        else if (uVar15 <= uVar10) {
          uVar4 = 0;
          if (uVar15 != 0) {
            uVar4 = uVar10 / uVar15;
          }
          uVar10 = uVar10 - uVar4 * uVar15;
        }
      } while (uVar10 == unaff_x23);
    }
  }
LAB_10736db04:
  puVar13 = (undefined4 *)*param_6;
  plVar1 = param_3 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  uStack_48 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar16;
  *(undefined4 *)(plVar12 + 2) = *puVar13;
  *(undefined4 *)((long)plVar12 + 0x14) = 0;
  plStack_58 = plVar12;
  plStack_50 = plVar1;
  func_0x00010736e030();
  if ((uVar15 == 0) || (param_2 * (float)uVar15 < param_1)) {
    bVar5 = 2 < uVar15;
    bVar6 = uVar15 == 3;
    func_0x00010736dffc(uVar15 << 1);
    uVar7 = extraout_x8;
    if (!bVar5 || bVar6) {
      uVar7 = extraout_x9;
    }
    FUN_10736dc54(param_3,uVar7);
    uVar15 = param_3[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar15 - 1U & uVar2);
    }
    else {
      unaff_x23 = uVar16;
      if (uVar15 <= uVar16) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar16 / uVar15;
        }
        unaff_x23 = uVar16 - uVar8 * uVar15;
      }
    }
  }
  plVar12 = plStack_58;
  lVar9 = *param_3;
  plVar11 = *(long **)(lVar9 + unaff_x23 * 8);
  if (plVar11 == (long *)0x0) {
    *plStack_58 = *plVar1;
    *plVar1 = (long)plStack_58;
    *(long **)(lVar9 + unaff_x23 * 8) = plVar1;
    if (*plStack_58 != 0) {
      uVar16 = *(ulong *)(*plStack_58 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar16 = uVar16 & uVar15 - 1;
      }
      else if (uVar15 <= uVar16) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar16 / uVar15;
        }
        uVar16 = uVar16 - uVar8 * uVar15;
      }
      *(long **)(lVar9 + uVar16 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar11;
    *plVar11 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  param_3[3] = param_3[3] + 1;
  FUN_10736de14(&plStack_58);
  uVar7 = 1;
LAB_10736dc2c:
  auVar17._8_8_ = uVar7;
  auVar17._0_8_ = plVar12;
  return auVar17;
}



/* Entry: 10736dc54; end: 10736dcf3;  */

void FUN_10736dc54(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (param_2 <= plVar7) {
    if (param_2 < plVar7) {
      func_0x00010736e0fc();
      if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010736e098();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar7) goto LAB_10736dc9c;
    }
    return;
  }
LAB_10736dc9c:
  if (param_2 == (long *)0x0) {
    FUN_10736dde0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10736ddf8(plVar3);
    FUN_10736dde0(param_1,plVar3);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar7 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar5 = plVar7;
      if (param_2 <= plVar7) {
        plVar5 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar7 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar5 * 8) = param_1 + 2;
      while (plVar7 = plVar3, plVar3 = (long *)*plVar7, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar5) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar5 = plVar6;
          }
          else {
            *plVar7 = *plVar3;
            func_0x00010736e12c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar5 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10736dcf4; end: 10736dddf;  */

void FUN_10736dcf4(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_10736dde0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10736ddf8(plVar3);
    FUN_10736dde0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x00010736e12c();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10736dde0; end: 10736ddf7;  */

void FUN_10736dde0(long *param_1,long param_2)

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



/* Entry: 10736ddf8; end: 10736de13;  */

long FUN_10736ddf8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10736de38();
  return param_1;
}



/* Entry: 10736de14; end: 10736de37;  */

undefined8 FUN_10736de14(undefined8 param_1)

{
  FUN_10736de38(param_1,0);
  return param_1;
}



/* Entry: 10736de38; end: 10736deef;  */

void FUN_10736de38(long *param_1,long param_2)

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



/* Entry: 10736def0; end: 10736df43;  */

long FUN_10736def0(long param_1,long *param_2)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    func_0x00010736e1c0();
    (*extraout_x8)();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10736df44; end: 10736e1d3;  */

void FUN_10736df44(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10736e1d4; end: 10736e2af;  */

void FUN_10736e1d4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = param_1;
  func_0x00010737903c();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  *puVar4 = 0;
  *puVar3 = &PTR_SUB_1109a66b0;
  puVar3[4] = 0;
  puStack_50 = puVar4;
  puStack_48 = puVar3;
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10736e2b0();
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010774f888(&uStack_60);
  }
  FUN_1073235e8(puVar4,&uStack_60);
  func_0x0001072c9b9c(&uStack_60);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x0001073799b4(&PTR_FUN_1109a6700);
  FUN_10736e2c8();
  FUN_10736e2c8(&puStack_50);
  return;
}



/* Entry: 10736e2b0; end: 10736e2c7;  */

void FUN_10736e2b0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10736e2c8; end: 10736e2eb;  */

void FUN_10736e2c8(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10736e2ec; end: 10736e3cb;  */

void FUN_10736e2ec(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    puVar3 = param_2;
    func_0x00010737954c();
    plVar5 = puVar3 + 1;
    *plVar5 = 0;
    puVar3[2] = 0;
    puVar4 = puVar3 + 3;
    *puVar4 = &UNK_10e52b660;
    *puVar3 = &PTR_SUB_1109a6780;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = 0;
    puStack_50 = puVar4;
    puStack_48 = puVar3;
    FUN_10736e3cc(param_2);
    FUN_10736f790(puVar4,param_2);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073799b4(&PTR_FUN_1109a67d0);
    FUN_10736e3e4();
    FUN_10736e3e4(&puStack_50);
  }
  else {
    *param_1 = &PTR_FUN_1109a6850;
    param_1[3] = param_1;
  }
  return;
}



/* Entry: 10736e3cc; end: 10736e3e3;  */

void FUN_10736e3cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10736e3e4; end: 10736e407;  */

void FUN_10736e3e4(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10736e408; end: 10736e423;  */

void FUN_10736e408(long param_1)

{
  long *plVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x198) != '\x01') {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 400);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 10736e424; end: 10736e5ef;  */

void FUN_10736e424(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  undefined ***pppuStack_48;
  undefined8 uStack_38;
  
  func_0x000107378e90();
  uStack_38 = extraout_x8;
  if ((*(long *)(*(long *)(param_1 + 0x18) + 0x230) != 0) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 0x238) != 0)) {
    func_0x0001078696e8(auStack_78);
    ppuStack_60 = &PTR_FUN_1109a6e20;
    pppuStack_48 = &ppuStack_60;
    puStack_58 = auStack_78;
    func_0x000107292e94(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1f0),&ppuStack_60);
    func_0x000107283e00(&ppuStack_60);
    plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x230);
    if (plVar4 == (long *)0x0) goto LAB_10736e590;
    (**(code **)(*plVar4 + 0x30))(&uStack_a0,plVar4,auStack_78);
    FUN_107327d9c(&ppuStack_60,1);
    *(undefined8 *)(lStack_50 + 0x10) = 0;
    func_0x00010737994c();
    lVar2 = lStack_50;
    *(undefined8 *)(extraout_x8_00 + 0x20) = uStack_98;
    *(undefined8 *)(extraout_x8_00 + 0x18) = uStack_a0;
    *(undefined8 *)(extraout_x8_00 + 0x28) = uStack_90;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_50 = 0;
    ppuVar1 = (undefined **)(lVar2 + 0x18);
    uStack_90 = 0;
    lStack_80 = lVar2;
    ppuStack_88 = ppuVar1;
    func_0x000107327e18(&ppuStack_60);
    func_0x00010015b8c8(&uStack_a0);
    plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x238);
    if (lVar2 != 0) {
      do {
        func_0x000107378f58();
      } while (extraout_w10 != 0);
    }
    puStack_58 = (undefined1 *)lVar2;
    uStack_b0 = 0;
    uStack_a8 = 0;
    plVar5 = plVar4;
    ppuStack_60 = ppuVar1;
    __ZNSt3__112__get_sp_mutEPKv(plVar4);
    __ZNSt3__18__sp_mut4lockEv();
    puStack_58 = (undefined1 *)plVar4[1];
    ppuStack_60 = (undefined **)*plVar4;
    *plVar4 = (long)ppuVar1;
    plVar4[1] = lVar2;
    __ZNSt3__18__sp_mut6unlockEv(plVar5);
    FUN_107327e28(&ppuStack_60);
    FUN_107327e28(&uStack_b0);
    FUN_107327e28(&ppuStack_88);
    func_0x00010726b264(auStack_78);
  }
  func_0x000107378dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10736e590:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10736e598);
  (*pcVar3)();
}



/* Entry: 10736e5f0; end: 10736e6e3;  */

undefined *** FUN_10736e5f0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  int extraout_w10;
  undefined **ppuVar6;
  undefined1 uStack_111;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined8 auStack_68 [8];
  undefined8 uStack_28;
  
  func_0x000107378e90();
  pppuStack_b0 = appuStack_c8;
  appuStack_c8[0] = &PTR_DAT_1109a6ea0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uVar1 = 0x160;
  uStack_28 = extraout_x8;
  __Znwm();
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  FUN_10732bf60(auStack_68,appuStack_c8);
  pppuStack_70 = appuStack_88;
  appuStack_88[0] = &PTR_DAT_1109a6f20;
  ppuVar6 = &puStack_d8;
  puVar4 = auStack_68;
  pppuVar3 = appuStack_88;
  FUN_10732c798(uVar1);
  FUN_10732e454(appuStack_88);
  func_0x00010732c140(auStack_68);
  func_0x0001072aa2e8(&puStack_d8);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  pppuVar2 = appuStack_c8;
  func_0x00010732c140();
  func_0x000107378dfc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10732e454(appuStack_88);
    func_0x00010732c140(auStack_68);
    func_0x0001072aa2e8(&puStack_d8);
    func_0x000107379224();
    pppuVar2 = appuStack_c8;
    func_0x00010732c140();
    func_0x000107378f88();
    *pppuVar2 = &PTR_FUN_1109a6358;
    pppuVar2[1] = ppuVar6;
    lVar5 = puVar4[1];
    ppuVar6 = (undefined **)*puVar4;
    pppuVar2[3] = (undefined **)puVar4[1];
    pppuVar2[2] = ppuVar6;
    if (lVar5 != 0) {
      do {
        func_0x000107378f58();
      } while (extraout_w10 != 0);
    }
    pppuVar2[5] = (undefined **)0x32aaaba7;
    pppuVar2[7] = (undefined **)0x0;
    pppuVar2[6] = (undefined **)0x0;
    pppuVar2[9] = (undefined **)0x0;
    pppuVar2[8] = (undefined **)0x0;
    pppuVar2[0xb] = (undefined **)0x0;
    pppuVar2[10] = (undefined **)0x0;
    pppuVar2[0xd] = (undefined **)0x0;
    pppuVar2[0xc] = (undefined **)0x0;
    pppuVar2[0xf] = (undefined **)0x0;
    pppuVar2[0xe] = (undefined **)0x0;
    pppuVar2[0x10] = (undefined **)0x0;
    *(undefined4 *)(pppuVar2 + 0x11) = 0x3f800000;
    uStack_111 = 0;
    pppuVar3 = pppuVar3 + 0xc4;
    func_0x00010724e2c8(pppuVar3,&uStack_111);
    *(char *)(pppuVar2 + 4) = (char)pppuVar3;
    return pppuVar2;
  }
  return pppuVar2;
}



/* Entry: 10736e6e4; end: 10736e79f;  */

undefined8 * FUN_10736e6e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  *param_1 = &PTR_FUN_1109a6358;
  param_1[1] = param_2;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  param_1[5] = 0x32aaaba7;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  uStack_31 = 0;
  param_4 = param_4 + 0x620;
  func_0x00010724e2c8(param_4,&uStack_31);
  *(char *)(param_1 + 4) = (char)param_4;
  return param_1;
}



/* Entry: 10736e7a0; end: 10736f5cf;  */

void FUN_10736e7a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5,long *param_6)

{
  char cVar1;
  long **pplVar2;
  long **pplVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long **pplVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar17;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **extraout_x8_03;
  undefined **extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  ulong uVar21;
  ulong extraout_x9_01;
  undefined **extraout_x9_02;
  undefined **extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar22;
  long *extraout_x10;
  ulong extraout_x10_00;
  undefined **extraout_x11;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long *plVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined8 *puVar32;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  long *plStack_580;
  undefined8 *puStack_578;
  undefined1 auStack_568 [24];
  undefined8 uStack_550;
  undefined1 auStack_548 [24];
  undefined8 uStack_530;
  undefined2 uStack_528;
  undefined4 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined2 uStack_50c;
  undefined4 uStack_508;
  undefined1 uStack_504;
  undefined2 uStack_503;
  long *plStack_500;
  undefined8 *puStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined **ppuStack_4e8;
  undefined **ppuStack_410;
  long *plStack_408;
  undefined8 *puStack_400;
  undefined ***pppuStack_3f8;
  undefined1 auStack_3d8 [16];
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined2 uStack_3b0;
  undefined8 auStack_398 [4];
  undefined1 uStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined1 auStack_350 [32];
  long *plStack_330;
  long *plStack_328;
  undefined1 auStack_320 [56];
  long **pplStack_2e8;
  undefined1 auStack_2e0 [56];
  long **pplStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined ***pppuStack_288;
  long **pplStack_268;
  undefined1 auStack_260 [56];
  long **pplStack_228;
  long lStack_220;
  long lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_208;
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [56];
  undefined1 uStack_140;
  long **pplStack_138;
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined ***apppuStack_a8 [15];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001073799f0();
  puVar10 = param_1;
  lVar18 = param_4;
  func_0x000107378e90();
  uStack_550 = 0;
  uStack_530 = 0;
  uStack_520 = 0x2000;
  uStack_518 = 0x3fd8000000000000;
  uStack_510 = 0x800200;
  uStack_50c = 0;
  uStack_503 = 0;
  uStack_528 = *(undefined2 *)(lVar18 + 0x60);
  if (*(char *)(lVar18 + 0x94) == '\x01') {
    uStack_508 = *(undefined4 *)(param_4 + 0x90);
  }
  else {
    uStack_508 = 1;
  }
  uStack_504 = *(undefined1 *)(param_4 + 0x98);
  plVar25 = (long *)param_1[1];
  uStack_10 = extraout_x8_00;
  func_0x00010737954c();
  plVar17 = puVar10 + 1;
  *plVar17 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_1109a6fa0;
  func_0x000107375cd4(&plStack_500,param_4);
  plVar29 = puVar10 + 3;
  *plVar29 = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  pplVar11 = (long **)0x290;
  __Znwm();
  func_0x000107375cd4(&ppuStack_410,&plStack_500);
  func_0x000104c2fe00(pplVar11,param_2);
  FUN_107375e20(pplVar11 + 7,param_3);
  plVar23 = (long *)param_5[2];
  pplVar11[0x1a] = plVar23;
  plVar12 = (long *)*param_5;
  plVar22 = (long *)param_5[1];
  pplVar11[0x18] = plVar12;
  *param_5 = 0;
  param_5[1] = 0;
  pplVar11[0x19] = plVar22;
  plVar24 = (long *)param_5[3];
  pplVar11[0x1b] = plVar24;
  *(int *)(pplVar11 + 0x1c) = (int)param_5[4];
  if (plVar24 != (long *)0x0) {
    plVar23 = (long *)plVar23[1];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      plVar23 = (long *)((ulong)plVar23 & (long)plVar22 - 1U);
    }
    else if (plVar22 <= plVar23) {
      uVar26 = 0;
      if (plVar22 != (long *)0x0) {
        uVar26 = (ulong)plVar23 / (ulong)plVar22;
      }
      plVar23 = (long *)((long)plVar23 - uVar26 * (long)plVar22);
    }
    plVar12[(long)plVar23] = (long)(pplVar11 + 0x1a);
    param_5[2] = 0;
    param_5[3] = 0;
  }
  *(undefined2 *)(pplVar11 + 0x1d) = uStack_3b0;
  func_0x000104c318bc(pplVar11 + 0x1e,&ppuStack_410);
  FUN_10733220c(pplVar11 + 0x25,auStack_3d8);
  pplVar11[0x28] = plStack_3c0;
  pplVar11[0x27] = plStack_3c8;
  pplVar11[0x29] = plStack_3b8;
  *(undefined1 *)(pplVar11 + 0x2a) = 0;
  *(undefined1 *)(pplVar11 + 0x2e) = 0;
  *(undefined1 *)(pplVar11 + 0x2f) = 0;
  *(undefined1 *)(pplVar11 + 0x33) = 0;
  pplVar11[0x34] = (long *)&UNK_10e52b660;
  pplVar11[0x35] = (long *)0x0;
  pplVar11[0x36] = (long *)0x0;
  pplVar11[0x37] = (long *)0x0;
  plVar12 = (long *)param_6[3];
  if (plVar12 == (long *)0x0) {
LAB_10736e994:
    pplVar11[0x3b] = plVar12;
  }
  else {
    if (plVar12 != param_6) {
      func_0x000107379244();
      (*extraout_x8_01)();
      goto LAB_10736e994;
    }
    pplVar11[0x3b] = (long *)(pplVar11 + 0x38);
    func_0x000107379120();
    (*extraout_x8_02)();
  }
  *(undefined1 *)(pplVar11 + 0x3c) = uStack_378;
  pplVar11[0x3d] = plVar25;
  lVar18 = param_1[3];
  plVar12 = (long *)param_1[2];
  pplVar11[0x3f] = (long *)param_1[3];
  pplVar11[0x3e] = plVar12;
  if (lVar18 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  pplVar11[0x41] = plStack_368;
  pplVar11[0x40] = plStack_370;
  pplVar11[0x42] = plStack_360;
  plStack_360 = (long *)0x0;
  plStack_368 = (long *)0x0;
  plStack_370 = (long *)0x0;
  FUN_107332480(pplVar11 + 0x43,auStack_350);
  pplVar11[0x48] = plStack_328;
  pplVar11[0x47] = plStack_330;
  plStack_328 = (long *)0x0;
  plStack_330 = (long *)0x0;
  pplVar11[0x4a] = (long *)0x0;
  pplVar11[0x49] = (long *)0x0;
  pplVar11[0x4c] = (long *)0x0;
  pplVar11[0x4b] = (long *)0x0;
  pplVar11[0x4d] = (long *)0x0;
  *(undefined4 *)(pplVar11 + 0x4e) = 0x3f800000;
  func_0x00010726ed14(pplVar11 + 0x4f);
  puVar32 = auStack_398;
  pplVar11[0x51] = (long *)pplVar11;
  while (puVar32 = (undefined8 *)*puVar32, puVar32 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar32[10];
    for (plVar12 = (long *)puVar32[9]; plVar12 != plVar22; plVar12 = plVar12 + 3) {
      func_0x000104c2fe00(auStack_2e0,puVar32 + 2);
      pplStack_2a8 = pplVar11;
      func_0x000104c2fe00(auStack_320,puVar32 + 2);
      pplStack_2e8 = pplVar11;
      func_0x000104c318bc(auStack_2a0,auStack_2e0);
      pplStack_268 = pplStack_2a8;
      func_0x000104c318bc(auStack_260,auStack_320);
      pplVar3 = pplStack_268;
      pplVar2 = pplStack_2e8;
      pplStack_228 = pplStack_2e8;
      if ((int)plVar12[2] == 0) {
        FUN_107355174(*plVar12);
        plVar23 = (long *)*plVar12;
        pplStack_138 = pplVar3;
        func_0x000104c2fe00(auStack_130,auStack_2a0);
        func_0x000104c2fe00(auStack_f8,*plVar12 + 0xe8);
        func_0x0001073796c4();
        FUN_107376148(apppuStack_a8,&pplStack_138);
        uStack_18 = 0;
        func_0x000107379430();
        func_0x000107379054(&PTR_FUN_1109a68d0);
        func_0x0001073798ac();
        func_0x0001073795cc();
        func_0x000104c2fe00(auStack_1e8,auStack_2a0);
        puVar13 = auStack_1b0;
        FUN_107377064(puVar13,&lStack_220);
        uVar9 = SUB84(puVar13,0);
        func_0x0001073795bc(*(undefined8 *)(*plVar23 + 0xa0));
        FUN_10731d77c(auStack_1b0);
        FUN_10731d79c(&lStack_220);
        func_0x00010731e7f8(auStack_30);
        func_0x0001073770ac(&uStack_c0);
        func_0x0001073770cc(&pplStack_138);
        FUN_107375f1c(pplVar3 + 0x34,auStack_2a0);
        lStack_218 = plVar12[1];
        lStack_220 = *plVar12;
        *plVar12 = 0;
        plVar12[1] = 0;
        uStack_210 = 0;
        uStack_208 = uVar9;
        FUN_107376030();
      }
      else {
        plVar23 = (long *)*plVar12;
        pplStack_138 = pplStack_2e8;
        func_0x000104c2fe00(auStack_130,auStack_260);
        func_0x000104c2fe00(auStack_f8,*plVar12 + 0xe8);
        func_0x0001073796c4();
        FUN_1073772f0(apppuStack_a8,&pplStack_138);
        uStack_18 = 0;
        func_0x000107379430();
        func_0x000107379054(&PTR_FUN_1109a6c00);
        func_0x0001073798ac();
        func_0x0001073795cc();
        func_0x000104c2fe00(auStack_1e8,auStack_260);
        func_0x000104c318bc(auStack_1b0,&lStack_220);
        puVar13 = auStack_178;
        func_0x000104c318bc(puVar13,auStack_1e8);
        uVar9 = SUB84(puVar13,0);
        uStack_140 = 1;
        func_0x0001073795bc(*(undefined8 *)(*plVar23 + 0x30));
        FUN_107377664(auStack_1b0);
        FUN_107377684(&lStack_220);
        func_0x0001073776a8(auStack_30);
        func_0x0001073776dc(&uStack_c0);
        func_0x0001073776fc(&pplStack_138);
        FUN_107375f1c(pplVar2 + 0x34,auStack_260);
        lStack_218 = plVar12[1];
        lStack_220 = *plVar12;
        *plVar12 = 0;
        plVar12[1] = 0;
        uStack_210 = 1;
        uStack_208 = uVar9;
        FUN_107376030();
      }
      func_0x0001072b978c(&lStack_220);
      func_0x000107377720(auStack_2a0);
      func_0x000104c2f714(auStack_320);
      func_0x000104c2f714(auStack_2e0);
    }
  }
  puVar10[6] = pplVar11;
  func_0x0001072c91a0(&ppuStack_410);
  func_0x0001072c91a0(&plStack_500);
  do {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = *plVar17 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_b8 = 0;
  uStack_c0 = 0;
  ppuStack_410 = &PTR_SUB_1109a6ff0;
  plStack_500 = (long *)0x0;
  puStack_4f8 = (undefined8 *)0x0;
  pppuStack_3f8 = &ppuStack_410;
  plStack_580 = plVar29;
  puStack_578 = puVar10;
  plStack_408 = plVar29;
  puStack_400 = puVar10;
  FUN_107377f3c(&ppuStack_410,auStack_548);
  func_0x0001073752b4(&ppuStack_410);
  FUN_107377e10(&plStack_500);
  FUN_107377e10(&uStack_c0);
  puStack_4f8 = puStack_578;
  plStack_500 = plStack_580;
  if (puStack_578 != (undefined8 *)0x0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10_00 != 0);
  }
  func_0x000104c2fe00(auStack_4f0,param_2);
  pppuVar14 = &ppuStack_410;
  FUN_107378050(pppuVar14,&plStack_500);
  func_0x0001073797fc();
  *pppuVar14 = &PTR_SUB_1109a7070;
  FUN_107378050(pppuVar14 + 1,&ppuStack_410);
  apppuStack_a8[0] = pppuVar14;
  FUN_107377f3c(&uStack_c0,auStack_568);
  func_0x0001073752b4(&uStack_c0);
  FUN_10736f5d0(&ppuStack_410);
  pplVar11 = &plStack_500;
  FUN_10736f5d0();
  uStack_503 = CONCAT11(uStack_503._1_1_,*(undefined1 *)(param_1 + 4));
  func_0x0001073797ec();
  func_0x0001077b5ac0();
  pplStack_138 = pplVar11;
  FUN_107326958(&ppuStack_410,pplVar11 + 0xc);
  plVar12 = plStack_580;
  func_0x0001073752e8(plStack_580,&ppuStack_410);
  plVar12[2] = (long)puStack_400;
  pppuVar14 = &ppuStack_410;
  func_0x00010725b1d4();
  plVar12 = plStack_580;
  ppuVar28 = (undefined **)*plStack_580;
  ppuVar16 = (undefined **)plStack_580[1];
  ppuStack_598 = ppuVar28;
  ppuStack_590 = ppuVar16;
  if (ppuVar16 != (undefined **)0x0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10_01 != 0);
  }
  ppuVar30 = (undefined **)plVar12[2];
  ppuStack_588 = ppuVar30;
  func_0x000107379250();
  *pppuVar14 = &PTR_SUB_1109a7190;
  pppuVar14[1] = ppuVar28;
  ppuStack_598 = (undefined **)0x0;
  ppuStack_590 = (undefined **)0x0;
  pppuVar14[2] = ppuVar16;
  pppuVar14[3] = ppuVar30;
  pppuStack_288 = pppuVar14;
  FUN_10737781c(&uStack_c0,auStack_2a0);
  func_0x00010737953c();
  ppuVar28 = ppuVar28 + 3;
  FUN_10737781c(ppuVar28,&uStack_c0);
  func_0x000107379534();
  func_0x000107379328(&PTR_FUN_1109a6d10);
  FUN_107375220();
  lVar18 = plVar12[3];
  ppuStack_4e8 = ppuVar28;
  if (*(char *)(lVar18 + 0x170) == '\x01') {
    lVar15 = *(long *)(lVar18 + 0x168);
    *(undefined8 *)(lVar18 + 0x168) = 0;
    if (lVar15 == lVar18 + 0x150) {
      uVar19 = 0x20;
LAB_10736eec8:
      func_0x000107378fa8(uVar19);
    }
    else if (lVar15 != 0) {
      uVar19 = 0x28;
      goto LAB_10736eec8;
    }
    *(undefined ***)(lVar18 + 0x168) = ppuVar28;
    ppuStack_4e8 = (undefined **)0x0;
  }
  else {
    FUN_107375220(lVar18 + 0x150,&plStack_500);
    *(undefined1 *)(lVar18 + 0x170) = 1;
  }
  func_0x000107375ca0(&plStack_500);
  func_0x000107375274(&ppuStack_410);
  func_0x000107375ca0(&uStack_c0);
  func_0x000107375ca0(auStack_2a0);
  pppuVar14 = &ppuStack_598;
  func_0x00010725b1d4();
  plVar12 = plStack_580;
  ppuVar28 = (undefined **)*plStack_580;
  ppuVar16 = (undefined **)plStack_580[1];
  ppuStack_5b0 = ppuVar28;
  ppuStack_5a8 = ppuVar16;
  if (ppuVar16 != (undefined **)0x0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10_02 != 0);
  }
  ppuVar30 = (undefined **)plVar12[2];
  pppuStack_288 = (undefined ***)0x0;
  ppuStack_5a0 = ppuVar30;
  func_0x000107379250();
  *pppuVar14 = &PTR_SUB_1109a7210;
  pppuVar14[1] = ppuVar28;
  ppuStack_5b0 = (undefined **)0x0;
  ppuStack_5a8 = (undefined **)0x0;
  pppuVar14[2] = ppuVar16;
  pppuVar14[3] = ppuVar30;
  pppuStack_288 = pppuVar14;
  func_0x00010724cbe8(&uStack_c0,auStack_2a0);
  func_0x00010737953c();
  ppuVar16 = ppuVar28 + 3;
  func_0x00010724cbe8(ppuVar16,&uStack_c0);
  ppuStack_4e8 = (undefined **)0x0;
  func_0x000107379534();
  func_0x000107379328(&PTR_FUN_1109a6da0);
  func_0x000105302f48();
  lVar18 = plVar12[3];
  uVar6 = (int)(*(byte *)(lVar18 + 0x198) - 1) < 0;
  uVar7 = *(byte *)(lVar18 + 0x198) == 1;
  ppuStack_4e8 = ppuVar16;
  if ((bool)uVar7) {
    func_0x000100639330(lVar18 + 0x178,&plStack_500);
  }
  else {
    func_0x000107313208(lVar18 + 0x178,&plStack_500);
  }
  func_0x0001006393ec(&plStack_500);
  func_0x000107375294(&ppuStack_410);
  func_0x0001006393ec(&uStack_c0);
  func_0x0001006393ec(auStack_2a0);
  func_0x00010725b1d4(&ppuStack_5b0);
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  ppuVar16 = (undefined **)(param_1 + 0x10);
  func_0x00010726364c(ppuVar16,param_2);
  ppuVar31 = (undefined **)param_1[0xe];
  ppuVar30 = ppuVar16;
  if (ppuVar31 != (undefined **)0x0) {
    uVar26 = (long)ppuVar31 - 1;
    if (((ulong)ppuVar31 & uVar26) == 0) {
      ppuVar28 = (undefined **)(uVar26 & (ulong)ppuVar16);
      uVar7 = true;
      uVar6 = false;
    }
    else {
      uVar6 = (long)ppuVar16 - (long)ppuVar31 < 0;
      uVar7 = ppuVar16 == ppuVar31;
      ppuVar28 = ppuVar16;
      if (ppuVar31 <= ppuVar16) {
        uVar21 = 0;
        if (ppuVar31 != (undefined **)0x0) {
          uVar21 = (ulong)ppuVar16 / (ulong)ppuVar31;
        }
        ppuVar28 = (undefined **)((long)ppuVar16 - uVar21 * (long)ppuVar31);
      }
    }
    ppuVar27 = *(undefined ***)(param_1[0xd] + (long)ppuVar28 * 8);
    if (ppuVar27 != (undefined **)0x0) {
      do {
        while( true ) {
          ppuVar27 = (undefined **)*ppuVar27;
          if (ppuVar27 == (undefined **)0x0) goto LAB_10736f078;
          ppuVar20 = (undefined **)ppuVar27[1];
          uVar6 = (long)ppuVar20 - (long)ppuVar16 < 0;
          uVar7 = ppuVar20 == ppuVar16;
          if (!(bool)uVar7) break;
          ppuVar30 = ppuVar27 + 2;
          func_0x000104c32db4(ppuVar30,param_2);
          if (((ulong)ppuVar30 & 1) != 0) goto LAB_10736f2c8;
        }
        if (((ulong)ppuVar31 & uVar26) == 0) {
          ppuVar20 = (undefined **)((ulong)ppuVar20 & uVar26);
        }
        else if (ppuVar31 <= ppuVar20) {
          func_0x00010737992c();
          ppuVar20 = extraout_x8_03;
        }
        uVar6 = (long)ppuVar20 - (long)ppuVar28 < 0;
        uVar7 = ppuVar20 == ppuVar28;
      } while ((bool)uVar7);
    }
  }
LAB_10736f078:
  func_0x0001073790fc();
  plVar12 = param_1 + 0xf;
  puStack_400 = (undefined8 *)0x1;
  *ppuVar30 = (undefined *)0x0;
  ppuVar30[1] = (undefined *)ppuVar16;
  ppuStack_410 = ppuVar30;
  plStack_408 = plVar12;
  func_0x000104c2fe00(ppuVar30 + 2,param_2);
  ppuVar30[9] = (undefined *)0x0;
  ppuVar30[10] = (undefined *)0x0;
  func_0x00010737912c(param_1[0x10]);
  if ((ppuVar31 == (undefined **)0x0) || (func_0x000107379044(), (bool)uVar6)) {
    func_0x000107379640();
    bVar5 = (undefined **)0x2 < ppuVar31;
    bVar8 = ppuVar31 == (undefined **)0x3;
    func_0x000107378e6c();
    ppuVar28 = extraout_x8_04;
    if (!bVar5 || bVar8) {
      ppuVar28 = extraout_x9;
    }
    if ((long)ppuVar28 - 1U == 0) {
      ppuVar28 = (undefined **)0x2;
    }
    else if (((ulong)ppuVar28 & (long)ppuVar28 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppuVar31 = (undefined **)param_1[0xe];
    uVar7 = ppuVar28 == ppuVar31;
    if (ppuVar31 < ppuVar28) {
LAB_10736f0fc:
      if ((ulong)ppuVar28 >> 0x3d != 0) goto LAB_10736f33c;
      lVar18 = (long)ppuVar28 << 3;
      __Znwm(lVar18);
      FUN_107378b58(param_1 + 0xd,lVar18);
      ppuVar30 = (undefined **)0x0;
      param_1[0xe] = ppuVar28;
      lVar18 = param_1[0xd];
      while (uVar7 = ppuVar28 == ppuVar30, !(bool)uVar7) {
        func_0x000107379634();
        lVar18 = extraout_x8_05;
        ppuVar30 = extraout_x9_00;
      }
      plVar22 = (long *)*plVar12;
      ppuVar31 = ppuVar28;
      if (plVar22 != (long *)0x0) {
        ppuVar30 = (undefined **)plVar22[1];
        uVar21 = (long)ppuVar28 - 1;
        uVar26 = 0;
        if (ppuVar28 != (undefined **)0x0) {
          uVar26 = (ulong)ppuVar30 / (ulong)ppuVar28;
        }
        ppuVar27 = ppuVar30;
        if (ppuVar28 <= ppuVar30) {
          ppuVar27 = (undefined **)((long)ppuVar30 - uVar26 * (long)ppuVar28);
        }
        uVar7 = ((ulong)ppuVar28 & uVar21) == 0;
        if ((bool)uVar7) {
          ppuVar27 = (undefined **)((ulong)ppuVar30 & uVar21);
        }
        *(long **)(lVar18 + (long)ppuVar27 * 8) = plVar12;
        while (plVar17 = plVar22, plVar22 = (long *)*plVar17, plVar22 != (long *)0x0) {
          ppuVar30 = (undefined **)plVar22[1];
          if (((ulong)ppuVar28 & uVar21) == 0) {
            ppuVar30 = (undefined **)((ulong)ppuVar30 & uVar21);
          }
          else if (ppuVar28 <= ppuVar30) {
            uVar26 = 0;
            if (ppuVar28 != (undefined **)0x0) {
              uVar26 = (ulong)ppuVar30 / (ulong)ppuVar28;
            }
            ppuVar30 = (undefined **)((long)ppuVar30 - uVar26 * (long)ppuVar28);
          }
          uVar7 = ppuVar30 == ppuVar27;
          if (!(bool)uVar7) {
            if (*(long *)(lVar18 + (long)ppuVar30 * 8) == 0) {
              *(long **)(lVar18 + (long)ppuVar30 * 8) = plVar17;
              ppuVar27 = ppuVar30;
            }
            else {
              *plVar17 = *plVar22;
              func_0x000107378ebc();
              lVar18 = extraout_x8_06;
              uVar21 = extraout_x9_01;
              plVar22 = extraout_x10;
              ppuVar27 = extraout_x11;
            }
          }
        }
      }
    }
    else if (ppuVar28 < ppuVar31) {
      ppuVar30 = (undefined **)(long)((float)(ulong)param_1[0x10] / *(float *)(param_1 + 0x11));
      if ((ppuVar31 < (undefined **)0x3) || (((ulong)ppuVar31 & (long)ppuVar31 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000107378e4c();
      }
      if (ppuVar28 <= ppuVar30) {
        ppuVar28 = ppuVar30;
      }
      uVar7 = ppuVar28 == ppuVar31;
      if (ppuVar28 < ppuVar31) {
        if (ppuVar28 != (undefined **)0x0) goto LAB_10736f0fc;
        FUN_107378b58(param_1 + 0xd,0);
        param_1[0xe] = 0;
        ppuVar31 = (undefined **)0x0;
      }
      else {
        ppuVar31 = (undefined **)param_1[0xe];
      }
    }
    func_0x0001073794b0();
    if ((bool)uVar7) {
      uVar7 = 1;
      ppuVar28 = (undefined **)(extraout_x8_07 & (ulong)ppuVar16);
    }
    else {
      uVar7 = ppuVar16 == ppuVar31;
      ppuVar28 = ppuVar16;
      if (ppuVar31 <= ppuVar16) {
        uVar26 = 0;
        if (ppuVar31 != (undefined **)0x0) {
          uVar26 = (ulong)ppuVar16 / (ulong)ppuVar31;
        }
        ppuVar28 = (undefined **)((long)ppuVar16 - uVar26 * (long)ppuVar31);
      }
    }
  }
  ppuVar27 = ppuStack_410;
  lVar18 = param_1[0xd];
  plVar22 = *(long **)(lVar18 + (long)ppuVar28 * 8);
  if (plVar22 == (long *)0x0) {
    *ppuStack_410 = (undefined *)*plVar12;
    *plVar12 = (long)ppuStack_410;
    *(long **)(lVar18 + (long)ppuVar28 * 8) = plVar12;
    if (*ppuStack_410 != (undefined *)0x0) {
      func_0x0001073791a0();
      lVar18 = extraout_x8_08;
      if ((bool)uVar7) {
        ppuVar28 = (undefined **)((ulong)extraout_x9_02 & extraout_x10_00);
        uVar7 = 1;
      }
      else {
        uVar7 = extraout_x9_02 == ppuVar31;
        ppuVar28 = extraout_x9_02;
        if (ppuVar31 <= extraout_x9_02) {
          func_0x000107379900();
          lVar18 = extraout_x8_09;
          ppuVar28 = extraout_x9_03;
        }
      }
      *(undefined ***)(lVar18 + (long)ppuVar28 * 8) = ppuVar27;
    }
  }
  else {
    *ppuStack_410 = (undefined *)*plVar22;
    *plVar22 = (long)ppuStack_410;
  }
  ppuStack_410 = (undefined **)0x0;
  param_1[0x10] = param_1[0x10] + 1;
  FUN_107378b70(&ppuStack_410);
LAB_10736f2c8:
  plVar12 = plStack_580;
  puVar10 = puStack_578;
  if (puStack_578 != (undefined8 *)0x0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10_03 != 0);
  }
  plStack_408 = (long *)ppuVar27[10];
  ppuStack_410 = (undefined **)ppuVar27[9];
  ppuVar27[10] = (undefined *)puVar10;
  ppuVar27[9] = (undefined *)plVar12;
  func_0x000107375418(&ppuStack_410);
  __ZNSt3__15mutex6unlockEv(param_1 + 5);
  pplStack_138 = (long **)0x0;
  *extraout_x8 = pplVar11;
  FUN_10737885c(&pplStack_138);
  FUN_107377e10(&plStack_580);
  func_0x000107375334(auStack_568);
  func_0x000107378dfc(uStack_10);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10736f33c:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10736f344);
  (*pcVar4)();
}



/* Entry: 10736f5d0; end: 10736f5f7;  */

undefined8 FUN_10736f5d0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x10);
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10736f5f8; end: 10736f687;  */

int FUN_10736f5f8(long param_1)

{
  int iVar1;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000107379010();
  lStack_30 = 0;
  uStack_28 = 0;
  param_1 = param_1 + 0x28;
  __ZNSt3__15mutex4lockEv();
  func_0x000107379738();
  iVar1 = 0;
  if (param_1 != 0) {
    func_0x000107379708();
    func_0x000107379874();
    FUN_107377e10(auStack_40);
    if (lStack_30 == 0) {
      func_0x000107379744();
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  func_0x00010737946c();
  if (iVar1 != 0) {
    FUN_10736e408(lStack_30);
  }
  func_0x00010737959c();
  return iVar1;
}



/* Entry: 10736f688; end: 10736f6e7;  */

void FUN_10736f688(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10736f6e8; end: 10736f777;  */

int FUN_10736f6e8(long param_1)

{
  int iVar1;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000107379010();
  lStack_30 = 0;
  uStack_28 = 0;
  param_1 = param_1 + 0x28;
  __ZNSt3__15mutex4lockEv();
  func_0x000107379738();
  iVar1 = 0;
  if (param_1 != 0) {
    func_0x000107379708();
    func_0x000107379874();
    FUN_107377e10(auStack_40);
    if (lStack_30 == 0) {
      func_0x000107379744();
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  func_0x00010737946c();
  if (iVar1 != 0) {
    FUN_10736e424(lStack_30);
  }
  func_0x00010737959c();
  return iVar1;
}



/* Entry: 10736f778; end: 10736f77b;  */

undefined8 * FUN_10736f778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6358;
  func_0x0001073753a0(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  func_0x00010725b6e0(param_1 + 2);
  return param_1;
}



/* Entry: 10736f77c; end: 10736f78f;  */

void FUN_10736f77c(void)

{
  func_0x00010737535c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10736f790; end: 10736f7a7;  */

void FUN_10736f790(void)

{
  FUN_10736f7a8();
  return;
}



/* Entry: 10736f7a8; end: 10736f7e7;  */

undefined8 * FUN_10736f7a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10736f7e8(&uStack_40);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x0001072c9500(&uStack_40);
  return param_1;
}



/* Entry: 10736f7e8; end: 10736f7eb;  */

void FUN_10736f7e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10736f7ec; end: 10736f83b;  */

void FUN_10736f7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x0001073793b4();
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10736f83c; end: 10736f897;  */

void FUN_10736f83c(void)

{
  func_0x00010737908c();
  return;
}



/* Entry: 10736f898; end: 10736f89b;  */

undefined8 * FUN_10736f898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6390;
  func_0x000107374d04(param_1 + 1);
  return param_1;
}



/* Entry: 10736f89c; end: 10736f8af;  */

void FUN_10736f89c(void)

{
  FUN_10736fc84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10736f8b0; end: 10736f8e3;  */

undefined8 FUN_10736f8b0(undefined8 param_1)

{
  func_0x00010737945c();
  FUN_10736fcb0();
  return param_1;
}



/* Entry: 10736f8e4; end: 10736f907;  */

void FUN_10736f8e4(long param_1,undefined8 param_2)

{
  func_0x000107379010(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a6390);
  func_0x000107379670();
  FUN_10736f83c();
  return;
}



/* Entry: 10736f908; end: 10736fc4f;  */

void FUN_10736f908(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  long lVar5;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined **ppuStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined ***pppuStack_78;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001073793c4();
  func_0x000107378e90();
  uStack_38 = extraout_x8;
  func_0x000107378fc0();
  func_0x00010737934c();
  if (param_1 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    in_ZR = *(char *)(unaff_x21 + 7) == '\x01';
    if ((bool)in_ZR) {
      if (*(int *)(unaff_x21 + 6) == 0) {
        in_ZR = *(int *)*unaff_x21 == 3;
        func_0x0001073798b8(*(undefined8 *)(lVar5 + 0x1e8));
        FUN_10737191c();
        uVar6 = *unaff_x21;
        ppuVar2 = (undefined **)(lVar5 + 0x138);
        FUN_107371acc();
        uStack_88 = (undefined4)param_2;
        uStack_82 = (undefined1)((ulong)param_2 >> 0x30);
        uStack_84 = (undefined2)((ulong)param_2 >> 0x20);
        plVar3 = *(long **)(lVar5 + 0x1d8);
        ppuStack_90 = ppuVar2;
        if (plVar3 == (long *)0x0) goto LAB_10736fb7c;
        (**(code **)(*plVar3 + 0x30))(&lStack_60,plVar3,uVar6,unaff_x19 + 0x30,&ppuStack_90);
        func_0x0001072c8ed8(auStack_c0,&lStack_60);
        FUN_107373bcc(&ppuStack_90,auStack_c0,lVar5 + 0x200);
        func_0x00010737947c(&lStack_b0);
        func_0x00010737952c();
        func_0x0001072c8f3c(auStack_c0);
        lVar4 = lStack_b0;
        FUN_10737bd4c();
        if (((int)lVar4 != 0) && (in_ZR = *(char *)(lVar5 + 0x1e0) == '\x01', (bool)in_ZR)) {
          pppuStack_78 = &ppuStack_90;
          ppuStack_90 = &PTR_FUN_1109a6400;
          func_0x00010737931c(*(undefined8 *)(unaff_x19 + 0x40));
          (*extraout_x8_00)();
          func_0x0001006393ec(&ppuStack_90);
        }
        func_0x000107378f40();
        if (lStack_b0 != 0) {
          func_0x000107378f10();
        }
        func_0x0001072c8f3c(&lStack_60);
      }
      else {
        FUN_107371e6c(&ppuStack_90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&lStack_b0,&uStack_88);
        uStack_98 = ppuStack_90._0_1_;
        uStack_58 = uStack_a8;
        lStack_60 = lStack_b0;
        uStack_50 = uStack_a0;
        lStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_48 = ppuStack_90._0_1_;
        uStack_40 = 1;
        FUN_107371ca0(*(undefined8 *)(unaff_x19 + 0x60),&lStack_60,0);
        FUN_107371e08(&lStack_60);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b0);
        func_0x0001073070f0(&lStack_60,(ulong)ppuStack_90 & 0xff);
        func_0x0001073798b8();
        func_0x000107379880();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_60);
        func_0x0001073795dc();
      }
    }
    else {
      func_0x0001072c8f9c(auStack_d0);
      func_0x00010737988c(&ppuStack_90);
      func_0x00010737947c(&lStack_60);
      func_0x00010737952c();
      func_0x00010737986c();
      func_0x000107378f40();
      if (lStack_60 != 0) {
        func_0x000107378f10();
      }
    }
  }
  func_0x000107378fe8();
  func_0x000107378dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10736fb7c:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10736fb84);
  (*pcVar1)();
}



/* Entry: 10736fc50; end: 10736fc77;  */

void FUN_10736fc50(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6580);
  func_0x000107378e80();
  return;
}



/* Entry: 10736fc78; end: 10736fc83;  */

undefined ** FUN_10736fc78(void)

{
  return &PTR_DAT_1109a6580;
}



/* Entry: 10736fc84; end: 10736fcaf;  */

undefined8 * FUN_10736fc84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6390;
  func_0x000107374d04(param_1 + 1);
  return param_1;
}



/* Entry: 10736fcb0; end: 10736fceb;  */

void FUN_10736fcb0(void)

{
  func_0x000107379010();
  func_0x000107378ea0(&PTR_FUN_1109a6390);
  func_0x000107379670();
  FUN_10736f83c();
  return;
}



/* Entry: 10736fcec; end: 10736fd13;  */

void FUN_10736fcec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10736fd14; end: 10736fdb7;  */

void FUN_10736fd14(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long alStack_50 [4];
  long alStack_30 [2];
  
  plVar1 = alStack_50;
  func_0x00010726fc00(alStack_30,param_2);
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x0001073798ec();
    if (!(bool)in_ZR) {
      func_0x000107379258();
      plVar1 = alStack_30;
      goto LAB_10736fd6c;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(alStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
LAB_10736fd6c:
  func_0x0001072508cc(plVar1);
  return;
}



/* Entry: 10736fdb8; end: 1073712e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10736fdb8(byte param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  byte ******ppppppbVar10;
  byte *****pppppbVar11;
  byte *****pppppbVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  undefined8 extraout_x8;
  byte *******pppppppbVar21;
  byte *******extraout_x8_00;
  ulong extraout_x8_01;
  byte *******pppppppbVar22;
  byte *******extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  byte *******pppppppbVar23;
  long extraout_x8_06;
  byte *******extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  ulong uVar24;
  ulong uVar25;
  byte *******extraout_x9;
  byte *******extraout_x9_00;
  byte *******extraout_x9_01;
  byte *******extraout_x9_02;
  byte *******extraout_x9_03;
  byte *******extraout_x9_04;
  byte *******pppppppbVar26;
  byte *******extraout_x9_05;
  byte *******pppppppbVar27;
  int extraout_w10;
  int extraout_w10_00;
  byte *******pppppppbVar28;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  undefined8 *unaff_x19;
  byte *******unaff_x20;
  byte ******ppppppbVar29;
  byte *******pppppppbVar30;
  byte *******pppppppbVar31;
  byte *******pppppppbVar32;
  long *plVar33;
  byte ******ppppppbVar34;
  byte *******unaff_x22;
  byte *******pppppppbVar35;
  byte *******unaff_x23;
  byte *pbVar36;
  long lVar37;
  byte *******unaff_x24;
  ulong uVar38;
  byte *******unaff_x25;
  byte *******unaff_x26;
  byte *******pppppppbVar39;
  long *plVar40;
  byte *****pppppbVar41;
  byte *******unaff_x27;
  byte *******unaff_x28;
  byte bVar42;
  uint6 uVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  byte bVar49;
  undefined8 in_stack_00000050;
  undefined4 auStack_820 [2];
  undefined4 uStack_818;
  byte ****ppppbStack_7b0;
  undefined4 uStack_7a8;
  undefined1 auStack_7a0 [112];
  byte *******pppppppbStack_730;
  byte *******pppppppbStack_728;
  byte *******pppppppbStack_720;
  byte *******pppppppbStack_718;
  byte *******pppppppbStack_710;
  byte *******pppppppbStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  byte ******ppppppbStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 **ppuStack_6e0;
  code *pcStack_6d8;
  undefined8 *puStack_6d0;
  byte *******pppppppbStack_6c8;
  undefined8 *puStack_6c0;
  byte *******pppppppbStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  long lStack_688;
  long *aplStack_678 [2];
  byte *******pppppppbStack_668;
  byte *******pppppppbStack_660;
  undefined8 uStack_658;
  long alStack_650 [2];
  byte *******pppppppbStack_640;
  long lStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  byte *****pppppbStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 uStack_608;
  ulong uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_590;
  undefined1 auStack_580 [8];
  undefined1 auStack_578 [24];
  undefined8 *puStack_560;
  byte ******ppppppbStack_558;
  undefined4 uStack_550;
  undefined1 auStack_548 [344];
  byte ******ppppppbStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined1 auStack_3a0 [320];
  undefined8 uStack_260;
  undefined8 *puStack_1e0;
  code *pcStack_1d8;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  byte *******pppppppbStack_168;
  undefined8 uStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  byte ******ppppppbStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  undefined8 auStack_118 [2];
  byte bStack_101;
  byte *******pppppppbStack_100;
  byte *******pppppppbStack_f8;
  byte ******ppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  undefined8 uStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte ******ppppppbStack_88;
  undefined4 uStack_80;
  byte ******ppppppbStack_68;
  byte ******ppppppbStack_60;
  byte *******pppppppbStack_28;
  byte *******pppppppbStack_20;
  byte *******pppppppbStack_18;
  undefined8 uStack_10;
  
  bStack_101 = param_1;
  func_0x0001073799f0();
  func_0x000107379010();
  func_0x000107378e90();
  uStack_10 = extraout_x8;
  FUN_107371e9c();
  FUN_1073317b8(auStack_118,auStack_118);
  FUN_1073724e4(&pppppppbStack_130);
  ppppppbStack_148 = (byte ******)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  pppppppbVar27 = (byte *******)unaff_x20[0x34];
  pppppppbVar39 = (byte *******)unaff_x20[0x35];
  func_0x000107371ec8();
  pppppppbVar26 = pppppppbVar39;
  while (pppppppbStack_158 = pppppppbVar27, pppppppbStack_150 = pppppppbVar26,
        pppppppbVar27 != (byte *******)0x0) {
    pppppppbStack_170 = (byte *******)0x0;
    pppppppbStack_168 = (byte *******)0x0;
    uStack_160 = 0;
    pppppppbVar32 = (byte *******)pppppppbVar26[7];
    unaff_x26 = (byte *******)pppppppbVar26[8];
    pppppppbStack_e0 = (byte *******)*param_3;
    uVar25 = (ulong)uStack_d8 >> 0x20;
    uStack_d8 = (byte *******)CONCAT44((int)uVar25,*(undefined4 *)(param_3 + 1));
    pppppppbStack_c8 = (byte *******)&bStack_101;
    pppppppbStack_c0 = &ppppppbStack_148;
    pppppppbStack_b0 = (byte *******)&pppppppbStack_170;
    pppppppbStack_d0 = unaff_x20;
    pppppppbStack_b8 = pppppppbVar26;
    for (; pppppppbVar30 = pppppppbStack_b8, pppppppbVar28 = pppppppbStack_c0,
        pppppppbVar31 = pppppppbStack_c8, pppppppbVar32 != unaff_x26;
        pppppppbVar32 = pppppppbVar32 + 4) {
      if (*(int *)(pppppppbVar32 + 2) == 0) {
        unaff_x27 = (byte *******)*pppppppbVar32;
        FUN_107371acc(pppppppbStack_d0 + 0x27);
        func_0x0001073793f0();
        func_0x00010737922c();
        if (((ulong)*pppppppbVar31 & 1) == 0) {
          pppppppbVar27 = pppppppbVar30;
          func_0x000107264c5c();
          pppppppbStack_28 = pppppppbVar27;
          pppppppbStack_20 = pppppppbVar39;
          func_0x0001073797c8();
          __ZNSt3__19to_stringEy(&pppppppbStack_28,ppppppbStack_68);
          func_0x0001073797bc();
          func_0x0001073797a0();
        }
        func_0x000107379788();
      }
      else {
        unaff_x27 = (byte *******)*pppppppbVar32;
        FUN_107371acc(pppppppbStack_d0 + 0x27);
        func_0x0001073793f0();
        func_0x00010737922c();
        if (((ulong)*pppppppbVar31 & 1) == 0) {
          pppppppbVar27 = pppppppbVar30;
          func_0x000107264c5c();
          pppppppbStack_28 = pppppppbVar27;
          pppppppbStack_20 = pppppppbVar39;
          func_0x0001073797c8();
          __ZNSt3__19to_stringEy(&pppppppbStack_28,ppppppbStack_68);
          func_0x0001073797bc();
          func_0x0001073797a0();
        }
        func_0x000107379788();
      }
      pppppppbVar27 = (byte *******)&pppppppbStack_a0;
      func_0x000107372a54();
      unaff_x22 = pppppppbVar31;
      unaff_x23 = pppppppbVar30;
      unaff_x25 = pppppppbVar28;
    }
    func_0x00010785f1f4();
    pppppppbStack_a0 = (byte *******)((ulong)pppppppbStack_a0 & 0xffffffffffffff00);
    pppppppbVar27 = pppppppbVar27 + 0x144;
    func_0x00010724e2c8(pppppppbVar27,&pppppppbStack_a0);
    if (((int)pppppppbVar27 != 0) && (unaff_x20[0x13] != (byte ******)0x0)) {
      pppppppbVar32 = pppppppbStack_170;
      pppppppbVar39 = pppppppbStack_168;
      if ((bRam00000001136ca258 & 1) == 0) {
        pppppppbVar27 = (byte *******)0x1136ca258;
        ___cxa_guard_acquire();
        pppppppbVar32 = pppppppbStack_170;
        pppppppbVar39 = pppppppbStack_168;
        if ((int)pppppppbVar27 != 0) {
          func_0x000100060964(0x1136ca260,&UNK_10f40acdb);
          pppppppbVar27 = (byte *******)0x1136ca258;
          ___cxa_guard_release();
          pppppppbVar32 = pppppppbStack_170;
          pppppppbVar39 = pppppppbStack_168;
        }
      }
      for (; pppppppbVar32 != pppppppbVar39; pppppppbVar32 = pppppppbVar32 + 0xe) {
        ppppppbVar10 = unaff_x20[0x13];
        if (ppppppbVar10 == (byte ******)0x0) {
          func_0x000104bfeb48();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x107371038);
          (*pcVar5)();
        }
        (*(code *)(*ppppppbVar10)[6])(&pppppppbStack_a0,ppppppbVar10,pppppppbVar32);
        if ((char)uStack_80 == '\x01') {
          func_0x00010737990c();
          pppppppbVar27 = (byte *******)(((long)pppppppbStack_90 - (long)pppppppbStack_98) / 0x38);
          FUN_107372aa4(&pppppppbStack_e0);
          unaff_x22 = pppppppbStack_90;
          for (unaff_x23 = pppppppbStack_98; unaff_x23 != unaff_x22; unaff_x23 = unaff_x23 + 7) {
            pppppppbVar27 = unaff_x23;
            func_0x0001072e89a4(&pppppppbStack_e0);
          }
          iVar1 = (int)pppppppbStack_a0;
          unaff_x24 = (byte *******)((ulong)pppppppbStack_a0 & 0xffffffff);
          pppppppbVar31 = pppppppbVar32 + 8;
          func_0x000107372a84();
          unaff_x26 = (byte *******)pppppppbVar31[1];
          for (unaff_x25 = (byte *******)*pppppppbVar31; unaff_x25 != unaff_x26;
              unaff_x25 = unaff_x25 + 0xe) {
            func_0x000107269c1c(&ppppppbStack_f0);
            pppppppbVar31 = pppppppbStack_d0;
            if (iVar1 == 0) {
              while (unaff_x22 = pppppppbVar31, unaff_x22 != (byte *******)0x0) {
                pppppppbVar27 = unaff_x25 + 4;
                func_0x000107297a3c(pppppppbVar27,unaff_x22 + 2);
                if (pppppppbVar27 != (byte *******)0x0) {
                  func_0x0001073794fc();
                }
                pppppppbVar31 = (byte *******)*unaff_x22;
              }
            }
            else {
              pppppppbVar31 = unaff_x25 + 4;
              func_0x000104c2db28();
              pppppppbStack_100 = pppppppbVar31;
              while (pppppppbVar31 = pppppppbVar27, pppppppbStack_f8 = pppppppbVar31,
                    pppppppbStack_100 != (byte *******)0x0) {
                pppppppbVar27 = (byte *******)&pppppppbStack_e0;
                func_0x0001072eb65c(pppppppbVar27,pppppppbVar31);
                if (pppppppbVar27 == (byte *******)0x0) {
                  FUN_1073654b8(&pppppppbStack_28,&ppppppbStack_f0,pppppppbVar31,pppppppbVar31 + 7);
                }
                func_0x000104c2de10(&pppppppbStack_100);
                pppppppbVar27 = pppppppbStack_f8;
                unaff_x23 = pppppppbVar31;
              }
            }
            pppppppbVar27 = unaff_x25 + 4;
            func_0x000107297a3c(pppppppbVar27,0x1136ca260);
            if (pppppppbVar27 != (byte *******)0x0) {
              func_0x0001073794fc();
            }
            pppppppbVar27 = &ppppppbStack_f0;
            func_0x0001072f99e4(unaff_x25 + 4);
            func_0x000104c335c0(&ppppppbStack_f0);
          }
          func_0x00010726ea70(&pppppppbStack_e0);
        }
        pppppppbVar27 = (byte *******)&pppppppbStack_a0;
        FUN_1073405b4();
      }
    }
    func_0x00010785f1f4();
    pppppppbStack_a0 = (byte *******)((ulong)pppppppbStack_a0 & 0xffffffffffffff00);
    pppppppbVar27 = pppppppbVar27 + 0x142;
    func_0x00010724e2c8(pppppppbVar27,&pppppppbStack_a0);
    pppppppbVar39 = pppppppbVar26;
    if ((int)pppppppbVar27 == 0) {
      func_0x0001072c8f9c(&pppppppbStack_28);
      pppppppbStack_98 = (byte *******)0x0;
      pppppppbStack_a0 = (byte *******)0x0;
      ppppppbStack_88 = (byte ******)0x0;
      pppppppbStack_90 = (byte *******)0x0;
      uStack_80 = 0x3f800000;
      pppppppbVar27 = pppppppbStack_168;
      while (pppppppbVar27 != pppppppbStack_170) {
        pppppppbVar32 = pppppppbVar27 + -0xe;
        unaff_x22 = (byte *******)pppppppbVar27[-6][1];
        for (pppppbVar11 = *pppppppbVar27[-6] + 6; unaff_x23 = (byte *******)(pppppbVar11 + -6),
            pppppppbVar27 = pppppppbVar32, unaff_x23 != unaff_x22; pppppbVar11 = pppppbVar11 + 0xe)
        {
          if (*(int *)pppppbVar11 == 0) {
            pppppbVar12 = pppppbVar11;
            func_0x000104c2d7e4(pppppbVar11);
            pppppppbVar27 = (byte *******)&pppppppbStack_a0;
            func_0x0001072eb65c(pppppppbVar27,pppppbVar12);
            if (pppppppbVar27 == (byte *******)0x0) {
              func_0x000107379794();
              pppppbVar12 = pppppbVar11;
              func_0x000104c2d7e4(pppppbVar11);
              func_0x000107270d20(&pppppppbStack_a0,pppppbVar12);
            }
          }
          else {
            func_0x000107379794();
          }
        }
      }
      func_0x00010726ea70(&pppppppbStack_a0);
      FUN_10732e918(&pppppppbStack_e0,&pppppppbStack_28);
      FUN_107371eec(auStack_118,pppppppbVar26,&pppppppbStack_e0);
      func_0x000107331610(&pppppppbStack_e0);
      pppppppbVar27 = (byte *******)&pppppppbStack_28;
    }
    else {
      func_0x00010737990c();
      func_0x0001072c8f9c(&pppppppbStack_180);
      pppppppbVar32 = pppppppbStack_168;
      for (pppppppbVar27 = pppppppbStack_170; pppppppbVar27 != pppppppbVar32;
          pppppppbVar27 = pppppppbVar27 + 0xe) {
        pppppppbVar31 = (byte *******)pppppppbVar27[8][1];
        for (unaff_x27 = (byte *******)*pppppppbVar27[8];
            uVar6 = (long)unaff_x27 - (long)pppppppbVar31 < 0, unaff_x27 != pppppppbVar31;
            unaff_x27 = unaff_x27 + 0xe) {
          pppppppbVar28 = unaff_x27 + 6;
          if (*(int *)pppppppbVar28 == 0) {
            func_0x000104c2d7e4();
            func_0x000104c2fe00(&pppppppbStack_a0,pppppppbVar28);
            pppppppbVar28 = (byte *******)&pppppppbStack_e0;
            pppppppbVar30 = (byte *******)&pppppppbStack_a0;
            FUN_10735a6b8();
            if (pppppppbVar28 == (byte *******)0x0) {
              unaff_x25 = (byte *******)*pppppppbStack_180;
              unaff_x26 = (byte *******)pppppppbStack_180[1];
              pppppppbVar28 = (byte *******)&pppppppbStack_c8;
              func_0x00010726364c(pppppppbVar28,&pppppppbStack_a0);
              unaff_x24 = uStack_d8;
              pppppppbVar30 = pppppppbVar28;
              pppppppbVar23 = unaff_x22;
              unaff_x22 = pppppppbVar28;
              if (uStack_d8 != (byte *******)0x0) {
                unaff_x23 = (byte *******)((long)uStack_d8 + -1);
                if (((ulong)uStack_d8 & (ulong)unaff_x23) == 0) {
                  unaff_x22 = (byte *******)((ulong)unaff_x23 & (ulong)pppppppbVar28);
                  uVar6 = 0;
                }
                else {
                  uVar6 = (long)pppppppbVar28 - (long)uStack_d8 < 0;
                  if (uStack_d8 <= pppppppbVar28) {
                    func_0x0001073794a4();
                  }
                }
                ppppppbVar10 = pppppppbStack_e0[(long)unaff_x22];
                pppppppbVar23 = unaff_x22;
                if (ppppppbVar10 != (byte ******)0x0) {
                  do {
                    while( true ) {
                      ppppppbVar10 = (byte ******)*ppppppbVar10;
                      if (ppppppbVar10 == (byte ******)0x0) goto LAB_107370264;
                      pppppppbVar21 = (byte *******)ppppppbVar10[1];
                      uVar6 = (long)pppppppbVar21 - (long)pppppppbVar28 < 0;
                      if (pppppppbVar21 != pppppppbVar28) break;
                      pppppppbVar30 = (byte *******)(ppppppbVar10 + 2);
                      func_0x000104c32db4(pppppppbVar30,&pppppppbStack_a0);
                      if (((ulong)pppppppbVar30 & 1) != 0) goto LAB_107370364;
                    }
                    if (((ulong)unaff_x24 & (ulong)unaff_x23) == 0) {
                      pppppppbVar21 = (byte *******)((ulong)pppppppbVar21 & (ulong)unaff_x23);
                    }
                    else if (unaff_x24 <= pppppppbVar21) {
                      func_0x00010737992c();
                      pppppppbVar21 = extraout_x8_00;
                    }
                    uVar6 = (long)pppppppbVar21 - (long)unaff_x22 < 0;
                  } while (pppppppbVar21 == unaff_x22);
                }
              }
LAB_107370264:
              func_0x0001073797fc();
              pppppppbStack_18 = (byte *******)0x1;
              pppppppbStack_28 = pppppppbVar30;
              pppppppbStack_20 = (byte *******)&pppppppbStack_d0;
              *pppppppbVar30 = (byte ******)0x0;
              pppppppbVar30[1] = (byte ******)pppppppbVar28;
              func_0x000104c2fe00(pppppppbVar30 + 2,&pppppppbStack_a0);
              pppppppbVar30[9] = (byte ******)(((long)unaff_x26 - (long)unaff_x25) / 0x70);
              func_0x00010737912c(pppppppbStack_c8);
              if ((unaff_x24 == (byte *******)0x0) ||
                 (func_0x000107379044(), unaff_x22 = pppppppbVar23, (bool)uVar6)) {
                func_0x000107379210();
                uVar6 = unaff_x24 == (byte *******)0x3;
                func_0x000107378e10();
                FUN_10735a4c4(&pppppppbStack_e0);
                unaff_x24 = uStack_d8;
                func_0x0001073794b0();
                if ((bool)uVar6) {
                  unaff_x22 = (byte *******)(extraout_x8_01 & (ulong)pppppppbVar28);
                }
                else {
                  unaff_x22 = pppppppbVar28;
                  if (unaff_x24 <= pppppppbVar28) {
                    func_0x0001073794a4();
                    unaff_x22 = pppppppbVar23;
                  }
                }
              }
              if (pppppppbStack_e0[(long)unaff_x22] == (byte ******)0x0) {
                *pppppppbStack_28 = (byte ******)pppppppbStack_d0;
                pppppppbStack_d0 = pppppppbStack_28;
                pppppppbStack_e0[(long)unaff_x22] = (byte ******)&pppppppbStack_d0;
                if (*pppppppbStack_28 != (byte ******)0x0) {
                  pppppppbVar28 = (byte *******)(*pppppppbStack_28)[1];
                  if (((ulong)unaff_x24 & (ulong)((long)unaff_x24 + -1)) == 0) {
                    pppppppbVar28 =
                         (byte *******)((ulong)pppppppbVar28 & (ulong)((long)unaff_x24 + -1));
                  }
                  else if (unaff_x24 <= pppppppbVar28) {
                    uVar25 = 0;
                    if (unaff_x24 != (byte *******)0x0) {
                      uVar25 = (ulong)pppppppbVar28 / (ulong)unaff_x24;
                    }
                    pppppppbVar28 = (byte *******)((long)pppppppbVar28 - uVar25 * (long)unaff_x24);
                  }
                  pppppppbStack_e0[(long)pppppppbVar28] = (byte ******)pppppppbStack_28;
                }
              }
              else {
                func_0x0001073795e4();
              }
              pppppppbStack_28 = (byte *******)0x0;
              pppppppbStack_c8 = (byte *******)((long)pppppppbStack_c8 + 1);
              FUN_10735a640(&pppppppbStack_28);
              unaff_x23 = pppppppbVar30;
LAB_107370364:
              func_0x0001073797d4();
            }
            else {
              pppppppbVar23 = (byte *******)&pppppppbStack_180;
              func_0x000107372a84();
              ppppppbVar29 = pppppppbVar28[9];
              ppppppbVar34 = *pppppppbVar23;
              ppppppbVar10 = unaff_x27[4];
              func_0x000104c2dd8c();
              ppppppbStack_f0 = ppppppbVar10;
              while (pppppppbStack_e8 = pppppppbVar30, ppppppbStack_f0 != (byte ******)0x0) {
                pppppbVar11 = ppppppbVar34[(long)ppppppbVar29 * 0xe + 4];
                FUN_107372ba0(pppppbVar11,pppppppbVar30);
                if (((ulong)pppppbVar11 & 1) == 0) {
                  FUN_1073654b8(&pppppppbStack_28,ppppppbVar34 + (long)ppppppbVar29 * 0xe + 4,
                                pppppppbVar30,pppppppbVar30 + 7);
                }
                func_0x000104c2de10(&ppppppbStack_f0);
                pppppppbVar30 = pppppppbStack_e8;
              }
            }
            func_0x000107379780();
          }
          else {
            func_0x0001073797d4();
          }
        }
      }
      FUN_10735a81c(&pppppppbStack_e0);
      FUN_10732e918(&pppppppbStack_100,&pppppppbStack_180);
      FUN_107371eec(auStack_118,pppppppbVar26,&pppppppbStack_100);
      func_0x000107331610(&pppppppbStack_100);
      pppppppbVar27 = (byte *******)&pppppppbStack_180;
    }
    func_0x0001072c8f3c(pppppppbVar27);
    func_0x000107372be8(&pppppppbStack_180);
    pppppppbVar32 = pppppppbStack_168;
    pppppppbVar27 = pppppppbStack_170;
    while( true ) {
      uVar6 = (long)pppppppbVar27 - (long)pppppppbVar32 < 0;
      uVar9 = pppppppbVar27 == pppppppbVar32;
      if ((bool)uVar9) break;
      pppppppbVar31 = pppppppbVar27 + 10;
      func_0x0001072621e0();
      pppppppbStack_100 = pppppppbVar31;
      pppppppbVar31 = pppppppbVar39;
      while (pppppppbStack_f8 = pppppppbVar31, pppppppbStack_100 != (byte *******)0x0) {
        func_0x0001073730ac(&ppppppbStack_f0);
        func_0x000104c2fe00(&pppppppbStack_a0,pppppppbVar31);
        func_0x000107299490(&ppppppbStack_68,&ppppppbStack_f0);
        bVar8 = false;
        if (pppppppbStack_178 != (byte *******)0x0) {
          ppppppbVar10 = pppppppbStack_178[1];
          uVar6 = (long)ppppppbVar10 < 0;
          uVar9 = ppppppbVar10 == (byte ******)0x0;
          bVar8 = 0 < (long)ppppppbVar10;
        }
        if (pppppppbStack_180 == (byte *******)0x0) {
          pppppppbVar39 = (byte *******)0x0;
        }
        else {
          pppppppbVar31 = pppppppbStack_180 + 5;
          do {
            cVar44 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppppbVar31,0x10);
            if (bVar3) {
              *(int *)pppppppbVar31 = *(int *)pppppppbVar31 + 1;
              cVar44 = ExclusiveMonitorsStatus();
            }
            pppppppbVar39 = pppppppbStack_180;
          } while (cVar44 != '\0');
        }
        if (bVar8) {
          FUN_107372d24(&pppppppbStack_28,1);
          pppppppbVar28 = pppppppbStack_18;
          pppppppbStack_18[1] = (byte ******)0x0;
          pppppppbStack_18[2] = (byte ******)0x0;
          *pppppppbStack_18 = (byte ******)&PTR_FUN_1109a7350;
          pppppppbVar30 = pppppppbStack_18 + 3;
          pppppppbStack_18[4] = (byte ******)0x0;
          *pppppppbVar30 = (byte ******)0x0;
          pppppppbStack_18[6] = (byte ******)0x0;
          pppppppbStack_18[5] = (byte ******)0x0;
          *(undefined4 *)(pppppppbStack_18 + 7) = *(undefined4 *)(pppppppbVar39 + 4);
          FUN_107372f14(pppppppbVar30,pppppppbVar39[1]);
          pppppppbVar39 = pppppppbVar39 + 2;
          pppppppbVar31 = pppppppbVar28 + 5;
LAB_107370560:
          pppppppbVar23 = pppppppbStack_18;
          pppppppbVar39 = (byte *******)*pppppppbVar39;
          if (pppppppbVar39 != (byte *******)0x0) {
            pppppppbVar23 = pppppppbVar39 + 2;
            func_0x000104c2fe38();
            unaff_x24 = (byte *******)pppppppbVar28[4];
            pppppppbVar21 = pppppppbVar23;
            pppppppbVar35 = unaff_x22;
            unaff_x22 = pppppppbVar23;
            if (unaff_x24 != (byte *******)0x0) {
              pbVar36 = (byte *)((long)unaff_x24 + -1);
              if (((ulong)unaff_x24 & (ulong)pbVar36) == 0) {
                unaff_x22 = (byte *******)((ulong)pbVar36 & (ulong)pppppppbVar23);
                uVar9 = 1;
                uVar6 = 0;
              }
              else {
                uVar6 = (long)pppppppbVar23 - (long)unaff_x24 < 0;
                uVar9 = pppppppbVar23 == unaff_x24;
                if (unaff_x24 <= pppppppbVar23) {
                  func_0x0001073794a4();
                }
              }
              unaff_x27 = (byte *******)(*pppppppbVar30)[(long)unaff_x22];
              pppppppbVar35 = unaff_x22;
              if (unaff_x27 != (byte *******)0x0) {
                do {
                  while( true ) {
                    unaff_x27 = (byte *******)*unaff_x27;
                    if (unaff_x27 == (byte *******)0x0) goto LAB_1073705f8;
                    pppppppbVar22 = (byte *******)unaff_x27[1];
                    uVar6 = (long)pppppppbVar22 - (long)pppppppbVar23 < 0;
                    uVar9 = pppppppbVar22 == pppppppbVar23;
                    if (!(bool)uVar9) break;
                    pppppppbVar21 = unaff_x27 + 2;
                    func_0x000104c32db4(pppppppbVar21,pppppppbVar39 + 2);
                    if (((ulong)pppppppbVar21 & 1) != 0) goto LAB_107370560;
                  }
                  if (((ulong)unaff_x24 & (ulong)pbVar36) == 0) {
                    pppppppbVar22 = (byte *******)((ulong)pppppppbVar22 & (ulong)pbVar36);
                  }
                  else if (unaff_x24 <= pppppppbVar22) {
                    func_0x00010737992c();
                    pppppppbVar22 = extraout_x8_02;
                  }
                  uVar6 = (long)pppppppbVar22 - (long)unaff_x22 < 0;
                  uVar9 = pppppppbVar22 == unaff_x22;
                } while ((bool)uVar9);
              }
            }
LAB_1073705f8:
            func_0x0001073790fc();
            pppppppbStack_d0 = (byte *******)0x0;
            *pppppppbVar21 = (byte ******)0x0;
            pppppppbVar21[1] = (byte ******)pppppppbVar23;
            pppppppbStack_e0 = pppppppbVar21;
            uStack_d8 = pppppppbVar31;
            func_0x000104c2fe00(pppppppbVar21 + 2,pppppppbVar39 + 2);
            func_0x000107299490(pppppppbVar21 + 9,pppppppbVar39 + 9);
            pppppppbStack_d0 = (byte *******)CONCAT71(pppppppbStack_d0._1_7_,1);
            func_0x00010737912c(pppppppbVar28[6]);
            if (unaff_x24 == (byte *******)0x0) {
LAB_10737063c:
              func_0x000107379210();
              uVar7 = (long)((long)unaff_x24 + -3) < 0;
              uVar6 = unaff_x24 == (byte *******)0x3;
              func_0x000107378e10();
              FUN_107372f14(pppppppbVar30);
              unaff_x24 = (byte *******)pppppppbVar28[4];
              func_0x0001073794b0();
              if ((bool)uVar6) {
                uVar9 = 1;
                unaff_x22 = (byte *******)(extraout_x8_03 & (ulong)pppppppbVar23);
              }
              else {
                uVar7 = (long)pppppppbVar23 - (long)unaff_x24 < 0;
                uVar9 = pppppppbVar23 == unaff_x24;
                unaff_x22 = pppppppbVar23;
                if (unaff_x24 <= pppppppbVar23) {
                  func_0x0001073794a4();
                  unaff_x22 = pppppppbVar35;
                }
              }
            }
            else {
              func_0x000107379044();
              uVar7 = 0;
              unaff_x22 = pppppppbVar35;
              if ((bool)uVar6) goto LAB_10737063c;
            }
            uVar6 = uVar7;
            ppppppbVar10 = *pppppppbVar30;
            pppppbVar11 = ppppppbVar10[(long)unaff_x22];
            if (pppppbVar11 == (byte *****)0x0) {
              *pppppppbVar21 = *pppppppbVar31;
              *pppppppbVar31 = (byte ******)pppppppbVar21;
              ppppppbVar10[(long)unaff_x22] = (byte *****)pppppppbVar31;
              if (*pppppppbVar21 != (byte ******)0x0) {
                func_0x0001073791a0();
                lVar37 = extraout_x8_04;
                if ((bool)uVar9) {
                  pppppppbVar23 = (byte *******)((ulong)extraout_x9 & extraout_x10);
                  uVar9 = 1;
                }
                else {
                  uVar6 = (long)extraout_x9 - (long)unaff_x24 < 0;
                  uVar9 = extraout_x9 == unaff_x24;
                  pppppppbVar23 = extraout_x9;
                  if (unaff_x24 <= extraout_x9) {
                    func_0x000107379900();
                    lVar37 = extraout_x8_05;
                    pppppppbVar23 = extraout_x9_00;
                  }
                }
                *(byte ********)(lVar37 + (long)pppppppbVar23 * 8) = pppppppbVar21;
              }
            }
            else {
              *pppppppbVar21 = (byte ******)*pppppbVar11;
              *pppppbVar11 = (byte ****)pppppppbVar21;
            }
            pppppppbStack_e0 = (byte *******)0x0;
            pppppppbVar28[6] = (byte ******)((long)pppppppbVar28[6] + 1);
            func_0x0001073794ec();
            goto LAB_107370560;
          }
          *(undefined4 *)(pppppppbVar28 + 8) = 0;
          pppppppbStack_18 = (byte *******)0x0;
          pppppppbStack_e0 = pppppppbVar23 + 3;
          uStack_d8 = pppppppbVar23;
          FUN_107372e74(&pppppppbStack_28);
          FUN_107372ef0(&pppppppbStack_180,&pppppppbStack_e0);
          FUN_107372e50(&pppppppbStack_e0);
          unaff_x26 = (byte *******)0x0;
          pppppppbVar39 = pppppppbStack_180;
        }
        pppppppbVar28 = (byte *******)&pppppppbStack_a0;
        func_0x000104c2fe38();
        pppppppbVar30 = (byte *******)pppppppbVar39[1];
        pppppppbVar31 = pppppppbVar28;
        if (pppppppbVar30 != (byte *******)0x0) {
          unaff_x23 = (byte *******)((long)pppppppbVar30 + -1);
          if (((ulong)pppppppbVar30 & (ulong)unaff_x23) == 0) {
            unaff_x22 = (byte *******)((ulong)unaff_x23 & (ulong)pppppppbVar28);
            uVar9 = true;
            uVar6 = false;
          }
          else {
            uVar6 = (long)pppppppbVar28 - (long)pppppppbVar30 < 0;
            uVar9 = pppppppbVar28 == pppppppbVar30;
            unaff_x22 = pppppppbVar28;
            if (pppppppbVar30 <= pppppppbVar28) {
              uVar25 = 0;
              if (pppppppbVar30 != (byte *******)0x0) {
                uVar25 = (ulong)pppppppbVar28 / (ulong)pppppppbVar30;
              }
              unaff_x22 = (byte *******)((long)pppppppbVar28 - uVar25 * (long)pppppppbVar30);
            }
          }
          unaff_x25 = (byte *******)(*pppppppbVar39)[(long)unaff_x22];
          if (unaff_x25 != (byte *******)0x0) {
            do {
              while( true ) {
                unaff_x25 = (byte *******)*unaff_x25;
                if (unaff_x25 == (byte *******)0x0) goto LAB_1073707b4;
                pppppppbVar23 = (byte *******)unaff_x25[1];
                uVar6 = (long)pppppppbVar23 - (long)pppppppbVar28 < 0;
                uVar9 = pppppppbVar23 == pppppppbVar28;
                if (!(bool)uVar9) break;
                pppppppbVar31 = unaff_x25 + 2;
                func_0x000104c32db4(pppppppbVar31,&pppppppbStack_a0);
                if (((ulong)pppppppbVar31 & 1) != 0) goto LAB_1073708b4;
              }
              if (((ulong)pppppppbVar30 & (ulong)unaff_x23) == 0) {
                pppppppbVar23 = (byte *******)((ulong)pppppppbVar23 & (ulong)unaff_x23);
              }
              else if (pppppppbVar30 <= pppppppbVar23) {
                uVar25 = 0;
                if (pppppppbVar30 != (byte *******)0x0) {
                  uVar25 = (ulong)pppppppbVar23 / (ulong)pppppppbVar30;
                }
                pppppppbVar23 = (byte *******)((long)pppppppbVar23 - uVar25 * (long)pppppppbVar30);
              }
              uVar6 = (long)pppppppbVar23 - (long)unaff_x22 < 0;
              uVar9 = pppppppbVar23 == unaff_x22;
            } while ((bool)uVar9);
          }
        }
LAB_1073707b4:
        func_0x0001073790fc();
        unaff_x23 = pppppppbVar39 + 2;
        pppppppbStack_d0 = (byte *******)0x1;
        *pppppppbVar31 = (byte ******)0x0;
        pppppppbVar31[1] = (byte ******)pppppppbVar28;
        pppppppbStack_e0 = pppppppbVar31;
        uStack_d8 = unaff_x23;
        func_0x000104c2fe00(pppppppbVar31 + 2,&pppppppbStack_a0);
        pppppppbVar31[10] = ppppppbStack_60;
        pppppppbVar31[9] = ppppppbStack_68;
        ppppppbStack_68 = (byte ******)0x0;
        ppppppbStack_60 = (byte ******)0x0;
        func_0x00010737912c(pppppppbVar39[3]);
        if (pppppppbVar30 == (byte *******)0x0) {
LAB_107370800:
          func_0x0001073798c4();
          func_0x000107378e10();
          FUN_107372f14(pppppppbVar39);
          pppppppbVar30 = (byte *******)pppppppbVar39[1];
          if (((ulong)pppppppbVar30 & (ulong)((long)pppppppbVar30 + -1)) == 0) {
            uVar9 = 1;
            bVar8 = false;
            unaff_x22 = (byte *******)((ulong)((long)pppppppbVar30 + -1) & (ulong)pppppppbVar28);
          }
          else {
            bVar8 = (long)pppppppbVar28 - (long)pppppppbVar30 < 0;
            uVar9 = pppppppbVar28 == pppppppbVar30;
            unaff_x22 = pppppppbVar28;
            if (pppppppbVar30 <= pppppppbVar28) {
              uVar25 = 0;
              if (pppppppbVar30 != (byte *******)0x0) {
                uVar25 = (ulong)pppppppbVar28 / (ulong)pppppppbVar30;
              }
              unaff_x22 = (byte *******)((long)pppppppbVar28 - uVar25 * (long)pppppppbVar30);
            }
          }
        }
        else {
          func_0x000107379114();
          bVar8 = false;
          if ((bool)uVar6) goto LAB_107370800;
        }
        uVar6 = bVar8;
        ppppppbVar10 = *pppppppbVar39;
        pppppbVar11 = ppppppbVar10[(long)unaff_x22];
        if (pppppbVar11 == (byte *****)0x0) {
          *pppppppbVar31 = *unaff_x23;
          *unaff_x23 = (byte ******)pppppppbVar31;
          ppppppbVar10[(long)unaff_x22] = (byte *****)unaff_x23;
          if (*pppppppbVar31 != (byte ******)0x0) {
            func_0x0001073795f4();
            if ((bool)uVar9) {
              pppppppbVar28 = (byte *******)((ulong)extraout_x9_01 & extraout_x10_00);
              uVar9 = true;
            }
            else {
              uVar6 = (long)extraout_x9_01 - (long)pppppppbVar30 < 0;
              uVar9 = extraout_x9_01 == pppppppbVar30;
              pppppppbVar28 = extraout_x9_01;
              if (pppppppbVar30 <= extraout_x9_01) {
                uVar25 = 0;
                if (pppppppbVar30 != (byte *******)0x0) {
                  uVar25 = (ulong)extraout_x9_01 / (ulong)pppppppbVar30;
                }
                pppppppbVar28 = (byte *******)((long)extraout_x9_01 - uVar25 * (long)pppppppbVar30);
              }
            }
            *(byte ********)(extraout_x8_06 + (long)pppppppbVar28 * 8) = pppppppbVar31;
          }
        }
        else {
          *pppppppbVar31 = (byte ******)*pppppbVar11;
          *pppppbVar11 = (byte ****)pppppppbVar31;
        }
        pppppppbStack_e0 = (byte *******)0x0;
        pppppppbVar39[3] = (byte ******)((long)pppppppbVar39[3] + 1);
        func_0x0001073794ec();
        unaff_x25 = pppppppbVar31;
LAB_1073708b4:
        func_0x000107372df4(&pppppppbStack_a0);
        func_0x000107283194(&ppppppbStack_f0);
        pppppppbVar39 = pppppppbVar27;
        FUN_107372e84(unaff_x25 + 9);
        func_0x000107262260(&pppppppbStack_100);
        pppppppbVar31 = pppppppbStack_f8;
      }
      pppppppbVar27 = pppppppbVar27 + 0xe;
      pppppppbStack_100 = (byte *******)0x0;
    }
    in_ZR = true;
    bVar8 = false;
    if (pppppppbStack_128 != (byte *******)0x0) {
      ppppppbVar10 = pppppppbStack_128[1];
      uVar6 = (long)ppppppbVar10 < 0;
      in_ZR = ppppppbVar10 == (byte ******)0x0;
      bVar8 = 0 < (long)ppppppbVar10;
    }
    if (pppppppbStack_130 == (byte *******)0x0) {
      unaff_x28 = (byte *******)0x0;
    }
    else {
      pppppppbVar27 = pppppppbStack_130 + 5;
      do {
        cVar44 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppbVar27,0x10);
        if (bVar3) {
          *(int *)pppppppbVar27 = *(int *)pppppppbVar27 + 1;
          cVar44 = ExclusiveMonitorsStatus();
        }
        unaff_x28 = pppppppbStack_130;
      } while (cVar44 != '\0');
    }
    if (bVar8) {
      FUN_107372620(&pppppppbStack_e0,1);
      unaff_x27 = pppppppbStack_d0;
      pppppppbStack_d0[1] = (byte ******)0x0;
      pppppppbStack_d0[2] = (byte ******)0x0;
      *pppppppbStack_d0 = (byte ******)&PTR_FUN_1109a7300;
      unaff_x25 = pppppppbStack_d0 + 3;
      pppppppbStack_d0[4] = (byte ******)0x0;
      *unaff_x25 = (byte ******)0x0;
      pppppppbStack_d0[6] = (byte ******)0x0;
      pppppppbStack_d0[5] = (byte ******)0x0;
      *(undefined4 *)(pppppppbStack_d0 + 7) = *(undefined4 *)(unaff_x28 + 4);
      FUN_107373250(unaff_x25,unaff_x28[1]);
      pppppppbVar27 = unaff_x28 + 2;
      unaff_x26 = unaff_x27 + 5;
LAB_107370978:
      pppppppbVar39 = pppppppbStack_d0;
      pppppppbVar27 = (byte *******)*pppppppbVar27;
      if (pppppppbVar27 != (byte *******)0x0) {
        pppppppbVar39 = pppppppbVar27 + 2;
        func_0x000104c2fe38();
        unaff_x24 = (byte *******)unaff_x27[4];
        pppppppbVar32 = pppppppbVar39;
        pppppppbVar31 = unaff_x22;
        unaff_x22 = pppppppbVar39;
        if (unaff_x24 != (byte *******)0x0) {
          unaff_x23 = (byte *******)((long)unaff_x24 + -1);
          if (((ulong)unaff_x24 & (ulong)unaff_x23) == 0) {
            unaff_x22 = (byte *******)((ulong)unaff_x23 & (ulong)pppppppbVar39);
            in_ZR = 1;
            uVar6 = 0;
          }
          else {
            uVar6 = (long)pppppppbVar39 - (long)unaff_x24 < 0;
            in_ZR = pppppppbVar39 == unaff_x24;
            if (unaff_x24 <= pppppppbVar39) {
              func_0x0001073794a4();
            }
          }
          pppppbVar11 = (*unaff_x25)[(long)unaff_x22];
          pppppppbVar31 = unaff_x22;
          if (pppppbVar11 != (byte *****)0x0) {
            do {
              while( true ) {
                pppppbVar11 = (byte *****)*pppppbVar11;
                if (pppppbVar11 == (byte *****)0x0) goto LAB_107370a10;
                pppppppbVar28 = (byte *******)pppppbVar11[1];
                uVar6 = (long)pppppppbVar28 - (long)pppppppbVar39 < 0;
                in_ZR = pppppppbVar28 == pppppppbVar39;
                if (!(bool)in_ZR) break;
                pppppppbVar32 = (byte *******)(pppppbVar11 + 2);
                func_0x000104c32db4(pppppppbVar32,pppppppbVar27 + 2);
                if (((ulong)pppppppbVar32 & 1) != 0) goto LAB_107370978;
              }
              if (((ulong)unaff_x24 & (ulong)unaff_x23) == 0) {
                pppppppbVar28 = (byte *******)((ulong)pppppppbVar28 & (ulong)unaff_x23);
              }
              else if (unaff_x24 <= pppppppbVar28) {
                func_0x00010737992c();
                pppppppbVar28 = extraout_x8_07;
              }
              uVar6 = (long)pppppppbVar28 - (long)unaff_x22 < 0;
              in_ZR = pppppppbVar28 == unaff_x22;
            } while ((bool)in_ZR);
          }
        }
LAB_107370a10:
        func_0x0001073790fc();
        pppppppbStack_90 = (byte *******)0x0;
        *pppppppbVar32 = (byte ******)0x0;
        pppppppbVar32[1] = (byte ******)pppppppbVar39;
        pppppppbStack_a0 = pppppppbVar32;
        pppppppbStack_98 = unaff_x26;
        func_0x000104c2fe00(pppppppbVar32 + 2,pppppppbVar27 + 2);
        FUN_1073733a8(pppppppbVar32 + 9,pppppppbVar27 + 9);
        pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,1);
        func_0x00010737912c(unaff_x27[6]);
        if (unaff_x24 == (byte *******)0x0) {
LAB_107370a54:
          func_0x000107379210();
          uVar9 = (long)((long)unaff_x24 + -3) < 0;
          uVar6 = unaff_x24 == (byte *******)0x3;
          func_0x000107378e10();
          FUN_107373250(unaff_x25);
          unaff_x24 = (byte *******)unaff_x27[4];
          func_0x0001073794b0();
          if ((bool)uVar6) {
            in_ZR = 1;
            unaff_x22 = (byte *******)(extraout_x8_08 & (ulong)pppppppbVar39);
          }
          else {
            uVar9 = (long)pppppppbVar39 - (long)unaff_x24 < 0;
            in_ZR = pppppppbVar39 == unaff_x24;
            unaff_x22 = pppppppbVar39;
            if (unaff_x24 <= pppppppbVar39) {
              func_0x0001073794a4();
              unaff_x22 = pppppppbVar31;
            }
          }
        }
        else {
          func_0x000107379044();
          uVar9 = 0;
          unaff_x22 = pppppppbVar31;
          if ((bool)uVar6) goto LAB_107370a54;
        }
        uVar6 = uVar9;
        ppppppbVar10 = *unaff_x25;
        pppppbVar11 = ppppppbVar10[(long)unaff_x22];
        if (pppppbVar11 == (byte *****)0x0) {
          *pppppppbVar32 = *unaff_x26;
          *unaff_x26 = (byte ******)pppppppbVar32;
          ppppppbVar10[(long)unaff_x22] = (byte *****)unaff_x26;
          if (*pppppppbVar32 != (byte ******)0x0) {
            func_0x0001073791a0();
            lVar37 = extraout_x8_09;
            if ((bool)in_ZR) {
              pppppppbVar39 = (byte *******)((ulong)extraout_x9_02 & extraout_x10_01);
              in_ZR = 1;
            }
            else {
              uVar6 = (long)extraout_x9_02 - (long)unaff_x24 < 0;
              in_ZR = extraout_x9_02 == unaff_x24;
              pppppppbVar39 = extraout_x9_02;
              if (unaff_x24 <= extraout_x9_02) {
                func_0x000107379900();
                lVar37 = extraout_x8_10;
                pppppppbVar39 = extraout_x9_03;
              }
            }
            *(byte ********)(lVar37 + (long)pppppppbVar39 * 8) = pppppppbVar32;
          }
        }
        else {
          *pppppppbVar32 = (byte ******)*pppppbVar11;
          *pppppbVar11 = (byte ****)pppppppbVar32;
        }
        pppppppbStack_a0 = (byte *******)0x0;
        unaff_x27[6] = (byte ******)((long)unaff_x27[6] + 1);
        func_0x0001073794f4();
        unaff_x23 = pppppppbVar32;
        goto LAB_107370978;
      }
      *(undefined4 *)(unaff_x27 + 8) = 0;
      pppppppbStack_d0 = (byte *******)0x0;
      FUN_107372770(&pppppppbStack_e0);
      pppppppbStack_e0 = (byte *******)0x0;
      uStack_d8 = (byte *******)0x0;
      pppppppbStack_98 = pppppppbStack_128;
      pppppppbStack_a0 = pppppppbStack_130;
      pppppppbStack_128 = pppppppbVar39;
      pppppppbStack_130 = pppppppbVar39 + 3;
      FUN_10737274c(&pppppppbStack_a0);
      FUN_10737274c(&pppppppbStack_e0);
      unaff_x28 = pppppppbStack_130;
    }
    pppppppbVar32 = pppppppbVar26;
    func_0x000104c2fe38();
    pppppppbVar31 = (byte *******)unaff_x28[1];
    pppppppbVar27 = pppppppbVar32;
    if (pppppppbVar31 != (byte *******)0x0) {
      unaff_x22 = (byte *******)((long)pppppppbVar31 + -1);
      if (((ulong)pppppppbVar31 & (ulong)unaff_x22) == 0) {
        unaff_x23 = (byte *******)((ulong)unaff_x22 & (ulong)pppppppbVar32);
        in_ZR = true;
        uVar6 = false;
      }
      else {
        uVar6 = (long)pppppppbVar32 - (long)pppppppbVar31 < 0;
        in_ZR = pppppppbVar32 == pppppppbVar31;
        unaff_x23 = pppppppbVar32;
        if (pppppppbVar31 <= pppppppbVar32) {
          uVar25 = 0;
          if (pppppppbVar31 != (byte *******)0x0) {
            uVar25 = (ulong)pppppppbVar32 / (ulong)pppppppbVar31;
          }
          unaff_x23 = (byte *******)((long)pppppppbVar32 - uVar25 * (long)pppppppbVar31);
        }
      }
      unaff_x24 = (byte *******)0x0;
      pppppppbVar28 = (byte *******)(*unaff_x28)[(long)unaff_x23];
      if ((byte *******)(*unaff_x28)[(long)unaff_x23] != (byte *******)0x0) {
        do {
          while( true ) {
            unaff_x24 = (byte *******)*pppppppbVar28;
            if (unaff_x24 == (byte *******)0x0) goto LAB_107370bd4;
            pppppppbVar39 = (byte *******)unaff_x24[1];
            uVar6 = (long)pppppppbVar39 - (long)pppppppbVar32 < 0;
            in_ZR = pppppppbVar39 == pppppppbVar32;
            pppppppbVar28 = unaff_x24;
            if (!(bool)in_ZR) break;
            pppppppbVar27 = unaff_x24 + 2;
            pppppppbVar39 = pppppppbVar26;
            func_0x000104c32db4();
            if (((ulong)pppppppbVar27 & 1) != 0) {
              pppppppbVar27 = unaff_x24 + 9;
              in_NG = (long)pppppppbVar27 - (long)&pppppppbStack_180 < 0;
              in_ZR = (byte ********)pppppppbVar27 == &pppppppbStack_180;
              if (!(bool)in_ZR) {
                pppppppbStack_98 = pppppppbStack_178;
                pppppppbStack_a0 = pppppppbStack_180;
                if (pppppppbStack_178 != (byte *******)0x0) {
                  do {
                    func_0x000107378f58();
                  } while (extraout_w10 != 0);
                }
                if (*pppppppbVar27 != (byte ******)0x0) {
                  ppppppbVar10 = *pppppppbVar27 + 5;
                  do {
                    cVar44 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppbVar10,0x10);
                    if (bVar8) {
                      *(int *)ppppppbVar10 = *(int *)ppppppbVar10 + 1;
                      cVar44 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar44 != '\0');
                }
                pppppppbVar39 = (byte *******)&pppppppbStack_a0;
                FUN_107372ef0(pppppppbVar27);
                FUN_107372e50(&pppppppbStack_a0);
                if (*pppppppbVar27 != (byte ******)0x0) {
                  ppppppbVar10 = *pppppppbVar27 + 5;
                  do {
                    cVar44 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(ppppppbVar10,0x10);
                    if (bVar8) {
                      *(int *)ppppppbVar10 = *(int *)ppppppbVar10 + 1;
                      cVar44 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar44 != '\0');
                }
              }
              goto LAB_107370d58;
            }
          }
          if (((ulong)pppppppbVar31 & (ulong)unaff_x22) == 0) {
            pppppppbVar39 = (byte *******)((ulong)pppppppbVar39 & (ulong)unaff_x22);
          }
          else if (pppppppbVar31 <= pppppppbVar39) {
            uVar25 = 0;
            if (pppppppbVar31 != (byte *******)0x0) {
              uVar25 = (ulong)pppppppbVar39 / (ulong)pppppppbVar31;
            }
            pppppppbVar39 = (byte *******)((long)pppppppbVar39 - uVar25 * (long)pppppppbVar31);
          }
          uVar6 = (long)pppppppbVar39 - (long)unaff_x23 < 0;
          in_ZR = pppppppbVar39 == unaff_x23;
        } while ((bool)in_ZR);
      }
    }
LAB_107370bd4:
    func_0x0001073790fc();
    unaff_x22 = unaff_x28 + 2;
    pppppppbStack_90 = (byte *******)0x0;
    *pppppppbVar27 = (byte ******)0x0;
    pppppppbVar27[1] = (byte ******)pppppppbVar32;
    pppppppbStack_a0 = pppppppbVar27;
    pppppppbStack_98 = unaff_x22;
    func_0x000104c2fe00(pppppppbVar27 + 2,pppppppbVar26);
    pppppppbVar39 = (byte *******)&pppppppbStack_180;
    FUN_1073733a8(pppppppbVar27 + 9);
    pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,1);
    func_0x00010737912c(unaff_x28[3]);
    if (pppppppbVar31 == (byte *******)0x0) {
LAB_107370c20:
      func_0x0001073798c4();
      func_0x000107378e10();
      FUN_107373250(unaff_x28);
      pppppppbVar31 = (byte *******)unaff_x28[1];
      if (((ulong)pppppppbVar31 & (ulong)((long)pppppppbVar31 + -1)) == 0) {
        in_ZR = 1;
        in_NG = false;
        unaff_x23 = (byte *******)((ulong)((long)pppppppbVar31 + -1) & (ulong)pppppppbVar32);
      }
      else {
        in_NG = (long)pppppppbVar32 - (long)pppppppbVar31 < 0;
        in_ZR = pppppppbVar32 == pppppppbVar31;
        unaff_x23 = pppppppbVar32;
        if (pppppppbVar31 <= pppppppbVar32) {
          uVar25 = 0;
          if (pppppppbVar31 != (byte *******)0x0) {
            uVar25 = (ulong)pppppppbVar32 / (ulong)pppppppbVar31;
          }
          unaff_x23 = (byte *******)((long)pppppppbVar32 - uVar25 * (long)pppppppbVar31);
        }
      }
    }
    else {
      func_0x000107379114();
      in_NG = false;
      if ((bool)uVar6) goto LAB_107370c20;
    }
    ppppppbVar10 = *unaff_x28;
    pppppbVar11 = ppppppbVar10[(long)unaff_x23];
    if (pppppbVar11 == (byte *****)0x0) {
      *pppppppbVar27 = *unaff_x22;
      *unaff_x22 = (byte ******)pppppppbVar27;
      ppppppbVar10[(long)unaff_x23] = (byte *****)unaff_x22;
      if (*pppppppbVar27 != (byte ******)0x0) {
        func_0x0001073795f4();
        if ((bool)in_ZR) {
          pppppppbVar26 = (byte *******)((ulong)extraout_x9_04 & extraout_x10_02);
          in_ZR = true;
        }
        else {
          in_NG = (long)extraout_x9_04 - (long)pppppppbVar31 < 0;
          in_ZR = extraout_x9_04 == pppppppbVar31;
          pppppppbVar26 = extraout_x9_04;
          if (pppppppbVar31 <= extraout_x9_04) {
            uVar25 = 0;
            if (pppppppbVar31 != (byte *******)0x0) {
              uVar25 = (ulong)extraout_x9_04 / (ulong)pppppppbVar31;
            }
            pppppppbVar26 = (byte *******)((long)extraout_x9_04 - uVar25 * (long)pppppppbVar31);
          }
        }
        *(byte ********)(extraout_x8_11 + (long)pppppppbVar26 * 8) = pppppppbVar27;
      }
    }
    else {
      *pppppppbVar27 = (byte ******)*pppppbVar11;
      *pppppbVar11 = (byte ****)pppppppbVar27;
    }
    pppppppbStack_a0 = (byte *******)0x0;
    unaff_x28[3] = (byte ******)((long)unaff_x28[3] + 1);
    func_0x0001073794f4();
    unaff_x25 = pppppppbVar27;
LAB_107370d58:
    FUN_10737344c(&pppppppbStack_180);
    FUN_1073734a8(&pppppppbStack_170);
    FUN_1073723e0(&pppppppbStack_158);
    pppppppbVar27 = pppppppbStack_158;
    pppppppbVar26 = pppppppbStack_150;
  }
  if ((bStack_101 & 1) == 0) {
    pppppppbVar27 = unaff_x20 + 0x4a;
    pppppppbVar39 = pppppppbVar27;
    FUN_107373894(pppppppbVar27,&ppppppbStack_148);
    if (pppppppbVar39 == (byte *******)0x0) {
      ppppppbVar10 = unaff_x20[0x49];
      unaff_x20[0x49] = (byte ******)((long)ppppppbVar10 + 1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pppppppbStack_a0,&ppppppbStack_148);
      pppppppbVar26 = unaff_x20 + 0x4d;
      unaff_x24 = pppppppbVar26;
      ppppppbStack_88 = ppppppbVar10;
      func_0x000100102e7c(pppppppbVar26,&pppppppbStack_a0);
      pppppppbVar32 = (byte *******)unaff_x20[0x4b];
      if (pppppppbVar32 != (byte *******)0x0) {
        unaff_x25 = (byte *******)((long)pppppppbVar32 + -1);
        if (((ulong)pppppppbVar32 & (ulong)unaff_x25) == 0) {
          unaff_x22 = (byte *******)((ulong)unaff_x25 & (ulong)unaff_x24);
          in_ZR = true;
          in_NG = false;
        }
        else {
          in_NG = (long)unaff_x24 - (long)pppppppbVar32 < 0;
          in_ZR = unaff_x24 == pppppppbVar32;
          unaff_x22 = unaff_x24;
          if (pppppppbVar32 <= unaff_x24) {
            uVar25 = 0;
            if (pppppppbVar32 != (byte *******)0x0) {
              uVar25 = (ulong)unaff_x24 / (ulong)pppppppbVar32;
            }
            unaff_x22 = (byte *******)((long)unaff_x24 - uVar25 * (long)pppppppbVar32);
          }
        }
        pppppppbVar39 = (byte *******)(*pppppppbVar27)[(long)unaff_x22];
        if (pppppppbVar39 != (byte *******)0x0) {
          do {
            while( true ) {
              pppppppbVar39 = (byte *******)*pppppppbVar39;
              if (pppppppbVar39 == (byte *******)0x0) goto LAB_107370ea4;
              pppppppbVar31 = (byte *******)pppppppbVar39[1];
              in_NG = (long)pppppppbVar31 - (long)unaff_x24 < 0;
              in_ZR = pppppppbVar31 == unaff_x24;
              if (!(bool)in_ZR) break;
              pppppppbVar31 = pppppppbVar39 + 2;
              func_0x0001000e107c(pppppppbVar31,&pppppppbStack_a0);
              if (((ulong)pppppppbVar31 & 1) != 0) goto LAB_107370fc4;
            }
            if (((ulong)pppppppbVar32 & (ulong)unaff_x25) == 0) {
              pppppppbVar31 = (byte *******)((ulong)pppppppbVar31 & (ulong)unaff_x25);
            }
            else if (pppppppbVar32 <= pppppppbVar31) {
              uVar25 = 0;
              if (pppppppbVar32 != (byte *******)0x0) {
                uVar25 = (ulong)pppppppbVar31 / (ulong)pppppppbVar32;
              }
              pppppppbVar31 = (byte *******)((long)pppppppbVar31 - uVar25 * (long)pppppppbVar32);
            }
            in_NG = (long)pppppppbVar31 - (long)unaff_x22 < 0;
            in_ZR = pppppppbVar31 == unaff_x22;
          } while ((bool)in_ZR);
        }
      }
LAB_107370ea4:
      pppppppbVar39 = (byte *******)0x30;
      __Znwm();
      unaff_x25 = unaff_x20 + 0x4c;
      pppppppbStack_d0 = (byte *******)0x0;
      *pppppppbVar39 = (byte ******)0x0;
      pppppppbVar39[1] = (byte ******)unaff_x24;
      pppppppbStack_e0 = pppppppbVar39;
      uStack_d8 = unaff_x25;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (pppppppbVar39 + 2,&pppppppbStack_a0);
      pppppppbVar39[5] = ppppppbStack_88;
      pppppppbStack_d0 = (byte *******)CONCAT71(pppppppbStack_d0._1_7_,1);
      func_0x00010737912c(unaff_x20[0x4d]);
      if ((pppppppbVar32 == (byte *******)0x0) || (func_0x000107379114(), (bool)in_NG)) {
        func_0x000107378e10((long)pppppppbVar32 << 1);
        FUN_10737395c(pppppppbVar27);
        pppppppbVar32 = (byte *******)unaff_x20[0x4b];
        if (((ulong)pppppppbVar32 & (ulong)((long)pppppppbVar32 + -1)) == 0) {
          in_ZR = 1;
          unaff_x22 = (byte *******)((ulong)((long)pppppppbVar32 + -1) & (ulong)unaff_x24);
        }
        else {
          in_ZR = unaff_x24 == pppppppbVar32;
          unaff_x22 = unaff_x24;
          if (pppppppbVar32 <= unaff_x24) {
            uVar25 = 0;
            if (pppppppbVar32 != (byte *******)0x0) {
              uVar25 = (ulong)unaff_x24 / (ulong)pppppppbVar32;
            }
            unaff_x22 = (byte *******)((long)unaff_x24 - uVar25 * (long)pppppppbVar32);
          }
        }
      }
      pppppppbVar39 = pppppppbStack_e0;
      ppppppbVar10 = *pppppppbVar27;
      pppppbVar11 = ppppppbVar10[(long)unaff_x22];
      if (pppppbVar11 == (byte *****)0x0) {
        *pppppppbStack_e0 = *unaff_x25;
        *unaff_x25 = (byte ******)pppppppbStack_e0;
        ppppppbVar10[(long)unaff_x22] = (byte *****)unaff_x25;
        if (*pppppppbStack_e0 != (byte ******)0x0) {
          func_0x0001073795f4();
          if ((bool)in_ZR) {
            pppppppbVar27 = (byte *******)((ulong)extraout_x9_05 & extraout_x10_03);
            in_ZR = true;
          }
          else {
            in_ZR = extraout_x9_05 == pppppppbVar32;
            pppppppbVar27 = extraout_x9_05;
            if (pppppppbVar32 <= extraout_x9_05) {
              uVar25 = 0;
              if (pppppppbVar32 != (byte *******)0x0) {
                uVar25 = (ulong)extraout_x9_05 / (ulong)pppppppbVar32;
              }
              pppppppbVar27 = (byte *******)((long)extraout_x9_05 - uVar25 * (long)pppppppbVar32);
            }
          }
          *(byte ********)(extraout_x8_12 + (long)pppppppbVar27 * 8) = pppppppbVar39;
        }
      }
      else {
        *pppppppbStack_e0 = (byte ******)*pppppbVar11;
        *pppppbVar11 = (byte ****)pppppppbStack_e0;
      }
      pppppppbStack_e0 = (byte *******)0x0;
      *pppppppbVar26 = (byte ******)((long)*pppppppbVar26 + 1);
      FUN_107373af8(&pppppppbStack_e0);
      unaff_x27 = unaff_x20;
LAB_107370fc4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppbStack_a0);
      unaff_x26 = unaff_x20;
    }
    ppppppbVar10 = pppppppbVar39[5];
  }
  else {
    ppppppbVar10 = unaff_x20[0x34];
    FUN_107372414(ppppppbVar10,unaff_x20[0x35]);
  }
  uVar13 = 0xe8;
  __Znwm();
  pppppppbVar27 = unaff_x20 + 7;
  pppppppbVar39 = unaff_x20 + 0x40;
  puVar20 = auStack_118;
  pppppppbVar26 = (byte *******)&pppppppbStack_130;
  FUN_10737a18c();
  *unaff_x19 = uVar13;
  unaff_x19[1] = ppppppbVar10;
  func_0x000107379514();
  FUN_107373b70(&pppppppbStack_130);
  FUN_107331a9c();
  func_0x000107378dfc(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136ca258);
  FUN_1073734a8(&pppppppbStack_170);
  func_0x000107379514();
  FUN_107373b70(&pppppppbStack_130);
  puVar14 = auStack_118;
  FUN_107331a9c();
  func_0x000107378f88();
  pcStack_1d8 = FUN_1073712e4;
  puVar15 = puVar14;
  pppppppbVar32 = pppppppbVar27;
  pppppppbVar31 = pppppppbVar39;
  puStack_1e0 = &stack0x00000050;
  func_0x000107378e90();
  puVar15 = puVar15 + 0x18;
  uStack_260 = extraout_x8_13;
  FUN_107373da4(puVar15,0);
  uVar19 = SUB84(pppppppbVar31,0);
  if (puVar15 != (undefined8 *)0x0) {
    plStack_6a8 = (long *)*param_4;
    pppppppbStack_6b8 = pppppppbVar39;
    puStack_6b0 = param_4;
    func_0x000100060b18(&ppppppbStack_3f0,&PTR_DAT_1109a64d0);
    uStack_618 = uStack_3e8;
    pppppbStack_620 = (byte *****)ppppppbStack_3f0;
    uStack_610 = uStack_3e0;
    uStack_3e0 = 0;
    ppppppbStack_3f0 = (byte ******)0x0;
    uStack_3e8 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppbStack_3f0);
    uVar19 = SUB84(pppppppbVar31,0);
    uStack_608 = 1;
    if (puVar14[0x3e] != 0) {
      pppppppbVar28 = (byte *******)(puVar14 + 0x18);
      FUN_107373da4(pppppppbVar28,0);
      uVar19 = SUB84(pppppppbVar31,0);
      if (pppppppbVar28 != (byte *******)0x0) {
        pppppppbStack_640 = (byte *******)&UNK_10e52b660;
        lStack_638 = 0;
        uStack_630 = 0;
        uStack_628 = 0;
        puStack_6d0 = param_3;
        pppppppbStack_6c8 = pppppppbVar27;
        puStack_6c0 = puVar14;
        (**(code **)(*plStack_6a8 + 0x20))(alStack_650);
        plVar33 = (long *)(alStack_650[0] + 0x10);
        while( true ) {
          uVar19 = SUB84(pppppppbVar31,0);
          plVar33 = (long *)*plVar33;
          if (plVar33 == (long *)0x0) break;
          pppppppbStack_668 = (byte *******)0x0;
          pppppppbStack_660 = (byte *******)0x0;
          uStack_658 = 0;
          (**(code **)(*plStack_6a8 + 0x18))(aplStack_678,plStack_6a8,plVar33 + 2);
          plVar40 = (long *)0x0;
          while( true ) {
            plVar16 = aplStack_678[0];
            func_0x000107379244();
            (*extraout_x8_14)();
            if (plVar16 <= plVar40) break;
            (**(code **)(*aplStack_678[0] + 0x18))(&uStack_690,aplStack_678[0],plVar40);
            func_0x000107751284(auStack_580);
            lStack_698 = lStack_688;
            uStack_6a0 = uStack_690;
            if (lStack_688 != 0) {
              do {
                func_0x000107378f58();
              } while (extraout_w10_00 != 0);
            }
            uStack_600 = uStack_600 & 0xffffffffffffff00;
            uStack_590 = 0;
            func_0x000107751444(auStack_580,&uStack_6a0,&uStack_600);
            func_0x000107751334(&ppppppbStack_3f0,auStack_580);
            func_0x000107267e8c(&uStack_600);
            func_0x000107267e44(&uStack_6a0);
            func_0x000107267da8(auStack_580);
            uStack_5c0 = 0;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            uStack_5f8 = 0;
            uStack_600 = 0;
            puStack_5e8 = (undefined8 *)0x0;
            uStack_5f0 = 0;
            func_0x000107753050(auStack_580,pppppppbVar28[3],&ppppppbStack_3f0,&uStack_600);
            puVar17 = auStack_580;
            FUN_1073405dc();
            iVar1 = *(int *)(puVar17 + 0x68);
            bVar2 = puVar17[8];
            func_0x00010727f7f8(auStack_578);
            func_0x00010724b3d8(&uStack_600);
            if ((iVar1 == 1) && ((bVar2 & 1) != 0)) {
              FUN_107373e44(&pppppppbStack_668,&uStack_690);
            }
            func_0x000107267da8(&ppppppbStack_3f0);
            FUN_107330fdc(&uStack_690);
            plVar40 = (long *)((long)plVar40 + 1);
          }
          Hint_Prefetch(pppppppbStack_640,0,2,0);
          uVar25 = (ulong)(plVar33 + 2);
          func_0x000104c2fe38(pppppppbStack_640);
          uVar4 = uStack_630;
          unaff_x28 = pppppppbStack_640;
          lVar37 = 0;
          uVar24 = (ulong)pppppppbStack_640 >> 0xc ^ uVar25 >> 7;
          bVar2 = (byte)uVar25;
          uVar43 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)
                                                                        )))) & 0x7f7f7f7f7f7f;
          while( true ) {
            uVar24 = uVar24 & uVar4;
            uVar13 = *(undefined8 *)((long)unaff_x28 + uVar24);
            cVar44 = (char)((ulong)uVar13 >> 8);
            cVar45 = (char)((ulong)uVar13 >> 0x10);
            cVar46 = (char)((ulong)uVar13 >> 0x18);
            cVar47 = (char)((ulong)uVar13 >> 0x20);
            cVar48 = (char)((ulong)uVar13 >> 0x28);
            bVar42 = (byte)((ulong)uVar13 >> 0x30);
            bVar49 = (byte)((ulong)uVar13 >> 0x38);
            for (uVar38 = CONCAT17(-(bVar49 == (bVar2 & 0x7f)),
                                   CONCAT16(-(bVar42 == (bVar2 & 0x7f)),
                                            CONCAT15(-(cVar48 == (char)(uVar43 >> 0x28)),
                                                     CONCAT14(-(cVar47 == (char)(uVar43 >> 0x20)),
                                                              CONCAT13(-(cVar46 ==
                                                                        (char)(uVar43 >> 0x18)),
                                                                       CONCAT12(-(cVar45 ==
                                                                                 (char)(uVar43 >>
                                                                                       0x10)),
                                                                                CONCAT11(-(cVar44 ==
                                                                                          (char)(
                                                  uVar43 >> 8)),-((char)uVar13 == (char)uVar43))))))
                                           )) & 0x8080808080808080; uVar38 != 0;
                uVar38 = uVar38 - 1 & uVar38) {
              uVar18 = (uVar38 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar38 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              unaff_x27 = (byte *******)
                          (uVar24 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar4);
              uVar18 = lStack_638 + (long)unaff_x27 * 0x50;
              func_0x000104c32db4(uVar18,plVar33 + 2);
              if ((uVar18 & 1) != 0) goto LAB_1073715c8;
            }
            bVar42 = NEON_umaxv(CONCAT17(-(bVar49 == 0x80),
                                         CONCAT16(-(bVar42 == 0x80),
                                                  CONCAT15(-(cVar48 == -0x80),
                                                           CONCAT14(-(cVar47 == -0x80),
                                                                    CONCAT13(-(cVar46 == -0x80),
                                                                             CONCAT12(-(cVar45 ==
                                                                                       -0x80),
                                                  CONCAT11(-(cVar44 == -0x80),
                                                           -((char)uVar13 == -0x80)))))))),1);
            if ((bVar42 & 1) != 0) break;
            lVar37 = lVar37 + 8;
            uVar24 = lVar37 + uVar24;
          }
          unaff_x27 = (byte *******)&pppppppbStack_640;
          func_0x00010737410c(unaff_x27,uVar25);
          lVar37 = lStack_638 + (long)unaff_x27 * 0x50;
          func_0x000104c2fe00(lVar37,plVar33 + 2);
          *(undefined8 *)(lVar37 + 0x38) = 0;
          *(undefined8 *)(lVar37 + 0x40) = 0;
          *(undefined8 *)(lVar37 + 0x48) = 0;
LAB_1073715c8:
          pppppppbVar39 = pppppppbStack_660;
          pppppppbVar27 = pppppppbStack_668;
          lVar37 = lStack_638 + (long)unaff_x27 * 0x50;
          unaff_x26 = (byte *******)(lVar37 + 0x38);
          in_ZR = (byte ********)unaff_x26 == &pppppppbStack_668;
          if (!(bool)in_ZR) {
            uVar25 = (long)pppppppbStack_660 - (long)pppppppbStack_668;
            uVar24 = *(long *)(lVar37 + 0x48) - (long)*unaff_x26;
            in_ZR = uVar25 == uVar24;
            unaff_x28 = pppppppbVar27;
            unaff_x27 = pppppppbVar39;
            if (uVar24 < uVar25) {
              FUN_1073742ec(unaff_x26);
              pppppppbVar30 = unaff_x26;
              FUN_107373f5c(unaff_x26,(long)uVar25 >> 4);
              func_0x000107374324(unaff_x26,pppppppbVar30);
            }
            else {
              uVar24 = *(long *)(lVar37 + 0x40) - (long)*unaff_x26;
              in_ZR = uVar25 == uVar24;
              if (uVar25 <= uVar24) {
                FUN_10737435c(pppppppbStack_668,pppppppbStack_660);
                func_0x0001073743f8(unaff_x26,pppppppbVar27);
                goto LAB_107371678;
              }
              FUN_10737435c(pppppppbStack_668,(byte *)((long)pppppppbStack_668 + uVar24));
              pppppppbVar27 = (byte *******)((long)pppppppbVar27 + uVar24);
            }
            func_0x0001073742a8(unaff_x26,pppppppbVar27,pppppppbVar39);
          }
LAB_107371678:
          func_0x000107331000(aplStack_678);
          FUN_107374434(&pppppppbStack_668);
        }
        func_0x000107283194(alStack_650);
        puVar14 = puStack_6c0;
        unaff_x24 = (byte *******)puStack_6c0[0x3e];
        FUN_1073744e0(auStack_580,&pppppppbStack_640);
        ppppppbStack_558 = *pppppppbStack_6b8;
        puStack_560 = puVar14;
        uStack_550 = *(undefined4 *)(pppppppbStack_6b8 + 1);
        func_0x00010028af84(auStack_548,&pppppbStack_620);
        pppppppbVar27 = pppppppbStack_6c8;
        FUN_10736f7ec(&ppppppbStack_3f0,puVar14 + 0x4f);
        puVar14 = &uStack_3d8;
        FUN_107374494(puVar14,auStack_580);
        puStack_5e8 = (undefined8 *)0x0;
        func_0x0001073797ec();
        *puVar14 = &PTR_FUN_1109a6510;
        pppppppbVar39 = (byte *******)(puVar14 + 1);
        puVar14[2] = uStack_3e8;
        *pppppppbVar39 = ppppppbStack_3f0;
        ppppppbStack_3f0 = (byte ******)0x0;
        uStack_3e8 = 0;
        puVar14[3] = uStack_3e0;
        func_0x000107374a60(puVar14 + 4,&uStack_3d8);
        puVar14[9] = uStack_3b0;
        puVar14[8] = uStack_3b8;
        *(undefined4 *)(puVar14 + 10) = uStack_3a8;
        func_0x00010028af84(puVar14 + 0xb,auStack_3a0);
        puStack_5e8 = puVar14;
        func_0x000107292e94(unaff_x24,&uStack_600);
        param_3 = puStack_6d0;
        func_0x000107283e00(&uStack_600);
        FUN_107374cc0(&ppppppbStack_3f0);
        func_0x000107374ce0(auStack_580);
        FUN_107374678(&pppppppbStack_640);
        unaff_x25 = pppppppbVar28;
      }
    }
    func_0x0001001148fc(&pppppbStack_620);
    param_4 = puStack_6b0;
  }
  ppppppbStack_3f0 = (byte ******)*param_4;
  *param_4 = 0;
  uStack_3d0 = 0;
  ppppppbVar10 = (byte ******)&ppppppbStack_3f0;
  FUN_107371ca0(pppppppbVar27[3],ppppppbVar10,param_3);
  ppppppbVar29 = (byte ******)&ppppppbStack_3f0;
  FUN_107371e08();
  func_0x000107378dfc(uStack_260);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107283e00(&uStack_600);
  FUN_107374cc0(&ppppppbStack_3f0);
  func_0x000107374ce0(auStack_580);
  FUN_107374678(&pppppppbStack_640);
  pppppbVar11 = (byte *****)&pppppbStack_620;
  func_0x0001001148fc();
  func_0x000107378fd8();
  pcStack_6d8 = FUN_10737191c;
  pppppbVar12 = pppppbVar11;
  pppppppbStack_730 = unaff_x28;
  pppppppbStack_728 = unaff_x27;
  pppppppbStack_720 = unaff_x26;
  pppppppbStack_718 = unaff_x25;
  pppppppbStack_710 = unaff_x24;
  pppppppbStack_708 = pppppppbVar39;
  puStack_700 = puVar14;
  puStack_6f8 = param_4;
  ppppppbStack_6f0 = ppppppbVar29;
  puStack_6e8 = param_3;
  ppuStack_6e0 = &puStack_1e0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppppbVar41 = *ppppppbVar10;
  func_0x000107379464(auStack_7a0,0x108,*(byte *)pppppppbVar32);
  func_0x0001072bbe40(auStack_7a0,&DAT_10f2f1bff,pppppppbVar26);
  auStack_820[0] = 1;
  uStack_818 = 0;
  ppppbStack_7b0 = *pppppbVar11;
  uStack_7a8 = 3;
  func_0x00010737955c();
  FUN_10743fa9c();
  func_0x000107379464(auStack_820,0x10d,*(byte *)pppppppbVar32);
  ppppbStack_7b0 = (byte ****)CONCAT44(ppppbStack_7b0._4_4_,uVar19);
  uStack_7a8 = 1;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_820,0x10c,*(byte *)pppppppbVar32);
  uStack_7a8 = 3;
  ppppbStack_7b0 = (byte ****)puVar20;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_820,0x10a,*(byte *)pppppppbVar32);
  func_0x0001072bbe40(auStack_820,&DAT_10f2f1bff,pppppppbVar26);
  func_0x0001073793d0((long)pppppbVar12 - (long)pppppbVar41);
  uStack_7a8 = 3;
  func_0x00010737955c();
  FUN_10743f9dc();
  func_0x000107379594();
  func_0x000107262330(auStack_7a0);
  return;
}



/* Entry: 1073712e4; end: 10737191b;  */

void FUN_1073712e4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  long *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar15;
  ulong uVar16;
  int extraout_w10;
  long *plVar17;
  long lVar18;
  undefined8 unaff_x24;
  ulong uVar19;
  undefined8 *unaff_x25;
  undefined **unaff_x26;
  long *plVar20;
  undefined **unaff_x27;
  undefined *unaff_x28;
  byte bVar21;
  uint6 uVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar23;
  byte bVar29;
  undefined4 auStack_650 [2];
  undefined4 uStack_648;
  long lStack_5e0;
  undefined4 uStack_5d8;
  undefined1 auStack_5d0 [112];
  undefined *puStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  undefined8 *puStack_530;
  long *plStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined1 *puStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *aplStack_4a8 [2];
  undefined *puStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  long alStack_480 [2];
  undefined *puStack_470;
  long lStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3c0;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [24];
  undefined8 *puStack_390;
  long lStack_388;
  undefined4 uStack_380;
  undefined1 auStack_378 [344];
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [320];
  undefined8 uStack_90;
  
  puVar6 = param_1;
  puVar13 = param_4;
  plVar12 = param_5;
  func_0x000107378e90();
  puVar6 = puVar6 + 0x18;
  uStack_90 = extraout_x8;
  FUN_107373da4(puVar6,0);
  uVar14 = SUB84(plVar12,0);
  if (puVar6 != (undefined8 *)0x0) {
    plStack_4d8 = (long *)*param_2;
    plStack_4e8 = param_5;
    plStack_4e0 = param_2;
    func_0x000100060b18(&lStack_220,&PTR_DAT_1109a64d0);
    uStack_448 = uStack_218;
    lStack_450 = lStack_220;
    uStack_440 = uStack_210;
    uStack_210 = 0;
    lStack_220 = 0;
    uStack_218 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_220);
    uVar14 = SUB84(plVar12,0);
    uStack_438 = 1;
    if (param_1[0x3e] != 0) {
      puVar6 = param_1 + 0x18;
      FUN_107373da4(puVar6,0);
      uVar14 = SUB84(plVar12,0);
      if (puVar6 != (undefined8 *)0x0) {
        puStack_470 = &UNK_10e52b660;
        lStack_468 = 0;
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_500 = param_3;
        puStack_4f8 = param_4;
        puStack_4f0 = param_1;
        (**(code **)(*plStack_4d8 + 0x20))(alStack_480);
        plVar17 = (long *)(alStack_480[0] + 0x10);
        while( true ) {
          uVar14 = SUB84(plVar12,0);
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) break;
          puStack_498 = (undefined *)0x0;
          ppuStack_490 = (undefined **)0x0;
          uStack_488 = 0;
          (**(code **)(*plStack_4d8 + 0x18))(aplStack_4a8,plStack_4d8,plVar17 + 2);
          plVar20 = (long *)0x0;
          while( true ) {
            plVar11 = aplStack_4a8[0];
            func_0x000107379244();
            (*extraout_x8_00)();
            if (plVar11 <= plVar20) break;
            (**(code **)(*aplStack_4a8[0] + 0x18))(&uStack_4c0,aplStack_4a8[0],plVar20);
            func_0x000107751284(auStack_3b0);
            lStack_4c8 = lStack_4b8;
            uStack_4d0 = uStack_4c0;
            if (lStack_4b8 != 0) {
              do {
                func_0x000107378f58();
              } while (extraout_w10 != 0);
            }
            uStack_430 = uStack_430 & 0xffffffffffffff00;
            uStack_3c0 = 0;
            func_0x000107751444(auStack_3b0,&uStack_4d0,&uStack_430);
            func_0x000107751334(&lStack_220,auStack_3b0);
            func_0x000107267e8c(&uStack_430);
            func_0x000107267e44(&uStack_4d0);
            func_0x000107267da8(auStack_3b0);
            uStack_3f0 = 0;
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
            puStack_418 = (undefined8 *)0x0;
            uStack_420 = 0;
            func_0x000107753050(auStack_3b0,puVar6[3],&lStack_220,&uStack_430);
            puVar7 = auStack_3b0;
            FUN_1073405dc();
            iVar1 = *(int *)(puVar7 + 0x68);
            bVar2 = puVar7[8];
            func_0x00010727f7f8(auStack_3a8);
            func_0x00010724b3d8(&uStack_430);
            if ((iVar1 == 1) && ((bVar2 & 1) != 0)) {
              FUN_107373e44(&puStack_498,&uStack_4c0);
            }
            func_0x000107267da8(&lStack_220);
            FUN_107330fdc(&uStack_4c0);
            plVar20 = (long *)((long)plVar20 + 1);
          }
          Hint_Prefetch(puStack_470,0,2,0);
          uVar16 = (ulong)(plVar17 + 2);
          func_0x000104c2fe38(puStack_470);
          uVar5 = uStack_460;
          unaff_x28 = puStack_470;
          lVar18 = 0;
          uVar15 = (ulong)puStack_470 >> 0xc ^ uVar16 >> 7;
          bVar2 = (byte)uVar16;
          uVar22 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)
                                                                        )))) & 0x7f7f7f7f7f7f;
          while( true ) {
            uVar15 = uVar15 & uVar5;
            uVar23 = *(undefined8 *)(unaff_x28 + uVar15);
            cVar24 = (char)((ulong)uVar23 >> 8);
            cVar25 = (char)((ulong)uVar23 >> 0x10);
            cVar26 = (char)((ulong)uVar23 >> 0x18);
            cVar27 = (char)((ulong)uVar23 >> 0x20);
            cVar28 = (char)((ulong)uVar23 >> 0x28);
            bVar21 = (byte)((ulong)uVar23 >> 0x30);
            bVar29 = (byte)((ulong)uVar23 >> 0x38);
            for (uVar19 = CONCAT17(-(bVar29 == (bVar2 & 0x7f)),
                                   CONCAT16(-(bVar21 == (bVar2 & 0x7f)),
                                            CONCAT15(-(cVar28 == (char)(uVar22 >> 0x28)),
                                                     CONCAT14(-(cVar27 == (char)(uVar22 >> 0x20)),
                                                              CONCAT13(-(cVar26 ==
                                                                        (char)(uVar22 >> 0x18)),
                                                                       CONCAT12(-(cVar25 ==
                                                                                 (char)(uVar22 >>
                                                                                       0x10)),
                                                                                CONCAT11(-(cVar24 ==
                                                                                          (char)(
                                                  uVar22 >> 8)),-((char)uVar23 == (char)uVar22))))))
                                           )) & 0x8080808080808080; uVar19 != 0;
                uVar19 = uVar19 - 1 & uVar19) {
              uVar8 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              unaff_x27 = (undefined **)
                          (uVar15 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar5);
              uVar8 = lStack_468 + (long)unaff_x27 * 0x50;
              func_0x000104c32db4(uVar8,plVar17 + 2);
              if ((uVar8 & 1) != 0) goto LAB_1073715c8;
            }
            bVar21 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                         CONCAT16(-(bVar21 == 0x80),
                                                  CONCAT15(-(cVar28 == -0x80),
                                                           CONCAT14(-(cVar27 == -0x80),
                                                                    CONCAT13(-(cVar26 == -0x80),
                                                                             CONCAT12(-(cVar25 ==
                                                                                       -0x80),
                                                  CONCAT11(-(cVar24 == -0x80),
                                                           -((char)uVar23 == -0x80)))))))),1);
            if ((bVar21 & 1) != 0) break;
            lVar18 = lVar18 + 8;
            uVar15 = lVar18 + uVar15;
          }
          unaff_x27 = &puStack_470;
          func_0x00010737410c(unaff_x27,uVar16);
          lVar18 = lStack_468 + (long)unaff_x27 * 0x50;
          func_0x000104c2fe00(lVar18,plVar17 + 2);
          *(undefined8 *)(lVar18 + 0x38) = 0;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
LAB_1073715c8:
          ppuVar4 = ppuStack_490;
          puVar10 = puStack_498;
          lVar18 = lStack_468 + (long)unaff_x27 * 0x50;
          unaff_x26 = (undefined **)(lVar18 + 0x38);
          in_ZR = unaff_x26 == &puStack_498;
          if (!(bool)in_ZR) {
            uVar16 = (long)ppuStack_490 - (long)puStack_498;
            uVar15 = *(long *)(lVar18 + 0x48) - (long)*unaff_x26;
            in_ZR = uVar16 == uVar15;
            unaff_x28 = puVar10;
            unaff_x27 = ppuVar4;
            if (uVar15 < uVar16) {
              FUN_1073742ec(unaff_x26);
              ppuVar9 = unaff_x26;
              FUN_107373f5c(unaff_x26,(long)uVar16 >> 4);
              func_0x000107374324(unaff_x26,ppuVar9);
            }
            else {
              uVar15 = *(long *)(lVar18 + 0x40) - (long)*unaff_x26;
              in_ZR = uVar16 == uVar15;
              if (uVar16 <= uVar15) {
                FUN_10737435c(puStack_498,ppuStack_490);
                func_0x0001073743f8(unaff_x26,puVar10);
                goto LAB_107371678;
              }
              FUN_10737435c(puStack_498,puStack_498 + uVar15);
              puVar10 = puVar10 + uVar15;
            }
            func_0x0001073742a8(unaff_x26,puVar10,ppuVar4);
          }
LAB_107371678:
          func_0x000107331000(aplStack_4a8);
          FUN_107374434(&puStack_498);
        }
        func_0x000107283194(alStack_480);
        puVar3 = puStack_4f0;
        unaff_x24 = puStack_4f0[0x3e];
        FUN_1073744e0(auStack_3b0,&puStack_470);
        lStack_388 = *plStack_4e8;
        puStack_390 = puVar3;
        uStack_380 = (undefined4)plStack_4e8[1];
        func_0x00010028af84(auStack_378,&lStack_450);
        param_4 = puStack_4f8;
        FUN_10736f7ec(&lStack_220,puVar3 + 0x4f);
        param_1 = &uStack_208;
        FUN_107374494(param_1,auStack_3b0);
        puStack_418 = (undefined8 *)0x0;
        func_0x0001073797ec();
        *param_1 = &PTR_FUN_1109a6510;
        param_5 = param_1 + 1;
        param_1[2] = uStack_218;
        *param_5 = lStack_220;
        lStack_220 = 0;
        uStack_218 = 0;
        param_1[3] = uStack_210;
        func_0x000107374a60(param_1 + 4,&uStack_208);
        param_1[9] = uStack_1e0;
        param_1[8] = uStack_1e8;
        *(undefined4 *)(param_1 + 10) = uStack_1d8;
        func_0x00010028af84(param_1 + 0xb,auStack_1d0);
        puStack_418 = param_1;
        func_0x000107292e94(unaff_x24,&uStack_430);
        param_3 = uStack_500;
        func_0x000107283e00(&uStack_430);
        FUN_107374cc0(&lStack_220);
        func_0x000107374ce0(auStack_3b0);
        FUN_107374678(&puStack_470);
        unaff_x25 = puVar6;
      }
    }
    func_0x0001001148fc(&lStack_450);
    param_2 = plStack_4e0;
  }
  lStack_220 = *param_2;
  *param_2 = 0;
  uStack_200 = 0;
  plVar12 = &lStack_220;
  FUN_107371ca0(*(undefined8 *)(param_4 + 0x18),plVar12,param_3);
  plVar17 = &lStack_220;
  FUN_107371e08();
  func_0x000107378dfc(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107283e00(&uStack_430);
  FUN_107374cc0(&lStack_220);
  func_0x000107374ce0(auStack_3b0);
  FUN_107374678(&puStack_470);
  plVar20 = &lStack_450;
  func_0x0001001148fc();
  func_0x000107378fd8();
  pcStack_508 = FUN_10737191c;
  plVar11 = plVar20;
  puStack_560 = unaff_x28;
  ppuStack_558 = unaff_x27;
  ppuStack_550 = unaff_x26;
  puStack_548 = unaff_x25;
  uStack_540 = unaff_x24;
  plStack_538 = param_5;
  puStack_530 = param_1;
  plStack_528 = param_2;
  plStack_520 = plVar17;
  uStack_518 = param_3;
  puStack_510 = &stack0xfffffffffffffff0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar18 = *plVar12;
  func_0x000107379464(auStack_5d0,0x108,*puVar13);
  func_0x0001072bbe40(auStack_5d0,&DAT_10f2f1bff,param_7);
  auStack_650[0] = 1;
  uStack_648 = 0;
  lStack_5e0 = *plVar20;
  uStack_5d8 = 3;
  func_0x00010737955c();
  FUN_10743fa9c();
  func_0x000107379464(auStack_650,0x10d,*puVar13);
  lStack_5e0 = CONCAT44(lStack_5e0._4_4_,uVar14);
  uStack_5d8 = 1;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_650,0x10c,*puVar13);
  uStack_5d8 = 3;
  lStack_5e0 = param_6;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_650,0x10a,*puVar13);
  func_0x0001072bbe40(auStack_650,&DAT_10f2f1bff,param_7);
  func_0x0001073793d0((long)plVar11 - lVar18);
  uStack_5d8 = 3;
  func_0x00010737955c();
  FUN_10743f9dc();
  func_0x000107379594();
  func_0x000107262330(auStack_5d0);
  return;
}



/* Entry: 10737191c; end: 107371acb;  */

void FUN_10737191c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 auStack_150 [2];
  undefined4 uStack_148;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [112];
  
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = *param_2;
  func_0x000107379464(auStack_d0,0x108,*param_4);
  func_0x0001072bbe40(auStack_d0,&DAT_10f2f1bff,param_7);
  auStack_150[0] = 1;
  uStack_148 = 0;
  uStack_e0 = *param_1;
  uStack_d8 = 3;
  func_0x00010737955c();
  FUN_10743fa9c();
  func_0x000107379464(auStack_150,0x10d,*param_4);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,param_5);
  uStack_d8 = 1;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_150,0x10c,*param_4);
  uStack_d8 = 3;
  uStack_e0 = param_6;
  func_0x0001073792bc();
  func_0x000107379594();
  func_0x000107379464(auStack_150,0x10a,*param_4);
  func_0x0001072bbe40(auStack_150,&DAT_10f2f1bff,param_7);
  func_0x0001073793d0((long)puVar1 - lVar2);
  uStack_d8 = 3;
  func_0x00010737955c();
  FUN_10743f9dc();
  func_0x000107379594();
  func_0x000107262330(auStack_d0);
  return;
}



/* Entry: 107371acc; end: 107371af7;  */

undefined1  [16] FUN_107371acc(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((ushort)param_1[4] != 0) {
    uVar1 = *param_1 / (uint)(ushort)param_1[4];
  }
  auVar2._8_8_ = (ulong)*param_1 & 0xffff | 0x1010000000000;
  auVar2._0_8_ = *(double *)(param_1 + 2) * (double)uVar1;
  return auVar2;
}



/* Entry: 107371af8; end: 107371bc3;  */

undefined4 * FUN_107371af8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [24];
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 auStack_70 [14];
  undefined8 uStack_38;
  
  puVar3 = auStack_70;
  puVar2 = auStack_70;
  puVar1 = param_1;
  func_0x000107378e90();
  *puVar1 = param_2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined ***)(puVar1 + 8) = &PTR_DAT_110996720;
  *(undefined8 *)(puVar1 + 10) = 0;
  puVar1[0x10] = param_2;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  uStack_38 = extraout_x8;
  func_0x0001072df7b4();
  func_0x000107379198(auStack_70);
  pcVar4 = "source";
  FUN_107371bc4(puVar1,"source",auStack_70);
  func_0x000104c2f714();
  func_0x000107378dfc(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  func_0x000107262330(param_1);
  func_0x000107378fd8();
  pcStack_78 = FUN_107371bc4;
  puStack_90 = puVar2;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107379688();
  func_0x00010002b838();
  func_0x000107264c5c(puVar3);
  func_0x00010729d62c(param_1 + 8,auStack_a8,puVar3,pcVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



/* Entry: 107371bc4; end: 107371c23;  */

void FUN_107371bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x000107379688();
  func_0x00010002b838();
  func_0x000107264c5c(param_3);
  func_0x00010729d62c(unaff_x19 + 0x20,auStack_38,param_3,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 107371c24; end: 107371c2b;  */

void FUN_107371c24(void)

{
  return;
}



/* Entry: 107371c2c; end: 107371c4b;  */

void FUN_107371c2c(undefined8 *param_1)

{
  func_0x0001073792f0();
  *param_1 = &PTR_FUN_1109a6400;
  return;
}



/* Entry: 107371c4c; end: 107371c6b;  */

void FUN_107371c4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a6400;
  return;
}



/* Entry: 107371c6c; end: 107371c93;  */

void FUN_107371c6c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6460);
  func_0x000107378e80();
  return;
}



/* Entry: 107371c94; end: 107371c9f;  */

undefined ** FUN_107371c94(void)

{
  return &PTR_DAT_1109a6460;
}


