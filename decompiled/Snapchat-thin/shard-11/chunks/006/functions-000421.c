/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10879b62c; end: 10879b64b;  */

void FUN_10879b62c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10879b64c; end: 10879b6d3;  */

void FUN_10879b64c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a93a58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10879b6d4; end: 10879b6fb;  */

void FUN_10879b6d4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10879b6fc; end: 10879b72b;  */

long * FUN_10879b6fc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10879b72c; end: 10879b75b;  */

long * FUN_10879b72c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10879b75c; end: 10879b7ab;  */

long * FUN_10879b75c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107c27914(lVar1);
    func_0x00010879c05c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10879b7ac; end: 10879b7db;  */

undefined8 FUN_10879b7ac(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10863a098(param_1 + 0x40);
  func_0x000107c27a04(param_1 + 0x28);
  func_0x000107274b50(param_1);
  func_0x00010726f308();
  func_0x000100168718(unaff_x19);
  func_0x00010726f350();
  return unaff_x19;
}



/* Entry: 10879b7dc; end: 10879b827;  */

void FUN_10879b7dc(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = param_2 + 0x18, lVar1 != lVar2) {
    func_0x000107c3194c(param_2,lVar1);
    param_2 = lVar1;
  }
  func_0x000104befd58();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x000100100fec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10879b828; end: 10879b863;  */

void FUN_10879b828(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_DAT_110a93af8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = param_1;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 10879b864; end: 10879b883;  */

void FUN_10879b864(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_108914efc();
  }
  return;
}



/* Entry: 10879b884; end: 10879ba7f;  */

undefined1  [16] FUN_10879b884(long *param_1,uint *param_2,undefined4 *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_NG;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  ulong uVar11;
  undefined8 extraout_x9;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x23;
  undefined1 auVar17 [16];
  
  uVar2 = *param_2;
  uVar16 = (ulong)uVar2;
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar9 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar9) == 0) {
      unaff_x23 = (ulong)(uVar14 - 1 & uVar2);
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar15 - uVar16) < 0;
      unaff_x23 = uVar16;
      if (uVar15 <= uVar16) {
        uVar4 = 0;
        if (uVar14 != 0) {
          uVar4 = uVar2 / uVar14;
        }
        unaff_x23 = (ulong)(uVar2 - uVar4 * uVar14);
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10879b934;
          uVar11 = plVar13[1];
          if (uVar11 != uVar16) break;
          in_NG = (int)(*(uint *)(plVar13 + 2) - uVar2) < 0;
          if (*(uint *)(plVar13 + 2) == uVar2) {
            uVar8 = 0;
            goto LAB_10879ba58;
          }
        }
        if ((uVar15 & uVar9) == 0) {
          uVar11 = uVar11 & uVar9;
        }
        else if (uVar15 <= uVar11) {
          uVar5 = 0;
          if (uVar15 != 0) {
            uVar5 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar5 * uVar15;
        }
        in_NG = (long)(uVar11 - unaff_x23) < 0;
      } while (uVar11 == unaff_x23);
    }
  }
LAB_10879b934:
  uVar3 = *param_3;
  plVar1 = param_1 + 2;
  plVar13 = (long *)0x18;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = uVar16;
  *(undefined4 *)(plVar13 + 2) = uVar3;
  func_0x00010879c10c();
  if ((uVar15 == 0) ||
     (func_0x00010879c12c((float)extraout_x8,(int)param_1[4],(float)uVar15), (bool)in_NG)) {
    bVar6 = 2 < uVar15;
    bVar7 = uVar15 == 3;
    uVar9 = 1;
    if (bVar6) {
      uVar9 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    func_0x00010879c004(uVar9 | uVar15 << 1);
    uVar8 = extraout_x8_00;
    if (!bVar6 || bVar7) {
      uVar8 = extraout_x9;
    }
    func_0x000107271148(param_1,uVar8);
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar15 - 1U & uVar2);
    }
    else {
      unaff_x23 = uVar16;
      if (uVar15 <= uVar16) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar16 / uVar15;
        }
        unaff_x23 = uVar16 - uVar9 * uVar15;
      }
    }
  }
  lVar10 = *param_1;
  plVar12 = *(long **)(lVar10 + unaff_x23 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar13 = *plVar1;
    *plVar1 = (long)plVar13;
    *(long **)(lVar10 + unaff_x23 * 8) = plVar1;
    if (*plVar13 != 0) {
      uVar16 = *(ulong *)(*plVar13 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar16 = uVar16 & uVar15 - 1;
      }
      else if (uVar15 <= uVar16) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar16 / uVar15;
        }
        uVar16 = uVar16 - uVar9 * uVar15;
      }
      *(long **)(lVar10 + uVar16 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar12;
    *plVar12 = (long)plVar13;
  }
  func_0x00010879c10c();
  param_1[3] = extraout_x8_01;
  func_0x00010879c054();
  uVar8 = 1;
LAB_10879ba58:
  auVar17._8_8_ = uVar8;
  auVar17._0_8_ = plVar13;
  return auVar17;
}



/* Entry: 10879ba80; end: 10879bb47;  */

