/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087bdb48; end: 1087bdb97;  */

void FUN_1087bdb48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_SUB_110a71060;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
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
  return;
}



/* Entry: 1087bdb98; end: 1087bdc0f;  */

void FUN_1087bdb98(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110a71060;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  return;
}



/* Entry: 1087bdc10; end: 1087bdc47;  */

long FUN_1087bdc10(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a710c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087bdc48; end: 1087bdc53;  */

undefined ** FUN_1087bdc48(void)

{
  return &PTR_DAT_110a710c0;
}



/* Entry: 1087bdc54; end: 1087bdeab;  */

void FUN_1087bdc54(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x23;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  lVar10 = param_1;
  func_0x0001087be130();
  plVar6 = (long *)(lVar10 + 0x330);
  uStack_48 = extraout_x8;
  if ((*(byte *)(lVar10 + 0x350) & 1) == 0) {
    plVar4 = plVar6;
    FUN_10866b034(plVar6);
    FUN_10866e480(param_1 + 0x1f0,plVar4);
    unaff_x23 = (undefined8 *)(param_1 + 800);
    lVar9 = *(long *)(param_1 + 0x340);
    func_0x0001087be0f0();
    func_0x0001087be28c();
    plVar4 = *(long **)(lVar9 + 0x10);
    lVar9 = *(long *)(param_1 + 0x310);
    lStack_58 = *(long *)(param_1 + 0x318);
    if (lStack_58 != 0) {
      plVar7 = (long *)(lStack_58 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x348);
    ppuStack_68 = &PTR_SUB_110a71060;
    *unaff_x23 = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    pppuStack_50 = &ppuStack_68;
    lStack_60 = lVar9;
    func_0x0001087be2b8(*(undefined8 *)(*plVar4 + 0x30),plVar4,plVar7,param_1 + 0x20,&ppuStack_68);
    func_0x00010865f8f8(&ppuStack_68);
    puVar5 = unaff_x23;
    FUN_1087bdaa4();
    *(long *)(lVar10 + 0x338) = *(long *)(lVar9 + 8);
    do {
      func_0x0001087be084();
    } while (extraout_w10 != 0);
    *plVar6 = *(long *)(lVar10 + 0x338);
    do {
      func_0x0001087be084();
    } while (extraout_w10_00 != 0);
    func_0x0001087be31c(*plVar6);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x350) = 1;
      lVar10 = *plVar6;
      func_0x0001087be27c();
      unaff_x23 = (undefined8 *)*puVar5;
      if (unaff_x23 == (undefined8 *)0x0) {
        func_0x000107c3a5c0();
        unaff_x23 = (undefined8 *)*puVar5;
      }
      plVar4 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar4 == 0) {
          func_0x0001087be140();
          plVar4 = extraout_x8_01;
          uVar3 = extraout_w10_02;
          uVar8 = extraout_x11_00;
        }
        else {
          func_0x0001087be310();
          plVar4 = extraout_x8_00;
          uVar3 = extraout_w10_01;
          uVar8 = extraout_x11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x0001087be108();
          if ((bool)in_ZR) {
            func_0x0001087be0f8();
            func_0x0001087be0d8();
            func_0x0001087be0a0();
            *(undefined8 **)(lVar10 + 0x90) = puVar5;
          }
          func_0x0001087be1ac();
          *(undefined8 **)(extraout_x8_02 + 0x20) = unaff_x23;
          func_0x0001087be19c(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          goto LAB_1087bddcc;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
  }
  FUN_1087bce84();
  FUN_1087bce50(param_1 + 0x10);
  func_0x0001087be0f0();
  func_0x0001087be28c();
  func_0x0001087be1d8();
  func_0x0001087be228();
  func_0x0001087be208();
  func_0x0001087be218();
  func_0x0001087be230();
  plVar7 = plVar6;
  while( true ) {
    func_0x0001087be0e8();
    puVar5 = (undefined8 *)(param_1 + 0x2c8);
    func_0x000107c27914(puVar5);
    func_0x0001087be150();
LAB_1087bddcc:
    func_0x0001087be0bc(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)plVar7 != 0) goto LAB_1087bde30;
    do {
      __Unwind_Resume(puVar5);
LAB_1087bde30:
      func_0x000104bd46a0();
    } while ((int)plVar7 == 0);
    func_0x00010865f8f8(&ppuStack_68);
    FUN_1087bdaa4(unaff_x23);
    func_0x0001087be1d8();
    func_0x0001087be228();
    func_0x0001087be208();
    func_0x0001087be218();
    func_0x0001087be230();
    ___cxa_begin_catch(puVar5);
    func_0x0001087be238();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087bdeac; end: 1087bdf13;  */

void FUN_1087bdeac(long param_1)

{
  if (*(char *)(param_1 + 0x350) == '\x01') {
    func_0x000107c27f9c(param_1 + 0x330);
    func_0x000107c27f9c(param_1 + 0x338);
    func_0x0001087be1d8();
  }
  else {
    func_0x000107c27f9c(param_1 + 0x330);
    func_0x000107c27f9c(param_1 + 0x338);
  }
  func_0x0001087be228();
  func_0x0001087be208();
  func_0x0001087be218();
  func_0x0001087be230();
  func_0x0001087be0e8();
  func_0x000107c27914(param_1 + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087bdf14; end: 1087be03f;  */

void FUN_1087bdf14(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined1 auStack_98 [112];
  undefined8 uStack_28;
  
  lVar3 = param_1;
  func_0x0001087be130();
  uStack_28 = extraout_x8;
  func_0x000107c28834(lVar3 + 0x100);
  func_0x0001087be264();
  func_0x0001087be1e8();
  func_0x0001087be200();
  func_0x0001087be1e0();
  func_0x0001087be1f8();
  lVar3 = param_1 + 200;
  lVar4 = param_1 + 0x60;
  FUN_10879cb7c(lVar3,lVar4,param_1 + 0x130);
  bVar1 = 6 < (uint)lVar3;
  uVar2 = (uint)lVar3 == 7;
  if (((bool)uVar2) && (func_0x0001087be248(), !bVar1)) {
    func_0x0001087be118(*(undefined8 *)(*(long *)(param_1 + 0x120) + 0x30));
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  func_0x0001087be220();
  func_0x0001087be29c();
  FUN_1087a986c();
  func_0x0001087be2c4();
  func_0x0001087a3420(auStack_98);
  param_1 = param_1 + 0x20;
  func_0x0001087a33a8();
  func_0x0001087be210();
  func_0x0001087be308();
  while( true ) {
    func_0x0001087be0e8();
    func_0x0001087be150();
    func_0x0001087be0bc(uStack_28);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    if ((int)lVar4 == 0) break;
    func_0x0001087be220();
    func_0x0001087be210();
    func_0x0001087be308();
    ___cxa_begin_catch();
    func_0x0001087be238();
    ___cxa_end_catch();
  }
  __Unwind_Resume(param_1);
  func_0x000107c27f9c(param_1 + 0x100);
  func_0x0001087be1e8();
  func_0x0001087be200();
  func_0x0001087be1e0();
  func_0x0001087be1f8();
  func_0x0001087be220();
  func_0x0001087be210();
  func_0x0001087be308();
  func_0x0001087be0e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087be040; end: 1087be083;  */

void FUN_1087be040(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x100);
  func_0x0001087be1e8();
  func_0x0001087be200();
  func_0x0001087be1e0();
  func_0x0001087be1f8();
  func_0x0001087be220();
  func_0x0001087be210();
  func_0x0001087be308();
  func_0x0001087be0e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087be084; end: 1087be327;  */

void FUN_1087be084(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087be328; end: 1087be807;  */

void FUN_1087be328(undefined8 param_1,long param_2,undefined **param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  uint uVar14;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auStack_b8 [48];
  char cStack_88;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)0x290;
  ppuVar12 = param_3;
  __Znwm();
  *puVar8 = FUN_1087be968;
  puVar8[1] = FUN_1087beba4;
  puVar8[0x50] = param_3;
  puVar8[0x4f] = param_2;
  func_0x0001087a93b4(puVar8 + 2);
  ppuVar10 = (undefined **)(puVar8 + 2);
  FUN_1087a9334(param_1,ppuVar10);
  uVar6 = *(char *)(param_3 + 0x6f) == '\x01';
  if ((bool)uVar6) {
    FUN_1087bebe0(7);
    func_0x0001087bec68();
    goto LAB_1087be710;
  }
  FUN_108656428(puVar8 + 4,param_3 + 0x94);
  FUN_10877c1a4(puVar8 + 0x4b,param_3 + 0x1f);
  *(undefined1 *)(puVar8 + 0x36) = 0;
  *(undefined1 *)(puVar8 + 0x3c) = 0;
  *(undefined1 *)(puVar8 + 0x3d) = 0;
  *(undefined1 *)((long)puVar8 + 0x1ec) = 0;
  *(undefined1 *)(puVar8 + 0x3e) = 0;
  *(undefined1 *)((long)puVar8 + 500) = 0;
  *(undefined1 *)(puVar8 + 0x3f) = 0;
  puVar8[0x40] = 0;
  puVar8[0x42] = 0;
  puVar8[0x41] = 0;
  *(undefined2 *)(puVar8 + 0x43) = 0x100;
  *(undefined1 *)(puVar8 + 0x44) = 0;
  *(undefined1 *)(puVar8 + 0x45) = 0;
  FUN_108664290(auStack_b8,param_3 + 0x115);
  cVar3 = *(char *)(puVar8 + 0x3c);
  uVar6 = cVar3 == cStack_88;
  if ((bool)uVar6) {
    if (cVar3 != '\0') {
      FUN_1087be820(puVar8 + 0x36,auStack_b8);
    }
  }
  else if (cVar3 == '\0') {
    FUN_1086ac608(puVar8 + 0x36,auStack_b8);
  }
  else {
    FUN_10866434c(puVar8 + 0x36);
    *(undefined1 *)(puVar8 + 0x3c) = 0;
  }
  ppuVar17 = (undefined **)(puVar8 + 0x4e);
  FUN_10866432c(auStack_b8);
  *(undefined1 *)(puVar8 + 0x45) = *(undefined1 *)(param_3 + 0x114);
  puVar8[0x44] = param_3[0x113];
  *(undefined1 *)(puVar8 + 0x43) = *(undefined1 *)((long)param_3 + 0x894);
  ppuVar12 = (undefined **)(puVar8 + 4);
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))
            (ppuVar17,*(long **)(param_2 + 0x10),ppuVar12,puVar8 + 0x4b,puVar8 + 0x36);
  puVar8[0x1d] = *ppuVar17;
  plVar1 = (long *)(*ppuVar17 + 8);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0x1d] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x51) = 0;
    lVar16 = puVar8[0x1d];
    ppuVar10 = &PTR___tlv_bootstrap_11340e278;
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar18 = *ppuVar10;
    if (puVar18 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar18 = *ppuVar10;
    }
    plVar1 = (long *)(lVar16 + 0x10);
    do {
      lVar15 = *plVar1;
      if (lVar15 == 0) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar6 = cVar3 == '\0';
        if ((bool)uVar6) {
          ppuVar17 = *(undefined ***)(lVar16 + 0x90);
          bVar4 = *(byte *)((long)ppuVar17 + 1);
          uVar13 = (ulong)bVar4;
          uVar6 = 0;
          if (bVar4 == *(byte *)ppuVar17) {
            uVar14 = (uint)bVar4 << 1;
            uVar6 = bVar4 == 0x40;
            if (0x7f < uVar14) {
              uVar14 = 0x80;
            }
            ppuVar10 = (undefined **)(ulong)(uVar14 * 0x18 + 0x10);
            _malloc();
            uVar13 = 0;
            *(char *)ppuVar10 = (char)uVar14;
            *(undefined1 *)((long)ppuVar10 + 1) = 0;
            ppuVar10[1] = (undefined *)0x0;
            ppuVar17[1] = (undefined *)ppuVar10;
            *(undefined ***)(lVar16 + 0x90) = ppuVar10;
            ppuVar17 = ppuVar10;
          }
          ppuVar17[uVar13 * 3 + 2] = (undefined *)0x0;
          ppuVar17[uVar13 * 3 + 3] = (undefined *)puVar8;
          ppuVar17[uVar13 * 3 + 4] = puVar18;
          *(char *)(*(long *)(lVar16 + 0x90) + 1) = *(char *)(*(long *)(lVar16 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar16 + 0x10) = 0;
          goto LAB_1087be718;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  pbVar9 = (byte *)(puVar8 + 0x1d);
  FUN_1086c1de4();
  bVar4 = *pbVar9;
  func_0x0001087beca0();
  ppuVar10 = ppuVar17;
  func_0x000107c27f9c();
  if ((bVar4 & 1) == 0) {
    uVar19 = 0x700000007;
LAB_1087be564:
    FUN_1087bebe0(uVar19);
    func_0x0001087bec68();
  }
  else {
    if ((*(byte *)(puVar8 + 6) & 1) == 0) {
      uVar19 = 7;
      goto LAB_1087be564;
    }
    uVar7 = puVar8[0x40] == puVar8[0x41];
    if (!(bool)uVar7) {
      func_0x0001087bed48(puVar8[0x50]);
    }
    func_0x0001087bece4();
    func_0x0001087bed14(*(undefined8 *)(puVar8[0x50] + 0x500));
    func_0x0001087bed08(puVar8[0x50]);
    func_0x0001087bec78();
    uVar6 = 0;
    if ((bool)uVar7) {
      func_0x0001087bec08();
      ppuVar12 = ppuVar10;
      uVar13 = extraout_x8;
      if ((bool)uVar7) {
        func_0x0001087becc0();
        ppuVar12 = ppuVar10;
        uVar13 = extraout_x8_00;
      }
      if ((uVar13 & 1) != 0) {
        puVar11 = puVar8 + 4;
        FUN_108655060();
        func_0x0001086649e8();
        uVar13 = puVar11[1];
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        ppuVar12 = (undefined **)(puVar11 + 5);
        func_0x000107c30250(ppuVar12,uVar13);
        func_0x000107c27fa8();
      }
      func_0x0001087bec30();
      func_0x0001087bed3c();
      uVar14 = *(uint *)(puVar8 + 0x19);
      if (2 < uVar14) {
        uVar14 = 3;
      }
      func_0x0001087bed30(uVar14);
      uVar6 = *(char *)(puVar8 + 0x43) == '\0';
      FUN_108660fe8();
      ppuVar10 = (undefined **)(puVar8 + 0x46);
      func_0x000107c2884c(ppuVar10);
      func_0x0001087becfc(*(undefined8 *)(*ppuVar17 + 0x50));
      func_0x0001087becb0();
      func_0x0001087becdc();
    }
    func_0x0001087becf0(puVar8[0x50]);
    lVar16 = puVar8[0x50];
    uVar2 = *(undefined4 *)(puVar8 + 0x3d);
    *(undefined *)(lVar16 + 0x66c) = *(undefined *)((long)puVar8 + 0x1ec);
    *(undefined4 *)(lVar16 + 0x668) = uVar2;
    func_0x0001087bed60();
    func_0x0001087bed54();
    FUN_1087bebe0(7);
    func_0x0001087bec68();
    func_0x0001087bec98();
  }
  func_0x0001087bec70();
  func_0x0001087bec58();
  func_0x0001087bec60();
LAB_1087be710:
  while( true ) {
    func_0x0001087beca8();
    func_0x0001087bed20();
LAB_1087be718:
    func_0x0001087bed74(uStack_48);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    if ((int)ppuVar12 == 0) {
      do {
        __Unwind_Resume(ppuVar10);
        func_0x000104bd46a0();
      } while ((int)ppuVar12 == 0);
    }
    else {
      func_0x0001087becb0();
    }
    func_0x0001087becdc();
    func_0x0001087bec98();
    func_0x0001087bec70();
    func_0x0001087bec58();
    func_0x0001087bec60();
    ___cxa_begin_catch(ppuVar10);
    ppuVar10 = (undefined **)(puVar8 + 2);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087be808; end: 1087be80b;  */

undefined8 * FUN_1087be808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a710e0;
  func_0x000107c288a4(param_1 + 4);
  func_0x000107c29114(param_1 + 2);
  return param_1;
}



/* Entry: 1087be80c; end: 1087be81f;  */

void FUN_1087be80c(void)

{
  func_0x0001087be92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087be820; end: 1087be967;  */

long FUN_1087be820(long param_1,long param_2)

{
  func_0x000107c3194c();
  func_0x000107c3194c(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 1087be968; end: 1087beba3;  */

void FUN_1087be968(long param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar8;
  long *unaff_x21;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pbVar5 = (byte *)(param_1 + 0xe8);
  FUN_1086c1de4();
  bVar3 = *pbVar5;
  func_0x0001087beca0();
  func_0x0001087bed28();
  if ((bVar3 & 1) == 0) {
    uVar9 = 0x700000007;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uVar4 = *(long *)(param_1 + 0x200) == *(long *)(param_1 + 0x208);
      if (!(bool)uVar4) {
        func_0x0001087bed48(*(undefined8 *)(param_1 + 0x280));
      }
      func_0x0001087bece4();
      func_0x0001087bed14(*(undefined8 *)(*(long *)(param_1 + 0x280) + 0x500));
      func_0x0001087bed08(*(undefined8 *)(param_1 + 0x280));
      func_0x0001087bec78();
      in_ZR = 0;
      if ((bool)uVar4) {
        func_0x0001087bec08();
        param_2 = pbVar5;
        uVar6 = extraout_x8;
        if ((bool)uVar4) {
          func_0x0001087becc0();
          param_2 = pbVar5;
          uVar6 = extraout_x8_00;
        }
        if ((uVar6 & 1) != 0) {
          lVar8 = param_1 + 0x20;
          FUN_108655060();
          func_0x0001086649e8();
          uVar6 = *(ulong *)(lVar8 + 8);
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          param_2 = (byte *)(lVar8 + 0x28);
          func_0x000107c30250(param_2,uVar6);
          func_0x000107c27fa8();
        }
        func_0x0001087bec30();
        func_0x0001087bed3c();
        uVar1 = *(uint *)(param_1 + 200);
        if (2 < uVar1) {
          uVar1 = 3;
        }
        func_0x0001087bed30(uVar1);
        in_ZR = *(char *)(param_1 + 0x218) == '\0';
        FUN_108660fe8();
        pbVar5 = (byte *)(param_1 + 0x230);
        func_0x000107c2884c();
        func_0x0001087becfc(*(undefined8 *)(*unaff_x21 + 0x50));
        func_0x0001087becb0();
        func_0x0001087becdc();
      }
      func_0x0001087becf0(*(undefined8 *)(param_1 + 0x280));
      lVar8 = *(long *)(param_1 + 0x280);
      uVar2 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined1 *)(lVar8 + 0x66c) = *(undefined1 *)(param_1 + 0x1ec);
      *(undefined4 *)(lVar8 + 0x668) = uVar2;
      func_0x0001087bed60();
      func_0x0001087bed54();
      func_0x0001087bebe0(7);
      func_0x0001087bec68();
      func_0x0001087bec98();
      goto LAB_1087beae4;
    }
    uVar9 = 7;
  }
  func_0x0001087bebe0(uVar9);
  func_0x0001087bec68();
LAB_1087beae4:
  func_0x0001087bec70();
  func_0x0001087bec58();
  func_0x0001087bec60();
  while( true ) {
    func_0x0001087beca8();
    func_0x0001087bed20();
    func_0x0001087bed74(uVar7);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x0001087becb0();
    func_0x0001087becdc();
    func_0x0001087bec98();
    func_0x0001087bec70();
    func_0x0001087bec58();
    func_0x0001087bec60();
    ___cxa_begin_catch(pbVar5);
    pbVar5 = (byte *)(param_1 + 0x10);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  __Unwind_Resume(pbVar5);
  func_0x000107c27f9c(pbVar5 + 0xe8);
  func_0x0001087bed28();
  func_0x0001087bec70();
  func_0x0001087bec58();
  func_0x0001087bec60();
  func_0x0001087beca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pbVar5);
  return;
}



/* Entry: 1087beba4; end: 1087bebdf;  */

void FUN_1087beba4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xe8);
  func_0x0001087bed28();
  func_0x0001087bec70();
  func_0x0001087bec58();
  func_0x0001087bec60();
  func_0x0001087beca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087bebe0; end: 1087bed87;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087bebe0(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000048;
  undefined1 uStack0000000000000050;
  undefined1 uStack0000000000000054;
  undefined1 uStack0000000000000058;
  undefined1 uStack0000000000000070;
  
  uStack0000000000000010 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000070 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  uStack0000000000000008 = param_1;
  FUN_1087a94dc(*puVar5,puVar5,&stack0x00000008);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087bed88; end: 1087bee7b;  */

void FUN_1087bed88(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  puVar1 = param_1;
  func_0x000107c31338();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_3);
  func_0x00010bd3f128(&uStack_b0,3);
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x10))();
  uStack_48 = uStack_a0;
  auStack_80[0] = 6;
  uStack_78 = param_2 & 0xffffffff;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_50 = uStack_a8;
  uStack_58 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_38 = 0;
  plStack_40 = plVar2;
  func_0x00010bcc46f8(puVar1,auStack_80);
  func_0x00010786e114(auStack_80);
  func_0x0001087c1400();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  return;
}



/* Entry: 1087bee7c; end: 1087bef9b;  */

undefined8 *
FUN_1087bee7c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 6;
  *param_1 = &PTR_FUN_110a71120;
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  uVar2 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar2;
  *param_6 = 0;
  param_6[1] = 0;
  uVar2 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar2;
  *param_7 = 0;
  param_7[1] = 0;
  lVar1 = param_8[1];
  uVar2 = *param_8;
  param_1[0xf] = param_8[1];
  param_1[0xe] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10 != 0);
  }
  FUN_1087bc1b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1087bef9c; end: 1087bff5f;  */

void FUN_1087bef9c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined **ppuVar25;
  undefined ***extraout_x8;
  ulong uVar26;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar27;
  long lVar28;
  char cVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  undefined ***pppuVar34;
  long *plVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined8 uStack_130;
  ulong auStack_128 [2];
  undefined8 *puStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e0;
  undefined1 uStack_c8;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  ulong uStack_88;
  
  func_0x0001087c156c();
  puVar16 = (undefined8 *)0x5c8;
  __Znwm();
  *puVar16 = FUN_1087c0a10;
  puVar16[1] = FUN_1087c1280;
  plVar7 = puVar16 + 0x7a;
  puVar1 = puVar16 + 0x90;
  puVar2 = puVar16 + 0x97;
  puVar3 = puVar16 + 0xa9;
  puVar4 = puVar16 + 0xac;
  pppuVar34 = (undefined ***)(puVar16 + 0xaf);
  puVar16[0xb6] = param_3;
  puVar16[0xb5] = param_2;
  func_0x0001087a93b4(puVar16 + 2);
  FUN_1087a9334(param_1,puVar16 + 2);
  puVar16[0xab] = 0;
  puVar16[0xaa] = 0;
  *puVar3 = 0;
  lVar28 = *(long *)(param_3 + 0x98);
  lVar27 = *(long *)(param_3 + 0xa0);
  puVar5 = puVar16 + 0x7c;
  puVar17 = puVar16 + 0x7e;
  do {
    if (lVar28 == lVar27) break;
    func_0x0001087c14c0(*(undefined8 *)(param_2 + 0x30));
    FUN_108663a10(puVar2,&uStack_130);
    func_0x0001087c135c();
    bVar8 = *(byte *)(puVar16 + 0x9d);
    if ((bVar8 & 1) == 0) {
      uStack_130 = (undefined **)CONCAT44(uStack_130._4_4_,7);
      func_0x0001087c1460();
      func_0x0001087c158c();
      func_0x0001087c14f0();
      func_0x0001087c14e4();
LAB_1087bf180:
      func_0x000107c27f9c(&ppuStack_b8);
      func_0x000107c27914(auStack_128);
    }
    else {
      if (*(char *)((long)puVar16 + 0x4e4) == '\x01' && *(uint *)(puVar16 + 0x9c) < 2) {
        uStack_130 = (undefined **)CONCAT44(uStack_130._4_4_,7);
        func_0x0001087c1460();
        func_0x0001087c158c();
        func_0x0001087c14f0();
        func_0x0001087c14e4();
        goto LAB_1087bf180;
      }
      func_0x000107c29f64(puVar16 + 4,*(undefined8 *)(param_2 + 0x30),lVar28,0);
      if (*(char *)(puVar16 + 0x3e) == '\x01') {
        iVar15 = (int)param_3 + 0x20;
        func_0x0001087bb064();
        if (iVar15 != 0) {
          *(bool *)(param_3 + 0x894) = *(int *)(puVar16 + 0x25) == 1;
        }
      }
      func_0x000108656b70(puVar16 + 0x9e,puVar2);
      func_0x000107c28de4(puVar16 + 0x3f,puVar16 + 4);
      uVar23 = *(undefined4 *)(param_3 + 0xa10);
      cVar29 = *(char *)(puVar16 + 0x79);
      if ((cVar29 == '\x01') && ((*(byte *)(puVar16 + 0x6d) & 1) != 0)) {
        uStack_130 = (undefined **)CONCAT44(uStack_130._4_4_,7);
        func_0x0001087c139c(auStack_128);
        func_0x0001087c158c();
        func_0x0001087c14a0();
LAB_1087bf140:
        func_0x000107c27914(auStack_128);
      }
      else {
        cVar9 = *(char *)((long)puVar16 + 0x51c);
        iVar15 = *(int *)(puVar16 + 0xa3);
        if ((cVar9 == '\x01' && iVar15 != 0) && (cVar9 != '\x01' || iVar15 != 1)) {
          if (cVar29 == '\0') goto LAB_1087bf1dc;
LAB_1087bf1d0:
          cVar29 = '\0';
          if (iVar15 == 3) {
            cVar29 = cVar9;
          }
        }
        else {
          if (cVar29 != '\0') {
            if (puVar16[0x6a] == 0) goto LAB_1087bf1d0;
            uStack_130 = (undefined **)((ulong)uStack_130._4_4_ << 0x20);
            func_0x0001087c139c(auStack_128);
            func_0x0001087c158c();
            func_0x0001087c14a0();
            goto LAB_1087bf140;
          }
LAB_1087bf1dc:
          cVar29 = '\x01';
        }
        func_0x0001087c0428(&ppuStack_b8,1);
        puVar32 = puStack_a8;
        puStack_a8[1] = 0;
        puStack_a8[2] = 0;
        *puStack_a8 = &PTR_FUN_110a71160;
        func_0x0001087c139c(&uStack_130);
        FUN_1087c0490(puVar32 + 3,&uStack_130);
        func_0x000107c27914(&uStack_130);
        puVar36 = puStack_a8;
        puStack_a8 = (undefined8 *)0x0;
        puVar32 = puVar36 + 3;
        puVar16[0xac] = puVar32;
        puVar16[0xad] = puVar36;
        FUN_1087c0508(&ppuStack_b8);
        *(undefined1 *)(puVar16 + 0x90) = 0;
        *(undefined1 *)(puVar16 + 0x96) = 0;
        FUN_1087bcd9c(puVar1,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xac),uVar23)
        ;
        ppuStack_b8 = *(undefined ***)(param_2 + 0x20);
        lStack_b0 = *(long *)(param_2 + 0x28);
        if (lStack_b0 != 0) {
          plVar35 = (long *)(lStack_b0 + 8);
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar13) {
              *plVar35 = *plVar35 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          puVar36 = (undefined8 *)puVar16[0xad];
        }
        plVar35 = *(long **)(param_2 + 0x40);
        puVar16[0x7a] = puVar32;
        puVar16[0x7b] = puVar36;
        if (puVar36 != (undefined8 *)0x0) {
          plVar6 = puVar36 + 1;
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar13) {
              *plVar6 = *plVar6 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        puVar16[0x7c] = ppuStack_b8;
        puVar16[0x7d] = lStack_b0;
        if (lStack_b0 != 0) {
          do {
            func_0x0001087c12b8();
          } while (extraout_w10 != 0);
        }
        lVar31 = *(long *)(param_2 + 0x38);
        uVar22 = *(undefined8 *)(param_2 + 0x30);
        puVar16[0x7f] = *(undefined8 *)(param_2 + 0x38);
        *puVar17 = uVar22;
        if (lVar31 != 0) {
          do {
            func_0x0001087c12b8();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001087c139c(puVar16 + 0x80);
        lVar31 = *(long *)(param_2 + 0x58);
        puVar16[0x83] = *(undefined8 *)(param_2 + 0x50);
        puVar16[0x84] = lVar31;
        if (lVar31 != 0) {
          do {
            func_0x0001087c12b8();
          } while (extraout_w10_01 != 0);
        }
        lVar31 = *(long *)(param_2 + 0x68);
        puVar16[0x85] = *(undefined8 *)(param_2 + 0x60);
        puVar16[0x86] = lVar31;
        if (lVar31 != 0) {
          do {
            func_0x0001087c12b8();
          } while (extraout_w10_02 != 0);
        }
        *(char *)(puVar16 + 0x87) = cVar29;
        puStack_118 = (undefined8 *)0x0;
        puVar32 = (undefined8 *)0x78;
        __Znwm();
        *puVar32 = &PTR_SUB_110a711b0;
        lVar31 = *plVar7;
        puVar32[2] = puVar16[0x7b];
        puVar32[1] = lVar31;
        *plVar7 = 0;
        puVar16[0x7b] = 0;
        uVar22 = *puVar5;
        puVar32[4] = puVar16[0x7d];
        puVar32[3] = uVar22;
        *puVar5 = 0;
        puVar16[0x7d] = 0;
        uVar22 = *puVar17;
        puVar32[6] = puVar16[0x7f];
        puVar32[5] = uVar22;
        *puVar17 = 0;
        puVar16[0x7f] = 0;
        func_0x000107c27994(puVar32 + 7,puVar16 + 0x80);
        uVar37 = puVar16[0x84];
        uVar22 = puVar16[0x83];
        uVar39 = puVar16[0x86];
        uVar38 = puVar16[0x85];
        puVar16[0x83] = 0;
        puVar16[0x84] = 0;
        puVar32[0xb] = uVar37;
        puVar32[10] = uVar22;
        puVar32[0xd] = uVar39;
        puVar32[0xc] = uVar38;
        puVar16[0x85] = 0;
        puVar16[0x86] = 0;
        *(undefined1 *)(puVar32 + 0xe) = *(undefined1 *)(puVar16 + 0x87);
        puStack_118 = puVar32;
        (**(code **)(*plVar35 + 0x18))(plVar35,0x120099,puVar16 + 0x9e,&uStack_130,puVar1);
        FUN_1086d1cac(&uStack_130);
        FUN_1087c011c(plVar7);
        ppuVar25 = *(undefined ***)*puVar4;
        *pppuVar34 = ppuVar25;
        if (ppuVar25 != (undefined **)0x0) {
          ppuVar25 = ppuVar25 + 1;
          do {
            cVar29 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
            if (bVar13) {
              *ppuVar25 = *ppuVar25 + 4;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
        }
        func_0x000107c28800(&ppuStack_b8);
        func_0x00010086ab34(puVar1);
        FUN_1087c0518(puVar4);
      }
      FUN_1087bc634(puVar3,pppuVar34);
      func_0x000107c27f9c(pppuVar34);
      func_0x000107c288c8(puVar16 + 0x3f);
      func_0x000107c27914(puVar16 + 0x9e);
      func_0x000107c288c8(puVar16 + 4);
    }
    FUN_1086569a0(puVar2);
    lVar28 = lVar28 + 0x18;
  } while ((bVar8 & 1) != 0);
  *puVar2 = 0;
  puVar16[0x98] = 0;
  puVar16[0x99] = 0;
  *(undefined1 *)(puVar16 + 0xb7) = 0;
  *(undefined1 *)((long)puVar16 + 0x5bc) = 0;
  puVar17 = (undefined8 *)puVar16[0xa9];
  if (puVar17 == (undefined8 *)puVar16[0xaa]) {
    lVar28 = 0;
    lVar27 = 0;
    puVar32 = (undefined8 *)0x0;
  }
  else {
    FUN_1087bcc74(puVar16 + 4);
    *plVar7 = puVar16[4];
    plVar35 = (long *)(puVar16[4] + 8);
    do {
      cVar29 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar13) {
        *plVar35 = *plVar35 + 4;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar16 + 0xb8) = 0;
      lVar28 = puVar16[0x7a];
      ppuVar25 = &PTR___tlv_bootstrap_11340e278;
      (*(code *)PTR___tlv_bootstrap_11340e278)();
      puVar30 = *ppuVar25;
      if (puVar30 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar30 = *ppuVar25;
      }
      plVar35 = (long *)(lVar28 + 0x10);
      do {
        lVar27 = *plVar35;
        if (lVar27 == 0) {
          cVar29 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar13) {
            *plVar35 = 1;
            cVar29 = ExclusiveMonitorsStatus();
          }
          if (cVar29 == '\0') {
            pbVar33 = *(byte **)(lVar28 + 0x90);
            bVar8 = pbVar33[1];
            uVar26 = (ulong)bVar8;
            uVar14 = 0;
            pbVar20 = pbVar33;
            if (bVar8 == *pbVar33) {
              uVar24 = (uint)bVar8 << 1;
              uVar14 = bVar8 == 0x40;
              if (0x7f < uVar24) {
                uVar24 = 0x80;
              }
              pbVar20 = (byte *)(ulong)(uVar24 * 0x18 + 0x10);
              _malloc();
              uVar26 = 0;
              *pbVar20 = (byte)uVar24;
              pbVar20[1] = 0;
              pbVar20[8] = 0;
              pbVar20[9] = 0;
              pbVar20[10] = 0;
              pbVar20[0xb] = 0;
              pbVar20[0xc] = 0;
              pbVar20[0xd] = 0;
              pbVar20[0xe] = 0;
              pbVar20[0xf] = 0;
              *(byte **)(pbVar33 + 8) = pbVar20;
              *(byte **)(lVar28 + 0x90) = pbVar20;
            }
            pbVar33 = pbVar20 + uVar26 * 0x18 + 0x10;
            pbVar33[0] = 0;
            pbVar33[1] = 0;
            pbVar33[2] = 0;
            pbVar33[3] = 0;
            pbVar33[4] = 0;
            pbVar33[5] = 0;
            pbVar33[6] = 0;
            pbVar33[7] = 0;
            *(undefined8 **)(pbVar20 + uVar26 * 0x18 + 0x18) = puVar16;
            *(undefined **)(pbVar20 + uVar26 * 0x18 + 0x20) = puVar30;
            *(char *)(*(long *)(lVar28 + 0x90) + 1) =
                 *(char *)(*(long *)(lVar28 + 0x90) + 1) + '\x01';
            *(undefined8 *)(lVar28 + 0x10) = 0;
            goto LAB_1087bfbd4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar27 >> 1 & 1) == 0);
    }
    func_0x000107c28834(plVar7);
    func_0x000107c27f9c(plVar7);
    puVar32 = puVar3;
    FUN_10879cb7c(puVar3,puVar2,puVar16 + 0xb7);
    puVar17 = puVar32;
    func_0x0001087c1394();
    lVar27 = puVar16[0x98];
    lVar28 = puVar16[0x97];
  }
  func_0x0001087c1418(puVar16[0xb6]);
  puVar36 = (undefined8 *)((lVar27 - lVar28) / 0x18);
  bVar13 = (int)puVar32 != 7;
  uVar12 = bVar13 || puVar17 <= puVar36;
  uVar14 = !bVar13 && puVar36 == puVar17;
  if (bVar13 || puVar17 <= puVar36) {
    if ((int)puVar32 != 0) {
LAB_1087bfba8:
      func_0x0001087c1328();
      func_0x0001087c131c();
      func_0x0001087c13cc();
      FUN_1087a33a8(puVar16 + 0x88);
      goto LAB_1087bfbbc;
    }
  }
  else {
    func_0x0001087c12f8();
    func_0x0001087c1378();
    FUN_10879cd1c();
    *(undefined1 *)((long)puVar16 + 0x5bc) = 0;
  }
  puVar16[0xad] = 0;
  puVar16[0xae] = 0;
  *puVar4 = 0;
  func_0x0001087c1418(puVar16[0xb6]);
  func_0x0001087c13dc();
  if ((bool)uVar12 && !(bool)uVar14) {
    func_0x0001087c1530();
    if ((bool)uVar12) goto LAB_1087bfc04;
    func_0x0001087c151c();
    func_0x0001087c1494();
    FUN_1086ec338(puVar4,&uStack_130);
    func_0x0001087c13c4();
  }
  puVar16[0x91] = 0;
  *puVar1 = 0;
  puVar16[0x93] = 0;
  puVar16[0x92] = 0;
  *(undefined4 *)(puVar16 + 0x94) = 0x3f800000;
  func_0x0001087c12e4(puVar16[0xb6]);
  func_0x000100869d24(puVar1);
  puVar16[0xb0] = 0;
  puVar16[0xb1] = 0;
  *pppuVar34 = (undefined **)0x0;
  func_0x0001087c12e4(puVar16[0xb6]);
  pppuVar18 = pppuVar34;
  func_0x000107c27ab0();
  lVar31 = puVar16[0xb6];
  lVar27 = *(long *)(lVar31 + 0xa0);
  for (lVar28 = *(long *)(lVar31 + 0x98); lVar28 != lVar27; lVar28 = lVar28 + 0x18) {
    ppuStack_160 = &PTR_FUN_110a90cd0;
    uStack_158 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    FUN_10885edd8(&uStack_130,*(undefined8 *)(puVar16[0xb5] + 0x30),lVar28);
    FUN_108663a10(&ppuStack_b8,&uStack_130);
    uVar26 = uStack_88;
    FUN_1086569a0(&ppuStack_b8);
    func_0x0001087c135c();
    if ((uVar26 & 1) == 0) {
      func_0x000107c28840(pppuVar34,lVar28);
    }
    else {
      func_0x0001087c14b4();
      FUN_1086cf28c(&ppuStack_160);
      FUN_1086c1dc8();
      func_0x0001087c1430();
      func_0x0001087c1348();
      FUN_1087bff60(puVar4,&ppuStack_160);
      lVar19 = *(long *)(lVar31 + 0x6b0);
      FUN_1086a47ac(lVar19,*(undefined8 *)(lVar31 + 0x6b8),lVar28);
      if (*(long *)(lVar31 + 0x6b8) != lVar19) {
        FUN_10867cba4(lVar31 + 0x6b0);
      }
      FUN_108699d34(puVar1,lVar28);
    }
    pppuVar18 = &ppuStack_160;
    func_0x000107c2a484();
  }
  lVar28 = puVar16[0xaf];
  lVar27 = puVar16[0xb0];
  if (lVar28 != lVar27) {
    for (; lVar28 != lVar27; lVar28 = lVar28 + 0x18) {
      pppuVar34 = *(undefined ****)(puVar16[0xb5] + 0x50);
      auStack_128[0] = 0;
      auStack_128[1] = 0;
      puStack_118 = (undefined8 *)0x0;
      uStack_130 = &PTR_FUN_110a609a8;
      uStack_110 = CONCAT44(uStack_110._4_4_,0x1a7);
      func_0x0001087c13a4();
      func_0x000107c278b8(puVar16 + 0xb2,&UNK_10f4bb617);
      func_0x000107c28818(pppuVar18,puVar16 + 0xb2,0);
      func_0x000107c2884c(puVar16 + 0xa4,pppuVar18);
      (*(code *)(*pppuVar34)[10])(pppuVar34,puVar16 + 0xa4);
      func_0x0001087c1420();
      func_0x0001087c1428();
      func_0x0001087c13bc();
      pppuVar18 = pppuVar34;
    }
    pppuVar18 = (undefined ***)(puVar16[0xb6] + 0x20);
    func_0x0001087c1580();
    func_0x0001087bb020();
    func_0x0001087c1438();
    if (extraout_x8 < pppuVar18) {
      func_0x0001087c12f8();
      func_0x0001087c1378();
      FUN_10879cd1c();
    }
  }
  lVar28 = *(long *)(puVar16[0xb6] + 0xb0);
  lVar27 = *(long *)(puVar16[0xb6] + 0xb8);
LAB_1087bf810:
  if (lVar28 != lVar27) goto code_r0x0001087bf818;
  lVar27 = *(long *)(puVar16[0xb6] + 0xd0);
  for (lVar28 = *(long *)(puVar16[0xb6] + 200); lVar28 != lVar27; lVar28 = lVar28 + 0x18) {
    uStack_130 = &PTR_FUN_110a90cd0;
    auStack_128[0] = 0;
    uStack_108 = 0;
    auStack_128[1] = 0;
    puStack_118 = (undefined8 *)0x0;
    func_0x000107c2a47c(&uStack_130);
    uStack_108 = 3;
    uVar26 = auStack_128[0];
    if ((auStack_128[0] & 1) != 0) {
      func_0x0001087c1388();
    }
    func_0x0001087c02d4();
    uVar21 = *(ulong *)(uVar26 + 8);
    if ((uVar21 & 1) != 0) {
      uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
    }
    pppuVar18 = (undefined ***)(uVar26 + 0x10);
    uStack_110 = uVar26;
    func_0x000107c30250(pppuVar18,uVar21);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x0001087c146c();
    func_0x0001087c13d4();
  }
  lVar27 = *(long *)(puVar16[0xb6] + 0xe8);
  for (lVar28 = *(long *)(puVar16[0xb6] + 0xe0); lVar28 != lVar27; lVar28 = lVar28 + 4) {
    uStack_130 = &PTR_FUN_110a90cd0;
    auStack_128[0] = 0;
    uStack_108 = 0;
    auStack_128[1] = 0;
    puStack_118 = (undefined8 *)0x0;
    func_0x0001087c13b4();
    pppuVar34 = pppuVar18;
    func_0x0001087c1558();
    if (pppuVar34 == (undefined ***)0x0) {
      pppuVar34 = (undefined ***)pppuVar18[1];
      if (((ulong)pppuVar34 & 1) != 0) {
        func_0x0001087c1388();
      }
      func_0x000107c287e0();
      pppuVar18[3] = (undefined **)pppuVar34;
    }
    func_0x0001088bf408();
    func_0x0001087c13b4();
    *(undefined4 *)(pppuVar34 + 4) = 1;
    func_0x0001087c146c();
    func_0x0001087c13d4();
    pppuVar18 = pppuVar34;
  }
  func_0x0001087c1580(puVar16[0xb6] + 0xf8,puVar4);
  func_0x0001087be884();
  lVar28 = puVar16[0xb6];
  plVar7 = (long *)(lVar28 + 0x680);
  uVar14 = *(char *)(lVar28 + 0x6a8) == '\x01';
  if ((bool)uVar14) {
    func_0x000100864adc(plVar7);
    uVar22 = puVar16[0x90];
    puVar16[0x90] = 0;
    FUN_10869a078(plVar7,uVar22);
    uVar26 = puVar16[0x91];
    *(ulong *)(lVar28 + 0x688) = uVar26;
    puVar16[0x91] = 0;
    lVar27 = puVar16[0x93];
    *(long *)(lVar28 + 0x698) = lVar27;
    *(undefined4 *)(lVar28 + 0x6a0) = *(undefined4 *)(puVar16 + 0x94);
    lVar31 = puVar16[0x92];
    *(long *)(lVar28 + 0x690) = lVar31;
    if (lVar27 != 0) {
      uVar21 = *(ulong *)(lVar31 + 8);
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar21 = uVar21 & uVar26 - 1;
        uVar14 = true;
      }
      else {
        uVar14 = uVar21 == uVar26;
        if (uVar26 <= uVar21) {
          uVar10 = 0;
          if (uVar26 != 0) {
            uVar10 = uVar21 / uVar26;
          }
          uVar21 = uVar21 - uVar10 * uVar26;
        }
      }
      *(long *)(*plVar7 + uVar21 * 8) = lVar28 + 0x690;
      puVar16[0x92] = 0;
      puVar16[0x93] = 0;
    }
  }
  else {
    FUN_1086ac45c(plVar7,&PTR_PTR_11326cb58);
  }
  func_0x0001087c14fc();
  func_0x000100864b68(&PTR_PTR_11326cb58);
  func_0x0001087c1474();
  goto LAB_1087bfba8;
code_r0x0001087bf818:
  puVar16[4] = &PTR_FUN_110a90cd0;
  puVar16[5] = 0;
  func_0x0001087c1544();
  puVar16[0x7d] = 0;
  puVar16[0x7e] = 0;
  *puVar5 = 0;
  *(undefined4 *)(puVar16 + 0x7f) = 0;
  func_0x0001087c14b4();
  FUN_1087c0034(plVar7);
  func_0x0001087c1430();
  func_0x0001087c1348();
  uVar24 = *(uint *)(lVar28 + 0x30);
  uVar14 = uVar24 == 0xc;
  if (uVar24 < 0xd) {
    uVar23 = *(undefined4 *)(&UNK_10df57a04 + (ulong)uVar24 * 4);
  }
  else {
    uVar23 = 0;
  }
  *(undefined4 *)(puVar16 + 0x7f) = uVar23;
  ppuStack_b8 = &PTR_DAT_110d137d0;
  lStack_b0 = 0;
  puStack_a8 = (undefined8 *)&DAT_11383d918;
  puStack_a0 = &DAT_11383d918;
  uStack_88 = 0;
  uStack_98 = 0;
  pppuVar34 = &ppuStack_b8;
  func_0x000107c3034c(pppuVar34,*(undefined8 *)(lVar28 + 0x18),
                      *(int *)(lVar28 + 0x20) - (int)*(undefined8 *)(lVar28 + 0x18));
  if (((ulong)pppuVar34 & 1) == 0) {
    uStack_130 = (undefined **)(*(long *)(lVar28 + 0x20) - *(long *)(lVar28 + 0x18));
    auStack_128[0] = 0;
    func_0x0001087c1488();
    func_0x0001087c147c(&ppuStack_160);
    FUN_1087bed88(puVar16[0xb5] + 0x20,0xb,&ppuStack_160);
    uStack_130 = (undefined **)0x700000006;
    auStack_128[0] = auStack_128[0] & 0xffffffffffffff00;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    func_0x0001087c131c();
    func_0x0001087c13cc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_160);
  }
  else {
    func_0x0001087c0044(plVar7);
    FUN_1087c0054();
    func_0x0001087c0238(puVar16 + 4);
    FUN_1087c00b8();
    func_0x0001087c146c();
  }
  func_0x00010b59e378(&ppuStack_b8);
  FUN_108907ff0(plVar7);
  pppuVar18 = (undefined ***)(puVar16 + 4);
  func_0x000107c2a484();
  lVar28 = lVar28 + 0x58;
  if (((ulong)pppuVar34 & 1) == 0) goto code_r0x0001087bf934;
  goto LAB_1087bf810;
code_r0x0001087bf934:
  func_0x0001087c14fc();
  func_0x000100864b68(puVar1);
  func_0x0001087c1474();
LAB_1087bfbbc:
  func_0x000107c27a04(puVar2);
  func_0x0001087bd248(puVar3);
  func_0x0001087c13f8();
  func_0x0001087c1410();
LAB_1087bfbd4:
  func_0x0001087c1448();
  if ((bool)uVar14) {
    return;
  }
  ___stack_chk_fail();
LAB_1087bfc04:
  FUN_1086cf354();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1087bfc0c);
  (*pcVar11)();
}



/* Entry: 1087bff60; end: 1087c0033;  */

void FUN_1087bff60(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_1086ec4ec(uVar1,param_2);
    lVar3 = uVar1 + 0x30;
    param_1[1] = lVar3;
  }
  else {
    plVar2 = param_1;
    func_0x0001086ec2e8(param_1,(long)(uVar1 - *param_1) / 0x30 + 1);
    FUN_1086ec3c4(auStack_58,plVar2,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    FUN_1086ec4ec(lStack_48,param_2);
    lStack_48 = lStack_48 + 0x30;
    FUN_1086ec338(param_1,auStack_58);
    lVar3 = param_1[1];
    FUN_1086ec598(auStack_58);
  }
  param_1[1] = lVar3;
  return;
}



/* Entry: 1087c0034; end: 1087c0053;  */

void FUN_1087c0034(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087c1388();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1087c0054; end: 1087c00b7;  */

long FUN_1087c0054(long param_1,long param_2)

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
      func_0x00010b59ec5c(param_1);
    }
    else {
      func_0x00010b59ec28(param_1);
    }
  }
  return param_1;
}



