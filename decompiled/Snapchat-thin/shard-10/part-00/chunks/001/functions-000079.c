/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10743c6a8; end: 10743c6bf;  */

void FUN_10743c6a8(void)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return;
}



/* Entry: 10743c6c0; end: 10743c6e7;  */

void FUN_10743c6c0(undefined8 param_1)

{
  func_0x00010743c88c();
  func_0x00010743c874(param_1,&PTR_DAT_1109b0218);
  func_0x00010743c85c();
  return;
}



/* Entry: 10743c6e8; end: 10743c6fb;  */

undefined ** FUN_10743c6e8(void)

{
  return &PTR_DAT_1109b0218;
}



/* Entry: 10743c6fc; end: 10743c71b;  */

void FUN_10743c6fc(undefined8 *param_1)

{
  func_0x00010743c86c();
  *param_1 = &PTR_DAT_1109b0238;
  return;
}



/* Entry: 10743c71c; end: 10743c743;  */

void FUN_10743c71c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b0238;
  return;
}



/* Entry: 10743c744; end: 10743c76b;  */

void FUN_10743c744(undefined8 param_1)

{
  func_0x00010743c88c();
  func_0x00010743c874(param_1,&PTR_DAT_1109b02a8);
  func_0x00010743c85c();
  return;
}



/* Entry: 10743c76c; end: 10743c77f;  */

undefined ** FUN_10743c76c(void)

{
  return &PTR_DAT_1109b02a8;
}



/* Entry: 10743c780; end: 10743c79f;  */

void FUN_10743c780(undefined8 *param_1)

{
  func_0x00010743c86c();
  *param_1 = &PTR_DAT_1109b02c8;
  return;
}



/* Entry: 10743c7a0; end: 10743c7bb;  */

void FUN_10743c7a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b02c8;
  return;
}



/* Entry: 10743c7bc; end: 10743c81b;  */

void FUN_10743c7bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_5;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  FUN_10743f9dc(param_1 + 8,param_2,param_3,&uStack_40,uVar1);
  return;
}



/* Entry: 10743c81c; end: 10743c843;  */

void FUN_10743c81c(undefined8 param_1)

{
  func_0x00010743c88c();
  func_0x00010743c874(param_1,&PTR_DAT_1109b0338);
  func_0x00010743c85c();
  return;
}



/* Entry: 10743c844; end: 10743c897;  */

undefined ** FUN_10743c844(void)

{
  return &PTR_DAT_1109b0338;
}



/* Entry: 10743c898; end: 10743c91f;  */

undefined8 * FUN_10743c898(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110997da0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_DAT_110996720;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  FUN_10743cf84(param_1 + 0x10);
  param_1[0x20] = 0;
  return param_1;
}



/* Entry: 10743c920; end: 10743c9cb;  */

long FUN_10743c920(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  func_0x00010743d7a8();
  FUN_10743d1c4();
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  FUN_10743d348(param_1 + 0x80,param_4);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return param_1;
}



/* Entry: 10743c9cc; end: 10743ca13;  */