void FUN_10879ba80(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    for (; (plVar3 != (long *)0x0 && (param_2 != param_3)); param_2 = (long *)*param_2) {
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_2 + 2);
      lVar2 = *plVar3;
      FUN_10879bb48(param_1,plVar3);
      plVar3 = (long *)lVar2;
    }
    func_0x00010879c0d0();
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10879bb88(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10879bb48; end: 10879bb87;  */

long FUN_10879bb48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(ulong *)(param_2 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  uVar1 = param_1;
  FUN_10879bc00();
  FUN_10879bd34(param_1,param_2,uVar1);
  return param_2;
}



/* Entry: 10879bb88; end: 10879bbff;  */

undefined8 FUN_10879bb88(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_2;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *(uint *)(puVar2 + 2) = uVar1;
  *puVar2 = 0;
  puVar2[1] = (ulong)uVar1;
  FUN_10879bb48(param_1,puVar2);
  func_0x00010879c054();
  return param_1;
}



/* Entry: 10879bc00; end: 10879bd33;  */

long * FUN_10879bc00(long *param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar7;
  undefined8 extraout_x9;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar7 = 0;
  if ((param_1[1] == 0) ||
     (func_0x00010879c12c((float)(param_1[3] + 1),(int)param_1[4],(float)(ulong)param_1[1]),
     uVar7 = extraout_x8, (bool)in_NG)) {
    bVar3 = 2 < uVar7;
    bVar4 = uVar7 == 3;
    uVar8 = 1;
    if (bVar3) {
      uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    func_0x00010879c004(uVar8 | uVar7 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    FUN_10879be08(param_1,uVar1);
    uVar7 = param_1[1];
  }
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar9 = uVar8 & param_2;
  }
  else {
    uVar9 = param_2;
    if (uVar7 <= param_2) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = param_2 / uVar7;
      }
      uVar9 = param_2 - uVar9 * uVar7;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar6 = plVar10;
      plVar10 = (long *)*plVar6;
      if (plVar10 == (long *)0x0) {
        return plVar6;
      }
      uVar11 = plVar10[1];
      if ((uVar7 & uVar8) == 0) {
        uVar12 = uVar11 & uVar8;
      }
      else {
        uVar12 = uVar11;
        if (uVar7 <= uVar11) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar11 / uVar7;
          }
          uVar12 = uVar11 - uVar12 * uVar7;
        }
      }
      if (uVar12 != uVar9) {
        return plVar6;
      }
      if (uVar11 == param_2) {
        bVar3 = *(int *)(plVar10 + 2) == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  return plVar6;
}



/* Entry: 10879bd34; end: 10879be07;  */

void FUN_10879bd34(long *param_1,long *param_2,long *param_3)

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



/* Entry: 10879be08; end: 10879beaf;  */

void FUN_10879be08(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
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
      func_0x00010879c06c();
      if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010879c014();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar7) goto LAB_10879be50;
    }
    return;
  }
