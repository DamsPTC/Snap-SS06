/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10872c258; end: 10872c39b;  */

long * FUN_10872c258(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_108686da4();
  }
  lVar1 = param_4 + param_3 * 200;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 200;
  return param_1;
}



/* Entry: 10872c39c; end: 10872c477;  */

long FUN_10872c39c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001088f56bc();
  if (param_1 != param_2) {
    lVar2 = *(long *)(param_2 + 0x118);
    lVar1 = *(long *)(param_2 + 0x120);
    uVar4 = lVar1 - lVar2;
    lVar3 = *(long *)(param_1 + 0x118);
    if ((ulong)(*(long *)(param_1 + 0x128) - lVar3) < uVar4) {
      if (lVar3 != 0) {
        FUN_1086cd85c(param_1 + 0x118);
        __ZdlPv(*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
      }
      lVar3 = param_1 + 0x118;
      FUN_10872c978(lVar3,(long)uVar4 / 0x28);
      FUN_10872c930(param_1 + 0x118,lVar3);
    }
    else {
      uVar5 = *(long *)(param_1 + 0x120) - lVar3;
      if (uVar4 <= uVar5) {
        FUN_10872ca54(lVar2,lVar1);
        FUN_1086cd864(param_1 + 0x118,lVar2);
        return param_1;
      }
      FUN_10872ca54(lVar2,lVar2 + uVar5);
      lVar2 = lVar2 + uVar5;
    }
    FUN_10872c890(param_1 + 0x118,lVar2,lVar1);
  }
  return param_1;
}



/* Entry: 10872c478; end: 10872c7cb;  */

void FUN_10872c478(float param_1,float param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *unaff_x19;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x26;
  
  func_0x00010872d4b4();
  uVar14 = unaff_x19[1];
  if (uVar14 != 0) {
    uVar12 = uVar14 - 1;
    if ((uVar14 & uVar12) == 0) {
      unaff_x26 = uVar12 & param_3;
    }
    else {
      unaff_x26 = param_3;
      if (uVar14 <= param_3) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = param_3 / uVar14;
        }
        unaff_x26 = param_3 - uVar5 * uVar14;
      }
    }
    plVar13 = *(long **)(*unaff_x19 + unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10872c530;
          uVar5 = plVar13[1];
          if (uVar5 != param_3) break;
          plVar4 = unaff_x19 + 4;
          FUN_1086a9f40(plVar4,plVar13 + 2);
          if (((ulong)plVar4 & 1) != 0) {
            return;
          }
        }
        if ((uVar14 & uVar12) == 0) {
          uVar5 = uVar5 & uVar12;
        }
        else if (uVar14 <= uVar5) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar7 * uVar14;
        }
      } while (uVar5 == unaff_x26);
    }
  }
LAB_10872c530:
  plVar13 = unaff_x19 + 2;
  plVar4 = (long *)0x160;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = param_3;
  FUN_10865ecd8(plVar4 + 2);
  FUN_10872cbe8(plVar4 + 6);
  func_0x00010872d548();
  if ((uVar14 != 0) && (param_1 <= param_2 * (float)uVar14)) goto LAB_10872c730;
  bVar2 = 2 < uVar14;
  bVar3 = uVar14 == 3;
  func_0x00010872d450(uVar14 << 1);
  uVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar12 = extraout_x9;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = unaff_x19[1];
  if (uVar14 < uVar12) {
LAB_10872c5cc:
    if (uVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10872c7a8);
      (*pcVar1)();
    }
    __Znwm(uVar12 << 3);
    FUN_10872cc2c();
    unaff_x19[1] = uVar12;
    lVar6 = *unaff_x19;
    for (uVar14 = 0; uVar12 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar6 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar13;
    uVar14 = uVar12;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar12 - 1;
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = uVar10 / uVar12;
      }
      uVar11 = uVar10;
      if (uVar12 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar12;
      }
      if ((uVar12 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar13;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar12 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar12 <= uVar5) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar5 / uVar12;
          }
          uVar5 = uVar5 - uVar10 * uVar12;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            *plVar9 = *plVar8;
            func_0x00010872d5bc();
            lVar6 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            uVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar12 < uVar14) {
    uVar5 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010872d4f0();
    }
    if (uVar12 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 < uVar14) {
      if (uVar12 != 0) goto LAB_10872c5cc;
      FUN_10872cc2c();
      unaff_x19[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = unaff_x19[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x26 = uVar14 - 1 & param_3;
  }
  else {
    unaff_x26 = param_3;
    if (uVar14 <= param_3) {
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = param_3 / uVar14;
      }
      unaff_x26 = param_3 - uVar12 * uVar14;
    }
  }
LAB_10872c730:
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar4 = *plVar13;
    *plVar13 = (long)plVar4;
    *(long **)(lVar6 + unaff_x26 * 8) = plVar13;
    if (*plVar4 != 0) {
      uVar12 = *(ulong *)(*plVar4 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar12 = uVar12 & uVar14 - 1;
      }
      else if (uVar14 <= uVar12) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar12 / uVar14;
        }
        uVar12 = uVar12 - uVar5 * uVar14;
      }
      *(long **)(lVar6 + uVar12 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
  }
  func_0x00010872d5a4();
  FUN_10872cc44();
  return;
}



/* Entry: 10872c7cc; end: 10872c88f;  */

long FUN_10872c7cc(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_1086a9f1c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        func_0x00010872d538();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10872c890; end: 10872c92f;  */

void FUN_10872c890(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_50 = lVar1;
  lStack_48 = lVar1;
  func_0x00010872d574();
  uStack_58 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10872c9c8(lVar1,param_2);
    lVar1 = lStack_48 + 0x28;
    lStack_48 = lVar1;
  }
  uStack_58 = 1;
  FUN_10872c9d4(auStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10872c930; end: 10872c977;  */

long * FUN_10872c930(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar3 = param_1 + 2;
    FUN_10872cab8();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 5);
    return plVar3;
  }
  FUN_10872caa4();
  if ((long *)0x666666666666666 < param_2) {
    FUN_10872caa4();
    func_0x000108901ff0();
    func_0x000108901ec4(&PTR_FUN_110a8e3d8);
    if ((extraout_x8 & 1) != 0) {
      func_0x0001089018b4();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x10);
    *(uint *)(unaff_x19 + 2) = uVar1;
    *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
    if ((uVar1 & 1) == 0) {
      param_1 = (long *)0x0;
    }
    else {
      func_0x000108901f50();
    }
    unaff_x19[3] = (long)param_1;
    *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(unaff_x20 + 0x20);
    return unaff_x19;
  }
  uVar2 = (param_1[2] - *param_1) / 0x28;
  plVar3 = (long *)(uVar2 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x333333333333332 < uVar2) {
    plVar3 = (long *)0x666666666666666;
  }
  return plVar3;
}



/* Entry: 10872c978; end: 10872c9c7;  */

ulong FUN_10872c978(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong unaff_x19;
  long unaff_x20;
  
  if (0x666666666666666 < param_2) {
    FUN_10872caa4();
    func_0x000108901ff0();
    func_0x000108901ec4(&PTR_FUN_110a8e3d8);
    if ((extraout_x8 & 1) != 0) {
      func_0x0001089018b4();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x10);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x14) = 0;
    if ((uVar1 & 1) == 0) {
      param_1 = (long *)0x0;
    }
    else {
      func_0x000108901f50();
    }
    *(long **)(unaff_x19 + 0x18) = param_1;
    *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    return unaff_x19;
  }
  uVar2 = (param_1[2] - *param_1) / 0x28;
  uVar3 = uVar2 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x333333333333332 < uVar2) {
    uVar3 = 0x666666666666666;
  }
  return uVar3;
}



/* Entry: 10872c9c8; end: 10872c9d3;  */

void FUN_10872c9c8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901ff0(param_1,0,param_2);
  func_0x000108901ec4(&PTR_FUN_110a8e3d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901f50();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 10872c9d4; end: 10872ca03;  */

long FUN_10872c9d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10872ca04(param_1);
  }
  return param_1;
}



/* Entry: 10872ca04; end: 10872ca23;  */

void FUN_10872ca04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    FUN_1088ff424();
  }
  return;
}



/* Entry: 10872ca24; end: 10872ca53;  */

void FUN_10872ca24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    FUN_1088ff424();
  }
  return;
}



/* Entry: 10872ca54; end: 10872caa3;  */

long FUN_10872ca54(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_1088ff5fc(lVar1,param_1);
    lVar1 = lVar1 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return param_3;
}



/* Entry: 10872caa4; end: 10872cab7;  */

void FUN_10872caa4(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10872cadc();
  return;
}



/* Entry: 10872cab8; end: 10872cadb;  */

void FUN_10872cab8(void)

{
  FUN_10872cadc();
  return;
}



/* Entry: 10872cadc; end: 10872cb07;  */

long FUN_10872cadc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    return lVar2;
  }
  func_0x000104bd35f4();
  plVar7 = (long *)param_1[1];
  if ((plVar7 != (long *)0x0) && (plVar3 = param_1 + 3, *plVar3 != 0)) {
    FUN_1086a9f1c();
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)((ulong)plVar3 & uVar8);
    }
    else {
      plVar9 = plVar3;
      if (plVar7 <= plVar3) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar9 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar5 != plVar3) break;
        func_0x00010872d538();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar7 & uVar8) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar8);
      }
      else if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    } while (plVar5 == plVar9);
  }
  return 0;
}



/* Entry: 10872cb08; end: 10872cbcb;  */

long FUN_10872cb08(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_1086a9f1c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        func_0x00010872d538();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10872cbcc; end: 10872cbe7;  */

void FUN_10872cbcc(long param_1)

{
  func_0x000107c28dc8();
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



/* Entry: 10872cbe8; end: 10872cc2b;  */

long FUN_10872cbe8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c28dc8();
  FUN_10872cd34(lVar1 + 0x118,param_2 + 0x118);
  return param_1;
}



/* Entry: 10872cc2c; end: 10872cc43;  */

void FUN_10872cc2c(long *param_1,long param_2)

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



/* Entry: 10872cc44; end: 10872cd13;  */

long * FUN_10872cc44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010872cc84(lVar1 + 0x10);
    }
    func_0x00010872d520();
  }
  return param_1;
}



/* Entry: 10872cd14; end: 10872cd33;  */

void FUN_10872cd14(long param_1)

{
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x000107c2a3a8();
  }
  return;
}



/* Entry: 10872cd34; end: 10872cdbb;  */

undefined8 * FUN_10872cd34(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    FUN_10872c930(param_1,lVar3 / 0x28);
    FUN_10872c890(param_1,lVar1,lVar2);
  }
  uStack_38 = 1;
  FUN_10872cdbc(&puStack_40);
  return param_1;
}



/* Entry: 10872cdbc; end: 10872ce0f;  */

long FUN_10872cdbc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001086cd830(param_1);
  }
  return param_1;
}



/* Entry: 10872ce10; end: 10872d00f;  */

void FUN_10872ce10(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  ulong uVar6;
  long unaff_x22;
  ulong uVar7;
  ulong unaff_x25;
  long *plVar8;
  
  func_0x00010872d4b4();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar6 = uVar7 - 1;
    if ((uVar7 & uVar6) == 0) {
      unaff_x25 = uVar6 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_3 / uVar7;
        }
        unaff_x25 = param_3 - uVar3 * uVar7;
      }
    }
    plVar8 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10872cec8;
          uVar3 = plVar8[1];
          if (uVar3 != param_3) break;
          plVar2 = unaff_x19 + 4;
          FUN_1086a9f40(plVar2,plVar8 + 2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        if ((uVar7 & uVar6) == 0) {
          uVar3 = uVar3 & uVar6;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x25);
    }
  }
LAB_10872cec8:
  plVar8 = unaff_x19 + 2;
  plVar2 = (long *)0x168;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = param_3;
  FUN_10865ecd8(plVar2 + 2);
  *(undefined1 *)(plVar2 + 6) = 0;
  *(undefined1 *)(plVar2 + 0x2c) = 0;
  if (*(char *)(unaff_x22 + 0x130) == '\x01') {
    func_0x00010872d1fc(plVar2 + 6);
  }
  func_0x00010872d548();
  if ((uVar7 == 0) || (param_2 * (float)uVar7 < param_1)) {
    func_0x00010872d58c();
    func_0x00010872d450();
    FUN_10872d02c();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_3 / uVar7;
        }
        unaff_x25 = param_3 - uVar6 * uVar7;
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar2 = *plVar8;
    *plVar8 = (long)plVar2;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar8;
    if (*plVar2 != 0) {
      uVar6 = *(ulong *)(*plVar2 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar6 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
  }
  func_0x00010872d5a4();
  func_0x00010872ccac();
  return;
}