void FUN_10743c9cc(long param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  pbVar1 = (byte *)(param_1 + 0x78);
  if (*pbVar1 == 0) {
    lVar4 = param_1 + 0x80;
    FUN_10743ca14();
    if ((param_2 & 1) != 0) {
      *(long *)(param_1 + 0x100) = lVar4;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar3) {
        *pbVar1 = *pbVar1 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10743ca14; end: 10743ca2b;  */

void FUN_10743ca14(void)

{
  func_0x00010743d5a0();
  return;
}



/* Entry: 10743ca2c; end: 10743cb1f;  */

void FUN_10743ca2c(long param_1,ulong param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  if ((bRam0000000113822c00 & 1) == 0) {
    lVar4 = 0x113822c00;
    ___cxa_guard_acquire();
    if ((int)lVar4 != 0) {
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puRam0000000113822bf8 = (undefined8 *)(lVar4 + 8);
      ___cxa_guard_release(0x113822c00);
    }
  }
  pbVar1 = (byte *)(param_1 + 0x78);
  if (*pbVar1 == 1) {
    lVar4 = param_1 + 0xa0;
    FUN_10743ca14();
    if ((param_2 & 1) != 0) {
      lStack_38 = (lVar4 - *(long *)(param_1 + 0x100)) / 1000;
      uStack_48 = *puRam0000000113822bf8;
      uStack_40 = 3;
      FUN_10743cb20(param_1 + 0xe0,param_1 + 8,&lStack_38,&uStack_48,*(undefined4 *)(param_1 + 0x7c)
                   );
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar3) {
          *pbVar1 = *pbVar1 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar3) {
        *pbVar1 = *pbVar1 | 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10743cb20; end: 10743cb43;  */

void FUN_10743cb20(void)

{
  func_0x00010743d5c4();
  return;
}



/* Entry: 10743cb44; end: 10743cc1b;  */

void FUN_10743cb44(long param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  if ((bRam0000000113822c10 & 1) == 0) {
    lVar4 = 0x113822c10;
    ___cxa_guard_acquire();
    if ((int)lVar4 != 0) {
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puRam0000000113822c08 = (undefined8 *)(lVar4 + 8);
      ___cxa_guard_release(0x113822c10);
    }
  }
  pbVar1 = (byte *)(param_1 + 0x78);
  if (*pbVar1 == 3) {
    lVar4 = param_1 + 0xc0;
    FUN_10743cc1c();
    uStack_38 = (undefined1)param_2;
    if ((param_2 & 1) != 0) {
      uStack_50 = *puRam0000000113822c08;
      uStack_48 = 3;
      lStack_40 = lVar4;
      FUN_10743cb20(param_1 + 0xe0,param_1 + 8,&lStack_40,&uStack_50,*(undefined4 *)(param_1 + 0x7c)
                   );
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar3) {
          *pbVar1 = *pbVar1 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10743cc1c; end: 10743cc33;  */

void FUN_10743cc1c(void)

{
  func_0x00010743d5e4();
  return;
}



/* Entry: 10743cc34; end: 10743ce23;  */

undefined ***
FUN_10743cc34(undefined ***param_1,undefined ***param_2,undefined ***param_3,undefined ***param_4)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  uint *puVar11;
  undefined ***pppuStack_1c0;
  undefined1 uStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined1 uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **appuStack_138 [14];
  undefined **ppuStack_c8;
  undefined **appuStack_c0 [2];
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined4 uStack_a0;
  undefined **ppuStack_98;
  undefined ****ppppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_3;
  puVar11 = puRam00000001131ad760;
  puVar1 = puRam00000001131ad768;
  if ((bRam00000001131ad778 & 1) == 0) {
    iVar3 = 0x131ad778;
    ___cxa_guard_acquire();
    puVar11 = puRam00000001131ad760;
    puVar1 = puRam00000001131ad768;
    if (iVar3 != 0) {
      ppuStack_c8 = (undefined **)CONCAT44(ppuStack_c8._4_4_,1);
      pppuStack_a8 = appuStack_c0;
      appuStack_c0[0] = &PTR_FUN_1109b0568;
      uStack_a0 = 2;
      pppuStack_80 = &ppuStack_98;
      ppuStack_98 = &PTR_DAT_1109b05f8;
      pppuVar8 = &ppuStack_c8;
      param_4 = (undefined ***)0x2;
      FUN_10743ce24(0x1131ad760);
      lVar9 = 0x30;
      do {
        FUN_10743d474((long)appuStack_c0 + lVar9 + -8);
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != -0x20);
      ___cxa_guard_release(0x1131ad778);
      puVar11 = puRam00000001131ad760;
      puVar1 = puRam00000001131ad768;
    }
  }
  for (; puVar11 != puVar1; puVar11 = puVar11 + 10) {
    puVar4 = puVar11 + 2;
    pppuVar8 = param_2;
    FUN_10743d580();
    if (((ulong)puVar4 & 1) == 0) {
      param_3 = (undefined ***)(ulong)((uint)param_3 & (*puVar11 ^ 0xffffffff));
    }
  }
  if ((uint)param_3 == 0) {
    FUN_10743c898();
  }
  else {
    func_0x00010726e6c0(appuStack_138,param_2);
    pppuStack_b0 = &ppuStack_c8;
    ppuStack_c8 = &PTR_FUN_1109b0128;
    ppppuStack_90 = &pppuStack_a8;
    pppuStack_a8 = (undefined ***)&PTR_DAT_1109b01b8;
    pppuStack_70 = &ppuStack_88;
    ppuStack_88 = &PTR_DAT_1109b0238;
    pppuStack_50 = appuStack_68;
    appuStack_68[0] = &PTR_DAT_1109b02c8;
    pppuVar8 = appuStack_138;
    FUN_10743c920(param_1,pppuVar8,param_3,&ppuStack_c8);
    func_0x000107288d2c(&ppuStack_c8);
    param_1 = appuStack_138;
    func_0x000107262330();
    param_4 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = 0x30;
  do {
    FUN_10743d474((long)puVar11 + lVar9);
    lVar9 = lVar9 + -0x28;
  } while (lVar9 != -0x20);
  pppuVar5 = (undefined ***)0x1131ad778;
  ___cxa_guard_abort();
  func_0x00010743d78c();
  pppuVar5[2] = (undefined **)0x0;
  *pppuVar5 = (undefined **)0x0;
  pppuVar5[1] = (undefined **)0x0;
  uStack_1b8 = 0;
  pppuStack_1c0 = pppuVar5;
  if (param_4 != (undefined ***)0x0) {
    if ((undefined ***)0x666666666666666 < param_4) {
      FUN_10743d51c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10743cf5c);
      (*pcVar2)();
    }
    ppuVar10 = (undefined **)((long)param_4 * 0x28);
    ppuVar6 = ppuVar10;
    __Znwm();
    *pppuVar5 = ppuVar6;
    pppuVar5[1] = ppuVar6;
    pppuVar5[2] = ppuVar6 + (long)param_4 * 5;
    pppuStack_1a8 = &ppuStack_190;
    pppuStack_1a0 = &ppuStack_188;
    pppuVar8 = pppuVar8 + 4;
    uStack_198 = 0;
    pppuStack_1b0 = pppuVar5 + 2;
    ppuStack_190 = ppuVar6;
    for (; ppuStack_188 = ppuVar6, ppuVar10 != (undefined **)0x0; ppuVar10 = ppuVar10 + -5) {
      *(undefined4 *)ppuVar6 = *(undefined4 *)(pppuVar8 + -4);
      pppuVar7 = (undefined ***)*pppuVar8;
      if (pppuVar7 == (undefined ***)0x0) {
LAB_10743cee0:
        ppuVar6[4] = (undefined *)pppuVar7;
      }
      else {
        if (pppuVar8 + -3 != pppuVar7) {
          (*(code *)(*pppuVar7)[2])();
          goto LAB_10743cee0;
        }
        ppuVar6[4] = (undefined *)(ppuVar6 + 1);
        (**(code **)(**pppuVar8 + 0x18))();
      }
      ppuVar6 = ppuStack_188 + 5;
      pppuVar8 = pppuVar8 + 5;
    }
    uStack_198 = 1;
    FUN_10743d530(&pppuStack_1b0);
    pppuVar5[1] = ppuVar6;
  }
  uStack_1b8 = 1;
  FUN_10743d4b8(&pppuStack_1c0);
  return pppuVar5;
}



/* Entry: 10743ce24; end: 10743cf83;  */

undefined8 * FUN_10743ce24(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined4 **ppuStack_68;
  undefined4 **ppuStack_60;
  undefined1 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_78 = 0;
  puStack_80 = param_1;
  if (param_3 != 0) {
    if (0x666666666666666 < param_3) {
      FUN_10743d51c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10743cf5c);
      (*pcVar2)();
    }
    puVar5 = (undefined4 *)(param_3 * 0x28);
    puVar3 = puVar5;
    __Znwm();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + param_3 * 10;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    plVar1 = (long *)(param_2 + 0x20);
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar3;
    for (; puStack_48 = puVar3, puVar5 != (undefined4 *)0x0; puVar5 = puVar5 + -10) {
      *puVar3 = (int)plVar1[-4];
      plVar4 = (long *)*plVar1;
      if (plVar4 == (long *)0x0) {
LAB_10743cee0:
        *(long **)(puVar3 + 8) = plVar4;
      }
      else {
        if (plVar1 + -3 != plVar4) {
          (**(code **)(*plVar4 + 0x10))();
          goto LAB_10743cee0;
        }
        *(undefined4 **)(puVar3 + 8) = puVar3 + 2;
        (**(code **)(*(long *)*plVar1 + 0x18))();
      }
      puVar3 = puStack_48 + 10;
      plVar1 = plVar1 + 5;
    }
    uStack_58 = 1;
    FUN_10743d530(&puStack_70);
    param_1[1] = puVar3;
  }
  uStack_78 = 1;
  FUN_10743d4b8(&puStack_80);
  return param_1;
}



/* Entry: 10743cf84; end: 10743cfdb;  */

void FUN_10743cf84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b0358;
  param_1[3] = param_1;
  param_1[4] = &PTR_DAT_1109b03d8;
  param_1[7] = param_1 + 4;
  param_1[8] = &PTR_DAT_1109b0458;
  param_1[0xb] = param_1 + 8;
  param_1[0xc] = &PTR_DAT_1109b04d8;
  param_1[0xf] = param_1 + 0xc;
  return;
}



/* Entry: 10743cfdc; end: 10743cffb;  */

void FUN_10743cfdc(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_DAT_1109b0358;
  return;
}



/* Entry: 10743cffc; end: 10743d01b;  */

void FUN_10743cffc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b0358;
  return;
}



/* Entry: 10743d01c; end: 10743d043;  */

void FUN_10743d01c(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b03b8);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d044; end: 10743d057;  */

undefined ** FUN_10743d044(void)

{
  return &PTR_DAT_1109b03b8;
}



/* Entry: 10743d058; end: 10743d077;  */

void FUN_10743d058(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_DAT_1109b03d8;
  return;
}



/* Entry: 10743d078; end: 10743d097;  */

void FUN_10743d078(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b03d8;
  return;
}



/* Entry: 10743d098; end: 10743d0bf;  */

void FUN_10743d098(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b0438);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d0c0; end: 10743d0d3;  */

undefined ** FUN_10743d0c0(void)

{
  return &PTR_DAT_1109b0438;
}



/* Entry: 10743d0d4; end: 10743d0f3;  */

void FUN_10743d0d4(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_DAT_1109b0458;
  return;
}



/* Entry: 10743d0f4; end: 10743d113;  */

void FUN_10743d0f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b0458;
  return;
}



/* Entry: 10743d114; end: 10743d13b;  */

void FUN_10743d114(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b04b8);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d13c; end: 10743d14f;  */

undefined ** FUN_10743d13c(void)

{
  return &PTR_DAT_1109b04b8;
}



/* Entry: 10743d150; end: 10743d16f;  */

void FUN_10743d150(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_DAT_1109b04d8;
  return;
}



/* Entry: 10743d170; end: 10743d18f;  */

void FUN_10743d170(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b04d8;
  return;
}



/* Entry: 10743d190; end: 10743d1b7;  */

void FUN_10743d190(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b0538);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d1b8; end: 10743d1c3;  */

undefined ** FUN_10743d1b8(void)

{
  return &PTR_DAT_1109b0538;
}



/* Entry: 10743d1c4; end: 10743d223;  */

long FUN_10743d1c4(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  FUN_10743d224();
  FUN_10743d2e4(lVar2 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



/* Entry: 10743d224; end: 10743d253;  */

undefined1 * FUN_10743d224(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10743d254();
  return param_1;
}



/* Entry: 10743d254; end: 10743d2b3;  */

void FUN_10743d254(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  func_0x0001072622ec();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_1109b0548)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10743d2b4; end: 10743d2e3;  */

void FUN_10743d2b4(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10743d2e4; end: 10743d317;  */

void FUN_10743d2e4(undefined8 *param_1,long param_2)

{
  FUN_10743d318();
  *param_1 = &PTR_DAT_110996720;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 10743d318; end: 10743d347;  */

void FUN_10743d318(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110996788;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10743d348; end: 10743d38f;  */

long FUN_10743d348(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10743d390();
  FUN_10743d390(lVar1 + 0x20,param_2 + 0x20);
  FUN_10743d3dc(param_1 + 0x40,param_2 + 0x40);
  FUN_10743d428(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



/* Entry: 10743d390; end: 10743d3db;  */

long FUN_10743d390(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010743d75c();
    func_0x00010743d794();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10743d3dc; end: 10743d427;  */

long FUN_10743d3dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010743d75c();
    func_0x00010743d794();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10743d428; end: 10743d473;  */

long FUN_10743d428(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010743d75c();
    func_0x00010743d794();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10743d474; end: 10743d4b7;  */

long * FUN_10743d474(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10743d4b8; end: 10743d51b;  */

long * FUN_10743d4b8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      for (lVar1 = plVar2[1]; lVar1 != lVar3; lVar1 = lVar1 + -0x28) {
        FUN_10743d474(lVar1 + -0x20);
      }
      plVar2[1] = lVar3;
      __ZdlPv(*(undefined8 *)*param_1);
    }
  }
  return param_1;
}



/* Entry: 10743d51c; end: 10743d52f;  */

undefined * FUN_10743d51c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[0x18] & 1) == 0) {
    lVar3 = **(long **)(puVar1 + 8);
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != lVar3; lVar2 = lVar2 + -0x28) {
      FUN_10743d474(lVar2 + -0x20);
    }
  }
  return puVar1;
}



/* Entry: 10743d530; end: 10743d57f;  */

long FUN_10743d530(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
      FUN_10743d474(lVar1 + -0x20);
    }
  }
  return param_1;
}



/* Entry: 10743d580; end: 10743d607;  */

void FUN_10743d580(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010743d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  lVar2 = plVar1[3];
  if (lVar2 != 0) {
    func_0x00010743d79c();
    return;
  }
  func_0x000104bfeb48();
  plVar1 = *(long **)(lVar2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010743d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  if (plVar1[3] != 0) {
    func_0x00010743d79c();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10743d608; end: 10743d60f;  */

void FUN_10743d608(void)

{
  return;
}



/* Entry: 10743d610; end: 10743d62f;  */

void FUN_10743d610(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_FUN_1109b0568;
  return;
}



/* Entry: 10743d630; end: 10743d653;  */

void FUN_10743d630(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b0568;
  return;
}



/* Entry: 10743d654; end: 10743d67b;  */

void FUN_10743d654(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b05d8);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d67c; end: 10743d68f;  */

undefined ** FUN_10743d67c(void)

{
  return &PTR_DAT_1109b05d8;
}



/* Entry: 10743d690; end: 10743d6af;  */

void FUN_10743d690(undefined8 *param_1)

{
  func_0x00010743d754();
  *param_1 = &PTR_DAT_1109b05f8;
  return;
}



/* Entry: 10743d6b0; end: 10743d6d3;  */

void FUN_10743d6b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b05f8;
  return;
}



/* Entry: 10743d6d4; end: 10743d6fb;  */

void FUN_10743d6d4(undefined8 param_1)

{
  func_0x00010743d770();
  func_0x00010743d738(param_1,&PTR_DAT_1109b0658);
  func_0x00010743d714();
  return;
}



/* Entry: 10743d6fc; end: 10743d7bb;  */

undefined ** FUN_10743d6fc(void)

{
  return &PTR_DAT_1109b0658;
}



/* Entry: 10743d7bc; end: 10743d7e3;  */

undefined8 FUN_10743d7bc(undefined8 param_1)

{
  func_0x00010743c970();
  FUN_10743c9cc();
  return param_1;
}



/* Entry: 10743d7e4; end: 10743d80b;  */

undefined8 * FUN_10743d7e4(undefined8 *param_1)

{
  FUN_10743ca2c();
  *param_1 = &PTR_DAT_110997da0;
  func_0x000107288d2c(param_1 + 0x10);
  func_0x000107262330(param_1 + 1);
  return param_1;
}



/* Entry: 10743d80c; end: 10743d83f;  */

long * FUN_10743d80c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_10743c9cc();
  }
  return param_1;
}



/* Entry: 10743d840; end: 10743d89b;  */

long * FUN_10743d840(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10743ca2c();
    if (((*(byte *)(*param_1 + 0x78) ^ 0xff) & 7) != 0) {
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      FUN_10743faf4(lVar1 + 8,param_1);
    }
  }
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 10743d89c; end: 10743d8cf;  */

long * FUN_10743d89c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10743d8d0; end: 10743d8d7;  */

void FUN_10743d8d0(void)

{
  return;
}



/* Entry: 10743d8d8; end: 10743dadf;  */

undefined8 * FUN_10743d8d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar4;
  param_1[3] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  uStack_60 = 1;
  ppuStack_68 = &PTR_FUN_1109b0b20;
  uVar4 = 1;
  __Znwm();
  puVar5 = (undefined8 *)0x8;
  uStack_58 = uVar4;
  __Znwm();
  *puVar5 = &PTR_FUN_1109b06d8;
  uStack_a8 = 2;
  ppuStack_b0 = &PTR_DAT_1109b08a8;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_80 = 0x3f800000;
  uVar6 = 0xa8;
  __Znwm();
  _bzero();
  __ZNSt3__119__shared_mutex_baseC1Ev(uVar6);
  uVar4 = uStack_58;
  uVar3 = uStack_98;
  lVar2 = lStack_a0;
  param_1[0x16] = lStack_90;
  *(undefined4 *)(param_1 + 0x10) = uStack_60;
  param_1[0xf] = &PTR_FUN_1109b0b20;
  *(undefined4 *)(param_1 + 0x13) = uStack_a8;
  uStack_58 = 0;
  param_1[0x11] = uVar4;
  param_1[0x12] = &PTR_DAT_1109b08a8;
  lStack_a0 = 0;
  uStack_98 = 0;
  param_1[0x14] = lVar2;
  param_1[0x15] = uVar3;
  param_1[0x17] = lStack_88;
  *(undefined4 *)(param_1 + 0x18) = uStack_80;
  if (lStack_88 != 0) {
    uVar7 = *(ulong *)(lStack_90 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    *(undefined8 **)(lVar2 + uVar7 * 8) = param_1 + 0x16;
    lStack_90 = 0;
    lStack_88 = 0;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  param_1[0x19] = uVar6;
  param_1[0x1a] = puVar5;
  FUN_10743e1e0(&ppuStack_b0);
  FUN_10743f7b4(&ppuStack_68);
  return param_1;
}



/* Entry: 10743dae0; end: 10743dbf7;  */

void FUN_10743dae0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  func_0x0001072ab574(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 < *(undefined8 **)(param_1 + 0x70)) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x60);
    lVar9 = (long)puVar2 - lVar8;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10743e380();
LAB_10743dbe0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10743dbe4);
      (*pcVar3)();
    }
    uVar6 = (long)*(undefined8 **)(param_1 + 0x70) - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10743dbe0;
      }
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar9);
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar2 + 1;
    *puVar2 = uVar5;
    _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
    *(undefined8 **)(param_1 + 0x60) = puVar2 + -(lVar9 >> 3);
    *(undefined8 **)(param_1 + 0x68) = puVar10;
    *(ulong *)(param_1 + 0x70) = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  *(undefined8 **)(param_1 + 0x68) = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10743dbf8; end: 10743dc8b;  */

void FUN_10743dbf8(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(uint *)(param_1 + 0x80) & param_2) != 0) {
    func_0x00010743e790(*(undefined8 *)(param_4 + 0x18),param_1 + 0x78);
  }
  if ((*(uint *)(param_1 + 0x98) & param_2) != 0) {
    func_0x00010743e790(*(undefined8 *)(param_4 + 0x18),param_1 + 0x90);
  }
  plVar1 = *(long **)(param_1 + 0x10);
  for (plVar2 = *(long **)(param_1 + 8); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((*(uint *)(*plVar2 + 8) & param_2) != 0) {
      func_0x00010743e790(*(undefined8 *)(param_4 + 0x18));
    }
  }
  return;
}



