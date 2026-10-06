/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108764744; end: 1087648b7;  */

void FUN_108764744(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong uVar8;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar9;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  long extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x11_04;
  long *extraout_x11_05;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar10;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar11;
  ulong extraout_x15_02;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *apuStack_58 [2];
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined3 uStack_43;
  
  uVar13 = *param_2;
  lVar14 = *(long *)(param_1 + 0x30);
  plVar5 = (long *)(lVar14 + 0x20);
  FUN_108762d14(plVar5,param_1 + 8);
  lVar1 = plVar5[1];
  for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
    FUN_10867a27c(lVar7,uVar13);
  }
  puVar6 = (undefined8 *)(lVar14 + 0x20);
  FUN_108764278(puVar6,param_1 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  uVar8 = *(ulong *)(lVar14 + 0x28);
  if ((uVar8 & uVar8 - 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = puVar6[1] == uVar8;
    if (uVar8 <= (ulong)puVar6[1]) {
      func_0x000108765c9c(*puVar6);
    }
  }
  do {
    func_0x000108765890();
  } while (!(bool)uVar2);
  bVar3 = extraout_x11 == lVar14 + 0x30;
  bVar4 = true;
  lVar7 = extraout_x8;
  if (bVar3) {
LAB_10876480c:
    if (lVar7 == 0) {
LAB_10876483c:
      func_0x000108765c20();
      lVar7 = extraout_x8_03;
      uVar8 = extraout_x9_02;
      uVar9 = extraout_x10_02;
      plVar5 = extraout_x11_03;
      uVar10 = extraout_x13_02;
      goto LAB_108764840;
    }
    func_0x000108765c38();
    if (bVar4) {
      uVar12 = extraout_x15_01 & extraout_x13_01;
    }
    else {
      uVar12 = extraout_x15_01;
      if (extraout_x10_01 <= extraout_x15_01) {
        uVar8 = 0;
        if (extraout_x10_01 != 0) {
          uVar8 = extraout_x15_01 / extraout_x10_01;
        }
        uVar12 = extraout_x15_01 - uVar8 * extraout_x10_01;
      }
    }
    lVar7 = extraout_x8_02;
    uVar8 = extraout_x9_01;
    uVar9 = extraout_x10_01;
    plVar5 = extraout_x11_02;
    uVar10 = extraout_x13_01;
    uVar11 = extraout_x15_01;
    if (uVar12 != extraout_x9_01) goto LAB_10876483c;
  }
  else {
    func_0x000108765c64();
    lVar7 = extraout_x8_00;
    uVar8 = extraout_x9;
    uVar9 = extraout_x10;
    plVar5 = extraout_x11_00;
    uVar10 = extraout_x13;
    if (bVar3) {
      uVar12 = extraout_x15 & extraout_x13;
    }
    else {
      uVar12 = extraout_x15;
      if (extraout_x10 <= extraout_x15) {
        func_0x000108765c58();
        lVar7 = extraout_x8_01;
        uVar8 = extraout_x9_00;
        uVar9 = extraout_x10_00;
        plVar5 = extraout_x11_01;
        uVar10 = extraout_x13_00;
        uVar12 = extraout_x15_00;
      }
    }
    bVar4 = uVar12 == uVar8;
    if (!bVar4) goto LAB_10876480c;
LAB_108764840:
    if (lVar7 == 0) goto LAB_108764870;
    uVar11 = *(ulong *)(lVar7 + 8);
  }
  if ((uVar9 & uVar10) == 0) {
    uVar11 = uVar11 & uVar10;
  }
  else if (uVar9 <= uVar11) {
    func_0x000108765c14();
    lVar7 = extraout_x8_04;
    uVar8 = extraout_x9_03;
    plVar5 = extraout_x11_04;
    uVar11 = extraout_x15_02;
  }
  if (uVar11 != uVar8) {
    func_0x000108765c08();
    lVar7 = extraout_x8_05;
    plVar5 = extraout_x11_05;
  }
LAB_108764870:
  *plVar5 = lVar7;
  *puVar6 = 0;
  *(long *)(lVar14 + 0x38) = *(long *)(lVar14 + 0x38) + -1;
  uStack_48 = 1;
  uStack_47 = 0;
  uStack_43 = 0;
  apuStack_58[0] = puVar6;
  FUN_108764588(apuStack_58);
  return;
}



/* Entry: 1087648b8; end: 1087648eb;  */

long FUN_1087648b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108765aa4(param_2,param_1,&PTR_DAT_110a6b860);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087648ec; end: 1087648f7;  */

undefined ** FUN_1087648ec(void)

{
  return &PTR_DAT_110a6b860;
}



/* Entry: 1087648f8; end: 10876493f;  */

void FUN_1087648f8(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000108765920();
  func_0x0001087659a4();
  func_0x000107c27994();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108765880();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 108764940; end: 1087649e3;  */

long FUN_108764940(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000108765cb4(), extraout_x8 != 0)) {
    func_0x000108765734();
    func_0x0001087657ec();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000108765b24();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000108765b18();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000108765b0c();
        if (!(bool)uVar1) break;
        func_0x0001087656b8();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000108765aec();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 1087649e4; end: 108764a2f;  */

undefined8 * FUN_1087649e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a6b880;
  func_0x000107c27994(param_1 + 1);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108765880();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 108764a30; end: 108764acb;  */

void FUN_108764a30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar7;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar8;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  long extraout_x11;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar9;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar10;
  ulong extraout_x15_02;
  ulong uVar11;
  long unaff_x19;
  
  func_0x0001087658ec();
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; uVar2 = param_1 == puVar1, !(bool)uVar2;
      param_1 = param_1 + 1) {
    func_0x000108765984(**(undefined8 **)*param_1);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  lVar5 = lVar6 + 0x48;
  FUN_108764940(lVar5,unaff_x19 + 8);
  if (lVar5 == 0) {
    return;
  }
  func_0x0001087657d8();
  if ((bool)uVar2) {
    uVar2 = 1;
  }
  else {
    uVar2 = extraout_x9 == extraout_x10;
    if (extraout_x10 <= extraout_x9) {
      func_0x000108765c9c();
    }
  }
  do {
    func_0x000108765890();
  } while (!(bool)uVar2);
  bVar3 = extraout_x11 == lVar6 + 0x58;
  bVar4 = true;
  lVar5 = extraout_x8;
  if (bVar3) {
LAB_108764b5c:
    if (lVar5 == 0) {
LAB_108764b8c:
      func_0x000108765c20();
      lVar5 = extraout_x8_02;
      uVar7 = extraout_x9_03;
      uVar8 = extraout_x10_03;
      uVar9 = extraout_x13_02;
      goto LAB_108764b90;
    }
    func_0x000108765c38();
    if (bVar4) {
      uVar11 = extraout_x15_01 & extraout_x13_01;
    }
    else {
      uVar11 = extraout_x15_01;
      if (extraout_x10_02 <= extraout_x15_01) {
        uVar7 = 0;
        if (extraout_x10_02 != 0) {
          uVar7 = extraout_x15_01 / extraout_x10_02;
        }
        uVar11 = extraout_x15_01 - uVar7 * extraout_x10_02;
      }
    }
    uVar7 = extraout_x9_02;
    uVar8 = extraout_x10_02;
    uVar9 = extraout_x13_01;
    uVar10 = extraout_x15_01;
    if (uVar11 != extraout_x9_02) goto LAB_108764b8c;
  }
  else {
    func_0x000108765c64();
    lVar5 = extraout_x8_00;
    uVar7 = extraout_x9_00;
    uVar8 = extraout_x10_00;
    uVar9 = extraout_x13;
    if (bVar3) {
      uVar11 = extraout_x15 & extraout_x13;
    }
    else {
      uVar11 = extraout_x15;
      if (extraout_x10_00 <= extraout_x15) {
        func_0x000108765c58();
        lVar5 = extraout_x8_01;
        uVar7 = extraout_x9_01;
        uVar8 = extraout_x10_01;
        uVar9 = extraout_x13_00;
        uVar11 = extraout_x15_00;
      }
    }
    bVar4 = uVar11 == uVar7;
    if (!bVar4) goto LAB_108764b5c;
LAB_108764b90:
    if (lVar5 == 0) goto LAB_108764bc0;
    uVar10 = *(ulong *)(lVar5 + 8);
  }
  if ((uVar8 & uVar9) == 0) {
    uVar10 = uVar10 & uVar9;
  }
  else if (uVar8 <= uVar10) {
    func_0x000108765c14();
    uVar7 = extraout_x9_04;
    uVar10 = extraout_x15_02;
  }
  if (uVar10 != uVar7) {
    func_0x000108765c08();
  }
LAB_108764bc0:
  func_0x0001087655a8();
  FUN_108764198();
  return;
}



/* Entry: 108764acc; end: 108764acf;  */

undefined8 FUN_108764acc(undefined8 param_1)

{
  func_0x0001087656e8(&PTR_FUN_110a6b880);
  func_0x000108765a80();
  return param_1;
}



/* Entry: 108764ad0; end: 108764ae3;  */

void FUN_108764ad0(void)

{
  func_0x000108764bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108764ae4; end: 108764bfb;  */

void FUN_108764ae4(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar5;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar6;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  long extraout_x11;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar8;
  ulong extraout_x15_02;
  ulong uVar9;
  
  lVar4 = param_1;
  FUN_108764940();
  if (lVar4 == 0) {
    return;
  }
  func_0x0001087657d8();
  if ((bool)in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x9 == extraout_x10;
    if (extraout_x10 <= extraout_x9) {
      func_0x000108765c9c();
    }
  }
  do {
    func_0x000108765890();
  } while (!(bool)uVar1);
  bVar2 = extraout_x11 == param_1 + 0x10;
  bVar3 = true;
  lVar4 = extraout_x8;
  if (bVar2) {
LAB_108764b5c:
    if (lVar4 == 0) {
LAB_108764b8c:
      func_0x000108765c20();
      lVar4 = extraout_x8_02;
      uVar5 = extraout_x9_03;
      uVar6 = extraout_x10_03;
      uVar7 = extraout_x13_02;
      goto LAB_108764b90;
    }
    func_0x000108765c38();
    if (bVar3) {
      uVar9 = extraout_x15_01 & extraout_x13_01;
    }
    else {
      uVar9 = extraout_x15_01;
      if (extraout_x10_02 <= extraout_x15_01) {
        uVar5 = 0;
        if (extraout_x10_02 != 0) {
          uVar5 = extraout_x15_01 / extraout_x10_02;
        }
        uVar9 = extraout_x15_01 - uVar5 * extraout_x10_02;
      }
    }
    uVar5 = extraout_x9_02;
    uVar6 = extraout_x10_02;
    uVar7 = extraout_x13_01;
    uVar8 = extraout_x15_01;
    if (uVar9 != extraout_x9_02) goto LAB_108764b8c;
  }
  else {
    func_0x000108765c64();
    lVar4 = extraout_x8_00;
    uVar5 = extraout_x9_00;
    uVar6 = extraout_x10_00;
    uVar7 = extraout_x13;
    if (bVar2) {
      uVar9 = extraout_x15 & extraout_x13;
    }
    else {
      uVar9 = extraout_x15;
      if (extraout_x10_00 <= extraout_x15) {
        func_0x000108765c58();
        lVar4 = extraout_x8_01;
        uVar5 = extraout_x9_01;
        uVar6 = extraout_x10_01;
        uVar7 = extraout_x13_00;
        uVar9 = extraout_x15_00;
      }
    }
    bVar3 = uVar9 == uVar5;
    if (!bVar3) goto LAB_108764b5c;
LAB_108764b90:
    if (lVar4 == 0) goto LAB_108764bc0;
    uVar8 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & uVar7) == 0) {
    uVar8 = uVar8 & uVar7;
  }
  else if (uVar6 <= uVar8) {
    func_0x000108765c14();
    uVar5 = extraout_x9_04;
    uVar8 = extraout_x15_02;
  }
  if (uVar8 != uVar5) {
    func_0x000108765c08();
  }
LAB_108764bc0:
  func_0x0001087655a8();
  FUN_108764198();
  return;
}



/* Entry: 108764bfc; end: 108764c13;  */

void FUN_108764bfc(long *param_1,long param_2)

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



/* Entry: 108764c14; end: 108764cb7;  */

void FUN_108764c14(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001087657b8();
  if (unaff_x20 != 0) {
    func_0x000108765ba8();
    if ((bool)in_ZR) {
      func_0x000108764c48(unaff_x20 + 0x10);
    }
    func_0x000108765908();
  }
  return;
}



/* Entry: 108764cb8; end: 108764cbf;  */

void FUN_108764cb8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000108764cf4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108764cc0; end: 108764d17;  */

void FUN_108764cc0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000108764cf4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108764d18; end: 108764dbb;  */

long FUN_108764d18(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000108765cb4(), extraout_x8 != 0)) {
    func_0x000108765734();
    func_0x0001087657ec();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000108765b24();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000108765b18();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000108765b0c();
        if (!(bool)uVar1) break;
        func_0x0001087656b8();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000108765aec();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 108764dbc; end: 108764e13;  */

void FUN_108764dbc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108765920();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110a6b8d8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 108764e14; end: 108764e17;  */

void FUN_108764e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108764e18; end: 108764e2b;  */

void FUN_108764e18(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108764e2c; end: 108764e3b;  */

void FUN_108764e2c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010876587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 108764e3c; end: 108764e6f;  */

long FUN_108764e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108765aa4(param_2,param_1,&PTR_DAT_110a6b918);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108764e70; end: 108764e73;  */

void FUN_108764e70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108764e74; end: 108764e9f;  */

undefined8 FUN_108764e74(undefined8 param_1)

{
  func_0x0001087656e8(&PTR_FUN_110a6b938);
  func_0x000108765a80();
  return param_1;
}



/* Entry: 108764ea0; end: 108764eb3;  */

void FUN_108764ea0(void)

{
  FUN_108764e74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108764eb4; end: 108764f13;  */

void FUN_108764eb4(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010876578c();
  func_0x000108765964();
  func_0x0001087654cc();
  func_0x000108765a08();
  func_0x000108765ab8();
  while (unaff_x21 != unaff_x20) {
    func_0x000108765cec();
    (**(code **)(extraout_x8 + 0x10))();
  }
  func_0x000108765954();
  return;
}



/* Entry: 108764f14; end: 108764f77;  */

void FUN_108764f14(long param_1)

{
  long extraout_x8;
  long unaff_x21;
  
  func_0x000108765964();
  func_0x0001087654cc();
  func_0x000108765a08();
  func_0x000108765ab8();
  while (unaff_x21 != param_1) {
    func_0x000108765cec();
    (**(code **)(extraout_x8 + 0x18))();
  }
  func_0x000108765954();
  return;
}



/* Entry: 108764f78; end: 108765063;  */

void FUN_108764f78(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar5;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar6;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  long extraout_x11;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar8;
  ulong extraout_x15_02;
  ulong uVar9;
  
  lVar4 = param_1;
  FUN_108764d18();
  if (lVar4 == 0) {
    return;
  }
  func_0x0001087657d8();
  if ((bool)in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x9 == extraout_x10;
    if (extraout_x10 <= extraout_x9) {
      func_0x000108765c9c();
    }
  }
  do {
    func_0x000108765890();
  } while (!(bool)uVar1);
  bVar2 = extraout_x11 == param_1 + 0x10;
  bVar3 = true;
  lVar4 = extraout_x8;
  if (bVar2) {
LAB_108764ff0:
    if (lVar4 == 0) {
LAB_108765020:
      func_0x000108765c20();
      lVar4 = extraout_x8_02;
      uVar5 = extraout_x9_03;
      uVar6 = extraout_x10_03;
      uVar7 = extraout_x13_02;
      goto LAB_108765024;
    }
    func_0x000108765c38();
    if (bVar3) {
      uVar9 = extraout_x15_01 & extraout_x13_01;
    }
    else {
      uVar9 = extraout_x15_01;
      if (extraout_x10_02 <= extraout_x15_01) {
        uVar5 = 0;
        if (extraout_x10_02 != 0) {
          uVar5 = extraout_x15_01 / extraout_x10_02;
        }
        uVar9 = extraout_x15_01 - uVar5 * extraout_x10_02;
      }
    }
    uVar5 = extraout_x9_02;
    uVar6 = extraout_x10_02;
    uVar7 = extraout_x13_01;
    uVar8 = extraout_x15_01;
    if (uVar9 != extraout_x9_02) goto LAB_108765020;
  }
  else {
    func_0x000108765c64();
    lVar4 = extraout_x8_00;
    uVar5 = extraout_x9_00;
    uVar6 = extraout_x10_00;
    uVar7 = extraout_x13;
    if (bVar2) {
      uVar9 = extraout_x15 & extraout_x13;
    }
    else {
      uVar9 = extraout_x15;
      if (extraout_x10_00 <= extraout_x15) {
        func_0x000108765c58();
        lVar4 = extraout_x8_01;
        uVar5 = extraout_x9_01;
        uVar6 = extraout_x10_01;
        uVar7 = extraout_x13_00;
        uVar9 = extraout_x15_00;
      }
    }
    bVar3 = uVar9 == uVar5;
    if (!bVar3) goto LAB_108764ff0;
LAB_108765024:
    if (lVar4 == 0) goto LAB_108765054;
    uVar8 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & uVar7) == 0) {
    uVar8 = uVar8 & uVar7;
  }
  else if (uVar6 <= uVar8) {
    func_0x000108765c14();
    uVar5 = extraout_x9_04;
    uVar8 = extraout_x15_02;
  }
  if (uVar8 != uVar5) {
    func_0x000108765c08();
  }
LAB_108765054:
  func_0x0001087655a8();
  FUN_108764c14();
  return;
}



/* Entry: 108765064; end: 10876507b;  */

void FUN_108765064(long *param_1,long param_2)

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



/* Entry: 10876507c; end: 10876511f;  */

void FUN_10876507c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001087657b8();
  if (unaff_x20 != 0) {
    func_0x000108765ba8();
    if ((bool)in_ZR) {
      func_0x0001087650b0(unaff_x20 + 0x10);
    }
    func_0x000108765908();
  }
  return;
}



/* Entry: 108765120; end: 108765127;  */

void FUN_108765120(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010876515c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108765128; end: 10876517f;  */

void FUN_108765128(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010876578c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010876515c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108765180; end: 108765223;  */

long FUN_108765180(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000108765cb4(), extraout_x8 != 0)) {
    func_0x000108765734();
    func_0x0001087657ec();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000108765b24();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000108765b18();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000108765b0c();
        if (!(bool)uVar1) break;
        func_0x0001087656b8();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000108765aec();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 108765224; end: 10876527b;  */

void FUN_108765224(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108765920();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110a6b990;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10876527c; end: 10876527f;  */

void FUN_10876527c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108765280; end: 108765293;  */

void FUN_108765280(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108765294; end: 1087652a3;  */

void FUN_108765294(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010876587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1087652a4; end: 1087652d7;  */

long FUN_1087652a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108765aa4(param_2,param_1,&PTR_DAT_110a6b9d0);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087652d8; end: 1087652db;  */

void FUN_1087652d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087652dc; end: 108765307;  */

undefined8 FUN_1087652dc(undefined8 param_1)

{
  func_0x0001087656e8(&PTR_FUN_110a6b9f0);
  func_0x000108765a80();
  return param_1;
}



/* Entry: 108765308; end: 10876531b;  */

void FUN_108765308(void)

{
  FUN_1087652dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876531c; end: 10876537b;  */

void FUN_10876531c(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010876578c();
  func_0x000108765974();
  func_0x0001087654cc();
  func_0x000108765a98();
  func_0x000108765ab8();
  while (unaff_x21 != unaff_x20) {
    func_0x000108765cec();
    (**(code **)(extraout_x8 + 0x10))();
  }
  func_0x00010876594c();
  return;
}



/* Entry: 10876537c; end: 1087653df;  */

void FUN_10876537c(long param_1)

{
  long extraout_x8;
  long unaff_x21;
  
  func_0x000108765974();
  func_0x0001087654cc();
  func_0x000108765a98();
  func_0x000108765ab8();
  while (unaff_x21 != param_1) {
    func_0x000108765cec();
    (**(code **)(extraout_x8 + 0x18))();
  }
  func_0x00010876594c();
  return;
}



/* Entry: 1087653e0; end: 1087654cb;  */

void FUN_1087653e0(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong uVar5;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar6;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  long extraout_x11;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong uVar8;
  ulong extraout_x15_02;
  ulong uVar9;
  
  lVar4 = param_1;
  FUN_108765180();
  if (lVar4 == 0) {
    return;
  }
  func_0x0001087657d8();
  if ((bool)in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x9 == extraout_x10;
    if (extraout_x10 <= extraout_x9) {
      func_0x000108765c9c();
    }
  }
  do {
    func_0x000108765890();
  } while (!(bool)uVar1);
  bVar2 = extraout_x11 == param_1 + 0x10;
  bVar3 = true;
  lVar4 = extraout_x8;
  if (bVar2) {
LAB_108765458:
    if (lVar4 == 0) {
LAB_108765488:
      func_0x000108765c20();
      lVar4 = extraout_x8_02;
      uVar5 = extraout_x9_03;
      uVar6 = extraout_x10_03;
      uVar7 = extraout_x13_02;
      goto LAB_10876548c;
    }
    func_0x000108765c38();
    if (bVar3) {
      uVar9 = extraout_x15_01 & extraout_x13_01;
    }
    else {
      uVar9 = extraout_x15_01;
      if (extraout_x10_02 <= extraout_x15_01) {
        uVar5 = 0;
        if (extraout_x10_02 != 0) {
          uVar5 = extraout_x15_01 / extraout_x10_02;
        }
        uVar9 = extraout_x15_01 - uVar5 * extraout_x10_02;
      }
    }
    uVar5 = extraout_x9_02;
    uVar6 = extraout_x10_02;
    uVar7 = extraout_x13_01;
    uVar8 = extraout_x15_01;
    if (uVar9 != extraout_x9_02) goto LAB_108765488;
  }
  else {
    func_0x000108765c64();
    lVar4 = extraout_x8_00;
    uVar5 = extraout_x9_00;
    uVar6 = extraout_x10_00;
    uVar7 = extraout_x13;
    if (bVar2) {
      uVar9 = extraout_x15 & extraout_x13;
    }
    else {
      uVar9 = extraout_x15;
      if (extraout_x10_00 <= extraout_x15) {
        func_0x000108765c58();
        lVar4 = extraout_x8_01;
        uVar5 = extraout_x9_01;
        uVar6 = extraout_x10_01;
        uVar7 = extraout_x13_00;
        uVar9 = extraout_x15_00;
      }
    }
    bVar3 = uVar9 == uVar5;
    if (!bVar3) goto LAB_108765458;
LAB_10876548c:
    if (lVar4 == 0) goto LAB_1087654bc;
    uVar8 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & uVar7) == 0) {
    uVar8 = uVar8 & uVar7;
  }
  else if (uVar6 <= uVar8) {
    func_0x000108765c14();
    uVar5 = extraout_x9_04;
    uVar8 = extraout_x15_02;
  }
  if (uVar8 != uVar5) {
    func_0x000108765c08();
  }
LAB_1087654bc:
  func_0x0001087655a8();
  FUN_10876507c();
  return;
}



/* Entry: 1087654cc; end: 108765d37;  */

void FUN_1087654cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 108765d38; end: 108765e47;  */

void FUN_108765d38(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  if ((int)param_3 == 0xe) {
    lVar2 = *(long *)(param_1 + 200);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 200);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,param_3);
  if ((int)plVar1 != 0) {
    func_0x000107c29820(alStack_40,param_1);
    plVar3 = *(long **)(alStack_40[0] + 0x70);
    func_0x000107c297b4(auStack_50,param_1 + 8);
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2,param_3);
    (**(code **)(*plVar3 + 0x18))(plVar3,auStack_50,plVar1);
    func_0x000107c297a4(auStack_50);
    func_0x000107c297b0(alStack_40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108765e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(param_3,param_2);
  return;
}



/* Entry: 108765e48; end: 108765ee7;  */

void FUN_108765e48(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined1 auStack_b0 [16];
  long alStack_a0 [2];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0x108765f80;
  ppuStack_50 = &PTR_DAT_110a6baa8;
  puVar4 = &uStack_58;
  uStack_48 = param_1;
  FUN_108765ee8();
  pppuVar2 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  __Unwind_Resume();
  if ((int)param_2 == 0xe) {
    pppuVar2[0x19] = (undefined **)((long)pppuVar2[0x19] + 1);
  }
  uVar3 = param_2;
  FUN_108770c94();
  if ((1 << (ulong)((uint)uVar3 & 0x1f) & 0xfdbU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108765f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_2,puVar4);
    return;
  }
  if ((int)param_2 == 0xe) {
    ppuVar5 = pppuVar2[0x19];
  }
  else {
    ppuVar5 = (undefined **)((long)pppuVar2[9] - (long)pppuVar2[0x19]);
  }
  ppuVar1 = pppuVar2[8];
  (**(code **)(*ppuVar1 + 0x18))(ppuVar1,ppuVar5,param_2);
  if ((int)ppuVar1 != 0) {
    func_0x000107c29820(alStack_a0,pppuVar2);
    plVar6 = *(long **)(alStack_a0[0] + 0x70);
    func_0x000107c297b4(auStack_b0,pppuVar2 + 1);
    ppuVar1 = pppuVar2[8];
    (**(code **)(*ppuVar1 + 0x28))(ppuVar1,ppuVar5,param_2);
    (**(code **)(*plVar6 + 0x18))(plVar6,auStack_b0,ppuVar1);
    func_0x000107c297a4(auStack_b0);
    func_0x000107c297b0(alStack_a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108765e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_2,puVar4);
  return;
}



/* Entry: 108765ee8; end: 108765f6b;  */

void FUN_108765ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  if ((int)param_2 == 0xe) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  }
  uVar2 = param_2;
  FUN_108770c94();
  if ((1 << (ulong)((uint)uVar2 & 0x1f) & 0xfdbU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108765f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_4)(param_2,param_4);
    return;
  }
  if ((int)param_2 == 0xe) {
    lVar3 = *(long *)(param_1 + 200);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 200);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,param_2);
  if ((int)plVar1 != 0) {
    func_0x000107c29820(alStack_40,param_1);
    plVar4 = *(long **)(alStack_40[0] + 0x70);
    func_0x000107c297b4(auStack_50,param_1 + 8);
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar3,param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4,auStack_50,plVar1);
    func_0x000107c297a4(auStack_50);
    func_0x000107c297b0(alStack_40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108765e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_4)(param_2,param_4);
  return;
}



/* Entry: 108765f6c; end: 108765faf;  */

void FUN_108765f6c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108765f70);
  (*pcVar1)();
}



/* Entry: 108765fb0; end: 108766133;  */

undefined **
FUN_108765fb0(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined ***pppuVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined4 auStack_620 [122];
  undefined4 uStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  long lStack_3c0;
  long lStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined4 uStack_398;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  char cStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  byte bStack_154;
  char cStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined8 uStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  ppuVar8 = param_1;
  func_0x000108767fdc();
  *ppuVar8 = (undefined *)&PTR_FUN_110a6bad0;
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba1d2);
  ppuStack_88 = &PTR_DAT_110a6bcb8;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_6;
  *param_6 = 0;
  ppuStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,param_3,&ppuStack_88,param_11,&uStack_a8,0xb);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *param_1 = (undefined *)&PTR_FUN_110a6bad0;
  func_0x000107c27994(param_1 + 0x16,param_4);
  FUN_108767914(param_1 + 0x19,param_5);
  param_1[0x1e] = (undefined *)*param_7;
  (**(code **)(param_7[1] + 0x10))(param_1 + 0x1f,param_7 + 1);
  puVar13 = (undefined *)*param_8;
  param_1[0x25] = (undefined *)param_8[1];
  param_1[0x24] = puVar13;
  *param_8 = 0;
  param_8[1] = 0;
  func_0x000108767f68(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c27914(param_1 + 0x16);
  FUN_10875b664();
  func_0x000108768014();
  pcStack_b8 = FUN_108766134;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000108767fdc();
  uStack_118 = extraout_x8_00;
  func_0x000107c297b4(&puStack_3e0,param_1 + 1);
  ppuStack_3d0 = param_1;
  func_0x000107c297b4(&lStack_400,param_1 + 1);
  lStack_3b8 = lStack_3f8;
  lStack_3c0 = lStack_400;
  lStack_400 = 0;
  lStack_3f8 = 0;
  ppuStack_3f0 = param_1;
  ppuStack_3b0 = param_1;
  func_0x000108767f34(&ppuStack_358);
  puStack_3a0 = ppuStack_358[0x4b];
  puStack_3a8 = ppuStack_358[0x4a];
  if (ppuStack_358[0x4b] != (undefined *)0x0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10 != 0);
  }
  uStack_398 = *(undefined4 *)(param_1[0xb] + 0xfc);
  func_0x000107c297b0(&ppuStack_358);
  ppuStack_148 = (undefined **)FUN_1087674c4;
  ppuStack_140 = &PTR_FUN_110a6bc80;
  plVar7 = (long *)0x30;
  __Znwm();
  plVar7[1] = lStack_3b8;
  *plVar7 = lStack_3c0;
  if (lStack_3b8 != 0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10_00 != 0);
  }
  plVar7[3] = (long)puStack_3a8;
  plVar7[2] = (long)ppuStack_3b0;
  plVar7[4] = (long)puStack_3a0;
  if (puStack_3a0 != (undefined *)0x0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(plVar7 + 5) = uStack_398;
  puVar13 = param_1[1];
  puVar1 = param_1[2];
  puStack_368 = puVar13;
  puStack_360 = puVar1;
  plStack_138 = plVar7;
  if (puVar1 == (undefined *)0x0) {
    puVar15 = param_1[0xb];
  }
  else {
    do {
      func_0x000108767f48();
    } while (extraout_w10_02 != 0);
    puVar15 = param_1[0xb];
    do {
      func_0x000108767f48();
    } while (extraout_w10_03 != 0);
  }
  ppuVar8 = (undefined **)0xb8;
  puStack_388 = puVar13;
  puStack_380 = puVar1;
  __Znwm();
  puVar5 = puStack_3d8;
  puVar4 = puStack_3e0;
  ppuVar10 = ppuVar8 + 1;
  *ppuVar10 = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  *ppuVar8 = (undefined *)&PTR_FUN_110a6bb40;
  ppuStack_358 = (undefined **)FUN_108766898;
  ppuStack_350 = &PTR_FUN_110a6bb80;
  puStack_388 = (undefined *)0x0;
  puStack_380 = (undefined *)0x0;
  ppuVar14 = ppuVar8 + 3;
  *ppuVar14 = (undefined *)&PTR_FUN_110a6bc48;
  pcStack_180 = FUN_108766918;
  ppuStack_178 = &PTR_FUN_110a6bb98;
  puStack_3e0 = (undefined *)0x0;
  puStack_3d8 = (undefined *)0x0;
  uStack_168 = 0;
  ppuStack_160 = ppuStack_3d0;
  ppuVar8[4] = FUN_108766918;
  ppuVar8[5] = (undefined *)&PTR_FUN_110a6bb98;
  ppuVar8[7] = puVar5;
  ppuVar8[6] = puVar4;
  uStack_170 = 0;
  ppuVar8[8] = (undefined *)ppuStack_3d0;
  ppuVar8[10] = FUN_1087674c4;
  puStack_348 = puVar13;
  puStack_340 = puVar1;
  (*(code *)ppuStack_140[2])(ppuVar8 + 0xb,&ppuStack_140);
  *ppuVar14 = (undefined *)&PTR_DAT_110a6bbc0;
  ppuVar8[0x10] = (undefined *)ppuStack_358;
  (*(code *)ppuStack_350[2])(ppuVar8 + 0x11,&ppuStack_350);
  ppuVar8[0x16] = puVar15;
  (*(code *)*ppuStack_178)(&ppuStack_178);
  (*(code *)*ppuStack_350)(&ppuStack_350);
  func_0x000107c297a8(&puStack_388);
  uStack_378 = 0;
  uStack_370 = 0;
  ppuStack_410 = ppuVar14;
  ppuStack_408 = ppuVar8;
  FUN_10876796c(&uStack_378);
  func_0x000107c297a8(&puStack_368);
  func_0x000108767fbc();
  FUN_108766848(&lStack_3c0);
  func_0x000108767f34(&lStack_3c0);
  FUN_10885edd8(&ppuStack_358,*(undefined8 *)(lStack_3c0 + 0x60),param_1 + 0x16);
  FUN_108663a10(&pcStack_180,&ppuStack_358);
  FUN_108656820(&ppuStack_358);
  func_0x000108767fa4();
  uVar6 = cStack_150 == '\x01';
  if (((bool)uVar6) && ((bStack_154 & 1) == 0)) {
    func_0x000108767f34(&lStack_3c0);
    func_0x000108768008(&ppuStack_358,*(undefined8 *)(lStack_3c0 + 0x60));
    func_0x000108767fa4();
    uVar6 = cStack_188 == '\x01';
    if ((bool)uVar6) {
      puVar13 = param_1[0xb];
      func_0x000107c278b8(&lStack_3c0,&DAT_10f4b36ec);
      ppuVar9 = &puStack_340;
      func_0x000107c29e74();
      func_0x000107c278b8(&ppuStack_148,(&PTR_DAT_110a6bd28)[(ulong)ppuVar9 & 0xffffffff]);
      func_0x000107c28b34(puVar13,&lStack_3c0,&ppuStack_148);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_148);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_3c0);
    }
    func_0x000107c288c8(&ppuStack_358);
    ppuStack_358 = &PTR_FUN_110a8cb18;
    ppuStack_350 = (undefined **)0x0;
    ppuStack_328 = (undefined **)0x0;
    ppuStack_320 = (undefined **)0x0;
    puStack_340 = (undefined *)0x0;
    uStack_338 = 0;
    puStack_348 = (undefined *)0x0;
    uStack_330 = 0;
    func_0x000107c29ee4(&lStack_3c0,param_1 + 0x16);
    puStack_348 = (undefined *)((ulong)puStack_348 | 1);
    if (ppuStack_328 == (undefined **)0x0) {
      ppuVar9 = ppuStack_350;
      if (((ulong)ppuStack_350 & 1) != 0) {
        ppuVar9 = *(undefined ***)((ulong)ppuStack_350 & 0xfffffffffffffffe);
      }
      func_0x000107c287e0();
      ppuStack_328 = ppuVar9;
    }
    func_0x000107c287d0();
    func_0x000108767fb4();
    ppuVar9 = param_1 + 0x1b;
    while (ppuVar9 = (undefined **)*ppuVar9, ppuVar9 != (undefined **)0x0) {
      FUN_108767594(&puStack_340,ppuVar9[2]);
    }
    func_0x000108767f34(&ppuStack_148);
    func_0x00010876803c(&lStack_3c0);
    puStack_348 = (undefined *)((ulong)puStack_348 | 2);
    if (ppuStack_320 == (undefined **)0x0) {
      ppuVar9 = ppuStack_350;
      if (((ulong)ppuStack_350 & 1) != 0) {
        ppuVar9 = *(undefined ***)((ulong)ppuStack_350 & 0xfffffffffffffffe);
      }
      func_0x000107c287e0();
      ppuStack_320 = ppuVar9;
    }
    func_0x000107c287d0();
    func_0x000108767fb4();
    func_0x000107c297b0(&ppuStack_148);
    func_0x000108767f34(&lStack_3c0);
    plVar7 = *(long **)(lStack_3c0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar3) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppuVar12 = &ppuStack_358;
    ppuStack_148 = ppuVar14;
    ppuStack_140 = ppuVar8;
    (**(code **)(*plVar7 + 0x70))(plVar7,pppuVar12,&ppuStack_148);
    uVar11 = SUB84(pppuVar12,0);
    func_0x000108767994(&ppuStack_148);
    func_0x000108767fa4();
    FUN_1088f2f18(&ppuStack_358);
  }
  else {
    uVar11 = 7;
    FUN_108766708(param_1);
  }
  FUN_1086569a0(&pcStack_180);
  FUN_10876796c(&ppuStack_410);
  func_0x000107c297a4(&lStack_400);
  ppuVar10 = &puStack_3e0;
  func_0x000107c297a4();
  func_0x000108767f68(uStack_118);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000108767fb4();
    func_0x000107c297b0(&ppuStack_148);
    FUN_1088f2f18(&ppuStack_358);
    FUN_1086569a0(&pcStack_180);
    FUN_10876796c(&ppuStack_410);
    func_0x000107c297a4(&lStack_400);
    func_0x000107c297a4(&puStack_3e0);
    __Unwind_Resume();
    pcStack_418 = FUN_108766708;
    ppuStack_430 = ppuVar8;
    ppuStack_428 = param_1;
    ppuStack_420 = &puStack_c0;
    FUN_10875ec20();
    ppuVar8 = (undefined **)auStack_620;
    uStack_438 = 1;
    auStack_620[0] = uVar11;
    (*(code *)ppuVar10[0x1e])(auStack_620,ppuVar10 + 0x1e);
    FUN_1087677f4(auStack_620);
    return ppuVar8;
  }
  return ppuVar10;
}



