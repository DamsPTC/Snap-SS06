/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10883ab80; end: 10883ab97;  */

void FUN_10883ab80(long *param_1,long param_2)

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



/* Entry: 10883ab98; end: 10883abb7;  */

void FUN_10883ab98(void)

{
  func_0x00010883ccc0();
  FUN_10883abb8();
  return;
}



/* Entry: 10883abb8; end: 10883abcf;  */

void FUN_10883abb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10883a794(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10883abd0; end: 10883ac0f;  */

void FUN_10883abd0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10883a794(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10883ac10; end: 10883af2b;  */

undefined1  [16]
FUN_10883ac10(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar8;
  ulong extraout_x9_01;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  undefined1 auVar17 [16];
  
  plVar15 = (long *)*param_4;
  plVar16 = (long *)param_3[1];
  if (plVar16 != (long *)0x0) {
    uVar6 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar6) == 0) {
      unaff_x24 = (long *)(uVar6 & (ulong)plVar15);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar15 - (long)plVar16 < 0;
      unaff_x24 = plVar15;
      if (plVar16 <= plVar15) {
        uVar8 = 0;
        if (plVar16 != (long *)0x0) {
          uVar8 = (ulong)plVar15 / (ulong)plVar16;
        }
        unaff_x24 = (long *)((long)plVar15 - uVar8 * (long)plVar16);
      }
    }
    plVar12 = *(long **)(*param_3 + (long)unaff_x24 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10883acbc;
          plVar7 = (long *)plVar12[1];
          if (plVar7 != plVar15) break;
          in_NG = plVar12[2] - (long)plVar15 < 0;
          if ((long *)plVar12[2] == plVar15) {
            uVar5 = 0;
            goto LAB_10883af0c;
          }
        }
        if (((ulong)plVar16 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (plVar16 <= plVar7) {
          uVar8 = 0;
          if (plVar16 != (long *)0x0) {
            uVar8 = (ulong)plVar7 / (ulong)plVar16;
          }
          plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar16);
        }
        in_NG = (long)plVar7 - (long)unaff_x24 < 0;
      } while (plVar7 == unaff_x24);
    }
  }
LAB_10883acbc:
  plVar13 = (long *)*param_6;
  plVar7 = param_3 + 2;
  plVar12 = param_3;
  func_0x00010883cdc0();
  *plVar12 = 0;
  plVar12[1] = (long)plVar15;
  plVar12[2] = *plVar13;
  *(undefined2 *)(plVar12 + 3) = 0;
  plVar13 = plVar12;
  func_0x00010883cb08();
  if ((plVar16 != (long *)0x0) &&
     (func_0x00010883cd60(param_1,param_2,(float)plVar16), !(bool)in_NG)) goto LAB_10883aea4;
  bVar2 = (long *)0x2 < plVar16;
  bVar3 = plVar16 == (long *)0x3;
  func_0x00010883caf4((long)plVar16 << 1);
  plVar14 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar16 = (long *)param_3[1];
    plVar13 = plVar14;
  }
  if (plVar16 < plVar14) {
LAB_10883ad4c:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10883af20);
      (*pcVar1)();
    }
    lVar4 = (long)plVar14 << 3;
    __Znwm(lVar4);
    FUN_10883af2c(param_3,lVar4);
    plVar16 = (long *)0x0;
    param_3[1] = (long)plVar14;
    lVar4 = *param_3;
    while (plVar14 != plVar16) {
      func_0x00010883ce7c();
      lVar4 = extraout_x8_00;
      plVar16 = extraout_x9_00;
    }
    plVar13 = (long *)*plVar7;
    plVar16 = plVar14;
    if (plVar13 != (long *)0x0) {
      plVar9 = (long *)plVar13[1];
      uVar8 = (long)plVar14 - 1;
      uVar6 = 0;
      if (plVar14 != (long *)0x0) {
        uVar6 = (ulong)plVar9 / (ulong)plVar14;
      }
      plVar10 = plVar9;
      if (plVar14 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar6 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar8);
      }
      *(long **)(lVar4 + (long)plVar10 * 8) = plVar7;
      while (plVar9 = plVar13, plVar13 = (long *)*plVar9, plVar13 != (long *)0x0) {
        plVar11 = (long *)plVar13[1];
        if (((ulong)plVar14 & uVar8) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar8);
        }
        else if (plVar14 <= plVar11) {
          uVar6 = 0;
          if (plVar14 != (long *)0x0) {
            uVar6 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar11 = (long *)((long)plVar11 - uVar6 * (long)plVar14);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar13;
            func_0x00010883caac();
            lVar4 = extraout_x8_01;
            uVar8 = extraout_x9_01;
            plVar13 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar16) {
    func_0x00010883cbd4();
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010883ca48();
    }
    if (plVar14 <= plVar13) {
      plVar14 = plVar13;
    }
    if (plVar14 < plVar16) {
      if (plVar14 != (long *)0x0) goto LAB_10883ad4c;
      FUN_10883af2c(param_3,0);
      param_3[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x24 = (long *)((long)plVar16 - 1U & (ulong)plVar15);
  }
  else {
    unaff_x24 = plVar15;
    if (plVar16 <= plVar15) {
      uVar6 = 0;
      if (plVar16 != (long *)0x0) {
        uVar6 = (ulong)plVar15 / (ulong)plVar16;
      }
      unaff_x24 = (long *)((long)plVar15 - uVar6 * (long)plVar16);
    }
  }
LAB_10883aea4:
  lVar4 = *param_3;
  if (*(long *)(lVar4 + (long)unaff_x24 * 8) == 0) {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar7;
    if (*plVar12 != 0) {
      plVar15 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar15) {
        uVar6 = 0;
        if (plVar16 != (long *)0x0) {
          uVar6 = (ulong)plVar15 / (ulong)plVar16;
        }
        plVar15 = (long *)((long)plVar15 - uVar6 * (long)plVar16);
      }
      *(long **)(lVar4 + (long)plVar15 * 8) = plVar12;
    }
  }
  else {
    func_0x00010883cd14();
  }
  func_0x00010883ca68();
  FUN_10883af44();
  uVar5 = 1;
LAB_10883af0c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar12;
  return auVar17;
}



/* Entry: 10883af2c; end: 10883af43;  */

void FUN_10883af2c(long *param_1,long param_2)

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



/* Entry: 10883af44; end: 10883af63;  */

void FUN_10883af44(void)

{
  func_0x00010883ccc0();
  FUN_10883af64();
  return;
}



/* Entry: 10883af64; end: 10883af7b;  */

void FUN_10883af64(long *param_1,long param_2)

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



/* Entry: 10883af7c; end: 10883af97;  */

bool FUN_10883af7c(long param_1)

{
  FUN_10883af98();
  return param_1 != 0;
}



/* Entry: 10883af98; end: 10883b03f;  */

long FUN_10883af98(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010883cecc(), extraout_x8 != 0)) {
    func_0x00010883cb78();
    func_0x00010883cc4c();
    if ((bool)in_ZR) {
      uVar3 = unaff_x20 & unaff_x23;
    }
    else {
      uVar3 = unaff_x20;
      if (uVar2 <= unaff_x20) {
        func_0x00010883ceac();
        uVar3 = unaff_x24;
      }
    }
    func_0x00010883ced8();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x00010883cb6c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x00010883ce94();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == uVar3);
  }
  return 0;
}



/* Entry: 10883b040; end: 10883b097;  */

void FUN_10883b040(long param_1)