LAB_10879be50:
  if (param_2 == (long *)0x0) {
    func_0x000107271270(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    func_0x000107271288(plVar3);
    func_0x000107271270(param_1,plVar3);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar7 = (long *)plVar3[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar5);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
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
        if (plVar6 != plVar7) {
          plVar7 = plVar3;
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar4;
            plVar7 = plVar6;
          }
          else {
            do {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) break;
            } while (*(int *)(plVar3 + 2) == *(int *)(plVar7 + 2));
            *plVar4 = (long)plVar7;
            func_0x00010879c09c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10879beb0; end: 10879bfbf;  */

void FUN_10879beb0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *extraout_x9;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x11;
  ulong uVar7;
  long *plVar8;
  
  if (param_2 == 0) {
    func_0x000107271270(param_1);
    param_1[1] = 0;
  }
  else {
    plVar4 = param_1 + 1;
    func_0x000107271288(plVar4);
    func_0x000107271270(param_1,plVar4);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar6 = plVar4[1];
      uVar3 = param_2 - 1;
      if ((param_2 & uVar3) == 0) {
        uVar6 = uVar6 & uVar3;
      }
      else if (param_2 <= uVar6) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar7 * param_2;
      }
      *(long **)(lVar2 + uVar6 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar6) {
          plVar8 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar6 = uVar7;
          }
          else {
            do {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) break;
            } while (*(int *)(plVar4 + 2) == *(int *)(plVar8 + 2));
            *plVar5 = (long)plVar8;
            func_0x00010879c09c();
            lVar2 = extraout_x8;
            plVar4 = extraout_x9;
            uVar3 = extraout_x10;
            uVar6 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10879bfc0; end: 10879c137;  */

void FUN_10879bfc0(void)

{
  return;
}



/* Entry: 10879c138; end: 10879c2cf;  */

void FUN_10879c138(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [96];
  char cStack_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  
  func_0x0001086d7ce4(auStack_90);
  ppuVar1 = &PTR_PTR_11326bbc8;
  if (*(undefined ***)(param_1 + 200) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 200);
  }
  uVar2 = param_4;
  FUN_108713a94();
  if ((uStack_80 & 1) == 0) {
    if (((ulong)ppuVar1[2] & 1) != 0) {
      FUN_10879c2d0(uVar2);
      goto LAB_10879c1b0;
    }
  }
  else {
    FUN_10879c2d0(uVar2);
LAB_10879c1b0:
    func_0x00010bcebbbc();
  }
  if ((uStack_80 >> 1 & 1) == 0) {
    if ((*(byte *)(ppuVar1 + 2) >> 1 & 1) == 0) goto LAB_10879c204;
    func_0x00010879c314(uVar2);
  }
  else {
    func_0x00010879c314(uVar2);
  }
  func_0x00010bceb7fc();
LAB_10879c204:
  if ((((*(byte *)(uVar2 + 0x10) & 1) != 0) && (*(char *)(*(long *)(uVar2 + 0x28) + 0x10) == '\x01')
      ) && (uVar2 = param_4, FUN_1086a6978(param_4,param_3,0), (uVar2 & 1) == 0)) {
    func_0x000107c29ee4(auStack_118,param_3);
    FUN_1086a28c8(auStack_f8,auStack_118,param_1);
    func_0x000107c2a2e0(auStack_118);
    if (cStack_98 == '\x01') {
      FUN_1086a9d54(param_4 + 0x18);
      func_0x0001088f65f0();
    }
    FUN_1086a9d34(auStack_f8);
  }
  FUN_1088bbc0c(auStack_90);
  return;
}



/* Entry: 10879c2d0; end: 10879c3a3;  */

void FUN_10879c2d0(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010597110c();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 10879c3a4; end: 10879c3ab;  */

void FUN_10879c3a4(void)

{
  return;
}



/* Entry: 10879c3ac; end: 10879c7c3;  */

void FUN_10879c3ac(long param_1,long param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_54;
  
  FUN_1086a2e08(param_1);
  func_0x000107c29edc(&ppuStack_70,param_2);
  FUN_10879d9ac(param_1);
  func_0x000107c27b9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_70);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  func_0x000108848188();
  iVar6 = 1;
  if (*(int *)(param_2 + 0x208) - 1U < 3) {
    iVar6 = *(int *)(param_2 + 0x208) + 1;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(int *)(param_1 + 0xac) = iVar6;
  if (*(char *)(param_2 + 600) == '\x01') {
    FUN_10879c7c4(param_1);
    func_0x000107c3034c();
  }
  if (*(char *)(param_2 + 0x2a0) == '\x01') {
    if (*(char *)(param_2 + 0x288) == '\x01') {
      lVar11 = param_1;
      FUN_1086eb3c8();
      *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(param_2 + 0x268);
    }
    else {
      lVar11 = param_1;
      if (*(char *)(param_2 + 0x294) == '\x01') {
        func_0x0001086eb578();
        uVar7 = *(uint *)(param_2 + 0x290);
      }
      else {
        if (*(char *)(param_2 + 0x29c) != '\x01') goto LAB_10879c4b0;
        func_0x0001086eb608();
        uVar7 = *(uint *)(param_2 + 0x298);
      }
      if (2 < uVar7) {
        uVar7 = 0x7fffffff;
      }
      *(uint *)(lVar11 + 0x10) = uVar7;
    }
  }
LAB_10879c4b0:
  if (*(int *)(param_2 + 0x18) == 5) {
    lVar11 = param_1;
    FUN_1086eb3c8();
    *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(param_2 + 0x228);
  }
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    lVar12 = *(long *)(param_2 + 0x2b0);
    for (lVar11 = *(long *)(param_2 + 0x2a8); lVar11 != lVar12; lVar11 = lVar11 + 0x18) {
      FUN_108848384(&ppuStack_70,lVar11);
      FUN_10879d9f8(param_1 + 0x30);
      FUN_10879c7d4();
      func_0x000107c2a4cc(&ppuStack_70);
    }
  }
  if (*(char *)(param_2 + 0x338) == '\x01') {
    ppuStack_70 = &PTR_FUN_110a919b0;
    ppuStack_68 = (undefined **)0x0;
    ppuStack_60 = (undefined **)((ulong)ppuStack_60 & 0xffffffff00000000);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
    pppuVar3 = *(undefined ****)(param_1 + 0x90);
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = *(undefined ****)(param_1 + 8);
      if (((ulong)pppuVar3 & 1) != 0) {
        func_0x00010879efcc();
      }
      FUN_10879da04();
      *(undefined ****)(param_1 + 0x90) = pppuVar3;
    }
    if (pppuVar3 != &ppuStack_70) {
      ppuVar5 = pppuVar3[1];
      ppuVar8 = ppuVar5;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar8 = *(undefined ***)((ulong)ppuVar5 & 0xfffffffffffffffe);
      }
      ppuVar9 = ppuStack_68;
      if (((ulong)ppuStack_68 & 1) != 0) {
        ppuVar9 = *(undefined ***)((ulong)ppuStack_68 & 0xfffffffffffffffe);
      }
      if (ppuVar8 == ppuVar9) {
        pppuVar3[1] = ppuStack_68;
        ppuStack_68 = ppuVar5;
      }
      else {
        FUN_10890d518();
      }
    }
    FUN_10890d474(&ppuStack_70);
  }
  if (*(char *)(param_2 + 0x344) == '\x01') {
    iVar6 = (int)param_2 + 0x340;
    FUN_1088472bc();
    *(int *)(param_1 + 0xb0) = iVar6;
  }
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_108847408(&ppuStack_70,param_2 + 0x348);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
    pppuVar3 = *(undefined ****)(param_1 + 0x98);
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = *(undefined ****)(param_1 + 8);
      if (((ulong)pppuVar3 & 1) != 0) {
        func_0x00010879efcc();
      }
      func_0x00010879da48();
      *(undefined ****)(param_1 + 0x98) = pppuVar3;
    }
    if (pppuVar3 != &ppuStack_70) {
      ppuVar5 = pppuVar3[1];
      ppuVar8 = ppuVar5;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar8 = *(undefined ***)((ulong)ppuVar5 & 0xfffffffffffffffe);
      }
      ppuVar9 = ppuStack_68;
      if (((ulong)ppuStack_68 & 1) != 0) {
        ppuVar9 = *(undefined ***)((ulong)ppuStack_68 & 0xfffffffffffffffe);
      }
      if (ppuVar8 == ppuVar9) {
        pppuVar3[1] = ppuStack_68;
        ppuVar8 = pppuVar3[2];
        pppuVar3[2] = ppuStack_60;
        uVar2 = *(undefined4 *)((long)pppuVar3 + 0x1c);
        *(undefined4 *)((long)pppuVar3 + 0x1c) = uStack_54;
        ppuStack_68 = ppuVar5;
        ppuStack_60 = ppuVar8;
        uStack_54 = uVar2;
      }
      else {
        FUN_10890c5d4();
      }
    }
    FUN_10890c3a4(&ppuStack_70);
  }
  if (param_3 != 0) {
    bVar1 = *(byte *)(param_2 + 0x2f0);
    if (bVar1 == 1) {
      func_0x000107c29ee4(&ppuStack_70,param_2 + 0x2c8);
    }
    else {
      FUN_108848684(auStack_88);
      func_0x000107c29ee4(&ppuStack_70,auStack_88);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
    uVar10 = *(ulong *)(param_1 + 0xa0);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) != 0) {
        func_0x00010879efcc();
      }
      func_0x00010879da84();
      *(ulong *)(param_1 + 0xa0) = uVar10;
    }
    *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 1;
    if (*(long *)(uVar10 + 0x18) == 0) {
      uVar4 = *(ulong *)(uVar10 + 8);
      if ((uVar4 & 1) != 0) {
        func_0x00010879efcc();
      }
      func_0x000107c287e0();
      *(ulong *)(uVar10 + 0x18) = uVar4;
    }
    func_0x000107c287d0();
    func_0x000107c2a2e0(&ppuStack_70);
    if ((bVar1 & 1) == 0) {
      func_0x00010879efb8();
    }
  }
  return;
}



/* Entry: 10879c7c4; end: 10879c7d3;  */

void FUN_10879c7c4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010879efcc();
    }
    func_0x000107c29918();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 10879c7d4; end: 10879c837;  */

long FUN_10879c7d4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10890b558(param_1);
    }
    else {
      FUN_10890b528(param_1);
    }
  }
  return param_1;
}



/* Entry: 10879c838; end: 10879c8f3;  */

void FUN_10879c838(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(long *)(param_2 + 0x1f0) == *(long *)(param_2 + 0x1f8)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010528d490(&uStack_50,(*(long *)(param_2 + 0x1f8) - *(long *)(param_2 + 0x1f0)) / 0x18)
    ;
    lVar1 = *(long *)(param_2 + 0x1f8);
    for (lVar2 = *(long *)(param_2 + 0x1f0); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x0001086ce6c8(&uStack_50,lVar2);
    }
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000104bee630(&uStack_50);
  }
  return;
}