/* Entry: 10872d010; end: 10872d02b;  */

void FUN_10872d010(long param_1)

{
  func_0x000107c28dc8();
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



/* Entry: 10872d02c; end: 10872d1ab;  */

void FUN_10872d02c(long *param_1,long *param_2)

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
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010872d4f0();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10872d1ac(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10872d1ac(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
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
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            func_0x00010872d5bc();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10872d1ac; end: 10872d1c3;  */

void FUN_10872d1ac(long *param_1,long param_2)

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



/* Entry: 10872d1c4; end: 10872d36b;  */

long FUN_10872d1c4(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar2 = *(char *)(param_1 + 0x130);
  if (cVar2 == *(char *)(param_2 + 0x130)) {
    if (cVar2 != '\0') {
      func_0x0001088f56bc();
      if (param_1 != param_2) {
        lVar3 = *(long *)(param_2 + 0x118);
        lVar1 = *(long *)(param_2 + 0x120);
        uVar5 = lVar1 - lVar3;
        lVar4 = *(long *)(param_1 + 0x118);
        if ((ulong)(*(long *)(param_1 + 0x128) - lVar4) < uVar5) {
          if (lVar4 != 0) {
            FUN_1086cd85c(param_1 + 0x118);
            __ZdlPv(*(undefined8 *)(param_1 + 0x118));
            *(undefined8 *)(param_1 + 0x118) = 0;
            *(undefined8 *)(param_1 + 0x120) = 0;
            *(undefined8 *)(param_1 + 0x128) = 0;
          }
          lVar4 = param_1 + 0x118;
          FUN_10872c978(lVar4,(long)uVar5 / 0x28);
          FUN_10872c930(param_1 + 0x118,lVar4);
        }
        else {
          uVar6 = *(long *)(param_1 + 0x120) - lVar4;
          if (uVar5 <= uVar6) {
            FUN_10872ca54(lVar3,lVar1);
            FUN_1086cd864(param_1 + 0x118,lVar3);
            return param_1;
          }
          FUN_10872ca54(lVar3,lVar3 + uVar6);
          lVar3 = lVar3 + uVar6;
        }
        FUN_10872c890(param_1 + 0x118,lVar3,lVar1);
      }
      return param_1;
    }
  }
  else {
    if (cVar2 == '\0') {
      FUN_10872cbe8();
      *(undefined1 *)(param_1 + 0x130) = 1;
      return param_1;
    }
    func_0x00010872cde8();
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return param_1;
}



/* Entry: 10872d36c; end: 10872d3a7;  */

undefined8 * FUN_10872d36c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69638;
  func_0x000107c28808(param_1 + 3);
  func_0x000107c286f8(param_1 + 1);
  return param_1;
}



/* Entry: 10872d3a8; end: 10872d433;  */

undefined8 * FUN_10872d3a8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a696a8;
  plVar2 = (long *)param_1[8];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010872ccec(lVar1);
    func_0x00010872d520();
  }
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = (long *)param_1[3];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010872cc84(lVar1);
    func_0x00010872d520();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10872d434; end: 10872d623;  */

void FUN_10872d434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10872d624; end: 10872d8f7;  */

void FUN_10872d624(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar5;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  
  func_0x000108739298();
  func_0x000108738adc();
  func_0x000107c33164();
  lVar7 = param_1;
  func_0x000108739180(FUN_108734dcc);
  *(long *)(lVar7 + 0x40) = unaff_x21;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  func_0x000108738bd4();
  func_0x000107c287c4(extraout_x8,param_1 + 0x10);
  func_0x000107c314e0(param_1 + 0x28,*(undefined8 *)(unaff_x21 + 0x10),param_3 * 1000000);
  plVar4 = unaff_x20;
  FUN_108731fb4(param_1 + 0x38);
  func_0x000107c330dc();
  do {
    func_0x000107c33020();
  } while (extraout_w10_00 != 0);
  func_0x000107c33078();
  func_0x000107c33278();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x000107c33064();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    func_0x000108738a88();
    plVar5 = extraout_x8_01;
    do {
      if (*plVar5 == 0) {
        func_0x000107c33024();
        plVar5 = extraout_x8_03;
        uVar1 = extraout_w10_02;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar5 = extraout_x8_02;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087381b4();
        if ((bool)in_ZR) {
          func_0x000108738134();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x000108738330();
          func_0x000108738f2c();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087380fc(0);
          *(long **)(lVar7 + 0x90) = plVar4;
        }
        func_0x0001087381a4();
        *(long *)(extraout_x8_07 + 0x20) = lVar8;
        goto LAB_10872d808;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  plVar4 = (long *)(param_1 + 0x30);
  func_0x000107c28870();
  lVar7 = *plVar4;
  func_0x000107c330bc();
  func_0x000107c330c0();
  if (lVar7 == 2) {
    func_0x000108738498();
    func_0x000108738368();
    FUN_10865aaac(plVar4,&stack0x00000008);
    func_0x0001087383dc();
    ___cxa_throw(plVar4);
  }
  else {
    uVar3 = lVar7 == 1;
    if (!(bool)uVar3) {
      *(long *)(param_1 + 0x30) = *unaff_x20;
      do {
        func_0x000107c33020();
      } while (extraout_w10_03 != 0);
      func_0x000107c33078();
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        func_0x000107c3322c();
        lVar7 = *(long *)(param_1 + 0x30);
        func_0x000107c33064();
        lVar8 = *plVar4;
        if (lVar8 == 0) {
          func_0x000107c3a5c0();
          lVar8 = *plVar4;
        }
        func_0x000108738a88();
        plVar5 = extraout_x8_04;
        do {
          if (*plVar5 == 0) {
            func_0x000107c33024();
            plVar5 = extraout_x8_06;
            uVar1 = extraout_w10_05;
            uVar6 = extraout_w11_02;
          }
          else {
            func_0x000108738318();
            plVar5 = extraout_x8_05;
            uVar1 = extraout_w10_04;
            uVar6 = extraout_w11_01;
          }
          if ((uVar6 & 1) != 0) {
            func_0x0001087381b4();
            if ((bool)uVar3) {
              func_0x000108738134();
              func_0x0001087380a0();
              func_0x000108738084();
              *(long **)(lVar7 + 0x90) = plVar4;
            }
            func_0x0001087381a4();
            *(long *)(extraout_x8_08 + 0x20) = lVar8;
LAB_10872d808:
            func_0x000108738144(*(undefined8 *)(lVar7 + 0x90));
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c331d4();
      func_0x000107c330bc();
      func_0x000107c330d4();
      func_0x000107c3308c();
      func_0x000107c33080();
      func_0x000107c330d8();
      func_0x000107c33090();
      return;
    }
    func_0x000108738498();
    func_0x000108738f04();
    func_0x000108739138();
    ___cxa_throw(plVar4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10872d868);
  (*pcVar2)();
}



/* Entry: 10872d8f8; end: 10872d94b;  */

void FUN_10872d8f8(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c33290();
  FUN_10873205c();
  func_0x000107c3328c();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 10872d94c; end: 10872dae7;  */

void FUN_10872d94c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_w10_02;
  int extraout_w10_03;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [8];
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [4];
  
  uVar2 = param_2[0xc];
  puStack_d0 = param_2;
  uStack_c8 = param_3;
  func_0x000107c288a8(auStack_c0,param_2 + 10);
  puStack_68 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
  puStack_70 = puStack_d0;
  auStack_60[0] = auStack_c0[0];
  auStack_c0[0] = 0;
  FUN_1087320c8(auStack_d8,&puStack_70,uVar2);
  func_0x000107c288ac(auStack_60);
  func_0x000107c288ac(auStack_c0);
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a69958;
  puVar3 = puVar1 + 3;
  puVar1[4] = 0;
  *puVar3 = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x3cb0b1bb;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x32aaaba7;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x17] = 0;
  puStack_90 = puVar3;
  puStack_88 = puVar1;
  puStack_80 = puVar3;
  puStack_78 = puVar1;
  do {
    func_0x000108738224();
  } while (extraout_w10 != 0);
  ppuStack_98 = &PTR_FUN_110a698f0;
  puStack_70 = puVar3;
  puStack_68 = puVar1;
  do {
    func_0x000108738224();
  } while (extraout_w10_00 != 0);
  do {
    func_0x000108738224();
  } while (extraout_w10_01 != 0);
  *param_1 = puVar3;
  param_1[1] = puVar1;
  func_0x000104be4f5c(&puStack_70);
  func_0x000107c3a5c0();
  func_0x000108738dd8();
  if (CONCAT44(extraout_var,extraout_w10_02) != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001087388b0();
  FUN_108732bac();
  FUN_10873277c(auStack_a0);
  FUN_108732be4(&puStack_70);
  FUN_108732be4(&puStack_d0);
  func_0x000107c27f9c(auStack_a0);
  FUN_108732630(&ppuStack_98);
  func_0x00010873845c();
  return;
}



/* Entry: 10872dae8; end: 10872dc43;  */

void FUN_10872dae8(void)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_w10_02;
  int extraout_w10_03;
  undefined4 extraout_var;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  undefined1 auStack_d8 [8];
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  func_0x0001087385a0();
  puStack_70 = puStack_d0;
  puStack_68 = (undefined8 *)uStack_c8;
  uStack_c8 = 0;
  FUN_108732c04(auStack_d8,&puStack_70);
  func_0x000107c33200();
  func_0x000107c33184();
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a69a10;
  puVar2 = puVar1 + 3;
  *puVar2 = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x3cb0b1bb;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x32aaaba7;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puStack_90 = puVar2;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  puStack_78 = puVar1;
  do {
    func_0x000108738224();
  } while (extraout_w10 != 0);
  ppuStack_98 = &PTR_FUN_110a699a8;
  puStack_70 = puVar2;
  puStack_68 = puVar1;
  do {
    func_0x000108738224();
  } while (extraout_w10_00 != 0);
  do {
    func_0x000108738224();
  } while (extraout_w10_01 != 0);
  *unaff_x19 = puVar2;
  unaff_x19[1] = puVar1;
  func_0x00010862c9b0(&puStack_70);
  func_0x000107c3a5c0();
  func_0x000108738dd8();
  if (CONCAT44(extraout_var,extraout_w10_02) != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001087388b0();
  FUN_108733260();
  FUN_108732fe0(auStack_a0);
  FUN_108733298(&puStack_70);
  FUN_108733298(&puStack_d0);
  func_0x000107c27f9c(auStack_a0);
  FUN_108732e98(&ppuStack_98);
  func_0x00010873845c();
  return;
}



/* Entry: 10872dc44; end: 10872dca3;  */

void FUN_10872dc44(void)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001087385a0();
  uStack_40 = uStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1087332b8(auStack_58,&uStack_40);
  func_0x000107c33200();
  func_0x000107c33184();
  func_0x000108738d78();
  FUN_10872dca4();
  func_0x00010873845c();
  return;
}



/* Entry: 10872dca4; end: 10872dd7b;  */

void FUN_10872dca4(void)

{
  int extraout_w10;
  long *unaff_x21;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  func_0x0001087390d0();
  func_0x000104be53c8(&ppuStack_88);
  ppuStack_88 = &PTR_FUN_110a69a60;
  func_0x000104be5378(&ppuStack_88);
  func_0x000107c3a5c0();
  lStack_c0 = *unaff_x21;
  if (lStack_c0 != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_b8 = &PTR_FUN_110a69a60;
  FUN_1087337bc(auStack_60,&lStack_c0);
  FUN_10873351c(auStack_90);
  FUN_1087337f4(auStack_60);
  FUN_1087337f4(&lStack_c0);
  func_0x000107c27f9c(auStack_90);
  func_0x000104be5724(&ppuStack_88);
  return;
}



/* Entry: 10872dd7c; end: 10872de67;  */

void FUN_10872dd7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  lStack_b8 = param_2;
  func_0x000107c27994(auStack_b0);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x000108733814(auStack_90,&lStack_b8);
  func_0x000107c288a8(auStack_70,param_2 + 0x50);
  FUN_1087338f4(auStack_68,auStack_90);
  FUN_108733868(auStack_98,auStack_68,uVar1);
  func_0x00010873383c(auStack_68);
  func_0x00010873383c(auStack_90);
  FUN_10872dca4(param_1,auStack_98);
  func_0x000107c331f8();
  func_0x000107c27914(auStack_b0);
  return;
}



/* Entry: 10872de68; end: 10872e6ff;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010872e428 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10872de68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint extraout_w8;
  long *plVar13;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar14;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  undefined8 *puVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long unaff_x21;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined4 uStack_f0;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c33288();
  puVar9 = (undefined8 *)0x158;
  __Znwm();
  *puVar9 = FUN_108737c6c;
  puVar9[1] = FUN_108737f64;
  FUN_108733a58(puVar9 + 2);
  FUN_10872e700(puVar9 + 2);
  if (param_6 == 3) {
    uStack_d8 = 0;
    puStack_e0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0x3f800000;
    func_0x000108730ae8(&puStack_b0,&puStack_e0);
    uStack_88 = 0;
    func_0x0001087385e0();
    do {
      lStack_70 = 0;
      lVar12 = unaff_x21 + 0x10;
      func_0x00010873818c(lVar12,&lStack_70);
      if ((int)lVar12 != 0) {
        func_0x000108738f94();
        func_0x000108730ae8(unaff_x21 + 0x98,&puStack_b0);
        *(undefined4 *)(unaff_x21 + 0xc0) = uStack_88;
        *(undefined1 *)(unaff_x21 + 200) = 1;
        func_0x00010873806c();
        break;
      }
    } while (((uint)lStack_70 >> 1 & 1) == 0);
    func_0x0001087381dc();
    func_0x000108731490(&puStack_b0);
    func_0x000108731490(&puStack_e0);
  }
  else {
    puVar1 = puVar9 + 0xe;
    pauVar2 = (undefined1 (*) [16])(puVar9 + 0x25);
    func_0x000107c28258();
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    *(undefined4 *)(puVar9 + 8) = 0x3f800000;
    func_0x000107c316c8(&puStack_b0,&UNK_10f4b2a58);
    puVar22 = (undefined8 *)param_4[1];
    for (param_4 = (undefined8 *)*param_4; uVar7 = param_4 == puVar22, !(bool)uVar7;
        param_4 = param_4 + 0x7a) {
      if (param_6 == 0) {
LAB_10872df88:
        lVar11 = param_4[0x18];
        for (lVar12 = param_4[0x17]; lVar12 != lVar11; lVar12 = lVar12 + 0x18) {
          FUN_1086995ac(puVar9 + 4,lVar12);
        }
      }
      else if (param_6 == 2) {
        if (*(int *)(param_4 + 0xd) == 0) goto LAB_10872df88;
      }
      else if ((param_6 == 1) && (*(int *)(param_4 + 0xd) == 1)) goto LAB_10872df88;
    }
    func_0x000107c316d0(&puStack_b0);
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    func_0x000107c316c8(puVar9 + 9,&UNK_10f4b2a9f);
    lVar12 = 0;
    plVar18 = *(long **)(unaff_x21 + 0xf0);
    plVar20 = (long *)puVar9[6];
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    *puVar1 = 0;
    for (plVar13 = plVar20; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      lVar12 = lVar12 + 1;
    }
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    puStack_e0 = puVar1;
    if (lVar12 != 0) {
      func_0x000107c279b0(puVar1);
      lVar12 = puVar9[0xf];
      puStack_b0 = puVar9 + 0x10;
      plStack_a8 = &lStack_80;
      plStack_a0 = &lStack_70;
      uStack_98 = 0;
      lStack_80 = lVar12;
      for (; lStack_70 = lVar12, plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        func_0x000107c27994(lVar12,plVar20 + 2);
        lVar12 = lStack_70 + 0x18;
      }
      uStack_98 = 1;
      func_0x000107c279b4(&puStack_b0);
      puVar9[0xf] = lVar12;
    }
    func_0x000108738dcc();
    func_0x000107c279b8(&puStack_e0);
    (**(code **)(*plVar18 + 0x18))(puVar9 + 0x23,plVar18,puVar1,param_5);
    FUN_108733b84(&puStack_b0);
    plVar13 = plStack_a8;
    puVar16 = puStack_b0;
    puStack_e0 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    plStack_a8 = (long *)0x0;
    puVar9[0x20] = plVar13;
    puVar9[0x1f] = puVar16;
    lStack_70 = 0;
    func_0x000107c27f98(&lStack_70);
    func_0x000107c27f9c(&puStack_e0);
    func_0x000107c27fec(&puStack_b0);
    puVar9[0x26] = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar13 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 0x200000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar9[0x14] = 0;
    puVar9[0x15] = 0;
    puVar9[0x17] = 0;
    puVar9[0x18] = 0;
    FUN_10862e548(&puStack_b0,puVar9 + 0x23,puVar9 + 0x17);
    FUN_10862e5a4(puVar9 + 0x14,&puStack_b0);
    FUN_10862e394(&puStack_b0);
    FUN_10862e394(puVar9 + 0x17);
    func_0x000107c27b48(pauVar2);
    func_0x000107c27b4c(&puStack_b0,*(undefined8 *)*pauVar2);
    puVar9[0x26] = 0;
    *(undefined8 *)*pauVar2 = 0;
    auVar24 = NEON_ext(*pauVar2,*pauVar2,8,1);
    uStack_d8 = auVar24._8_8_;
    puStack_e0 = auVar24._0_8_;
    lStack_68 = 0;
    lStack_70 = 0;
    lStack_80 = puVar9[0x14] + 0x50;
    uStack_78 = 1;
    __ZNSt3__15mutex4lockEv();
    iVar8 = (int)puVar9[0x14];
    func_0x000108733c0c();
    if (iVar8 == 0) {
      puVar10 = (undefined8 *)0x18;
      __Znwm();
      uVar17 = uStack_d8;
      puVar16 = puStack_e0;
      *puVar10 = &PTR_FUN_110a69b18;
      puStack_e0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      puVar10[2] = uVar17;
      puVar10[1] = puVar16;
      lVar12 = *(long *)(puVar9[0x14] + 0x98);
      *(undefined8 **)(puVar9[0x14] + 0x98) = puVar10;
      if (lVar12 != 0) {
        func_0x000108738200();
      }
    }
    else {
      FUN_10862e5a4(&lStack_70,puVar9 + 0x14);
    }
    func_0x000107c2798c(&lStack_80);
    if (lStack_70 != 0) {
      puVar9[0x1d] = lStack_70;
      puVar9[0x1e] = lStack_68;
      if (lStack_68 != 0) {
        do {
          func_0x000108738224();
        } while (extraout_w10 != 0);
      }
      FUN_108733c54(&puStack_e0);
      FUN_10862e394(puVar9 + 0x1d);
    }
    puVar9[0x22] = plStack_a8;
    puVar9[0x21] = puStack_b0;
    puStack_b0 = (undefined8 *)0x0;
    plStack_a8 = (long *)0x0;
    FUN_10862e394(&lStack_70);
    FUN_108733f58(&puStack_e0);
    func_0x000107c27b58(&puStack_b0);
    lVar12 = puVar9[0x25];
    puVar9[0x25] = 0;
    if (lVar12 != 0) {
      func_0x0001087384bc();
    }
    FUN_10862e394(puVar9 + 0x14);
    func_0x000107c27b58(puVar9 + 0x21);
    func_0x000107c27f98(puVar9 + 0x26);
    puVar9[0x29] = puVar9[0x1f];
    if (puVar9[0x1f] != 0) {
      do {
        func_0x000107c33020();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108733f7c(puVar9 + 0x1f);
    plVar13 = (long *)(unaff_x21 + 0x50);
    FUN_10872e744(puVar9 + 0x28,plVar13,puVar9 + 0x29);
    puVar9[0x27] = puVar9[0x28];
    do {
      func_0x000107c33020();
    } while (extraout_w10_01 != 0);
    func_0x000107c3309c(puVar9[0x27]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x2a) = 0;
      lVar12 = puVar9[0x27];
      func_0x000107c32ffc();
      if (*plVar13 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087385ec();
      plVar20 = extraout_x8;
      do {
        if (*plVar20 == 0) {
          func_0x000107c33024();
          plVar20 = extraout_x8_01;
          uVar19 = extraout_w10_03;
          uVar17 = extraout_x11_00;
        }
        else {
          func_0x000108738318();
          plVar20 = extraout_x8_00;
          uVar19 = extraout_w10_02;
          uVar17 = extraout_x11;
        }
        if ((uVar17 & 1) != 0) {
          func_0x000108738154();
          if ((bool)uVar7) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738084();
            *(long **)(lVar12 + 0x90) = plVar13;
          }
          func_0x000108738040();
          return;
        }
      } while ((uVar19 >> 1 & 1) == 0);
    }
    puVar16 = puVar9 + 0x27;
    FUN_10872eae4(puVar16);
    FUN_10872eb1c(puVar9 + 0x11,puVar16);
    func_0x000108738858();
    func_0x000108738808();
    func_0x000108738800();
    func_0x000108738848();
    func_0x000107c27a04(puVar1);
    func_0x000108738860();
    func_0x0001087383f0();
    lVar11 = puVar9[0x12];
    plVar13 = puVar9 + 0xb;
    for (lVar12 = puVar9[0x11]; uVar7 = lVar12 - lVar11 < 0, lVar12 != lVar11;
        lVar12 = lVar12 + 0xd8) {
      func_0x000107c27994(puVar9 + 0x1a,lVar12);
      func_0x000108738620();
      puVar16 = puVar9 + 0x17;
      FUN_108848654();
      puVar21 = (undefined8 *)puVar9[10];
      puVar10 = puVar16;
      if (puVar21 != (undefined8 *)0x0) {
        uVar17 = (long)puVar21 - 1;
        uVar19 = (uint)puVar21;
        if (((ulong)puVar21 & uVar17) == 0) {
          puVar22 = (undefined8 *)((ulong)(uVar19 - 1) & (ulong)puVar16);
          uVar7 = false;
        }
        else {
          uVar7 = (long)puVar16 - (long)puVar21 < 0;
          puVar22 = puVar16;
          if (puVar21 <= puVar16) {
            uVar5 = 0;
            if (uVar19 != 0) {
              uVar5 = (uint)puVar16 / uVar19;
            }
            puVar22 = (undefined8 *)(ulong)((uint)puVar16 - uVar5 * uVar19);
          }
        }
        plVar20 = *(long **)(puVar9[9] + (long)puVar22 * 8);
        if (plVar20 != (long *)0x0) {
          do {
            while( true ) {
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_10872e3f8;
              puVar14 = (undefined8 *)plVar20[1];
              uVar7 = (long)puVar14 - (long)puVar16 < 0;
              if (puVar14 != puVar16) break;
              puVar10 = plVar20 + 2;
              func_0x000107c28078(puVar10,puVar9 + 0x17);
              if (((ulong)puVar10 & 1) != 0) goto LAB_10872e4ec;
            }
            if (((ulong)puVar21 & uVar17) == 0) {
              puVar14 = (undefined8 *)((ulong)puVar14 & uVar17);
            }
            else if (puVar21 <= puVar14) {
              uVar6 = 0;
              if (puVar21 != (undefined8 *)0x0) {
                uVar6 = (ulong)puVar14 / (ulong)puVar21;
              }
              puVar14 = (undefined8 *)((long)puVar14 - uVar6 * (long)puVar21);
            }
            uVar7 = (long)puVar14 - (long)puVar22 < 0;
          } while (puVar14 == puVar22);
        }
      }
LAB_10872e3f8:
      func_0x000108738f24();
      puVar9[0xe] = puVar10;
      puVar9[0xf] = plVar13;
      puVar9[0x10] = 1;
      *puVar10 = 0;
      puVar10[1] = puVar16;
      func_0x000108738910();
      func_0x00010528b15c();
      uVar23 = func_0x00010873893c(puVar9[0xc]);
      if ((puVar21 == (undefined8 *)0x0) ||
         (func_0x000108738930(uVar23,param_2,(float)puVar21), (bool)uVar7)) {
        func_0x000108739158();
        func_0x000108738168();
        FUN_108730f78(puVar9 + 9);
        puVar21 = (undefined8 *)puVar9[10];
        if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
          puVar22 = (undefined8 *)((ulong)((int)puVar21 - 1) & (ulong)puVar16);
        }
        else {
          puVar22 = puVar16;
          if (puVar21 <= puVar16) {
            uVar17 = 0;
            if (puVar21 != (undefined8 *)0x0) {
              uVar17 = (ulong)puVar16 / (ulong)puVar21;
            }
            puVar22 = (undefined8 *)((long)puVar16 - uVar17 * (long)puVar21);
          }
        }
      }
      lVar15 = puVar9[9];
      plVar18 = *(long **)(lVar15 + (long)puVar22 * 8);
      plVar20 = (long *)*puVar1;
      if (plVar18 == (long *)0x0) {
        *plVar20 = *plVar13;
        *plVar13 = (long)plVar20;
        *(long **)(lVar15 + (long)puVar22 * 8) = plVar13;
        if (*plVar20 != 0) {
          puVar16 = *(undefined8 **)(*plVar20 + 8);
          if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
            puVar16 = (undefined8 *)((ulong)puVar16 & (long)puVar21 - 1U);
          }
          else if (puVar21 <= puVar16) {
            uVar17 = 0;
            if (puVar21 != (undefined8 *)0x0) {
              uVar17 = (ulong)puVar16 / (ulong)puVar21;
            }
            puVar16 = (undefined8 *)((long)puVar16 - uVar17 * (long)puVar21);
          }
          *(long **)(lVar15 + (long)puVar16 * 8) = plVar20;
        }
      }
      else {
        *plVar20 = *plVar18;
        *plVar18 = (long)plVar20;
      }
      func_0x000108739124();
      FUN_1087313f0();
LAB_10872e4ec:
      func_0x000108738b74();
    }
    func_0x000108738a58();
    func_0x000108730ae8(&puStack_b0,puVar9 + 9);
    uStack_88 = uStack_f0;
    func_0x0001087385e0();
    do {
      puStack_e0 = (undefined8 *)0x0;
      lVar11 = lVar12 + 0x10;
      func_0x00010873818c(lVar11,&puStack_e0);
      if ((int)lVar11 != 0) {
        func_0x000108738f94();
        func_0x000108730ae8(lVar12 + 0x98,&puStack_b0);
        *(undefined4 *)(lVar12 + 0xc0) = uStack_88;
        *(undefined1 *)(lVar12 + 200) = 1;
        func_0x00010873806c();
        break;
      }
    } while (((uint)puStack_e0 >> 1 & 1) == 0);
    func_0x0001087381dc();
    func_0x000108731490(&puStack_b0);
    func_0x000108738c18();
    func_0x000108738810();
    func_0x000108738838();
  }
  func_0x000107c33080();
  func_0x000107c33090();
  return;
}



/* Entry: 10872e700; end: 10872e743;  */

void FUN_10872e700(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x00010873845c();
  return;
}



/* Entry: 10872e744; end: 10872eae3;  */

void FUN_10872e744(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar6;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  func_0x000108738adc();
  func_0x000107c33144();
  lVar8 = param_1;
  func_0x000108739180(FUN_108737aa0);
  *(long *)(lVar8 + 0x38) = unaff_x21;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  FUN_108733b84(&lStack_60);
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  *(long *)(param_1 + 0x10) = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c27fec(&lStack_60);
  lStack_60 = *(long *)(param_1 + 0x10);
  if (lStack_60 != 0) {
    do {
      func_0x000107c33020();
    } while (extraout_w10_00 != 0);
  }
  *extraout_x8 = lStack_60;
  lStack_60 = 0;
  func_0x000107c27f9c(&lStack_60);
  func_0x000107c28874(&lStack_60);
  func_0x000107c28878(&uStack_68,2);
  uVar3 = uStack_68;
  uStack_68 = 0;
  func_0x000107c28888(lStack_50 + 0x18,uVar3);
  func_0x000107c28890(&uStack_68);
  *(undefined8 *)(lStack_50 + 8) = 2;
  func_0x000107c2887c(lStack_50,&uStack_58);
  func_0x000107c28894(lStack_50,0,unaff_x21 + 0x38);
  func_0x000107c28898(lStack_50,1);
  lVar8 = lStack_60;
  uStack_68 = 0;
  lStack_60 = 0;
  *(long *)(param_1 + 0x30) = lVar8;
  func_0x00010873845c();
  plVar5 = &lStack_60;
  func_0x000107c2889c();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  do {
    func_0x000107c33020();
  } while (extraout_w10_01 != 0);
  func_0x000107c3309c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c33278();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    lVar8 = *(long *)(param_1 + 0x28);
    func_0x000107c33064();
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar5;
    }
    func_0x000108738a88();
    plVar6 = extraout_x8_01;
    do {
      if (*plVar6 == 0) {
        func_0x000107c33024();
        plVar6 = extraout_x8_03;
        uVar2 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar6 = extraout_x8_02;
        uVar2 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087381b4();
        if ((bool)in_ZR) {
          func_0x000108738134();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000108738330();
          func_0x000108738f2c();
          *(undefined1 *)plVar5 = uVar1;
          func_0x0001087380fc(0);
          *(long **)(lVar8 + 0x90) = plVar5;
        }
        func_0x0001087381a4();
        *(long *)(extraout_x8_07 + 0x20) = lVar9;
        goto LAB_10872ea14;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar5 = (long *)(param_1 + 0x28);
  func_0x000107c28870();
  lVar8 = *plVar5;
  func_0x000107c3308c();
  func_0x000107c330bc();
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    func_0x000108738498();
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&lStack_60,&UNK_10f4afc25,lVar8 + 0x20);
    FUN_10865aaac(plVar5,&lStack_60);
    func_0x0001087383dc();
    func_0x000108738f48();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10872ea64);
    (*pcVar4)();
  }
  *(undefined8 *)(param_1 + 0x28) = *unaff_x20;
  do {
    func_0x000107c33020();
  } while (extraout_w10_04 != 0);
  func_0x000107c3309c(*(undefined8 *)(param_1 + 0x28));
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x000107c33170();
    lVar8 = *(long *)(param_1 + 0x28);
    func_0x000107c33064();
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar5;
    }
    func_0x000108738a88();
    plVar6 = extraout_x8_04;
    do {
      if (*plVar6 == 0) {
        func_0x000107c33024();
        plVar6 = extraout_x8_06;
        uVar2 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x000108738318();
        plVar6 = extraout_x8_05;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087381b4();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738084();
          *(long **)(lVar8 + 0x90) = plVar5;
        }
        func_0x0001087381a4();
        *(long *)(extraout_x8_08 + 0x20) = lVar9;
LAB_10872ea14:
        func_0x000108738144(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_10872eae4(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x18);
  do {
    lStack_60 = 0;
    lVar9 = lVar8 + 0x10;
    func_0x00010873818c(lVar9,&lStack_60);
    if ((int)lVar9 != 0) {
      FUN_108733f34(lVar8 + 0x98);
      func_0x000108738da8();
      FUN_1087324bc();
      *(undefined1 *)(lVar8 + 0xb0) = 1;
      func_0x000108738450(lVar8 + 0x10);
      func_0x000107c31508(lVar8,param_1 + 0x18);
      break;
    }
  } while (((uint)lStack_60 >> 1 & 1) == 0);
  func_0x0001087383ac(param_1 + 0x18);
  func_0x000107c3308c();
  func_0x000107c33080();
  func_0x000107c330d8();
  func_0x000107c33090();
  return;
}



/* Entry: 10872eae4; end: 10872eb1b;  */

long FUN_10872eae4(void)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10872eb14);
  (*pcVar1)();
}



/* Entry: 10872eb1c; end: 10872ebd3;  */

long * FUN_10872eb1c(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong extraout_x8;
  
  bVar2 = param_2 <= param_1;
  bVar3 = param_1 == param_2;
  if (!bVar3) {
    lVar5 = *param_2;
    lVar1 = param_2[1];
    lVar6 = *param_1;
    func_0x000108738d24(lVar1 - lVar5);
    if (!bVar2 || bVar3) {
      if (extraout_x8 <= (ulong)(param_1[1] - lVar6)) {
        FUN_108730d74(lVar5,lVar1);
        func_0x000104be4b80(param_1,lVar5);
        return param_1;
      }
      FUN_108730d74(lVar5,lVar5 + (param_1[1] - lVar6));
    }
    else {
      func_0x00010862e5e4(param_1);
      plVar4 = param_1;
      func_0x00010528b518(param_1,(long)extraout_x8 / 0xd8);
      FUN_108730bdc(param_1,plVar4);
      func_0x000108738df0();
    }
    FUN_108730b58();
  }
  return param_1;
}



/* Entry: 10872ebd4; end: 10872ecb7;  */

ulong FUN_10872ebd4(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x1a8);
  if ((uVar8 != 0) && (*(long *)(param_1 + 0x1b8) != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x1a0) + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar5 = plVar6[1];
          if (uVar5 != uVar3) break;
          lVar4 = (long)(plVar6 + 2);
          func_0x000107c28078(lVar4,param_2);
          if ((int)lVar4 != 0) {
            return (ulong)*(uint *)(plVar6 + 5) | 0x100000000;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar5 = uVar5 & uVar9;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
      } while (uVar5 == uVar10);
    }
  }
  return 0;
}



/* Entry: 10872ecb8; end: 10872edeb;  */

void FUN_10872ecb8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_9a8 [976];
  long alStack_5d8 [59];
  byte bStack_400;
  long alStack_3f8 [59];
  byte bStack_220;
  undefined1 auStack_218 [488];
  
  FUN_10886bba0(auStack_218,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c2905c(alStack_3f8,auStack_218);
  _bzero(alStack_5d8,0x1e0);
  while ((((bStack_220 & 1) != 0 || ((bStack_400 & 1) != 0)) && (alStack_3f8[0] != alStack_5d8[0])))
  {
    plVar1 = alStack_3f8;
    func_0x000107c29060();
    if (((*(byte *)(plVar1 + 0x2a) & 1) != 0) && ((int)plVar1[0x21] == 1)) {
      FUN_1088460dc(auStack_9a8);
      func_0x000108738d78();
      FUN_1086d6ea8();
      func_0x000107c288d0(auStack_9a8);
    }
    func_0x000107c29158(alStack_3f8);
  }
  func_0x000108738c74(alStack_5d8);
  func_0x000108738c74(alStack_3f8);
  func_0x000107c29150(auStack_218);
  return;
}



/* Entry: 10872edec; end: 10872f6d3;  */

void FUN_10872edec(long param_1,undefined1 param_2)

{
  uint3 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  undefined8 *extraout_x8_06;
  ulong extraout_x8_07;
  undefined8 *puVar19;
  undefined8 *extraout_x8_08;
  undefined1 extraout_w9;
  undefined8 extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint uVar20;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  long *plStack_238;
  ulong uStack_230;
  undefined **ppuStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined ***pppuStack_1d0;
  undefined8 *puStack_1c8;
  byte bStack_1bf;
  undefined8 *puStack_108;
  char cStack_18;
  
  func_0x000107c33218();
  func_0x0001087390a8();
  puVar11 = (undefined8 *)0x1c8;
  __Znwm();
  *puVar11 = FUN_108735ab8;
  puVar11[1] = FUN_108736248;
  *(undefined1 *)((long)puVar11 + 0x1c5) = param_2;
  puVar11[0x36] = param_1;
  puVar12 = puVar11 + 2;
  FUN_108733f9c();
  func_0x000108738cf4();
  FUN_10872f6d4();
  puVar11[0x27] = 0;
  puVar11[0x28] = 0;
  *(undefined1 *)(puVar11 + 0x29) = 0;
  func_0x000107c28258();
  plVar14 = puVar11 + 0x1a;
  *plVar14 = (long)&PTR_FUN_110a609a8;
  puVar11[0x28] = puVar12;
  *(undefined1 *)(puVar11 + 0x29) = 1;
  plVar13 = *(long **)(param_1 + 0x100);
  puVar11[0x1c] = 0;
  puVar11[0x1d] = 0;
  puVar11[0x1b] = 0;
  *(undefined4 *)(puVar11 + 0x1e) = 0x1ee;
  (**(code **)(*plVar13 + 0x50))(plVar13,plVar14);
  puVar12 = puVar11 + 0x27;
  puVar2 = puVar11 + 0x2d;
  func_0x000107c2882c();
  func_0x000108738464(*(undefined8 *)(param_1 + 0x130));
  do {
    func_0x000107c33020();
  } while (extraout_w10 != 0);
  func_0x000107c33048();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar11 + 0x1c4) = 0;
    lVar22 = puVar11[4];
    func_0x000107c32ffc();
    lVar24 = *plVar14;
    if (lVar24 == 0) {
      func_0x000107c3a5c0();
      lVar24 = *plVar14;
    }
    func_0x0001087385ec();
    plVar13 = extraout_x8;
    do {
      if (*plVar13 == 0) {
        func_0x000107c33024();
        plVar13 = extraout_x8_01;
        uVar20 = extraout_w10_01;
        uVar27 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar13 = extraout_x8_00;
        uVar20 = extraout_w10_00;
        uVar27 = extraout_w11;
      }
      if ((uVar27 & 1) != 0) {
        func_0x000108738154();
        if ((bool)in_ZR) {
          func_0x000108738134();
          uVar9 = extraout_w8;
          if ((bool)in_CY) {
            uVar9 = extraout_w9;
          }
          func_0x000108738330();
          func_0x000108739020();
          *(undefined1 *)plVar14 = uVar9;
          func_0x0001087380e4(0);
        }
        func_0x0001087381a4();
        *(long *)(extraout_x8_02 + 0x20) = lVar24;
        func_0x000108738144(*(undefined8 *)(lVar22 + 0x90));
        puVar12 = (undefined8 *)(lVar22 + 0x10);
        goto LAB_10872f4fc;
      }
    } while ((uVar20 >> 1 & 1) == 0);
  }
  func_0x000107c33120();
  lVar22 = puVar11[0x36];
  puVar11[0x37] = *plVar14;
  func_0x000107c33084();
  plVar13 = *(long **)(lVar22 + 0x100);
  uStack_1d8 = 0;
  pppuStack_1d0 = (undefined ***)0x0;
  ppuStack_1e8 = &PTR_FUN_110a609a8;
  uStack_1e0 = 0;
  puStack_1c8 = (undefined8 *)CONCAT44(puStack_1c8._4_4_,0x1f0);
  func_0x000108738a20();
  plStack_238 = plVar14;
  (**(code **)(*plVar13 + 0x18))(plVar13,&ppuStack_1e8,&plStack_238);
  lVar22 = puVar11[0x36];
  func_0x00010873867c();
  puVar11[0x2a] = puVar11 + 0x37;
  puVar11[0x2b] = puVar12;
  puVar11[0x2c] = lVar22;
  in_ZR = *(char *)((long)puVar11 + 0x1bc) == '\x01';
  if ((bool)in_ZR) {
    FUN_10872f714();
    func_0x000108739070();
    func_0x0001087385e0();
    uVar4 = *(undefined4 *)(puVar11 + 0x6b);
    do {
      ppuStack_1e8 = (undefined **)0x0;
      lVar24 = lVar22 + 0x10;
      func_0x00010873818c(lVar24,&ppuStack_1e8);
      if ((int)lVar24 != 0) {
        func_0x000108738820();
        *(undefined4 *)(lVar22 + 0x98) = uVar4;
        *(undefined1 *)(lVar22 + 0xb0) = 0;
        *(undefined1 *)(lVar22 + 0xb8) = 1;
        func_0x00010873806c();
        break;
      }
    } while (((uint)ppuStack_1e8 >> 1 & 1) == 0);
    func_0x0001087381dc();
  }
  else {
    puVar1 = (uint3 *)(puVar11[0x36] + 0x31);
    cVar5 = *(char *)puVar1;
    bVar6 = *(byte *)(puVar11[0x36] + 0x33);
    *(uint *)(puVar11 + 0x38) = (uint)*puVar1;
    func_0x000108738684();
    uStack_1d8 = extraout_x9;
    pppuStack_1d0 = &ppuStack_1e8;
    func_0x00010873904c();
    lVar22 = puVar11[0x36];
    func_0x000108738c50();
    puVar7 = PTR___ZSt7nothrow_1103469d8;
    if ((*(byte *)(lVar22 + 0x48) & bVar6) != 0) {
      lVar22 = puVar11[0x2d];
      lVar24 = puVar11[0x2e];
      lVar18 = lVar24 - lVar22;
      ppuStack_1e8 = (undefined **)0x0;
      uStack_1e0 = 0;
      uVar23 = lVar18 / 0x3d0;
      uVar28 = uVar23;
      if (lVar18 < 1) {
        uVar28 = 0;
      }
      else {
        for (; 0 < (long)uVar28; uVar28 = uVar28 >> 1) {
          lVar18 = uVar28 * 0x3d0;
          __ZnwmRKSt9nothrow_t(lVar18,puVar7);
          if (lVar18 != 0) goto LAB_10872f0c0;
        }
        lVar18 = 0;
LAB_10872f0c0:
        plStack_238 = (long *)0x0;
        uStack_230 = uVar28;
        FUN_1087343b4(&ppuStack_1e8,lVar18);
        uStack_1e0 = uVar28;
        func_0x000108739034();
      }
      FUN_108734130(lVar22,lVar24,uVar23,ppuStack_1e8,uVar28);
      func_0x00010873907c();
    }
    in_ZR = *(char *)((long)puVar11 + 0x1c5) == '\x01';
    if (((bool)in_ZR) && (cVar5 != '\0')) {
      FUN_10872ecb8(puVar11 + 0xf,*(undefined8 *)(puVar11[0x36] + 0xb0));
      uVar28 = puVar11[0x10];
      for (uVar23 = puVar11[0xf]; in_ZR = uVar23 == uVar28, !(bool)in_ZR; uVar23 = uVar23 + 0x3d0) {
        uVar17 = uVar23;
        FUN_1086995ac(puVar11 + 0x1f);
        if ((uVar17 & 1) != 0) {
          FUN_1086d6ea8(puVar2,uVar23);
        }
      }
      func_0x000108738bc4();
    }
    plVar14 = (long *)puVar11[0x36];
    func_0x000108738e6c(puVar11 + 0x15,plVar14,puVar2);
    func_0x000108738464(puVar11[0x15]);
    do {
      func_0x000107c33020();
    } while (extraout_w10_02 != 0);
    func_0x000107c33048();
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar11 + 0x1c4) = 1;
      func_0x000107c32ffc();
      if (*plVar14 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c330d0();
      plVar14 = extraout_x8_03;
      do {
        if (*plVar14 != 0) {
          func_0x000108738318();
          plVar14 = extraout_x8_04;
          uVar20 = extraout_w10_03;
          if ((extraout_w11_01 & 1) == 0) goto LAB_10872f1bc;
LAB_10872f4dc:
          func_0x000107c33010();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x000107c3300c();
          func_0x000107c32fec();
          puVar12 = extraout_x8_08;
LAB_10872f4fc:
          *puVar12 = 0;
          goto LAB_10872f500;
        }
        func_0x000107c33024();
        plVar14 = extraout_x8_05;
        uVar20 = extraout_w10_04;
        if ((extraout_w11_02 & 1) != 0) goto LAB_10872f4dc;
LAB_10872f1bc:
      } while ((uVar20 >> 1 & 1) == 0);
    }
    puVar25 = puVar11 + 4;
    FUN_10872f9ec(puVar25);
    FUN_108730e90(puVar11 + 0xf,puVar25);
    lVar22 = puVar11[0x36];
    func_0x000107c33084();
    func_0x000108738850();
    puVar25 = *(undefined8 **)(lVar22 + 0x100);
    uStack_1d8 = 0;
    pppuStack_1d0 = (undefined ***)0x0;
    ppuStack_1e8 = &PTR_FUN_110a609a8;
    uStack_1e0 = 0;
    puStack_1c8 = (undefined8 *)CONCAT44(puStack_1c8._4_4_,0x1f1);
    func_0x000108738b84();
    func_0x000108739084();
    func_0x000108738a20();
    func_0x000108738ce4();
    func_0x000108738c58();
    func_0x000108738b7c();
    func_0x00010873867c();
    func_0x0001087391f8();
    FUN_10872f81c(puVar11 + 0x2a);
    func_0x000108738d30();
    if ((long)puVar12 - (long)puVar25 != 0) {
      uVar23 = ((long)puVar12 - (long)puVar25) / 0x3d0;
      func_0x000108738430();
      if (extraout_x8_07 <= uVar23) goto LAB_10872f518;
      puStack_1c8 = extraout_x8_06;
      func_0x0001087319f4();
      func_0x00010873863c();
      func_0x000108731a74(&ppuStack_1e8);
      puVar25 = (undefined8 *)puVar11[0x2d];
      puVar12 = (undefined8 *)puVar11[0x2e];
    }
    lVar22 = puVar11[0x36];
    for (; in_ZR = puVar25 == puVar12, !(bool)in_ZR; puVar25 = puVar25 + 0x7a) {
      func_0x000108738af8();
      puVar16 = puVar11 + 0x24;
      func_0x00010528aebc(puVar16);
      puVar21 = (undefined8 *)puVar25[0x17];
      puVar3 = (undefined8 *)puVar25[0x18];
      while( true ) {
        uVar9 = puVar3 <= puVar21;
        bVar10 = puVar21 == puVar3;
        if (bVar10) break;
        puVar29 = (undefined8 *)puVar11[0x10];
        if ((puVar29 != (undefined8 *)0x0) && (puVar11[0x12] != 0)) {
          puVar15 = puVar21;
          FUN_108848654();
          uVar23 = (long)puVar29 - 1;
          if (((ulong)puVar29 & uVar23) == 0) {
            puVar26 = (undefined8 *)((ulong)puVar15 & uVar23);
          }
          else {
            puVar26 = puVar15;
            if (puVar29 <= puVar15) {
              uVar20 = 0;
              uVar27 = (uint)puVar29;
              if (uVar27 != 0) {
                uVar20 = (uint)puVar15 / uVar27;
              }
              puVar26 = (undefined8 *)(ulong)((uint)puVar15 - uVar20 * uVar27);
            }
          }
          plVar14 = *(long **)(puVar11[0xf] + (long)puVar26 * 8);
          puVar16 = puVar15;
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_10872f384;
                puVar19 = (undefined8 *)plVar14[1];
                if (puVar15 != puVar19) break;
                func_0x000108739064();
                if ((int)puVar16 != 0) {
                  uVar23 = puVar11[0x25];
                  if (uVar23 < (ulong)puVar11[0x26]) {
                    func_0x000108738f58();
                    lVar24 = uVar23 + 0xd8;
                  }
                  else {
                    func_0x0001087391bc();
                    func_0x000108738f88();
                    func_0x0001087391a8();
                    func_0x000108738fbc();
                    puVar16 = (undefined8 *)puVar11[6];
                    FUN_108730c28(puVar16,plVar14 + 5);
                    puVar11[6] = puVar11[6] + 0xd8;
                    func_0x000108738f7c();
                    lVar24 = puVar11[0x25];
                    func_0x000108738b4c();
                  }
                  puVar11[0x25] = lVar24;
                  goto LAB_10872f384;
                }
              }
              if (((ulong)puVar29 & uVar23) == 0) {
                puVar19 = (undefined8 *)((ulong)puVar19 & uVar23);
              }
              else if (puVar29 <= puVar19) {
                uVar28 = 0;
                if (puVar29 != (undefined8 *)0x0) {
                  uVar28 = (ulong)puVar19 / (ulong)puVar29;
                }
                puVar19 = (undefined8 *)((long)puVar19 - uVar28 * (long)puVar29);
              }
            } while (puVar19 == puVar26);
          }
        }