{
  func_0x000107c29d6c();
  if (param_1 != 0) {
    func_0x00010883cee4();
    func_0x00010883b06c();
  }
  return;
}



/* Entry: 10883b098; end: 10883b18b;  */

void FUN_10883b098(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883b14c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883b14c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10883b14c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10883b18c; end: 10883b26f;  */

void FUN_10883b18c(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000107c33d08();
  func_0x00010883b21c();
  *unaff_x19 = 0;
  FUN_1086d5868();
  lVar2 = unaff_x19[2];
  lVar4 = unaff_x19[1];
  unaff_x20[2] = lVar2;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = 0;
  lVar4 = unaff_x19[3];
  unaff_x20[3] = lVar4;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    uVar5 = unaff_x20[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar3 = uVar5 - 1 & uVar3;
    }
    else if (uVar5 <= uVar3) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar3 / uVar5;
      }
      uVar3 = uVar3 - uVar1 * uVar5;
    }
    *(long **)(*unaff_x20 + uVar3 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10883b270; end: 10883b2bf;  */

undefined1  [16] FUN_10883b270(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10883a51c(&uStack_20,0xffffffffffffffff);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10883b2c0; end: 10883b2e7;  */

long FUN_10883b2c0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10883b2e8; end: 10883b44f;  */

void FUN_10883b2e8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x200) {
    uVar5 = param_1[2] - param_1[1];
    plStack_30 = param_1 + 3;
    lVar3 = *plStack_30;
    uVar4 = lVar3 - *param_1;
    if (uVar4 <= uVar5) {
      lVar1 = (long)uVar4 >> 2;
      if (lVar3 == *param_1) {
        lVar1 = 1;
      }
      FUN_10883b6f0();
      lStack_48 = lVar1 + uVar5;
      lStack_38 = lVar1 + param_2 * 8;
      uVar2 = 0x1000;
      lStack_50 = lVar1;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x200;
      uStack_70 = uVar2;
      uStack_68 = uVar2;
      FUN_10883b624(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar3 = param_1[2];
      while (lVar1 = param_1[1], lVar3 != lVar1) {
        lVar3 = lVar3 + -8;
        FUN_10883b860(&lStack_50,lVar3);
      }
      lVar3 = *param_1;
      lVar7 = param_1[3];
      lVar6 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = lStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar3;
      lStack_48 = lVar1;
      lStack_40 = lVar6;
      lStack_38 = lVar7;
      func_0x00010883b720(&uStack_68);
      func_0x00010883b74c(&lStack_50);
      return;
    }
    lVar1 = 0x1000;
    if (lVar3 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      FUN_10883b598(param_1,&lStack_50);
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    FUN_10883b4f8(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_10883b7d4(param_1,&lStack_50);
  return;
}



/* Entry: 10883b450; end: 10883b45b;  */

void FUN_10883b450(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != lVar2 + -8) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10883b45c; end: 10883b4f7;  */

void FUN_10883b45c(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  
  func_0x000107c33d00();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010883cc34();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010883ce28(lVar3);
      func_0x00010883ca80(lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8));
      func_0x00010883cc5c();
      func_0x00010883ca04();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010883cad0();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        func_0x00010883ce0c();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10883b4f8; end: 10883b597;  */

void FUN_10883b4f8(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  
  func_0x000107c33d00();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010883cc34();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010883ce28(lVar3);
      func_0x00010883ca80(lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8));
      func_0x00010883cc5c();
      func_0x00010883ca04();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010883cad0();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        func_0x00010883ce0c();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10883b598; end: 10883b623;  */

void FUN_10883b598(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x000107c33d00();
  func_0x00010883cc34();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010883cba4();
      if (!bVar2) {
        func_0x00010883cc64();
      }
      func_0x00010883cd04();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x00010883cdb4();
      func_0x00010883ca80(param_1 + (uVar3 >> 2) * 8);
      func_0x00010883cc5c();
      func_0x00010883ca04();
    }
  }
  func_0x00010883ccf4();
  return;
}



/* Entry: 10883b624; end: 10883b6bb;  */

void FUN_10883b624(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x000107c33d00();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x00010883cba4();
      if (!bVar2) {
        func_0x00010883cc64();
      }
      func_0x00010883cd04();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 1;
      }
      uVar3 = uVar4;
      FUN_10883b6f0(uVar4);
      func_0x00010883ca80(uVar3 + (uVar4 >> 2) * 8);
      func_0x00010883cc5c();
      func_0x00010883ca04();
    }
  }
  func_0x00010883ccf4();
  return;
}



/* Entry: 10883b6bc; end: 10883b6ef;  */