/* Entry: 10743dc8c; end: 10743dcc3;  */

undefined8 * FUN_10743dc8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1109b0678;
  FUN_10743dcc4(param_1 + 1,param_2,param_3);
  return param_1;
}



/* Entry: 10743dcc4; end: 10743dd4f;  */

void FUN_10743dcc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = 0xd8;
  __Znwm();
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10743d8d8();
  *param_1 = uVar1;
  func_0x00010743e2a8(&uStack_50);
  return;
}



/* Entry: 10743dd50; end: 10743dda7;  */

undefined8 * FUN_10743dd50(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_1109b0678;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10743e1e0(lVar1 + 0x90);
    FUN_10743f7b4(lVar1 + 0x78);
    FUN_10743e280(lVar1 + 0x20);
    func_0x00010743e2a8(lVar1 + 8);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10743dda8; end: 10743ddab;  */

undefined8 * FUN_10743dda8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_1109b0678;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10743e1e0(lVar1 + 0x90);
    FUN_10743f7b4(lVar1 + 0x78);
    FUN_10743e280(lVar1 + 0x20);
    func_0x00010743e2a8(lVar1 + 8);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10743ddac; end: 10743ddbf;  */

void FUN_10743ddac(void)

{
  FUN_10743dd50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743ddc0; end: 10743deb7;  */

void FUN_10743ddc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010743e744(*(undefined8 *)(lVar2 + 0x78));
  func_0x00010743e744(*(undefined8 *)(lVar2 + 0x90));
  puVar1 = *(undefined8 **)(lVar2 + 0x10);
  for (puVar3 = *(undefined8 **)(lVar2 + 8); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    func_0x00010743e744(*(undefined8 *)*puVar3);
  }
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  func_0x0001072ab574(lVar2 + 0x20);
  plVar4 = *(long **)(lVar2 + 0x60);
  uStack_38 = *(undefined8 *)(lVar2 + 0x70);
  plVar5 = *(long **)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  plStack_48 = plVar4;
  plStack_40 = plVar5;
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x20);
  for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
    FUN_10743cb44(*plVar4);
    if (((*(byte *)(*plVar4 + 0x78) ^ 0xff) & 7) != 0) {
      FUN_10743dae0(lVar2,plVar4);
    }
  }
  FUN_10743e3b0(&plStack_48);
  return;
}



