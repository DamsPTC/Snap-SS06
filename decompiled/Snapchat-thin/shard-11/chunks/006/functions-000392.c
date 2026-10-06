/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087225a8; end: 1087225d7;  */

bool FUN_1087225a8(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                  long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  long lStack_58;
  
  bVar1 = false;
  if ((param_4 < 0x1e) && ((1 << (ulong)(param_4 & 0x1f) & 0x20218026U) != 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    lStack_58 = param_3;
    FUN_108722768();
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      func_0x00010872454c();
      uVar4 = (long)puVar2[1] / 1000;
    }
    bVar1 = uVar4 < (ulong)(param_6 / 1000);
    if (bVar1) {
      func_0x00010872454c();
      *puVar2 = param_5;
      puVar2[1] = param_6;
    }
    uStack_60 = 2;
    lStack_68 = param_3;
    uStack_5c = param_4;
    func_0x0001087224c4(param_1,param_2);
    plVar3 = (long *)(param_1 + 0x10);
    FUN_1087224e4(plVar3,&lStack_58);
    if (*(long **)(param_1 + 8) != plVar3) {
      if (((*plVar3 == param_3) && ((int)plVar3[1] == 2)) &&
         (*(uint *)((long)plVar3 + 0xc) == param_4)) {
        return bVar1;
      }
      FUN_1087224f0(param_1 + 0x10,lStack_58);
    }
    FUN_108722590(param_1 + 0x10,&lStack_68);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1087225d8; end: 108722727;  */

void FUN_1087225d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001087244e4();
  func_0x000107c296ec();
  if (param_1 != 0) {
    func_0x000108724464();
    func_0x0001087224c4();
    FUN_1087224f0(param_1 + 0x10,param_3);
    if (*(long *)(param_1 + 0x48) == 0) {
      func_0x000108724464();
      func_0x000108723ed0();
      func_0x000108724560();
    }
  }
  return;
}



/* Entry: 108722728; end: 108722767;  */

long * FUN_108722728(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)**(long **)(param_2 + 0x30);
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar2 != (long *)(param_2 + 0x28)) {
    plVar1 = plVar2;
  }
  plVar2 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + -5;
  }
  FUN_10872354c(param_1 + -0x10);
  return plVar2;
}



/* Entry: 108722768; end: 108722783;  */

bool FUN_108722768(long param_1)

{
  FUN_108722784();
  return param_1 != 0;
}



/* Entry: 108722784; end: 10872282b;  */

long FUN_108722784(long param_1)

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
  if ((uVar2 != 0) && (func_0x0001087245e8(), extraout_x8 != 0)) {
    func_0x000108724348();
    func_0x000108724388();
    if ((bool)in_ZR) {
      uVar3 = unaff_x20 & unaff_x23;
    }
    else {
      uVar3 = unaff_x20;
      if (uVar2 <= unaff_x20) {
        func_0x0001087245bc();
        uVar3 = unaff_x24;
      }
    }
    func_0x0001087245a4();
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
        func_0x00010872433c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x000108724634();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == uVar3);
  }
  return 0;
}



/* Entry: 10872282c; end: 108722b0f;  */

undefined1  [16] FUN_10872282c(float param_1,float param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  ulong extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar11;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 *puStack_68;
  
  func_0x0001087243f0();
  puVar14 = (undefined8 *)unaff_x19[1];
  puVar9 = param_3;
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = (long)puVar14 - 1;
    uVar4 = ((ulong)puVar14 & uVar15) == 0;
    if ((bool)uVar4) {
      func_0x0001087245f4();
    }
    else {
      uVar4 = param_3 == puVar14;
      unaff_x25 = param_3;
      if (puVar14 <= param_3) {
        uVar1 = 0;
        uVar13 = (uint)puVar14;
        if (uVar13 != 0) {
          uVar1 = (uint)param_3 / uVar13;
        }
        unaff_x25 = (undefined8 *)(ulong)((uint)param_3 - uVar1 * uVar13);
      }
    }
    puVar12 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    unaff_x21 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (undefined8 *)*puVar12;
          if (unaff_x21 == (undefined8 *)0x0) goto LAB_1087228d4;
          func_0x0001087245c8();
          puVar12 = unaff_x21;
          if (!(bool)uVar4) break;
          func_0x000108724540();
          if (((ulong)puVar9 & 1) != 0) {
            uVar6 = 0;
            goto LAB_108722ae4;
          }
        }
        if (((ulong)puVar14 & uVar15) == 0) {
          puVar7 = (undefined8 *)((ulong)extraout_x8 & uVar15);
        }
        else {
          puVar7 = extraout_x8;
          if (puVar14 <= extraout_x8) {
            uVar2 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar2 = (ulong)extraout_x8 / (ulong)puVar14;
            }
            puVar7 = (undefined8 *)((long)extraout_x8 - uVar2 * (long)puVar14);
          }
        }
        uVar4 = 1;
      } while (puVar7 == unaff_x25);
    }
  }
LAB_1087228d4:
  func_0x000108724558();
  func_0x0001087245d4();
  func_0x000107c27994();
  *(undefined4 *)(unaff_x21 + 5) = 2;
  unaff_x21[6] = 0;
  func_0x0001087244b0();
  if ((puVar14 != (undefined8 *)0x0) && (param_1 <= param_2 * (float)puVar14)) goto LAB_108722a84;
  func_0x0001087244cc();
  bVar5 = puVar14 == (undefined8 *)0x3;
  func_0x000108724470();
  if (bVar5) {
    unaff_x21 = (undefined8 *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_00) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar9 = unaff_x21;
  }
  puVar14 = (undefined8 *)unaff_x19[1];
  bVar5 = puVar14 <= unaff_x21;
  if (bVar5 && unaff_x21 != puVar14) {
LAB_10872294c:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108722af8);
      (*pcVar3)();
    }
    __Znwm((long)unaff_x21 << 3);
    FUN_108722b10();
    unaff_x19[1] = (long)unaff_x21;
    lVar8 = *unaff_x19;
    for (puVar9 = (undefined8 *)0x0; unaff_x21 != puVar9; puVar9 = (undefined8 *)((long)puVar9 + 1))
    {
      *(undefined8 *)(lVar8 + (long)puVar9 * 8) = 0;
    }
    puVar14 = unaff_x21;
    if (unaff_x19[2] != 0) {
      func_0x000108724614();
      func_0x000108724600();
      lVar8 = extraout_x8_01;
      uVar15 = extraout_x9;
      plVar11 = extraout_x10;
      puVar9 = extraout_x11;
      while (plVar10 = plVar11, plVar11 = (long *)*plVar10, plVar11 != (long *)0x0) {
        puVar12 = (undefined8 *)plVar11[1];
        if (((ulong)unaff_x21 & uVar15) == 0) {
          puVar12 = (undefined8 *)((ulong)puVar12 & uVar15);
        }
        else if (unaff_x21 <= puVar12) {
          uVar2 = 0;
          if (unaff_x21 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar12 / (ulong)unaff_x21;
          }
          puVar12 = (undefined8 *)((long)puVar12 - uVar2 * (long)unaff_x21);
        }
        if (puVar12 != puVar9) {
          if (*(long *)(lVar8 + (long)puVar12 * 8) == 0) {
            *(long **)(lVar8 + (long)puVar12 * 8) = plVar10;
            puVar9 = puVar12;
          }
          else {
            func_0x000108724424();
            lVar8 = extraout_x8_02;
            uVar15 = extraout_x9_00;
            plVar11 = extraout_x10_00;
            puVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar5) {
    func_0x00010872448c();
    if ((bVar5) && (((ulong)puVar14 & (long)puVar14 - 1U) == 0)) {
      func_0x000108724404();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (unaff_x21 <= puVar9) {
      unaff_x21 = puVar9;
    }
    if (unaff_x21 < puVar14) {
      if (unaff_x21 != (undefined8 *)0x0) goto LAB_10872294c;
      FUN_108722b10();
      unaff_x19[1] = 0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = (undefined8 *)unaff_x19[1];
    }
  }
  if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
    func_0x0001087245f4();
  }
  else {
    unaff_x25 = param_3;
    if (puVar14 <= param_3) {
      uVar15 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar15 = (ulong)param_3 / (ulong)puVar14;
      }
      unaff_x25 = (undefined8 *)((long)param_3 - uVar15 * (long)puVar14);
    }
  }
LAB_108722a84:
  puVar9 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x000108724520();
    if (extraout_x9_01 != 0) {
      puVar9 = *(undefined8 **)(extraout_x9_01 + 8);
      if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar14 - 1U);
      }
      else if (puVar14 <= puVar9) {
        uVar15 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar14;
        }
        puVar9 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar14);
      }
      *(undefined8 **)(extraout_x8_03 + (long)puVar9 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar9;
    *puVar9 = puStack_68;
  }
  func_0x000108724508();
  FUN_108722b28();
  uVar6 = 1;
  unaff_x21 = puStack_68;
LAB_108722ae4:
  auVar16._8_8_ = uVar6;
  auVar16._0_8_ = unaff_x21;
  return auVar16;
}



/* Entry: 108722b10; end: 108722b27;  */

void FUN_108722b10(long *param_1,long param_2)

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



/* Entry: 108722b28; end: 108722b4b;  */

undefined8 FUN_108722b28(undefined8 param_1)

{
  FUN_108722b4c(param_1,0);
  return param_1;
}



/* Entry: 108722b4c; end: 108722b63;  */

void FUN_108722b4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27914(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108722b64; end: 108722ba3;  */

void FUN_108722b64(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27914(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108722ba4; end: 108722edb;  */

undefined1  [16] FUN_108722ba4(float param_1,float param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar11;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 *puStack_68;
  
  func_0x0001087243f0();
  puVar14 = (undefined8 *)unaff_x19[1];
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = (long)puVar14 - 1;
    uVar4 = ((ulong)puVar14 & uVar15) == 0;
    puVar9 = param_3;
    if ((bool)uVar4) {
      func_0x0001087245f4();
    }
    else {
      uVar4 = param_3 == puVar14;
      unaff_x25 = param_3;
      if (puVar14 <= param_3) {
        uVar1 = 0;
        uVar13 = (uint)puVar14;
        if (uVar13 != 0) {
          uVar1 = (uint)param_3 / uVar13;
        }
        unaff_x25 = (undefined8 *)(ulong)((uint)param_3 - uVar1 * uVar13);
      }
    }
    puVar12 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    unaff_x21 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (undefined8 *)*puVar12;
          if (unaff_x21 == (undefined8 *)0x0) goto LAB_108722c4c;
          func_0x0001087245c8();
          puVar12 = unaff_x21;
          if (!(bool)uVar4) break;
          func_0x000108724540();
          if (((ulong)puVar9 & 1) != 0) {
            uVar7 = 0;
            goto LAB_108722e90;
          }
        }
        if (((ulong)puVar14 & uVar15) == 0) {
          puVar8 = (undefined8 *)((ulong)extraout_x8 & uVar15);
        }
        else {
          puVar8 = extraout_x8;
          if (puVar14 <= extraout_x8) {
            uVar2 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar2 = (ulong)extraout_x8 / (ulong)puVar14;
            }
            puVar8 = (undefined8 *)((long)extraout_x8 - uVar2 * (long)puVar14);
          }
        }
        uVar4 = 1;
      } while (puVar8 == unaff_x25);
    }
  }
