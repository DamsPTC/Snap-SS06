/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072a8fec; end: 1072a903f;  */

void FUN_1072a8fec(long param_1,undefined4 param_2)

{
  long lStack_38;
  undefined1 uStack_30;
  undefined4 uStack_24;
  
  lStack_38 = param_1 + 8;
  uStack_30 = 1;
  uStack_24 = param_2;
  FUN_107279a5c();
  FUN_1072a9658(param_1 + 0xb0,&uStack_24);
  FUN_107279ee0(&lStack_38);
  return;
}



/* Entry: 1072a9040; end: 1072a90eb;  */

undefined8 FUN_1072a9040(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072b0400();
  func_0x0001072a9064();
  func_0x0001072afd84();
  FUN_1072a90ec();
  return unaff_x19;
}



/* Entry: 1072a90ec; end: 1072a9103;  */

void FUN_1072a90ec(long *param_1)

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



/* Entry: 1072a9104; end: 1072a9123;  */

long FUN_1072a9104(long param_1)

{
  func_0x0001072afd18();
  FUN_1072a9178();
  return param_1 + 0x18;
}



/* Entry: 1072a9124; end: 1072a9177;  */

undefined1  [16] FUN_1072a9124(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar10;
  long *unaff_x21;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x23;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x0001072af7b0();
  uStack_28 = extraout_x8;
  func_0x0001072a94f8(alStack_48);
  puVar5 = param_3;
  FUN_1072a9540(alStack_48);
  plVar4 = alStack_48;
  func_0x0001072a9098();
  func_0x0001072af6ec(uStack_28);
  if ((bool)in_ZR) {
    auVar15._8_8_ = puVar5;
    auVar15._0_8_ = param_3;
    return auVar15;
  }
  ___stack_chk_fail();
  uVar1 = *puVar5;
  uVar10 = (ulong)uVar1;
  uVar13 = plVar4[1];
  if (uVar13 != 0) {
    func_0x0001072b0180();
    uVar12 = (uint)uVar13;
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar12 - 1 & uVar1);
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar13 - uVar10) < 0;
      in_ZR = uVar13 == uVar10;
      unaff_x23 = uVar10;
      if (uVar13 <= uVar10) {
        uVar2 = 0;
        if (uVar12 != 0) {
          uVar2 = uVar1 / uVar12;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar12);
      }
    }
    plVar11 = *(long **)(*plVar4 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar7 = extraout_x8_00;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar11;
          if (unaff_x21 == (long *)0x0) goto LAB_1072a9220;
          uVar9 = unaff_x21[1];
          plVar11 = unaff_x21;
          if (uVar9 != uVar10) break;
          in_NG = (int)(*(uint *)(unaff_x21 + 2) - uVar1) < 0;
          in_ZR = false;
          if (*(uint *)(unaff_x21 + 2) == uVar1) {
            uVar6 = 0;
            goto LAB_1072a92dc;
          }
        }
        if ((uVar13 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar13 <= uVar9) {
          func_0x0001072b016c();
          uVar7 = extraout_x8_01;
          uVar9 = extraout_x9;
        }
        in_NG = (long)(uVar9 - unaff_x23) < 0;
        in_ZR = uVar9 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_1072a9220:
  func_0x0001002a9e2c();
  FUN_1072a92f4();
  func_0x0001002a9edc();
  if ((uVar13 == 0) || (func_0x0001002ab830(param_1,param_2,(float)uVar13), (bool)in_NG)) {
    func_0x0001072afcac();
    uVar3 = uVar13 == 3;
    func_0x0001002a9ef0();
    func_0x0001072a9330(plVar4);
    uVar13 = plVar4[1];
    func_0x0001072b0180();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = (ulong)((int)uVar13 - 1U & uVar1);
    }
    else {
      in_ZR = uVar13 == uVar10;
      unaff_x23 = uVar10;
      if (uVar13 <= uVar10) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar10 / uVar13;
        }
        unaff_x23 = uVar10 - uVar7 * uVar13;
      }
    }
  }
  if (*(long *)(*plVar4 + unaff_x23 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_02 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072b0330();
      lVar8 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar10 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar10 = extraout_x9_01;
        if (uVar13 <= extraout_x9_01) {
          func_0x0001072b016c();
          lVar8 = extraout_x8_04;
          uVar10 = extraout_x9_02;
        }
      }
      *(long **)(lVar8 + uVar10 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001072afd30();
  FUN_1072a9488();
  uVar6 = 1;
LAB_1072a92dc:
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = unaff_x21;
  return auVar14;
}



/* Entry: 1072a9178; end: 1072a92f3;  */

undefined1  [16] FUN_1072a9178(undefined8 param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  
  uVar1 = *param_4;
  uVar8 = (ulong)uVar1;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    func_0x0001072b0180();
    uVar10 = (uint)uVar11;
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar11 - uVar8) < 0;
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar1 / uVar10;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar10);
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_1072a9220;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = (int)(*(uint *)(unaff_x21 + 2) - uVar1) < 0;
          in_ZR = false;
          if (*(uint *)(unaff_x21 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_1072a92dc;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          func_0x0001072b016c();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
        in_ZR = uVar7 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_1072a9220:
  func_0x0001002a9e2c();
  FUN_1072a92f4();
  func_0x0001002a9edc();
  if ((uVar11 == 0) || (func_0x0001002ab830(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    func_0x0001072afcac();
    uVar3 = uVar11 == 3;
    func_0x0001002a9ef0();
    func_0x0001072a9330(param_3);
    uVar11 = param_3[1];
    func_0x0001072b0180();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        unaff_x23 = uVar8 - uVar5 * uVar11;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_01 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072b0330();
      lVar6 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar8 = extraout_x9_01;
        if (uVar11 <= extraout_x9_01) {
          func_0x0001072b016c();
          lVar6 = extraout_x8_03;
          uVar8 = extraout_x9_02;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001072afd30();
  FUN_1072a9488();
  uVar4 = 1;
LAB_1072a92dc:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = unaff_x21;
  return auVar12;
}



/* Entry: 1072a92f4; end: 1072a93ab;  */

void FUN_1072a92f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 unaff_x20;
  
  func_0x0001072aff10();
  func_0x0001072b0070();
  func_0x0001072b0300();
  *param_1 = 0;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_4;
  param_1[6] = 0;
  return;
}



/* Entry: 1072a93ac; end: 1072a9457;  */

void FUN_1072a93ac(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072a9458(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001072b01a8();
    FUN_1072a9470();
    func_0x0001072afef8();
    FUN_1072a9458();
    func_0x0001072afbe4();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001072afffc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072af95c();
      func_0x0001072af948();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001072b0210();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001072b0250();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x0001072b022c();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x0001072af71c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072a9458; end: 1072a946f;  */

void FUN_1072a9458(long *param_1,long param_2)

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



/* Entry: 1072a9470; end: 1072a9487;  */

void FUN_1072a9470(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072afd84();
  FUN_1072a94a8();
  return;
}



/* Entry: 1072a9488; end: 1072a94a7;  */

void FUN_1072a9488(void)

{
  func_0x0001072afd84();
  FUN_1072a94a8();
  return;
}



/* Entry: 1072a94a8; end: 1072a94bf;  */

void FUN_1072a94a8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001072afcc4(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001072a9098(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a94c0; end: 1072a953f;  */

void FUN_1072a94c0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001072afcc4();
  if ((bool)in_ZR) {
    func_0x0001072a9098(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a9540; end: 1072a9657;  */

void FUN_1072a9540(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  int iVar3;
  undefined8 extraout_x8;
  long *plVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar2 = alStack_40;
  func_0x0001072af7b0();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x0001072afba4();
    param_1 = *(undefined1 **)(param_1 + 0x18);
    plVar4 = *(long **)(param_2 + 0x18);
    if (param_1 == unaff_x20) {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        func_0x0001072b00fc();
        (*extraout_x8_00)();
        func_0x0001072afc78(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x0001072b00fc(unaff_x19[3]);
        param_2 = unaff_x20;
        (*extraout_x8_01)();
        func_0x0001072afc78(unaff_x19[3]);
        unaff_x19[3] = 0;
        *(undefined1 **)(unaff_x20 + 0x18) = unaff_x20;
        func_0x0001072afe0c(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        func_0x0001072b00fc();
        func_0x0001072afe0c();
        plVar2 = *(long **)(unaff_x20 + 0x18);
        func_0x0001072afc78();
        *(long *)(unaff_x20 + 0x18) = unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
      param_1 = (undefined1 *)plVar2;
    }
    else {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        param_1 = (undefined1 *)unaff_x19[3];
        func_0x0001072afc78();
        unaff_x19[3] = *(long *)(unaff_x20 + 0x18);
        *(undefined1 **)(unaff_x20 + 0x18) = unaff_x20;
      }
      else {
        *(long **)(unaff_x20 + 0x18) = plVar4;
        unaff_x19[3] = (long)param_1;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x0001072af6ec(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_1072a9684();
  if (param_1 != (undefined1 *)0x0) {
    func_0x0001072b03dc();
    FUN_1072a9724();
  }
  return;
}



/* Entry: 1072a9658; end: 1072a9683;  */

void FUN_1072a9658(long param_1)

{
  FUN_1072a9684();
  if (param_1 != 0) {
    func_0x0001072b03dc();
    FUN_1072a9724();
  }
  return;
}



/* Entry: 1072a9684; end: 1072a9723;  */

long FUN_1072a9684(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 1072a9724; end: 1072a9753;  */

undefined8 FUN_1072a9724(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1072a9754(auStack_38);
  FUN_1072a9488(auStack_38);
  return uVar1;
}



/* Entry: 1072a9754; end: 1072a9847;  */

void FUN_1072a9754(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1072a9808;
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
    if (uVar8 == uVar3) goto LAB_1072a9808;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1072a9808:
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



/* Entry: 1072a9848; end: 1072a9867;  */

void FUN_1072a9848(void)

{
  func_0x0001072afd84();
  FUN_1072a9868();
  return;
}



/* Entry: 1072a9868; end: 1072a987f;  */

void FUN_1072a9868(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001077f3bd4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a9880; end: 1072a989b;  */

void FUN_1072a9880(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001077f3bd4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a989c; end: 1072a998f;  */

long * FUN_1072a989c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001072a98d0(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1072a9990; end: 1072a9a67;  */

void FUN_1072a9990(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_1072a9a98();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      func_0x0001072a9ae8(param_1,lVar9 + (long)plVar3 * 0x70,lVar6);
    }
    lVar6 = lVar6 + 0x70;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1072a9a68; end: 1072a9a97;  */

/* WARNING: Possible PIC construction at 0x0001072a99dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072a99e0) */

long * FUN_1072a9a68(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_90 [64];
  
  uVar4 = param_1[2];
  if ((uVar4 < 9) ||
     (uVar2 = uVar4 * 0x19 + param_1[3] * -0x20 == 0, uVar4 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    puVar1 = &stack0xffffffffffffffb0;
    unaff_x22 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar6 = param_1[2];
    param_1[2] = uVar4 << 1 | 1;
    plVar5 = param_1;
    FUN_1072a9a98();
    lVar7 = 0;
    while( true ) {
      if (lVar6 == lVar7) {
        if (lVar6 != 0) {
          plVar3 = (long *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar3);
          return plVar3;
        }
        return plVar5;
      }
      if (-1 < *(char *)(unaff_x22 + lVar7)) break;
      lVar7 = lVar7 + 1;
      plVar3 = plVar3 + 0xe;
    }
    pcVar8 = (code *)0x1072a99e0;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_90;
    func_0x0001072af7b0();
    plVar3 = (long *)&UNK_11099a1e8;
    func_0x00010ae6c914();
    func_0x0001072af6ec(extraout_x8);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar8 = FUN_1072a9ba4;
    ___stack_chk_fail();
  }
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar8;
  plVar5 = (long *)plVar3[6];
  if (plVar5 == (long *)0xffffffffffffffff) {
    plVar5 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar5,(undefined *)((long)plVar5 + (long)plVar3));
    *(undefined8 *)(puVar1 + -0x38) = 0xffffffffffffffff;
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar5;
}



/* Entry: 1072a9a98; end: 1072a9b67;  */

void FUN_1072a9a98(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 0x70);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,0x70);
  return;
}



/* Entry: 1072a9b68; end: 1072a9ba3;  */

undefined * FUN_1072a9b68(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x0001072af7b0();
  puVar1 = &UNK_11099a1e8;
  func_0x00010ae6c914();
  func_0x0001072af6ec(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 1072a9ba4; end: 1072a9baf;  */

long FUN_1072a9ba4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1072a9bb0; end: 1072a9bd7;  */

undefined8 FUN_1072a9bb0(undefined8 param_1)

{
  FUN_1072a9bd8(param_1);
  return param_1;
}



/* Entry: 1072a9bd8; end: 1072a9beb;  */

void FUN_1072a9bd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    if ((bRam00000001131ad1d8 & 1) == 0) {
      iVar3 = 0x131ad1d8;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_1072a9c78(0x1131ad1c8);
        ___cxa_guard_release(0x1131ad1d8);
      }
    }
    lVar2 = lRam00000001131ad1d0;
    uVar1 = uRam00000001131ad1c8;
    param_1[1] = lRam00000001131ad1d0;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10 != 0);
    }
    return;
  }
  FUN_1072a9dc4(&stack0xffffffffffffffef,param_3);
  return;
}



/* Entry: 1072a9bec; end: 1072a9c77;  */

void FUN_1072a9bec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad1d8 & 1) == 0) {
    iVar3 = 0x131ad1d8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1072a9c78(0x1131ad1c8);
      ___cxa_guard_release(0x1131ad1d8);
    }
  }
  lVar2 = lRam00000001131ad1d0;
  uVar1 = uRam00000001131ad1c8;
  param_1[1] = lRam00000001131ad1d0;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072a9c78; end: 1072a9c93;  */

void FUN_1072a9c78(void)

{
  undefined1 uStack_11;
  
  FUN_1072a9c94(&uStack_11);
  return;
}



/* Entry: 1072a9c94; end: 1072a9cff;  */

void FUN_1072a9c94(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072af784();
  func_0x0001072b0488();
  *puStack_30 = &PTR_FUN_11099a1a8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &UNK_10e52b660;
  puStack_30[6] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0;
  func_0x0001072afcd4();
  FUN_1072a9d94();
  func_0x0001072af6ec(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072b063c();
  FUN_1072a9d20();
  func_0x0001072b05c0();
  return;
}



/* Entry: 1072a9d00; end: 1072a9d1f;  */

void FUN_1072a9d00(void)

{
  func_0x0001072b063c();
  FUN_1072a9d20();
  func_0x0001072b05c0();
  return;
}



/* Entry: 1072a9d20; end: 1072a9d3b;  */

void FUN_1072a9d20(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099a1a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072a9d3c; end: 1072a9d3f;  */

void FUN_1072a9d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a1a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072a9d40; end: 1072a9d53;  */

void FUN_1072a9d40(void)

{
  func_0x0001072a9d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a9d54; end: 1072a9d6f;  */

long * FUN_1072a9d54(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1072a9ec8(plVar1);
    __ZdlPv(*plVar1 + -8);
  }
  return plVar1;
}



/* Entry: 1072a9d70; end: 1072a9d93;  */

void FUN_1072a9d70(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072a9d94; end: 1072a9da3;  */

void FUN_1072a9d94(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a9da4; end: 1072a9dc3;  */

void FUN_1072a9da4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072a9dc4(&uStack_11,param_1);
  return;
}



/* Entry: 1072a9dc4; end: 1072a9e23;  */

undefined8 * FUN_1072a9dc4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072af784();
  func_0x0001072b0488();
  FUN_1072a9e24(puStack_30,param_2);
  func_0x0001072afcd4();
  FUN_1072a9d94();
  func_0x0001072af6ec(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072afc3c();
  FUN_1072a9d94();
  func_0x0001072afaac();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099a1a8;
  puStack_30[1] = 0;
  FUN_1072a9e58(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 1072a9e24; end: 1072a9e57;  */

undefined8 * FUN_1072a9e24(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099a1a8;
  param_1[1] = 0;
  FUN_1072a9e58(param_1 + 3);
  return param_1;
}



/* Entry: 1072a9e58; end: 1072a9e6f;  */

void FUN_1072a9e58(long param_1)

{
  FUN_1072a9e70();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1072a9e70; end: 1072a9e8b;  */

void FUN_1072a9e70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1072a9e8c; end: 1072a9ec7;  */

long * FUN_1072a9e8c(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1072a9ec8(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1072a9ec8; end: 1072a9f03;  */

void FUN_1072a9ec8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001072a9b3c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x70;
  }
  return;
}



/* Entry: 1072a9f04; end: 1072a9f63;  */

void FUN_1072a9f04(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1072a9f64();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1072a9d70(param_1);
  return;
}



/* Entry: 1072a9f64; end: 1072a9f9f;  */

long FUN_1072a9f64(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 1072a9fa0; end: 1072aa353;  */

undefined8 FUN_1072a9fa0(undefined8 param_1)

{
  func_0x0001072b0430();
  return param_1;
}



/* Entry: 1072aa354; end: 1072aa35f;  */

long FUN_1072aa354(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af800();
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072aa3b8();
  }
  else {
    func_0x0001072aa394();
    param_1 = unaff_x20 + 0x28;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x28;
}



/* Entry: 1072aa360; end: 1072aa3b7;  */

long FUN_1072aa360(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072aa3b8();
  }
  else {
    func_0x0001072aa394();
    param_1 = unaff_x20 + 0x28;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x28;
}



/* Entry: 1072aa3b8; end: 1072aa423;  */

void FUN_1072aa3b8(void)

{
  undefined8 uStack_48;
  
  func_0x0001072af920();
  func_0x0001072b05a0();
  FUN_1072aa4d8();
  func_0x0001072af904();
  FUN_1072aa560();
  FUN_1072aa424(uStack_48);
  func_0x0001072afc08();
  FUN_1072aa520();
  func_0x0001072afeec();
  func_0x0001072aa6dc();
  return;
}



/* Entry: 1072aa424; end: 1072aa42f;  */

undefined8 * FUN_1072aa424(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ed320;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[4] = 0;
  FUN_1072aa474(param_1,param_2);
  return param_1;
}



/* Entry: 1072aa430; end: 1072aa473;  */

undefined8 * FUN_1072aa430(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ed320;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  param_1[4] = 0;
  FUN_1072aa474(param_1,param_3);
  return param_1;
}



/* Entry: 1072aa474; end: 1072aa4d7;  */

long FUN_1072aa474(long param_1,long param_2)

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
      func_0x00010793373c(param_1);
    }
    else {
      func_0x00010793370c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072aa4d8; end: 1072aa51f;  */

long * FUN_1072aa4d8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  FUN_1072aa554();
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072aa5e0();
  func_0x0001072af688();
  return param_1;
}



/* Entry: 1072aa520; end: 1072aa553;  */

void FUN_1072aa520(void)

{
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072aa5e0();
  func_0x0001072af688();
  return;
}



/* Entry: 1072aa554; end: 1072aa55f;  */

void FUN_1072aa554(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072af800();
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072aa594(param_4);
  }
  func_0x0001072af888(0x28);
  return;
}



/* Entry: 1072aa560; end: 1072aa5b3;  */

void FUN_1072aa560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072aa594(param_4);
  }
  func_0x0001072af888(0x28);
  return;
}



/* Entry: 1072aa5b4; end: 1072aa5df;  */

void FUN_1072aa5b4(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x28) {
    func_0x0001072b03a0();
    FUN_1072aa424();
    lStack_48 = lStack_48 + 0x28;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072aa648();
  FUN_1072aa674(auStack_70);
  return;
}



/* Entry: 1072aa5e0; end: 1072aa647;  */

void FUN_1072aa5e0(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x28) {
    func_0x0001072b03a0();
    FUN_1072aa424();
    lStack_38 = lStack_38 + 0x28;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072aa648();
  FUN_1072aa674(auStack_60);
  return;
}



/* Entry: 1072aa648; end: 1072aa673;  */

void FUN_1072aa648(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02c8();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x28) {
    func_0x0001079332b0();
  }
  return;
}



/* Entry: 1072aa674; end: 1072aa69f;  */

void FUN_1072aa674(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072aa6a0();
  }
  return;
}



/* Entry: 1072aa6a0; end: 1072aa6af;  */

void FUN_1072aa6a0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001079332b0();
  }
  return;
}



/* Entry: 1072aa6b0; end: 1072aa707;  */

void FUN_1072aa6b0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001079332b0();
  }
  return;
}



/* Entry: 1072aa708; end: 1072aa70f;  */

void FUN_1072aa708(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x0001079332b0();
  }
  return;
}



/* Entry: 1072aa710; end: 1072aa73f;  */

void FUN_1072aa710(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x0001079332b0();
  }
  return;
}



/* Entry: 1072aa740; end: 1072aa793;  */

void FUN_1072aa740(undefined8 param_1)

{
  long unaff_x21;
  undefined8 auStack_40 [2];
  
  func_0x0001072af980();
  auStack_40[0] = param_1;
  func_0x0001072b01dc();
  FUN_107279a5c();
  FUN_1072aa894(unaff_x21 + 0xa8);
  FUN_1072aa8b4();
  FUN_107279ee0(auStack_40);
  return;
}



/* Entry: 1072aa794; end: 1072aa797;  */

void FUN_1072aa794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109990b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072aa798; end: 1072aa7ab;  */

void FUN_1072aa798(void)

{
  FUN_1072aa7d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aa7ac; end: 1072aa7d3;  */

void FUN_1072aa7ac(long param_1)

{
  FUN_1072aa7e4(param_1 + 0xc0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1072aa7d4; end: 1072aa7e3;  */

void FUN_1072aa7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aa7e4; end: 1072aa87b;  */

undefined8 FUN_1072aa7e4(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072b0400();
  func_0x0001072aa808();
  func_0x0001072afd84();
  FUN_1072aa87c();
  return unaff_x19;
}



/* Entry: 1072aa87c; end: 1072aa893;  */

void FUN_1072aa87c(long *param_1)

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



/* Entry: 1072aa894; end: 1072aa8b3;  */

long FUN_1072aa894(long param_1)

{
  func_0x0001072afd18();
  FUN_1072aa8ec();
  return param_1 + 0x28;
}



/* Entry: 1072aa8b4; end: 1072aa8eb;  */

void FUN_1072aa8b4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x000104bff3c8();
  return;
}



/* Entry: 1072aa8ec; end: 1072aaa87;  */

undefined1  [16]
FUN_1072aa8ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x27;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x0001072b0014();
  func_0x0001002a9c14();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x27 = uVar7 & param_3;
      uVar1 = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar6) < 0;
      uVar1 = param_3 == uVar6;
      unaff_x27 = param_3;
      if (uVar6 <= param_3) {
        func_0x0001072b0594();
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_1072aa9a0;
          func_0x0001002ab824();
          plVar5 = unaff_x21;
          if (!(bool)uVar1) break;
          plVar2 = unaff_x21 + 2;
          func_0x0001000e107c(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1072aaa70;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = extraout_x8 & uVar7;
        }
        else {
          uVar4 = extraout_x8;
          if (uVar6 <= extraout_x8) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = extraout_x8 / uVar6;
            }
            uVar4 = extraout_x8 - uVar4 * uVar6;
          }
        }
        in_NG = (long)(uVar4 - unaff_x27) < 0;
        uVar1 = 1;
      } while (uVar4 == unaff_x27);
    }
  }
LAB_1072aa9a0:
  func_0x0001002a9e2c();
  FUN_1072aaa88();
  func_0x0001002a9edc();
  if ((uVar6 == 0) ||
     (func_0x0001002ab830(param_1,param_2,(float)uVar6), uVar7 = unaff_x27, (bool)in_NG)) {
    func_0x0001072b037c();
    func_0x0001002a9ef0();
    FUN_1072aaaf4();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar7 = uVar6 - 1 & param_3;
    }
    else {
      uVar7 = param_3;
      if (uVar6 <= param_3) {
        func_0x0001072b0594();
        uVar7 = unaff_x27;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar7 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_00 + uVar7 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8_00 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001002aa05c();
  FUN_1072aac4c();
  uVar3 = 1;
LAB_1072aaa70:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1072aaa88; end: 1072aaadb;  */

void FUN_1072aaa88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x0001072b0070();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_1072aaadc(param_2 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1072aaadc; end: 1072aaaf3;  */

void FUN_1072aaadc(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1072aaaf4; end: 1072aab6f;  */

void FUN_1072aaaf4(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x0001072b0120();
  if ((!(bool)in_ZR) && (func_0x0001072b00f0(), !(bool)in_ZR)) {
    func_0x0001072afe04();
  }
  func_0x0001072b0114();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_1072aab2c:
    func_0x0001072afc30();
    if (param_2 == 0) {
      FUN_1072aac1c(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001072b01a8();
      FUN_1072aac34();
      func_0x0001072afef8();
      FUN_1072aac1c();
      func_0x0001072afbe4();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001072afffc();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072af95c();
        func_0x0001072af948();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x0001072b0210();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x0001072b0250();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x0001072b022c();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x0001072af71c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x0001072af700();
    if (((bool)in_CY) && (func_0x0001072b0108(), extraout_x8 == 0)) {
      func_0x0001072af6cc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001072afafc();
    if (!(bool)in_CY) goto LAB_1072aab2c;
  }
  return;
}



/* Entry: 1072aab70; end: 1072aac1b;  */

void FUN_1072aab70(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072aac1c(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001072b01a8();
    FUN_1072aac34();
    func_0x0001072afef8();
    FUN_1072aac1c();
    func_0x0001072afbe4();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001072afffc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072af95c();
      func_0x0001072af948();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001072b0210();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001072b0250();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x0001072b022c();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x0001072af71c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072aac1c; end: 1072aac33;  */

void FUN_1072aac1c(long *param_1,long param_2)

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



/* Entry: 1072aac34; end: 1072aac4b;  */

void FUN_1072aac34(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072afd84();
  FUN_1072aac6c();
  return;
}



/* Entry: 1072aac4c; end: 1072aac6b;  */

void FUN_1072aac4c(void)

{
  func_0x0001072afd84();
  FUN_1072aac6c();
  return;
}



/* Entry: 1072aac6c; end: 1072aac83;  */

void FUN_1072aac6c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001072afcc4(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001072aa83c(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aac84; end: 1072aad73;  */

void FUN_1072aac84(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001072afcc4();
  if ((bool)in_ZR) {
    func_0x0001072aa83c(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aad74; end: 1072aadef;  */

void FUN_1072aad74(undefined8 param_1)

{
  long *unaff_x19;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001072af920();
  FUN_107289660();
  FUN_107289720(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 6,unaff_x19 + 2);
  func_0x000104c32a18(lStack_38);
  lStack_38 = lStack_38 + 0x40;
  func_0x0001072afc08();
  FUN_1072896a0();
  func_0x0001072afeec();
  func_0x000107289820();
  return;
}



/* Entry: 1072aadf0; end: 1072aae17;  */

void FUN_1072aadf0(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x0001072b040c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072aae18(*unaff_x19);
  }
  return;
}



/* Entry: 1072aae18; end: 1072aae2f;  */

void FUN_1072aae18(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072aae30; end: 1072aae7f;  */

long FUN_1072aae30(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = param_1;
  func_0x0001072afd60();
  func_0x0001072b02e0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(long *)(param_1 + 0x18) = lVar1;
  return param_1;
}



/* Entry: 1072aae80; end: 1072aaea3;  */

undefined8 FUN_1072aae80(undefined8 param_1)

{
  func_0x0001072b02e0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 1072aaea4; end: 1072aaeb7;  */

void FUN_1072aaea4(void)

{
  FUN_1072aae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aaeb8; end: 1072aaeef;  */

undefined8 FUN_1072aaeb8(undefined8 param_1)

{
  func_0x0001072afd60();
  FUN_1072ab0bc();
  return param_1;
}



/* Entry: 1072aaef0; end: 1072aaf13;  */

undefined8 FUN_1072aaef0(long param_1,undefined8 param_2)

{
  func_0x0001072b02e0(param_2,param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  return param_2;
}



/* Entry: 1072aaf14; end: 1072ab087;  */

void FUN_1072aaf14(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  long *unaff_x19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x0001072af784();
  uStack_38 = extraout_x8;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  FUN_107262e9c(&uStack_88,param_1 + 8);
  func_0x0001072ab0e0(auStack_50,1);
  puVar1 = puStack_40;
  lVar3 = param_2[1];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_11099a248;
  puStack_40[1] = 0;
  if (lVar3 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001073af27c(&uStack_c0,0,0);
  uStack_a8 = uStack_b8;
  uStack_b0 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x000107352640(puVar1 + 3,&uStack_88,&uStack_a0,lVar2 + 8,0x1131ad3d0,&uStack_b0);
  func_0x00010724b8b8(&uStack_b0);
  func_0x00010724b8b8(&uStack_c0);
  func_0x00010725b6e0(&uStack_a0);
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001072ab160(auStack_50);
  func_0x000104c2f714(&uStack_88);
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined4 *)(unaff_x19 + 2) = 0;
  func_0x00010726ee94();
  func_0x0001072af6ec(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724b8b8(&uStack_b0);
    func_0x00010724b8b8(&uStack_c0);
    func_0x00010725b6e0(&uStack_a0);
    __ZNSt3__119__shared_weak_countD2Ev(puVar1);
    func_0x0001072ab160(auStack_50);
    func_0x000104c2f714(&uStack_88);
    func_0x0001072afaac();
    func_0x0001072afbfc();
    func_0x0001072afbbc();
    func_0x0001072af7e4();
    return;
  }
  return;
}



/* Entry: 1072ab088; end: 1072ab0af;  */

void FUN_1072ab088(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999160);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072ab0b0; end: 1072ab0bb;  */

undefined ** FUN_1072ab0b0(void)

{
  return &PTR_DAT_110999160;
}



/* Entry: 1072ab0bc; end: 1072ab0ff;  */

undefined8 FUN_1072ab0bc(undefined8 param_1)

{
  func_0x0001072b02e0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  return param_1;
}



/* Entry: 1072ab100; end: 1072ab12f;  */

void FUN_1072ab100(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x3159721ed7e754) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x530);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099a248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ab130; end: 1072ab133;  */

void FUN_1072ab130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