/* Entry: 10743deb8; end: 10743df47;  */

void FUN_10743deb8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [3];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 auStack_68 [3];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar8 = param_5;
  func_0x00010743e7a8();
  lVar14 = *(long *)(param_1 + 8);
  uVar15 = *param_3;
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_DAT_1109b0718;
  puVar4[1] = uVar15;
  uVar15 = *param_4;
  puVar4[3] = param_4[1];
  puVar4[2] = uVar15;
  puVar10 = auStack_68;
  puStack_50 = puVar4;
  FUN_10743dbf8();
  func_0x00010743e76c();
  func_0x00010743e734(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x00010743e76c();
    func_0x00010743e764();
    pcStack_78 = FUN_10743df48;
    puVar9 = puVar8;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010743e7a8();
    lVar14 = *(long *)(lVar14 + 8);
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    *puVar5 = &PTR_FUN_1109b07a8;
    uVar15 = *param_2;
    puVar5[2] = param_2[1];
    puVar5[1] = uVar15;
    uVar15 = *puVar10;
    puVar5[4] = puVar10[1];
    puVar5[3] = uVar15;
    puVar4 = auStack_d8;
    puStack_c0 = puVar5;
    FUN_10743dbf8(lVar14,puVar8);
    func_0x00010743e76c();
    func_0x00010743e734(uStack_b8);
    if (extraout_x9_00 != extraout_x8_00) {
      ___stack_chk_fail();
      lVar3 = lVar14;
      func_0x00010743e76c();
      func_0x00010743e764();
      pcStack_e8 = FUN_10743dfe0;
      puStack_100 = puVar10;
      lStack_f8 = lVar14;
      ppuStack_f0 = &puStack_80;
      func_0x00010743e734(puVar8);
      uStack_138 = param_5[1];
      uStack_140 = *param_5;
      uStack_148 = puVar4[1];
      uStack_150 = *puVar4;
      puStack_120 = &uStack_140;
      ppuStack_128 = &PTR_DAT_1109b0828;
      pppuStack_110 = &ppuStack_128;
      puStack_118 = (undefined1 *)&uStack_150;
      uStack_108 = extraout_x9_01;
      FUN_10743dbf8(*(undefined8 *)(lVar3 + 8),puVar9,extraout_x8_01,&ppuStack_128);
      FUN_10743e514();
      func_0x00010743e734(uStack_108);
      if (extraout_x9_02 == extraout_x8_02) {
        return;
      }
      ___stack_chk_fail();
      pppuVar6 = &ppuStack_128;
      FUN_10743e514();
      func_0x00010743e764();
      ppuVar7 = pppuVar6[1];
      func_0x0001072ab574(ppuVar7 + 4);
      puVar10 = (undefined8 *)ppuVar7[0xd];
      if (puVar10 < ppuVar7[0xe]) {
        uVar15 = *puVar9;
        *puVar9 = 0;
        puVar8 = puVar10 + 1;
        *puVar10 = uVar15;
      }
      else {
        puVar13 = ppuVar7[0xc];
        lVar14 = (long)puVar10 - (long)puVar13;
        uVar1 = (lVar14 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10743e380();
LAB_10743dbe0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10743dbe4);
          (*pcVar2)();
        }
        uVar11 = (long)ppuVar7[0xe] - (long)puVar13;
        uVar12 = (long)uVar11 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 == 0) {
          lVar3 = 0;
        }
        else {
          if (uVar12 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10743dbe0;
          }
          lVar3 = uVar12 << 3;
          __Znwm();
        }
        puVar10 = (undefined8 *)(lVar3 + lVar14);
        uVar15 = *puVar9;
        *puVar9 = 0;
        puVar8 = puVar10 + 1;
        *puVar10 = uVar15;
        _memcpy(puVar10 + -(lVar14 >> 3),puVar13,lVar14);
        ppuVar7[0xc] = (undefined *)(puVar10 + -(lVar14 >> 3));
        ppuVar7[0xd] = (undefined *)puVar8;
        ppuVar7[0xe] = (undefined *)(lVar3 + uVar12 * 8);
        if (puVar13 != (undefined *)0x0) {
          __ZdlPv(puVar13);
        }
      }
      ppuVar7[0xd] = (undefined *)puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar7 + 4);
      return;
    }
  }
  return;
}