LAB_108722c4c:
  lVar6 = 0x78;
  __Znwm();
  func_0x0001087245d4();
  func_0x000107c27994();
  func_0x000108724558();
  unaff_x21[6] = lVar6;
  puVar9 = (undefined8 *)(lVar6 + 0x10);
  *puVar9 = 0;
  *(undefined8 **)(lVar6 + 0x18) = puVar9;
  *(undefined8 **)(lVar6 + 0x20) = puVar9;
  FUN_108722f38(unaff_x21 + 8,lVar6 + 0x28,0);
  *(undefined4 *)(unaff_x21 + 0xc) = 0x3f800000;
  puVar9 = unaff_x21 + 7;
  FUN_108722f00();
  unaff_x21[0xe] = 0;
  func_0x0001087244b0();
  if ((puVar14 != (undefined8 *)0x0) && (param_1 <= param_2 * (float)puVar14)) goto LAB_108722e30;
  func_0x0001087244cc();
  bVar5 = puVar14 == (undefined8 *)0x3;
  func_0x000108724470();
  if (bVar5) {
    unaff_x21 = (undefined8 *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_00) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar9 = unaff_x21;
  }
  puVar14 = (undefined8 *)unaff_x19[1];
  bVar5 = puVar14 <= unaff_x21;
  if (bVar5 && unaff_x21 != puVar14) {
LAB_108722cf8:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108722ea4);
      (*pcVar3)();
    }
    __Znwm((long)unaff_x21 << 3);
    FUN_1087230c4();
    unaff_x19[1] = (long)unaff_x21;
    lVar6 = *unaff_x19;
    for (puVar14 = (undefined8 *)0x0; unaff_x21 != puVar14;
        puVar14 = (undefined8 *)((long)puVar14 + 1)) {
      *(undefined8 *)(lVar6 + (long)puVar14 * 8) = 0;
    }
    puVar14 = unaff_x21;
    if (unaff_x19[2] != 0) {
      func_0x000108724614();
      func_0x000108724600();
      lVar6 = extraout_x8_01;
      uVar15 = extraout_x9;
      plVar11 = extraout_x10;
      puVar9 = extraout_x11;
      while (plVar10 = plVar11, plVar11 = (long *)*plVar10, plVar11 != (long *)0x0) {
        puVar12 = (undefined8 *)plVar11[1];
        if (((ulong)unaff_x21 & uVar15) == 0) {
          puVar12 = (undefined8 *)((ulong)puVar12 & uVar15);
        }
        else if (unaff_x21 <= puVar12) {
          uVar2 = 0;
          if (unaff_x21 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar12 / (ulong)unaff_x21;
          }
          puVar12 = (undefined8 *)((long)puVar12 - uVar2 * (long)unaff_x21);
        }
        if (puVar12 != puVar9) {
          if (*(long *)(lVar6 + (long)puVar12 * 8) == 0) {
            *(long **)(lVar6 + (long)puVar12 * 8) = plVar10;
            puVar9 = puVar12;
          }
          else {
            func_0x000108724424();
            lVar6 = extraout_x8_02;
            uVar15 = extraout_x9_00;
            plVar11 = extraout_x10_00;
            puVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar5) {
    func_0x00010872448c();
    if ((bVar5) && (((ulong)puVar14 & (long)puVar14 - 1U) == 0)) {
      func_0x000108724404();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (unaff_x21 <= puVar9) {
      unaff_x21 = puVar9;
    }
    if (unaff_x21 < puVar14) {
      if (unaff_x21 != (undefined8 *)0x0) goto LAB_108722cf8;
      FUN_1087230c4();
      unaff_x19[1] = 0;
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = (undefined8 *)unaff_x19[1];
    }
  }
  if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
    func_0x0001087245f4();
  }
  else {
    unaff_x25 = param_3;
    if (puVar14 <= param_3) {
      uVar15 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar15 = (ulong)param_3 / (ulong)puVar14;
      }
      unaff_x25 = (undefined8 *)((long)param_3 - uVar15 * (long)puVar14);
    }
  }
LAB_108722e30:
  puVar9 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x000108724520();
    if (extraout_x9_01 != 0) {
      puVar9 = *(undefined8 **)(extraout_x9_01 + 8);
      if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar14 - 1U);
      }
      else if (puVar14 <= puVar9) {
        uVar15 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar14;
        }
        puVar9 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar14);
      }
      *(undefined8 **)(extraout_x8_03 + (long)puVar9 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar9;
    *puVar9 = puStack_68;
  }
  func_0x000108724508();
  FUN_1087230dc();
  uVar7 = 1;
  unaff_x21 = puStack_68;
LAB_108722e90:
  auVar16._8_8_ = uVar7;
  auVar16._0_8_ = unaff_x21;
  return auVar16;
}



/* Entry: 108722edc; end: 108722eff;  */

undefined8 * FUN_108722edc(undefined8 *param_1)

{
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 108722f00; end: 108722f37;  */

void FUN_108722f00(long param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x28) *
          (float)*(ulong *)(&UNK_10df4afd0 + *(long *)(param_1 + 8) * 8);
  lVar1 = (long)fVar2;
  if (1.8446744e+19 <= fVar2) {
    lVar1 = -1;
  }
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}



/* Entry: 108722f38; end: 108722fbf;  */

void FUN_108722f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108724628();
  FUN_108722fc0();
  *unaff_x19 = param_3;
  lVar3 = *(long *)(&UNK_10df4afd0 + param_3 * 8);
  unaff_x19[2] = lVar3 + 1;
  if (lVar3 == -1) {
    plVar2 = (long *)0x0;
    lVar3 = -1;
  }
  else {
    plVar2 = unaff_x19 + 1;
    FUN_108723080();
    lVar3 = *(long *)(&UNK_10df4afd0 + *unaff_x19 * 8);
  }
  unaff_x19[3] = (long)plVar2;
  plVar1 = plVar2;
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *plVar1 = 0;
    plVar1 = plVar1 + 1;
  }
  *(long *)unaff_x20 = unaff_x20;
  plVar2[lVar3] = unaff_x20;
  *(long **)(unaff_x20 + 8) = plVar2 + lVar3;
  return;
}



/* Entry: 108722fc0; end: 108723013;  */

long FUN_108722fc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar2 = &UNK_10df4afd0;
  uStack_28 = param_1;
  FUN_108723014(&UNK_10df4afd0,&DAT_10df4b1b0,&uStack_28);
  puVar1 = &UNK_10df4b1a8;
  if (puVar2 != &DAT_10df4b1b0) {
    puVar1 = puVar2;
  }
  return (long)(puVar1 + -0x10df4afd0) >> 3;
}



/* Entry: 108723014; end: 108723037;  */

void FUN_108723014(void)

{
  FUN_108723038();
  return;
}



/* Entry: 108723038; end: 10872307f;  */

void FUN_108723038(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1 >> 3;
  while (puVar3 = param_1, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    puVar1 = puVar3 + uVar4;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = puVar1 + 1;
    if (*param_3 <= *puVar1) {
      uVar2 = uVar4;
      param_1 = puVar3;
    }
  }
  return;
}



/* Entry: 108723080; end: 10872309b;  */

long FUN_108723080(long param_1,ulong param_2)

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
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108724574();
  }
  return param_1;
}



/* Entry: 10872309c; end: 1087230c3;  */

long FUN_10872309c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108724574();
  }
  return param_1;
}



/* Entry: 1087230c4; end: 1087230db;  */

void FUN_1087230c4(long *param_1,long param_2)

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



/* Entry: 1087230dc; end: 1087230ff;  */

undefined8 FUN_1087230dc(undefined8 param_1)

{
  FUN_108723100(param_1,0);
  return param_1;
}



/* Entry: 108723100; end: 108723117;  */

void FUN_108723100(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108723158(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108723118; end: 10872317f;  */

void FUN_108723118(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108723158(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108723180; end: 1087231b7;  */

long FUN_108723180(long param_1)

{
  FUN_1087231b8(param_1 + 0x10);
  FUN_10872309c(param_1 + 0x20);
  FUN_108722edc(param_1 + 8);
  return param_1;
}



/* Entry: 1087231b8; end: 10872324b;  */

void FUN_1087231b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(long *)(param_1 + -8) + 0x28);
  puVar1 = (undefined8 *)*puVar3;
  while (puVar1 != puVar3) {
    puVar2 = puVar1 + -5;
    puVar1 = (undefined8 *)*puVar1;
    __ZdlPv(puVar2);
  }
  return;
}



/* Entry: 10872324c; end: 10872354b;  */

ulong FUN_10872324c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  
  switch(*param_1) {
  case 1:
    uVar3 = 0x61;
    break;
  case 2:
    uVar3 = 0xc1;
    break;
  case 3:
    uVar3 = 0x185;
    break;
  case 4:
    uVar3 = 0x301;
    break;
  case 5:
    uVar3 = 0x607;
    break;
  case 6:
    uVar3 = 0xc07;
    break;
  case 7:
    uVar3 = 0x1807;
    break;
  case 8:
    uVar3 = 0x3001;
    break;
  case 9:
    uVar3 = 0x6011;
    break;
  case 10:
    uVar3 = 0xc005;
    break;
  case 0xb:
    uVar3 = 0x1800d;
    break;
  case 0xc:
    uVar3 = 0x30005;
    break;
  case 0xd:
    uVar3 = 0x60019;
    break;
  case 0xe:
    uVar3 = 0xc0001;
    break;
  case 0xf:
    uVar3 = 0x180005;
    break;
  case 0x10:
    uVar3 = 0x30000b;
    break;
  case 0x11:
    uVar3 = 0x60000d;
    break;
  case 0x12:
    uVar3 = 0xc00005;
    break;
  case 0x13:
    uVar3 = 0x1800013;
    break;
  case 0x14:
    uVar3 = 0x3000005;
    break;
  case 0x15:
    uVar3 = 0x6000017;
    break;
  case 0x16:
    uVar3 = 0xc000013;
    break;
  case 0x17:
    uVar3 = 0x18000005;
    break;
  case 0x18:
    uVar3 = 0x30000059;
    break;
  case 0x19:
    uVar3 = 0x60000005;
    break;
  case 0x1a:
    uVar3 = 0xc0000001;
    break;
  case 0x1b:
    uVar3 = 0x17ffffffb;
    break;
  case 0x1c:
    uVar3 = 0x300000005;
    break;
  case 0x1d:
    uVar3 = 0x5ffffffe7;
    break;
  case 0x1e:
    uVar3 = 0xffff000bffffffff;
    goto code_r0x0001087234f0;
  case 0x1f:
    uVar3 = 0x1800000007;
    break;
  case 0x20:
    uVar3 = 0x3000000001;
    break;
  case 0x21:
    uVar3 = 0x6000000019;
    break;
  case 0x22:
    uVar3 = 0xffff00bfffffffff;
    goto code_r0x0001087234f0;
  case 0x23:
    uVar3 = 0x17ffffffff3;
    break;
  case 0x24:
    uVar3 = 0x2ffffffffed;
    break;
  case 0x25:
    uVar3 = 0x60000000001;
    break;
  case 0x26:
    uVar3 = 0xbfffffffff3;
    break;
  case 0x27:
    uVar3 = 0xffff17ffffffffff;
code_r0x0001087234f0:
    uVar3 = uVar3 & 0xffffffffffff;
    break;
  case 0x28:
    uVar3 = 0x300000000037;
    break;
  case 0x29:
    uVar3 = 0x5ffffffffff9;
    break;
  case 0x2a:
    uVar3 = 0xbfffffffffe9;
    break;
  case 0x2b:
    uVar3 = 0x1800000000011;
    break;
  case 0x2c:
    uVar3 = 0x2fffffffffffb;
    break;
  case 0x2d:
    uVar3 = 0x6000000000011;
    break;
  case 0x2e:
    uVar3 = 0xbfffffffffff5;
    break;
  case 0x2f:
    uVar3 = 0x17fffffffffff3;
    break;
  case 0x30:
    uVar3 = 0x2ffffffffffffb;
    break;
  case 0x31:
    uVar3 = 0x5fffffffffffdb;
    break;
  case 0x32:
    uVar3 = 0xc0000000000005;
    break;
  case 0x33:
    uVar3 = 0x17fffffffffffff;
    break;
  case 0x34:
    uVar3 = 0x300000000000023;
    break;
  case 0x35:
    uVar3 = 0x600000000000005;
    break;
  case 0x36:
    uVar3 = 0xbffffffffffffe7;
    break;
  case 0x37:
    uVar3 = 0x1800000000000011;
    break;
  case 0x38:
    uVar3 = 0x3000000000000005;
    break;
  case 0x39:
    uVar3 = 0x600000000000002f;
    break;
  case 0x3a:
    uVar3 = param_2 + 0x3fffffffffffffef;
    bVar2 = 0xc000000000000010 < param_2;
    goto code_r0x0001087234ac;
  case 0x3b:
    uVar3 = param_2 + 0x3b;
    bVar2 = 0xffffffffffffffc4 < param_2;
code_r0x0001087234ac:
    if (bVar2) {
      param_2 = uVar3;
    }
    return param_2;
  default:
    uVar3 = 0x35;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_2 / uVar3;
  }
  return param_2 - uVar1 * uVar3;
}



/* Entry: 10872354c; end: 1087235a3;  */

void FUN_10872354c(long param_1,undefined8 param_2)

{
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  func_0x00010872357c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1087235a4; end: 1087235fb;  */

void FUN_1087235a4(long param_1,long param_2)

{
  long lVar1;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + -8);
  lStack_18 = lVar1 + 0x10;
  FUN_108723654(param_2 + 0x10,&lStack_18,lVar1 + 0x18,lVar1 + 0x20);
  return;
}



/* Entry: 1087235fc; end: 108723653;  */

void FUN_1087235fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *param_1;
  plVar1 = (long *)param_1[1];
  plVar3 = *(long **)(lVar2 + 8);
  plVar4 = (long *)*plVar1;
  if (plVar3 == param_1) {
    *(long **)(lVar2 + 8) = plVar1;
    plVar1 = (long *)param_1[1];
    if (plVar4 == param_1) goto LAB_10872364c;
  }
  else {
    if (plVar4 == param_1) {
      *plVar3 = (long)plVar1;
      lVar2 = *param_1;
      goto LAB_10872364c;
    }
    *plVar3 = 0;
    lVar2 = *param_1;
    *(long **)(lVar2 + 8) = plVar1;
    plVar1 = (long *)param_1[1];
  }
  plVar1 = (long *)*plVar1;
LAB_10872364c:
  *plVar1 = lVar2;
  return;
}



