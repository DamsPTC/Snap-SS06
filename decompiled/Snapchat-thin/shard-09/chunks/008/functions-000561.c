/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072653fc; end: 10726544f;  */

void FUN_1072653fc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107274b5c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107265450; end: 107265573;  */

void FUN_107265450(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar4;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar5;
  long *plVar6;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else {
    plVar6 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      func_0x000107275774();
      plVar6 = plVar2;
    }
  }
  uVar1 = (long *)param_1[1] <= plVar6;
  if (!(bool)uVar1 || plVar6 == (long *)param_1[1]) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107274568((float)(ulong)param_1[3],(int)param_1[4]);
    if (((bool)uVar1) && (func_0x000107274be4(), extraout_x8_01 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107275314();
    if ((bool)uVar1) {
      return;
    }
    if (plVar6 == (long *)0x0) {
      FUN_107265574(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    __Znwm((long)plVar6 << 3);
    func_0x0001001686b8();
    FUN_107265574();
    func_0x0001001686dc();
    plVar2 = extraout_x9;
    while (uVar1 = plVar6 == plVar2, !(bool)uVar1) {
      func_0x0001001686ec();
      plVar2 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar2 = extraout_x9_01;
      while (*plVar2 != 0) {
        func_0x000107274bf0();
        lVar3 = extraout_x8;
        plVar2 = extraout_x12;
        plVar4 = extraout_x11;
        if ((bool)uVar1) {
          plVar5 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar5 = extraout_x13;
          if (plVar6 <= extraout_x13) {
            func_0x000107274bd8();
            lVar3 = extraout_x8_00;
            plVar4 = extraout_x11_00;
            plVar2 = extraout_x12_00;
            plVar5 = extraout_x13_00;
          }
        }
        uVar1 = plVar5 == plVar4;
        if (!(bool)uVar1) {
          if (*(long *)(lVar3 + (long)plVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar2 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar2 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar2;
  *plVar2 = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107265574; end: 10726558b;  */

void FUN_107265574(long *param_1,long param_2)

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



/* Entry: 10726558c; end: 107265687;  */

void FUN_10726558c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      func_0x0001072656f4(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 107265688; end: 1072656cb;  */

void FUN_107265688(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1072656cc; end: 10726578b;  */

void FUN_1072656cc(long param_1)

{
  func_0x0001072756d4();
  func_0x000107265424(param_1 + 0x38);
  return;
}



/* Entry: 10726578c; end: 107265807;  */

void FUN_10726578c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_1072639d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x250,unaff_x20 + 0x250);
  FUN_107263384(unaff_x19 + 0x268,unaff_x20 + 0x268);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x2b8,unaff_x20 + 0x2b8);
  *(undefined4 *)(unaff_x19 + 0x2d0) = *(undefined4 *)(unaff_x20 + 0x2d0);
  return;
}



/* Entry: 107265808; end: 10726581f;  */

void FUN_107265808(long *param_1,long param_2)

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



/* Entry: 107265820; end: 10726594b;  */

void FUN_107265820(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001072747cc();
  FUN_107262f3c();
  func_0x000107263328(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
  func_0x0001002a969c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x0001006072c8(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  uVar1 = *(undefined1 *)(unaff_x20 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
  *(undefined1 *)(unaff_x19 + 0xe8) = uVar1;
  FUN_10726594c(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  func_0x0001002a969c(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x0001002a969c(unaff_x19 + 0x150,unaff_x20 + 0x150);
  func_0x0001002a969c(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x0001072758f0();
  func_0x0001072659a4();
  func_0x0001002a969c(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  func_0x000107274f04();
  func_0x0001072658ec(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  func_0x00010726591c(unaff_x19 + 0x200,unaff_x20 + 0x200);
  func_0x0001072758dc();
  FUN_107266478();
  func_0x000107275354();
  return;
}



/* Entry: 10726594c; end: 107265973;  */

void FUN_10726594c(long param_1,long param_2)

{
  char cVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000104c2f714();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    func_0x000104c2fe00();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001072747d8();
    func_0x000107262f84();
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
    return;
  }
  return;
}



/* Entry: 107265974; end: 1072659d7;  */

void FUN_107265974(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104c2f714();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 1072659d8; end: 107265a83;  */

void FUN_1072659d8(long param_1)

{
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar1;
  
  func_0x00010727498c();
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_107265a84();
    for (; (plVar1 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(unaff_x21 + 2);
      plVar1 = (long *)*plVar1;
      func_0x000107274f4c();
      FUN_107265ab4();
    }
    func_0x000107274f4c();
    func_0x000107263fc0();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_107265aec(param_1,unaff_x21 + 2);
  }
  return;
}



/* Entry: 107265a84; end: 107265ab3;  */

long FUN_107265a84(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 107265ab4; end: 107265aeb;  */

void FUN_107265ab4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001072747d8();
  *(ulong *)(unaff_x19 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  FUN_107265b3c();
  func_0x000107274d28();
  FUN_107265c78();
  return;
}



/* Entry: 107265aec; end: 107265b3b;  */

undefined8 FUN_107265aec(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_107265eb4(auStack_38);
  FUN_107265ab4(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  FUN_107263f64(auStack_38);
  return param_1;
}



/* Entry: 107265b3c; end: 107265c77;  */

long * FUN_107265b3c(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = (float)(param_1[3] + 1);
  fVar13 = *(float *)(param_1 + 4);
  uVar6 = 0;
  if ((param_1[1] == 0) ||
     (func_0x000107274958(fVar12,fVar13,(float)(ulong)param_1[1]), uVar6 = extraout_x8, (bool)in_NG)
     ) {
    uVar5 = 1;
    if (2 < uVar6) {
      uVar5 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar5 = uVar5 | uVar6 << 1;
    if (uVar5 <= (ulong)(long)(fVar12 / fVar13)) {
      uVar5 = (long)(fVar12 / fVar13);
    }
    FUN_107265d4c(param_1,uVar5);
    uVar6 = param_1[1];
  }
  uVar5 = uVar6 - 1;
  if ((uVar6 & uVar5) == 0) {
    uVar7 = uVar5 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar6 <= param_2) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = param_2 / uVar6;
      }
      uVar7 = param_2 - uVar7 * uVar6;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar6 & uVar5) == 0) {
        uVar11 = uVar10 & uVar5;
      }
      else {
        uVar11 = uVar10;
        if (uVar6 <= uVar10) {
          uVar11 = 0;
          if (uVar6 != 0) {
            uVar11 = uVar10 / uVar6;
          }
          uVar11 = uVar10 - uVar11 * uVar6;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 107265c78; end: 107265d4b;  */

void FUN_107265c78(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 107265d4c; end: 107265dc7;  */

void FUN_107265d4c(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar3;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar4;
  long *extraout_x9_03;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar6;
  long *plVar7;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY) {
      func_0x00010727419c();
      if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
        func_0x0001072740fc();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010727462c();
      if (!(bool)in_CY) goto LAB_107265d84;
    }
    return;
  }
LAB_107265d84:
  func_0x0001001685d4();
  if (param_2 == 0) {
    FUN_107263d68(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107263d80();
    func_0x0001001686b8();
    FUN_107263d68();
    func_0x0001001686dc();
    lVar2 = extraout_x8_00;
    uVar5 = extraout_x9;
    while (unaff_x19 != uVar5) {
      func_0x0001001686ec();
      lVar2 = extraout_x8_01;
      uVar5 = extraout_x9_00;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar5 = plVar3[1];
      if ((unaff_x19 & unaff_x19 - 1) == 0) {
        uVar5 = uVar5 & unaff_x19 - 1;
        uVar1 = true;
      }
      else {
        uVar1 = uVar5 == unaff_x19;
        if (unaff_x19 <= uVar5) {
          uVar6 = 0;
          if (unaff_x19 != 0) {
            uVar6 = uVar5 / unaff_x19;
          }
          uVar5 = uVar5 - uVar6 * unaff_x19;
        }
      }
      *(long **)(lVar2 + uVar5 * 8) = (long *)(param_1 + 0x10);
      while (*plVar3 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8_02;
        plVar3 = extraout_x12;
        puVar4 = extraout_x9_01;
        uVar5 = extraout_x11;
        if ((bool)uVar1) {
          uVar6 = extraout_x13 & extraout_x10;
        }
        else {
          uVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_03;
            puVar4 = extraout_x9_02;
            uVar5 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            uVar6 = extraout_x13_00;
          }
        }
        uVar1 = uVar6 == uVar5;
        if (!(bool)uVar1) {
          plVar7 = plVar3;
          if (*(long *)(lVar2 + uVar6 * 8) == 0) {
            func_0x000107274bcc();
            plVar3 = extraout_x12_01;
          }
          else {
            do {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) break;
              uVar1 = (int)plVar3[2] == (int)plVar7[2];
            } while ((bool)uVar1);
            *puVar4 = plVar7;
            func_0x0001072753e0();
            plVar3 = extraout_x9_03;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107265dc8; end: 107265eb3;  */

void FUN_107265dc8(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar3;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar4;
  long *extraout_x9_03;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar6;
  long *plVar7;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107263d68(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107263d80();
    func_0x0001001686b8();
    FUN_107263d68();
    func_0x0001001686dc();
    lVar2 = extraout_x8;
    uVar5 = extraout_x9;
    while (unaff_x19 != uVar5) {
      func_0x0001001686ec();
      lVar2 = extraout_x8_00;
      uVar5 = extraout_x9_00;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar5 = plVar3[1];
      if ((unaff_x19 & unaff_x19 - 1) == 0) {
        uVar5 = uVar5 & unaff_x19 - 1;
        uVar1 = true;
      }
      else {
        uVar1 = uVar5 == unaff_x19;
        if (unaff_x19 <= uVar5) {
          uVar6 = 0;
          if (unaff_x19 != 0) {
            uVar6 = uVar5 / unaff_x19;
          }
          uVar5 = uVar5 - uVar6 * unaff_x19;
        }
      }
      *(long **)(lVar2 + uVar5 * 8) = (long *)(param_1 + 0x10);
      while (*plVar3 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8_01;
        plVar3 = extraout_x12;
        puVar4 = extraout_x9_01;
        uVar5 = extraout_x11;
        if ((bool)uVar1) {
          uVar6 = extraout_x13 & extraout_x10;
        }
        else {
          uVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_02;
            puVar4 = extraout_x9_02;
            uVar5 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            uVar6 = extraout_x13_00;
          }
        }
        uVar1 = uVar6 == uVar5;
        if (!(bool)uVar1) {
          plVar7 = plVar3;
          if (*(long *)(lVar2 + uVar6 * 8) == 0) {
            func_0x000107274bcc();
            plVar3 = extraout_x12_01;
          }
          else {
            do {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) break;
              uVar1 = (int)plVar3[2] == (int)plVar7[2];
            } while ((bool)uVar1);
            *puVar4 = plVar7;
            func_0x0001072753e0();
            plVar3 = extraout_x9_03;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107265eb4; end: 107265ef3;  */

void FUN_107265eb4(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = param_2 + 2;
  func_0x000107274cb4();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  uVar2 = *param_3;
  *(uint *)(param_2 + 2) = uVar2;
  *param_2 = 0;
  param_2[1] = (ulong)uVar2;
  return;
}



/* Entry: 107265ef4; end: 107265f03;  */

void FUN_107265ef4(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x38;
  uVar2 = uVar1;
  func_0x000107274f8c();
  if ((ulong)((extraout_x8 - *param_1) / 0x38) < uVar2) {
    param_2 = unaff_x19;
    FUN_107265fcc();
    func_0x000107274b34();
    FUN_107265ffc();
    func_0x000107275500();
    FUN_107264058();
    func_0x000107274f4c();
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8) - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x38)) {
      func_0x000107275288();
      func_0x000107266054();
      lVar3 = unaff_x19;
      func_0x0001072747d8();
      lVar3 = *(long *)(lVar3 + 8);
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x38;
        func_0x0001072642e8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000107266054(param_2,param_2 + lVar3);
    func_0x000107275874();
    func_0x00010727547c();
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x000107264100();
  *(long *)(unaff_x19 + 8) = param_2;
  return;
}



/* Entry: 107265f04; end: 107265fcb;  */

void FUN_107265f04(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  uVar1 = param_4;
  func_0x000107274f8c();
  if ((ulong)((extraout_x8 - *param_1) / 0x38) < uVar1) {
    param_2 = unaff_x19;
    FUN_107265fcc();
    func_0x000107274b34();
    FUN_107265ffc();
    func_0x000107275500();
    FUN_107264058();
    func_0x000107274f4c();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 8) - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x38)) {
      func_0x000107275288();
      func_0x000107266054();
      lVar2 = unaff_x19;
      func_0x0001072747d8();
      lVar2 = *(long *)(lVar2 + 8);
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x38;
        func_0x0001072642e8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000107266054(param_2,param_2 + lVar2);
    func_0x000107275874();
    func_0x00010727547c();
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x000107264100();
  *(long *)(unaff_x19 + 8) = param_2;
  return;
}



/* Entry: 107265fcc; end: 107265ffb;  */

void FUN_107265fcc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10726435c();
    func_0x000107275150();
    func_0x000107274c78();
  }
  return;
}



/* Entry: 107265ffc; end: 107266077;  */

long * FUN_107265ffc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x492492492492492 < param_2) {
    FUN_1072640b4();
    func_0x00010727527c();
    FUN_107266078();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    plVar2 = (long *)0x492492492492492;
  }
  return plVar2;
}



/* Entry: 107266078; end: 1072660bf;  */

void FUN_107266078(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010727498c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107274b74();
    FUN_1072660c0();
  }
  func_0x000107274d28();
  return;
}



/* Entry: 1072660c0; end: 1072660eb;  */

void FUN_1072660c0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  FUN_1072660ec(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 1072660ec; end: 10726613f;  */

void FUN_1072660ec(long param_1,long param_2)

{
  bool bVar1;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x18) != -1 || *(int *)(param_2 + 0x18) != -1) {
    bVar1 = *(int *)(param_2 + 0x18) == -1;
    if (bVar1) {
      func_0x0001072753a4(param_1,param_1,param_2);
      if (!bVar1) {
        func_0x0001072745a8((&PTR_FUN_110995e30)[extraout_x8]);
      }
      *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
      return;
    }
    func_0x000107274ed8();
  }
  return;
}



/* Entry: 107266140; end: 10726614f;  */

void FUN_107266140(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x18) != 0) {
    func_0x000107274a44();
    FUN_107266178();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_2,param_3);
  return;
}



/* Entry: 107266150; end: 107266177;  */

void FUN_107266150(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x000107274a44();
    FUN_107266178();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_2,param_3);
  return;
}



/* Entry: 107266178; end: 1072661a7;  */

void FUN_107266178(void)

{
  func_0x000107274f58();
  func_0x000107274c54();
  FUN_1072661a8();
  func_0x000107274984();
  return;
}



/* Entry: 1072661a8; end: 1072661df;  */

void FUN_1072661a8(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072747d8();
  FUN_10726422c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  func_0x000107274c78();
  *(undefined4 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 1072661e0; end: 1072661e7;  */

void FUN_1072661e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x18) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,param_3);
    return;
  }
  func_0x000107274a44();
  FUN_107266214();
  return;
}



/* Entry: 1072661e8; end: 107266213;  */

void FUN_1072661e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x18) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,param_3);
    return;
  }
  func_0x000107274a44();
  FUN_107266214();
  return;
}



/* Entry: 107266214; end: 107266243;  */

void FUN_107266214(void)

{
  func_0x000107274f58();
  func_0x000107274c54();
  FUN_107266244();
  func_0x000107274984();
  return;
}



/* Entry: 107266244; end: 10726627f;  */

void FUN_107266244(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072747d8();
  FUN_10726422c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  func_0x000107274c78();
  *(undefined4 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 107266280; end: 10726628f;  */

void FUN_107266280(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x58;
  uVar2 = uVar1;
  func_0x000107274f8c();
  if ((ulong)((extraout_x8 - *param_1) / 0x58) < uVar2) {
    param_2 = unaff_x19;
    FUN_107266358();
    func_0x000107274b34();
    FUN_107266388();
    func_0x000107275500();
    FUN_107264408();
    func_0x000107274f4c();
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8) - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x58)) {
      func_0x000107275288();
      func_0x0001072663e0();
      lVar3 = unaff_x19;
      func_0x0001072747d8();
      lVar3 = *(long *)(lVar3 + 8);
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x58;
        func_0x0001072645e8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x0001072663e0(param_2,param_2 + lVar3);
    func_0x000107275874();
    func_0x00010727547c();
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x0001072644d0();
  *(long *)(unaff_x19 + 8) = param_2;
  return;
}



/* Entry: 107266290; end: 107266357;  */

void FUN_107266290(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  uVar1 = param_4;
  func_0x000107274f8c();
  if ((ulong)((extraout_x8 - *param_1) / 0x58) < uVar1) {
    param_2 = unaff_x19;
    FUN_107266358();
    func_0x000107274b34();
    FUN_107266388();
    func_0x000107275500();
    FUN_107264408();
    func_0x000107274f4c();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 8) - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x58)) {
      func_0x000107275288();
      func_0x0001072663e0();
      lVar2 = unaff_x19;
      func_0x0001072747d8();
      lVar2 = *(long *)(lVar2 + 8);
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x58;
        func_0x0001072645e8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x0001072663e0(param_2,param_2 + lVar2);
    func_0x000107275874();
    func_0x00010727547c();
  }
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x0001072644d0();
  *(long *)(unaff_x19 + 8) = param_2;
  return;
}



/* Entry: 107266358; end: 107266387;  */

void FUN_107266358(long *param_1)

{
  if (*param_1 != 0) {
    FUN_107264660();
    func_0x000107275150();
    func_0x000107274c78();
  }
  return;
}



/* Entry: 107266388; end: 107266403;  */

long * FUN_107266388(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
    FUN_107264474();
    func_0x00010727527c();
    FUN_107266404();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    plVar2 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar2;
}



/* Entry: 107266404; end: 10726644b;  */

void FUN_107266404(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010727498c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x58) {
    func_0x000107274b74();
    FUN_10726644c();
  }
  func_0x000107274d28();
  return;
}



/* Entry: 10726644c; end: 107266477;  */

void FUN_10726644c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  FUN_1072660c0();
  func_0x0001002a969c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 107266478; end: 10726649f;  */

void FUN_107266478(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_1072646fc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001072747d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 1072664a0; end: 1072664c7;  */

void FUN_1072664a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072664c8; end: 1072664eb;  */

void FUN_1072664c8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1072664ec; end: 1072668e7;  */

undefined1 *
FUN_1072664ec(undefined1 *param_1,undefined1 *param_2,long param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong unaff_x27;
  undefined1 auStack_5e0 [12];
  undefined1 uStack_5d4;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 auStack_5b0 [152];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined4 uStack_4f0;
  undefined1 auStack_4e8 [56];
  undefined1 auStack_4b0 [96];
  undefined1 auStack_450 [24];
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined4 uStack_428;
  undefined1 auStack_420 [240];
  undefined1 auStack_330 [200];
  undefined1 uStack_268;
  undefined1 auStack_228 [136];
  undefined1 auStack_1a0 [400];
  undefined8 uStack_10;
  
  func_0x0001072754a0();
  puVar5 = param_1;
  puVar10 = param_2;
  lVar11 = param_7;
  func_0x000107274388();
  uStack_10 = extraout_x8;
  func_0x0001072759a8();
  do {
    bVar4 = param_1 == param_2;
    if (bVar4) {
      func_0x00010727416c(uStack_10);
      if (bVar4) {
        return puVar5;
      }
      ___stack_chk_fail();
      FUN_107267da8(auStack_1a0);
      puVar9 = &uStack_5d0;
      func_0x000107269e3c();
      func_0x00010727477c();
      func_0x000107274aa0();
      *(undefined1 *)(puVar9 + 0x1b) = 0;
      FUN_107266918();
      return puVar5;
    }
    if (*(char *)(param_7 + 0xd8) == '\x01') {
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x000107751284(auStack_330);
      FUN_107295f10(auStack_228,param_5);
      func_0x000107751334(auStack_1a0,auStack_330);
      func_0x0001072757d8();
      lVar13 = param_3;
      FUN_107265214(param_3,param_1);
      if (lVar13 == 0) {
        func_0x0001077b45c0(auStack_330,param_7,auStack_1a0);
        FUN_107269df4(&uStack_5d0,auStack_330);
        func_0x000107269e3c(auStack_330);
      }
      else {
        auStack_5e0[0] = 0;
        uStack_5d4 = 0;
        func_0x0001072756b8(auStack_4e8);
        FUN_10726ec14(auStack_4b0,param_1 + 0x38);
        func_0x000107269c3c(auStack_450,&uStack_5d0);
        uStack_438 = *(undefined8 *)(param_1 + 0x98);
        uStack_430 = param_1[0xa0];
        uStack_428 = 0;
        FUN_107269d80(auStack_330,auStack_4e8);
        uStack_268 = 1;
        FUN_107266b1c(auStack_420,lVar13 + 0x48,auStack_5e0,auStack_330,param_6);
        FUN_107269dd4(auStack_330);
        FUN_107269ea4(auStack_4e8);
        func_0x000107751334(auStack_330,auStack_1a0);
        func_0x0001077514d8(auStack_330,auStack_420);
        func_0x0001077b45c0(auStack_4e8,param_7,auStack_330);
        FUN_107269df4(&uStack_5d0,auStack_4e8);
        func_0x000107269e3c(auStack_4e8);
        func_0x0001072757d8();
        func_0x000107269e60(auStack_420);
      }
      func_0x0001072756b8(auStack_5b0);
      func_0x0001072757c0();
      uStack_510 = uStack_5c8;
      uStack_518 = uStack_5d0;
      uStack_508 = uStack_5c0;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      uStack_5d0 = 0;
      uStack_500 = *(undefined8 *)(param_1 + 0x98);
      uStack_4f8 = param_1[0xa0];
      uStack_4f0 = 0;
      FUN_107267da8(auStack_1a0);
      func_0x000107269e3c(&uStack_5d0);
    }
    else {
      func_0x0001072756b8(auStack_5b0);
      func_0x0001072757c0();
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_500 = *(undefined8 *)(param_1 + 0x98);
      uStack_508 = 0;
      uStack_4f8 = param_1[0xa0];
      uStack_4f0 = 0;
    }
    uVar6 = param_4[1];
    if (uVar6 < (ulong)param_4[2]) {
      FUN_107269d80(uVar6,auStack_5b0);
      lVar13 = uVar6 + 200;
    }
    else {
      lVar13 = uVar6 - *param_4;
      uVar6 = lVar13 / 200 + 1;
      if (unaff_x27 < uVar6) {
        FUN_107269e98();
LAB_10726682c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x107266830);
        (*pcVar3)();
      }
      uVar2 = (param_4[2] - *param_4) / 200;
      uVar12 = uVar2 * 2;
      if (uVar12 < uVar6 || uVar12 - uVar6 == 0) {
        uVar12 = uVar6;
      }
      if (0xa3d70a3d70a3d6 < uVar2) {
        uVar12 = unaff_x27;
      }
      if (uVar12 == 0) {
        lVar7 = 0;
      }
      else {
        if (unaff_x27 < uVar12) {
          func_0x000104bd35f4();
          goto LAB_10726682c;
        }
        lVar7 = uVar12 * 200;
        __Znwm();
      }
      unaff_x27 = lVar7 + lVar13;
      FUN_107269d80(unaff_x27,auStack_5b0);
      lVar14 = *param_4;
      lVar1 = param_4[1];
      lVar15 = unaff_x27 + ((lVar1 - lVar14) / -200) * 200;
      lVar8 = lVar15;
      for (lVar13 = lVar14; lVar13 != lVar1; lVar13 = lVar13 + 200) {
        FUN_107269d80(lVar8,lVar13);
        lVar8 = lVar8 + 200;
      }
      for (; lVar14 != lVar1; lVar14 = lVar14 + 200) {
        FUN_107269ea4(lVar14);
      }
      lVar13 = unaff_x27 + 200;
      lVar8 = *param_4;
      *param_4 = lVar15;
      param_4[1] = lVar13;
      param_4[2] = lVar7 + uVar12 * 200;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      func_0x0001072759a8();
      param_7 = lVar11;
      param_2 = puVar10;
    }
    param_4[1] = lVar13;
    puVar5 = auStack_5b0;
    FUN_107269ea4();
    param_1 = param_1 + 0xa8;
  } while( true );
}



/* Entry: 1072668e8; end: 107266917;  */

void FUN_1072668e8(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0xd8) = 0;
  FUN_107266918();
  return;
}



/* Entry: 107266918; end: 10726692b;  */

void FUN_107266918(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    func_0x0001077b3f48();
    *(undefined1 *)(param_1 + 0xd8) = 1;
    return;
  }
  return;
}



/* Entry: 10726692c; end: 107266967;  */

void FUN_10726692c(long param_1)

{
  func_0x0001077b3f48();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 107266968; end: 1072669eb;  */

long FUN_107266968(long param_1)

{
  func_0x00010726699c(param_1 + 0xb0);
  func_0x000107266af0(param_1 + 0x50);
  func_0x00010724b3d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1072669ec; end: 1072669f3;  */

void FUN_1072669ec(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    FUN_107266a30(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072669f4; end: 107266a2f;  */

void FUN_1072669f4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    FUN_107266a30(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107266a30; end: 107266a73;  */

void FUN_107266a30(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110995e60)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 107266a74; end: 107266a83;  */

void FUN_107266a74(void)

{
  return;
}



/* Entry: 107266a84; end: 107266b1b;  */

long FUN_107266a84(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107266b1c; end: 107267da7;  */

undefined1 *
FUN_107266b1c(undefined8 param_1,long param_2,undefined4 *param_3,long param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar9;
  long *plVar10;
  float fVar11;
  undefined1 auStack_c80 [24];
  undefined1 auStack_c68 [24];
  undefined1 auStack_c50 [24];
  undefined1 auStack_c38 [24];
  undefined8 *puStack_c20;
  long lStack_c18;
  undefined8 *puStack_c10;
  long lStack_c08;
  undefined1 auStack_c00 [24];
  undefined1 auStack_be8 [24];
  undefined1 auStack_bd0 [24];
  undefined1 auStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined1 auStack_b70 [16];
  undefined8 uStack_b60;
  undefined8 *puStack_b58;
  long lStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined4 uStack_b38;
  undefined8 uStack_b30;
  undefined1 auStack_b20 [56];
  undefined1 auStack_ae8 [56];
  undefined1 auStack_ab0 [56];
  undefined1 auStack_a78 [56];
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined1 auStack_a00 [56];
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [56];
  undefined1 auStack_958 [56];
  undefined1 auStack_920 [56];
  ulong auStack_8e8 [7];
  undefined1 auStack_8b0 [56];
  undefined1 auStack_878 [56];
  ulong auStack_840 [7];
  undefined1 auStack_808 [56];
  undefined8 uStack_7d0;
  undefined8 *puStack_7c8;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 auStack_7b0 [4];
  undefined4 uStack_790;
  double dStack_788;
  undefined1 auStack_758 [120];
  undefined1 auStack_6e0 [48];
  long lStack_6b0;
  undefined1 auStack_398 [120];
  undefined1 auStack_320 [120];
  undefined1 auStack_2a8 [56];
  undefined1 auStack_270 [304];
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [120];
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_18;
  
  func_0x0001072754a0();
  func_0x000107274388();
  uStack_18 = extraout_x8;
  func_0x000107274868();
  FUN_107267fa4(&uStack_7d0,&uStack_b60,param_2 + 0x250);
  func_0x000100060964(&uStack_50,"lat");
  FUN_107267fe4(auStack_758,&uStack_50,param_2 + 0x98);
  func_0x000100060964(auStack_808,"lng");
  FUN_107267fe4(auStack_6e0,auStack_808,param_2 + 0x90);
  func_0x000100060964(&uStack_7d0,auStack_840,&DAT_10f3500b4);
  func_0x00010727525c();
  func_0x000100060964(&uStack_7d0,auStack_878,&UNK_10f406a3c);
  func_0x00010727525c();
  func_0x000100060964(&uStack_7d0,auStack_8b0,&UNK_10f406a1e);
  func_0x00010727525c();
  func_0x000100060964(auStack_8e8,&UNK_10f406a5b);
  func_0x000107275264();
  func_0x000100060964(auStack_920,&UNK_10f406a69);
  func_0x000107275264();
  func_0x000100060964(&uStack_7d0,auStack_958,&DAT_10f68f148);
  func_0x00010727525c();
  func_0x000100060964(auStack_990,&DAT_10f3500df);
  func_0x000107268034(auStack_398,auStack_990,param_2 + 0x88);
  func_0x000100060964(auStack_9c8,&DAT_10f406a73);
  func_0x000107268034(auStack_320,auStack_9c8,param_2 + 0x1d8);
  func_0x000100060964(auStack_a00,&UNK_10f406a84);
  uVar3 = *(int *)(param_2 + 0x2d0) - 1;
  if (uVar3 < 6) {
    pcVar8 = (&PTR_DAT_1109968c8)[uVar3];
  }
  else {
    pcVar8 = "";
  }
  func_0x00010002b838(&uStack_b88,pcVar8);
  func_0x000104c318bc(auStack_2a8,auStack_a00);
  uStack_a38 = uStack_b80;
  uStack_a40 = uStack_b88;
  uStack_a30 = uStack_b78;
  uStack_b80 = 0;
  uStack_b78 = 0;
  uStack_b88 = 0;
  FUN_107268798(auStack_270,&uStack_a40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a40);
  func_0x000100060964(&uStack_a40,&DAT_10f406a95);
  func_0x000107275264();
  func_0x000100060964(auStack_a78,&DAT_10f406abc);
  func_0x000107275264();
  func_0x000100060964(auStack_ab0,&DAT_10f6389e8);
  func_0x000104c318bc(auStack_140,auStack_ab0);
  func_0x00010724ae4c(auStack_108,"bitmoji");
  func_0x000100060964(auStack_ae8,"priority");
  func_0x00010726805c(auStack_c8,auStack_ae8,param_2 + 0x218);
  func_0x000107268084(auStack_b70,&uStack_7d0,0x10);
  lVar9 = 0x708;
  do {
    FUN_1072684c8((long)&uStack_7d0 + lVar9);
    lVar9 = lVar9 + -0x78;
  } while (lVar9 != -0x78);
  func_0x000104c2f714(auStack_ae8);
  func_0x000107275224();
  func_0x000104c2f714(auStack_a78);
  func_0x000104c2f714(&uStack_a40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b88);
  func_0x000104c2f714(auStack_a00);
  func_0x000104c2f714(auStack_9c8);
  func_0x000104c2f714(auStack_990);
  func_0x000104c2f714(auStack_958);
  func_0x000104c2f714(auStack_920);
  func_0x000104c2f714(auStack_8e8);
  func_0x000104c2f714(auStack_8b0);
  func_0x000104c2f714(auStack_878);
  func_0x000104c2f714(auStack_840);
  func_0x000104c2f714(auStack_808);
  func_0x000107274c38();
  func_0x000107274784();
  puVar5 = auStack_b70;
  FUN_107267ef0();
  if (*(char *)(param_5 + 0x38) == '\x01') {
    FUN_10725ffc4(param_5);
    lVar9 = param_2;
    func_0x000104c32db4(param_2,param_5);
    uStack_7d0 = (undefined **)CONCAT44(uStack_7d0._4_4_,6);
    puStack_7c8 = (undefined8 *)CONCAT71(puStack_7c8._1_7_,(char)lVar9);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
  }
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    lVar9 = param_2 + 0x1b8;
    func_0x00010549026c(lVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_ba0,lVar9);
    FUN_107268798(&uStack_7d0,auStack_ba0);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ba0);
  }
  if (*(char *)(param_2 + 0x128) == '\x01') {
    lVar9 = param_2 + 0xf0;
    FUN_10725ffc4(lVar9);
    func_0x000104c2fe00(auStack_b20,lVar9);
    func_0x000104c33004(&uStack_7d0,auStack_b20);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    func_0x000104c2f714(auStack_b20);
  }
  if (*(char *)(param_2 + 0x148) == '\x01') {
    lVar9 = param_2 + 0x130;
    func_0x00010549026c(lVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_bb8,lVar9);
    FUN_107268798(&uStack_7d0,auStack_bb8);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bb8);
  }
  if (*(char *)(param_2 + 0x168) == '\x01') {
    lVar9 = param_2 + 0x150;
    func_0x00010549026c(lVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_bd0,lVar9);
    FUN_107268798(&uStack_7d0,auStack_bd0);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bd0);
  }
  if (*(char *)(param_2 + 0x240) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_be8,param_2 + 0x220);
    FUN_107268798(&uStack_7d0,auStack_be8);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_be8);
    uStack_7d0 = (undefined **)CONCAT44(uStack_7d0._4_4_,6);
    puStack_7c8 = (undefined8 *)CONCAT71(puStack_7c8._1_7_,*(undefined1 *)(param_2 + 0x238));
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
  }
  if (*(char *)(param_4 + 200) == '\x01') {
    func_0x000107275074();
    func_0x000107275344(*(undefined4 *)(param_4 + 0xc0));
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    func_0x000107275074();
    FUN_107267f50(auStack_c00,*(undefined4 *)(param_4 + 0x90));
    FUN_107268798(&uStack_7d0,auStack_c00);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c00);
    func_0x000107275074();
    if (*(char *)(param_4 + 0xb8) == '\x01') {
      func_0x000107275074();
      puVar6 = (undefined8 *)(param_4 + 0xb0);
      FUN_107267f8c();
      func_0x000107275344(*puVar6);
      func_0x000107274868();
      func_0x00010727435c();
      func_0x000107274860();
      func_0x000107274784();
      func_0x00010727478c();
    }
    func_0x000107275074();
    iVar2 = *(int *)(param_4 + 0x90);
    if (iVar2 == 2) {
      func_0x000107274bc4(*(undefined8 *)(param_4 + 0x60),&uStack_50);
      func_0x000107274dc0();
      func_0x000107274868();
      func_0x00010727435c();
      func_0x000107274860();
      func_0x000107274784();
      func_0x00010727478c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
      if (*(uint *)(param_4 + 0x70) < 0x10) {
        pcVar8 = (&PTR_s_unknown_110996910)[*(uint *)(param_4 + 0x70)];
      }
      else {
        pcVar8 = "";
      }
      func_0x00010002b838(auStack_808,pcVar8);
      func_0x000107274db4();
      func_0x000107274868();
      func_0x00010727435c();
      func_0x000107274860();
      func_0x000107274784();
      func_0x00010727478c();
      func_0x00010727578c();
      func_0x000107274bc4(*(undefined8 *)(param_4 + 0x58),auStack_840);
      func_0x000107275594();
      func_0x000107274868();
      func_0x00010727435c();
      func_0x000107274860();
      func_0x000107274784();
      func_0x00010727478c();
      puVar7 = auStack_840;
    }
    else {
      if (iVar2 == 1) {
        func_0x000107274bc4(*(undefined8 *)(param_4 + 0x48),auStack_808);
        func_0x000107274db4();
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        func_0x00010727578c();
        FUN_1072687e8(&uStack_b60,*(undefined8 *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x68));
        func_0x000104c33004(&uStack_7d0,&uStack_b60);
        func_0x000100060964(&uStack_50,&DAT_10f34ee03);
        func_0x0001072747e4();
        func_0x000107274860();
        func_0x000107274c38();
        func_0x00010727478c();
        func_0x000107274784();
        goto LAB_107267478;
      }
      if (iVar2 == 0) {
        uVar3 = *(int *)(param_4 + 0x38) - 1;
        if (uVar3 < 3) {
          pcVar8 = (&PTR_DAT_1109968f8)[uVar3];
        }
        else {
          pcVar8 = "";
        }
        func_0x00010002b838(&uStack_50,pcVar8);
        func_0x000107274dc0();
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        puVar7 = &uStack_50;
      }
      else {
        func_0x000107274bc4(*(undefined8 *)(param_4 + 0x50),&uStack_50);
        func_0x000107274dc0();
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
        func_0x000107275344(*(undefined8 *)(param_4 + 0x70));
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        FUN_107268b98(auStack_808,*(undefined4 *)(param_4 + 0x78));
        func_0x000107274db4();
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        func_0x00010727578c();
        FUN_107268b98(auStack_840,*(undefined4 *)(param_4 + 0x7c));
        func_0x000107275594();
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_840);
        func_0x000107274bc4(*(undefined8 *)(param_4 + 0x58),auStack_878);
        FUN_107268798(&uStack_7d0,auStack_878);
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_878);
        func_0x000107274bc4(*(undefined8 *)(param_4 + 0x60),auStack_8b0);
        FUN_107268798(&uStack_7d0,auStack_8b0);
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8b0);
        func_0x000107274bc4(*(undefined8 *)(param_4 + 0x68),auStack_8e8);
        FUN_107268798(&uStack_7d0,auStack_8e8);
        func_0x000107274868();
        func_0x00010727435c();
        func_0x000107274860();
        func_0x000107274784();
        func_0x00010727478c();
        puVar7 = auStack_8e8;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
  }
LAB_107267478:
  if (*(char *)(param_3 + 3) == '\x01') {
    fVar11 = (float)param_3[1];
    func_0x00010727580c(*param_3);
    dStack_788 = (double)fVar11;
    uStack_790 = extraout_w8;
    func_0x000107275668(&puStack_c10);
    uStack_b60 = (undefined **)((ulong)uStack_b60._4_4_ << 0x20);
    lStack_b50 = lStack_c08;
    puStack_b58 = puStack_c10;
    puStack_c10 = (undefined8 *)0x0;
    lStack_c08 = 0;
    func_0x0001072751e0();
    func_0x0001072747e4();
    func_0x000104c3302c();
    func_0x000107274c38();
    func_0x0001072752a4();
    func_0x000104c33108(&puStack_c10);
    lVar9 = 0x40;
    do {
      func_0x000104c3323c((long)&uStack_7d0 + lVar9);
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != -0x40);
    func_0x00010727580c(param_3[2]);
    func_0x000107274868();
    func_0x00010727435c();
  }
  else {
    uStack_7d0 = (undefined **)CONCAT44(uStack_7d0._4_4_,4);
    puStack_7c8 = (undefined8 *)0x0;
    uStack_790 = 4;
    dStack_788 = 0.0;
    func_0x000107275668(&puStack_c20);
    uStack_b60 = (undefined **)((ulong)uStack_b60._4_4_ << 0x20);
    lStack_b50 = lStack_c18;
    puStack_b58 = puStack_c20;
    puStack_c20 = (undefined8 *)0x0;
    lStack_c18 = 0;
    func_0x0001072751e0();
    func_0x0001072747e4();
    func_0x000104c3302c();
    func_0x000107274c38();
    func_0x0001072752a4();
    func_0x000104c33108(&puStack_c20);
    lVar9 = 0x40;
    do {
      func_0x000104c3323c((long)&uStack_7d0 + lVar9);
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != -0x40);
    uStack_7d0 = (undefined **)CONCAT44(uStack_7d0._4_4_,4);
    puStack_7c8 = (undefined8 *)0x0;
    func_0x000107274868();
    func_0x00010727435c();
  }
  func_0x000107274860();
  func_0x000107274784();
  func_0x00010727478c();
  lVar9 = *(long *)(param_2 + 0x200);
  if ((lVar9 != *(long *)(param_2 + 0x208)) && (*(int *)(lVar9 + 0x30) == 1)) {
    lVar9 = lVar9 + 0x18;
    FUN_107269148(lVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c38,lVar9);
    FUN_107268798(&uStack_7d0,auStack_c38);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c50,*(undefined8 *)(param_2 + 0x200));
    FUN_107268798(&uStack_7d0,auStack_c50);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c50);
    if (*(char *)(*(long *)(param_2 + 0x200) + 0x50) == '\x01') {
      lVar9 = *(long *)(param_2 + 0x200) + 0x38;
      func_0x00010549026c(lVar9);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c68,lVar9);
      FUN_107268798(&uStack_7d0,auStack_c68);
      func_0x000107274868();
      func_0x00010727435c();
      func_0x000107274860();
      func_0x000107274784();
      func_0x00010727478c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c68);
    }
  }
  lVar9 = *(long *)(param_2 + 0x1e8);
  uVar4 = lVar9 == *(long *)(param_2 + 0x1f0);
  if ((!(bool)uVar4) && (uVar4 = *(int *)(lVar9 + 0x30) == 1, (bool)uVar4)) {
    lVar9 = lVar9 + 0x18;
    FUN_107269148(lVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c80,lVar9);
    FUN_107268798(&uStack_7d0,auStack_c80);
    func_0x000107274868();
    func_0x00010727435c();
    func_0x000107274860();
    func_0x000107274784();
    func_0x00010727478c();
    func_0x000107275210();
  }
  plVar10 = (long *)(param_2 + 0x1a0);
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    uStack_50 = (ulong)*(uint *)(plVar10 + 2);
    uStack_48 = 0;
    uStack_7b8 = 0x100;
    lStack_7c0 = 0;
    uStack_7d0 = &PTR_FUN_1109965d0;
    lStack_6b0 = 0;
    puStack_7c8 = auStack_7b0;
    func_0x00010727569c(&uStack_7d0,&UNK_10f406b8f,0x16,2,&uStack_50);
    uVar1 = lStack_7c0 + lStack_6b0;
    uVar4 = uVar1 == 0x25;
    if (uVar1 < 0x26) {
      uStack_7d0 = (undefined **)
                   (CONCAT62((int6)((ulong)uStack_7d0 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
      *(undefined1 *)((long)&uStack_7d0 + 2 + uVar1) = 0;
      FUN_10726918c(&UNK_10f406b8f,0x16,*(undefined4 *)(plVar10 + 2),(long)&uStack_7d0 + 2,0x26);
      puStack_b58 = puStack_7c8;
      uStack_b60 = uStack_7d0;
      uStack_b48 = uStack_7b8;
      lStack_b50 = lStack_7c0;
      uStack_b40 = auStack_7b0[0];
      uStack_b38 = 1;
      uStack_b30 = 0xffffffffffffffff;
    }
    else {
      uVar4 = uVar1 == 0x51;
      if (uVar1 < 0x52) {
        func_0x0001072757cc(&uStack_7d0);
        *(short *)uStack_7d0 = (short)uVar1;
        *(undefined1 *)((long)uStack_7d0 + uVar1 + 2) = 0;
        FUN_10726918c(&UNK_10f406b8f,0x16,*(undefined4 *)(plVar10 + 2),
                      (undefined2 *)((long)uStack_7d0 + 2),0x52);
        puStack_b58 = puStack_7c8;
        uStack_b60 = uStack_7d0;
        if (puStack_7c8 != (undefined8 *)0x0) {
          do {
            func_0x000107274880();
          } while (extraout_w10 != 0);
        }
        uStack_b38 = 2;
        uStack_b30 = 0xffffffffffffffff;
        func_0x000104c2f784(&uStack_7d0);
      }
      else {
        uStack_50 = (ulong)*(uint *)(plVar10 + 2);
        uStack_48 = 0;
        func_0x0001003a9204(&uStack_7d0,&UNK_10f406b8f,0x16,2,&uStack_50);
        FUN_1072625b4(&uStack_b60,&uStack_7d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_7d0);
      }
    }
    uStack_7d0 = (undefined **)CONCAT44(uStack_7d0._4_4_,6);
    puStack_7c8 = (undefined8 *)CONCAT71(puStack_7c8._1_7_,1);
    func_0x000107269164(puVar5,&uStack_b60);
    func_0x000107274860();
    func_0x00010727478c();
    func_0x000107274784();
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,6);
  uStack_40 = *(undefined8 *)(param_2 + 0x98);
  uStack_48 = *(undefined8 *)(param_2 + 0x90);
  FUN_107269228(&uStack_b60);
  FUN_10726924c(&uStack_7d0,&uStack_50,auStack_b70,&uStack_b60);
  FUN_1072692d4(param_1,&uStack_7d0);
  FUN_107269394(&uStack_7d0);
  func_0x000104c319e0(&uStack_b60);
  func_0x000104c3365c(&uStack_50);
  puVar5 = auStack_b70;
  func_0x000104c335c0(puVar5);
  func_0x00010727416c(uStack_18);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001072743e0();
    func_0x00010727478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8e8);
    puVar5 = auStack_b70;
    func_0x000104c335c0(puVar5);
    func_0x00010727477c();
    FUN_107267df4(puVar5 + 0x178);
    func_0x00010724b3d8(puVar5 + 0x128);
    func_0x000107267e68(puVar5 + 0x118);
    FUN_10726b264(puVar5 + 0x108);
    FUN_107267e8c(puVar5 + 0x60);
    FUN_107267ed0(puVar5 + 8);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 107267da8; end: 107267df3;  */

long FUN_107267da8(long param_1)

{
  FUN_107267df4(param_1 + 0x178);
  func_0x00010724b3d8(param_1 + 0x128);
  func_0x000107267e68(param_1 + 0x118);
  FUN_10726b264(param_1 + 0x108);
  FUN_107267e8c(param_1 + 0x60);
  FUN_107267ed0(param_1 + 8);
  return param_1;
}



/* Entry: 107267df4; end: 107267e37;  */

void FUN_107267df4(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110995e78)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107267e38; end: 107267e43;  */

void FUN_107267e38(undefined8 param_1,long param_2)

{
  func_0x000107274970();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107267e44; end: 107267e8b;  */

void FUN_107267e44(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107267e8c; end: 107267eab;  */

void FUN_107267e8c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_107267eac();
  }
  return;
}



/* Entry: 107267eac; end: 107267ecf;  */

void FUN_107267eac(void)

{
  func_0x000107274b80();
  func_0x000104c2f714();
  func_0x000107274878();
  return;
}



/* Entry: 107267ed0; end: 107267eef;  */

void FUN_107267ed0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 107267ef0; end: 107267f0f;  */

undefined8 FUN_107267ef0(undefined8 *param_1)

{
  func_0x0001072684ec();
  return *param_1;
}



/* Entry: 107267f10; end: 107267f4f;  */

long FUN_107267f10(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_107268744(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 107267f50; end: 107267f8b;  */

void FUN_107267f50(undefined8 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "travel";
  if (param_2 != 2) {
    pcVar1 = "now_playing";
  }
  if (param_2 == 1) {
    pcVar1 = "story";
  }
  pcVar2 = "chat";
  if (param_2 != 0) {
    pcVar2 = pcVar1;
  }
  func_0x00010002b82c(param_1,pcVar2);
  func_0x000107c613d0(pcVar2);
  func_0x000107c60c50();
  return;
}



/* Entry: 107267f8c; end: 107267fa3;  */

void FUN_107267f8c(long param_1)

{
  long unaff_x19;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010014ae40();
  func_0x000104c318bc();
  func_0x000107275600();
  FUN_107268798(unaff_x19 + 0x38,auStack_48);
  func_0x000107274984();
  return;
}



/* Entry: 107267fa4; end: 107267fe3;  */

void FUN_107267fa4(void)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010014ae40();
  func_0x000104c318bc();
  func_0x000107275600();
  FUN_107268798(unaff_x19 + 0x38,auStack_38);
  func_0x000107274984();
  return;
}



/* Entry: 107267fe4; end: 1072680a3;  */

void FUN_107267fe4(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x000107274eb4();
  uVar1 = *unaff_x19;
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 1072680a4; end: 107268103;  */

void FUN_1072680a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [32];
  
  FUN_107268104(auStack_40,param_3,param_4,0,&uStack_41,&uStack_42,&uStack_43);
  func_0x000104c33288(param_1,param_2,auStack_40);
  func_0x000104c33548(auStack_40);
  return;
}



/* Entry: 107268104; end: 10726810f;  */

undefined8
FUN_107268104(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010727498c(param_1,param_2,param_2 + param_3 * 0x78);
  if (param_4 == 0) {
    if (unaff_x20 - unaff_x21 == 0x348) {
      param_4 = 8;
    }
    else {
      param_4 = (unaff_x20 - unaff_x21) / 0x78;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_107268194(param_1,param_4,param_5,param_6,param_7);
  FUN_1072681bc();
  return param_1;
}



/* Entry: 107268110; end: 107268193;  */

undefined8
FUN_107268110(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010727498c();
  if (param_4 == 0) {
    if (unaff_x20 - unaff_x21 == 0x348) {
      param_4 = 8;
    }
    else {
      param_4 = (unaff_x20 - unaff_x21) / 0x78;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_107268194(param_1,param_4,param_5,param_6,param_7);
  FUN_1072681bc();
  return param_1;
}



/* Entry: 107268194; end: 1072681bb;  */

void FUN_107268194(undefined8 param_1,long param_2)

{
  func_0x000107275560();
  if (param_2 != 0) {
    func_0x000107275410();
    func_0x000104c32974();
  }
  return;
}



/* Entry: 1072681bc; end: 1072681f7;  */

void FUN_1072681bc(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107274670();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x78) {
    func_0x000107275250(auStack_48);
    FUN_1072681f8();
  }
  return;
}



/* Entry: 1072681f8; end: 107268217;  */

void FUN_1072681f8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107268218(&uStack_18);
  return;
}



/* Entry: 107268218; end: 10726821f;  */

void FUN_107268218(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_107268250(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 107268220; end: 10726824f;  */

void FUN_107268220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_107268250(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 107268250; end: 1072682cb;  */

void FUN_107268250(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x000104c32bd8();
  if ((param_3 & 1) != 0) {
    FUN_1072682cc(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x78;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1072682cc; end: 1072682f3;  */

void FUN_1072682cc(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_107268318(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1072682f4; end: 107268317;  */

void FUN_1072682f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_107268318(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107268318; end: 10726834f;  */

void FUN_107268318(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010014ae40();
  func_0x000104c2fe00();
  FUN_107268350(param_1 + 0x38,*unaff_x20);
  return;
}



/* Entry: 107268350; end: 10726836f;  */

void FUN_107268350(void)

{
  func_0x00010727473c();
  FUN_107268370();
  return;
}



/* Entry: 107268370; end: 1072683ff;  */

void FUN_107268370(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    *(undefined1 *)param_3 = *(undefined1 *)param_2;
    return;
  }
  if ((param_1 == 5) || (param_1 == 4)) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 == 3) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      func_0x0001072752cc(param_3);
      FUN_107268420();
    }
    else {
      if (param_1 != 0) {
        return;
      }
      func_0x0001072752cc(param_3);
      FUN_107268484();
    }
    return;
  }
  func_0x0001000d03a8(param_3);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107268400; end: 10726841f;  */

void FUN_107268400(void)

{
  func_0x0001072752cc();
  FUN_107268420();
  return;
}



/* Entry: 107268420; end: 107268463;  */

void FUN_107268420(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 107268464; end: 107268483;  */

void FUN_107268464(void)

{
  func_0x0001072752cc();
  FUN_107268484();
  return;
}



/* Entry: 107268484; end: 1072684c7;  */

void FUN_107268484(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1072684c8; end: 107268553;  */

void FUN_1072684c8(void)

{
  func_0x000107274b80();
  func_0x000104c3323c();
  func_0x000107274878();
  return;
}



/* Entry: 107268554; end: 10726856f;  */

void FUN_107268554(void)

{
  func_0x00010727527c();
  FUN_107268570();
  return;
}



/* Entry: 107268570; end: 1072685d3;  */

undefined8 * FUN_107268570(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  func_0x000104c333b4();
  FUN_1072685d4(puStack_30,param_2);
  func_0x00010727428c();
  func_0x000104c3344c();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  func_0x000104c3344c();
  func_0x00010727477c();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1107eb160;
  puStack_30[1] = 0;
  FUN_107268614(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 1072685d4; end: 107268613;  */

undefined8 * FUN_1072685d4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107eb160;
  param_1[1] = 0;
  FUN_107268614(param_1 + 3);
  return param_1;
}



/* Entry: 107268614; end: 107268647;  */

void FUN_107268614(long param_1)

{
  func_0x00010726862c();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107268648; end: 1072686ff;  */

void FUN_107268648(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000100168718();
  FUN_107268194();
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x0001001685d4();
    func_0x000104c32780();
    func_0x000104c2dd8c();
    lStack_40 = param_2;
    while (lStack_38 = lVar1, lStack_40 != 0) {
      func_0x000104c2fe38(lVar1);
      func_0x000107274f4c();
      func_0x00010ae6c8b4();
      func_0x0001072742a4((uint)lVar1 & 0x7f);
      FUN_107268700();
      func_0x000104c2de10(&lStack_40);
      lVar1 = lStack_38;
    }
    func_0x000107275428();
  }
  return;
}



/* Entry: 107268700; end: 107268713;  */

void FUN_107268700(long param_1,long param_2,undefined8 param_3)

{
  func_0x0001072747cc(*(long *)(param_1 + 8) + param_2 * 0x78,param_3);
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_107268350();
  return;
}



/* Entry: 107268714; end: 107268743;  */

void FUN_107268714(void)

{
  func_0x0001072747cc();
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_107268350();
  return;
}



/* Entry: 107268744; end: 10726877b;  */

void FUN_107268744(undefined8 param_1,ulong param_2)

{
  func_0x000107275180();
  if ((param_2 & 1) != 0) {
    func_0x00010727582c();
    FUN_10726877c();
  }
  func_0x000107275190();
  return;
}



/* Entry: 10726877c; end: 107268797;  */

void FUN_10726877c(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x38) = 7;
  return;
}



/* Entry: 107268798; end: 1072687e7;  */

undefined *** FUN_107268798(undefined ***param_1,ulong param_2,undefined **param_3)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  undefined **ppuVar8;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined1 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  ulong uStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **appuStack_1b0 [32];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_60 [7];
  undefined8 uStack_28;
  
  pppuVar4 = appuStack_60;
  func_0x000107274388();
  uStack_28 = extraout_x8;
  FUN_1072625b4();
  func_0x000107274dd8();
  func_0x000104c33004();
  func_0x000107275054();
  func_0x00010727416c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar7 = param_3;
  func_0x000107274388();
  ppuVar8 = (undefined **)(param_2 & 0xfffffffffffffffc);
  pppuVar6 = (undefined ***)&UNK_10f406c6d;
  puStack_200 = &UNK_10f406c6d;
  uStack_1f8 = 0x13;
  ppuVar5 = ppuVar8;
  ppuStack_220 = ppuVar7;
  uStack_a8 = extraout_x8_00;
  func_0x0001005d466c();
  uStack_1d8 = 0;
  ppuStack_1c8 = appuStack_1b0;
  ppuStack_1b8 = (undefined **)0x100;
  ppuStack_1c0 = (undefined **)0x0;
  uStack_1d0 = &PTR_FUN_1109965d0;
  lStack_b0 = 0;
  ppuStack_1f0 = ppuVar5;
  uStack_1e8 = param_2;
  ppuStack_1e0 = param_3;
  func_0x00010727569c(&uStack_1d0,&UNK_10f406c6d,0x13,0x3d,&ppuStack_1f0);
  uVar1 = (long)ppuStack_1c0 + lStack_b0;
  ppuStack_218 = &puStack_200;
  uVar3 = uVar1 == 0x25;
  ppuStack_210 = ppuVar8;
  if (uVar1 < 0x26) {
    uStack_1d0 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_1d0 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_1d0 + 2 + uVar1) = 0;
    pppuVar6 = &ppuStack_218;
    puStack_208 = (undefined1 *)&ppuStack_220;
    FUN_1072689dc(pppuVar6,(long)&uStack_1d0 + 2,0x26);
    ppuVar8 = ppuStack_1b8;
    ppuVar7 = ppuStack_1c0;
    ppuVar5 = uStack_1d0;
    pppuVar4[1] = (undefined **)ppuStack_1c8;
    *pppuVar4 = ppuVar5;
    pppuVar4[3] = ppuVar8;
    pppuVar4[2] = ppuVar7;
    pppuVar4[4] = appuStack_1b0[0];
    *(undefined4 *)(pppuVar4 + 5) = 1;
    func_0x000107275820();
    pppuVar4 = pppuVar6;
  }
  else {
    uVar3 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      puStack_208 = (undefined1 *)&ppuStack_220;
      func_0x0001072757cc(&uStack_1d0);
      *(short *)uStack_1d0 = (short)uVar1;
      *(undefined1 *)((long)uStack_1d0 + uVar1 + 2) = 0;
      FUN_1072689dc(&ppuStack_218,(undefined2 *)((long)uStack_1d0 + 2),0x52);
      ppuVar2 = ppuStack_1c8;
      ppuVar5 = uStack_1d0;
      pppuVar4[1] = (undefined **)ppuStack_1c8;
      *pppuVar4 = ppuVar5;
      if ((undefined ***)ppuVar2 != (undefined ***)0x0) {
        do {
          func_0x000107274880();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(pppuVar4 + 5) = 2;
      func_0x000107275820();
      pppuVar4 = (undefined ***)&uStack_1d0;
      func_0x000104c2f784(pppuVar4);
    }
    else {
      puStack_208 = (undefined1 *)&ppuStack_220;
      func_0x0001005d466c();
      ppuStack_1c0 = ppuStack_220;
      ppuStack_1b8 = (undefined **)0x0;
      uStack_1d0 = ppuVar8;
      ppuStack_1c8 = pppuVar6;
      func_0x0001003a9204(&ppuStack_1f0,puStack_200,uStack_1f8,0x3d,&uStack_1d0);
      FUN_1072625b4(pppuVar4,&ppuStack_1f0);
      func_0x000107275210();
    }
  }
  func_0x00010727416c(uStack_a8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    pppuVar4 = (undefined ***)&uStack_1d0;
    func_0x000104c2f784();
    func_0x00010727477c();
    if (pppuVar4[2] == (undefined **)0x100) {
      pppuVar4[0x24] = pppuVar4[0x24] + 0x20;
      pppuVar4[2] = (undefined **)0x0;
    }
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 1072687e8; end: 1072689bb;  */

void FUN_1072687e8(undefined8 *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined **ppuVar6;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [32];
  long lStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_3;
  func_0x000107274388();
  ppuVar6 = (undefined **)(param_2 & 0xfffffffffffffffc);
  puVar4 = (undefined8 *)&UNK_10f406c6d;
  puStack_1a0 = &UNK_10f406c6d;
  uStack_198 = 0x13;
  ppuVar3 = ppuVar6;
  lStack_1c0 = lVar5;
  uStack_48 = extraout_x8;
  func_0x0001005d466c();
  uStack_178 = 0;
  puStack_168 = auStack_150;
  uStack_158 = 0x100;
  lStack_160 = 0;
  uStack_170 = &PTR_FUN_1109965d0;
  lStack_50 = 0;
  ppuStack_190 = ppuVar3;
  uStack_188 = param_2;
  lStack_180 = param_3;
  func_0x00010727569c(&uStack_170,&UNK_10f406c6d,0x13,0x3d,&ppuStack_190);
  uVar1 = lStack_160 + lStack_50;
  ppuStack_1b8 = &puStack_1a0;
  uVar2 = uVar1 == 0x25;
  ppuStack_1b0 = ppuVar6;
  if (uVar1 < 0x26) {
    uStack_170 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_170 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_170 + 2 + uVar1) = 0;
    puStack_1a8 = (undefined1 *)&lStack_1c0;
    FUN_1072689dc(&ppuStack_1b8,(long)&uStack_170 + 2,0x26);
    param_1[1] = puStack_168;
    *param_1 = uStack_170;
    param_1[3] = uStack_158;
    param_1[2] = lStack_160;
    param_1[4] = auStack_150[0];
    *(undefined4 *)(param_1 + 5) = 1;
    func_0x000107275820();
  }
  else {
    uVar2 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      puStack_1a8 = (undefined1 *)&lStack_1c0;
      func_0x0001072757cc(&uStack_170);
      *(short *)uStack_170 = (short)uVar1;
      *(undefined1 *)((long)uStack_170 + uVar1 + 2) = 0;
      FUN_1072689dc(&ppuStack_1b8,(undefined2 *)((long)uStack_170 + 2),0x52);
      param_1[1] = puStack_168;
      *param_1 = uStack_170;
      if (puStack_168 != (undefined8 *)0x0) {
        do {
          func_0x000107274880();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(param_1 + 5) = 2;
      func_0x000107275820();
      func_0x000104c2f784(&uStack_170);
    }
    else {
      puStack_1a8 = (undefined1 *)&lStack_1c0;
      func_0x0001005d466c();
      lStack_160 = lStack_1c0;
      uStack_158 = 0;
      uStack_170 = ppuVar6;
      puStack_168 = puVar4;
      func_0x0001003a9204(&ppuStack_190,puStack_1a0,uStack_198,0x3d,&uStack_170);
      FUN_1072625b4(param_1,&ppuStack_190);
      func_0x000107275210();
    }
  }
  func_0x00010727416c(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = &uStack_170;
    func_0x000104c2f784();
    func_0x00010727477c();
    if (puVar4[2] == 0x100) {
      puVar4[0x24] = puVar4[0x24] + 0x100;
      puVar4[2] = 0;
    }
    return;
  }
  return;
}



/* Entry: 1072689bc; end: 1072689db;  */

void FUN_1072689bc(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0x100) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 0x100;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1072689dc; end: 107268a33;  */

void FUN_1072689dc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001005d466c();
  func_0x000107274d28();
  FUN_107268a34();
  *(undefined1 *)(param_2 + lVar1) = 0;
  return;
}