LAB_10872f384:
        puVar21 = puVar21 + 3;
      }
      func_0x000108739234();
      if (bVar10) {
        puVar16 = *(undefined8 **)(lVar22 + 0xb0);
        func_0x0001087386d8(&ppuStack_1e8,puVar16,puVar25);
        uVar9 = cStack_18 != '\0';
        if ((cStack_18 == '\x01') && ((bStack_1bf >> 4 & 1) != 0)) {
          puVar16 = puStack_108;
          FUN_108844330(&plStack_238,puStack_108);
          func_0x000108738fb0();
          func_0x000108738c00();
        }
        func_0x000108738c48();
      }
      func_0x000108738ab0();
      if ((bool)uVar9) {
        func_0x000108738d48();
        FUN_108731bcc();
        lVar24 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          lVar24 = (long)(puVar11[0x34] - puVar11[0x33]) / (long)puVar3;
        }
        func_0x0001087319b8(puVar11 + 0x15,puVar16,lVar24,extraout_x8_06);
        func_0x000108738234(puVar11[0x17]);
        func_0x000108738960();
        func_0x0001087387ec();
        puVar21 = (undefined8 *)puVar11[0x34];
        func_0x000108738ba4();
      }
      else {
        func_0x000108738234();
        func_0x000108738960(puVar21);
        puVar21 = puVar21 + 0x19;
      }
      puVar11[0x34] = puVar21;
      func_0x000108738b5c();
      func_0x000108738af0();
    }
    lVar22 = puVar11[3];
    do {
      ppuStack_1e8 = (undefined **)0x0;
      lVar24 = lVar22 + 0x10;
      func_0x00010873818c(lVar24,&ppuStack_1e8);
      if ((int)lVar24 != 0) {
        FUN_1087322dc(lVar22 + 0x98);
        uVar30 = puVar11[0x33];
        *(undefined8 *)(lVar22 + 0xa0) = puVar11[0x34];
        *(undefined8 *)(lVar22 + 0x98) = uVar30;
        *(undefined8 *)(lVar22 + 0xa8) = *extraout_x8_06;
        puVar11[0x33] = 0;
        puVar11[0x34] = 0;
        puVar11[0x35] = 0;
        *(undefined1 *)(lVar22 + 0xb0) = 1;
        *(undefined1 *)(lVar22 + 0xb8) = 1;
        func_0x000108738450(lVar22 + 0x10);
        func_0x000108738fe8();
        break;
      }
    } while (((uint)ppuStack_1e8 >> 1 & 1) == 0);
    func_0x0001087383ac(puVar11 + 3);
    func_0x000108738a48();
    func_0x000108738bbc();
    func_0x000100864b68(puVar11 + 0x1f);
    func_0x000107c29108(puVar2);
  }
  func_0x000107c33080();
  func_0x000107c33090();