/* Entry: 108723654; end: 1087239e3;  */

ulong * FUN_108723654(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  ulong *extraout_x8_02;
  byte *pbVar3;
  ulong *extraout_x8_03;
  ulong *extraout_x8_04;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *puVar4;
  ulong *extraout_x9_01;
  ulong *extraout_x9_02;
  ulong uVar5;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *puVar6;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong *puVar7;
  ulong *extraout_x11;
  ulong uVar8;
  ulong *puVar9;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar10;
  
  func_0x000108724628();
  puVar7 = (ulong *)(param_1 + 8);
  puVar9 = (ulong *)*puVar7;
  puVar6 = (ulong *)(param_1 + 0x10);
  puVar10 = puVar6;
  if ((puVar9 == (ulong *)0x0) ||
     (puVar2 = (ulong *)*puVar6, puVar10 = puVar7, (ulong *)*puVar6 == (ulong *)0x0)) {
    puVar10 = (ulong *)*puVar10;
    puVar2 = (ulong *)*unaff_x20;
    puVar4 = unaff_x19;
  }
  else {
    do {
      puVar4 = puVar2;
      puVar2 = (ulong *)puVar4[1];
    } while ((ulong *)puVar4[1] != (ulong *)0x0);
    puVar10 = (ulong *)puVar4[2];
    puVar2 = (ulong *)*unaff_x20;
    if (puVar4 != unaff_x19) {
      *puVar9 = *puVar9 & 1 | (ulong)puVar4;
      puVar4[1] = (ulong)puVar9;
      puVar9 = puVar4;
      if (puVar4 != (ulong *)*puVar6) {
        puVar9 = (ulong *)(*puVar4 & 0xfffffffffffffffe);
        puVar7 = puVar9;
        if (puVar10 != (ulong *)0x0) {
          *puVar10 = *puVar10 & 1 | (ulong)puVar9;
          puVar7 = (ulong *)(*puVar4 & 0xfffffffffffffffe);
        }
        puVar7[1] = (ulong)puVar10;
        puVar6 = (ulong *)*puVar6;
        puVar4[2] = (ulong)puVar6;
        *puVar6 = *puVar6 & 1 | (ulong)puVar4;
      }
      if (unaff_x19 == (ulong *)(*puVar2 & 0xfffffffffffffffe)) {
        *puVar2 = *puVar2 & 1 | (ulong)puVar4;
        func_0x0001087245b0();
        puVar2 = extraout_x8_02;
        puVar6 = extraout_x9_02;
        uVar5 = extraout_x10_02;
      }
      else {
        func_0x0001087245b0();
        puVar2 = extraout_x8_01;
        puVar6 = extraout_x9_01;
        uVar5 = extraout_x10_01;
        if (*(ulong **)(extraout_x10_01 + 8) == unaff_x19) {
          *(ulong **)(extraout_x10_01 + 8) = extraout_x9_01;
        }
        else {
          *(ulong **)(extraout_x10_01 + 0x10) = extraout_x9_01;
        }
      }
      uVar8 = *puVar6;
      *puVar6 = uVar8 & 1 | uVar5;
      *puVar6 = *unaff_x19 & 1 | uVar5;
      *unaff_x19 = *unaff_x19 & 0xfffffffffffffffe | uVar8 & 1;
      puVar4 = unaff_x19;
      goto LAB_108723850;
    }
  }
  puVar9 = (ulong *)(*puVar4 & 0xfffffffffffffffe);
  if (puVar10 != (ulong *)0x0) {
    *puVar10 = *puVar10 & 1 | (ulong)puVar9;
  }
  if (unaff_x19 == (ulong *)(*puVar2 & 0xfffffffffffffffe)) {
    *puVar2 = *puVar2 & 1 | (ulong)puVar10;
  }
  else {
    uVar5 = *unaff_x19 & 0xfffffffffffffffe;
    if (*(ulong **)(uVar5 + 8) == unaff_x19) {
      *(ulong **)(uVar5 + 8) = puVar10;
    }
    else {
      *(ulong **)(uVar5 + 0x10) = puVar10;
    }
  }
  if ((ulong *)*param_3 == unaff_x19) {
    puVar1 = puVar10;
    if (*puVar6 == 0) {
      func_0x0001087245b0();
      puVar2 = extraout_x8;
      puVar4 = extraout_x9;
      puVar6 = extraout_x10;
      puVar7 = extraout_x11;
    }
    else {
      do {
        puVar6 = puVar1;
        puVar1 = (ulong *)puVar6[1];
      } while ((ulong *)puVar6[1] != (ulong *)0x0);
    }
    *param_3 = puVar6;
  }
  if ((ulong *)*param_4 == unaff_x19) {
    puVar6 = puVar10;
    if (*puVar7 == 0) {
      func_0x0001087245b0();
      puVar2 = extraout_x8_00;
      puVar4 = extraout_x9_00;
      puVar7 = extraout_x10_00;
    }
    else {
      do {
        puVar7 = puVar6;
        puVar6 = (ulong *)puVar7[2];
      } while ((ulong *)puVar7[2] != (ulong *)0x0);
    }
    *param_4 = puVar7;
  }
LAB_108723850:
  if ((*puVar4 & 1) != 0) {
    while (puVar6 = puVar9, puVar10 != (ulong *)(*puVar2 & 0xfffffffffffffffe)) {
      if ((puVar10 != (ulong *)0x0) && (uVar5 = *puVar10, (uVar5 & 1) == 0)) goto LAB_108723980;
      puVar7 = (ulong *)puVar6[1];
      if (puVar10 == puVar7) {
        puVar7 = (ulong *)puVar6[2];
        if ((*puVar7 & 1) == 0) {
          *puVar7 = *puVar7 | 1;
          *puVar6 = *puVar6 & 0xfffffffffffffffe;
          func_0x000108724398();
          func_0x0001077fe8f0();
          puVar7 = (ulong *)puVar6[2];
        }
        if (((ulong *)puVar7[1] == (ulong *)0x0) || ((*(ulong *)puVar7[1] & 1) != 0)) {
          pbVar3 = (byte *)puVar7[2];
          if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) != 0)) goto LAB_108723918;
        }
        else {
          pbVar3 = (byte *)puVar7[2];
          if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) != 0)) {
            func_0x0001087243cc();
            func_0x0001077fe95c();
            pbVar3 = *(byte **)(puVar6[2] + 0x10);
          }
        }
        func_0x000108724444(pbVar3);
        if (extraout_x8_04 != (ulong *)0x0) {
          *extraout_x8_04 = *extraout_x8_04 | 1;
        }
        func_0x000108724398(*unaff_x20);
        func_0x0001077fe8f0();
        if (puVar10 == (ulong *)0x0) {
          return puVar4;
        }
        goto LAB_10872397c;
      }
      if ((*puVar7 & 1) == 0) {
        *puVar7 = *puVar7 | 1;
        *puVar6 = *puVar6 & 0xfffffffffffffffe;
        func_0x000108724398();
        func_0x0001077fe95c();
        puVar7 = (ulong *)puVar6[1];
      }
      if (((ulong *)puVar7[2] != (ulong *)0x0) && ((*(ulong *)puVar7[2] & 1) == 0)) {
        pbVar3 = (byte *)puVar7[1];
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) != 0)) {
          func_0x0001087243cc();
          func_0x0001077fe8f0();
          pbVar3 = *(byte **)(puVar6[1] + 8);
        }
LAB_108723958:
        func_0x000108724444(pbVar3);
        if (extraout_x8_03 != (ulong *)0x0) {
          *extraout_x8_03 = *extraout_x8_03 | 1;
        }
        func_0x000108724398(*unaff_x20);
        func_0x0001077fe95c();
        break;
      }
      pbVar3 = (byte *)puVar7[1];
      if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) == 0)) goto LAB_108723958;
LAB_108723918:
      *puVar7 = *puVar7 & 0xfffffffffffffffe;
      puVar9 = (ulong *)(*puVar6 & 0xfffffffffffffffe);
      puVar10 = puVar6;
      puVar2 = (ulong *)*unaff_x20;
    }
    if (puVar10 != (ulong *)0x0) {
LAB_10872397c:
      uVar5 = *puVar10;
LAB_108723980:
      *puVar10 = uVar5 | 1;
    }
  }
  return puVar4;
}



/* Entry: 1087239e4; end: 108723a17;  */

void FUN_1087239e4(long param_1)

{
  func_0x000108723a00(param_1 + -0x10);
  return;
}



/* Entry: 108723a18; end: 108723def;  */

long * FUN_108723a18(long *param_1)