/* Entry: 1087c00b8; end: 1087c011b;  */

long FUN_1087c00b8(long param_1,long param_2)

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
      FUN_108908240(param_1);
    }
    else {
      FUN_10890820c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1087c011c; end: 1087c0163;  */

long FUN_1087c011c(long param_1)

{
  func_0x000107c28ab8(param_1 + 0x58);
  func_0x000107c288a4(param_1 + 0x48);
  func_0x000107c27914(param_1 + 0x30);
  func_0x000107c28808(param_1 + 0x20);
  func_0x000107c28800(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087c0164; end: 1087c0167;  */

undefined8 * FUN_1087c0164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71120;
  func_0x000107c30608(param_1 + 0x10);
  func_0x000107c289fc(param_1 + 0xe);
  func_0x000107c28ab8(param_1 + 0xc);
  func_0x000107c288a4(param_1 + 10);
  func_0x000107c28abc(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087c0168; end: 1087c017b;  */

void FUN_1087c0168(void)

{
  func_0x0001087c03bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c017c; end: 1087c044f;  */

void FUN_1087c017c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087c1388();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1087c0450; end: 1087c046b;  */

void FUN_1087c0450(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a71160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c046c; end: 1087c046f;  */

void FUN_1087c046c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c0470; end: 1087c0483;  */

void FUN_1087c0470(void)

{
  FUN_1087c04cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c0484; end: 1087c048f;  */

undefined8 * FUN_1087c0484(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c27914(param_1 + 0x28);
  func_0x0001087be2fc(param_1 + 0x18);
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,unaff_x19);
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
  return unaff_x19;
}



/* Entry: 1087c0490; end: 1087c04cb;  */

void FUN_1087c0490(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1087bd5d8();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1087c04cc; end: 1087c04df;  */

void FUN_1087c04cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c04e0; end: 1087c0507;  */

undefined8 * FUN_1087c04e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c27914(param_1 + 0x10);
  func_0x0001087be2fc(param_1);
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,unaff_x19);
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
  return unaff_x19;
}



/* Entry: 1087c0508; end: 1087c0517;  */

void FUN_1087c0508(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087c0518; end: 1087c056b;  */

long FUN_1087c0518(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087c056c; end: 1087c057f;  */

void FUN_1087c056c(void)

{
  func_0x0001087c0540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c0580; end: 1087c05bf;  */

undefined8 FUN_1087c0580(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm(0x78);
  FUN_1087c0904();
  return uVar1;
}



/* Entry: 1087c05c0; end: 1087c05eb;  */

undefined8 * FUN_1087c05c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110a711b0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c27994(param_2 + 7,param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  param_2[0xd] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_03 != 0);
  }
  *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0x70);
  return param_2;
}



/* Entry: 1087c05ec; end: 1087c08bf;  */

void FUN_1087c05ec(long param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_a8 [40];
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  undefined1 uStack_54;
  uint *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_2 + 0x18;
  FUN_1086d5eb4();
  uVar4 = (uint)uVar1;
  uStack_7c = CONCAT31(uStack_7c._1_3_,(char)(uVar1 >> 0x20));
  uStack_80 = uVar4;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if ((uVar1 >> 0x20 & 1) == 0) {
      plVar6 = *(long **)(param_1 + 0x50);
      func_0x0001087c1364(&UNK_110a60998);
      FUN_108659af8(auStack_78,0x30011);
      func_0x0001087c12c8();
      func_0x0001087c130c();
      func_0x0001087c14dc();
      func_0x0001087c1350(*(undefined8 *)(*plVar6 + 0x50));
    }
    else {
      plVar6 = *(long **)(param_1 + 0x50);
      if (uVar4 == 7) {
        func_0x0001087c1364(&UNK_110a60998);
        FUN_108659af8(auStack_78,0x30012);
        func_0x0001087c12c8();
        func_0x0001087c130c();
        func_0x0001087c14dc();
        func_0x0001087c1350(*(undefined8 *)(*plVar6 + 0x50));
      }
      else {
        func_0x0001087c1364(&UNK_110a60998);
        uVar8 = 0x30012;
        if (uVar4 == 1) {
          uVar8 = 0x30013;
        }
        FUN_108659af8(auStack_78,uVar8);
        func_0x0001087c12c8();
        func_0x0001087c130c();
        func_0x0001087c14dc();
        func_0x0001087c1350(*(undefined8 *)(*plVar6 + 0x50));
      }
    }
    func_0x000107c2882c(auStack_a8);
    func_0x0001087c1400();
    func_0x000107c2882c(auStack_78);
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((uVar1 >> 0x20 & 1) == 0) {
    uVar8 = 0;
    uVar3 = 0x100000002;
    if ((CONCAT44(uStack_7c,uStack_80) & 0x1ffffffff) != 0x100000001) {
      uVar3 = 0;
    }
  }
  else {
    if (uVar4 < 0xd) {
      uVar8 = *(undefined4 *)(&UNK_10df579d0 + (uVar1 & 0xf) * 4);
    }
    else {
      uVar8 = 7;
    }
    if ((CONCAT44(uStack_7c,uStack_80) & 0x1ffffffff) == 0x100000001) {
      uVar3 = 0x100000002;
    }
    else {
      uVar5 = 2;
      uVar3 = 0;
      switch(uStack_80) {
      case 0:
      case 2:
      case 3:
      case 5:
      case 6:
        goto LAB_1087c0818;
      case 4:
        uVar5 = 3;
        break;
      case 7:
        uVar5 = 6;
        break;
      case 8:
        uVar5 = 7;
        break;
      case 9:
        uVar5 = 8;
        break;
      case 10:
        uVar5 = 9;
        break;
      case 0xb:
        uVar5 = 10;
        break;
      case 0xc:
        uVar5 = 1;
      }
      puVar2 = &uStack_80;
      FUN_108843ae8();
      uStack_48 = 0;
      puStack_50 = puVar2;
      func_0x000107c2793c(&UNK_10f4bb5cc);
      func_0x000107c3173c(auStack_78);
      FUN_1087bed88(param_1 + 0x18,uVar5,auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      uVar3 = 0;
    }
  }
LAB_1087c0818:
  auStack_78[0] = uVar8;
  func_0x000107c27994(auStack_70,lVar7 + 0x10);
  uStack_54 = (undefined1)((ulong)uVar3 >> 0x20);
  uStack_58 = (undefined4)uVar3;
  FUN_1087bd9bc(lVar7 + 8,auStack_78);
  func_0x0001087c14d4();
  return;
}



/* Entry: 1087c08c0; end: 1087c08f7;  */

long FUN_1087c08c0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a71210);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087c08f8; end: 1087c0903;  */

undefined ** FUN_1087c08f8(void)

{
  return &PTR_DAT_110a71210;
}



/* Entry: 1087c0904; end: 1087c0a0f;  */

undefined8 * FUN_1087c0904(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_110a711b0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[5];
  uVar2 = param_2[4];
  param_1[6] = param_2[5];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c27994(param_1 + 7,param_2 + 6);
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[0xb] = param_2[10];
  param_1[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_2[0xc];
  uVar2 = param_2[0xb];
  param_1[0xd] = param_2[0xc];
  param_1[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1087c12b8();
    } while (extraout_w10_03 != 0);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 1087c0a10; end: 1087c127f;  */

void FUN_1087c0a10(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long alStack_158 [5];
  undefined4 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_88;
  
  lVar17 = param_1;
  func_0x0001087c156c();
  func_0x000107c28834(lVar17 + 0x3d0);
  func_0x000107c27f9c(param_1 + 0x3d0);
  uVar16 = param_1 + 0x548;
  FUN_10879cb7c(uVar16,param_1 + 0x4b8,param_1 + 0x5b8);
  uVar13 = uVar16;
  func_0x0001087c1394();
  func_0x0001087c1418(*(undefined8 *)(param_1 + 0x5b0));
  func_0x0001087c1438();
  bVar8 = (int)uVar16 != 7;
  uVar7 = bVar8 || uVar13 <= extraout_x8;
  uVar9 = !bVar8 && extraout_x8 == uVar13;
  if (bVar8 || uVar13 <= extraout_x8) {
    if ((int)uVar16 != 0) {
LAB_1087c1070:
      func_0x0001087c1328();
      func_0x0001087c131c();
      func_0x0001087c13cc();
      FUN_1087a33a8(param_1 + 0x440);
      goto LAB_1087c1084;
    }
  }
  else {
    func_0x0001087c12f8();
    func_0x0001087c1378();
    FUN_10879cd1c();
    *(undefined1 *)(param_1 + 0x5bc) = 0;
  }
  plVar1 = (long *)(param_1 + 0x560);
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *plVar1 = 0;
  func_0x0001087c1418(*(undefined8 *)(param_1 + 0x5b0));
  func_0x0001087c13dc();
  if ((bool)uVar7 && !(bool)uVar9) {
    func_0x0001087c1530();
    if ((bool)uVar7) goto LAB_1087c10c4;
    func_0x0001087c151c();
    func_0x0001087c1494();
    FUN_1086ec338(plVar1,&ppuStack_f0);
    func_0x0001087c13c4();
  }
  puVar2 = (undefined8 *)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x488) = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0x3f800000;
  func_0x0001087c12e4(*(undefined8 *)(param_1 + 0x5b0));
  func_0x000100869d24(puVar2);
  plVar3 = (long *)(param_1 + 0x578);
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *plVar3 = 0;
  func_0x0001087c12e4(*(undefined8 *)(param_1 + 0x5b0));
  plVar10 = plVar3;
  func_0x000107c27ab0();
  lVar18 = *(long *)(param_1 + 0x5b0);
  lVar17 = *(long *)(lVar18 + 0x98);
  lVar19 = *(long *)(lVar18 + 0xa0);
  func_0x0001087c1504();
  for (; lVar17 != lVar19; lVar17 = lVar17 + 0x18) {
    alStack_158[1] = 0;
    uStack_130 = 0;
    alStack_158[2] = 0;
    alStack_158[3] = 0;
    alStack_158[0] = extraout_x8_00 + 0x10;
    func_0x0001087c14c0(*(undefined8 *)(*(long *)(param_1 + 0x5a8) + 0x30));
    FUN_108663a10(&ppuStack_128,&ppuStack_f0);
    uVar16 = uStack_f8;
    FUN_1086569a0(&ppuStack_128);
    func_0x0001087c135c();
    if ((uVar16 & 1) == 0) {
      func_0x000107c28840(plVar3,lVar17);
    }
    else {
      func_0x000107c29ee4(&ppuStack_f0,lVar17);
      FUN_1086cf28c(alStack_158);
      FUN_1086c1dc8();
      func_0x0001087c1430();
      func_0x0001087c1348();
      FUN_1087bff60(plVar1,alStack_158);
      lVar11 = *(long *)(lVar18 + 0x6b0);
      FUN_1086a47ac(lVar11,*(undefined8 *)(lVar18 + 0x6b8),lVar17);
      if (*(long *)(lVar18 + 0x6b8) != lVar11) {
        FUN_10867cba4(lVar18 + 0x6b0);
      }
      FUN_108699d34(puVar2,lVar17);
    }
    plVar10 = alStack_158;
    func_0x000107c2a484();
  }
  lVar17 = *(long *)(param_1 + 0x578);
  lVar19 = *(long *)(param_1 + 0x580);
  if (lVar17 != lVar19) {
    for (; lVar17 != lVar19; lVar17 = lVar17 + 0x18) {
      plVar20 = *(long **)(*(long *)(param_1 + 0x5a8) + 0x50);
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      ppuStack_f0 = &PTR_FUN_110a609a8;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,0x1a7);
      func_0x0001087c13a4();
      func_0x000107c278b8(param_1 + 0x590,&UNK_10f4bb617);
      func_0x000107c28818(plVar10,param_1 + 0x590,0);
      func_0x000107c2884c(param_1 + 0x520,plVar10);
      (**(code **)(*plVar20 + 0x50))(plVar20,param_1 + 0x520);
      func_0x0001087c1420();
      func_0x0001087c1428();
      func_0x0001087c13bc();
      plVar10 = plVar20;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x5b0) + 0x20);
    FUN_1087bb020();
    func_0x0001087c1438();
    if (extraout_x8_01 < plVar10) {
      func_0x0001087c12f8();
      func_0x0001087c1378();
      FUN_10879cd1c();
    }
  }
  lVar17 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xb0);
  lVar19 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xb8);
  func_0x0001087c1504();
LAB_1087c0d30:
  if (lVar17 != lVar19) goto code_r0x0001087c0d38;
  lVar17 = *(long *)(*(long *)(param_1 + 0x5b0) + 200);
  lVar19 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xd0);
  func_0x0001087c1504();
  for (; lVar17 != lVar19; lVar17 = lVar17 + 0x18) {
    uStack_e8 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = (undefined **)(extraout_x8_03 + 0x10);
    func_0x000107c2a47c(&ppuStack_f0);
    uStack_c8 = 3;
    uVar16 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      func_0x0001087c1388();
    }
    func_0x0001087c02d4();
    uVar13 = *(ulong *)(uVar16 + 8);
    if ((uVar13 & 1) != 0) {
      uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    uStack_d0 = uVar16;
    func_0x000107c30250(uVar16 + 0x10,uVar13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    plVar10 = plVar1;
    FUN_1087bff60(plVar1,&ppuStack_f0);
    func_0x0001087c13d4();
  }
  lVar17 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xe0);
  lVar19 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xe8);
  func_0x0001087c1504();
  for (; lVar17 != lVar19; lVar17 = lVar17 + 4) {
    uStack_e8 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = (undefined **)(extraout_x8_04 + 0x10);
    func_0x0001087c13b4();
    plVar20 = plVar10;
    func_0x0001087c1558();
    if (plVar20 == (long *)0x0) {
      plVar20 = (long *)plVar10[1];
      if (((ulong)plVar20 & 1) != 0) {
        func_0x0001087c1388();
      }
      func_0x000107c287e0();
      plVar10[3] = (long)plVar20;
    }
    func_0x0001088bf408();
    func_0x0001087c13b4();
    *(undefined4 *)(plVar20 + 4) = 1;
    plVar10 = plVar1;
    FUN_1087bff60(plVar1,&ppuStack_f0);
    func_0x0001087c13d4();
  }
  func_0x0001087be884(*(long *)(param_1 + 0x5b0) + 0xf8,plVar1);
  lVar17 = *(long *)(param_1 + 0x5b0);
  plVar10 = (long *)(lVar17 + 0x680);
  uVar9 = *(char *)(lVar17 + 0x6a8) == '\x01';
  if ((bool)uVar9) {
    func_0x000100864adc(plVar10);
    uVar14 = *(undefined8 *)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x480) = 0;
    FUN_10869a078(plVar10,uVar14);
    uVar16 = *(ulong *)(param_1 + 0x488);
    *(ulong *)(lVar17 + 0x688) = uVar16;
    *(undefined8 *)(param_1 + 0x488) = 0;
    lVar19 = *(long *)(param_1 + 0x498);
    *(long *)(lVar17 + 0x698) = lVar19;
    *(undefined4 *)(lVar17 + 0x6a0) = *(undefined4 *)(param_1 + 0x4a0);
    lVar18 = *(long *)(param_1 + 0x490);
    *(long *)(lVar17 + 0x690) = lVar18;
    if (lVar19 != 0) {
      uVar13 = *(ulong *)(lVar18 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar13 = uVar13 & uVar16 - 1;
        uVar9 = true;
      }
      else {
        uVar9 = uVar13 == uVar16;
        if (uVar16 <= uVar13) {
          uVar5 = 0;
          if (uVar16 != 0) {
            uVar5 = uVar13 / uVar16;
          }
          uVar13 = uVar13 - uVar5 * uVar16;
        }
      }
      *(long *)(*plVar10 + uVar13 * 8) = lVar17 + 0x690;
      *(undefined8 *)(param_1 + 0x490) = 0;
      *(undefined8 *)(param_1 + 0x498) = 0;
    }
  }
  else {
    FUN_1086ac45c(plVar10,puVar2);
  }
  func_0x000107c27a04(plVar3);
  func_0x000100864b68(puVar2);
  FUN_1086a9294(plVar1);
  goto LAB_1087c1070;