/* Entry: 10743df48; end: 10743dfdf;  */

void FUN_10743df48(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 auStack_68 [3];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar7 = param_5;
  func_0x00010743e7a8();
  lVar13 = *(long *)(param_1 + 8);
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  *puVar4 = &PTR_FUN_1109b07a8;
  uVar9 = *param_3;
  puVar4[2] = param_3[1];
  puVar4[1] = uVar9;
  uVar9 = *param_4;
  puVar4[4] = param_4[1];
  puVar4[3] = uVar9;
  puVar8 = auStack_68;
  puStack_50 = puVar4;
  FUN_10743dbf8(lVar13,param_5);
  func_0x00010743e76c();
  func_0x00010743e734(uStack_48);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar13;
  func_0x00010743e76c();
  func_0x00010743e764();
  pcStack_78 = FUN_10743dfe0;
  puStack_90 = param_4;
  lStack_88 = lVar13;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010743e734(param_5);
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  puStack_b0 = &uStack_d0;
  ppuStack_b8 = &PTR_DAT_1109b0828;
  pppuStack_a0 = &ppuStack_b8;
  puStack_a8 = (undefined1 *)&uStack_e0;
  uStack_98 = extraout_x9_00;
  FUN_10743dbf8(*(undefined8 *)(lVar3 + 8),puVar7,extraout_x8_00,&ppuStack_b8);
  FUN_10743e514();
  func_0x00010743e734(uStack_98);
  if (extraout_x9_01 == extraout_x8_01) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_b8;
  FUN_10743e514();
  func_0x00010743e764();
  ppuVar6 = pppuVar5[1];
  func_0x0001072ab574(ppuVar6 + 4);
  puVar8 = (undefined8 *)ppuVar6[0xd];
  if (puVar8 < ppuVar6[0xe]) {
    uVar9 = *puVar7;
    *puVar7 = 0;
    puVar7 = puVar8 + 1;
    *puVar8 = uVar9;
  }
  else {
    puVar12 = ppuVar6[0xc];
    lVar13 = (long)puVar8 - (long)puVar12;
    uVar1 = (lVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10743e380();
LAB_10743dbe0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10743dbe4);
      (*pcVar2)();
    }
    uVar10 = (long)ppuVar6[0xe] - (long)puVar12;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar11 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10743dbe0;
      }
      lVar3 = uVar11 << 3;
      __Znwm();
    }
    puVar8 = (undefined8 *)(lVar3 + lVar13);
    uVar9 = *puVar7;
    *puVar7 = 0;
    puVar7 = puVar8 + 1;
    *puVar8 = uVar9;
    _memcpy(puVar8 + -(lVar13 >> 3),puVar12,lVar13);
    ppuVar6[0xc] = (undefined *)(puVar8 + -(lVar13 >> 3));
    ppuVar6[0xd] = (undefined *)puVar7;
    ppuVar6[0xe] = (undefined *)(lVar3 + uVar11 * 8);
    if (puVar12 != (undefined *)0x0) {
      __ZdlPv(puVar12);
    }
  }
  ppuVar6[0xd] = (undefined *)puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar6 + 4);
  return;
}