/* Entry: 10879c8f4; end: 10879c9f3;  */

void FUN_10879c8f4(int *param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int *piVar2;
  undefined8 auStack_f8 [11];
  byte bStack_a0;
  undefined1 auStack_98 [104];
  
  FUN_1088603b4(auStack_98,*param_3,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x18),
                *(undefined4 *)(param_2 + 0x30));
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3f800000;
  func_0x000107c298f0(auStack_f8,auStack_98);
  while (((bStack_a0 & 1) != 0 && (func_0x00010879f08c(auStack_f8[0]), !(bool)in_ZR))) {
    puVar1 = auStack_f8;
    FUN_108794924(puVar1);
    piVar2 = param_1;
    FUN_10879c9f4(param_1,(long)puVar1 + 0x2c);
    *piVar2 = *piVar2 + 1;
    func_0x000107c2991c(auStack_f8);
  }
  func_0x00010879eef0();
  func_0x000107c298e0();
  func_0x00010879eff0();
  func_0x000107c298ec(auStack_98);
  return;
}



/* Entry: 10879c9f4; end: 10879ca27;  */

long FUN_10879c9f4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10879e044(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x14;
}



/* Entry: 10879ca28; end: 10879cb7b;  */

void FUN_10879ca28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined ***pppuVar1;
  code *extraout_x8;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x1bd;
  func_0x000107c278b8(auStack_98,&UNK_10f4bab91);
  func_0x000108841bf8(param_2);
  pppuVar1 = &ppuStack_80;
  func_0x000107c28824(pppuVar1,auStack_98,param_2);
  func_0x000107c278b8(auStack_b0,&UNK_10f4baba8);
  func_0x000108841bf8(param_1);
  func_0x000107c28824(pppuVar1,auStack_b0,param_1);
  FUN_1087974f8();
  func_0x000107c2884c(auStack_58,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2884c(auStack_d8,auStack_58);
  func_0x00010879efa4(*(undefined8 *)(*param_4 + 0x50));
  (*extraout_x8)();
  func_0x000107c2882c(auStack_d8);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 10879cb7c; end: 10879ccf7;  */

uint FUN_10879cb7c(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  
  uVar10 = 0;
  bVar5 = false;
  uVar8 = 0;
  puVar9 = (uint *)*param_1;
  puVar2 = (uint *)param_1[1];
  bVar11 = 1;
  do {
    if (puVar9 == puVar2) {
      if (param_3 != (uint *)0x0) {
        if ((char)param_3[1] == '\x01') {
          *(undefined1 *)(param_3 + 1) = 0;
        }
        if ((bool)(uVar8 == 7 & bVar5 & bVar11)) {
          *param_3 = uVar10;
          *(undefined1 *)(param_3 + 1) = 1;
        }
      }
      return uVar8;
    }
    puVar7 = puVar9;
    FUN_10879ccf8();
    uVar3 = *puVar7;
    if ((uVar3 & 0xfffffffe) == 4) {
      *puVar7 = 7;
LAB_10879cbf8:
      func_0x00010086ca80(param_2,puVar7 + 2);
      if ((char)puVar7[9] == '\x01') {
        uVar3 = puVar7[8];
        uVar4 = uVar10;
        bVar1 = uVar3 == uVar10 & bVar11;
        if (!bVar5) {
          uVar4 = uVar3;
          bVar1 = bVar11;
        }
        bVar6 = (uVar3 & 0xfffffffd) == 0;
        if (bVar6) {
          bVar5 = true;
          uVar10 = uVar4;
        }
        bVar11 = 0;
        if (bVar6) {
          bVar11 = bVar1;
        }
      }
      else {
        bVar11 = 0;
      }
      uVar3 = *puVar7;
    }
    else if (uVar3 == 7) goto LAB_10879cbf8;
    if (uVar8 < 8) {
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((((uVar4 & 0x4e) == 0) && (uVar8 = uVar3, (uVar4 & 0x31) == 0)) &&
         (uVar8 = 7, ((uint)(uVar3 < 8) & 0xf1U >> (ulong)(uVar3 & 0x1f)) == 0)) {
        uVar8 = uVar3;
      }
    }
    else {
      uVar8 = 7;
    }
    puVar9 = puVar9 + 2;
  } while( true );
}



/* Entry: 10879ccf8; end: 10879cd1b;  */

long FUN_10879ccf8(long *param_1)

{
  func_0x00010086e594();
  return *param_1 + 0x98;
}



/* Entry: 10879cd1c; end: 10879cf2f;  */

void FUN_10879cd1c(long param_1,long *param_2,long param_3,long *param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_300 [24];
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [40];
  undefined1 auStack_298 [472];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c278b8(auStack_c0,&UNK_10f4babbe);
  func_0x000107c31420(auStack_a8,uVar4,auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  lVar1 = param_2[1];
  for (lVar5 = *param_2; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
    FUN_108869c18(param_1,*(undefined8 *)(param_3 + 0x628),lVar5);
    FUN_10879cf30(param_3,lVar5,1);
  }
  func_0x000107c31428(auStack_a8);
  if ((param_4 != (long *)0x0) && ((param_5 >> 0x20 & 1) != 0)) {
    uVar2 = (ulong)*(uint *)(param_3 + 0x138);
    FUN_10879cf94(uVar2);
    lVar1 = param_2[1];
    for (lVar5 = *param_2; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      func_0x000107c29f64(auStack_298,param_1,lVar5,2);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      ppuStack_2e8 = &PTR_FUN_110a609a8;
      uStack_2c8 = 0x1ab;
      pppuVar3 = &ppuStack_2e8;
      FUN_10879cfb8(pppuVar3,param_5);
      func_0x000107c278b8(auStack_300,"message_type");
      func_0x000107c28824(pppuVar3,auStack_300,uVar2);
      FUN_10879d02c();
      func_0x000107c2884c(auStack_2c0,pppuVar3);
      (**(code **)(*param_4 + 0x50))(param_4,auStack_2c0);
      func_0x000107c2882c(auStack_2c0);
      func_0x00010879eee8();
      func_0x000107c2882c(&ppuStack_2e8);
      func_0x000107c288c8(auStack_298);
    }
  }
  func_0x000107c31424(auStack_a8);
  return;
}



/* Entry: 10879cf30; end: 10879cf93;  */

undefined8 * FUN_10879cf30(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  
  func_0x00010879ef08();
  puVar4 = (undefined8 *)(param_1 + 0x78);
  uVar3 = *puVar4;
  FUN_10879dacc(uVar3,*(undefined8 *)(param_1 + 0x80));
  FUN_1086a48c0(puVar4,uVar3,*(undefined8 *)(param_1 + 0x80));
  if (param_3 != 0) {
    lVar2 = unaff_x20 + 0x8d8;
    uVar1 = *(ulong *)(unaff_x20 + 0x8e0);
    if (uVar1 < *(ulong *)(unaff_x20 + 0x8e8)) {
      func_0x00010065cfd4();
      lVar2 = uVar1 + 0x18;
    }
    else {
      FUN_108659f7c();
    }
    *(long *)(unaff_x20 + 0x8e0) = lVar2;
    return (undefined8 *)(lVar2 + -0x18);
  }
  return puVar4;
}



/* Entry: 10879cf94; end: 10879cfb7;  */

char * FUN_10879cf94(uint param_1)

{
  if (param_1 < 0x44) {
    return (&PTR_s_text_110a700b0)[param_1];
  }
  return "unknown";
}



/* Entry: 10879cfb8; end: 10879d02b;  */

void FUN_10879cfb8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010879f0d8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010879f0c4();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010879efa4();
  func_0x000107c28824();
  func_0x00010879eec8();
  return;
}



/* Entry: 10879d02c; end: 10879d09f;  */

void FUN_10879d02c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010879f0d8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010879f0c4();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010879efa4();
  func_0x000107c28824();
  func_0x00010879eec8();
  return;
}