code_r0x0001087c0d38:
  *(long *)(param_1 + 0x20) = extraout_x8_02 + 0x10;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x0001087c1544();
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  func_0x000107c29ee4(&ppuStack_f0,lVar17);
  FUN_1087c0034(param_1 + 0x3d0);
  func_0x0001087c1430();
  func_0x0001087c1348();
  uVar4 = *(uint *)(lVar17 + 0x30);
  uVar9 = uVar4 == 0xc;
  if (uVar4 < 0xd) {
    uVar15 = *(undefined4 *)(&UNK_10df57a04 + (ulong)uVar4 * 4);
  }
  else {
    uVar15 = 0;
  }
  *(undefined4 *)(param_1 + 0x3f8) = uVar15;
  ppuStack_128 = &PTR_DAT_110d137d0;
  uStack_120 = 0;
  puStack_118 = &DAT_11383d918;
  puStack_110 = &DAT_11383d918;
  uStack_f8 = 0;
  uStack_108 = 0;
  pppuVar12 = &ppuStack_128;
  func_0x000107c3034c(pppuVar12,*(undefined8 *)(lVar17 + 0x18),
                      *(int *)(lVar17 + 0x20) - (int)*(undefined8 *)(lVar17 + 0x18));
  if (((ulong)pppuVar12 & 1) == 0) {
    ppuStack_f0 = (undefined **)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18));
    uStack_e8 = 0;
    func_0x0001087c1488();
    func_0x0001087c147c(alStack_158);
    FUN_1087bed88(*(long *)(param_1 + 0x5a8) + 0x20,0xb,alStack_158);
    ppuStack_f0 = (undefined **)0x700000006;
    uStack_e8 = uStack_e8 & 0xffffffffffffff00;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    func_0x0001087c131c();
    func_0x0001087c13cc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_158);
  }
  else {
    func_0x0001087c0044(param_1 + 0x3d0);
    FUN_1087c0054();
    func_0x0001087c0238(param_1 + 0x20);
    FUN_1087c00b8();
    FUN_1087bff60(plVar1,param_1 + 0x20);
  }
  func_0x00010b59e378(&ppuStack_128);
  FUN_108907ff0(param_1 + 0x3d0);
  plVar10 = (long *)(param_1 + 0x20);
  func_0x000107c2a484();
  lVar17 = lVar17 + 0x58;
  if (((ulong)pppuVar12 & 1) == 0) goto code_r0x0001087c0e58;
  goto LAB_1087c0d30;