/* Entry: 10743dfe0; end: 10743e073;  */

void FUN_10743dfe0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined8 *puStack_40;
  undefined1 *puStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010743e734(param_2);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  puStack_40 = &uStack_60;
  ppuStack_48 = &PTR_DAT_1109b0828;
  pppuStack_30 = &ppuStack_48;
  puStack_38 = (undefined1 *)&uStack_70;
  uStack_28 = extraout_x9;
  FUN_10743dbf8(*(undefined8 *)(param_1 + 8),param_5,extraout_x8,&ppuStack_48);
  FUN_10743e514();
  func_0x00010743e734(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_48;
  FUN_10743e514();
  func_0x00010743e764();
  ppuVar6 = pppuVar5[1];
  func_0x0001072ab574(ppuVar6 + 4);
  puVar2 = (undefined8 *)ppuVar6[0xd];
  if (puVar2 < ppuVar6[0xe]) {
    uVar7 = *param_5;
    *param_5 = 0;
    puVar12 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar10 = ppuVar6[0xc];
    lVar11 = (long)puVar2 - (long)puVar10;
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10743e380();
LAB_10743dbe0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10743dbe4);
      (*pcVar3)();
    }
    uVar8 = (long)ppuVar6[0xe] - (long)puVar10;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10743dbe0;
      }
      lVar4 = uVar9 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar11);
    uVar7 = *param_5;
    *param_5 = 0;
    puVar12 = puVar2 + 1;
    *puVar2 = uVar7;
    _memcpy(puVar2 + -(lVar11 >> 3),puVar10,lVar11);
    ppuVar6[0xc] = (undefined *)(puVar2 + -(lVar11 >> 3));
    ppuVar6[0xd] = (undefined *)puVar12;
    ppuVar6[0xe] = (undefined *)(lVar4 + uVar9 * 8);
    if (puVar10 != (undefined *)0x0) {
      __ZdlPv(puVar10);
    }
  }
  ppuVar6[0xd] = (undefined *)puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(ppuVar6 + 4);
  return;
}