/* Entry: 10879d0a0; end: 10879d4d3;  */

void FUN_10879d0a0(long param_1)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined4 uStack_1b0;
  byte bStack_1a8;
  byte bStack_1a0;
  byte bStack_170;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 auStack_158 [40];
  char cStack_130;
  char cStack_128;
  undefined8 uStack_f0;
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
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  func_0x0001052916b0(param_1,&uStack_a8,&uStack_c0,&uStack_d8,&uStack_f0);
  func_0x000104bee7a0(&uStack_f0);
  func_0x000104bee7dc(&uStack_d8);
  func_0x000104bee864(&uStack_c0);
  func_0x000107c27a04(&uStack_a8);
  func_0x00010879ef20();
  FUN_1088693c0();
  lStack_1d8 = 0;
  auStack_1d0[0] = 0;
  bStack_1a0 = 0;
  if (cStack_128 == '\0') {
    lVar3 = 0;
  }
  else {
    func_0x00010879e4dc(auStack_1d0,auStack_158);
    func_0x00010879e4b8(auStack_158);
    lVar3 = lStack_1d8;
  }
  lStack_1d8 = lStack_160;
  lStack_160 = lVar3;
  while (((bStack_1a0 & 1) != 0 && (in_ZR = lStack_1d8 == 0, !(bool)in_ZR))) {
    if ((bStack_1a0 & 1) == 0) {
      uVar5 = *(undefined8 *)(lStack_1d8 + 8);
      func_0x00010879f008();
      func_0x000107c27f54(auStack_78,&UNK_10f4bac10,auStack_90);
      func_0x00010879ef80(uVar5);
      func_0x00010879ef78();
      func_0x00010879ef94();
    }
    func_0x000107c28840(param_1,auStack_1d0);
    FUN_10879e518(&lStack_1d8);
  }
  func_0x00010879eef0();
  FUN_10879db40();
  FUN_10879db40(auStack_1d0);
  FUN_10879e428(auStack_168);
  func_0x00010879ef20();
  FUN_108869464();
  FUN_10879d4d4(&lStack_1d8,auStack_168);
  func_0x00010879efc0();
  while (((bStack_170 & 1) != 0 && (func_0x00010879f08c(lStack_1d8), !(bool)in_ZR))) {
    plVar2 = &lStack_1d8;
    FUN_10879d4ec(plVar2);
    FUN_10879d548(param_1 + 0x18,plVar2,plVar2 + 4,plVar2 + 7,plVar2 + 8);
    FUN_10879e8a4(&lStack_1d8);
  }
  func_0x00010879eed4();
  func_0x00010879eebc();
  FUN_10879e5ec(auStack_168);
  func_0x00010879ef20();
  FUN_10879d584();
  func_0x00010879dd54(param_1 + 0x30,auStack_168);
  func_0x000104bee7dc(auStack_168);
  func_0x00010879ef20();
  FUN_1088697c8();
  lStack_1d8 = 0;
  auStack_1d0[0] = 0;
  bStack_1a8 = 0;
  if (cStack_130 == '\0') {
    lVar3 = 0;
  }
  else {
    func_0x00010879ea54(auStack_1d0,auStack_158);
    func_0x00010879ea30(auStack_158);
    lVar3 = lStack_1d8;
  }
  lStack_1d8 = lStack_160;
  lStack_160 = lVar3;
  func_0x00010879efc0();
  while (((bStack_1a8 & 1) != 0 && (lStack_1d8 != 0))) {
    if ((bStack_1a8 & 1) == 0) {
      uVar5 = *(undefined8 *)(lStack_1d8 + 8);
      func_0x00010879f008();
      func_0x000107c27f54(auStack_78,&UNK_10f4bac10,auStack_90);
      func_0x00010879ef80(uVar5);
      func_0x00010879ef78();
      func_0x00010879ef94();
    }
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    if (puVar1 < *(undefined4 **)(param_1 + 0x58)) {
      puVar4 = puVar1 + 1;
      *puVar1 = uStack_1b0;
    }
    else {
      lVar3 = param_1 + 0x48;
      func_0x0001052921ec(lVar3,((long)puVar1 - *(long *)(param_1 + 0x48) >> 2) + 1);
      func_0x00010529205c(auStack_78,lVar3,
                          *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2,param_1 + 0x58)
      ;
      *puStack_68 = uStack_1b0;
      puStack_68 = puStack_68 + 1;
      func_0x000105292028(param_1 + 0x48,auStack_78);
      puVar4 = *(undefined4 **)(param_1 + 0x50);
      func_0x0001052920d8(auStack_78);
    }
    *(undefined4 **)(param_1 + 0x50) = puVar4;
    FUN_10879ea90(&lStack_1d8);
  }
  func_0x00010879eef0();
  FUN_10879ddc0();
  FUN_10879ddc0(auStack_1d0);
  FUN_10879e9a0(auStack_168);
  return;
}