LAB_10872f500:
  func_0x000108738dfc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10872f518:
  FUN_10873187c();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10872f520);
  (*pcVar8)();
}



/* Entry: 10872f6d4; end: 10872f713;  */

void FUN_10872f6d4(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x00010873845c();
  return;
}



/* Entry: 10872f714; end: 10872f81b;  */

void FUN_10872f714(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  iVar8 = (int)*(undefined8 *)(param_1 + 0x148) + 0x10;
  func_0x000107c314e8();
  if (iVar8 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x148) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    lVar9 = *(long *)(param_1 + 0x148);
    if (*(char *)(lVar9 + 0xb8) == '\x01') {
      func_0x000107c314e4(lVar9 + 0x10);
      func_0x000108738498();
      FUN_1086772d8();
      func_0x000108738f48();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10872f7d4);
      (*pcVar7)();
    }
    uVar2 = *(long *)(lVar9 + 0xe0) + 1;
    uVar10 = *(ulong *)(lVar9 + 0xa0);
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar2 / uVar10;
    }
    *(ulong *)(lVar9 + 0xe0) = uVar2 - uVar6 * uVar10;
    *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
    *pbVar1 = 0;
    func_0x000108738ef4(*(undefined8 *)(param_1 + 0x148));
  }
  return;
}