{
  long *****ppppplVar1;
  uint uVar2;
  uint uVar3;
  long *****ppppplVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long unaff_x19;
  long *unaff_x20;
  long ****pppplVar16;
  ulong *puVar17;
  long ***ppplVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  float fVar22;
  long ****pppplStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000108724628();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_1[8] < param_1[9] + 1U) {
    fVar22 = (float)(param_1[9] + 1U) / *(float *)(unaff_x19 + 0x38) + 1.0;
    lVar12 = (long)fVar22;
    if (1.8446744e+19 <= fVar22) {
      lVar12 = -1;
    }
    lVar19 = *(long *)(unaff_x19 + 8);
    FUN_108722f38(auStack_88,&pppplStack_c8,lVar12);
    ppppplVar1 = (long *****)(lVar19 + 0x28);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      puVar10 = auStack_a0;
      lStack_98 = *(long *)(unaff_x19 + 0x48);
      func_0x000104becd80();
      lStack_b0 = *(long *)(unaff_x19 + 0x48);
      puStack_90 = puVar10;
      if (lStack_b0 == 0) {
        lVar12 = 0;
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar10 = auStack_b8;
        FUN_108723e64();
        lVar12 = *(long *)(unaff_x19 + 0x48);
      }
      puStack_a8 = puVar10;
      for (lVar21 = 0; lVar12 != lVar21; lVar21 = lVar21 + 1) {
        pppplVar16 = *ppppplVar1;
        ppplVar18 = pppplVar16[-5];
        *(long ****)(puStack_90 + lVar21 * 8) = ppplVar18;
        *(long *****)(puStack_a8 + lVar21 * 8) = pppplVar16;
        FUN_108723df0(ppppplVar1);
        func_0x00010872325c(ppplVar18,auStack_88[0]);
        func_0x000108723e2c(pppplVar16,lStack_70 + (long)ppplVar18 * 8,&pppplStack_c8);
      }
      FUN_108723e80(auStack_b8);
      func_0x000108723ea8(auStack_a0);
    }
    ppppplVar4 = ppppplVar1;
    if ((long *****)pppplStack_c8 != &pppplStack_c8) {
      ppppplVar4 = (long *****)pppplStack_c8;
    }
    *(long ******)(lVar19 + 0x28) = ppppplVar4;
    *(undefined8 **)(lVar19 + 0x30) = puStack_c0;
    *(long ******)*puStack_c0 = ppppplVar1;
    **(long **)(*(long *)(lVar19 + 0x28) + 8) = (long)ppppplVar1;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x18) = auStack_88[0];
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    lVar12 = *(long *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x28) = uStack_78;
    *(long *)(unaff_x19 + 0x30) = lStack_70;
    param_1 = (long *)(unaff_x19 + 0x10);
    auStack_88[0] = uVar13;
    uStack_78 = uVar6;
    lStack_70 = lVar12;
    FUN_108722f00();
    func_0x00010872457c();
  }
  func_0x00010872456c();
  plVar14 = (long *)(*(long *)(unaff_x19 + 0x30) + (long)param_1 * 8);
  lVar12 = *unaff_x20;
  plVar20 = (long *)*plVar14;
  while (plVar20 != (long *)0x0) {
    if (lVar12 == plVar20[-5]) {
      plVar20 = plVar20 + -5;
      plVar11 = param_1;
      goto LAB_108723cbc;
    }
    bVar9 = *(long **)plVar20[1] != plVar20;
    plVar20 = (long *)plVar20[1];
    if (bVar9) {
      plVar20 = (long *)0x0;
    }
  }
  plVar20 = *(long **)(unaff_x19 + 8);
  puVar17 = (ulong *)(plVar20 + 2);
  uVar15 = *puVar17 & 0xfffffffffffffffe;
  iVar5 = (int)unaff_x20[1];
  uVar2 = 2;
  if (*(int *)((long)unaff_x20 + 0xc) != 5) {
    uVar2 = 0;
  }
  if (*(int *)((long)unaff_x20 + 0xc) == 1) {
    uVar2 = 1;
  }
  bVar9 = true;
  do {
    if (uVar15 == 0) {
      func_0x000108724558();
      lVar12 = *unaff_x20;
      param_1[1] = unaff_x20[1];
      *param_1 = lVar12;
      func_0x0001077fe6f4(param_1 + 2,bVar9 ^ 1,plVar20 + 2,puVar17);
      plVar11 = param_1 + 5;
      func_0x000108723e2c(plVar11,plVar14,*(long *)(unaff_x19 + 8) + 0x28);
      *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x19 + 0x48) + 1;
      plVar20 = param_1;
LAB_108723cbc:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        func_0x000108723ea8(auStack_a0);
        func_0x00010872457c();
        __Unwind_Resume(plVar11);
        func_0x000104bd46a0();
        plVar14 = (long *)*plVar11;
        lVar12 = *plVar14;
        plVar20 = *(long **)(lVar12 + 8);
        if (plVar20 == plVar14) {
          lVar19 = plVar14[1];
        }
        else {
          *plVar20 = 0;
          lVar12 = *plVar14;
          lVar19 = plVar14[1];
        }
        *(long *)(lVar12 + 8) = lVar19;
        *plVar11 = lVar12;
        return (long *)(ulong)(plVar20 != plVar14);
      }
      return plVar20;
    }
    plVar20 = (long *)(uVar15 - 0x10);
    iVar7 = *(int *)(uVar15 - 8);
    bVar8 = SBORROW4(iVar5,iVar7);
    bVar9 = iVar5 - iVar7 < 0;
    if (iVar5 == iVar7) {
      uVar3 = 2;
      if (*(int *)(uVar15 - 4) != 5) {
        uVar3 = 0;
      }
      if (*(int *)(uVar15 - 4) == 1) {
        uVar3 = 1;
      }
      bVar9 = uVar2 < uVar3;
      if (uVar2 == uVar3) {
        bVar8 = SBORROW8(lVar12,*plVar20);
        bVar9 = lVar12 - *plVar20 < 0;
        goto LAB_108723c44;
      }
    }
    else {
LAB_108723c44:
      bVar9 = bVar9 != bVar8;
    }
    lVar19 = 0x18;
    if (!bVar9) {
      lVar19 = 0x20;
    }
    uVar15 = *(ulong *)((long)plVar20 + lVar19);
  } while( true );
}



/* Entry: 108723df0; end: 108723e63;  */

bool FUN_108723df0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  lVar3 = *plVar1;
  plVar2 = *(long **)(lVar3 + 8);
  if (plVar2 == plVar1) {
    lVar4 = plVar1[1];
  }
  else {
    *plVar2 = 0;
    lVar3 = *plVar1;
    lVar4 = plVar1[1];
  }
  *(long *)(lVar3 + 8) = lVar4;
  *param_1 = lVar3;
  return plVar2 != plVar1;
}



/* Entry: 108723e64; end: 108723e7f;  */

long FUN_108723e64(long param_1,ulong param_2)

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
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108724574();
  }
  return param_1;
}



/* Entry: 108723e80; end: 108723eff;  */

long FUN_108723e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108724574();
  }
  return param_1;
}



/* Entry: 108723f00; end: 108723fa3;  */

long FUN_108723f00(long param_1)

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
  if ((uVar3 != 0) && (func_0x0001087245e8(), extraout_x8 != 0)) {
    func_0x000108724348();
    func_0x000108724388();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x0001087245bc();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x0001087245a4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001087245c8();
        if (!(bool)uVar1) break;
        func_0x00010872433c();
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
          func_0x000108724634();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 108723fa4; end: 108723fd7;  */

undefined8 FUN_108723fa4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108723fd8(auStack_38);
  FUN_1087230dc(auStack_38);
  return uVar1;
}



/* Entry: 108723fd8; end: 1087240cb;  */

void FUN_108723fd8(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10872408c;
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
    if (uVar8 == uVar3) goto LAB_10872408c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10872408c:
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



/* Entry: 1087240cc; end: 1087240fb;  */

void FUN_1087240cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1087240fc();
  if (lVar1 != 0) {
    FUN_1087241a0(param_1,lVar1);
  }
  return;
}



/* Entry: 1087240fc; end: 10872419f;  */

long FUN_1087240fc(long param_1)

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
  if ((uVar3 != 0) && (func_0x0001087245e8(), extraout_x8 != 0)) {
    func_0x000108724348();
    func_0x000108724388();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x0001087245bc();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x0001087245a4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001087245c8();
        if (!(bool)uVar1) break;
        func_0x00010872433c();
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
          func_0x000108724634();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 1087241a0; end: 1087241d3;  */

undefined8 FUN_1087241a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1087241d4(auStack_38);
  FUN_108722b28(auStack_38);
  return uVar1;
}



/* Entry: 1087241d4; end: 1087242c7;  */

void FUN_1087241d4(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_108724288;
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
    if (uVar8 == uVar3) goto LAB_108724288;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108724288:
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



/* Entry: 1087242c8; end: 1087242ef;  */

undefined8 FUN_1087242c8(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  FUN_1087242f0(&uStack_18);
  return uStack_18;
}



/* Entry: 1087242f0; end: 10872433b;  */

void FUN_1087242f0(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = *param_1 + 0x10;
  func_0x0001077fe774(&lStack_28);
  lVar1 = 0;
  if (lStack_28 != 0) {
    lVar1 = lStack_28 + -0x10;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10872433c; end: 10872463f;  */

bool FUN_10872433c(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x21;
  
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if (*(long *)(unaff_x21 + 0x18) - lVar1 == unaff_x19[1] - *unaff_x19) {
    func_0x000107c610b0(lVar1,*unaff_x19,*(long *)(unaff_x21 + 0x18) - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 108724640; end: 108724843;  */

undefined8 *
FUN_108724640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
             undefined8 *param_13,undefined4 param_14)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a68e70;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108725068();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108725068();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108725068();
    } while (extraout_w10_01 != 0);
  }
  param_1[9] = param_5;
  func_0x000107c279d4(param_1 + 10,param_6);
  lVar4 = param_8[1];
  uVar5 = *param_8;
  param_1[0x10] = param_8[1];
  param_1[0xf] = uVar5;
  *(undefined4 *)(param_1 + 0xe) = param_7;
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
  lVar4 = param_9[1];
  uVar5 = *param_9;
  param_1[0x12] = param_9[1];
  param_1[0x11] = uVar5;
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
  lVar4 = param_10[1];
  uVar5 = *param_10;
  param_1[0x14] = param_10[1];
  param_1[0x13] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108725068();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001086f8728(param_1 + 0x15);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((long)param_1 + 0xc2) = 0;
  lVar4 = param_13[1];
  uVar5 = *param_13;
  param_1[0x1a] = param_13[1];
  param_1[0x19] = uVar5;
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
  *(undefined4 *)(param_1 + 0x1b) = param_14;
  param_1[0x1c] = 0x108724de4;
  param_1[0x1d] = &PTR_DAT_110873830;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  return param_1;
}



/* Entry: 108724844; end: 1087248db;  */

void FUN_108724844(long param_1,long *param_2,undefined1 param_3)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  long *plStack_168;
  byte *pbStack_160;
  undefined1 auStack_158 [4];
  undefined1 uStack_154;
  undefined1 auStack_150 [4];
  undefined1 uStack_14c;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_110 [32];
  long lStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  char cStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  byte bStack_41;
  
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined1 *)(param_1 + 0xc2) = param_3;
  lVar1 = param_2[1];
  for (lVar9 = *param_2; lVar9 != lVar1; lVar9 = lVar9 + 0x378) {
    if ((*(char *)(param_1 + 0x118) != '\x01') ||
       (*(long *)(param_1 + 0x110) < *(long *)(lVar9 + 0x18))) {
      *(long *)(param_1 + 0x110) = *(long *)(lVar9 + 0x18);
      *(undefined1 *)(param_1 + 0x118) = 1;
      FUN_108690b88(param_1 + 0x120,lVar9);
    }
  }
  *(long *)(param_1 + 0x140) = (param_2[1] - *param_2) / 0x378;
  if (*(char *)(param_1 + 0xc0) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0xc1) != '\x01') {
    return;
  }
  bStack_41 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  iVar4 = *(int *)(param_1 + 0xd8);
  if (2 < iVar4 - 1U) {
    iVar4 = 0;
  }
  func_0x000107c29fbc(auStack_c0,*(undefined8 *)(param_1 + 0x88),iVar4);
  if (cStack_68 == '\x01') {
    uStack_e8 = uStack_98;
    lStack_f0 = lStack_a0;
    func_0x000107c279d4(auStack_e0,auStack_90);
    uVar5 = *(undefined8 *)(param_1 + 200);
    func_0x000107c29e14(uVar5,0x9d);
    iVar4 = 0;
    if (lStack_70 == 4) {
      iVar4 = (int)uVar5;
    }
    if ((iVar4 == 1) && (*(char *)(param_1 + 0x118) == '\x01')) {
      uVar5 = *(undefined8 *)(param_1 + 0x110);
      func_0x0001086f7ea8(uVar5,param_1 + 0x120,*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
      if ((int)uVar5 != 0) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x110) + 1;
      }
    }
    if ((uStack_e8 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xd8);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_108700c80(&ppuStack_148,&lStack_f0);
      auStack_150[0] = 0;
      uStack_14c = 0;
      auStack_158[0] = 0;
      uStack_154 = 0;
      func_0x000107c294c8(auStack_110,uVar2,uVar5,param_1 + 0x50,&ppuStack_148,
                          *(undefined4 *)(param_1 + 0x70),auStack_150,param_1 + 0x78,
                          (undefined8 *)(param_1 + 0x88),param_1 + 0x98,auStack_158);
      plStack_168 = &lStack_60;
      pbStack_160 = &bStack_41;
      func_0x000107c29554(&plStack_168,auStack_110);
      func_0x000107c27b40(auStack_110);
      func_0x000107c293f8(&ppuStack_148);
      if ((ulong)((lStack_58 - lStack_60) / 0x378) < (ulong)(long)*(int *)(param_1 + 0x70)) {
        if (lStack_60 == lStack_58) {
          bVar3 = *(long *)(param_1 + 0x140) != 0;
        }
        else {
          bVar3 = false;
        }
        if ((uStack_e8 & 1) == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = 0;
          if ((0 < lStack_f0) && ((bStack_41 & 1) != 0)) {
            bVar7 = *(byte *)(param_1 + 0xc2);
          }
        }
        if ((bVar3 != false || (bVar7 & 1) != 0) || ((*(byte *)(param_1 + 0xc2) & 1) == 0)) {
          plVar8 = *(long **)(param_1 + 0x78);
          uStack_138 = 0;
          uStack_130 = 0;
          ppuStack_148 = &PTR_FUN_110a609a8;
          uStack_140 = 0;
          uStack_128 = 0x59;
          func_0x000107c278b8(auStack_180,&UNK_10f4b27bf);
          pppuVar6 = &ppuStack_148;
          func_0x000107c28818(pppuVar6,auStack_180,bVar3);
          func_0x000107c278b8(auStack_198,&UNK_10f4b27cf);
          func_0x000107c28818(pppuVar6,auStack_198,bVar7 & 1);
          (**(code **)(*plVar8 + 0x78))
                    (plVar8,pppuVar6,
                     (lStack_58 - lStack_60) / -0x378 + (long)*(int *)(param_1 + 0x70));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
          func_0x000107c2882c(&ppuStack_148);
        }
      }
    }
    func_0x000107c279dc(auStack_e0);
    if ((bStack_41 & 1) != 0) {
      bVar7 = 0;
      goto LAB_108724b78;
    }
  }
  bVar7 = *(byte *)(param_1 + 0xc2);