code_r0x0001087c0e58:
  func_0x000107c27a04(plVar3);
  func_0x000100864b68(puVar2);
  FUN_1086a9294(plVar1);
LAB_1087c1084:
  func_0x0001087c14cc();
  func_0x0001087c14ac();
  func_0x0001087c13f8();
  func_0x0001087c1410();
  func_0x0001087c1448();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1087c10c4:
  FUN_1086cf354();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1087c10cc);
  (*pcVar6)();
}



/* Entry: 1087c1280; end: 1087c12b7;  */

void FUN_1087c1280(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x3d0);
  func_0x0001087c1394();
  func_0x0001087c14cc();
  func_0x0001087c14ac();
  func_0x0001087c13f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c12b8; end: 1087c1597;  */

void FUN_1087c12b8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087c1598; end: 1087c1d0b;  */

void FUN_1087c1598(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong *puVar16;
  uint extraout_w8;
  long lVar17;
  long *plVar18;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar19;
  ulong *puVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plStack_4e0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  ulong uStack_480;
  long lStack_478;
  ulong uStack_470;
  undefined1 auStack_468 [904];
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined1 *puStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined8 *)0x448;
  __Znwm();
  *puVar11 = FUN_1087c2e74;
  puVar11[1] = FUN_1087c2f88;
  func_0x0001087a93b4(puVar11 + 2);
  FUN_1087a9334(param_1,puVar11 + 2);
  plVar15 = (long *)(param_3 + 0x20);
  func_0x000107c27994(puVar11 + 0x75);
  uVar22 = 0;
  puVar20 = puVar11 + 0x78;
  plVar1 = puVar11 + 0x80;
  puVar2 = puVar11 + 0x81;
  plVar18 = puVar11 + 0x82;
  puVar3 = puVar11 + 0x84;
  puVar4 = puVar11 + 0x85;
  puVar5 = puVar11 + 0x86;
  *puVar20 = 0;
  puVar11[0x79] = 0;
  puVar11[0x7a] = 0;
  plVar6 = puVar11 + 0x87;
  plVar7 = *(long **)(param_3 + 0xb8);
  puVar16 = puVar11 + 0x7a;
  for (plVar21 = *(long **)(param_3 + 0xb0); plVar21 != plVar7; plVar21 = plVar21 + 0xb) {
    if ((int)plVar21[6] == 0xc) {
      if (uVar22 < *puVar16) {
        plVar15 = plVar21;
        FUN_108685a78(uVar22);
        uVar22 = uVar22 + 0x58;
      }
      else {
        puVar12 = puVar20;
        func_0x000105291b60(puVar20,(long)(uVar22 - *puVar20) / 0x58 + 1);
        func_0x0001052917dc(&uStack_490,puVar12,(long)(puVar11[0x79] - puVar11[0x78]) / 0x58,puVar16
                           );
        FUN_108685a78(uStack_480,plVar21);
        uStack_480 = uStack_480 + 0x58;
        plVar15 = &uStack_490;
        func_0x00010529179c(puVar20);
        uVar22 = puVar11[0x79];
        func_0x000105291a1c(&uStack_490);
      }
      puVar11[0x79] = uVar22;
    }
  }
  uVar10 = *puVar20 == uVar22;
  if ((bool)uVar10) {
    uStack_490 = (code *)0x1b;
    func_0x0001087c3178();
    func_0x0001087a3420(&uStack_490);
  }
  else {
    puVar13 = (undefined8 *)0x30;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110a71270;
    puVar23 = puVar13 + 3;
    *puVar23 = &PTR_DAT_110a71340;
    plVar15 = puVar13 + 4;
    *plVar15 = 0;
    uStack_490 = (code *)0x0;
    func_0x000107c27f9c(&uStack_490);
    puVar13[5] = 0;
    uStack_490 = (code *)0x0;
    func_0x000107c27f98(&uStack_490);
    FUN_1087955c4(&uStack_490);
    ppuStack_a8 = (undefined **)lStack_488;
    pcStack_b0 = uStack_490;
    uStack_498 = 0;
    uStack_490 = (code *)0x0;
    lStack_488 = 0;
    uStack_4a0 = 0;
    func_0x000107c27f98(&uStack_4a0);
    func_0x000107c27f9c(&uStack_498);
    func_0x000107c27fec(&uStack_490);
    func_0x000107c288b0(plVar15,&pcStack_b0);
    func_0x000107c2887c(puVar13 + 5,(ulong)&pcStack_b0 | 8);
    func_0x000107c27f98((ulong)&pcStack_b0 | 8);
    func_0x000107c27f9c(&pcStack_b0);
    *puVar23 = &PTR_FUN_110a712c0;
    puVar11[0x7e] = puVar23;
    puVar11[0x7f] = puVar13;
    lVar17 = *plVar15;
    puVar11[0x80] = lVar17;
    if (lVar17 != 0) {
      do {
        FUN_1087c2fd8();
      } while (extraout_w10 != 0);
    }
    FUN_108685044(puVar11 + 4,param_3 + 0x118);
    puVar13 = *(undefined8 **)(param_2 + 0x10);
    lStack_488 = *(long *)(param_2 + 0x28);
    uStack_490 = *(code **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x28) != 0) {
      do {
        func_0x0001087c32d4();
      } while (extraout_w10_00 != 0);
    }
    lStack_478 = puVar11[0x79];
    uStack_480 = *puVar20;
    uStack_470 = *puVar16;
    puVar11[0x79] = 0;
    puVar11[0x7a] = 0;
    *puVar20 = 0;
    FUN_108639eb0(auStack_468,puVar11 + 4);
    puVar14 = auStack_e0;
    func_0x000107c27994(puVar14,puVar11 + 0x75);
    lStack_c8 = puVar11[0x7e];
    lStack_c0 = puVar11[0x7f];
    if (lStack_c0 != 0) {
      do {
        func_0x0001087c32d4();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar17 = puVar13[2];
    __ZNSt3__15mutex4lockEv(lVar17 + 8);
    lVar24 = *(long *)(lVar17 + 0x70);
    pcStack_b0 = FUN_1087c22b4;
    ppuStack_a8 = &PTR_FUN_110a71358;
    plVar15 = (long *)0x3d8;
    __Znwm();
    plVar15[1] = lStack_488;
    *plVar15 = (long)uStack_490;
    plVar15[3] = lStack_478;
    plVar15[2] = uStack_480;
    uStack_490 = (code *)0x0;
    lStack_488 = 0;
    plVar15[4] = uStack_470;
    lStack_478 = 0;
    uStack_470 = 0;
    uStack_480 = 0;
    FUN_108639eb0(plVar15 + 5,auStack_468);
    func_0x000107c27994(plVar15 + 0x76,auStack_e0);
    plVar15[0x7a] = lStack_c0;
    plVar15[0x79] = lStack_c8;
    lStack_c8 = 0;
    lStack_c0 = 0;
    plStack_a0 = plVar15;
    puStack_80 = puVar14;
    func_0x000107c28154(lVar17 + 0x48,&pcStack_b0);
    func_0x0001087c32a4();
    __ZNSt3__15mutex6unlockEv(lVar17 + 8);
    if (lVar24 == 0) {
      plVar15 = (long *)*puVar13;
      ppuStack_a8 = (undefined **)puVar13[3];
      pcStack_b0 = (code *)puVar13[2];
      if (puVar13[3] != 0) {
        do {
          func_0x0001087c32d4();
        } while (extraout_w10_02 != 0);
      }
      (**(code **)(*plVar15 + 0x10))();
      func_0x000107c27e74(&pcStack_b0);
    }
    FUN_1087c1d0c(&uStack_490);
    *plVar18 = *plVar1;
    if (*plVar1 != 0) {
      do {
        FUN_1087c2fd8();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c314e0(puVar11 + 0x83,*(undefined8 *)(param_2 + 0x30),
                        *(long *)(param_2 + 0x40) * 1000000);
    FUN_1087c1d4c(puVar2,plVar18,puVar11 + 0x83);
    func_0x000107c27f9c(puVar11 + 0x83);
    func_0x000107c27f9c(plVar18);
    *puVar5 = *puVar2;
    if (*puVar2 != 0) {
      do {
        FUN_1087c2fd8();
      } while (extraout_w10_04 != 0);
    }
    lVar17 = *param_4;
    *plVar6 = lVar17;
    if (lVar17 != 0) {
      do {
        FUN_1087c2fd8();
      } while (extraout_w10_05 != 0);
    }
    func_0x000107c278b8(puVar11 + 0x7b,&UNK_10f4bb656);
    puVar16 = puVar5;
    plVar15 = plVar6;
    FUN_1087c1f14(puVar4,puVar5,plVar6,puVar11 + 0x7b);
    *puVar3 = *puVar4;
    do {
      FUN_1087c2fd8();
    } while (extraout_w10_06 != 0);
    func_0x0001087c319c(*puVar3);
    plStack_4e0 = plVar1;
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x88) = 0;
      lVar17 = puVar11[0x84];
      func_0x0001087c305c();
      if (*puVar16 == 0) {
        func_0x000107c3a5c0();
      }
      plVar18 = (long *)(lVar17 + 0x10);
      do {
        if (*plVar18 == 0) {
          func_0x0001087c3098();
          plVar18 = extraout_x8_00;
          uVar9 = extraout_w10_08;
          uVar19 = extraout_w11_00;
        }
        else {
          func_0x0001087c322c();
          plVar18 = extraout_x8;
          uVar9 = extraout_w10_07;
          uVar19 = extraout_w11;
        }
        if ((uVar19 & 1) != 0) {
          puVar20 = *(ulong **)(lVar17 + 0x90);
          func_0x0001087c3108();
          if ((bool)uVar10) {
            func_0x0001087c30a8();
            func_0x0001087c2fe8();
            func_0x0001087c2ff8();
            *(ulong **)(lVar17 + 0x90) = puVar16;
          }
          func_0x0001087c306c();
          goto LAB_1087c1b10;
        }
      } while ((uVar9 >> 1 & 1) == 0);
    }
    puVar11 = puVar3;
    FUN_1087b3548();
    uVar8 = *(undefined4 *)puVar11;
    func_0x000107c27f9c(puVar3);
    func_0x000107c27f9c(puVar4);
    func_0x0001087c326c();
    func_0x000107c27f9c(plVar6);
    func_0x000107c27f9c(puVar5);
    uStack_490 = (code *)CONCAT44(uVar8,0x1b);
    func_0x0001087c3178();
    func_0x0001087a3420(&uStack_490);
    func_0x000107c27f9c(puVar2);
    func_0x0001087c325c();
    func_0x000107c27f9c(plVar1);
    func_0x0001087c3274();
  }
  puVar16 = puVar20;
  func_0x000104bee864(puVar20);
  func_0x0001087c3254();
  while( true ) {
    func_0x0001087c312c();
    func_0x0001087c31e8();
LAB_1087c1b10:
    func_0x0001087c33a8(uStack_70);
    if ((bool)uVar10) break;
    ___stack_chk_fail();
    if ((int)plVar15 != 0) goto LAB_1087c1b74;
    do {
      func_0x0001087c3244();
LAB_1087c1b74:
      func_0x000104bd46a0(puVar16);
    } while ((int)plVar15 == 0);
    func_0x000107c27e74(&pcStack_b0);
    FUN_1087c1d0c(&uStack_490);
    func_0x0001087c325c();
    func_0x000107c27f9c(plStack_4e0);
    func_0x0001087c3274();
    puVar16 = puVar20;
    func_0x000104bee864();
    func_0x0001087c3254();
    func_0x0001087c324c();
    func_0x0001087c3170();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087c1d0c; end: 1087c1d4b;  */

undefined8 FUN_1087c1d0c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1087c228c(param_1 + 0x3c8);
  func_0x000107c27914(param_1 + 0x3b0);
  func_0x000104bee3a8(param_1 + 0x28);
  func_0x000104bee864(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087c1d4c; end: 1087c1f13;  */

void FUN_1087c1d4c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087c3144(FUN_1087c2b38);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087adea8(lVar2 + 0x10);
  func_0x0001087c3220();
  lVar4 = *param_1;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  func_0x000107c278b8(plVar3,&UNK_10f4afc82);
  func_0x0001087c3358();
  FUN_1087c23a0();
  func_0x0001087c31f8();
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_03 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087c305c();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087c3098();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087c322c();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)in_ZR) {
          func_0x0001087c30a8();
          func_0x0001087c2fe8();
          func_0x0001087c2ff8();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087c306c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087c1f14; end: 1087c20e3;  */

void FUN_1087c1f14(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087c3144(FUN_1087c2dc4);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_3;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087adea8(lVar2 + 0x10);
  FUN_1087ad990(param_1,lVar2 + 0x10);
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,param_4);
  func_0x0001087c3358();
  FUN_1087c26f4();
  func_0x0001087c31f8();
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_03 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087c305c();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087c3098();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087c322c();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)in_ZR) {
          func_0x0001087c30a8();
          func_0x0001087c2fe8();
          func_0x0001087c2ff8();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087c306c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087c20e4; end: 1087c20e7;  */

undefined8 * FUN_1087c20e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71230;
  func_0x000107c28868(param_1 + 6);
  func_0x000107c286f4(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087c20e8; end: 1087c20fb;  */

void FUN_1087c20e8(void)

{
  FUN_1087c20fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c20fc; end: 1087c213f;  */

undefined8 * FUN_1087c20fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71230;
  func_0x000107c28868(param_1 + 6);
  func_0x000107c286f4(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087c2140; end: 1087c2143;  */

void FUN_1087c2140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71270;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c2144; end: 1087c2157;  */

void FUN_1087c2144(void)

{
  FUN_1087c227c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c2158; end: 1087c2167;  */

void FUN_1087c2158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087c2160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087c2168; end: 1087c219f;  */

void FUN_1087c2168(void)

{
  func_0x0001087c3320();
  return;
}



/* Entry: 1087c21a0; end: 1087c21cf;  */

void FUN_1087c21a0(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1087c21f8(*(undefined8 *)(param_1 + 0x10),(undefined8 *)(param_1 + 0x10),&uStack_14);
  return;
}



/* Entry: 1087c21d0; end: 1087c21f7;  */

undefined8 * FUN_1087c21d0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c27f98(param_1 + 1);
  plVar5 = (long *)*param_1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
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
  return param_1;
}



/* Entry: 1087c21f8; end: 1087c227b;  */

void FUN_1087c21f8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x98) = *param_3;
      *(undefined1 *)(param_1 + 0x9c) = 1;
      *(undefined8 *)(param_1 + 0x10) = 2;
      func_0x000107c31508(param_1,param_2);
      return;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087c227c; end: 1087c228b;  */

void FUN_1087c227c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71270;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c228c; end: 1087c22b3;  */

long FUN_1087c228c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087c22b4; end: 1087c2333;  */

void FUN_1087c22b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_30 = puVar5[0x79];
  lStack_28 = puVar5[0x7a];
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar5 + 2,puVar5 + 5,&uStack_30);
  FUN_108623e70(&uStack_30);
  return;
}



/* Entry: 1087c2334; end: 1087c2353;  */

void FUN_1087c2334(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087c1d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087c2354; end: 1087c236b;  */

void FUN_1087c2354(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087c236c; end: 1087c239f;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087c236c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087c21f8(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087c23a0; end: 1087c2607;  */

void FUN_1087c23a0(long *param_1)

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
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
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
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087c3208();
  plVar4 = param_1;
  func_0x0001087c3144(FUN_1087c295c);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087c31a8();
  func_0x0001087c3220();
  func_0x0001087c327c();
  func_0x0001087c31f8();
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_01 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087c30b8();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087c33bc();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087c3098();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087c322c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)in_ZR) {
          func_0x0001087c30a8();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087c32bc();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087c3034(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087c30f8();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087c2550;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c328c();
  unaff_x22 = *plVar4;
  func_0x0001087c3124();
  func_0x0001087c3158();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087c319c(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087c32cc();
      FUN_1087c26bc();
      func_0x0001087c3380();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087c30d8();
      func_0x0001087c329c();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c25a0);
    (*pcVar2)();
  }
  func_0x0001087c3238(*unaff_x20);
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_04 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087c334c();
    func_0x0001087c30b8();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087c33bc();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087c3098();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087c322c();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)uVar3) {
          func_0x0001087c30a8();
          func_0x0001087c2fe8();
          func_0x0001087c2ff8();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087c30f8();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087c2550:
        func_0x0001087c30e8(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2608; end: 1087c26b7;  */

void FUN_1087c2608(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087c26b8; end: 1087c26bb;  */

void FUN_1087c26b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1087c26bc; end: 1087c26f3;  */

void FUN_1087c26bc(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110a71380;
  return;
}



/* Entry: 1087c26f4; end: 1087c295b;  */

void FUN_1087c26f4(long *param_1)

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
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
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
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087c3208();
  plVar4 = param_1;
  func_0x0001087c3144(FUN_1087c2be8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087c31a8();
  func_0x0001087c3220();
  func_0x0001087c327c();
  func_0x0001087c31f8();
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_01 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087c30b8();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087c33bc();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087c3098();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087c322c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)in_ZR) {
          func_0x0001087c30a8();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087c32bc();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087c3034(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087c30f8();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087c28a4;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c328c();
  unaff_x22 = *plVar4;
  func_0x0001087c3124();
  func_0x0001087c3158();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087c319c(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087c32cc();
      FUN_1087aead8();
      func_0x0001087c3394();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087c30d8();
      func_0x0001087c329c();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c28f4);
    (*pcVar2)();
  }
  func_0x0001087c3238(*unaff_x20);
  do {
    func_0x0001087c2fd8();
  } while (extraout_w10_04 != 0);
  func_0x0001087c30c8();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087c334c();
    func_0x0001087c30b8();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087c33bc();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087c3098();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087c322c();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c3108();
        if ((bool)uVar3) {
          func_0x0001087c30a8();
          func_0x0001087c2fe8();
          func_0x0001087c2ff8();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087c30f8();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087c28a4:
        func_0x0001087c30e8(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c295c; end: 1087c2aef;  */

void FUN_1087c295c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087c328c();
    lVar8 = *plVar4;
    func_0x0001087c3124();
    func_0x0001087c3158();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087c319c(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087c32cc();
        FUN_1087c26bc();
        func_0x0001087c3380();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087c30d8();
        func_0x0001087c329c();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c2aa0);
      (*pcVar2)();
    }
    func_0x0001087c3238(param_1[7]);
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
    func_0x0001087c30c8();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087c334c();
      lVar8 = param_1[9];
      func_0x0001087c305c();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087c3098();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087c322c();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087c336c();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087c30a8();
            func_0x0001087c2fe8();
            func_0x0001087c3048();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087c30e8(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2af0; end: 1087c2b37;  */

void FUN_1087c2af0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2b38; end: 1087c2baf;  */

void FUN_1087c2b38(long param_1)

{
  FUN_1087b3548(param_1 + 0x48);
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2bb0; end: 1087c2be7;  */

void FUN_1087c2bb0(void)

{
  func_0x0001087c332c();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c2be8; end: 1087c2d7b;  */

void FUN_1087c2be8(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087c328c();
    lVar8 = *plVar4;
    func_0x0001087c3124();
    func_0x0001087c3158();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087c319c(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087c32cc();
        FUN_1087aead8();
        func_0x0001087c3394();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087c30d8();
        func_0x0001087c329c();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c2d2c);
      (*pcVar2)();
    }
    func_0x0001087c3238(param_1[7]);
    do {
      func_0x0001087c2fd8();
    } while (extraout_w10 != 0);
    func_0x0001087c30c8();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087c334c();
      lVar8 = param_1[9];
      func_0x0001087c305c();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087c3098();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087c322c();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087c336c();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087c30a8();
            func_0x0001087c2fe8();
            func_0x0001087c3048();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087c30e8(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087c31f0();
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2d7c; end: 1087c2dc3;  */

void FUN_1087c2d7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087c312c();
  func_0x0001087c3134();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2dc4; end: 1087c2e3b;  */

void FUN_1087c2dc4(long param_1)

{
  FUN_1087b3548(param_1 + 0x48);
  func_0x0001087c31c8();
  func_0x0001087c3124();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2e3c; end: 1087c2e73;  */

void FUN_1087c2e3c(void)

{
  func_0x0001087c332c();
  func_0x0001087c3158();
  func_0x0001087c3134();
  func_0x0001087c3160();
  func_0x0001087c3168();
  func_0x0001087c312c();
  func_0x0001087c313c();
  func_0x0001087c31d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c2e74; end: 1087c2f87;  */

void FUN_1087c2e74(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined4 *)(param_1 + 0x420);
  FUN_1087b3548();
  uVar1 = *puVar2;
  func_0x000107c27f9c(param_1 + 0x420);
  func_0x0001087c330c();
  func_0x0001087c326c();
  func_0x0001087c3304();
  func_0x0001087c32fc();
  uStack_98 = 0x1b;
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  puVar2 = &uStack_98;
  uStack_94 = uVar1;
  FUN_1087a9380(param_1 + 0x10);
  puVar3 = &uStack_98;
  func_0x0001087a3420();
  func_0x0001087c32f4();
  func_0x0001087c325c();
  func_0x0001087c32ec();
  func_0x0001087c3274();
  func_0x0001087c32e4();
  func_0x0001087c3254();
  while( true ) {
    func_0x0001087c312c();
    func_0x0001087c31e8();
    func_0x0001087c33a8(uStack_28);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar2 == 0) break;
    puVar3 = (undefined4 *)(param_1 + 0x420);
    func_0x000107c27f9c();
    func_0x0001087c330c();
    func_0x0001087c326c();
    func_0x0001087c3304();
    func_0x0001087c32fc();
    func_0x0001087c32f4();
    func_0x0001087c325c();
    func_0x0001087c32ec();
    func_0x0001087c3274();
    func_0x0001087c32e4();
    func_0x0001087c3254();
    func_0x0001087c3264();
    func_0x0001087c3170();
    ___cxa_end_catch();
  }
  __Unwind_Resume(puVar3);
  func_0x000107c27f9c(puVar3 + 0x108);
  func_0x0001087c330c();
  func_0x0001087c326c();
  func_0x0001087c3304();
  func_0x0001087c32fc();
  func_0x0001087c32f4();
  func_0x0001087c325c();
  func_0x0001087c32ec();
  func_0x0001087c3274();
  func_0x0001087c32e4();
  func_0x0001087c3254();
  func_0x0001087c312c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087c2f88; end: 1087c2fd7;  */

void FUN_1087c2f88(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x420);
  func_0x0001087c330c();
  func_0x0001087c326c();
  func_0x0001087c3304();
  func_0x0001087c32fc();
  func_0x0001087c32f4();
  func_0x0001087c325c();
  func_0x0001087c32ec();
  func_0x0001087c3274();
  func_0x0001087c32e4();
  func_0x0001087c3254();
  func_0x0001087c312c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c2fd8; end: 1087c33c7;  */

void FUN_1087c2fd8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087c33c8; end: 1087c3a3b;  */

void FUN_1087c33c8(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long lVar15;
  long *extraout_x8;
  long *plVar16;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar17;
  long lVar18;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined1 auStack_aa0 [2520];
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined1 *puStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)0x428;
  plVar11 = param_3;
  __Znwm();
  *puVar8 = FUN_1087c5554;
  puVar8[1] = FUN_1087c5710;
  puVar8[0x83] = param_3;
  func_0x0001087a93b4(puVar8 + 2);
  FUN_1087a9334(param_1,puVar8 + 2);
  iVar4 = (int)param_3[0x26];
  uVar6 = iVar4 != 0;
  uVar7 = true;
  if (iVar4 == 1) {
LAB_1087c3460:
    puVar9 = (undefined8 *)0x30;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110a713e8;
    puVar9[3] = &PTR_DAT_110a71438;
    plVar11 = puVar9 + 4;
    *plVar11 = 0;
    uStack_ab0 = (code *)0x0;
    func_0x000107c27f9c(&uStack_ab0);
    puVar9[5] = 0;
    uStack_ab0 = (code *)0x0;
    func_0x000107c27f98(&uStack_ab0);
    FUN_1087c47bc(&uStack_ab0);
    ppuStack_a8 = (undefined **)lStack_aa8;
    pcStack_b0 = uStack_ab0;
    uStack_ab8 = 0;
    uStack_ab0 = (code *)0x0;
    lStack_aa8 = 0;
    uStack_ac0 = 0;
    func_0x000107c27f98(&uStack_ac0);
    func_0x0001087c5afc();
    func_0x000107c27fec(&uStack_ab0);
    func_0x000107c288b0(plVar11,&pcStack_b0);
    func_0x000107c2887c(puVar9 + 5,(ulong)&pcStack_b0 | 8);
    func_0x000107c27f98((ulong)&pcStack_b0 | 8);
    func_0x000107c27f9c(&pcStack_b0);
    puVar8[0x79] = puVar9 + 3;
    puVar8[0x7a] = puVar9;
    lVar15 = *plVar11;
    puVar8[0x7b] = lVar15;
    if (lVar15 != 0) {
      do {
        func_0x0001087c5754();
      } while (extraout_w10 != 0);
    }
    puVar9 = *(undefined8 **)(param_2 + 0x10);
    lStack_aa8 = *(long *)(param_2 + 0x28);
    uStack_ab0 = *(code **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x28) != 0) {
      do {
        func_0x0001087c5a78();
      } while (extraout_w10_00 != 0);
    }
    puVar10 = auStack_aa0;
    FUN_108792860(puVar10,param_3 + 4);
    lStack_c8 = puVar8[0x79];
    lStack_c0 = puVar8[0x7a];
    if (lStack_c0 != 0) {
      do {
        func_0x0001087c5a78();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar15 = puVar9[2];
    __ZNSt3__15mutex4lockEv(lVar15 + 8);
    lVar18 = *(long *)(lVar15 + 0x70);
    pcStack_b0 = FUN_1087c4914;
    ppuStack_a8 = &PTR_FUN_110a714b8;
    plVar11 = (long *)0x9f8;
    __Znwm();
    plVar11[1] = lStack_aa8;
    *plVar11 = (long)uStack_ab0;
    uStack_ab0 = (code *)0x0;
    lStack_aa8 = 0;
    FUN_1086ac094(plVar11 + 2,auStack_aa0);
    plVar11[0x13e] = lStack_c0;
    plVar11[0x13d] = lStack_c8;
    lStack_c8 = 0;
    lStack_c0 = 0;
    plStack_a0 = plVar11;
    puStack_80 = puVar10;
    func_0x000107c28154(lVar15 + 0x48,&pcStack_b0);
    func_0x0001087c5a48();
    __ZNSt3__15mutex6unlockEv(lVar15 + 8);
    if (lVar18 == 0) {
      plVar11 = (long *)*puVar9;
      ppuStack_a8 = (undefined **)puVar9[3];
      pcStack_b0 = (code *)puVar9[2];
      if (puVar9[3] != 0) {
        do {
          func_0x0001087c5a78();
        } while (extraout_w10_02 != 0);
      }
      (**(code **)(*plVar11 + 0x10))();
      func_0x000107c27e74(&pcStack_b0);
    }
    FUN_1087c3a3c(&uStack_ab0);
    puVar8[0x7d] = puVar8[0x7b];
    if (puVar8[0x7b] != 0) {
      do {
        func_0x0001087c5754();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c314e0(puVar8 + 0x7e,*(undefined8 *)(param_2 + 0x30),
                        *(long *)(param_2 + 0x40) * 1000000);
    plVar14 = puVar8 + 0x7c;
    FUN_1087c3a6c(plVar14,puVar8 + 0x7d,puVar8 + 0x7e);
    plVar12 = puVar8 + 0x81;
    plVar1 = puVar8 + 0x82;
    func_0x000107c27f9c(puVar8 + 0x7e);
    func_0x0001087c5a30();
    *plVar12 = *plVar14;
    if (*plVar14 != 0) {
      do {
        func_0x0001087c5754();
      } while (extraout_w10_04 != 0);
    }
    lVar15 = *param_4;
    *plVar1 = lVar15;
    if (lVar15 != 0) {
      do {
        func_0x0001087c5754();
      } while (extraout_w10_05 != 0);
    }
    func_0x000107c278b8(puVar8 + 0x76,&UNK_10f4bb683);
    plVar13 = plVar12;
    plVar11 = plVar1;
    FUN_1087c3c50(puVar8 + 0x80,plVar12,plVar1,puVar8 + 0x76);
    plVar2 = puVar8 + 0x7f;
    *plVar2 = puVar8[0x80];
    do {
      func_0x0001087c5754();
    } while (extraout_w10_06 != 0);
    func_0x0001087c58e8(*plVar2);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x84) = 0;
      lVar15 = puVar8[0x7f];
      func_0x0001087c57a8();
      lVar18 = *plVar13;
      if (lVar18 == 0) {
        func_0x000107c3a5c0();
        lVar18 = *plVar13;
      }
      func_0x0001087c5abc();
      plVar16 = extraout_x8;
      do {
        if (*plVar16 == 0) {
          func_0x0001087c57cc();
          plVar16 = extraout_x8_01;
          uVar5 = extraout_w10_08;
          uVar17 = extraout_w11_00;
        }
        else {
          func_0x0001087c5978();
          plVar16 = extraout_x8_00;
          uVar5 = extraout_w10_07;
          uVar17 = extraout_w11;
        }
        if ((uVar17 & 1) != 0) {
          func_0x0001087c580c();
          if ((bool)uVar7) {
            func_0x0001087c57dc();
            uVar3 = extraout_w8;
            if ((bool)uVar6) {
              uVar3 = extraout_w9;
            }
            func_0x0001087c5894();
            *(undefined1 *)plVar13 = uVar3;
            func_0x0001087c5794(0);
            *(long **)(lVar15 + 0x90) = plVar13;
          }
          func_0x0001087c5830();
          *(long *)(extraout_x8_02 + 0x20) = lVar18;
          func_0x0001087c5840(*(undefined8 *)(lVar15 + 0x90));
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_1087c385c;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
    plVar11 = plVar2;
    FUN_1087c3e3c();
    FUN_1087c3f04(puVar8 + 4);
    func_0x000107c27f9c(plVar2);
    func_0x0001087c5a30();
    func_0x0001087c59f0();
    func_0x000107c27f9c(plVar1);
    func_0x000107c27f9c();
    if (*(int *)(puVar8 + 4) == 0) {
      func_0x0001087c5ac8(puVar8[0x83]);
      if (((ulong)plVar12 & 1) == 0) {
        lVar15 = puVar8[0x83];
        FUN_108656428(&uStack_ab0,lVar15 + 0x4a0);
        func_0x000107c29edc(&pcStack_b0,puVar8 + 5);
        FUN_10879d9ac(&uStack_ab0);
        func_0x000107c27b9c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_b0);
        plVar11 = &uStack_ab0;
        func_0x0001087be850(lVar15 + 0x4a0);
        func_0x0001087c5b5c(puVar8[0x83]);
        func_0x000107c2a500(&uStack_ab0);
      }
      uStack_ab0 = (code *)0x18;
    }
    else {
      uStack_ab0 = (code *)CONCAT44(*(int *)(puVar8 + 4),0x18);
    }
    func_0x0001087c58c4();
    func_0x0001087a3420(&uStack_ab0);
    func_0x0001087c5a70();
    func_0x000107c27f9c(plVar14);
    func_0x0001087c58a4();
    func_0x0001087c59f8();
    plVar13 = plVar14;
  }
  else {
    uVar7 = false;
    if (iVar4 == 3) {
      uVar6 = (ulong)param_3[0xb] <= (ulong)param_3[10];
      uVar7 = param_3[10] == param_3[0xb];
      if (!(bool)uVar7) goto LAB_1087c3460;
    }
    uStack_ab0 = (code *)0x18;
    func_0x0001087c58c4();
    plVar13 = &uStack_ab0;
    func_0x0001087a3420(plVar13);
  }
  while( true ) {
    func_0x0001087c5858();
    func_0x0001087c594c();
LAB_1087c385c:
    func_0x0001087c5bc4(uStack_70);
    if ((bool)uVar7) break;
    ___stack_chk_fail();
    if ((int)plVar11 == 0) {
      do {
        __Unwind_Resume(plVar13);
        func_0x000104bd46a0();
      } while ((int)plVar11 == 0);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_b0);
    }
    func_0x000107c2a500(&uStack_ab0);
    func_0x0001087c5a70();
    func_0x0001087c5a30();
    func_0x0001087c58a4();
    func_0x0001087c59f8();
    ___cxa_begin_catch();
    func_0x0001087c58bc();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087c3a3c; end: 1087c3a6b;  */

undefined8 FUN_1087c3a3c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1087c48ec(param_1 + 0x9e8);
  func_0x0001086a931c(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087c3a6c; end: 1087c3c4f;  */

void FUN_1087c3a6c(long *param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  
  lVar3 = 0x70;
  __Znwm();
  func_0x0001087c5870(FUN_1087c5218);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
  }
  lVar5 = *param_2;
  *(long *)(lVar3 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087c4ce4(lVar3 + 0x10);
  func_0x0001087c596c();
  lVar5 = *param_1;
  *(long *)(lVar3 + 0x58) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar3 + 0x60) = *(long *)(lVar3 + 0x40);
  if (*(long *)(lVar3 + 0x40) != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_02 != 0);
  }
  plVar4 = (long *)(lVar3 + 0x20);
  func_0x000107c278b8(plVar4,&UNK_10f4afc82);
  func_0x0001087c5b68();
  FUN_1087c4a78();
  func_0x0001087c595c();
  do {
    func_0x0001087c5754();
  } while (extraout_w10_03 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x68) = 0;
    lVar5 = *(long *)(lVar3 + 0x48);
    func_0x0001087c57a8();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087c57cc();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087c5978();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c5bec();
        if ((bool)in_ZR) {
          func_0x0001087c57dc();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087c5784();
          *(undefined1 *)plVar4 = uVar1;
          func_0x0001087c5794(0);
          *(long **)(lVar5 + 0x90) = plVar4;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_02 + 0x20) = lVar8;
        func_0x0001087c5840(*(undefined8 *)(lVar5 + 0x90));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c58a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 1087c3c50; end: 1087c3e3b;  */

void FUN_1087c3c50(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  
  lVar3 = 0x70;
  __Znwm();
  func_0x0001087c5870(FUN_1087c54a4);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
  }
  lVar5 = *param_3;
  *(long *)(lVar3 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087c4ce4(lVar3 + 0x10);
  FUN_1087c49c0(param_1,*(undefined8 *)(lVar3 + 0x10));
  lVar5 = *param_2;
  *(long *)(lVar3 + 0x58) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar3 + 0x60) = *(long *)(lVar3 + 0x40);
  if (*(long *)(lVar3 + 0x40) != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_02 != 0);
  }
  plVar4 = (long *)(lVar3 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4,param_4);
  func_0x0001087c5b68();
  FUN_1087c4dd0();
  func_0x0001087c595c();
  do {
    func_0x0001087c5754();
  } while (extraout_w10_03 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x68) = 0;
    lVar5 = *(long *)(lVar3 + 0x48);
    func_0x0001087c57a8();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087c57cc();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087c5978();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087c5bec();
        if ((bool)in_ZR) {
          func_0x0001087c57dc();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087c5784();
          *(undefined1 *)plVar4 = uVar1;
          func_0x0001087c5794(0);
          *(long **)(lVar5 + 0x90) = plVar4;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_02 + 0x20) = lVar8;
        func_0x0001087c5840(*(undefined8 *)(lVar5 + 0x90));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c58a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 1087c3e3c; end: 1087c3e93;  */

long FUN_1087c3e3c(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087c3e84);
  (*pcVar1)();
}



/* Entry: 1087c3e94; end: 1087c3eeb;  */

void FUN_1087c3e94(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x0001087c3f2c(param_1 + 0xf8);
  func_0x000107c29edc(auStack_38,param_1 + 0xf8);
  FUN_10879d9ac(param_1 + 0x480);
  func_0x000107c27b9c();
  func_0x0001087c5a40();
  return;
}



/* Entry: 1087c3eec; end: 1087c3eef;  */

undefined8 * FUN_1087c3eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a713a8;
  func_0x000107c28868(param_1 + 6);
  func_0x000107c286dc(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087c3ef0; end: 1087c3f03;  */

void FUN_1087c3ef0(void)

{
  func_0x0001087c46ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c3f04; end: 1087c4053;  */

undefined4 * FUN_1087c3f04(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_108685044(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1087c4054; end: 1087c407b;  */

void FUN_1087c4054(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x160);
  if (cVar1 != *(char *)(param_2 + 0x160)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x160) == '\x01') {
        func_0x000104bee708();
        *(undefined1 *)(param_1 + 0x160) = 0;
      }
      return;
    }
    FUN_108685260();
    *(undefined1 *)(param_1 + 0x160) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001087c5a98();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    func_0x000107c29704(unaff_x20 + 0x20,unaff_x19 + 0x20);
    func_0x000107c27c5c(unaff_x20 + 0x100,unaff_x19 + 0x100);
    FUN_1087c40f8(unaff_x20 + 0x120,unaff_x19 + 0x120);
    FUN_1087c40f8(unaff_x20 + 0x140,unaff_x19 + 0x140);
    return;
  }
  return;
}



/* Entry: 1087c407c; end: 1087c40d3;  */

void FUN_1087c407c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087c5a98();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  func_0x000107c29704(unaff_x20 + 0x20,unaff_x19 + 0x20);
  func_0x000107c27c5c(unaff_x20 + 0x100,unaff_x19 + 0x100);
  FUN_1087c40f8(unaff_x20 + 0x120,unaff_x19 + 0x120);
  FUN_1087c40f8(unaff_x20 + 0x140,unaff_x19 + 0x140);
  return;
}



/* Entry: 1087c40d4; end: 1087c40f7;  */

void FUN_1087c40d4(long param_1)

{
  if (*(char *)(param_1 + 0x160) == '\x01') {
    func_0x000104bee708();
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  return;
}



/* Entry: 1087c40f8; end: 1087c4147;  */

undefined8 * FUN_1087c40f8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27a04();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return param_1;
    }
    func_0x000107c279ac();
    func_0x0001006a07dc();
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      func_0x00010066f190(param_1,*param_2,param_2[1]);
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1087c4148; end: 1087c4173;  */

void FUN_1087c4148(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087c5a98();
  FUN_1087c4198();
  FUN_1087c4350(unaff_x20 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 1087c4174; end: 1087c4197;  */

void FUN_1087c4174(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000104bee430();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1087c4198; end: 1087c41bf;  */

long FUN_1087c4198(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104bee5a8();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return param_1;
    }
    FUN_108685434();
    func_0x0001006a07dc();
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      func_0x0001087c5a88();
      FUN_1087c41ec();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1087c41c0; end: 1087c41eb;  */

long FUN_1087c41c0(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001087c5a88();
    FUN_1087c41ec();
  }
  return param_1;
}



/* Entry: 1087c41ec; end: 1087c41f7;  */

void FUN_1087c41ec(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = param_3 - param_2 >> 5;
  lVar3 = param_3;
  uVar2 = uVar1;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 >> 5) < uVar2) {
    func_0x000108794824();
    func_0x000105285cbc();
    FUN_1086854a0();
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8) - lVar3;
    if (uVar1 <= (ulong)(lVar3 >> 5)) {
      FUN_1087c42c4(param_2,param_3);
      lVar3 = unaff_x19;
      func_0x000104befd58();
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x20;
        func_0x000100100fec();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c42c4(param_2,param_2 + lVar3);
  }
  lVar3 = unaff_x19;
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086854f4();
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}