/* Entry: 10872f81c; end: 10872f9eb;  */

void FUN_10872f81c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  lVar5 = param_1[2];
  plVar3 = *(long **)(lVar5 + 0x100);
  if ((*(ulong *)*param_1 >> 0x20 & 1) == 0) {
    func_0x000108738ca4();
    uStack_80 = 0x1ef;
    puVar1 = auStack_a0;
    func_0x000108738ec0(puVar1);
    func_0x000107c278b8(auStack_f8,&DAT_10f4b2a4c);
    func_0x000107c2881c(puVar1,auStack_f8,param_2);
    func_0x000107c2884c(auStack_e0,puVar1);
    func_0x000108738818(*(undefined8 *)(*plVar3 + 0x50));
    func_0x0001087385d8();
    puVar1 = auStack_f8;
  }
  else {
    func_0x000108738ca4();
    uStack_80 = 0x1ef;
    func_0x000107c278b8(auStack_b8,"error_code");
    uVar2 = *param_1;
    FUN_108843ae8(uVar2);
    puVar1 = auStack_a0;
    func_0x000107c28824(puVar1,auStack_b8,uVar2);
    func_0x000108738ec0();
    func_0x000107c2884c(auStack_78,puVar1);
    func_0x000108738818(*(undefined8 *)(*plVar3 + 0x50));
    func_0x000107c2882c(auStack_78);
    puVar1 = auStack_b8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  func_0x000108738ec8();
  uVar4 = *(undefined8 *)(lVar5 + 0x100);
  func_0x000108738ca4();
  uStack_80 = 0x1f2;
  puVar1 = auStack_a0;
  func_0x000108738ec0(puVar1);
  uVar2 = param_1[1];
  func_0x000107c2825c();
  uStack_100 = uVar2;
  func_0x000107c33220();
  (*extraout_x8)(uVar4,puVar1,&uStack_100);
  func_0x000108738ec8();
  func_0x000107c28288(param_1[1]);
  return;
}