LAB_108724b78:
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&lStack_60,bVar7 & 1);
  func_0x000107c293b0(auStack_c0);
  func_0x000107c27b40(&lStack_60);
  return;
}



/* Entry: 1087248dc; end: 108724c2f;  */

void FUN_1087248dc(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  byte bVar6;
  long *plVar7;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  long *plStack_168;
  byte *pbStack_160;
  undefined1 auStack_158 [4];
  undefined1 uStack_154;
  undefined1 auStack_150 [4];
  undefined1 uStack_14c;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_110 [32];
  long lStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  char cStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  byte bStack_41;
  
  if (*(char *)(param_1 + 0xc0) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0xc1) != '\x01') {
    return;
  }
  bStack_41 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  if (2 < iVar3 - 1U) {
    iVar3 = 0;
  }
  func_0x000107c29fbc(auStack_c0,*(undefined8 *)(param_1 + 0x88),iVar3);
  if (cStack_68 == '\x01') {
    uStack_e8 = uStack_98;
    lStack_f0 = lStack_a0;
    func_0x000107c279d4(auStack_e0,auStack_90);
    uVar4 = *(undefined8 *)(param_1 + 200);
    func_0x000107c29e14(uVar4,0x9d);
    iVar3 = 0;
    if (lStack_70 == 4) {
      iVar3 = (int)uVar4;
    }
    if ((iVar3 == 1) && (*(char *)(param_1 + 0x118) == '\x01')) {
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      func_0x0001086f7ea8(uVar4,param_1 + 0x120,*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
      if ((int)uVar4 != 0) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x110) + 1;
      }
    }
    if ((uStack_e8 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xd8);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      FUN_108700c80(&ppuStack_148,&lStack_f0);
      auStack_150[0] = 0;
      uStack_14c = 0;
      auStack_158[0] = 0;
      uStack_154 = 0;
      func_0x000107c294c8(auStack_110,uVar1,uVar4,param_1 + 0x50,&ppuStack_148,
                          *(undefined4 *)(param_1 + 0x70),auStack_150,param_1 + 0x78,
                          (undefined8 *)(param_1 + 0x88),param_1 + 0x98,auStack_158);
      plStack_168 = &lStack_60;
      pbStack_160 = &bStack_41;
      func_0x000107c29554(&plStack_168,auStack_110);
      func_0x000107c27b40(auStack_110);
      func_0x000107c293f8(&ppuStack_148);
      if ((ulong)((lStack_58 - lStack_60) / 0x378) < (ulong)(long)*(int *)(param_1 + 0x70)) {
        if (lStack_60 == lStack_58) {
          bVar2 = *(long *)(param_1 + 0x140) != 0;
        }
        else {
          bVar2 = false;
        }
        if ((uStack_e8 & 1) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = 0;
          if ((0 < lStack_f0) && ((bStack_41 & 1) != 0)) {
            bVar6 = *(byte *)(param_1 + 0xc2);
          }
        }
        if ((bVar2 != false || (bVar6 & 1) != 0) || ((*(byte *)(param_1 + 0xc2) & 1) == 0)) {
          plVar7 = *(long **)(param_1 + 0x78);
          uStack_138 = 0;
          uStack_130 = 0;
          ppuStack_148 = &PTR_FUN_110a609a8;
          uStack_140 = 0;
          uStack_128 = 0x59;
          func_0x000107c278b8(auStack_180,&UNK_10f4b27bf);
          pppuVar5 = &ppuStack_148;
          func_0x000107c28818(pppuVar5,auStack_180,bVar2);
          func_0x000107c278b8(auStack_198,&UNK_10f4b27cf);
          func_0x000107c28818(pppuVar5,auStack_198,bVar6 & 1);
          (**(code **)(*plVar7 + 0x78))
                    (plVar7,pppuVar5,
                     (lStack_58 - lStack_60) / -0x378 + (long)*(int *)(param_1 + 0x70));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
          func_0x000107c2882c(&ppuStack_148);
        }
      }
    }
    func_0x000107c279dc(auStack_e0);
    if ((bStack_41 & 1) != 0) {
      bVar6 = 0;
      goto LAB_108724b78;
    }
  }
  bVar6 = *(byte *)(param_1 + 0xc2);
LAB_108724b78:
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&lStack_60,bVar6 & 1);
  func_0x000107c293b0(auStack_c0);
  func_0x000107c27b40(&lStack_60);
  return;
}



/* Entry: 108724c30; end: 108724c3f;  */

void FUN_108724c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108724c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108724c40; end: 108724d93;  */

void FUN_108724c40(ulong param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 *param_5,
                  long param_6)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  int extraout_w10;
  long *plVar8;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined ***pppuStack_168;
  long lStack_160;
  undefined1 auStack_158 [4];
  undefined1 uStack_154;
  undefined1 auStack_150 [4];
  undefined1 uStack_14c;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_110 [32];
  long lStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [31];
  undefined1 uStack_a1;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar7 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 != 0) {
    plVar8 = (long *)(param_1 + 0xa8);
    in_ZR = *plVar8 == *(long *)(param_1 + 0xb0);
    if (!(bool)in_ZR) {
      func_0x000108724e88(&uStack_80,param_1 + 8);
      uStack_68 = CONCAT44(uStack_68._4_4_,0x1200a5);
      param_4 = param_1 + 0x78;
      param_5 = &uStack_68;
      param_6 = param_1 + 0xd8;
      uStack_70 = param_1;
      FUN_108724d94(auStack_90,param_1 + 0x28,param_1 + 0x38,param_1 + 0x88,param_4,param_5,param_6)
      ;
      uStack_68 = 0x108724fec;
      ppuStack_60 = &PTR_DAT_110a68ed8;
      lStack_50 = lStack_78;
      ppuStack_58 = (undefined **)uStack_80;
      if (lStack_78 != 0) {
        do {
          func_0x000108725068();
        } while (extraout_w10 != 0);
      }
      uStack_48 = uStack_70;
      param_3 = &uStack_68;
      FUN_1086f4a08();
      func_0x000108725078();
      func_0x000100869440(auStack_90);
      func_0x000108700cf0(&uStack_80);
      func_0x000108725054(uVar7);
      param_2 = plVar8;
      if ((bool)in_ZR) {
        return;
      }
      goto LAB_108724d64;
    }
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  func_0x000108725054(uVar7);
  if (!(bool)in_ZR) {
LAB_108724d64:
    ___stack_chk_fail();
    func_0x000108725078();
    func_0x000100869440(auStack_90);
    puVar5 = &uStack_80;
    func_0x000108700cf0(puVar5);
    func_0x00010872509c();
    pcStack_98 = FUN_108724d94;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_108724ec4(&uStack_a1,puVar5,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (*(char *)(param_1 + 0xc0) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0xc1) != '\x01') {
    return;
  }
  uStack_48 = uStack_48 & 0xffffffffffffff;
  ppuStack_60 = (undefined **)0x0;
  ppuStack_58 = (undefined **)0x0;
  lStack_50 = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  if (2 < iVar3 - 1U) {
    iVar3 = 0;
  }
  func_0x000107c29fbc(auStack_c0,*(undefined8 *)(param_1 + 0x88),iVar3);
  if ((char)uStack_68 == '\x01') {
    uStack_e8 = (ulong)pcStack_98;
    lStack_f0 = (long)puStack_a0;
    func_0x000107c279d4(auStack_e0,auStack_90);
    uVar7 = *(undefined8 *)(param_1 + 200);
    func_0x000107c29e14(uVar7,0x9d);
    iVar3 = 0;
    if (uStack_70 == 4) {
      iVar3 = (int)uVar7;
    }
    if ((iVar3 == 1) && (*(char *)(param_1 + 0x118) == '\x01')) {
      uVar7 = *(undefined8 *)(param_1 + 0x110);
      func_0x0001086f7ea8(uVar7,param_1 + 0x120,*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
      if ((int)uVar7 != 0) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x110) + 1;
      }
    }
    if ((uStack_e8 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xd8);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      FUN_108700c80(&ppuStack_148,&lStack_f0);
      auStack_150[0] = 0;
      uStack_14c = 0;
      auStack_158[0] = 0;
      uStack_154 = 0;
      func_0x000107c294c8(auStack_110,uVar1,uVar7,param_1 + 0x50,&ppuStack_148,
                          *(undefined4 *)(param_1 + 0x70),auStack_150,param_1 + 0x78,
                          (undefined8 *)(param_1 + 0x88),param_1 + 0x98,auStack_158);
      pppuStack_168 = &ppuStack_60;
      lStack_160 = (long)&uStack_48 + 7;
      func_0x000107c29554(&pppuStack_168,auStack_110);
      func_0x000107c27b40(auStack_110);
      func_0x000107c293f8(&ppuStack_148);
      if ((ulong)(((long)ppuStack_58 - (long)ppuStack_60) / 0x378) <
          (ulong)(long)*(int *)(param_1 + 0x70)) {
        if (ppuStack_60 == ppuStack_58) {
          bVar2 = *(long *)(param_1 + 0x140) != 0;
        }
        else {
          bVar2 = false;
        }
        if ((uStack_e8 & 1) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = 0;
          if ((0 < lStack_f0) && ((uStack_48 & 0x100000000000000) != 0)) {
            bVar6 = *(byte *)(param_1 + 0xc2);
          }
        }
        if ((bVar2 != false || (bVar6 & 1) != 0) || ((*(byte *)(param_1 + 0xc2) & 1) == 0)) {
          plVar8 = *(long **)(param_1 + 0x78);
          uStack_138 = 0;
          uStack_130 = 0;
          ppuStack_148 = &PTR_FUN_110a609a8;
          uStack_140 = 0;
          uStack_128 = 0x59;
          func_0x000107c278b8(auStack_180,&UNK_10f4b27bf);
          pppuVar4 = &ppuStack_148;
          func_0x000107c28818(pppuVar4,auStack_180,bVar2);
          func_0x000107c278b8(auStack_198,&UNK_10f4b27cf);
          func_0x000107c28818(pppuVar4,auStack_198,bVar6 & 1);
          (**(code **)(*plVar8 + 0x78))
                    (plVar8,pppuVar4,
                     ((long)ppuStack_58 - (long)ppuStack_60) / -0x378 +
                     (long)*(int *)(param_1 + 0x70));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
          func_0x000107c2882c(&ppuStack_148);
        }
      }
    }
    func_0x000107c279dc(auStack_e0);
    if ((uStack_48 & 0x100000000000000) != 0) {
      bVar6 = 0;
      goto LAB_108724b78;
    }
  }
  bVar6 = *(byte *)(param_1 + 0xc2);
LAB_108724b78:
  (**(code **)**(undefined8 **)(param_1 + 0x18))
            (*(undefined8 **)(param_1 + 0x18),&ppuStack_60,bVar6 & 1);
  func_0x000107c293b0(auStack_c0);
  func_0x000107c27b40(&ppuStack_60);
  return;
}