void FUN_10883b6bc(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 10883b6f0; end: 10883b78b;  */

undefined1  [16] FUN_10883b6f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10883b78c; end: 10883b7d3;  */

void FUN_10883b78c(long *param_1,long param_2)

{
  ulong uVar1;
  long *extraout_x8;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  
  if (param_2 != 0) {
    uVar1 = param_2 + (param_1[1] - *(long *)*param_1 >> 3);
    if ((long)uVar1 < 1) {
      func_0x00010883cef0();
      plVar2 = extraout_x8;
      lVar3 = extraout_x9;
    }
    else {
      plVar2 = (long *)*param_1 + (uVar1 >> 9);
      lVar3 = *plVar2 + (uVar1 & 0x1ff) * 8;
    }
    *param_1 = (long)plVar2;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 10883b7d4; end: 10883b85f;  */

void FUN_10883b7d4(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x000107c33d00();
  func_0x00010883cc34();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010883cba4();
      if (!bVar2) {
        func_0x00010883cc64();
      }
      func_0x00010883cd04();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x00010883cdb4();
      func_0x00010883ca80(param_1 + (uVar3 >> 2) * 8);
      func_0x00010883cc5c();
      func_0x00010883ca04();
    }
  }
  func_0x00010883ccf4();
  return;
}



/* Entry: 10883b860; end: 10883b90b;  */

void FUN_10883b860(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107c33d00();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x00010883cad0();
      lVar3 = extraout_x8;
      if (!bVar2) {
        func_0x00010883ce0c();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = lVar4 * 2;
      FUN_10883b6f0(lVar4);
      func_0x00010883ca80(lVar4 + (lVar3 + 6U & 0xfffffffffffffff8));
      func_0x00010883cc5c();
      func_0x00010883ca04();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 10883b90c; end: 10883b9af;  */

void FUN_10883b90c(long *param_1,long param_2)

{
  ulong uVar1;
  long *extraout_x8;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  
  if (-param_2 != 0) {
    uVar1 = -param_2 + (param_1[1] - *(long *)*param_1 >> 3);
    if ((long)uVar1 < 1) {
      func_0x00010883cef0();
      plVar2 = extraout_x8;
      lVar3 = extraout_x9;
    }
    else {
      plVar2 = (long *)*param_1 + (uVar1 >> 9);
      lVar3 = *plVar2 + (uVar1 & 0x1ff) * 8;
    }
    *param_1 = (long)plVar2;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 10883b9b0; end: 10883ba07;  */

void FUN_10883b9b0(long param_1)

{
  func_0x00010883b914();
  if (param_1 != 0) {
    func_0x00010883cee4();
    func_0x00010883b9dc();
  }
  return;
}



/* Entry: 10883ba08; end: 10883bafb;  */

void FUN_10883ba08(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883babc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883babc;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10883babc:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10883bafc; end: 10883bba7;  */

undefined8 *
FUN_10883bafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar1 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10883bba8(auStack_50,1);
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  FUN_10883a5c8(puStack_40 + 2);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_10883bc00();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_10883bc00();
  func_0x00010883cb48();
  puVar1[1] = param_4;
  puVar2 = puVar1;
  FUN_10883bbd0();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 10883bba8; end: 10883bbcf;  */

long FUN_10883bba8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10883bbd0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10883bbd0; end: 10883bbff;  */

void FUN_10883bbd0(long param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10883bc00; end: 10883bc0f;  */

void FUN_10883bc00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10883bc10; end: 10883befb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010883bcec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10883bc10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_NG;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong uVar8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar14;
  long *unaff_x23;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x25;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 *puStack_68;
  
  func_0x00010883cc70();
  uVar16 = unaff_x19[1];
  uVar10 = param_3;
  if (uVar16 != 0) {
    uVar17 = uVar16 - 1;
    in_NG = (long)(uVar16 & uVar17) < 0;
    uVar5 = (uVar16 & uVar17) == 0;
    if ((bool)uVar5) {
      func_0x00010883ce88();
    }
    else {
      in_NG = (long)(param_3 - uVar16) < 0;
      uVar5 = param_3 == uVar16;
      unaff_x25 = param_3;
      if (uVar16 <= param_3) {
        uVar1 = 0;
        uVar15 = (uint)uVar16;
        if (uVar15 != 0) {
          uVar1 = (uint)param_3 / uVar15;
        }
        unaff_x25 = (ulong)((uint)param_3 - uVar1 * uVar15);
      }
    }
    puVar14 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (undefined8 *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (undefined8 *)*puVar14;
          if (unaff_x21 == (undefined8 *)0x0) goto LAB_10883bcb8;
          func_0x00010883cea0();
          puVar14 = unaff_x21;
          if (!(bool)uVar5) break;
          func_0x00010883cdf4();
          if ((uVar10 & 1) != 0) {
            uVar7 = 0;
            goto LAB_10883bed8;
          }
        }
        if ((uVar16 & uVar17) == 0) {
          uVar8 = extraout_x8 & uVar17;
        }
        else {
          uVar8 = extraout_x8;
          if (uVar16 <= extraout_x8) {
            uVar8 = 0;
            if (uVar16 != 0) {
              uVar8 = extraout_x8 / uVar16;
            }
            uVar8 = extraout_x8 - uVar8 * uVar16;
          }
        }
        in_NG = (long)(uVar8 - unaff_x25) < 0;
        uVar5 = 1;
      } while (uVar8 == unaff_x25);
    }
  }
LAB_10883bcb8:
  func_0x00010883ccdc();
  func_0x00010883ceb8();
  func_0x00010883ccd4();
  unaff_x21[8] = 0;
  unaff_x21[7] = 0;
  unaff_x21[6] = 0;
  unaff_x21[5] = 0;
  *(undefined4 *)(unaff_x21 + 9) = 0x3f800000;
  func_0x00010883cb08();
  if ((uVar16 != 0) && (func_0x00010883cd60(param_1,param_2,(float)uVar16), !(bool)in_NG))
  goto LAB_10883be78;
  func_0x00010883cd48();
  bVar4 = 2 < uVar16;
  bVar6 = uVar16 == 3;
  func_0x00010883caf4();
  uVar17 = extraout_x8_00;
  if (!bVar4 || bVar6) {
    uVar17 = extraout_x9;
  }
  if (uVar17 - 1 == 0) {
    uVar17 = 2;
  }
  else if ((uVar17 & uVar17 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar10 = uVar17;
  }
  uVar16 = unaff_x19[1];
  if (uVar16 < uVar17) {
LAB_10883bd38:
    if (uVar17 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10883beec);
      (*pcVar3)();
    }
    __Znwm(uVar17 << 3);
    FUN_10883befc();
    uVar10 = 0;
    unaff_x19[1] = uVar17;
    while (uVar17 != uVar10) {
      func_0x00010883ce7c();
      uVar10 = extraout_x9_00;
    }
    uVar16 = uVar17;
    if (*unaff_x23 != 0) {
      func_0x00010883ce68();
      func_0x00010883ce54();
      lVar9 = extraout_x8_01;
      uVar10 = extraout_x9_01;
      plVar12 = extraout_x10;
      uVar8 = extraout_x11;
      while (plVar11 = plVar12, plVar12 = (long *)*plVar11, plVar12 != (long *)0x0) {
        uVar13 = plVar12[1];
        if ((uVar17 & uVar10) == 0) {
          uVar13 = uVar13 & uVar10;
        }
        else if (uVar17 <= uVar13) {
          uVar2 = 0;
          if (uVar17 != 0) {
            uVar2 = uVar13 / uVar17;
          }
          uVar13 = uVar13 - uVar2 * uVar17;
        }
        if (uVar13 != uVar8) {
          if (*(long *)(lVar9 + uVar13 * 8) == 0) {
            *(long **)(lVar9 + uVar13 * 8) = plVar11;
            uVar8 = uVar13;
          }
          else {
            *plVar11 = *plVar12;
            func_0x00010883caac();
            lVar9 = extraout_x8_02;
            uVar10 = extraout_x9_02;
            plVar12 = extraout_x10_00;
            uVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar17 < uVar16) {
    func_0x00010883cbd4();
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010883ca48();
    }
    if (uVar17 <= uVar10) {
      uVar17 = uVar10;
    }
    if (uVar17 < uVar16) {
      if (uVar17 != 0) goto LAB_10883bd38;
      FUN_10883befc();
      unaff_x19[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = unaff_x19[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    func_0x00010883ce88();
  }
  else {
    unaff_x25 = param_3;
    if (uVar16 <= param_3) {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = param_3 / uVar16;
      }
      unaff_x25 = param_3 - uVar10 * uVar16;
    }
  }
LAB_10883be78:
  puVar14 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x00010883cd6c();
    if (extraout_x9_03 != 0) {
      uVar10 = *(ulong *)(extraout_x9_03 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar10 = uVar10 & uVar16 - 1;
      }
      else if (uVar16 <= uVar10) {
        uVar17 = 0;
        if (uVar16 != 0) {
          uVar17 = uVar10 / uVar16;
        }
        uVar10 = uVar10 - uVar17 * uVar16;
      }
      *(undefined8 **)(extraout_x8_03 + uVar10 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar14;
    *puVar14 = puStack_68;
  }
  func_0x00010883ca68();
  FUN_10883bf14();
  uVar7 = 1;
  unaff_x21 = puStack_68;
LAB_10883bed8:
  auVar18._8_8_ = uVar7;
  auVar18._0_8_ = unaff_x21;
  return auVar18;
}



/* Entry: 10883befc; end: 10883bf13;  */

void FUN_10883befc(long *param_1,long param_2)

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



/* Entry: 10883bf14; end: 10883bf33;  */

void FUN_10883bf14(void)

{
  func_0x00010883ccc0();
  FUN_10883bf34();
  return;
}



/* Entry: 10883bf34; end: 10883bf4b;  */

void FUN_10883bf34(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10883a848(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10883bf4c; end: 10883bf8b;  */

void FUN_10883bf4c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10883a848(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10883bf8c; end: 10883c153;  */

undefined1  [16]
FUN_10883bf8c(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  
  uVar12 = *param_4;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar12;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar11) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar8 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10883c038;
          uVar8 = plVar9[1];
          if (uVar8 != uVar12) break;
          in_NG = (long)(plVar9[2] - uVar12) < 0;
          if (plVar9[2] == uVar12) {
            uVar5 = 0;
            goto LAB_10883c13c;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          uVar2 = 0;
          if (uVar11 != 0) {
            uVar2 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar2 * uVar11;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_10883c038:
  plVar10 = (long *)*param_6;
  plVar1 = param_3 + 2;
  plVar9 = param_3;
  func_0x00010883cdc0();
  *plVar9 = 0;
  plVar9[1] = uVar12;
  plVar9[2] = *plVar10;
  plVar9[3] = 0;
  func_0x00010883cb08();
  if ((uVar11 == 0) || (func_0x00010883cd60(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    bVar3 = 2 < uVar11;
    bVar4 = uVar11 == 3;
    func_0x00010883caf4(uVar11 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    FUN_10883c154(param_3,uVar5);
    uVar11 = param_3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *param_3;
  if (*(long *)(lVar7 + unaff_x23 * 8) == 0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar12 = *(ulong *)(*plVar9 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar6 * uVar11;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar9;
    }
  }
  else {
    func_0x00010883cd14();
  }
  func_0x00010883ca68();
  FUN_10883c2e0();
  uVar5 = 1;
LAB_10883c13c:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar9;
  return auVar13;
}



/* Entry: 10883c154; end: 10883c2c7;  */

void FUN_10883c154(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar3;
  long *extraout_x9;
  long *extraout_x9_00;
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
      func_0x00010883ca48();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10883c2c8(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10883c2c8(param_1,lVar2);
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    while (param_2 != plVar3) {
      func_0x00010883ce7c();
      lVar2 = extraout_x8;
      plVar3 = extraout_x9;
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
            func_0x00010883caac();
            lVar2 = extraout_x8_00;
            plVar3 = extraout_x9_00;
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



/* Entry: 10883c2c8; end: 10883c2df;  */

void FUN_10883c2c8(long *param_1,long param_2)

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



/* Entry: 10883c2e0; end: 10883c2ff;  */

void FUN_10883c2e0(void)

{
  func_0x00010883ccc0();
  FUN_10883c300();
  return;
}



/* Entry: 10883c300; end: 10883c3b3;  */

void FUN_10883c300(long *param_1,long param_2)

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



/* Entry: 10883c3b4; end: 10883c407;  */

void FUN_10883c3b4(undefined8 *param_1,long param_2)

{
  func_0x000107c33d00();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10883c154();
  FUN_10883c408();
  return;
}



/* Entry: 10883c408; end: 10883c443;  */

void FUN_10883c408(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  func_0x000107c33d28();
  for (; unaff_x20 != (long *)param_3; unaff_x20 = (long *)*unaff_x20) {
    FUN_10883c47c();
  }
  return;
}



/* Entry: 10883c444; end: 10883c463;  */

void FUN_10883c444(void)

{
  func_0x00010883ccc0();
  FUN_10883c464();
  return;
}



/* Entry: 10883c464; end: 10883c47b;  */

void FUN_10883c464(long *param_1)

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



/* Entry: 10883c47c; end: 10883c4af;  */

void FUN_10883c47c(void)

{
  func_0x00010883c494();
  return;
}



/* Entry: 10883c4b0; end: 10883c67b;  */

undefined1  [16] FUN_10883c4b0(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar11;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar11 - uVar10) < 0;
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10883c564;
          uVar8 = plVar9[1];
          if (uVar8 != uVar11) break;
          in_NG = (long)(plVar9[2] - uVar11) < 0;
          if (plVar9[2] == uVar11) {
            uVar5 = 0;
            goto LAB_10883c664;
          }
        }
        if ((uVar10 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        in_NG = (long)(uVar8 - unaff_x24) < 0;
      } while (uVar8 == unaff_x24);
    }
  }
LAB_10883c564:
  plVar1 = param_1 + 2;
  plVar9 = param_1;
  func_0x00010883cdc0();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  lVar7 = *param_3;
  plVar9[3] = param_3[1];
  plVar9[2] = lVar7;
  func_0x00010883cb08();
  if ((uVar10 == 0) || (func_0x00010883cd60(), (bool)in_NG)) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    func_0x00010883caf4(uVar10 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    FUN_10883c154(param_1,uVar5);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *param_1;
  if (*(long *)(lVar7 + unaff_x24 * 8) == 0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar6 * uVar10;
      }
      *(long **)(lVar7 + uVar11 * 8) = plVar9;
    }
  }
  else {
    func_0x00010883cd14();
  }
  func_0x00010883ca68();
  FUN_10883c2e0();
  uVar5 = 1;
LAB_10883c664:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 10883c67c; end: 10883c6cf;  */

undefined8 FUN_10883c67c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010883c6a4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x00010883ccc0(param_1);
  FUN_10883c464();
  return unaff_x19;
}



/* Entry: 10883c6d0; end: 10883c76b;  */

long FUN_10883c6d0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10883c76c; end: 10883c7c3;  */

void FUN_10883c76c(long param_1)

{
  func_0x00010883c318();
  if (param_1 != 0) {
    func_0x00010883cee4();
    func_0x00010883c798();
  }
  return;
}



/* Entry: 10883c7c4; end: 10883c8b7;  */

void FUN_10883c7c4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883c878;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883c878;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10883c878:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10883c8b8; end: 10883c90f;  */

void FUN_10883c8b8(long param_1)

{
  func_0x000107c29d74();
  if (param_1 != 0) {
    func_0x00010883cee4();
    func_0x00010883c8e4();
  }
  return;
}



/* Entry: 10883c910; end: 10883cd23;  */

void FUN_10883c910(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883c9c4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10883c9c4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10883c9c4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10883cd24; end: 10883cd47;  */

void FUN_10883cd24(void)

{
  bool bVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x10;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x19[2] - 8);
  FUN_10883b450();
  puVar3 = unaff_x19;
  func_0x000107c33d00();
  uVar4 = puVar3[1];
  bVar1 = *puVar3 <= uVar4;
  uVar2 = uVar4 == *puVar3;
  if ((bool)uVar2) {
    func_0x00010883cc34();
    if (bVar1) {
      lVar5 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar5 = 1;
      }
      func_0x00010883ce28(lVar5);
      func_0x00010883ca80(lVar5 + (unaff_x21 + 6 & 0xfffffffffffffff8));
      func_0x00010883cc5c();
      func_0x00010883ca04();
      uVar4 = unaff_x19[1];
    }
    else {
      func_0x00010883cad0();
      uVar4 = extraout_x8;
      if (!(bool)uVar2) {
        func_0x00010883ce0c();
        uVar4 = unaff_x19[2];
      }
      unaff_x19[1] = unaff_x21;
      unaff_x19[2] = uVar4 + lVar5 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  unaff_x19[1] = uVar4 - 8;
  return;
}



/* Entry: 10883cd48; end: 10883cf13;  */

void FUN_10883cd48(void)

{
  return;
}



/* Entry: 10883cf14; end: 10883d033;  */

void FUN_10883cf14(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar6;
  long lVar7;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  func_0x000107c289cc(&lStack_a8);
  uVar6 = *(undefined8 *)(param_2 + 8);
  lStack_c0 = lStack_a0;
  if (lStack_a0 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)(lStack_a0 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 0x200000000;
        cVar1 = ExclusiveMonitorsStatus();
      }
      lVar7 = lStack_a0;
    } while (cVar1 != '\0');
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  pcStack_98 = FUN_10883d5c4;
  ppuStack_90 = &PTR_DAT_110a7a028;
  lStack_c0 = 0;
  lStack_88 = lVar7;
  func_0x00010bcce9b8(auStack_b8,uVar6,&pcStack_98,lVar5 + param_3 * 1000000);
  func_0x00010883e4e8();
  func_0x000107c27f44(auStack_b8);
  func_0x000107c27f98(&lStack_c0);
  *param_1 = lStack_a8;
  if (lStack_a8 != 0) {
    do {
      func_0x000107c33d58();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c289dc();
  func_0x000107c33ec8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010883e4e8();
    func_0x000107c27f98(&lStack_c0);
    plVar4 = &lStack_a8;
    func_0x000107c289dc();
    func_0x00010883e61c();
    func_0x00010bcd3614(plVar4[0xd]);
    func_0x00010bcd3614(plVar4[0xf]);
    lVar5 = plVar4[2];
    iVar3 = (int)lVar5 + 0x40;
    func_0x000107c28850();
    if (iVar3 != 0) {
      func_0x000107c28854(lVar5);
    }
    lVar5 = *(long *)(lVar5 + 0x48);
    *extraout_x8 = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x000107c31d08();
      } while (extraout_w10 != 0);
    }
    return;
  }
  return;
}



/* Entry: 10883d034; end: 10883d06b;  */

void FUN_10883d034(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0x68));
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0x78));
  lVar2 = *(long *)(param_2 + 0x10);
  iVar1 = (int)lVar2 + 0x40;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(lVar2);
  }
  lVar2 = *(long *)(lVar2 + 0x48);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10883d06c; end: 10883d263;  */

void FUN_10883d06c(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  uint extraout_w8;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uStack_58;
  
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  *puVar3 = FUN_10883d81c;
  puVar3[1] = FUN_10883d8f0;
  puVar3[6] = param_2;
  FUN_1087ae93c(puVar3 + 2);
  FUN_1087ae65c(param_1,puVar3 + 2);
  FUN_108731fb4(puVar3 + 5,param_3,param_4,param_2 + 0x38);
  plVar4 = puVar3 + 4;
  *plVar4 = puVar3[5];
  do {
    func_0x000107c33d58();
  } while (extraout_w10 != 0);
  func_0x000107c33dc8(*plVar4);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 7) = 0;
    lVar8 = puVar3[4];
    func_0x000107c33d44();
    lVar9 = *param_3;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *param_3;
    }
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000107c33d68();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x00010883e348();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)(lVar8 + 0x90);
        func_0x00010883e564();
        if ((bool)in_ZR) {
          func_0x00010883e17c();
          func_0x00010883e108();
          func_0x00010883e14c();
          *(long **)(lVar7 + 8) = param_3;
          *(long **)(lVar8 + 0x90) = param_3;
        }
        func_0x00010883e554();
        *(long *)(extraout_x8_01 + 0x20) = lVar9;
        func_0x00010883e16c(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28870();
  lVar8 = *plVar4;
  func_0x00010883e4f8();
  func_0x00010883e1cc();
  if (lVar8 == 2) {
    func_0x00010883e464();
    func_0x00010883e3b8();
    func_0x00010883e5bc();
    func_0x00010883e330();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10883d208);
    (*pcVar2)();
  }
  do {
    func_0x00010883e2ec();
    if ((int)plVar4 != 0) {
      func_0x00010883e218();
      break;
    }
  } while ((uStack_58 >> 1 & 1) == 0);
  func_0x00010883e64c();
  func_0x00010883e19c();
  func_0x00010883e1e4();
  return;
}



/* Entry: 10883d264; end: 10883d31f;  */

void FUN_10883d264(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  plVar2 = (long *)(param_2 + 200);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    if ((*(char *)(param_1 + 4) != '\x01') || (plVar2[5] < (long)param_1[3])) {
      func_0x000107c27994(&uStack_50,plVar2 + 2);
      uVar1 = uStack_40;
      uStack_38 = plVar2[5];
      if (*(char *)(param_1 + 4) == '\x01') {
        func_0x00010883d468(param_1,&uStack_50);
      }
      else {
        param_1[1] = uStack_48;
        *param_1 = uStack_50;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        param_1[2] = uVar1;
        param_1[3] = uStack_38;
        *(undefined1 *)(param_1 + 4) = 1;
      }
      func_0x000107c27914(&uStack_50);
    }
  }
  return;
}



/* Entry: 10883d320; end: 10883d403;  */

/* WARNING: Possible PIC construction at 0x00010883d3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010883d3c8) */

void FUN_10883d320(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long *plVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  byte *pbStack_28;
  
  puVar7 = auStack_30;
  puVar16 = &stack0xfffffffffffffff0;
  iVar8 = (int)*param_1 + 0x10;
  func_0x000107c314e8();
  if (iVar8 == 0) {
    return;
  }
  pbVar1 = (byte *)(*param_1 + 0xa8);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  lVar11 = *param_1;
  if (*(char *)(lVar11 + 0xb8) == '\x01') {
    pbVar9 = (byte *)(lVar11 + 0x10);
    unaff_x30 = 0x10883d3c8;
    pbStack_28 = pbVar1;
  }
  else {
    uVar12 = *(long *)(lVar11 + 0xe0) + 1;
    uVar14 = *(ulong *)(lVar11 + 0xa0);
    uVar6 = 0;
    if (uVar14 != 0) {
      uVar6 = uVar12 / uVar14;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar12 - uVar6 * uVar14;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *pbVar1 = 0;
    pbVar9 = (byte *)(*param_1 + 0x58);
    puVar7 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar16 = unaff_x29;
  }
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
  *(long **)(puVar7 + -0x18) = param_1;
  *(undefined1 **)(puVar7 + -0x10) = puVar16;
  *(undefined8 *)(puVar7 + -8) = unaff_x30;
  do {
    bVar2 = *pbVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar9,0x10);
    if (bVar5) {
      *pbVar9 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(pbVar9 + 0x40) != 0) {
    uVar12 = *(ulong *)(pbVar9 + 0x38);
    puVar13 = (undefined8 *)
              ((*(undefined8 **)(pbVar9 + 0x20))[uVar12 / 0xaa] + (uVar12 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    puVar3 = (undefined8 *)puVar13[1];
    plVar15 = (long *)puVar13[2];
    *(ulong *)(pbVar9 + 0x38) = uVar12 + 1;
    *(long *)(pbVar9 + 0x40) = *(long *)(pbVar9 + 0x40) + -1;
    if (0x153 < uVar12 + 1) {
      uVar10 = **(undefined8 **)(pbVar9 + 0x20);
      *(code **)(puVar7 + -0x38) = UNRECOVERED_JUMPTABLE;
      func_0x000107c60e14(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + -0x38);
      *(long *)(pbVar9 + 0x20) = *(long *)(pbVar9 + 0x20) + 8;
      *(long *)(pbVar9 + 0x38) = *(long *)(pbVar9 + 0x38) + -0xaa;
    }
    *pbVar9 = 0;
    if (plVar15 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar3);
        return;
      }
      (*(code *)*puVar3)(puVar3);
    }
    else {
      (**(code **)(*plVar15 + 0x10))(plVar15,UNRECOVERED_JUMPTABLE,puVar3);
    }
    return;
  }
  *(int *)(pbVar9 + 0x10) = *(int *)(pbVar9 + 0x10) + 1;
  *pbVar9 = 0;
  return;
}



/* Entry: 10883d404; end: 10883d407;  */

undefined8 * FUN_10883d404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79f40;
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 10883d408; end: 10883d41b;  */

void FUN_10883d408(void)

{
  FUN_10883d4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883d41c; end: 10883d41f;  */

long FUN_10883d41c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c33eb0();
  plVar1 = (long *)*(long *)(lVar2 + 200);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x00010883d4b8(param_1 + 0x90);
  func_0x000107c27f98(param_1 + 0x88);
  func_0x000107c27f9c(param_1 + 0x80);
  func_0x000107c28a38(param_1 + 0x78);
  func_0x000107c28a3c(param_1 + 0x70);
  func_0x000107c28a38(param_1 + 0x68);
  func_0x000107c28a3c(param_1 + 0x60);
  func_0x000107c29c48(param_1 + 0x50);
  func_0x000107c288a4(param_1 + 0x40);
  func_0x000107c28800(param_1 + 0x30);
  func_0x000107c29b74(param_1 + 0x20);
  FUN_108676bf0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10883d420; end: 10883d433;  */

void FUN_10883d420(void)

{
  FUN_10883d504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883d434; end: 10883d443;  */

long FUN_10883d434(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1 + -8;
  func_0x000107c33eb0();
  plVar1 = (long *)*(long *)(lVar2 + 200);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x00010883d4b8(param_1 + 0x88);
  func_0x000107c27f98(param_1 + 0x80);
  func_0x000107c27f9c(param_1 + 0x78);
  func_0x000107c28a38(param_1 + 0x70);
  func_0x000107c28a3c(param_1 + 0x68);
  func_0x000107c28a38(param_1 + 0x60);
  func_0x000107c28a3c(param_1 + 0x58);
  func_0x000107c29c48(param_1 + 0x48);
  func_0x000107c288a4(param_1 + 0x38);
  func_0x000107c28800(param_1 + 0x28);
  func_0x000107c29b74(param_1 + 0x18);
  FUN_108676bf0(param_1 + 8);
  return param_1 + -8;
}



/* Entry: 10883d444; end: 10883d493;  */

void FUN_10883d444(long param_1,long param_2)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 10883d494; end: 10883d4d7;  */

void FUN_10883d494(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10883d4d8; end: 10883d503;  */

undefined8 * FUN_10883d4d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a79f40;
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 10883d504; end: 10883d5c3;  */

long FUN_10883d504(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c33eb0();
  plVar1 = (long *)*(long *)(lVar2 + 200);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x00010883d4b8(param_1 + 0x90);
  func_0x000107c27f98(param_1 + 0x88);
  func_0x000107c27f9c(param_1 + 0x80);
  func_0x000107c28a38(param_1 + 0x78);
  func_0x000107c28a3c(param_1 + 0x70);
  func_0x000107c28a38(param_1 + 0x68);
  func_0x000107c28a3c(param_1 + 0x60);
  func_0x000107c29c48(param_1 + 0x50);
  func_0x000107c288a4(param_1 + 0x40);
  func_0x000107c28800(param_1 + 0x30);
  func_0x000107c29b74(param_1 + 0x20);
  FUN_108676bf0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10883d5c4; end: 10883d5ef;  */

/* WARNING: Removing unreachable block (ram,0x0001005ed580) */

undefined1 FUN_10883d5c4(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  plVar10 = (long *)(lVar3 + 0x10);
  do {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        lVar6 = lVar3 + 0x20;
        lVar7 = lVar6;
        do {
          if (*(char *)(lVar7 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar7 + 0x20);
            do {
              plVar4 = (long *)*plVar10;
              pcVar5 = (code *)plVar10[-2];
              if (plVar4 == (long *)0x0) {
                if (pcVar5 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar5)();
                }
              }
              else {
                (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar7 + 1));
          }
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar7 != lVar6) {
            func_0x000107c60fd0(lVar7);
          }
          lVar7 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar3 + 0x90) = lVar6;
        *(undefined1 *)(lVar3 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10883d5f0; end: 10883d603;  */

void FUN_10883d5f0(void)

{
  func_0x00010883d614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883d604; end: 10883d62b;  */

void FUN_10883d604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010883d60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10883d62c; end: 10883d68b;  */

undefined8 FUN_10883d62c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268e68);
  func_0x000107c28824(param_1,auStack_38,PTR_s_exception_113269f40);
  func_0x00010883e4d0();
  return param_1;
}



/* Entry: 10883d68c; end: 10883d7bf;  */

void FUN_10883d68c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_10883d714:
    if (lVar3 == 0) {
LAB_10883d744:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10883d74c;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10883d744;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10883d714;
LAB_10883d74c:
    if (lVar3 == 0) goto LAB_10883d784;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_10883d784:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  plStack_28 = param_2;
  FUN_10883d7c0(&plStack_28);
  return;
}



/* Entry: 10883d7c0; end: 10883d803;  */

long * FUN_10883d7c0(long *param_1)

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



/* Entry: 10883d804; end: 10883d81b;  */

void FUN_10883d804(long *param_1,long param_2)

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



/* Entry: 10883d81c; end: 10883d8ef;  */

void FUN_10883d81c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_48;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x000107c28870();
  lVar3 = *plVar2;
  func_0x00010883e1d4();
  func_0x00010883e1cc();
  if (lVar3 == 2) {
    func_0x00010883e464();
    func_0x00010883e3b8();
    func_0x00010883e5bc();
    func_0x00010883e330();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10883d8a0);
    (*pcVar1)();
  }
  do {
    func_0x00010883e2ec();
    if ((int)plVar2 != 0) {
      func_0x00010883e218();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x00010883e64c();
  func_0x00010883e19c();
  func_0x00010883e1e4();
  return;
}



/* Entry: 10883d8f0; end: 10883d913;  */

void FUN_10883d8f0(void)

{
  func_0x00010883e304();
  func_0x00010883e1cc();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883d914; end: 10883dd1f;  */

void FUN_10883d914(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined8 uVar7;
  uint extraout_w8;
  long extraout_x8;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  uint extraout_w9;
  ulong extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) goto LAB_10883da88;
  do {
    do {
      plVar10 = (long *)(param_1 + 0x28);
      pbVar1 = (byte *)(*plVar10 + 0xa8);
      do {
        bVar2 = *pbVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar4) {
          *pbVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
      if ((*(long *)(*plVar10 + 0xe8) == 0) && ((*(byte *)(*plVar10 + 0xb8) & 1) != 0)) {
        func_0x000107c33e74();
        *pbVar1 = 0;
        *(undefined1 *)(param_1 + 0xe2) = 0;
        func_0x000107c28a3c(plVar10);
        func_0x00010883e1dc();
        func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
      func_0x00010883e354();
      func_0x00010883e644();
      *pbVar1 = 0;
      *(undefined1 *)(param_1 + 0xe2) = 1;
      plVar6 = plVar10;
      func_0x000107c28a3c();
      func_0x00010883e71c();
      if ((extraout_x9 & 1) == 0) {
        lVar12 = *(long *)(param_1 + 0xd8);
        lVar11 = extraout_x8;
      }
      else {
        func_0x00010883e5f8();
        func_0x00010883e310(*(undefined8 *)(param_1 + 0xd0));
        (*extraout_x8_00)();
        func_0x00010883e5a4();
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *plVar10 = 0;
        *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110a609a8;
        *(undefined4 *)(param_1 + 0x40) = 0x2a3;
        *(long *)(param_1 + 0x90) = (long)pbVar1 * 1000000;
        (**(code **)(*plVar6 + 0x18))();
        lVar11 = *(long *)(param_1 + 0xd0);
        func_0x00010883e1f8();
        func_0x00010883e610();
        plVar10 = *(long **)(*(long *)(param_1 + 0xd0) + 0x10);
        FUN_10883d06c(param_1 + 0x90,plVar10,param_1 + 200,*(long *)(param_1 + 0xd0) + 0x80);
        func_0x000107c33ebc(*(undefined8 *)(param_1 + 0x90));
        do {
          func_0x000107c33d58();
        } while (extraout_w10 != 0);
        func_0x000107c33dc8(*(undefined8 *)(param_1 + 0x20));
        if ((extraout_w8 >> 1 & 1) == 0) {
          *(undefined1 *)(param_1 + 0xe0) = 1;
          func_0x00010883e444();
          lVar12 = *plVar10;
          if (lVar12 == 0) {
            func_0x000107c3a5c0();
            lVar12 = *plVar10;
          }
          plVar6 = (long *)(lVar11 + 0x10);
          do {
            if (*plVar6 == 0) {
              func_0x000107c33d68();
              plVar6 = extraout_x8_02;
              uVar5 = extraout_w10_01;
              uVar8 = extraout_w11_00;
            }
            else {
              func_0x00010883e348();
              plVar6 = extraout_x8_01;
              uVar5 = extraout_w10_00;
              uVar8 = extraout_w11;
            }
            if ((uVar8 & 1) != 0) {
              lVar9 = *(long *)(lVar11 + 0x90);
              func_0x00010883e564();
              if ((bool)in_ZR) {
                func_0x00010883e17c();
                func_0x00010883e108();
                func_0x00010883e14c();
                *(long **)(lVar9 + 8) = plVar10;
                *(long **)(lVar11 + 0x90) = plVar10;
              }
              func_0x00010883e554();
              *(long *)(extraout_x8_03 + 0x20) = lVar12;
              func_0x00010883e16c(*(undefined8 *)(lVar11 + 0x90));
              *(undefined8 *)(lVar11 + 0x10) = 0;
              return;
            }
          } while ((uVar5 >> 1 & 1) == 0);
        }
LAB_10883da88:
        plVar10 = (long *)(param_1 + 0x20);
        func_0x000107c28870();
        lVar12 = *plVar10;
        func_0x00010883e1d4();
        func_0x00010883e67c();
        if (lVar12 == 0) {
          func_0x00010883e5ec(*(undefined8 *)(param_1 + 0xd0));
          if (plVar10 != (long *)0x0) {
            func_0x00010883e658();
          }
          FUN_10883d264(param_1 + 0x20,*(undefined8 *)(param_1 + 0xd0));
          func_0x00010883e71c();
          if (extraout_w9 == *(byte *)(param_1 + 0x40)) {
            if (extraout_w9 != 0) {
              func_0x00010883e5c8();
            }
          }
          else if (extraout_w9 == 0) {
            func_0x00010883e3cc();
            *(undefined1 *)(extraout_x8_04 + 0xb0) = 1;
          }
          else {
            func_0x00010883e42c();
          }
          lVar11 = *(long *)(param_1 + 0xd0);
          func_0x00010883d4b8(param_1 + 0x20);
          in_ZR = *(char *)(lVar11 + 0xb0) == '\x01';
          if ((bool)in_ZR) {
            func_0x00010883e54c(*(undefined8 *)(param_1 + 0xd0));
          }
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20);
          *(undefined1 *)(param_1 + 0x28) = 1;
          __ZNSt3__15mutex4lockEv();
          func_0x00010883e3a4();
          func_0x000107c2798c(param_1 + 0x20);
          plVar10 = *(long **)(param_1 + 0xa8);
          if (plVar10 != (long *)0x0) {
            func_0x000107c27994(param_1 + 0x90,param_1 + 0x70);
            func_0x00010868c9c4(param_1 + 0x20,*(undefined8 *)(param_1 + 0xb8),
                                *(undefined8 *)(param_1 + 0xc0));
            (**(code **)(*plVar10 + 200))(plVar10,param_1 + 0x20);
            func_0x00010883e520();
            func_0x000107c27914(param_1 + 0x90);
          }
          lVar11 = *(long *)(param_1 + 0xd0);
          func_0x00010883e510();
          uVar7 = *(undefined8 *)(lVar11 + 0x40);
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          func_0x00010883e58c(&PTR_FUN_110a609a8,uVar7);
          (*extraout_x8_05)();
          func_0x00010883e500();
        }
        func_0x00010883e39c();
        func_0x00010883e38c();
        lVar11 = *(long *)(param_1 + 0xd0);
      }
      *(long *)(param_1 + 0xd8) = lVar12;
      *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_1 + 0xe2);
      lVar11 = *(long *)(lVar11 + 0x60);
      *(long *)(param_1 + 0x20) = lVar11 + 0x58;
      *(long *)(param_1 + 0x28) = lVar11;
      if (lVar11 != 0) {
        do {
          func_0x000107c33d58();
        } while (extraout_w10_02 != 0);
      }
      plVar10 = (long *)(param_1 + 0x20);
      func_0x000107c314f0();
    } while (((ulong)plVar10 & 1) != 0);
    *(undefined1 *)(param_1 + 0xe0) = 0;
    func_0x00010883e444();
    if (*plVar10 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c33d98();
  } while (((ulong)plVar10 & 1) == 0);
  return;
}



/* Entry: 10883dd20; end: 10883dd67;  */

void FUN_10883dd20(long param_1)

{
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(param_1 + 0xe1);
    func_0x00010883e394();
  }
  else {
    func_0x00010883e1d4();
    func_0x00010883e67c();
    func_0x00010883e39c();
    func_0x00010883e38c();
  }
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10883dd68; end: 10883de47;  */

void FUN_10883dd68(long param_1)

{
  func_0x000107c28834(param_1 + 0x48);
  func_0x00010883e278();
  func_0x00010883e210();
  func_0x00010883e1dc();
  func_0x00010883e19c();
  func_0x00010883e1e4();
  return;
}



/* Entry: 10883de48; end: 10883de6b;  */

void FUN_10883de48(void)

{
  func_0x00010883e624();
  func_0x00010883e210();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883de6c; end: 10883debb;  */

void FUN_10883de6c(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010883e1d4();
  func_0x00010883e1cc();
  func_0x00010883e1dc();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10883debc; end: 10883df3b;  */

void FUN_10883debc(void)

{
  func_0x00010883e304();
  func_0x00010883e1cc();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883df3c; end: 10883e01b;  */

void FUN_10883df3c(long param_1)

{
  func_0x000107c28834(param_1 + 0x48);
  func_0x00010883e278();
  func_0x00010883e210();
  func_0x00010883e1dc();
  func_0x00010883e19c();
  func_0x00010883e1e4();
  return;
}



/* Entry: 10883e01c; end: 10883e03f;  */

void FUN_10883e01c(void)

{
  func_0x00010883e624();
  func_0x00010883e210();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883e040; end: 10883e08f;  */

void FUN_10883e040(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010883e1d4();
  func_0x00010883e1cc();
  func_0x00010883e1dc();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10883e090; end: 10883e0e7;  */

void FUN_10883e090(void)

{
  func_0x00010883e304();
  func_0x00010883e1cc();
  func_0x00010883e19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883e0e8; end: 10883e733;  */

void FUN_10883e0e8(undefined1 *param_1)

{
  long unaff_x20;
  long unaff_x22;
  undefined1 unaff_w23;
  
  *param_1 = unaff_w23;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(unaff_x22 + 8) = param_1;
  *(undefined1 **)(unaff_x20 + 0x90) = param_1;
  return;
}



/* Entry: 10883e734; end: 10883e803;  */

void FUN_10883e734(int *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if ((((*(uint *)(param_2 + 0x10) & 1) == 0) && ((*(uint *)(param_2 + 0x10) >> 1 & 1) == 0)) ||
     (FUN_10883e804(), param_3 == 0)) {
    if (*(int *)(param_2 + 0x30) != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      *param_1 = *(int *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    iVar3 = *(int *)(param_2 + 0x34);
    if (iVar3 == 0) {
      return;
    }
    lVar4 = *(long *)(param_2 + 0x38);
    bVar2 = true;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x10);
    if ((uVar1 & 1) != 0) {
      iVar3 = *(int *)(*(long *)(param_2 + 0x18) + 0x18);
      lVar4 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
      bVar2 = iVar3 != 0;
      if (!bVar2 && lVar4 == 0) {
        iVar3 = 0;
      }
      *param_1 = iVar3;
      *(long *)(param_1 + 2) = lVar4;
      *(bool *)(param_1 + 4) = bVar2 || lVar4 != 0;
    }
    if ((uVar1 >> 1 & 1) == 0) {
      return;
    }
    iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 0x18);
    lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
    bVar2 = iVar3 != 0 || lVar4 != 0;
    if (iVar3 == 0 && lVar4 == 0) {
      iVar3 = 0;
    }
  }
  param_1[6] = iVar3;
  *(long *)(param_1 + 8) = lVar4;
  *(bool *)(param_1 + 10) = bVar2;
  return;
}



/* Entry: 10883e804; end: 10883e837;  */

byte FUN_10883e804(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0x50);
    func_0x000107c289e8();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 10883e838; end: 10883e87f;  */

byte FUN_10883e838(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = (int)param_2;
  func_0x000107c29698();
  if (((param_2 & 1) == 0) && (func_0x000107c2969c(), iVar1 == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x40);
  }
  return bVar2 & 1;
}



/* Entry: 10883e880; end: 10883e8fb;  */

void FUN_10883e880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_10883e734(auStack_60,param_2,param_5);
  FUN_10883e838(param_2,param_5);
  FUN_10883e8fc(auStack_88,auStack_60,param_2,param_3);
  FUN_10883e9a4(param_1,auStack_60,auStack_88,param_2,param_3,param_5);
  return;
}



/* Entry: 10883e8fc; end: 10883e9a3;  */

void FUN_10883e8fc(undefined1 *param_1,uint *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[0x20] = 0;
  if ((param_3 == 0) && ((param_2[4] & 1) != 0)) {
    uVar2 = *param_2;
    uVar3 = *(ulong *)(param_2 + 2);
    if ((uVar2 == 0) && (uVar3 == 0)) goto LAB_10883e930;
    if ((char)param_2[10] == '\x01' && uVar3 <= param_4) {
      uVar1 = param_2[6];
      if ((uVar2 <= uVar1) && (uVar2 != uVar1 || uVar3 <= *(ulong *)(param_2 + 8))) {
        uVar3 = *(ulong *)(param_2 + 8);
        uVar2 = uVar1;
      }
      goto LAB_10883e948;
    }
    if ((char)param_2[10] == '\0') {
      if (param_4 < uVar3) {
        return;
      }
      goto LAB_10883e948;
    }
  }
  else {
LAB_10883e930:
    if ((param_2[10] & 1) == 0) {
      return;
    }
  }
  uVar2 = param_2[6];
  uVar3 = *(ulong *)(param_2 + 8);
LAB_10883e948:
  FUN_10883eabc(param_1,uVar2,uVar3);
  param_1[0x20] = 1;
  return;
}



/* Entry: 10883e9a4; end: 10883eabb;  */

void FUN_10883e9a4(uint *param_1,uint *param_2,uint *param_3,byte param_4,ulong param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_10883ec98();
  bVar4 = (byte)param_2[4];
  bVar1 = (param_4 ^ 1) & bVar4;
  if (param_6 == 0) {
    bVar5 = false;
    if (bVar1 != 0) {
      bVar5 = *(ulong *)(param_2 + 2) <= param_5;
    }
    if (((bVar4 & 1) == 0) || (bVar5)) {
      if ((char)param_3[8] == '\x01') {
        uVar6 = *(undefined8 *)param_3;
        uVar9 = *(undefined8 *)(param_3 + 6);
        uVar8 = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_1 + 4) = uVar6;
        *(undefined8 *)(param_1 + 10) = uVar9;
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 8);
        *param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_10883eab0;
      }
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 2);
      *param_1 = *param_2;
      *(undefined8 *)(param_1 + 2) = uVar6;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 2);
    bVar2 = 0;
    if (uVar7 <= param_5) {
      bVar2 = bVar1;
    }
    uVar3 = *param_2;
    if (((bVar2 ^ 1) & bVar4) == 0) {
      uVar7 = 0;
      uVar3 = 0;
    }
    bVar1 = (byte)param_3[8] & 1;
    if (*param_2 < *param_3) {
      bVar2 = 1;
    }
    if ((bVar1 & bVar4) == 0) {
      bVar2 = bVar1;
    }
    uVar6 = *(undefined8 *)param_3;
    uVar9 = *(undefined8 *)(param_3 + 6);
    uVar8 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined8 *)(param_1 + 10) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined4 *)((long)param_1 + 0x31) = *(undefined4 *)((long)param_3 + 0x21);
    param_1[0xd] = param_3[9];
    *param_1 = uVar3;
    *(ulong *)(param_1 + 2) = uVar7;
    *(byte *)(param_1 + 0xc) = bVar2;
  }
LAB_10883eab0:
  *(byte *)(param_1 + 0xe) = param_4;
  return;
}



/* Entry: 10883eabc; end: 10883eb9b;  */

void FUN_10883eabc(uint *param_1,uint param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  int *param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  uVar2 = *(ulong *)(param_6 + 2);
  if ((param_4 < param_3 || param_2 <= *param_6 - 1U) || uVar2 == 0) {
    uVar3 = 0;
    bVar1 = false;
  }
  else if (param_4 < uVar2 + param_3) {
    uVar3 = 1;
    bVar1 = true;
  }
  else {
    uVar3 = 0;
    bVar1 = param_4 < *(long *)(param_6 + 4) + param_3;
  }
  if (uVar2 <= *(ulong *)(param_6 + 4)) {
    uVar2 = *(ulong *)(param_6 + 4);
  }
  *param_1 = param_2;
  *(ulong *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(bool *)((long)param_1 + 0x11) = bVar1;
  *(ulong *)(param_1 + 6) = uVar2 + param_3;
  return;
}



/* Entry: 10883eb9c; end: 10883ec97;  */

void FUN_10883eb9c(long *param_1,ulong param_2)

{
  undefined ***pppuVar1;
  ulong *puVar2;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulong uStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_50 = &PTR_FUN_110a609a8;
  uStack_48 = 0;
  uStack_30 = 0x175;
  uStack_28 = param_2;
  if ((param_2 >> 0x20 & 1) == 0) {
    func_0x000107c28b38(&ppuStack_50,0);
  }
  else {
    pppuVar1 = &ppuStack_50;
    func_0x000107c28b38(pppuVar1,1);
    func_0x000107c278b8(auStack_68,&UNK_10f4bd0b4);
    puVar2 = &uStack_28;
    FUN_108843ae8(puVar2);
    func_0x000107c28824(pppuVar1,auStack_68,puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  func_0x000107c2884c(auStack_90,&ppuStack_50);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_90);
  func_0x000107c2882c(auStack_90);
  func_0x000107c2882c(&ppuStack_50);
  return;
}



/* Entry: 10883ec98; end: 10883eccb;  */

byte FUN_10883ec98(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0x18);
    func_0x000107c289e8();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