/* Entry: 10872f9ec; end: 10872fa23;  */

long FUN_10872f9ec(void)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10872fa1c);
  (*pcVar1)();
}



/* Entry: 10872fa24; end: 10872fb8b;  */

void FUN_10872fa24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_58;
  long alStack_50 [2];
  uint uStack_3c;
  undefined8 uStack_38;
  
  FUN_108734aac(&uStack_58);
  FUN_10872fb8c(param_1,uStack_58);
  uStack_3c = (uint)*(uint3 *)(param_2 + 0x31);
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  FUN_108705af0(uVar1,&uStack_3c);
  do {
    uStack_38 = 0;
    lVar2 = alStack_50[0] + 0x10;
    func_0x00010873818c(lVar2,&uStack_38);
    if ((int)lVar2 != 0) {
      *(int *)(alStack_50[0] + 0x98) = (int)uVar1;
      *(undefined1 *)(alStack_50[0] + 0x9c) = 1;
      *(undefined1 *)(alStack_50[0] + 0xa0) = 1;
      func_0x000108738450(alStack_50[0] + 0x10);
      func_0x000107c31508(alStack_50[0],alStack_50);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x0001087383ac(alStack_50);
  func_0x000107c27fb8(&uStack_58);
  return;
}



/* Entry: 10872fb8c; end: 10872fbcb;  */

void FUN_10872fb8c(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x00010873845c();
  return;
}



/* Entry: 10872fbcc; end: 1087301c3;  */

void FUN_10872fbcc(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint extraout_w8;
  code *extraout_x8;
  long *extraout_x8_00;
  long *plVar12;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  uint extraout_w9;
  undefined8 *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  undefined8 *extraout_x10;
  long *extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long unaff_x26;
  undefined8 *puVar15;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_b0;
  undefined8 uStack_ac;
  undefined1 uStack_a4;
  undefined1 auStack_a0 [48];
  byte bStack_70;
  
  func_0x000107c33288();
  puVar8 = (undefined8 *)0x290;
  __Znwm();
  *puVar8 = FUN_108736cfc;
  puVar8[1] = FUN_108737104;
  puVar8[0x50] = unaff_x21;
  puVar10 = puVar8 + 2;
  FUN_108734b38();
  func_0x000108738e2c();
  if (*(char *)(unaff_x21 + 0x180) == '\x01') {
    func_0x000108738498();
    func_0x000108738570();
    *puVar10 = extraout_x8_05;
    *(undefined4 *)(puVar10 + 1) = 6;
    func_0x0001087382ac();
    ___cxa_throw();
LAB_108730198:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10873019c);
    (*pcVar6)();
  }
  lVar9 = *(long *)(unaff_x21 + 0xd0);
  func_0x000107c330f8();
  (*extraout_x8)();
  FUN_10886b8f4(&uStack_100,*(undefined8 *)(unaff_x21 + 0xb0));
  puVar10 = &uStack_100;
  func_0x000107c29670();
  puVar1 = puVar8 + 0x45;
  func_0x000107c29020(&uStack_100);
  puVar8[0x41] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3f] = &PTR_FUN_110a97ea0;
  puVar8[0x43] = 0;
  puVar8[0x42] = 0;
  *(undefined4 *)(puVar8 + 0x44) = 0;
  if ((param_2 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar2 = *(long *)(unaff_x21 + 0x38) + (long)puVar10;
  uVar7 = lVar9 == lVar2;
  if (lVar9 < lVar2) {
    puVar10 = *(undefined8 **)(unaff_x21 + 0xb0);
    FUN_10886b974(&uStack_100);
    func_0x000108738e90();
    func_0x000108738c38();
    if ((bStack_70 & 1) == 0) {
      func_0x000108738498();
      func_0x000108738570();
      *puVar10 = extraout_x8_06;
      *(undefined4 *)(puVar10 + 1) = 0;
      func_0x0001087382ac();
      ___cxa_throw();
      goto LAB_108730198;
    }
    func_0x000108738e78();
    func_0x0001087389a8();
  }
  else {
    puVar10 = puVar8 + 0x4f;
    *(undefined1 *)(unaff_x21 + 0x180) = 1;
    puVar8[4] = FUN_108734b14;
    puVar8[5] = &PTR_DAT_110a69c58;
    puVar8[6] = unaff_x21;
    plVar11 = *(long **)(unaff_x21 + 0xc0);
    (**(code **)(*plVar11 + 0xd8))(puVar10);
    *puVar1 = *puVar10;
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(*puVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x51) = 0;
      lVar9 = puVar8[0x45];
      func_0x000107c32ffc();
      if (*plVar11 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087385ec();
      plVar12 = extraout_x8_00;
      do {
        if (*plVar12 == 0) {
          func_0x000107c33024();
          plVar12 = extraout_x8_02;
          uVar5 = extraout_w10_01;
          uVar13 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar12 = extraout_x8_01;
          uVar5 = extraout_w10_00;
          uVar13 = extraout_w11;
        }
        if ((uVar13 & 1) != 0) {
          func_0x000108738154();
          if ((bool)uVar7) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738084();
            *(long **)(lVar9 + 0x90) = plVar11;
          }
          func_0x000108738040();
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
    func_0x0001087385f8(*puVar1);
    if ((extraout_w9 >> 5 & 1) != 0) {
      func_0x0001087384e4(*extraout_x10,puVar8 + 0x4e);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar8 + 0x4e);
      goto LAB_108730198;
    }
    func_0x000108738e84();
    func_0x000107c27f9c(puVar1);
    func_0x000107c27f9c(puVar10);
    func_0x000107c330f8(*(undefined8 *)(puVar8[0x50] + 0xd0));
    (*extraout_x8_03)();
    func_0x000108738e60();
    func_0x000108738840();
  }
  *puVar1 = 0;
  puVar8[0x46] = 0;
  puVar8[0x47] = 0;
  FUN_108730340(puVar1,(long)*(int *)(puVar8 + 0x42));
  puVar10 = puVar8 + 0x4b;
  func_0x0001087389ec(puVar8 + 0x41);
  plVar11 = extraout_x8_04;
  if (!(bool)uVar7) {
    plVar11 = extraout_x10_00;
  }
  func_0x000108738c84((long)*(int *)(puVar8 + 0x42));
  do {
    if (unaff_x26 == 0) {
      FUN_108730498(puVar8 + 2,puVar1);
      func_0x000104be58b8(puVar1);
      func_0x0001087386e0();
      func_0x000107c33080();
      func_0x000107c33090();
      return;
    }
    lVar9 = *plVar11;
    uVar14 = *(undefined8 *)(puVar8[0x50] + 0xb0);
    func_0x0001087386c8();
    func_0x000107c29ee0(&uStack_100);
    func_0x0001087386d8(puVar8 + 4,uVar14,&uStack_100);
    func_0x000108738674();
    uVar7 = *(char *)(puVar8 + 0x3e) == '\x01';
    if ((bool)uVar7) {
      puVar15 = puVar8 + 4;
      func_0x0001086a74d4();
      if (((ulong)puVar15 & 1) != 0) goto LAB_10872fe34;
    }
    else {
LAB_10872fe34:
      uStack_b0 = uStack_b0 & 0xffffff00;
      uStack_a4 = (*(byte *)(lVar9 + 0x10) >> 1 & 1) != 0;
      if ((bool)uStack_a4) {
        uStack_b0 = (uint)*(undefined8 *)(*(long *)(lVar9 + 0x50) + 0x10);
        uStack_ac = 0;
      }
      func_0x0001087386c8();
      func_0x000107c29ee0(auStack_a0);
      uVar3 = *(ulong *)(lVar9 + 0x30);
      func_0x000108738e20(*(undefined8 *)(lVar9 + 0x38));
      uVar14 = *(undefined8 *)(lVar9 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar10,*(ulong *)(lVar9 + 0x40) & 0xfffffffffffffffc);
      uVar4 = *(undefined1 *)(lVar9 + 0x60);
      uStack_f8 = puVar8[0x49];
      uStack_100 = puVar8[0x48];
      puVar8[0x49] = 0;
      puVar8[0x4a] = 0;
      puVar8[0x48] = 0;
      uStack_e8 = (undefined4)uVar14;
      uStack_d8 = puVar8[0x4c];
      uStack_e0 = *puVar10;
      uStack_d0 = puVar8[0x4d];
      *puVar10 = 0;
      puVar8[0x4c] = 0;
      puVar8[0x4d] = 0;
      func_0x00010873920c(uVar4);
      puVar15 = (undefined8 *)(lVar9 + 0x18);
      func_0x0001008527a4(*puVar15);
      if (!(bool)uVar7) {
        puVar15 = extraout_x9;
      }
      func_0x0001072eab64(auStack_118,puVar15,puVar15 + *(int *)(lVar9 + 0x20));
      FUN_1087303c0(puVar1,auStack_a0,uVar3 & 0xfffffffffffffffc,&uStack_100,&uStack_b0,auStack_118)
      ;
      func_0x000108738a68();
      func_0x000108738868();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
      func_0x000108738a18();
      func_0x000107c27914(auStack_a0);
    }
    func_0x000108738b64();
    plVar11 = plVar11 + 1;
    unaff_x26 = unaff_x26 + -8;
  } while( true );
}



/* Entry: 1087301c4; end: 108730203;  */

void FUN_1087301c4(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x00010873845c();
  return;
}



/* Entry: 108730204; end: 108730207;  */

void FUN_108730204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 108730208; end: 10873033f;  */

void FUN_108730208(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined1 auStack_80 [48];
  byte bStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000108738714();
  lStack_88 = 0;
  auStack_80[0] = 0;
  bStack_50 = 0;
  if (*(char *)(param_2 + 0x40) == '\0') {
    lStack_88 = 0;
  }
  else {
    func_0x000108734cc0(auStack_80,unaff_x20 + 0x10);
    func_0x000108734c9c(unaff_x20 + 0x10);
  }
  lVar3 = *(long *)(unaff_x20 + 8);
  *(long *)(unaff_x20 + 8) = lStack_88;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_88 = lVar3;
  if ((bStack_50 & 1) == 0) {
    func_0x000108739028();
  }
  else {
    func_0x000108739028();
    if (lVar3 != 0) {
      if ((bStack_50 & 1) == 0) {
        uVar2 = *(undefined8 *)(lStack_88 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_48,lStack_88 + 0x58);
        func_0x000107c27f54(&uStack_d0,&UNK_10f2e0451,auStack_48);
        func_0x00010bcc7444(uVar2,0x65,&uStack_d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      }
      FUN_108734cdc();
      uVar1 = 1;
      goto LAB_1087302f0;
    }
  }
  uVar1 = 0;
  *unaff_x19 = 0;
LAB_1087302f0:
  unaff_x19[0x30] = uVar1;
  func_0x000108731500(auStack_80);
  return;
}



/* Entry: 108730340; end: 1087303bf;  */

void FUN_108730340(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0xa8) < param_2) {
    if (0x186186186186186 < param_2) {
      FUN_10872b2a0();
      uVar3 = param_1[1];
      if (uVar3 < (ulong)param_1[2]) {
        func_0x0001087386b0(uVar3);
        lVar2 = uVar3 + 0xa8;
        param_1[1] = lVar2;
      }
      else {
        plVar1 = param_1;
        FUN_10872afb0(param_1,(long)(uVar3 - *param_1) / 0xa8 + 1);
        FUN_108731664(auStack_c8,plVar1,(param_1[1] - *param_1) / 0xa8,param_1 + 2);
        func_0x0001087386b0();
        lStack_b8 = lStack_b8 + 0xa8;
        func_0x000108738d78();
        FUN_108731520();
        lVar2 = param_1[1];
        func_0x000108738efc();
      }
      param_1[1] = lVar2;
      return;
    }
    FUN_108731664(auStack_48,param_2,(param_1[1] - *param_1) / 0xa8);
    func_0x000108738d78();
    FUN_108731520();
    func_0x000108738efc();
  }
  return;
}



/* Entry: 1087303c0; end: 108730497;  */

void FUN_1087303c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x0001087386b0(uVar3);
    lVar2 = uVar3 + 0xa8;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_10872afb0(param_1,(long)(uVar3 - *param_1) / 0xa8 + 1);
    FUN_108731664(auStack_78,plVar1,(param_1[1] - *param_1) / 0xa8,param_1 + 2);
    func_0x0001087386b0();
    lStack_68 = lStack_68 + 0xa8;
    func_0x000108738d78();
    FUN_108731520();
    lVar2 = param_1[1];
    func_0x000108738efc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108730498; end: 1087304fb;  */

/* WARNING: Removing unreachable block (ram,0x0001087304d0) */

void FUN_108730498(long param_1,long param_2)

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
  func_0x000104be567c();
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



/* Entry: 1087304fc; end: 1087309b7;  */

void FUN_1087304fc(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  uint extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  long *extraout_x10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  undefined8 *puVar10;
  long unaff_x21;
  long lVar11;
  undefined8 *unaff_x22;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_90;
  undefined8 uStack_8c;
  undefined1 uStack_84;
  undefined1 auStack_80 [32];
  
  func_0x000108738324();
  puVar6 = (undefined8 *)0x108;
  __Znwm();
  *puVar6 = FUN_1087375ec;
  puVar6[1] = FUN_1087378ac;
  uVar14 = *unaff_x22;
  puVar10 = puVar6 + 0xf;
  puVar6[0x10] = unaff_x22[1];
  *puVar10 = uVar14;
  puVar6[0x1f] = unaff_x21;
  puVar6[0x11] = unaff_x22[2];
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  FUN_108734b38(puVar6 + 2);
  FUN_1087301c4(extraout_x8,puVar6[2]);
  lVar11 = unaff_x21 + 0x1c8;
  FUN_10872a7f4(lVar11,puVar10);
  plVar12 = *(long **)(unaff_x21 + 0x100);
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001008527c4();
  lStack_e0 = extraout_x8_00 + 0x10;
  uStack_d8 = 0;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,500);
  func_0x000107c278b8(auStack_80,PTR_DAT_113268fe8);
  uVar5 = lVar11 == 0;
  lVar13 = 0x14e8;
  if (!(bool)uVar5) {
    lVar13 = 0x14f0;
  }
  plVar7 = &lStack_e0;
  func_0x000107c28824(plVar7,auStack_80,*(undefined8 *)((long)&PTR_s_success_113269028 + lVar13));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000107c2884c(puVar6 + 10,plVar7);
  (**(code **)(*plVar12 + 0x50))(plVar12,puVar6 + 10);
  func_0x000107c2882c(puVar6 + 10);
  func_0x0001087385d8();
  if (lVar11 == 0) {
    plVar12 = *(long **)(unaff_x21 + 0xc0);
    (**(code **)(*plVar12 + 0xe0))(puVar6 + 0x1e,plVar12,puVar10);
    puVar6[0x12] = puVar6[0x1e];
    do {
      func_0x000107c33020();
    } while (extraout_w10 != 0);
    func_0x000107c3309c(puVar6[0x12]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x20) = 0;
      lVar11 = puVar6[0x12];
      func_0x000107c32ffc();
      if (*plVar12 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087385ec();
      plVar7 = extraout_x8_01;
      do {
        if (*plVar7 == 0) {
          func_0x000107c33024();
          plVar7 = extraout_x8_03;
          uVar3 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar7 = extraout_x8_02;
          uVar3 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) {
          func_0x000108738154();
          if ((bool)uVar5) {
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
    func_0x0001087385f8(puVar6[0x12]);
    if ((extraout_w9 >> 5 & 1) != 0) {
      func_0x0001087384e4(&lStack_e0);
      func_0x000108739044();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1087308d8);
      (*pcVar4)();
    }
    FUN_1087309b8(puVar6 + 4,puVar6[0x12] + 0x98);
    func_0x000107c27f9c(puVar6 + 0x12);
    func_0x000108738f40();
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    FUN_108730340(puVar6 + 0x12,(long)*(int *)(puVar6 + 7));
    func_0x0001087389ec();
    plVar12 = extraout_x8_04;
    if (!(bool)uVar5) {
      plVar12 = extraout_x10;
    }
    for (lVar11 = (long)(int)extraout_x8_04[1] << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      lVar13 = *plVar12;
      uStack_90 = uStack_90 & 0xffffff00;
      uStack_84 = (*(byte *)(lVar13 + 0x10) >> 1 & 1) != 0;
      if ((bool)uStack_84) {
        uStack_90 = (uint)*(undefined8 *)(*(long *)(lVar13 + 0x50) + 0x10);
        uStack_8c = 0;
      }
      ppuVar1 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(lVar13 + 0x48) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar13 + 0x48);
      }
      func_0x000107c29ee0(auStack_80,ppuVar1);
      uVar2 = *(ulong *)(lVar13 + 0x30);
      func_0x000108738968(*(undefined8 *)(lVar13 + 0x38),puVar6 + 0x15);
      uVar14 = *(undefined8 *)(lVar13 + 0x58);
      func_0x000108738968(*(undefined8 *)(lVar13 + 0x40),puVar6 + 0x18);
      uVar5 = *(undefined1 *)(lVar13 + 0x60);
      uStack_d8 = puVar6[0x16];
      lStack_e0 = puVar6[0x15];
      uStack_d0 = puVar6[0x17];
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)uVar14);
      uStack_b8 = puVar6[0x19];
      uStack_c0 = puVar6[0x18];
      uStack_b0 = puVar6[0x1a];
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      func_0x00010873920c(uVar5);
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      FUN_1087303c0(puVar6 + 0x12,auStack_80,uVar2 & 0xfffffffffffffffc,&lStack_e0,&uStack_90,
                    &uStack_f8);
      func_0x000108738a68();
      func_0x000108738868();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x15);
      func_0x000107c27914(auStack_80);
      plVar12 = plVar12 + 1;
    }
    FUN_1087317f0(puVar6 + 0x1b,puVar6 + 0x12);
    FUN_10872a870(puVar6[0x1f] + 0x1c8,puVar10,puVar6 + 0x1b);
    func_0x000104be58b8(puVar6 + 0x1b);
    FUN_108730498(puVar6 + 2,puVar6 + 0x12);
    func_0x000104be58b8(puVar6 + 0x12);
    FUN_1089251a0(puVar6 + 4);
  }
  else {
    plVar12 = puVar6 + 3;
    lVar13 = *plVar12;
    do {
      lStack_e0 = 0;
      lVar8 = lVar13 + 0x10;
      func_0x00010873818c(lVar8,&lStack_e0);
      if ((int)lVar8 != 0) {
        FUN_1087334e0(lVar13 + 0x98);
        FUN_1087337a0(lVar13 + 0x98,lVar11);
        func_0x000108738450(lVar13 + 0x10);
        func_0x000107c31508(lVar13,plVar12);
        break;
      }
    } while (((uint)lStack_e0 >> 1 & 1) == 0);
    func_0x0001087383ac(plVar12);
  }
  func_0x000107c33080();
  func_0x000108738b2c();
  func_0x000107c33090();
  return;
}