/* Entry: 108724d94; end: 108724dcb;  */

void FUN_108724d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_108724ec4(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 108724dcc; end: 108724dcf;  */

undefined8 * FUN_108724dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68e70;
  func_0x000107c279dc(param_1 + 0x24);
  (**(code **)param_1[0x1d])();
  func_0x000107c28d9c(param_1 + 0x19);
  func_0x000107c29108(param_1 + 0x15);
  func_0x000107c28ab4(param_1 + 0x13);
  func_0x000107c28808(param_1 + 0x11);
  func_0x000107c288a4(param_1 + 0xf);
  func_0x000107c279dc(param_1 + 10);
  func_0x000107c295a0(param_1 + 7);
  func_0x000107c28abc(param_1 + 5);
  func_0x0001086ff014(param_1 + 3);
  FUN_108700ccc(param_1 + 1);
  return param_1;
}



/* Entry: 108724dd0; end: 108724df3;  */

void FUN_108724dd0(void)

{
  FUN_108724df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108724df4; end: 108724ec3;  */

undefined8 * FUN_108724df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68e70;
  func_0x000107c279dc(param_1 + 0x24);
  (**(code **)param_1[0x1d])();
  func_0x000107c28d9c(param_1 + 0x19);
  func_0x000107c29108(param_1 + 0x15);
  func_0x000107c28ab4(param_1 + 0x13);
  func_0x000107c28808(param_1 + 0x11);
  func_0x000107c288a4(param_1 + 0xf);
  func_0x000107c279dc(param_1 + 10);
  func_0x000107c295a0(param_1 + 7);
  func_0x000107c28abc(param_1 + 5);
  func_0x0001086ff014(param_1 + 3);
  FUN_108700ccc(param_1 + 1);
  return param_1;
}



/* Entry: 108724ec4; end: 108724f97;  */

undefined8 *
FUN_108724ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_70 [2];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100869234(auStack_70,1);
  FUN_108724f98(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar1 = lStack_60;
  lStack_60 = 0;
  func_0x00010086935c(param_1,lVar1 + 0x18);
  func_0x000100869470();
  func_0x000108725054(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000100869470();
  func_0x00010872509c();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a67e40;
  puVar3[1] = 0;
  func_0x000108724fe0(puVar3 + 3);
  return puVar3;
}



/* Entry: 108724f98; end: 108724fdf;  */

undefined8 * FUN_108724f98(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a67e40;
  param_1[1] = 0;
  FUN_108724fe0(param_1 + 3);
  return param_1;
}



/* Entry: 108724fe0; end: 1087250a3;  */

void FUN_108724fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,uint *param_6,uint *param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar6;
  
  uVar2 = (ulong)*param_6;
  uVar4 = (ulong)*param_7;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = param_4[1];
  uVar6 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_01 != 0);
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = (undefined4)uVar2;
  lVar5 = param_5[1];
  uVar6 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x0001008692ac();
      uVar3 = (undefined4)uVar4;
      uVar1 = (undefined4)uVar2;
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)((long)param_1 + 0x54) = uVar3;
  param_1[0xb] = 0;
  return;
}



/* Entry: 1087250a4; end: 1087252d3;  */

void FUN_1087250a4(byte *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,char param_7)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  undefined1 auStack_b8 [24];
  char cStack_a0;
  undefined4 auStack_98 [6];
  undefined1 auStack_80 [32];
  undefined1 *puVar4;
  
  *param_1 = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x20] = 0;
  param_1[0x38] = 0;
  uVar6 = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x88);
  lVar8 = *(long *)(param_3 + 0x28);
  bVar9 = *(byte *)(param_3 + 0x30);
  func_0x000107c279d4(auStack_80,param_3 + 0x48);
  if (((*(long *)(param_3 + 0x20) <= *(long *)(param_4 + 0x158)) &&
      ((*(byte *)(param_5 + 0x1a8) & 1) != 0)) && ((*(byte *)(param_5 + 0x28) & 1) != 0)) {
    lVar7 = *(long *)(param_5 + 0x20);
    lVar1 = lVar7;
    if (lVar8 <= lVar7) {
      lVar1 = lVar8;
    }
    if ((bVar9 & 1) == 0) {
      lVar1 = lVar7;
    }
    lVar8 = lVar7;
    if (*(long *)(param_4 + 0x158) <= *(long *)(param_3 + 0x20)) {
      lVar8 = lVar1;
    }
    if ((*(byte *)(param_5 + 0x60) & 1) != 0) {
      func_0x000107c29ee0(auStack_98,*(undefined8 *)(param_5 + 0x68));
      FUN_10869026c(auStack_80,auStack_98);
      func_0x000107c27914(auStack_98);
    }
    bVar9 = 1;
  }
  lVar7 = *(long *)(param_3 + 0x38);
  bVar2 = *(byte *)(param_3 + 0x40);
  auStack_98[0] = 0;
  param_4 = param_4 + 0x18;
  puVar5 = auStack_98;
  FUN_1086a3d00(param_4,puVar5,param_2);
  lVar1 = lVar7;
  if ((bVar2 & 1) == 0) {
    lVar1 = 0;
  }
  if (lVar1 <= param_4) {
    lVar1 = param_4;
  }
  if (((ulong)puVar5 & 1) != 0) {
    bVar2 = 1;
    lVar7 = lVar1;
  }
  func_0x000107c279d4(auStack_b8,auStack_80);
  func_0x000107c279dc(auStack_80);
  func_0x000107c28d24(param_1 + 0x20,auStack_b8);
  if (cStack_a0 == '\x01') {
    puVar4 = auStack_b8;
    func_0x000107c28078(puVar4,param_2);
    bVar3 = (byte)puVar4;
  }
  else {
    bVar3 = 0;
  }
  if (bVar9 == 0) {
    lVar8 = 0;
  }
  if (param_7 == '\0') {
    param_6 = 0;
  }
  if (bVar2 == 0) {
    lVar7 = 0;
  }
  if (lVar7 <= param_6) {
    lVar7 = param_6;
  }
  *param_1 = lVar8 <= lVar7 | bVar3 & 1;
  func_0x000107c279dc(auStack_b8);
  return;
}



/* Entry: 1087252d4; end: 1087256f3;  */

void FUN_1087252d4(undefined8 param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,byte param_9)

{
  char cVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_7f8 [64];
  undefined1 uStack_7b8;
  undefined4 uStack_7b0;
  undefined8 uStack_7ac;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined4 uStack_778;
  undefined1 auStack_770 [24];
  undefined1 uStack_758;
  undefined1 auStack_750 [32];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 uStack_6b8;
  undefined **ppuStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined1 auStack_5b0 [32];
  uint uStack_590;
  undefined4 uStack_58c;
  undefined1 uStack_588;
  undefined1 auStack_580 [280];
  undefined1 auStack_468 [136];
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3a8;
  undefined1 auStack_370 [256];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [40];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [112];
  undefined1 uStack_168;
  undefined1 auStack_160 [216];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  
  lVar6 = *(long *)(param_3 + 0x10);
  if ((*(int *)(param_3 + 0x18) == 1 & param_9) == 0) {
    param_8 = 0;
  }
  auStack_80[0] = 0;
  uStack_68 = 0;
  uVar4 = *(ulong *)(param_5 + 0x78) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar4 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar4 + 8) == 0) goto LAB_108725358;
  }
  else if (cVar1 == '\0') goto LAB_108725358;
  func_0x000107c27b98(auStack_80);
LAB_108725358:
  auStack_160[0] = 0;
  uStack_88 = 0;
  if ((*(byte *)(param_5 + 0x29) >> 4 & 1) == 0) {
    plVar5 = *(long **)(param_2 + 0x18);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5e0 = 0;
    ppuStack_5e8 = &PTR_FUN_110a609a8;
    uStack_5c8 = 0x2d1;
    func_0x000107c278b8(auStack_270,"location");
    pppuVar2 = &ppuStack_5e8;
    func_0x000107c28824(pppuVar2,auStack_270,&DAT_10f2fc4a4);
    func_0x000107c2884c(auStack_258,pppuVar2);
    (**(code **)(*plVar5 + 0x50))(plVar5,auStack_258);
    func_0x000107c2882c(auStack_258);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
    func_0x000107c2882c(&ppuStack_5e8);
  }
  else {
    auStack_1d8[0] = 0;
    uStack_168 = 0;
    FUN_108844330(&uStack_700,*(undefined8 *)(param_5 + 0xe0));
    uStack_228 = uStack_6f8;
    uStack_230 = uStack_700;
    uStack_220 = uStack_6f0;
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_218 = uStack_6e8;
    uStack_208 = uStack_6d8;
    uStack_210 = uStack_6e0;
    uStack_200 = uStack_6d0;
    uStack_6f0 = 0;
    uStack_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_1e8 = uStack_6b8;
    uStack_1f0 = uStack_6c0;
    uStack_1f8 = uStack_6c8;
    uStack_1e0 = 1;
    func_0x000107c27ec4(&ppuStack_5e8,auStack_1d8,&uStack_230,0);
    func_0x000107c2920c(auStack_160,&ppuStack_5e8);
    func_0x000107c27a00(&ppuStack_5e8);
    func_0x000107c279f8(&uStack_230);
    func_0x000104be1234(&uStack_700);
    func_0x000107c279ec(auStack_1d8);
  }
  func_0x000107c296f4(&ppuStack_5e8,param_4);
  uStack_5d0 = *(undefined8 *)(param_3 + 8);
  func_0x000107c27c5c(auStack_5b0,auStack_80);
  uStack_590 = (uint)(*(int *)(param_5 + 0x108) == 1);
  uVar4 = (ulong)*(uint *)(param_5 + 0x11c);
  func_0x000107c29e30();
  uStack_58c = (undefined4)uVar4;
  uStack_588 = (undefined1)(uVar4 >> 0x20);
  uStack_710 = 0;
  uStack_708 = 0;
  uStack_720 = 0;
  uStack_718 = 0;
  uStack_730 = 0;
  uStack_728 = 0;
  func_0x000107c279d4(auStack_750,param_3 + 0x20);
  auStack_770[0] = 0;
  uStack_758 = 0;
  uStack_7b0 = *(undefined4 *)(param_3 + 4);
  auStack_7f8[0] = 0;
  uStack_7b8 = 0;
  uStack_7ac = 0;
  uStack_7a0 = 0;
  uStack_798 = 0;
  uStack_790 = 1;
  uStack_788 = 0;
  uStack_780 = 0;
  uStack_778 = 0;
  func_0x000107c27ecc(&uStack_700,lVar6 - param_8,&uStack_718,&uStack_730,auStack_750,auStack_770,
                      auStack_7f8,*param_3,0);
  func_0x000107c296f8(auStack_580,&uStack_700);
  func_0x000107c296fc(auStack_468,param_6);
  ppuVar3 = &PTR_PTR_11327ab60;
  if (*(undefined ***)(param_5 + 0x98) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_5 + 0x98);
  }
  func_0x000108846074();
  uStack_3e0 = (ulong)ppuVar3 & 0xffffffff;
  uStack_3d8 = 0;
  uStack_3d0 = 1;
  uStack_3c0 = 0;
  uStack_3c8 = 1;
  uStack_3a8 = 2;
  func_0x000107c29704(auStack_370,auStack_160);
  func_0x000107c28c10(param_1,&ppuStack_5e8);
  func_0x000107c27b24(&uStack_700);
  func_0x000107c32f8c();
  func_0x000107c279dc(auStack_750);
  func_0x000107c27a04(&uStack_730);
  func_0x000107c27a04(&uStack_718);
  func_0x000107c27b1c(&ppuStack_5e8);
  func_0x000107c279fc(auStack_160);
  func_0x000107c32f84();
  return;
}