/* Entry: 108766134; end: 108766707;  */

void FUN_108766134(undefined *param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined ***pppuVar13;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined4 auStack_570 [122];
  undefined4 uStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  long lStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined4 uStack_2e8;
  ulong uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  ulong uStack_298;
  long alStack_290 [2];
  undefined4 uStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  char cStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  byte bStack_a4;
  char cStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  func_0x000108767fdc();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&puStack_330,param_1 + 8);
  puStack_320 = param_1;
  func_0x000107c297b4(&lStack_350,param_1 + 8);
  lStack_308 = lStack_348;
  lStack_310 = lStack_350;
  lStack_350 = 0;
  lStack_348 = 0;
  puStack_340 = param_1;
  puStack_300 = param_1;
  func_0x000108767f34(&ppuStack_2a8);
  puStack_2f0 = ppuStack_2a8[0x4b];
  puStack_2f8 = ppuStack_2a8[0x4a];
  if (ppuStack_2a8[0x4b] != (undefined *)0x0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10 != 0);
  }
  uStack_2e8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_2a8);
  ppuStack_98 = (undefined **)FUN_1087674c4;
  ppuStack_90 = &PTR_FUN_110a6bc80;
  plVar8 = (long *)0x30;
  __Znwm();
  plVar8[1] = lStack_308;
  *plVar8 = lStack_310;
  if (lStack_308 != 0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10_00 != 0);
  }
  plVar8[3] = (long)puStack_2f8;
  plVar8[2] = (long)puStack_300;
  plVar8[4] = (long)puStack_2f0;
  if (puStack_2f0 != (undefined *)0x0) {
    do {
      func_0x000108767f48();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(plVar8 + 5) = uStack_2e8;
  uVar1 = *(ulong *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_2b8 = uVar1;
  lStack_2b0 = lVar2;
  plStack_88 = plVar8;
  if (lVar2 == 0) {
    puVar16 = *(undefined **)(param_1 + 0x58);
  }
  else {
    do {
      func_0x000108767f48();
    } while (extraout_w10_02 != 0);
    puVar16 = *(undefined **)(param_1 + 0x58);
    do {
      func_0x000108767f48();
    } while (extraout_w10_03 != 0);
  }
  ppuVar9 = (undefined **)0xb8;
  uStack_2d8 = uVar1;
  lStack_2d0 = lVar2;
  __Znwm();
  puVar6 = puStack_328;
  puVar5 = puStack_330;
  ppuVar11 = ppuVar9 + 1;
  *ppuVar11 = (undefined *)0x0;
  ppuVar9[2] = (undefined *)0x0;
  *ppuVar9 = (undefined *)&PTR_FUN_110a6bb40;
  ppuStack_2a8 = (undefined **)FUN_108766898;
  ppuStack_2a0 = &PTR_FUN_110a6bb80;
  uStack_2d8 = 0;
  lStack_2d0 = 0;
  ppuVar15 = ppuVar9 + 3;
  *ppuVar15 = (undefined *)&PTR_FUN_110a6bc48;
  pcStack_d0 = FUN_108766918;
  ppuStack_c8 = &PTR_FUN_110a6bb98;
  puStack_330 = (undefined *)0x0;
  puStack_328 = (undefined *)0x0;
  uStack_b8 = 0;
  puStack_b0 = puStack_320;
  ppuVar9[4] = FUN_108766918;
  ppuVar9[5] = (undefined *)&PTR_FUN_110a6bb98;
  ppuVar9[7] = puVar6;
  ppuVar9[6] = puVar5;
  uStack_c0 = 0;
  ppuVar9[8] = puStack_320;
  ppuVar9[10] = FUN_1087674c4;
  uStack_298 = uVar1;
  alStack_290[0] = lVar2;
  (*(code *)ppuStack_90[2])(ppuVar9 + 0xb,&ppuStack_90);
  *ppuVar15 = (undefined *)&PTR_DAT_110a6bbc0;
  ppuVar9[0x10] = (undefined *)ppuStack_2a8;
  (*(code *)ppuStack_2a0[2])(ppuVar9 + 0x11,&ppuStack_2a0);
  ppuVar9[0x16] = puVar16;
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
  func_0x000107c297a8(&uStack_2d8);
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  ppuStack_360 = ppuVar15;
  ppuStack_358 = ppuVar9;
  FUN_10876796c(&uStack_2c8);
  func_0x000107c297a8(&uStack_2b8);
  func_0x000108767fbc();
  FUN_108766848(&lStack_310);
  func_0x000108767f34(&lStack_310);
  FUN_10885edd8(&ppuStack_2a8,*(undefined8 *)(lStack_310 + 0x60),param_1 + 0xb0);
  FUN_108663a10(&pcStack_d0,&ppuStack_2a8);
  FUN_108656820(&ppuStack_2a8);
  func_0x000108767fa4();
  uVar7 = cStack_a0 == '\x01';
  if (((bool)uVar7) && ((bStack_a4 & 1) == 0)) {
    func_0x000108767f34(&lStack_310);
    func_0x000108768008(&ppuStack_2a8,*(undefined8 *)(lStack_310 + 0x60));
    func_0x000108767fa4();
    uVar7 = cStack_d8 == '\x01';
    if ((bool)uVar7) {
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c278b8(&lStack_310,&DAT_10f4b36ec);
      plVar8 = alStack_290;
      func_0x000107c29e74();
      func_0x000107c278b8(&ppuStack_98,(&PTR_DAT_110a6bd28)[(ulong)plVar8 & 0xffffffff]);
      func_0x000107c28b34(uVar14,&lStack_310,&ppuStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_310);
    }
    func_0x000107c288c8(&ppuStack_2a8);
    ppuStack_2a8 = &PTR_FUN_110a8cb18;
    ppuStack_2a0 = (undefined **)0x0;
    ppuStack_278 = (undefined **)0x0;
    ppuStack_270 = (undefined **)0x0;
    alStack_290[0] = 0;
    alStack_290[1] = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    func_0x000107c29ee4(&lStack_310,param_1 + 0xb0);
    uStack_298 = uStack_298 | 1;
    if (ppuStack_278 == (undefined **)0x0) {
      ppuVar10 = ppuStack_2a0;
      if (((ulong)ppuStack_2a0 & 1) != 0) {
        ppuVar10 = *(undefined ***)((ulong)ppuStack_2a0 & 0xfffffffffffffffe);
      }
      func_0x000107c287e0();
      ppuStack_278 = ppuVar10;
    }
    func_0x000107c287d0();
    func_0x000108767fb4();
    plVar8 = (long *)(param_1 + 0xd8);
    while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
      FUN_108767594(alStack_290,plVar8[2]);
    }
    func_0x000108767f34(&ppuStack_98);
    func_0x00010876803c(&lStack_310);
    uStack_298 = uStack_298 | 2;
    if (ppuStack_270 == (undefined **)0x0) {
      ppuVar10 = ppuStack_2a0;
      if (((ulong)ppuStack_2a0 & 1) != 0) {
        ppuVar10 = *(undefined ***)((ulong)ppuStack_2a0 & 0xfffffffffffffffe);
      }
      func_0x000107c287e0();
      ppuStack_270 = ppuVar10;
    }
    func_0x000107c287d0();
    func_0x000108767fb4();
    func_0x000107c297b0(&ppuStack_98);
    func_0x000108767f34(&lStack_310);
    plVar8 = *(long **)(lStack_310 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar4) {
        *ppuVar11 = *ppuVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuVar13 = &ppuStack_2a8;
    ppuStack_98 = ppuVar15;
    ppuStack_90 = ppuVar9;
    (**(code **)(*plVar8 + 0x70))(plVar8,pppuVar13,&ppuStack_98);
    uVar12 = SUB84(pppuVar13,0);
    func_0x000108767994(&ppuStack_98);
    func_0x000108767fa4();
    FUN_1088f2f18(&ppuStack_2a8);
  }
  else {
    uVar12 = 7;
    FUN_108766708(param_1);
  }
  FUN_1086569a0(&pcStack_d0);
  FUN_10876796c(&ppuStack_360);
  func_0x000107c297a4(&lStack_350);
  ppuVar11 = &puStack_330;
  func_0x000107c297a4();
  func_0x000108767f68(uStack_68);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000108767fb4();
    func_0x000107c297b0(&ppuStack_98);
    FUN_1088f2f18(&ppuStack_2a8);
    FUN_1086569a0(&pcStack_d0);
    FUN_10876796c(&ppuStack_360);
    func_0x000107c297a4(&lStack_350);
    func_0x000107c297a4(&puStack_330);
    __Unwind_Resume();
    pcStack_368 = FUN_108766708;
    ppuStack_380 = ppuVar9;
    puStack_378 = param_1;
    puStack_370 = &stack0xfffffffffffffff0;
    FUN_10875ec20();
    uStack_388 = 1;
    auStack_570[0] = uVar12;
    (*(code *)ppuVar11[0x1e])(auStack_570,ppuVar11 + 0x1e);
    FUN_1087677f4(auStack_570);
    return;
  }
  return;
}



/* Entry: 108766708; end: 108766733;  */

void FUN_108766708(long param_1,undefined4 param_2)

{
  undefined4 auStack_210 [122];
  undefined4 uStack_28;
  
  FUN_10875ec20();
  uStack_28 = 1;
  auStack_210[0] = param_2;
  (**(code **)(param_1 + 0xf0))(auStack_210,(undefined8 *)(param_1 + 0xf0));
  FUN_1087677f4(auStack_210);
  return;
}



/* Entry: 108766734; end: 108766767;  */

long FUN_108766734(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108767a58(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 108766768; end: 1087667b7;  */

void FUN_108766768(undefined8 *param_1,undefined4 param_2)

{
  undefined4 auStack_210 [122];
  undefined4 uStack_28;
  
  uStack_28 = 1;
  auStack_210[0] = param_2;
  (*(code *)*param_1)(auStack_210,param_1);
  FUN_1087677f4(auStack_210);
  return;
}



/* Entry: 1087667b8; end: 1087667bb;  */

undefined8 * FUN_1087667b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bad0;
  func_0x000107c288e4(param_1 + 0x24);
  func_0x000108767fd4(param_1[0x1f]);
  func_0x00010867bb84(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 1087667bc; end: 1087667cf;  */

void FUN_1087667bc(void)

{
  func_0x0001087677a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087667d0; end: 108766847;  */

undefined1 * FUN_1087667d0(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000108767fdc();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x000108767f68(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000108768050();
  func_0x000107c27914();
  func_0x000108767f94();
  func_0x000107c297ac(puVar1 + 0x18);
  func_0x000100562400();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 108766848; end: 10876686f;  */

undefined8 FUN_108766848(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108766870; end: 108766873;  */

void FUN_108766870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bb40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108766874; end: 108766887;  */

void FUN_108766874(void)

{
  FUN_1087674b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108766888; end: 108766897;  */

void FUN_108766888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108766890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108766898; end: 1087668f3;  */

long FUN_108766898(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 1087668f4; end: 108766917;  */

void FUN_1087668f4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108766918; end: 1087672ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108766918(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar18;
  long extraout_x8_01;
  ulong uVar19;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  long alStack_740 [3];
  undefined1 **ppuStack_728;
  undefined8 uStack_720;
  undefined1 uStack_718;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined1 uStack_700;
  undefined1 uStack_6f8;
  undefined1 auStack_6f0 [120];
  undefined1 auStack_678 [24];
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  undefined1 uStack_638;
  undefined1 uStack_630;
  undefined1 uStack_62c;
  ulong uStack_628;
  undefined1 uStack_620;
  uint uStack_618;
  undefined1 uStack_614;
  undefined1 uStack_610;
  undefined1 uStack_608;
  undefined1 uStack_600;
  undefined1 uStack_5fc;
  undefined1 uStack_5f8;
  undefined1 uStack_5f0;
  undefined1 uStack_5d8;
  undefined1 uStack_5d0;
  undefined1 uStack_5cc;
  undefined1 uStack_5c8;
  undefined1 uStack_5c4;
  undefined1 uStack_5c0;
  undefined1 uStack_5b8;
  undefined1 uStack_5a0;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [64];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_4b0 [264];
  int iStack_3a8;
  byte bStack_340;
  ulong *puStack_308;
  ulong *puStack_300;
  char cStack_2e0;
  long alStack_2d8 [2];
  uint uStack_2c8;
  undefined4 uStack_2c4;
  ulong uStack_2c0;
  undefined1 uStack_2b8;
  char cStack_2b0;
  undefined8 uStack_2a8;
  undefined1 **ppuStack_2a0;
  undefined1 uStack_298;
  uint uStack_290;
  byte bStack_28c;
  undefined1 auStack_288 [5];
  undefined2 uStack_283;
  undefined1 uStack_281;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined2 uStack_268;
  ulong auStack_260 [4];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  byte bStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar20 = *(long *)(param_2 + 0x20);
  auStack_4b0[0] = 0;
  cStack_2e0 = '\0';
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0;
  FUN_10867d03c(&uStack_4d0,*(undefined8 *)(lVar20 + 0xe0));
  FUN_108767f28();
  uVar4 = auStack_260[0];
  func_0x000108767fac();
  uVar22 = *(undefined8 *)(*(long *)(uVar4 + 0x60) + 0x18);
  func_0x000107c278b8(auStack_528,&UNK_10f4ba1d2);
  func_0x000107c31420(auStack_510,uVar22,auStack_528);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
  func_0x000108768008(auStack_260,*(undefined8 *)(uVar4 + 0x60));
  func_0x000107c290ac(auStack_4b0,auStack_260);
  func_0x000107c288c8(auStack_260);
  uVar22 = 7;
  if ((cStack_2e0 == '\x01') && ((bStack_340 & 1) == 0)) {
    uVar16 = (ulong)*(uint *)(param_1 + 0x18);
    if (uVar16 == *(uint *)(lVar20 + 0xe0)) {
      puVar23 = (ulong *)0x0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_530 = 0x3f800000;
      lVar28 = 8;
      for (uVar29 = 0; ppuVar17 = &PTR_PTR_113286f90, uVar29 != uVar16; uVar29 = uVar29 + 1) {
        uVar16 = *(ulong *)(param_1 + 0x10);
        puVar7 = (ulong *)(param_1 + 0x10);
        if ((uVar16 & 1) != 0) {
          puVar7 = (ulong *)(uVar16 + lVar28 + -1);
        }
        uVar24 = *puVar7;
        uVar16 = *(ulong *)(uVar24 + 0x10);
        iVar26 = *(int *)(uVar24 + 0x24);
        if (iVar26 == 2) {
          func_0x000108767f34(alStack_740);
          func_0x00010876803c(auStack_260);
          if (*(int *)(uVar24 + 0x24) == 2) {
            ppuVar17 = *(undefined ***)(uVar24 + 0x18);
          }
          ppuVar2 = &PTR_PTR_113286e08;
          if ((undefined **)ppuVar17[6] != (undefined **)0x0) {
            ppuVar2 = (undefined **)ppuVar17[6];
          }
          puVar7 = auStack_260;
          FUN_1086a5c08(puVar7,auStack_4b0,ppuVar2 + 0x18,ppuVar17[0xc]);
          if ((long)puVar23 <= (long)puVar7) {
            puVar23 = puVar7;
          }
          func_0x000107c2a2e0(auStack_260);
          func_0x000108767f9c();
          iVar26 = *(int *)(uVar24 + 0x24);
        }
        if (iVar26 == 3) {
          uVar3 = *(int *)(uVar24 + 0x18) - 1;
          if (uVar3 < 3) {
            uVar14 = *(undefined4 *)(&UNK_10df4f8f0 + (ulong)uVar3 * 4);
          }
          else {
            uVar14 = 0;
          }
        }
        else {
          uVar6 = iVar26 == 2;
          if ((bool)uVar6) {
            lVar25 = *(long *)(uVar24 + 0x18);
            FUN_108767f28();
            FUN_1086a2c40(lVar25,auStack_260[0] + 0xf0);
            func_0x000108767fac();
            func_0x000108767fec();
            lVar1 = extraout_x9 + 0xe08;
            if (!(bool)uVar6) {
              lVar1 = extraout_x8;
            }
            if ((*(byte *)(lVar1 + 0x140) & 1) == 0) {
              if ((*(byte *)(lVar25 + 0x10) & 1) != 0) {
                FUN_108767f28();
                uVar24 = auStack_260[0];
                func_0x000108767fac();
                FUN_108767f28();
                uVar5 = auStack_260[0];
                func_0x000108767fac();
                ppuVar17 = &PTR_PTR_113280c30;
                if (*(undefined ***)(lVar25 + 0x28) != (undefined **)0x0) {
                  ppuVar17 = *(undefined ***)(lVar25 + 0x28);
                }
                iVar26 = (int)ppuVar17;
                func_0x000107c29dec();
                uVar6 = iVar26 == 0;
                uVar14 = 1;
                if (!(bool)uVar6) {
                  uVar14 = 2;
                }
                func_0x000108767f34(&uStack_2c8);
                lVar1 = CONCAT44(uStack_2c4,uStack_2c8);
                func_0x000107c278b8(&puStack_280,&UNK_10f4ba1f2);
                alStack_740[1] = 0;
                alStack_740[0] = 0;
                ppuStack_728 = (undefined1 **)0x0;
                alStack_740[2] = 0;
                uStack_720 = CONCAT44(uStack_720._4_4_,0x3f800000);
                FUN_1086a32e0(auStack_260,uVar24 + 0x60,lVar1 + 0xf0,lVar20 + 0xb0,lVar25,
                              &puStack_280,alStack_740);
                func_0x00010867bb84(alStack_740);
                ppuVar8 = &puStack_280;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x000108767fcc();
                if ((auStack_260[0] & 1) == 0) {
                  if ((bStack_b0 & 1) == 0) {
                    func_0x000108767f34(alStack_740);
                    ppuVar9 = *(undefined1 ***)(alStack_740[0] + 0x120);
                    (**(code **)(*ppuVar9 + 0x10))();
                    ppuVar8 = ppuVar9;
                    func_0x000108767f9c();
                  }
                  else {
                    ppuVar9 = (undefined1 **)CONCAT44(uStack_23c,uStack_240);
                  }
                  uVar22 = *(undefined8 *)(lVar25 + 0x60);
                  func_0x000108767fec();
                  lVar1 = extraout_x9_00 + 0xe08;
                  if (!(bool)uVar6) {
                    lVar1 = extraout_x8_00;
                  }
                  uVar18 = *(undefined8 *)(lVar1 + 0x128);
                  func_0x000108767f34(alStack_740);
                  uVar27 = *(undefined8 *)(alStack_740[0] + 0x1c0);
                  func_0x000108767f34(&uStack_2c8);
                  uStack_270 = *(undefined8 *)(CONCAT44(uStack_2c4,uStack_2c8) + 0x1b0);
                  puStack_280 = auStack_4b0;
                  uStack_268 = 0;
                  uStack_278 = uVar27;
                  func_0x000108767fcc();
                  func_0x000108767f9c();
                  uStack_290 = uStack_290 & 0xffffff00;
                  bStack_28c = 0;
                  auStack_288[0] = 0;
                  uStack_283 = 0;
                  uStack_281 = iStack_3a8 == 1;
                  ppuStack_2a0 = (undefined1 **)0x0;
                  uStack_2a8 = 0;
                  uStack_298 = 0;
                  func_0x000107c28258();
                  uStack_298 = 1;
                  ppuStack_2a0 = ppuVar8;
                  func_0x000108767f34(alStack_740);
                  lVar1 = alStack_740[0];
                  func_0x000108767f34(&uStack_2c8);
                  uVar10 = lVar20 + 0xb0;
                  FUN_108842828(uVar10,uVar22,lVar25,lVar1 + 0x80,
                                CONCAT44(uStack_2c4,uStack_2c8) + 0x90,&puStack_280,&uStack_290);
                  func_0x000108767fcc();
                  func_0x000108767f9c();
                  puVar11 = &uStack_2a8;
                  func_0x000107c2825c();
                  iVar26 = (int)uVar10;
                  uVar6 = iVar26 == 2;
                  uVar15 = 4;
                  if (!(bool)uVar6) {
                    uVar15 = 2;
                  }
                  func_0x000107c27994(alStack_740,lVar20 + 0xb0);
                  uStack_718 = 1;
                  uStack_710 = *(undefined8 *)(lVar25 + 0x70);
                  uStack_708 = 1;
                  uStack_700 = 0;
                  uStack_6f8 = 0;
                  ppuStack_728 = ppuVar9;
                  uStack_720 = uVar22;
                  func_0x000107c287dc(auStack_6f0,lVar25);
                  FUN_1088449f4(auStack_678,uVar15);
                  func_0x000108767fec();
                  lVar1 = extraout_x9_01 + 0xe08;
                  if (!(bool)uVar6) {
                    lVar1 = extraout_x8_01;
                  }
                  uStack_660 = *(undefined8 *)(lVar1 + 0x120);
                  uStack_650 = 0;
                  uStack_638 = 0;
                  uStack_630 = 0;
                  uStack_62c = 0;
                  uStack_628 = uStack_628 & 0xffffffffffffff00;
                  uStack_620 = 0;
                  uStack_618 = uStack_618 & 0xffffff00;
                  uStack_614 = 0;
                  uStack_610 = 0;
                  uStack_608 = 0;
                  uStack_600 = 0;
                  uStack_5fc = 0;
                  uStack_5f8 = 0;
                  uStack_5f0 = 0;
                  uStack_5d8 = 0;
                  uStack_5d0 = 0;
                  uStack_5cc = 0;
                  uStack_5c8 = 0;
                  uStack_5c4 = 0;
                  uStack_5c0 = 0;
                  uStack_5b8 = 0;
                  uStack_5a0 = 0;
                  uStack_658 = uVar18;
                  FUN_10886e2e0(alStack_740);
                  uStack_600 = iVar26 == 1;
                  if ((iVar26 == 2) && ((bStack_28c & 1) != 0)) {
                    if (uStack_290 - 0x2100f5 < 10) {
                      uVar19 = *(ulong *)(&UNK_10df4f8a0 + (ulong)(uStack_290 - 0x2100f5) * 8) |
                               0x100000000;
                    }
                    else {
                      uVar19 = 0;
                    }
                    uStack_5fc = (undefined1)uVar19;
                    uStack_5f8 = (undefined1)(uVar19 >> 0x20);
                  }
                  if (bStack_b0 == 1) {
                    FUN_10883f8ec(lVar20 + 0x120,auStack_4b0,uVar5 + 0x18,auStack_288,
                                  auStack_260 + 1,alStack_740,uVar10 & 0xffffffff,&uStack_290,
                                  puVar11);
                  }
                  FUN_10869a5c8(&uStack_2c8,lVar25,auStack_4b0,uVar5 + 0x18,
                                *(undefined8 *)(uVar24 + 0x60));
                  if (cStack_2b0 == '\x01') {
                    uStack_628 = uStack_2c0;
                    uStack_620 = uStack_2b8;
                    uStack_618 = uStack_2c8;
                    uStack_614 = 1;
                  }
                  func_0x000108767f34(alStack_2d8);
                  plVar12 = *(long **)(alStack_2d8[0] + 0x180);
                  (**(code **)(*plVar12 + 0x10))();
                  func_0x00010876803c(&uStack_2c8);
                  puVar13 = auStack_4b0;
                  FUN_1086a1f74(puVar13,alStack_740,plVar12,&uStack_2c8);
                  func_0x000107c2a2e0(&uStack_2c8);
                  func_0x000107c297b0(alStack_2d8);
                  FUN_108864424(*(undefined8 *)(uVar24 + 0x60),alStack_740,puVar13);
                  func_0x000107c288e0(alStack_740);
                  FUN_1086ceab4(&puStack_280);
                }
                func_0x000108768030();
                goto LAB_108766f78;
              }
              FUN_108767f28();
              FUN_108842468(lVar25,*(undefined8 *)(auStack_260[0] + 0xf0),0);
              func_0x000108767fac();
            }
          }
          uVar14 = 4;
        }
LAB_108766f78:
        uStack_554 = uVar14;
        FUN_108766734(&uStack_550,&uStack_554);
        auStack_260[0] = uVar16;
        func_0x000107c27adc();
        uVar16 = (ulong)*(uint *)(param_1 + 0x18);
        lVar28 = lVar28 + 8;
      }
      auStack_260[3] = 0;
      auStack_260[2] = 0;
      auStack_260[1] = 0;
      auStack_260[0] = 0;
      uStack_240 = 0x3f800000;
      FUN_10869a6cc(lVar20 + 0xb0,&uStack_550,auStack_260,*(undefined8 *)(uVar4 + 0x60),&uStack_4d0)
      ;
      func_0x00010867bb84(auStack_260);
      if ((0 < (long)puVar23) &&
         ((long)puStack_308 < (long)puVar23 || (long)puStack_300 < (long)puVar23)) {
        puVar7 = puVar23;
        if ((long)puVar23 <= (long)puStack_308) {
          puVar7 = puStack_308;
        }
        if ((long)puVar23 <= (long)puStack_300) {
          puVar23 = puStack_300;
        }
        puStack_308 = puVar7;
        puStack_300 = puVar23;
        FUN_10885ff98(*(undefined8 *)(uVar4 + 0x60),auStack_4b0);
      }
      func_0x000107c31428(auStack_510);
      func_0x0001087679bc(&uStack_550);
      func_0x000108768028();
      FUN_10875ec20(lVar20);
      func_0x000107c28de8(alStack_740,auStack_4b0);
      uStack_568 = uStack_4c8;
      uStack_570 = uStack_4d0;
      uStack_560 = uStack_4c0;
      uStack_4c0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      pcVar21 = *(code **)(lVar20 + 0xf0);
      func_0x000107c28de8(auStack_260,alStack_740);
      uStack_88 = uStack_568;
      uStack_90 = uStack_570;
      uStack_80 = uStack_560;
      uStack_560 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_78 = 0;
      (*pcVar21)(auStack_260,(undefined8 *)(lVar20 + 0xf0));
      FUN_1087677f4(auStack_260);
      FUN_108767778(alStack_740);
      goto LAB_1087670c4;
    }
    uVar22 = 0;
  }
  FUN_108766708(lVar20,uVar22);
  func_0x000108768028();
LAB_1087670c4:
  func_0x00010867b9fc(&uStack_4d0);
  func_0x000107c288c8(auStack_4b0);
  return;
}



/* Entry: 1087672ac; end: 1087672db;  */

void FUN_1087672ac(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1087672dc; end: 1087672ef;  */

void FUN_1087672dc(void)

{
  func_0x000108767480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087672f0; end: 108767307;  */

void FUN_1087672f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 108767308; end: 108767347;  */

void FUN_108767308(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876801c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876733c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 108767348; end: 1087673ef;  */

void FUN_108767348(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876801c();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 1087673f0; end: 1087673f3;  */

undefined8 * FUN_1087673f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bc48;
  func_0x000108767fd4(param_1[8]);
  func_0x000108767fd4(param_1[2]);
  return param_1;
}



/* Entry: 1087673f4; end: 108767407;  */

void FUN_1087673f4(void)

{
  FUN_108767444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108767408; end: 108767443;  */

void FUN_108767408(void)

{
  return;
}



/* Entry: 108767444; end: 1087674b3;  */

undefined8 * FUN_108767444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bc48;
  func_0x000108767fd4(param_1[8]);
  func_0x000108767fd4(param_1[2]);
  return param_1;
}



/* Entry: 1087674b4; end: 1087674c3;  */

void FUN_1087674b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bb40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087674c4; end: 10876755b;  */

void FUN_1087674c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10876755c; end: 10876757b;  */

void FUN_10876755c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108766848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876757c; end: 108767593;  */

void FUN_10876757c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108767594; end: 1087675db;  */

void FUN_108767594(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    FUN_1087675dc(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar2 * 8) = param_2;
  return;
}



/* Entry: 1087675dc; end: 1087675df;  */

void FUN_1087675dc(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_108767650;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_108767650:
      uVar12 = 1;
      goto LAB_108767654;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_108767654;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_108767654:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    func_0x000107c282a8();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0001053abb00(pplVar5,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar8,plVar11);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      func_0x00010ae6c700();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0001053abb54(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_108767750(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 1087675e0; end: 10876774f;  */

void FUN_1087675e0(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_108767650;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_108767650:
      uVar12 = 1;
      goto LAB_108767654;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_108767654;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_108767654:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    func_0x000107c282a8();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0001053abb00(pplVar5,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar8,plVar11);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      func_0x00010ae6c700();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0001053abb54(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_108767750(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 108767750; end: 108767777;  */

void FUN_108767750(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 8 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 108767778; end: 1087677f3;  */

long FUN_108767778(long param_1)

{
  long lStack_28;
  
  func_0x00010867b9fc(param_1 + 0x1d0);
  func_0x0001005fb56c(param_1 + 400);
  func_0x000107c60ca0(param_1 + 0x130);
  func_0x00010066b614(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1087677f4; end: 108767847;  */

void FUN_1087677f4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x1e8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a6bc98)[*(uint *)(param_1 + 0x1e8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  return;
}



/* Entry: 108767848; end: 10876785b;  */

long FUN_108767848(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  func_0x00010867b9fc(param_2 + 0x1d0);
  func_0x0001005fb56c(param_2 + 400);
  func_0x000107c60ca0(param_2 + 0x130);
  func_0x00010066b614(param_2 + 0x18);
  lStack_28 = param_2;
  func_0x000100100fd4(&lStack_28);
  return param_2;
}



/* Entry: 10876785c; end: 10876788b;  */

void FUN_10876785c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110a6bcb8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10876788c; end: 1087678cf;  */

void FUN_10876788c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a6bcb8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1087678d0; end: 108767907;  */

long FUN_1087678d0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6bd18);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108767908; end: 108767913;  */

undefined ** FUN_108767908(void)

{
  return &PTR_DAT_110a6bd18;
}



/* Entry: 108767914; end: 10876796b;  */

undefined8 * FUN_108767914(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x000107c28a7c(param_1,*(undefined8 *)(param_2 + 8));
  FUN_1086a703c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10876796c; end: 108767a3f;  */

long FUN_10876796c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108767a40; end: 108767a57;  */

void FUN_108767a40(long *param_1)

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



/* Entry: 108767a58; end: 108767c5b;  */

undefined1  [16] FUN_108767a58(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108767b04;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_108767c30;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_108767b04:
  FUN_108767c5c(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x000108767cb0(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108767ea8(aplStack_58);
  uVar2 = 1;
LAB_108767c30:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 108767c5c; end: 108767d77;  */

void FUN_108767c5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 108767d78; end: 108767e73;  */

void FUN_108767d78(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_108767e74(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_108767e8c(plVar3);
    FUN_108767e74(param_1,plVar3);
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
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108767e74; end: 108767e8b;  */

void FUN_108767e74(long *param_1,long param_2)

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



/* Entry: 108767e8c; end: 108767ea7;  */

long FUN_108767e8c(long param_1,ulong param_2)

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
  FUN_108767ecc();
  return param_1;
}



/* Entry: 108767ea8; end: 108767ecb;  */

undefined8 FUN_108767ea8(undefined8 param_1)

{
  FUN_108767ecc(param_1,0);
  return param_1;
}



/* Entry: 108767ecc; end: 108767ee3;  */

void FUN_108767ecc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27ae4(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108767ee4; end: 108767f27;  */

void FUN_108767ee4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27ae4(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108767f28; end: 10876805b;  */

void FUN_108767f28(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long unaff_x19;
  
  plVar3 = *(long **)(unaff_x19 + 0x30);
  (**(code **)(*plVar3 + 0x108))();
  if (plVar3[1] != 0) {
    plVar3 = (long *)(plVar3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 10876805c; end: 1087682c7;  */

void FUN_10876805c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010876b318();
  uStack_58 = extraout_x8;
  func_0x000107c278b8(auStack_70,&UNK_10f4ba208);
  uStack_78 = *param_8;
  *param_8 = 0;
  func_0x000107c29808();
  func_0x000107c29578(&uStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  *unaff_x19 = &PTR_FUN_110a6bd58;
  func_0x000107c27994(unaff_x19 + 0xd,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0x10,param_4)
  ;
  func_0x000107c2791c(unaff_x19 + 0x13,param_5);
  lVar2 = *(long *)(param_6 + 0x18);
  if (lVar2 != 0) {
    in_ZR = lVar2 == param_6;
    if ((bool)in_ZR) {
      unaff_x19[0x1b] = unaff_x19 + 0x18;
      (**(code **)(**(long **)(param_6 + 0x18) + 0x18))(*(long **)(param_6 + 0x18),unaff_x19 + 0x18)
      ;
      goto LAB_10876814c;
    }
    func_0x00010876b16c();
    (*extraout_x8_00)();
  }
  unaff_x19[0x1b] = lVar2;
LAB_10876814c:
  uVar4 = *param_7;
  *param_7 = 0;
  unaff_x19[0x1c] = uVar4;
  *(undefined4 *)(unaff_x19 + 0x1d) = param_9;
  func_0x000107c27994(unaff_x19 + 0x1e,param_11);
  func_0x000107c297c0(auStack_70,1);
  puVar1 = puStack_60;
  *puStack_60 = &PTR_FUN_110a6bf80;
  puStack_60[1] = 0;
  puStack_60[2] = 0;
  puStack_60[3] = &PTR_DAT_110a6bfd0;
  puStack_60[5] = 1000;
  puStack_60[4] = 3;
  puStack_60[6] = 64000;
  puStack_60 = (undefined8 *)0x0;
  unaff_x19[0x21] = puVar1 + 3;
  unaff_x19[0x22] = puVar1;
  puVar3 = auStack_70;
  func_0x000107c297c4(puVar3);
  *(undefined1 *)(unaff_x19 + 0x23) = 0;
  *(undefined1 *)(unaff_x19 + 0x6f) = 0;
  unaff_x19[0x71] = 0;
  unaff_x19[0x70] = 0;
  unaff_x19[0x73] = 0;
  unaff_x19[0x72] = 0;
  *(undefined4 *)(unaff_x19 + 0x74) = 0x3f800000;
  unaff_x19[0x76] = 0;
  unaff_x19[0x75] = 0;
  unaff_x19[0x78] = 0;
  unaff_x19[0x77] = 0;
  *(undefined4 *)(unaff_x19 + 0x79) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x7a) = 0;
  *(undefined1 *)(unaff_x19 + 0x7f) = 0;
  *(undefined2 *)(unaff_x19 + 0x80) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x402) = param_12;
  unaff_x19[8] = unaff_x19[0x21];
  func_0x00010876b2b8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278e0(unaff_x19 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  func_0x000107c27914(param_12);
  do {
    func_0x0001008510e4();
    __Unwind_Resume(puVar3);
  } while( true );
}



/* Entry: 1087682c8; end: 1087682cf;  */

void FUN_1087682c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a8bfc8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &DAT_11383d918;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &DAT_11383d918;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