/* Entry: 1087309b8; end: 1087309c7;  */

void FUN_1087309b8(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001089268f8(param_1,0);
  *unaff_x19 = &PTR_FUN_110a97ef0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000108926850();
  }
  func_0x000108926824();
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 1087309c8; end: 1087309db;  */

void FUN_1087309c8(void)

{
  FUN_108731c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087309dc; end: 1087309eb;  */

undefined8 * FUN_1087309dc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1[-1] = &PTR_DAT_110a696f0;
  *param_1 = &PTR_FUN_110a69750;
  if (param_1[0x41] != 0) {
    plVar1 = (long *)param_1[0x40];
    plVar2 = *(long **)(param_1[0x3f] + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[0x41] = 0;
    while (plVar1 != param_1 + 0x3f) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  FUN_108731d38(param_1[0x3d]);
  func_0x000107c28800(param_1 + 0x38);
  func_0x000108731d74(param_1 + 0x33);
  func_0x000107c27f98(param_1 + 0x2a);
  func_0x000107c27f9c(param_1 + 0x29);
  func_0x000107c28a38(param_1 + 0x28);
  func_0x000107c28a3c(param_1 + 0x27);
  func_0x000108738858();
  func_0x000107c27f9c(param_1 + 0x25);
  func_0x000107c28cc4(param_1 + 0x23);
  func_0x000107c29710(param_1 + 0x21);
  func_0x000107c288a4(param_1 + 0x1f);
  func_0x000107c286ec(param_1 + 0x1d);
  func_0x000107c28cc8(param_1 + 0x1b);
  func_0x000107c28800(param_1 + 0x19);
  func_0x000107c288e8(param_1 + 0x17);
  func_0x000107c28808(param_1 + 0x15);
  FUN_10865a95c(param_1 + 9);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 1087309ec; end: 108730a23;  */

undefined1 * FUN_1087309ec(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_108730a24();
  return param_1;
}



/* Entry: 108730a24; end: 108730a73;  */

void FUN_108730a24(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108738714();
  FUN_108730a74();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_110a69888)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 108730a74; end: 108730ab7;  */

void FUN_108730a74(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x000100851910((&PTR_FUN_110a69878)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 108730ab8; end: 108730b57;  */

void FUN_108730ab8(void)

{
  return;
}



/* Entry: 108730b58; end: 108730bdb;  */

void FUN_108730b58(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001087383b4();
  uStack_58 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0xd8) {
    func_0x00010873914c();
    FUN_108730c28();
    lVar1 = lStack_48 + 0xd8;
    lStack_48 = lVar1;
  }
  func_0x000108738dcc();
  func_0x00010528b330(auStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108730bdc; end: 108730c27;  */

void FUN_108730bdc(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 < 0x12f684bda12f685) {
    plVar1 = param_1 + 2;
    func_0x00010528b034();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x1b);
    return;
  }
  func_0x00010528af48();
  func_0x000108738714();
  func_0x000107c27994();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 3,unaff_x20 + 0x18);
  func_0x000107c279a0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_108730c9c(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 108730c28; end: 108730c9b;  */

void FUN_108730c28(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108738714();
  func_0x000107c27994();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  func_0x000107c279a0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_108730c9c(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 108730c9c; end: 108730ccf;  */

undefined1 * FUN_108730c9c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x80] = 0;
  FUN_108730cd0();
  return param_1;
}



/* Entry: 108730cd0; end: 108730ce3;  */

void FUN_108730cd0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_108730d00();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 108730ce4; end: 108730cff;  */

void FUN_108730ce4(long param_1)

{
  FUN_108730d00();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 108730d00; end: 108730d73;  */

void FUN_108730d00(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108738714();
  func_0x000107c279a0();
  func_0x000107c279a0(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107c279a0(unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x000107c279a0(unaff_x19 + 0x60,unaff_x20 + 0x60);
  return;
}



/* Entry: 108730d74; end: 108730dbb;  */

long FUN_108730d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108738adc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0xd8) {
    func_0x00010873914c();
    FUN_108730dbc();
    param_3 = param_3 + 0xd8;
  }
  return param_3;
}



/* Entry: 108730dbc; end: 108730dff;  */

void FUN_108730dbc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108738d18();
  func_0x000107c27cfc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x000107c27c5c(unaff_x20 + 0x30,unaff_x19 + 0x30);
  FUN_108730e00(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 108730e00; end: 108730e27;  */

void FUN_108730e00(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 != *(char *)(param_2 + 0x80)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x80) == '\x01') {
        func_0x000104be4c04();
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      return;
    }
    FUN_108730d00();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108738d18();
    func_0x000107c27c5c();
    func_0x000107c27c5c(unaff_x20 + 0x20,unaff_x19 + 0x20);
    func_0x000107c27c5c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    func_0x000107c27c5c(unaff_x20 + 0x60,unaff_x19 + 0x60);
    return;
  }
  return;
}



/* Entry: 108730e28; end: 108730e6b;  */

void FUN_108730e28(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108738d18();
  func_0x000107c27c5c();
  func_0x000107c27c5c(unaff_x20 + 0x20,unaff_x19 + 0x20);
  func_0x000107c27c5c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  func_0x000107c27c5c(unaff_x20 + 0x60,unaff_x19 + 0x60);
  return;
}



/* Entry: 108730e6c; end: 108730e8f;  */

void FUN_108730e6c(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x000104be4c04();
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}



/* Entry: 108730e90; end: 108730eb3;  */

void FUN_108730e90(long param_1,long param_2)

{
  FUN_108730eb4();
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return;
}



/* Entry: 108730eb4; end: 108730f03;  */

void FUN_108730eb4(undefined8 *param_1,long param_2)

{
  func_0x000108738714();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_108730f78();
  FUN_108730f04();
  return;
}



/* Entry: 108730f04; end: 108730f3f;  */

void FUN_108730f04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  func_0x000108738adc();
  for (; unaff_x20 != (long *)param_3; unaff_x20 = (long *)*unaff_x20) {
    func_0x000108731124();
  }
  return;
}



/* Entry: 108730f40; end: 108730f5f;  */

void FUN_108730f40(void)

{
  func_0x00010873925c();
  FUN_108730f60();
  return;
}



/* Entry: 108730f60; end: 108730f77;  */

void FUN_108730f60(long *param_1)

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



/* Entry: 108730f78; end: 108731023;  */

void FUN_108730f78(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar2 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 < param_2) {
LAB_108730fc0:
    func_0x000108738be4();
    if (plVar2 == (long *)0x0) {
      FUN_1087310f0(plVar6);
      plVar6[1] = 0;
    }
    else {
      plVar8 = plVar6 + 1;
      FUN_108731108(plVar8);
      FUN_1087310f0(plVar6,plVar8);
      plVar6[1] = (long)plVar2;
      lVar3 = *plVar6;
      for (plVar8 = (long *)0x0; plVar2 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar8 * 8) = 0;
      }
      if (plVar6[2] != 0) {
        func_0x0001087390dc();
        func_0x0001087390bc();
        lVar3 = extraout_x8;
        plVar6 = extraout_x9;
        uVar5 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
          plVar7 = (long *)plVar6[1];
          if (((ulong)plVar2 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar2 <= plVar7) {
            uVar1 = 0;
            if (plVar2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar4;
              plVar8 = plVar7;
            }
            else {
              func_0x000108738870();
              lVar3 = extraout_x8_00;
              plVar6 = extraout_x9_00;
              uVar5 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < plVar8) {
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108738890();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (param_2 < plVar8) goto LAB_108730fc0;
  }
  return;
}



/* Entry: 108731024; end: 1087310ef;  */

void FUN_108731024(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1087310f0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_108731108(plVar6);
    FUN_1087310f0(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x0001087390dc();
      func_0x0001087390bc();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
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
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000108738870();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087310f0; end: 108731107;  */

void FUN_1087310f0(long *param_1,long param_2)

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



/* Entry: 108731108; end: 108731157;  */

void FUN_108731108(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010873113c();
  return;
}



/* Entry: 108731158; end: 108731363;  */

undefined1  [16] FUN_108731158(undefined8 param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x25;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *aplStack_68 [3];
  
  uVar7 = param_3;
  FUN_108848654();
  uVar10 = param_2[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar11) == 0) {
      unaff_x25 = uVar9 - 1 & uVar7;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar7 - uVar10) < 0;
      unaff_x25 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = (uint)uVar7 / uVar9;
        }
        unaff_x25 = (ulong)((uint)uVar7 - uVar1 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_2 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108731220;
          uVar4 = plVar8[1];
          in_NG = (long)(uVar4 - uVar7) < 0;
          if (uVar4 != uVar7) break;
          plVar6 = plVar8 + 2;
          func_0x000107c28078(plVar6,param_3);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_108731338;
          }
        }
        if ((uVar10 & uVar11) == 0) {
          uVar4 = uVar4 & uVar11;
        }
        else if (uVar10 <= uVar4) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar4 / uVar10;
          }
          uVar4 = uVar4 - uVar2 * uVar10;
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
      } while (uVar4 == unaff_x25);
    }
  }
LAB_108731220:
  func_0x000108738be4(aplStack_68);
  FUN_108731364();
  func_0x00010873893c(param_2[3]);
  if ((uVar10 == 0) || (func_0x000108738930(param_1,(int)param_2[4],(float)uVar10), (bool)in_NG)) {
    func_0x000108738168(uVar10 << 1);
    FUN_108730f78(param_2);
    uVar10 = param_2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (int)uVar10 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        unaff_x25 = uVar7 - uVar11 * uVar10;
      }
    }
  }
  plVar8 = aplStack_68[0];
  lVar5 = *param_2;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_2 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar5 + unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar11 * uVar10;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_1087313f0(aplStack_68);
  uVar3 = 1;