/* Entry: 1087256f4; end: 10872571b;  */

void FUN_1087256f4(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_10872571c();
  }
  return;
}



/* Entry: 10872571c; end: 10872572b;  */

void FUN_10872571c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x5d8);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_1087257c8();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x5d8;
        func_0x00010069ea28();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_1087257c8();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x000107c290a4();
    func_0x000108726d54();
    func_0x000107c27aac();
    func_0x000108726d30();
    func_0x000107c28b74();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a019c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10872572c; end: 1087257c7;  */

void FUN_10872572c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x5d8);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_1087257c8();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x5d8;
        func_0x00010069ea28();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_1087257c8();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x000107c290a4();
    func_0x000108726d54();
    func_0x000107c27aac();
    func_0x000108726d30();
    func_0x000107c28b74();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a019c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087257c8; end: 1087257e3;  */

void FUN_1087257c8(void)

{
  func_0x000108726cb4();
  FUN_1087257e4();
  return;
}



/* Entry: 1087257e4; end: 108725823;  */

void FUN_1087257e4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x5d8) {
    func_0x000107c32f80();
    FUN_108725824();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108725824; end: 10872599f;  */

void FUN_108725824(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32f7c();
  func_0x000108725880();
  func_0x000107c32f88();
  func_0x000107c27cfc();
  FUN_1087259a0(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x0001087258a4(unaff_x20 + 0x3d8,unaff_x19 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x5a0) = *(undefined8 *)(unaff_x19 + 0x5a0);
  func_0x000108725980(unaff_x20 + 0x5a8,unaff_x19 + 0x5a8);
  *(undefined8 *)(unaff_x20 + 0x5d0) = *(undefined8 *)(unaff_x19 + 0x5d0);
  return;
}



/* Entry: 1087259a0; end: 1087259c7;  */

void FUN_1087259a0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x398);
  if (cVar1 != *(char *)(param_2 + 0x398)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x398) == '\x01') {
        func_0x000107c27a20();
        *(undefined1 *)(param_1 + 0x398) = 0;
      }
      return;
    }
    func_0x0001006a02c0();
    *(undefined1 *)(param_1 + 0x398) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726ce8();
    func_0x000108726dcc();
    func_0x000107c32f88();
    FUN_108725a8c();
    FUN_108725c1c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    FUN_108725edc(unaff_x20 + 0x60,unaff_x19 + 0x60);
    func_0x000108725a64(unaff_x20 + 0x80,unaff_x19 + 0x80);
    func_0x000108726150(unaff_x20 + 0x98,unaff_x19 + 0x98);
    *(undefined2 *)(unaff_x20 + 0x2d8) = *(undefined2 *)(unaff_x19 + 0x2d8);
    FUN_108726544(unaff_x20 + 0x2e0,unaff_x19 + 0x2e0);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x328);
    uVar2 = *(undefined8 *)(unaff_x19 + 800);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x329);
    *(undefined8 *)(unaff_x20 + 0x331) = *(undefined8 *)(unaff_x19 + 0x331);
    *(undefined8 *)(unaff_x20 + 0x329) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x328) = uVar3;
    *(undefined8 *)(unaff_x20 + 800) = uVar2;
    FUN_1087266f8(unaff_x20 + 0x340,unaff_x19 + 0x340);
    FUN_108726740(unaff_x20 + 0x370,unaff_x19 + 0x370);
    return;
  }
  return;
}



/* Entry: 1087259c8; end: 108725a8b;  */

void FUN_1087259c8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108726ce8();
  func_0x000108726dcc();
  func_0x000107c32f88();
  FUN_108725a8c();
  FUN_108725c1c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  FUN_108725edc(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x000108725a64(unaff_x20 + 0x80,unaff_x19 + 0x80);
  func_0x000108726150(unaff_x20 + 0x98,unaff_x19 + 0x98);
  *(undefined2 *)(unaff_x20 + 0x2d8) = *(undefined2 *)(unaff_x19 + 0x2d8);
  FUN_108726544(unaff_x20 + 0x2e0,unaff_x19 + 0x2e0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar1 = *(undefined8 *)(unaff_x19 + 800);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x329);
  *(undefined8 *)(unaff_x20 + 0x331) = *(undefined8 *)(unaff_x19 + 0x331);
  *(undefined8 *)(unaff_x20 + 0x329) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar2;
  *(undefined8 *)(unaff_x20 + 800) = uVar1;
  FUN_1087266f8(unaff_x20 + 0x340,unaff_x19 + 0x340);
  FUN_108726740(unaff_x20 + 0x370,unaff_x19 + 0x370);
  return;
}



/* Entry: 108725a8c; end: 108725ab3;  */

void FUN_108725a8c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104be1618();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    FUN_1086842e8();
    func_0x0001006a07dc();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      FUN_108725adc();
    }
    return;
  }
  return;
}



/* Entry: 108725ab4; end: 108725adb;  */

void FUN_108725ab4(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_108725adc();
  }
  return;
}



/* Entry: 108725adc; end: 108725aeb;  */

void FUN_108725adc(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x48);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725b88();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x48;
        func_0x000104be16a0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725b88();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e23c();
    func_0x000108726d54();
    func_0x000105290bc8();
    func_0x000108726d30();
    FUN_108684358();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086843b4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725aec; end: 108725b87;  */

void FUN_108725aec(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x48);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725b88();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x48;
        func_0x000104be16a0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725b88();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e23c();
    func_0x000108726d54();
    func_0x000105290bc8();
    func_0x000108726d30();
    FUN_108684358();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086843b4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725b88; end: 108725ba3;  */

void FUN_108725b88(void)

{
  func_0x000108726cb4();
  FUN_108725ba4();
  return;
}



/* Entry: 108725ba4; end: 108725be3;  */

void FUN_108725ba4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x48) {
    func_0x000107c32f80();
    FUN_108725be4();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108725be4; end: 108725c1b;  */

void FUN_108725be4(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32f7c();
  FUN_10866e758();
  func_0x000107c32f88();
  func_0x000107c27c5c();
  uVar1 = *(undefined4 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x44) = *(undefined1 *)(unaff_x19 + 0x44);
  *(undefined4 *)(unaff_x20 + 0x40) = uVar1;
  return;
}



/* Entry: 108725c1c; end: 108725c43;  */

void FUN_108725c1c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000107c27a44();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    func_0x0001006a046c();
    func_0x0001006a07dc();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      FUN_108725c6c();
    }
    return;
  }
  return;
}



/* Entry: 108725c44; end: 108725c6b;  */

void FUN_108725c44(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_108725c6c();
  }
  return;
}



/* Entry: 108725c6c; end: 108725c7b;  */

void FUN_108725c6c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725d10();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x18;
        func_0x0001006994c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725d10();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e2fc();
    func_0x000108726d54();
    func_0x00010528d850();
    func_0x000108726d30();
    func_0x000107c28b98();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a0594();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725c7c; end: 108725d0f;  */

void FUN_108725c7c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725d10();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x18;
        func_0x0001006994c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725d10();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e2fc();
    func_0x000108726d54();
    func_0x00010528d850();
    func_0x000108726d30();
    func_0x000107c28b98();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a0594();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725d10; end: 108725d2b;  */

void FUN_108725d10(void)

{
  func_0x000108726cb4();
  FUN_108725d2c();
  return;
}



/* Entry: 108725d2c; end: 108725d63;  */

void FUN_108725d2c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  while (unaff_x21 != unaff_x20) {
    func_0x000107c32f80();
    FUN_108725d64();
    func_0x000108726d9c();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108725d64; end: 108725d8b;  */

void FUN_108725d64(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_108725d8c();
  }
  return;
}



/* Entry: 108725d8c; end: 108725d9b;  */

void FUN_108725d8c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x58);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725e38();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x58;
        func_0x0001006a0e58();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725e38();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x0001086f1810();
    func_0x000108726d54();
    func_0x000107c27ef4();
    func_0x000108726d30();
    func_0x000107c28c80();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a06dc();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725d9c; end: 108725e37;  */

void FUN_108725d9c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d6c();
    func_0x000108726d90(0x58);
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725e38();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x58;
        func_0x0001006a0e58();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725e38();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x0001086f1810();
    func_0x000108726d54();
    func_0x000107c27ef4();
    func_0x000108726d30();
    func_0x000107c28c80();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a06dc();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725e38; end: 108725e53;  */

void FUN_108725e38(void)

{
  func_0x000108726cb4();
  FUN_108725e54();
  return;
}



/* Entry: 108725e54; end: 108725e93;  */

void FUN_108725e54(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x58) {
    func_0x000107c32f80();
    FUN_108725e94();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108725e94; end: 108725edb;  */

void FUN_108725e94(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000108726ce8();
  uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0x28,unaff_x19 + 0x28);
  uVar2 = *(undefined1 *)(unaff_x19 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined1 *)(unaff_x20 + 0x50) = uVar2;
  return;
}



/* Entry: 108725edc; end: 108725f03;  */

void FUN_108725edc(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104be1594();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    func_0x000108687044();
    func_0x0001006a07dc();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      FUN_108725f2c();
    }
    return;
  }
  return;
}



/* Entry: 108725f04; end: 108725f2b;  */

void FUN_108725f04(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_108725f2c();
  }
  return;
}



/* Entry: 108725f2c; end: 108725f3b;  */

void FUN_108725f2c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725fd0();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        func_0x00010065ae00();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725fd0();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e3bc();
    func_0x000108726d54();
    func_0x00010528d470();
    func_0x000108726d30();
    FUN_108681254();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086870d8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725f3c; end: 108725fcf;  */

void FUN_108725f3c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_108725fd0();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        func_0x00010065ae00();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_108725fd0();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e3bc();
    func_0x000108726d54();
    func_0x00010528d470();
    func_0x000108726d30();
    FUN_108681254();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086870d8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108725fd0; end: 108725feb;  */

void FUN_108725fd0(void)

{
  func_0x000108726cb4();
  FUN_108725fec();
  return;
}



/* Entry: 108725fec; end: 108726023;  */