/* Entry: 10879d4d4; end: 10879d4eb;  */

void FUN_10879d4d4(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_2 = param_2 + 8;
  func_0x00010879ef08(param_1,param_2);
  FUN_10879e7f8(param_1 + 1,param_2 + 8);
  func_0x00010879f098();
  return;
}



/* Entry: 10879d4ec; end: 10879d547;  */

long FUN_10879d4ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    func_0x00010879ef5c();
    func_0x00010879ef48();
    func_0x00010879ef80();
    func_0x00010879ef9c();
    func_0x00010879eee8();
  }
  return param_1 + 8;
}



/* Entry: 10879d548; end: 10879d583;  */

long FUN_10879d548(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10879db60();
    lVar2 = uVar1 + 0x58;
  }
  else {
    lVar2 = param_1;
    FUN_10879db94();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x58;
}



/* Entry: 10879d584; end: 10879d653;  */

void FUN_10879d584(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  byte bStack_98;
  undefined8 auStack_88 [5];
  byte bStack_60;
  undefined1 auStack_58 [56];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108869724(auStack_58);
  FUN_10879d738(auStack_88,auStack_58);
  func_0x00010879efc0();
  while ((((bStack_60 & 1) != 0 || ((bStack_98 & 1) != 0)) &&
         (func_0x00010879f08c(auStack_88[0]), !(bool)in_ZR))) {
    puVar1 = auStack_88;
    FUN_10879d750(puVar1);
    FUN_10879d7ac(param_1,puVar1);
    FUN_10879ed48(auStack_88);
  }
  func_0x00010879eef0();
  FUN_10879def8();
  func_0x00010879effc();
  FUN_10879eb5c(auStack_58);
  return;
}



/* Entry: 10879d654; end: 10879d737;  */

void FUN_10879d654(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_118 [13];
  byte bStack_b0;
  undefined1 auStack_a8 [120];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108869464(auStack_a8);
  FUN_10879d4d4(auStack_118,auStack_a8);
  func_0x00010879efc0();
  while (((bStack_b0 & 1) != 0 && (func_0x00010879f08c(auStack_118[0]), !(bool)in_ZR))) {
    puVar1 = auStack_118;
    FUN_10879d4ec(puVar1);
    FUN_10879d548(param_1,puVar1,puVar1 + 4,puVar1 + 7,puVar1 + 8);
    FUN_10879e8a4(auStack_118);
  }
  func_0x00010879eed4();
  func_0x00010879eebc();
  FUN_10879e5ec(auStack_a8);
  return;
}



/* Entry: 10879d738; end: 10879d74f;  */

void FUN_10879d738(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_2 = param_2 + 8;
  func_0x00010879ef08(param_1,param_2);
  FUN_10879eca4(param_1 + 1,param_2 + 8);
  func_0x00010879f098();
  return;
}



/* Entry: 10879d750; end: 10879d7ab;  */

long FUN_10879d750(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010879ef5c();
    func_0x00010879ef48();
    func_0x00010879ef80();
    func_0x00010879ef9c();
    func_0x00010879eee8();
  }
  return param_1 + 8;
}



/* Entry: 10879d7ac; end: 10879d847;  */

long FUN_10879d7ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10879dde0();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10879de14();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10879d848; end: 10879d97f;  */

void FUN_10879d848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_178 [120];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined8 uStack_58;
  
  ppuStack_c8 = &PTR_FUN_110a90710;
  uStack_c0 = 0;
  uStack_58 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_77 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  FUN_10879d980(&uStack_b0,param_2);
  plVar1 = (long *)*param_5;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_90 = param_4;
  FUN_1086cf200(&uStack_100);
  FUN_10868cc20(auStack_178,&ppuStack_c8);
  (**(code **)(*plVar1 + 0x30))
            (param_1,plVar1,param_3,param_7,0x1200ac,&uStack_100,auStack_178,param_6,0,0);
  FUN_1089058f8(auStack_178);
  func_0x0001086cf230(&uStack_100);
  FUN_1089058f8(&ppuStack_c8);
  return;
}



/* Entry: 10879d980; end: 10879d9ab;  */

long FUN_10879d980(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_10879ee40(param_1);
  }
  return param_1;
}



/* Entry: 10879d9ac; end: 10879d9c3;  */

ulong * FUN_10879d9ac(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x60);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 10879d9c4; end: 10879d9f7;  */

void FUN_10879d9c4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010879efcc();
    }
    func_0x000107c29918();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 10879d9f8; end: 10879da03;  */

void FUN_10879d9f8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_100685214);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_100685214);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10879da04; end: 10879dacb;  */

void FUN_10879da04(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x18;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_1,0x18);
  }
  func_0x000107c3350c(&UNK_110a919a0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10879dacc; end: 10879db3f;  */

ulong FUN_10879dacc(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1086a47ac();
  uVar3 = param_2;
  uVar1 = param_1;
  if (param_2 != param_1) {
    while (uVar3 = uVar1, param_1 = param_1 + 0x18, param_1 != param_2) {
      uVar2 = param_1;
      func_0x000107c28078(param_1,param_3);
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        func_0x000107c3194c(uVar3,param_1);
        uVar1 = uVar3 + 0x18;
      }
    }
  }
  return uVar3;
}



/* Entry: 10879db40; end: 10879db5f;  */