LAB_108731338:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 108731364; end: 1087313b7;  */

void FUN_108731364(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000108738f24();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_1087313b8(param_2 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1087313b8; end: 1087313ef;  */

void FUN_1087313b8(long param_1)

{
  long unaff_x20;
  
  func_0x000108738714();
  func_0x000107c27994();
  FUN_108730c28(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1087313f0; end: 10873140f;  */

void FUN_1087313f0(void)

{
  func_0x00010873925c();
  FUN_108731410();
  return;
}



/* Entry: 108731410; end: 108731427;  */

void FUN_108731410(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108731468(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108731428; end: 1087314eb;  */

void FUN_108731428(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108731468(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1087314ec; end: 10873151f;  */

void FUN_1087314ec(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108731520; end: 108731663;  */

void FUN_108731520(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000108738d18();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0xa8) * 0xa8);
  lStack_60 = unaff_x20 + 0x10;
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = puVar4;
  for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 0x15) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar5 = *puVar3;
    puStack_38[1] = puVar3[1];
    *puStack_38 = uVar5;
    puStack_38[2] = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar6 = puVar3[4];
    uVar5 = puVar3[3];
    puStack_38[5] = puVar3[5];
    puStack_38[4] = uVar6;
    puStack_38[3] = uVar5;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = 0;
    uVar6 = puVar3[7];
    uVar5 = puVar3[6];
    puStack_38[8] = puVar3[8];
    puStack_38[7] = uVar6;
    puStack_38[6] = uVar5;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puStack_38 + 9) = *(undefined4 *)(puVar3 + 9);
    uVar6 = puVar3[0xb];
    uVar5 = puVar3[10];
    puStack_38[0xc] = puVar3[0xc];
    puStack_38[0xb] = uVar6;
    puStack_38[10] = uVar5;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[10] = 0;
    uVar6 = puVar3[0xe];
    uVar5 = puVar3[0xd];
    *(undefined1 *)(puStack_38 + 0xf) = *(undefined1 *)(puVar3 + 0xf);
    puStack_38[0xe] = uVar6;
    puStack_38[0xd] = uVar5;
    uVar5 = puVar3[0x10];
    puStack_38[0x11] = puVar3[0x11];
    puStack_38[0x10] = uVar5;
    puStack_38[0x13] = 0;
    puStack_38[0x14] = 0;
    puStack_38[0x12] = 0;
    uVar5 = puVar3[0x12];
    puStack_38[0x13] = puVar3[0x13];
    puStack_38[0x12] = uVar5;
    puStack_38[0x14] = puVar3[0x14];
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puStack_38 = puStack_38 + 0x15;
  }
  puStack_40 = puVar4;
  func_0x000108738dcc();
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x15) {
    func_0x000104be56f0();
  }
  FUN_10872b140(&lStack_60);
  *(undefined8 **)(unaff_x19 + 8) = puVar4;
  func_0x000108738530();
  return;
}



/* Entry: 108731664; end: 1087316e7;  */

void FUN_108731664(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    FUN_10872b2b4(param_4);
  }
  func_0x000108738db4(0xa8);
  return;
}



/* Entry: 1087316e8; end: 1087317ef;  */

undefined8
FUN_1087316e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_68,param_3);
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  uStack_b0 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uStack_a8 = *(undefined4 *)(param_4 + 3);
  uStack_98 = param_4[5];
  uStack_a0 = param_4[4];
  uStack_90 = param_4[6];
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[4] = 0;
  uStack_80 = param_4[8];
  uStack_88 = param_4[7];
  uStack_78 = *(undefined1 *)(param_4 + 9);
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uStack_d8 = param_6[1];
  uStack_e0 = *param_6;
  uStack_d0 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  func_0x00010529783c(param_1,&uStack_50,auStack_68,&uStack_c0,uVar1,uVar2,&uStack_e0);
  func_0x000107c278a8(&uStack_e0);
  func_0x000108738868();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x000107c27914(&uStack_50);
  return param_1;
}



/* Entry: 1087317f0; end: 10873184f;  */

void FUN_1087317f0(void)

{
  undefined1 in_ZR;
  
  func_0x0001087382f0();
  if (!(bool)in_ZR) {
    FUN_10872af64();
    func_0x000108738be4();
    FUN_10872af30();
  }
  func_0x000108738cd4();
  FUN_108731850();
  return;
}



/* Entry: 108731850; end: 10873187b;  */

long FUN_108731850(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000104be58dc(param_1);
  }
  return param_1;
}