/* Entry: 10743e074; end: 10743e07f;  */

void FUN_10743e074(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar5 = *(long *)(param_1 + 8);
  func_0x0001072ab574(lVar5 + 0x20);
  puVar2 = *(undefined8 **)(lVar5 + 0x68);
  if (puVar2 < *(undefined8 **)(lVar5 + 0x70)) {
    uVar6 = *param_2;
    *param_2 = 0;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x60);
    lVar10 = (long)puVar2 - lVar9;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10743e380();
LAB_10743dbe0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10743dbe4);
      (*pcVar3)();
    }
    uVar7 = (long)*(undefined8 **)(lVar5 + 0x70) - lVar9;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10743dbe0;
      }
      lVar4 = uVar8 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar10);
    uVar6 = *param_2;
    *param_2 = 0;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar6;
    _memcpy(puVar2 + -(lVar10 >> 3),lVar9,lVar10);
    *(undefined8 **)(lVar5 + 0x60) = puVar2 + -(lVar10 >> 3);
    *(undefined8 **)(lVar5 + 0x68) = puVar11;
    *(ulong *)(lVar5 + 0x70) = lVar4 + uVar8 * 8;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
  }
  *(undefined8 **)(lVar5 + 0x68) = puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x20);
  return;
}



/* Entry: 10743e080; end: 10743e103;  */