void FUN_10879db40(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10879db60; end: 10879db93;  */

void FUN_10879db60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10879dc54(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x58;
  return;
}



/* Entry: 10879db94; end: 10879dc53;  */

long FUN_10879db94(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  func_0x000105291b60(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  func_0x0001052917dc(auStack_68,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  FUN_10879dc54(lStack_58,param_2,param_3,param_4,param_5);
  lStack_58 = lStack_58 + 0x58;
  func_0x00010879efa4();
  func_0x00010529179c();
  lVar2 = param_1[1];
  func_0x000105291a1c(auStack_68);
  return lVar2;
}



/* Entry: 10879dc54; end: 10879dd03;  */

undefined8
FUN_10879dc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c27994(auStack_48);
  func_0x000107c27994(auStack_60,param_3);
  uVar1 = *param_4;
  func_0x000107c279a0(auStack_80,param_5);
  func_0x00010529c144(param_1,auStack_48,auStack_60,uVar1,auStack_80);
  func_0x000107c279a4(auStack_80);
  func_0x000107c27914(auStack_60);
  func_0x000107c27914(auStack_48);
  return param_1;
}



/* Entry: 10879dd04; end: 10879dd23;  */

void FUN_10879dd04(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10879dd24();
  }
  return;
}



/* Entry: 10879dd24; end: 10879ddbf;  */

/* WARNING: Possible PIC construction at 0x00010879dd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010879dd44) */

long FUN_10879dd24(long param_1)

{
  long lStack_48;
  
  func_0x000107c279a4(param_1 + 0x40);
  lStack_48 = param_1 + 0x20;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x20;
}



/* Entry: 10879ddc0; end: 10879dddf;  */

void FUN_10879ddc0(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10879dde0; end: 10879de13;  */

void FUN_10879dde0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10879deb4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10879de14; end: 10879deb3;  */

long FUN_10879de14(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000105291f78(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x000105291c78(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  FUN_10879deb4(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x18;
  func_0x00010879efa4();
  func_0x000105291c38();
  lVar2 = param_1[1];
  func_0x000105291e34(auStack_58);
  return lVar2;
}



/* Entry: 10879deb4; end: 10879def7;  */

void FUN_10879deb4(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010879eefc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  unaff_x19[1] = uStack_30;
  *unaff_x19 = uStack_38;
  unaff_x19[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10879def8; end: 10879df17;  */

void FUN_10879def8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10879df18; end: 10879df8f;  */

long FUN_10879df18(long param_1)

{
  func_0x00010879df40(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10879df90(param_1,0);
  return param_1;
}



/* Entry: 10879df90; end: 10879dfa7;  */

void FUN_10879df90(long *param_1)

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



/* Entry: 10879dfa8; end: 10879e043;  */

void FUN_10879dfa8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010879ef70();
  func_0x00010879ee90();
  func_0x00010879eea0();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  func_0x00010879f048();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  func_0x00010879f054();
  *(int *)(unaff_x19 + 0x28) = (int)param_1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0x2c) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0x30) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0x40) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0x44) = (int)uVar1;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0x48) = (int)unaff_x20;
  return;
}



/* Entry: 10879e044; end: 10879e3e7;  */

undefined1  [16] FUN_10879e044(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined1 auVar16 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar13 = (ulong)*param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x21 = uVar5 & uVar13;
    }
    else {
      unaff_x21 = uVar13;
      if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        unaff_x21 = uVar13 - uVar6 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10879e0f4;
          uVar6 = plVar12[1];
          if (uVar6 != uVar13) break;
          if ((int)plVar12[2] == *param_2) {
            uVar4 = 0;
            goto LAB_10879e3b4;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (uVar14 <= uVar6) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar7 * uVar14;
        }
      } while (uVar6 == unaff_x21);
    }
  }