void FUN_108725fec(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  while (unaff_x21 != unaff_x20) {
    func_0x000107c32f80();
    func_0x000107c27cfc();
    func_0x000108726d9c();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 108726024; end: 108726033;  */

void FUN_108726024(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_1087260c8();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x18;
        func_0x0001002920a0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_1087260c8();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e40c();
    func_0x000108726d54();
    func_0x000105290c7c();
    func_0x000108726d30();
    func_0x000107c28bac();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a090c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108726034; end: 1087260c7;  */

void FUN_108726034(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_108726c68();
  func_0x000108726d78();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108726d04();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x000108726d3c();
      FUN_1087260c8();
      lVar1 = unaff_x19;
      func_0x00010065adc4();
      while (lVar1 != unaff_x19) {
        lVar1 = lVar1 + -0x18;
        func_0x0001002920a0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x000108726d84();
    FUN_1087260c8();
    func_0x000108726d60();
    func_0x000108726c88();
  }
  else {
    param_1 = unaff_x19;
    func_0x00010869e40c();
    func_0x000108726d54();
    func_0x000105290c7c();
    func_0x000108726d30();
    func_0x000107c28bac();
    func_0x000108726cc8();
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x0001006a090c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1087260c8; end: 1087260e3;  */

void FUN_1087260c8(void)

{
  func_0x000108726cb4();
  FUN_1087260e4();
  return;
}



/* Entry: 1087260e4; end: 10872611b;  */

void FUN_1087260e4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108726ca0();
  while (unaff_x21 != unaff_x20) {
    func_0x000107c32f80();
    FUN_10872611c();
    func_0x000108726d9c();
  }
  func_0x000108726d48();
  return;
}



/* Entry: 10872611c; end: 108726143;  */

void FUN_10872611c(void)

{
  undefined1 in_ZR;
  
  func_0x000108726d24();
  if (!(bool)in_ZR) {
    func_0x000108726cf4();
    FUN_108726144();
  }
  return;
}



/* Entry: 108726144; end: 108726177;  */

/* WARNING: Possible PIC construction at 0x00010567533c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105675494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105675340) */
/* WARNING: Removing unreachable block (ram,0x000105675498) */

undefined1  [16] FUN_108726144(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  plVar7 = (long *)(param_3 - (long)param_2 >> 2);
  uVar8 = param_1[2];
  plVar12 = (long *)*param_1;
  plVar10 = param_1;
  if ((long *)((long)(uVar8 - (long)plVar12) >> 2) < plVar7) {
    plVar13 = param_2;
    if (plVar12 != (long *)0x0) {
      param_1[1] = (long)plVar12;
      __ZdlPv(plVar12);
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)plVar7 >> 0x3e != 0) {
      func_0x00010507a6b8();
      ppuVar14 = &puStack_50;
      puStack_48 = &UNK_105675240;
      plVar10 = (long *)&DAT_10f62a4d8;
      puVar15 = &UNK_105675254;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000104bd47e8();
      ppuVar4 = &puStack_50;
      while( true ) {
        plVar6 = plVar10;
        *(long **)((long)ppuVar4 + -0x20) = param_2;
        *(long **)((long)ppuVar4 + -0x18) = param_1;
        *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar14;
        *(undefined **)((long)ppuVar4 + -8) = puVar15;
        if (plVar6 < (long *)0x2e8ba2e8ba2e8bb) {
          lVar5 = (long)plVar6 * 0x58;
          __Znwm(lVar5);
          auVar20._8_8_ = plVar6;
          auVar20._0_8_ = lVar5;
          return auVar20;
        }
        func_0x000104bd35f4();
        *(undefined8 *)((long)ppuVar4 + -0x70) = unaff_x26;
        *(undefined8 *)((long)ppuVar4 + -0x68) = unaff_x25;
        *(undefined8 *)((long)ppuVar4 + -0x60) = unaff_x24;
        *(long **)((long)ppuVar4 + -0x58) = plVar12;
        *(long **)((long)ppuVar4 + -0x50) = plVar7;
        *(long *)((long)ppuVar4 + -0x48) = param_3;
        *(long **)((long)ppuVar4 + -0x40) = param_2;
        *(long **)((long)ppuVar4 + -0x38) = param_1;
        *(undefined1 **)((long)ppuVar4 + -0x30) = (undefined1 *)((long)ppuVar4 + -0x10);
        *(undefined **)((long)ppuVar4 + -0x28) = &UNK_10567529c;
        ppuVar14 = (undefined1 **)((long)ppuVar4 + -0x30);
        plVar12 = (long *)(plVar6[1] - *plVar6);
        plVar7 = (long *)(((long)plVar12 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1);
        if ((long *)0x2e8ba2e8ba2e8ba < plVar7) break;
        lVar5 = plVar6[2] - *plVar6 >> 3;
        plVar10 = (long *)(lVar5 * 0x5d1745d1745d1746);
        if (plVar10 < plVar7 || (long)plVar10 - (long)plVar7 == 0) {
          plVar10 = plVar7;
        }
        if (0x1745d1745d1745c < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
          plVar10 = (long *)0x2e8ba2e8ba2e8ba;
        }
        *(long **)((long)ppuVar4 + -0x78) = plVar6 + 2;
        param_1 = plVar6;
        if (plVar10 == (long *)0x0) {
          param_2 = (long *)0x0;
          lVar9 = plVar13[1];
          lVar5 = *plVar13;
          plVar12[2] = plVar13[2];
          plVar12[1] = lVar9;
          *plVar12 = lVar5;
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = 0;
          lVar9 = plVar13[4];
          lVar5 = plVar13[3];
          uVar16 = *(undefined8 *)((long)plVar13 + 0x21);
          *(undefined8 *)((long)plVar12 + 0x29) = *(undefined8 *)((long)plVar13 + 0x29);
          *(undefined8 *)((long)plVar12 + 0x21) = uVar16;
          plVar12[4] = lVar9;
          plVar12[3] = lVar5;
          *(undefined1 *)(plVar12 + 7) = 0;
          *(undefined1 *)(plVar12 + 10) = 0;
          if ((char)plVar13[10] == '\x01') {
            plVar12[7] = 0;
            plVar12[8] = 0;
            plVar12[9] = 0;
            lVar5 = plVar13[7];
            plVar12[8] = plVar13[8];
            plVar12[7] = lVar5;
            plVar12[9] = plVar13[9];
            plVar13[7] = 0;
            plVar13[8] = 0;
            plVar13[9] = 0;
            *(undefined1 *)(plVar12 + 10) = 1;
          }
          puVar11 = (undefined8 *)*plVar6;
          puVar3 = (undefined8 *)plVar6[1];
          lVar5 = (long)plVar12 + ((long)puVar11 - (long)puVar3);
          if (puVar3 != puVar11) {
            lVar9 = 0;
            do {
              puVar1 = (undefined8 *)((long)puVar11 + lVar9);
              puVar2 = (undefined8 *)(lVar5 + lVar9);
              uVar17 = puVar1[1];
              uVar16 = *puVar1;
              puVar2[2] = puVar1[2];
              puVar2[1] = uVar17;
              *puVar2 = uVar16;
              puVar1[1] = 0;
              puVar1[2] = 0;
              *puVar1 = 0;
              uVar17 = puVar1[4];
              uVar16 = puVar1[3];
              uVar18 = *(undefined8 *)((long)puVar1 + 0x21);
              *(undefined8 *)((long)puVar2 + 0x29) = *(undefined8 *)((long)puVar1 + 0x29);
              *(undefined8 *)((long)puVar2 + 0x21) = uVar18;
              puVar2[4] = uVar17;
              puVar2[3] = uVar16;
              *(undefined1 *)(puVar2 + 7) = 0;
              *(undefined1 *)(puVar2 + 10) = 0;
              if (*(char *)(puVar1 + 10) == '\x01') {
                puVar2[7] = 0;
                puVar2[8] = 0;
                puVar2[9] = 0;
                uVar16 = puVar1[7];
                puVar2[8] = puVar1[8];
                puVar2[7] = uVar16;
                puVar2[9] = puVar1[9];
                puVar1[7] = 0;
                puVar1[8] = 0;
                puVar1[9] = 0;
                *(undefined1 *)(puVar2 + 10) = 1;
              }
              lVar9 = lVar9 + 0x58;
            } while (puVar1 + 0xb != puVar3);
            do {
              func_0x000105674958(puVar11);
              puVar11 = puVar11 + 0xb;
            } while (puVar11 != puVar3);
            puVar11 = (undefined8 *)*plVar6;
          }
          *plVar6 = lVar5;
          plVar6[1] = (long)(plVar12 + 0xb);
          lVar5 = plVar6[2];
          plVar6[2] = 0;
          *(undefined8 **)((long)ppuVar4 + -0x88) = puVar11;
          *(long *)((long)ppuVar4 + -0x80) = lVar5;
          *(undefined8 **)((long)ppuVar4 + -0x98) = puVar11;
          *(undefined8 **)((long)ppuVar4 + -0x90) = puVar11;
          puVar15 = &UNK_105675498;
          plVar6 = (long *)((long)ppuVar4 + -0x98);
code_r0x0001056754bc:
          *(long **)((long)ppuVar4 + -0xc0) = param_2;
          *(long **)((long)ppuVar4 + -0xb8) = param_1;
          *(undefined1 ***)((long)ppuVar4 + -0xb0) = ppuVar14;
          *(undefined **)((long)ppuVar4 + -0xa8) = puVar15;
          lVar5 = plVar6[1];
          lVar9 = plVar6[2];
          while (lVar5 != lVar9) {
            plVar6[2] = lVar9 + -0x58;
            func_0x000105674958();
            lVar9 = plVar6[2];
          }
          if (*plVar6 != 0) {
            __ZdlPv();
          }
          auVar21._8_8_ = plVar13;
          auVar21._0_8_ = plVar6;
          return auVar21;
        }
        puVar15 = &UNK_105675340;
        ppuVar4 = (undefined1 **)((long)ppuVar4 + -0xa0);
        plVar7 = plVar13;
      }
      puVar15 = &UNK_1056754bc;
      func_0x000105675240();
      goto code_r0x0001056754bc;
    }
    plVar6 = (long *)((long)uVar8 >> 1);
    if ((long *)((long)uVar8 >> 1) <= plVar7) {
      plVar6 = plVar7;
    }
    if (0x7ffffffffffffffb < uVar8) {
      plVar6 = (long *)0x3fffffffffffffff;
    }
    func_0x000100291c58(param_1,plVar6);
    plVar7 = (long *)param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      plVar10 = plVar7;
      _memmove(plVar7,param_2,param_3);
      plVar6 = param_2;
    }
    param_3 = (long)plVar7 + param_3;
  }
  else {
    plVar13 = (long *)param_1[1];
    if ((long *)((long)plVar13 - (long)plVar12 >> 2) < plVar7) {
      plVar7 = (long *)((long)param_2 + ((long)plVar13 - (long)plVar12));
      if (plVar13 != plVar12) {
        _memmove(plVar12,param_2);
        plVar13 = (long *)param_1[1];
        plVar10 = plVar12;
      }
      param_3 = param_3 - (long)plVar7;
      plVar6 = param_2;
      if (param_3 != 0) {
        plVar10 = plVar13;
        _memmove(plVar13,plVar7,param_3);
        plVar6 = plVar7;
      }
      param_3 = (long)plVar13 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      plVar6 = param_2;
      if (param_3 != 0) {
        plVar10 = plVar12;
        _memmove(plVar12,param_2,param_3);
        plVar6 = param_2;
      }
      param_3 = (long)plVar12 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar19._8_8_ = plVar6;
  auVar19._0_8_ = plVar10;
  return auVar19;
}



/* Entry: 108726178; end: 10872619f;  */

undefined4 * FUN_108726178(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1087261a0(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1087261a0; end: 1087261c7;  */

long FUN_1087261a0(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x228);
  if (cVar1 != *(char *)(param_2 + 0x228)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x228) == '\x01') {
        func_0x000104be1520();
        *(undefined1 *)(param_1 + 0x228) = 0;
      }
      return param_1;
    }
    FUN_108684540();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x000107c27cfc();
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    FUN_108725c1c(param_1 + 0x20,param_2 + 0x20);
    FUN_108725edc(param_1 + 0x40,param_2 + 0x40);
    func_0x000108725a64(param_1 + 0x60,param_2 + 0x60);
    func_0x000107c27cfc(param_1 + 0x78,param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    func_0x000107c27cfc(param_1 + 0xa0,param_2 + 0xa0);
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    func_0x000107c27c5c(param_1 + 200,param_2 + 200);
    func_0x000107c295bc(param_1 + 0xe8,param_2 + 0xe8);
    FUN_108726544(param_1 + 0x100,param_2 + 0x100);
    uVar3 = *(undefined8 *)(param_2 + 0x148);
    uVar2 = *(undefined8 *)(param_2 + 0x140);
    uVar5 = *(undefined8 *)(param_2 + 0x158);
    uVar4 = *(undefined8 *)(param_2 + 0x150);
    *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x148) = uVar3;
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x158) = uVar5;
    *(undefined8 *)(param_1 + 0x150) = uVar4;
    FUN_1087266f8(param_1 + 0x168,param_2 + 0x168);
    FUN_108726740(param_1 + 0x198,param_2 + 0x198);
    FUN_108726298(param_1 + 0x1c0,param_2 + 0x1c0);
    return param_1;
  }
  return param_1;
}