long FUN_10743e080(long param_1)

{
  func_0x00010743e0a8(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10743e1c8(param_1,0);
  return param_1;
}



/* Entry: 10743e104; end: 10743e11b;  */

void FUN_10743e104(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10743e138(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10743e11c; end: 10743e137;  */

void FUN_10743e11c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10743e138(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743e138; end: 10743e1c7;  */

long FUN_10743e138(long param_1)

{
  undefined8 uVar1;
  
  func_0x0001072dddcc(param_1 + 0x80);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010743e784(uVar1);
  return param_1;
}



/* Entry: 10743e1c8; end: 10743e1df;  */

void FUN_10743e1c8(long *param_1)

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



/* Entry: 10743e1e0; end: 10743e24b;  */

undefined8 * FUN_10743e1e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b08a8;
  func_0x00010743e3f8(param_1 + 8);
  func_0x00010743e228(param_1 + 7);
  FUN_10743e080(param_1 + 2);
  return param_1;
}



/* Entry: 10743e24c; end: 10743e263;  */

void FUN_10743e24c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107276ba4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10743e264; end: 10743e27f;  */

void FUN_10743e264(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107276ba4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743e280; end: 10743e317;  */

void FUN_10743e280(long param_1)

{
  FUN_10743e3b0(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10743e318; end: 10743e31f;  */

void FUN_10743e318(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010743e358();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10743e320; end: 10743e37f;  */

void FUN_10743e320(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010743e358();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10743e380; end: 10743e3af;  */

long * FUN_10743e380(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010743e3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar2 = plVar1[1];
    while (lVar2 != lVar3) {
      lVar2 = lVar2 + -8;
      FUN_10743d89c();
    }
    plVar1[1] = lVar3;
    __ZdlPv(*plVar1);
  }
  return plVar1;
}



/* Entry: 10743e3b0; end: 10743e42b;  */

long * FUN_10743e3b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      FUN_10743d89c();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10743e42c; end: 10743e443;  */

undefined8 FUN_10743e42c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113822b08 & 1) == 0) {
    iVar1 = 0x13822b08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1074189fc(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam0000000113822b00 = puVar2;
      func_0x000100164334(auStack_68);
      ___cxa_guard_release(0x113822b08);
    }
  }
  return 0x113822b00;
}



/* Entry: 10743e444; end: 10743e47b;  */

void FUN_10743e444(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109b0718;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar2;
  return;
}



/* Entry: 10743e47c; end: 10743e4a7;  */

void FUN_10743e47c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109b0718;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  return;
}



/* Entry: 10743e4a8; end: 10743e4db;  */

void FUN_10743e4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010743e718(param_3,param_1,param_2,param_1 + 8);
  return;
}



/* Entry: 10743e4dc; end: 10743e507;  */

void FUN_10743e4dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010743e7a0(param_2,param_1,&PTR_DAT_1109b0788);
  func_0x00010743e774();
  return;
}