LAB_10879e0f4:
  puVar15 = (undefined4 *)*param_4;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar13;
  *(undefined4 *)(plVar12 + 2) = *puVar15;
  *(undefined4 *)((long)plVar12 + 0x14) = 0;
  plStack_60 = plVar1;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10879e338;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  plStack_68 = plVar12;
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_10879e1a4:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10879e3dc);
      (*pcVar2)();
    }
    lVar3 = uVar5 << 3;
    __Znwm(lVar3);
    FUN_10879e3e8(param_1,lVar3);
    param_1[1] = uVar5;
    lVar3 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar3 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar5 - 1;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar6 * uVar5;
      }
      if ((uVar5 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar3 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar6 = plVar8[1];
        if ((uVar5 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar5 <= uVar6) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar10 * uVar5;
        }
        if (uVar6 != uVar11) {
          if (*(long *)(lVar3 + uVar6 * 8) == 0) {
            *(long **)(lVar3 + uVar6 * 8) = plVar9;
            uVar11 = uVar6;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar6 * 8);
            **(long **)(lVar3 + uVar6 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_10879e1a4;
      FUN_10879e3e8(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x21 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x21 = uVar13;
    if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      unaff_x21 = uVar13 - uVar5 * uVar14;
    }
  }
LAB_10879e338:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x21 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar3 + unaff_x21 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar3 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10879e400(&plStack_68);
  uVar4 = 1;
LAB_10879e3b4:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = plVar12;
  return auVar16;
}



/* Entry: 10879e3e8; end: 10879e3ff;  */

void FUN_10879e3e8(long *param_1,long param_2)

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



/* Entry: 10879e400; end: 10879e427;  */

void FUN_10879e400(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c33508();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10879e428; end: 10879e487;  */

long FUN_10879e428(long param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_10879e4b8(param_1 + 0x10);
  }
  FUN_10879db40((ulong)&uStack_60 | 8);
  func_0x00010879f0b8();
  func_0x000107c31408();
  FUN_10879db40(param_1 + 0x10);
  return param_1;
}



/* Entry: 10879e488; end: 10879e4b7;  */

void FUN_10879e488(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010879ef08();
  func_0x000107c3194c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 10879e4b8; end: 10879e4f7;  */

void FUN_10879e4b8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10879e4f8; end: 10879e517;  */

void FUN_10879e4f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010879f0f8();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10879e518; end: 10879e577;  */

void FUN_10879e518(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33508();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010879f0ac();
    FUN_10879e5ac();
    func_0x00010879ef88();
    FUN_10879e578();
    func_0x00010879efb0();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10879e578; end: 10879e5ab;  */

long FUN_10879e578(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10879e488();
  }
  else {
    func_0x00010879e4dc();
  }
  return param_1;
}



/* Entry: 10879e5ac; end: 10879e5eb;  */

void FUN_10879e5ac(undefined8 param_1)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010879ef70();
  func_0x00010879ee90();
  func_0x00010879eea0();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  uVar1 = 2;
  func_0x000107c28228();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x28) = uVar1;
  return;
}



/* Entry: 10879e5ec; end: 10879e64f;  */

long FUN_10879e5ec(long param_1)

{
  long lVar1;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar1 = param_1;
  func_0x00010879efc0();
  FUN_10879e650(lVar1 + 8,auStack_90);
  FUN_10879dd04((ulong)auStack_90 | 8);
  func_0x00010879f0b8();
  func_0x000107c31408();
  FUN_10879dd04(param_1 + 0x10);
  return param_1;
}



/* Entry: 10879e650; end: 10879e677;  */

undefined8 * FUN_10879e650(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10879e678(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10879e678; end: 10879e69b;  */

undefined8 FUN_10879e678(undefined8 param_1)

{
  FUN_10879e69c();
  return param_1;
}



/* Entry: 10879e69c; end: 10879e6c3;  */

void FUN_10879e69c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 != *(char *)(param_2 + 0x60)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        FUN_10879dd24();
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      return;
    }
    FUN_10879e74c();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010879ef08();
    func_0x000107c3194c();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c3194c(unaff_x20 + 0x20,unaff_x19 + 0x20);
    *(undefined4 *)(unaff_x20 + 0x38) = *(undefined4 *)(unaff_x19 + 0x38);
    func_0x000107c27c54(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  return;
}



/* Entry: 10879e6c4; end: 10879e70b;  */

void FUN_10879e6c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010879ef08();
  func_0x000107c3194c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x000107c3194c(unaff_x20 + 0x20,unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x38) = *(undefined4 *)(unaff_x19 + 0x38);
  func_0x000107c27c54(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 10879e70c; end: 10879e74b;  */

void FUN_10879e70c(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10879dd24();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10879e74c; end: 10879e7cf;  */

void FUN_10879e74c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = uVar2;
  param_1[4] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[8] = uVar2;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
}



/* Entry: 10879e7d0; end: 10879e7f7;  */

void FUN_10879e7d0(long param_1,long param_2)

{
  func_0x00010879ef08();
  FUN_10879e7f8(param_1 + 8,param_2 + 8);
  func_0x00010879f098();
  return;
}



/* Entry: 10879e7f8; end: 10879e867;  */

void FUN_10879e7f8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_80 [96];
  
  func_0x00010879ef08();
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 != *(char *)(param_2 + 0x60)) {
    if (cVar1 == '\0') {
      func_0x00010879f0ec();
      func_0x00010879e730();
    }
    else {
      func_0x00010879e730();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x60) == '\x01') {
      FUN_10879dd24();
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010879f0ec();
    func_0x00010879ef08();
    FUN_10879e74c(auStack_80,unaff_x20);
    func_0x00010879f0ec();
    FUN_10879e6c4();
    func_0x00010879ef88();
    FUN_10879e6c4();
    func_0x00010879f01c();
    return;
  }
  return;
}



/* Entry: 10879e868; end: 10879e8a3;  */

void FUN_10879e868(void)

{
  undefined1 auStack_80 [96];
  
  func_0x00010879ef08();
  FUN_10879e74c(auStack_80);
  func_0x00010879f0ec();
  FUN_10879e6c4();
  func_0x00010879ef88();
  FUN_10879e6c4();
  func_0x00010879f01c();
  return;
}



/* Entry: 10879e8a4; end: 10879e8ff;  */

void FUN_10879e8a4(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33508();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010879f0ac();
    FUN_10879e934();
    func_0x00010879ef88();
    FUN_10879e900();
    func_0x00010879f01c();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x68) == '\x01') {
    FUN_10879dd24();
    *(undefined1 *)(lVar1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10879e900; end: 10879e933;  */

long FUN_10879e900(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10879e6c4();
  }
  else {
    func_0x00010879e730();
  }
  return param_1;
}



/* Entry: 10879e934; end: 10879e99f;  */

void FUN_10879e934(undefined8 param_1)

{
  long unaff_x19;
  undefined4 unaff_w20;
  
  func_0x00010879ef70();
  func_0x00010879ee90();
  func_0x00010879eea0();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  func_0x000107c313e0(unaff_x19 + 0x20);
  func_0x00010879f054();
  *(undefined4 *)(unaff_x19 + 0x38) = unaff_w20;
  func_0x000107c28210(unaff_x19 + 0x40);
  return;
}



/* Entry: 10879e9a0; end: 10879e9ff;  */

long FUN_10879e9a0(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  
  uStack_30 = 0;
  lVar1 = param_1;
  func_0x00010879efc0();
  *(undefined8 *)(lVar1 + 8) = 0;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    FUN_10879ea30(param_1 + 0x10);
  }
  FUN_10879ddc0((ulong)auStack_60 | 8);
  func_0x00010879f0b8();
  func_0x000107c31408();
  FUN_10879ddc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10879ea00; end: 10879ea2f;  */

void FUN_10879ea00(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010879ef08();
  func_0x000107c3194c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 10879ea30; end: 10879ea6f;  */

void FUN_10879ea30(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10879ea70; end: 10879ea8f;  */

void FUN_10879ea70(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010879f0f8();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10879ea90; end: 10879eaf3;  */

void FUN_10879ea90(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x000107c33508();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_10879eb28(auStack_48,*unaff_x19);
    func_0x00010879efa4();
    FUN_10879eaf4();
    func_0x00010879efb8();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 6) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  return;
}



/* Entry: 10879eaf4; end: 10879eb27;  */

long FUN_10879eaf4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10879ea00();
  }
  else {
    func_0x00010879ea54();
  }
  return param_1;
}



/* Entry: 10879eb28; end: 10879eb5b;  */

void FUN_10879eb28(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010879ef70();
  func_0x00010879ee90();
  func_0x00010879eea0();
  *(ulong *)(unaff_x19 + 0x18) = CONCAT44(uVar2,uVar1);
  func_0x00010879f048();
  *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
  return;
}



/* Entry: 10879eb5c; end: 10879ebb3;  */

long FUN_10879eb5c(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_10879ebb4(param_1 + 8,&uStack_50);
  FUN_10879def8((ulong)&uStack_50 | 8);
  func_0x00010879f0b8();
  func_0x000107c31408();
  FUN_10879def8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10879ebb4; end: 10879ebdb;  */

undefined8 * FUN_10879ebb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10879ebdc(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10879ebdc; end: 10879ebff;  */

undefined8 FUN_10879ebdc(undefined8 param_1)

{
  FUN_10879ec00();
  return param_1;
}



/* Entry: 10879ec00; end: 10879ec2f;  */

void FUN_10879ec00(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      func_0x00010879ef08();
      func_0x000107c27b9c();
      *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x00010879f060();
  }
  return;
}


