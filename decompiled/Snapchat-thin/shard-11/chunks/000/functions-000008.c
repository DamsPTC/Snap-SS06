/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10802668c; end: 1080266db;  */

long * FUN_10802668c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *extraout_x8;
  long *unaff_x19;
  long *plVar4;
  long lStack_108;
  undefined1 uStack_c1;
  undefined4 auStack_c0 [18];
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x000108027720();
  func_0x00010802782c(&PTR_DAT_110a17cc0);
  func_0x000108027814(*(undefined8 *)(param_1 + 0x30));
  func_0x0001080277cc();
  func_0x00010802770c(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001080277dc();
  func_0x000108027880();
  func_0x000108027720();
  _memcpy(auStack_c0,&UNK_10deec984,0x48);
  puVar3 = auStack_c0;
  plVar1 = extraout_x8;
  FUN_10802717c(extraout_x8,puVar3,9,&uStack_c1);
  func_0x00010802770c(uStack_78);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  FUN_108027494();
  plVar4 = (long *)*plVar2;
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar2;
    func_0x0001080278e4();
    *(undefined4 *)(plVar4 + 4) = *puVar3;
    plVar4[5] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = lStack_108;
    *plVar2 = (long)plVar4;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
    }
    func_0x00010002c5b0(plVar1[1],plVar4);
    func_0x000108027868();
  }
  return plVar4 + 5;
}



/* Entry: 1080266dc; end: 10802673b;  */

long * FUN_1080266dc(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lStack_b8;
  undefined1 uStack_71;
  undefined4 auStack_70 [18];
  undefined8 uStack_28;
  
  func_0x000108027720();
  _memcpy(auStack_70,&UNK_10deec984,0x48);
  puVar2 = auStack_70;
  FUN_10802717c(param_1,puVar2,9,&uStack_71);
  func_0x00010802770c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar1 = param_1;
  FUN_108027494();
  plVar3 = (long *)*plVar1;
  if (plVar3 == (long *)0x0) {
    plVar3 = plVar1;
    func_0x0001080278e4();
    *(undefined4 *)(plVar3 + 4) = *puVar2;
    plVar3[5] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = lStack_b8;
    *plVar1 = (long)plVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
    }
    func_0x00010002c5b0(param_1[1],plVar3);
    func_0x000108027868();
  }
  return plVar3 + 5;
}



/* Entry: 10802673c; end: 1080267cb;  */

long * FUN_10802673c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_38;
  
  plVar1 = param_1;
  FUN_108027494(param_1,&lStack_38,*param_2);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    plVar2 = plVar1;
    func_0x0001080278e4();
    *(undefined4 *)(plVar2 + 4) = *param_2;
    plVar2[5] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = lStack_38;
    *plVar1 = (long)plVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
    }
    func_0x00010002c5b0(param_1[1],plVar2);
    func_0x000108027868();
  }
  return plVar2 + 5;
}



/* Entry: 1080267cc; end: 10802681f;  */

bool FUN_1080267cc(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(uint *)(plVar5 + 4)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(uint *)(plVar5 + 4)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < *(uint *)(plVar3 + 4))) {
    plVar3 = plVar1;
  }
  return plVar1 != plVar3;
}



/* Entry: 108026820; end: 108026853;  */

long * FUN_108026820(undefined **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined *puVar8;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long alStack_c8 [4];
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar7 = 0;
  FUN_108027494();
  if (*param_1 != (undefined *)0x0) {
    return (long *)(*param_1 + 0x28);
  }
  func_0x00010802795c();
  pcStack_28 = FUN_108026854;
  plVar9 = (long *)0x0;
  ppuVar2 = &PTR_PTR_1133aaf30;
  if (param_1 != (undefined **)0x0) {
    ppuVar2 = param_1;
  }
  ppuVar10 = &PTR_PTR_1133aad40;
  if ((undefined **)ppuVar2[6] != (undefined **)0x0) {
    ppuVar10 = (undefined **)ppuVar2[6];
  }
  ppuVar2 = &PTR_PTR_1133ab360;
  if ((undefined **)ppuVar10[4] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar10[4];
  }
  puVar8 = ppuVar2[2];
  ppuVar10 = ppuVar2 + 2;
  if (((ulong)puVar8 & 1) != 0) {
    ppuVar10 = (undefined **)(puVar8 + 7);
  }
  ppuVar2 = ppuVar10 + *(int *)(ppuVar2 + 3);
  puStack_30 = &stack0xfffffffffffffff0;
  do {
    bVar4 = ppuVar10 == ppuVar2;
    if (bVar4) {
      return plVar9;
    }
    func_0x00010802783c(*ppuVar10);
    puVar11 = extraout_x8;
    if (!bVar4) {
      puVar11 = extraout_x10;
    }
    puVar1 = puVar11 + *(int *)(extraout_x8 + 1);
    for (; uVar5 = puVar11 == puVar1, !(bool)uVar5; puVar11 = puVar11 + 1) {
      func_0x00010802783c(*puVar11);
      puVar3 = extraout_x8_00;
      if (!(bool)uVar5) {
        puVar3 = extraout_x10_00;
      }
      for (lVar12 = (long)*(int *)(extraout_x8_00 + 1) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
        plVar6 = *(long **)(param_2 + 0x18);
        if (plVar6 == (long *)0x0) {
          func_0x000104bfeb48();
          pcStack_88 = FUN_10802696c;
          lStack_a0 = param_2;
          plStack_98 = plVar9;
          ppuStack_90 = &puStack_30;
          func_0x000108027720();
          func_0x00010802782c(&PTR_DAT_110a17d40);
          FUN_108026854();
          plVar9 = alStack_c8;
          func_0x000108026d28(plVar9);
          func_0x00010802770c(uStack_a8);
          if ((bool)uVar5) {
            return plVar6;
          }
          ___stack_chk_fail();
          func_0x0001080277dc();
          func_0x000108027880();
          return plVar9;
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,*puVar3);
        if (((int)plVar6 != 0) && (plVar9 = (long *)(ulong)((int)plVar9 + 1), (uVar7 & 1) != 0)) {
          return plVar9;
        }
        puVar3 = puVar3 + 1;
      }
    }
    ppuVar10 = ppuVar10 + 1;
  } while( true );
}



/* Entry: 108026854; end: 10802696b;  */

long * FUN_108026854(undefined **param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined *puVar7;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long *plVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long alStack_a8 [4];
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  plVar8 = (long *)0x0;
  ppuVar2 = &PTR_PTR_1133aaf30;
  if (param_1 != (undefined **)0x0) {
    ppuVar2 = param_1;
  }
  ppuVar9 = &PTR_PTR_1133aad40;
  if ((undefined **)ppuVar2[6] != (undefined **)0x0) {
    ppuVar9 = (undefined **)ppuVar2[6];
  }
  ppuVar2 = &PTR_PTR_1133ab360;
  if ((undefined **)ppuVar9[4] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar9[4];
  }
  puVar7 = ppuVar2[2];
  ppuVar9 = ppuVar2 + 2;
  if (((ulong)puVar7 & 1) != 0) {
    ppuVar9 = (undefined **)(puVar7 + 7);
  }
  ppuVar2 = ppuVar9 + *(int *)(ppuVar2 + 3);
  do {
    bVar4 = ppuVar9 == ppuVar2;
    if (bVar4) {
      return plVar8;
    }
    func_0x00010802783c(*ppuVar9);
    puVar10 = extraout_x8;
    if (!bVar4) {
      puVar10 = extraout_x10;
    }
    puVar1 = puVar10 + *(int *)(extraout_x8 + 1);
    for (; uVar5 = puVar10 == puVar1, !(bool)uVar5; puVar10 = puVar10 + 1) {
      func_0x00010802783c(*puVar10);
      puVar3 = extraout_x8_00;
      if (!(bool)uVar5) {
        puVar3 = extraout_x10_00;
      }
      for (lVar11 = (long)*(int *)(extraout_x8_00 + 1) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
        plVar6 = *(long **)(param_3 + 0x18);
        if (plVar6 == (long *)0x0) {
          func_0x000104bfeb48();
          pcStack_68 = FUN_10802696c;
          lStack_80 = param_3;
          plStack_78 = plVar8;
          puStack_70 = &stack0xfffffffffffffff0;
          func_0x000108027720();
          func_0x00010802782c(&PTR_DAT_110a17d40);
          FUN_108026854();
          plVar8 = alStack_a8;
          func_0x000108026d28(plVar8);
          func_0x00010802770c(uStack_88);
          if ((bool)uVar5) {
            return plVar6;
          }
          ___stack_chk_fail();
          func_0x0001080277dc();
          func_0x000108027880();
          return plVar8;
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,*puVar3);
        if (((int)plVar6 != 0) && (plVar8 = (long *)(ulong)((int)plVar8 + 1), (param_2 & 1) != 0)) {
          return plVar8;
        }
        puVar3 = puVar3 + 1;
      }
    }
    ppuVar9 = ppuVar9 + 1;
  } while( true );
}



/* Entry: 10802696c; end: 1080269c7;  */

undefined1 * FUN_10802696c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x000108027720();
  func_0x00010802782c(&PTR_DAT_110a17d40);
  FUN_108026854();
  puVar1 = auStack_48;
  func_0x000108026d28(puVar1);
  func_0x00010802770c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001080277dc();
  func_0x000108027880();
  return puVar1;
}



/* Entry: 1080269c8; end: 1080269cf;  */

void FUN_1080269c8(void)

{
  return;
}



/* Entry: 1080269d0; end: 1080269ef;  */

void FUN_1080269d0(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_FUN_110a17b20;
  return;
}



/* Entry: 1080269f0; end: 108026a7b;  */

void FUN_1080269f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a17b20;
  return;
}



/* Entry: 108026a7c; end: 108026aa3;  */

void FUN_108026a7c(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17b90);
  func_0x000108027750();
  return;
}



/* Entry: 108026aa4; end: 108026ab7;  */

undefined ** FUN_108026aa4(void)

{
  return &PTR_DAT_110a17b90;
}



/* Entry: 108026ab8; end: 108026ad7;  */

void FUN_108026ab8(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_DAT_110a17bb0;
  return;
}



/* Entry: 108026ad8; end: 108026b43;  */

void FUN_108026ad8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a17bb0;
  return;
}



/* Entry: 108026b44; end: 108026b6b;  */

void FUN_108026b44(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17c20);
  func_0x000108027750();
  return;
}



/* Entry: 108026b6c; end: 108026b77;  */

undefined ** FUN_108026b6c(void)

{
  return &PTR_DAT_110a17c20;
}



/* Entry: 108026b78; end: 108026bab;  */

void FUN_108026b78(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010802792c();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010802785c(uVar1);
  return;
}



/* Entry: 108026bac; end: 108026bb3;  */

void FUN_108026bac(void)

{
  return;
}



/* Entry: 108026bb4; end: 108026bd3;  */

void FUN_108026bb4(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_FUN_110a17c40;
  return;
}



/* Entry: 108026bd4; end: 108026bff;  */

void FUN_108026bd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a17c40;
  return;
}



/* Entry: 108026c00; end: 108026c27;  */

void FUN_108026c00(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17ca0);
  func_0x000108027750();
  return;
}



/* Entry: 108026c28; end: 108026c3b;  */

undefined ** FUN_108026c28(void)

{
  return &PTR_DAT_110a17ca0;
}



/* Entry: 108026c3c; end: 108026c5b;  */

void FUN_108026c3c(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_DAT_110a17cc0;
  return;
}



/* Entry: 108026c5c; end: 108026cb3;  */

void FUN_108026c5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a17cc0;
  return;
}



/* Entry: 108026cb4; end: 108026cdb;  */

void FUN_108026cb4(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17d20);
  func_0x000108027750();
  return;
}



/* Entry: 108026cdc; end: 108026ce7;  */

undefined ** FUN_108026cdc(void)

{
  return &PTR_DAT_110a17d20;
}



/* Entry: 108026ce8; end: 108026cfb;  */

long * FUN_108026ce8(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 108026cfc; end: 108026d5b;  */

long * FUN_108026cfc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108026d5c; end: 108026d8f;  */

void FUN_108026d5c(void)

{
  func_0x0001080277e8();
  FUN_108026d90();
  return;
}



/* Entry: 108026d90; end: 108026dc3;  */

void FUN_108026d90(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080278fc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
    func_0x0001080278ec();
    FUN_108026dc4();
  }
  return;
}



/* Entry: 108026dc4; end: 108026dcb;  */

undefined1  [16] FUN_108026dc4(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x21;
  int *unaff_x23;
  undefined1 auVar7 [16];
  long *plStack_48;
  
  func_0x000108027800();
  plVar5 = param_1 + 1;
  bVar4 = true;
  if (param_2 == plVar5) {
LAB_108026e04:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), (int)param_1[4] < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        plVar5 = param_1 + 1;
        plStack_48 = param_1;
        goto LAB_108026e84;
      }
    }
    else {
LAB_108026e74:
      plVar5 = unaff_x19;
      FUN_108026ecc();
LAB_108026e84:
      unaff_x21 = plStack_48;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 != (long *)0x0) goto LAB_108026e8c;
    }
LAB_108026e98:
    func_0x0001080278e4();
    func_0x000108027888();
    if (extraout_x8 != 0) {
      *unaff_x19 = extraout_x8;
    }
    func_0x000108027978();
    func_0x000108027868();
    uVar6 = 1;
  }
  else {
    iVar1 = *unaff_x23;
    iVar2 = (int)unaff_x21[4];
    bVar4 = iVar1 == iVar2;
    if (iVar1 < iVar2) goto LAB_108026e04;
    plVar3 = unaff_x21;
    if (iVar2 < iVar1) {
      func_0x000108027968();
      if ((plVar5 == param_1) || (*unaff_x23 < (int)param_1[4])) {
        plVar5 = param_1;
        plStack_48 = param_1;
        if (unaff_x21[1] != 0) goto LAB_108026e84;
        goto LAB_108026e98;
      }
      goto LAB_108026e74;
    }
LAB_108026e8c:
    unaff_x21 = plVar3;
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 108026dcc; end: 108026ecb;  */

undefined1  [16] FUN_108026dcc(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x21;
  int *unaff_x23;
  undefined1 auVar7 [16];
  long *plStack_48;
  
  func_0x000108027800();
  plVar5 = param_1 + 1;
  bVar4 = true;
  if (param_2 == plVar5) {
LAB_108026e04:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), (int)param_1[4] < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        plVar5 = param_1 + 1;
        plStack_48 = param_1;
        goto LAB_108026e84;
      }
    }
    else {
LAB_108026e74:
      plVar5 = unaff_x19;
      FUN_108026ecc();
LAB_108026e84:
      unaff_x21 = plStack_48;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 != (long *)0x0) goto LAB_108026e8c;
    }
LAB_108026e98:
    func_0x0001080278e4();
    func_0x000108027888();
    if (extraout_x8 != 0) {
      *unaff_x19 = extraout_x8;
    }
    func_0x000108027978();
    func_0x000108027868();
    uVar6 = 1;
  }
  else {
    iVar1 = *unaff_x23;
    iVar2 = (int)unaff_x21[4];
    bVar4 = iVar1 == iVar2;
    if (iVar1 < iVar2) goto LAB_108026e04;
    plVar3 = unaff_x21;
    if (iVar2 < iVar1) {
      func_0x000108027968();
      if ((plVar5 == param_1) || (*unaff_x23 < (int)param_1[4])) {
        plVar5 = param_1;
        plStack_48 = param_1;
        if (unaff_x21[1] != 0) goto LAB_108026e84;
        goto LAB_108026e98;
      }
      goto LAB_108026e74;
    }
LAB_108026e8c:
    unaff_x21 = plVar3;
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 108026ecc; end: 108026f13;  */

long * FUN_108026ecc(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (int)plVar2[4] <= param_3) {
      if (param_3 <= (int)plVar2[4]) goto LAB_108026f10;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108026f10;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108026f10:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108026f14; end: 108026f6b;  */

long FUN_108026f14(long param_1)

{
  func_0x000108026f38(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108026f6c; end: 108026f9f;  */

void FUN_108026f6c(void)

{
  func_0x0001080277e8();
  FUN_108026fa0();
  return;
}



/* Entry: 108026fa0; end: 108026fd3;  */

void FUN_108026fa0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080278fc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
    func_0x0001080278ec();
    FUN_108026fd4();
  }
  return;
}



/* Entry: 108026fd4; end: 108026fdb;  */

undefined1  [16] FUN_108026fd4(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x21;
  int *unaff_x23;
  undefined1 auVar7 [16];
  long *plStack_48;
  
  func_0x000108027800();
  plVar5 = param_1 + 1;
  bVar4 = true;
  if (param_2 == plVar5) {
LAB_108027014:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), (int)param_1[4] < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        plVar5 = param_1 + 1;
        plStack_48 = param_1;
        goto LAB_108027094;
      }
    }
    else {
LAB_108027084:
      plVar5 = unaff_x19;
      FUN_1080270dc();
LAB_108027094:
      unaff_x21 = plStack_48;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 != (long *)0x0) goto LAB_10802709c;
    }
LAB_1080270a8:
    func_0x0001080278e4();
    func_0x000108027888();
    if (extraout_x8 != 0) {
      *unaff_x19 = extraout_x8;
    }
    func_0x000108027978();
    func_0x000108027868();
    uVar6 = 1;
  }
  else {
    iVar1 = *unaff_x23;
    iVar2 = (int)unaff_x21[4];
    bVar4 = iVar1 == iVar2;
    if (iVar1 < iVar2) goto LAB_108027014;
    plVar3 = unaff_x21;
    if (iVar2 < iVar1) {
      func_0x000108027968();
      if ((plVar5 == param_1) || (*unaff_x23 < (int)param_1[4])) {
        plVar5 = param_1;
        plStack_48 = param_1;
        if (unaff_x21[1] != 0) goto LAB_108027094;
        goto LAB_1080270a8;
      }
      goto LAB_108027084;
    }
LAB_10802709c:
    unaff_x21 = plVar3;
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 108026fdc; end: 1080270db;  */

undefined1  [16] FUN_108026fdc(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x21;
  int *unaff_x23;
  undefined1 auVar7 [16];
  long *plStack_48;
  
  func_0x000108027800();
  plVar5 = param_1 + 1;
  bVar4 = true;
  if (param_2 == plVar5) {
LAB_108027014:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), (int)param_1[4] < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        plVar5 = param_1 + 1;
        plStack_48 = param_1;
        goto LAB_108027094;
      }
    }
    else {
LAB_108027084:
      plVar5 = unaff_x19;
      FUN_1080270dc();
LAB_108027094:
      unaff_x21 = plStack_48;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 != (long *)0x0) goto LAB_10802709c;
    }
LAB_1080270a8:
    func_0x0001080278e4();
    func_0x000108027888();
    if (extraout_x8 != 0) {
      *unaff_x19 = extraout_x8;
    }
    func_0x000108027978();
    func_0x000108027868();
    uVar6 = 1;
  }
  else {
    iVar1 = *unaff_x23;
    iVar2 = (int)unaff_x21[4];
    bVar4 = iVar1 == iVar2;
    if (iVar1 < iVar2) goto LAB_108027014;
    plVar3 = unaff_x21;
    if (iVar2 < iVar1) {
      func_0x000108027968();
      if ((plVar5 == param_1) || (*unaff_x23 < (int)param_1[4])) {
        plVar5 = param_1;
        plStack_48 = param_1;
        if (unaff_x21[1] != 0) goto LAB_108027094;
        goto LAB_1080270a8;
      }
      goto LAB_108027084;
    }
LAB_10802709c:
    unaff_x21 = plVar3;
    uVar6 = 0;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 1080270dc; end: 108027123;  */

long * FUN_1080270dc(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (int)plVar2[4] <= param_3) {
      if (param_3 <= (int)plVar2[4]) goto LAB_108027120;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108027120;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108027120:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108027124; end: 10802717b;  */

long FUN_108027124(long param_1)

{
  func_0x000108027148(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10802717c; end: 1080271af;  */

void FUN_10802717c(void)

{
  func_0x0001080277e8();
  FUN_1080271b0();
  return;
}



/* Entry: 1080271b0; end: 1080271e3;  */

void FUN_1080271b0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080278fc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 8) {
    func_0x0001080278ec();
    FUN_1080271e4();
  }
  return;
}



/* Entry: 1080271e4; end: 1080271eb;  */

undefined1  [16] FUN_1080271e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int *unaff_x23;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  func_0x000108027800();
  puVar1 = param_1 + 1;
  bVar4 = true;
  if (param_2 == puVar1) {
LAB_108027228:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), *(int *)((long)param_1 + 0x1c) < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        param_1 = param_1 + 1;
        goto LAB_1080272a8;
      }
    }
    else {
LAB_108027294:
      FUN_108027380();
      param_1 = unaff_x19;
LAB_1080272a8:
      unaff_x21 = (long *)*param_1;
      if (unaff_x21 != (long *)0x0) goto LAB_1080272b0;
    }
LAB_1080272c8:
    unaff_x21 = (long *)0x28;
    __Znwm();
    uVar5 = 1;
    uStack_60 = 1;
    *(undefined8 *)((long)unaff_x21 + 0x1c) = *unaff_x20;
    puStack_68 = puVar1;
    FUN_108027338();
    uStack_70 = 0;
    FUN_1080273cc(&uStack_70);
  }
  else {
    iVar2 = *unaff_x23;
    iVar3 = *(int *)((long)unaff_x21 + 0x1c);
    bVar4 = iVar2 == iVar3;
    if (iVar2 < iVar3) goto LAB_108027228;
    if (iVar3 < iVar2) {
      func_0x000108027968();
      if ((puVar1 == param_1) || (*unaff_x23 < *(int *)((long)param_1 + 0x1c))) {
        if (unaff_x21[1] != 0) goto LAB_1080272a8;
        goto LAB_1080272c8;
      }
      goto LAB_108027294;
    }
LAB_1080272b0:
    uVar5 = 0;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = unaff_x21;
  return auVar6;
}



/* Entry: 1080271ec; end: 108027337;  */

undefined1  [16] FUN_1080271ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int *unaff_x23;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  func_0x000108027800();
  puVar1 = param_1 + 1;
  bVar4 = true;
  if (param_2 == puVar1) {
LAB_108027228:
    func_0x00010802791c();
    if ((bVar4) || (func_0x000108027970(), *(int *)((long)param_1 + 0x1c) < *unaff_x23)) {
      if (*unaff_x21 != 0) {
        param_1 = param_1 + 1;
        goto LAB_1080272a8;
      }
    }
    else {
LAB_108027294:
      FUN_108027380();
      param_1 = unaff_x19;
LAB_1080272a8:
      unaff_x21 = (long *)*param_1;
      if (unaff_x21 != (long *)0x0) goto LAB_1080272b0;
    }
LAB_1080272c8:
    unaff_x21 = (long *)0x28;
    __Znwm();
    uVar5 = 1;
    uStack_60 = 1;
    *(undefined8 *)((long)unaff_x21 + 0x1c) = *unaff_x20;
    puStack_68 = puVar1;
    FUN_108027338();
    uStack_70 = 0;
    FUN_1080273cc(&uStack_70);
  }
  else {
    iVar2 = *unaff_x23;
    iVar3 = *(int *)((long)unaff_x21 + 0x1c);
    bVar4 = iVar2 == iVar3;
    if (iVar2 < iVar3) goto LAB_108027228;
    if (iVar3 < iVar2) {
      func_0x000108027968();
      if ((puVar1 == param_1) || (*unaff_x23 < *(int *)((long)param_1 + 0x1c))) {
        if (unaff_x21[1] != 0) goto LAB_1080272a8;
        goto LAB_1080272c8;
      }
      goto LAB_108027294;
    }
LAB_1080272b0:
    uVar5 = 0;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = unaff_x21;
  return auVar6;
}



/* Entry: 108027338; end: 10802737f;  */

void FUN_108027338(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  func_0x000108027868();
  return;
}



/* Entry: 108027380; end: 1080273cb;  */

long * FUN_108027380(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *(int *)((long)plVar3 + 0x1c) <= *param_3) {
        if (*param_3 <= *(int *)((long)plVar3 + 0x1c)) goto LAB_1080273c8;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1080273c8;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1080273c8:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1080273cc; end: 1080273ef;  */

undefined8 FUN_1080273cc(undefined8 param_1)

{
  FUN_1080273f0(param_1,0);
  return param_1;
}



/* Entry: 1080273f0; end: 108027407;  */

void FUN_1080273f0(long *param_1,long param_2)

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



/* Entry: 108027408; end: 108027493;  */

long FUN_108027408(long param_1)

{
  func_0x00010802742c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108027494; end: 1080274db;  */

long * FUN_108027494(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(uint *)(plVar2 + 4) <= param_3) {
      if (param_3 <= *(uint *)(plVar2 + 4)) goto LAB_1080274d8;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_1080274d8;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_1080274d8:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 1080274dc; end: 10802750f;  */

void FUN_1080274dc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1080274dc(*param_1);
    FUN_1080274dc(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108027510; end: 10802755f;  */

long * FUN_108027510(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, plVar2[4] <= param_3) {
      if (param_3 <= plVar2[4]) goto LAB_108027554;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108027554;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108027554:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108027560; end: 10802757f;  */

void FUN_108027560(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_DAT_110a17d40;
  return;
}



/* Entry: 108027580; end: 1080275db;  */

void FUN_108027580(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a17d40;
  return;
}



/* Entry: 1080275dc; end: 108027603;  */

void FUN_1080275dc(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17da0);
  func_0x000108027750();
  return;
}



/* Entry: 108027604; end: 108027617;  */

undefined ** FUN_108027604(void)

{
  return &PTR_DAT_110a17da0;
}



/* Entry: 108027618; end: 108027637;  */

void FUN_108027618(undefined8 *param_1)

{
  func_0x000108027854();
  *param_1 = &PTR_DAT_110a17dc0;
  return;
}



/* Entry: 108027638; end: 1080276a3;  */

void FUN_108027638(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a17dc0;
  return;
}



/* Entry: 1080276a4; end: 1080276cb;  */

void FUN_1080276a4(undefined8 param_1)

{
  func_0x0001080278d8();
  func_0x000108027878(param_1,&PTR_DAT_110a17e30);
  func_0x000108027750();
  return;
}



/* Entry: 1080276cc; end: 1080276d7;  */

undefined ** FUN_1080276cc(void)

{
  return &PTR_DAT_110a17e30;
}



/* Entry: 1080276d8; end: 10802770b;  */

void FUN_1080276d8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010802792c();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010802785c(uVar1);
  return;
}



/* Entry: 10802770c; end: 108027983;  */

void FUN_10802770c(void)

{
  return;
}



/* Entry: 108027984; end: 1080279c3;  */

void FUN_108027984(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1080279c4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001080297a0(&uStack_30);
  return;
}



/* Entry: 1080279c4; end: 1080279e3;  */

void FUN_1080279c4(void)

{
  undefined1 uStack_11;
  
  FUN_1080297c4(&uStack_11);
  return;
}



/* Entry: 1080279e4; end: 108027b4f;  */

undefined8 * FUN_1080279e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17e50;
  param_1[2] = 0;
  param_1[1] = param_1 + 2;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = param_1 + 0x14;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x15] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x16);
  FUN_1080266dc(param_1 + 0x2b);
  FUN_108025f64(param_1 + 0x2e);
  FUN_108026050(param_1 + 0x31);
  return param_1;
}



/* Entry: 108027b50; end: 108027bcb;  */

void FUN_108027b50(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 8);
      func_0x00010802a444();
      FUN_108029b6c();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029bb4(unaff_x19 + 8);
        func_0x00010802a438();
        func_0x000108029bdc();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027bcc; end: 108027c47;  */

void FUN_108027bcc(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x20);
      func_0x00010802a444();
      FUN_108029c00();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029c48(unaff_x19 + 0x20);
        func_0x00010802a438();
        func_0x000108029c70();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027c48; end: 108027cc3;  */

void FUN_108027c48(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x38);
      func_0x00010802a444();
      FUN_108029c94();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029cdc(unaff_x19 + 0x38);
        func_0x00010802a438();
        func_0x000108029d04();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027cc4; end: 108027d3f;  */

void FUN_108027cc4(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x50);
      func_0x00010802a444();
      FUN_108029d28();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029d70(unaff_x19 + 0x50);
        func_0x00010802a438();
        func_0x000108029d98();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027d40; end: 108027dbb;  */

void FUN_108027d40(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x68);
      func_0x00010802a444();
      FUN_108029dbc();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029e04(unaff_x19 + 0x68);
        func_0x00010802a438();
        func_0x000108029e2c();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027dbc; end: 108027e37;  */

void FUN_108027dbc(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x80);
      func_0x00010802a444();
      FUN_108029e50();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029e98(unaff_x19 + 0x80);
        func_0x00010802a438();
        func_0x000108029ec0();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027e38; end: 108027eb3;  */

void FUN_108027e38(void)

{
  int *piVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  int *piVar3;
  
  func_0x00010802a490();
  func_0x00010802a100();
  piVar1 = (int *)unaff_x20[1];
  for (piVar3 = (int *)*unaff_x20; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      plVar2 = (long *)(unaff_x19 + 0x98);
      func_0x00010802a444();
      FUN_108029ee4();
      if (*plVar2 == 0) {
        func_0x00010802a1e8();
        func_0x00010802a1ac();
        FUN_108029f2c(unaff_x19 + 0x98);
        func_0x00010802a438();
        func_0x000108029f54();
      }
    }
  }
  func_0x00010802a29c();
  return;
}



/* Entry: 108027eb4; end: 1080294a3;  */

void FUN_108027eb4(undefined4 *param_1,long param_2,ulong *****param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar15;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *extraout_x8_08;
  long *plVar16;
  long extraout_x8_09;
  undefined **ppuVar17;
  byte *****pppppbVar18;
  long extraout_x8_10;
  uint uVar19;
  long extraout_x9;
  long extraout_x9_00;
  long *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong ****ppppuVar20;
  long *plVar21;
  long extraout_x9_04;
  long *extraout_x9_05;
  long extraout_x9_06;
  long *plVar22;
  ulong *****pppppuVar23;
  long lVar24;
  long *plVar25;
  ulong *puVar26;
  ulong *****pppppuVar27;
  ulong *puVar28;
  ulong *****pppppuVar29;
  ulong *****pppppuVar30;
  ulong *****unaff_x22;
  ulong *****unaff_x23;
  ulong *****pppppuVar31;
  long lVar32;
  undefined8 *puStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte bStack_2a1;
  ulong ****ppppuStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte ****ppppbStack_260;
  undefined8 *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  ulong ***apppuStack_240 [2];
  byte bStack_230;
  undefined **ppuStack_210;
  byte bStack_200;
  int iStack_1f4;
  undefined4 auStack_1f0 [2];
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  ulong ****ppppuStack_80;
  undefined8 uStack_78;
  
  FUN_10802a60c(apppuStack_240,param_3);
  if ((bStack_200 & 1) == 0) {
    func_0x00010002b838(&uStack_278,&UNK_10f4715dd);
    uVar14 = uStack_268;
    ppppbStack_260 = (byte ****)((ulong)ppppbStack_260 & 0xffffffff00000000);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    auStack_1f0[0] = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    puStack_258 = (undefined8 *)0x0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 6) = uVar14;
    func_0x00010802a198();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x9_00 + 8);
    func_0x00010802a304();
    puVar9 = &uStack_278;
LAB_108027fb8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
    goto LAB_10802920c;
  }
  if ((bStack_230 & 1) == 0) {
    func_0x00010002b838(&uStack_290,&UNK_10f4715f9);
    uVar14 = uStack_280;
    ppppbStack_260 = (byte ****)((ulong)ppppbStack_260 & 0xffffffff00000000);
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    auStack_1f0[0] = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    puStack_258 = (undefined8 *)0x0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 6) = uVar14;
    func_0x00010802a198();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x9 + 8);
    func_0x00010802a304();
    puVar9 = &uStack_290;
    goto LAB_108027fb8;
  }
  pppppuVar10 = (ulong *****)(param_2 + 0xb0);
  uStack_298 = 1;
  ppppuStack_2a0 = (ulong ****)pppppuVar10;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  bStack_2a1 = 1;
  ppuVar2 = &PTR_PTR_1133aaf30;
  if (ppuStack_210 != (undefined **)0x0) {
    ppuVar2 = ppuStack_210;
  }
  func_0x00010802a524(ppuVar2[3]);
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  pppppuVar31 = (ulong *****)(param_2 + 0x10);
  pppppuVar30 = (ulong *****)(param_2 + 0x28);
  pppppuVar12 = (ulong *****)(param_2 + 0x40);
  for (plVar16 = extraout_x8; uVar7 = plVar16 == extraout_x9_01, !(bool)uVar7; plVar16 = plVar16 + 1
      ) {
    if (*(int *)(*plVar16 + 0x38) == 1) {
      lVar24 = *(long *)(*plVar16 + 0x30);
      uVar19 = *(uint *)(lVar24 + 0x10);
      pppppuVar11 = (ulong *****)ppppuStack_d8;
      if ((uVar19 >> 3 & 1) != 0) {
        uVar3 = *(uint *)(*(long *)(lVar24 + 0x30) + 0x10);
        pppppuVar10 = (ulong *****)(ulong)uVar3;
        pppppuVar23 = pppppuVar31;
        pppppuVar27 = pppppuVar31;
        if (uVar3 != 0) {
          while (pppppuVar29 = (ulong *****)*pppppuVar27, pppppuVar29 != (ulong *****)0x0) {
            lVar32 = 8;
            if ((int)uVar3 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              lVar32 = 0;
            }
            pppppuVar27 = (ulong *****)((long)pppppuVar29 + lVar32);
            if ((int)uVar3 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              pppppuVar23 = pppppuVar29;
            }
          }
          if ((pppppuVar31 == pppppuVar23) || ((int)uVar3 < *(int *)((long)pppppuVar23 + 0x1c))) {
            func_0x00010b5a9cf8();
            pppppuVar30 = pppppuVar10;
            func_0x00010802a3d4();
            pppppuVar12 = *(ulong ******)(param_2 + 8);
            goto LAB_108028138;
          }
        }
      }
      if ((uVar19 >> 4 & 1) != 0) {
        uVar3 = *(uint *)(*(long *)(lVar24 + 0x38) + 0x10);
        pppppuVar10 = (ulong *****)(ulong)uVar3;
        pppppuVar23 = pppppuVar30;
        pppppuVar27 = pppppuVar30;
        if (uVar3 != 0) {
          while (pppppuVar29 = (ulong *****)*pppppuVar27, pppppuVar29 != (ulong *****)0x0) {
            lVar32 = 8;
            if ((int)uVar3 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              lVar32 = 0;
            }
            pppppuVar27 = (ulong *****)((long)pppppuVar29 + lVar32);
            if ((int)uVar3 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              pppppuVar23 = pppppuVar29;
            }
          }
          if ((pppppuVar30 == pppppuVar23) || ((int)uVar3 < *(int *)((long)pppppuVar23 + 0x1c))) {
            func_0x00010b5a9da4();
            pppppuVar31 = pppppuVar10;
            func_0x00010802a3d4();
            pppppuVar12 = *(ulong ******)(param_2 + 0x20);
            goto LAB_10802822c;
          }
        }
      }
      if ((uVar19 >> 5 & 1) != 0) {
        uVar19 = *(uint *)(*(long *)(lVar24 + 0x40) + 0x10);
        pppppuVar10 = (ulong *****)(ulong)uVar19;
        pppppuVar23 = pppppuVar12;
        pppppuVar27 = pppppuVar12;
        if (uVar19 != 0) {
          while (pppppuVar29 = (ulong *****)*pppppuVar27, pppppuVar29 != (ulong *****)0x0) {
            lVar24 = 8;
            if ((int)uVar19 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              lVar24 = 0;
            }
            pppppuVar27 = (ulong *****)((long)pppppuVar29 + lVar24);
            if ((int)uVar19 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              pppppuVar23 = pppppuVar29;
            }
          }
          if ((pppppuVar12 == pppppuVar23) || ((int)uVar19 < *(int *)((long)pppppuVar23 + 0x1c))) {
            func_0x00010b5a9e50();
            pppppuVar31 = pppppuVar10;
            func_0x00010802a3d4();
            pppppuVar30 = *(ulong ******)(param_2 + 0x38);
            goto LAB_108028320;
          }
        }
      }
    }
  }
  func_0x00010802a3e8();
  func_0x00010802a1d8();
  goto LAB_10802840c;
LAB_108028138:
  cVar5 = SBORROW8((long)pppppuVar12,(long)pppppuVar31);
  cVar6 = (long)pppppuVar12 - (long)pppppuVar31 < 0;
  bVar8 = pppppuVar12 == pppppuVar31;
  if (bVar8) goto LAB_1080281a8;
  func_0x00010802a508();
  if (bVar8) {
LAB_108028154:
    func_0x00010802a4c8();
    if (extraout_x8_00 != 0) {
      pppppuVar12 = pppppuVar30 + 1;
      ppppuStack_80 = (ulong ****)pppppuVar30;
      goto LAB_108028174;
    }
LAB_108028180:
    func_0x00010802a294();
    func_0x00010802a324();
    FUN_108029bb4();
    func_0x00010802a42c();
    func_0x000108029bdc();
  }
  else {
    func_0x00010802a544();
    func_0x00010802a4e8();
    if (cVar6 != cVar5) goto LAB_108028154;
    func_0x00010802a47c();
    FUN_108029b6c();
    pppppuVar12 = pppppuVar30;
LAB_108028174:
    if (*pppppuVar12 == (ulong ****)0x0) goto LAB_108028180;
  }
  func_0x00010802a380();
  pppppuVar12 = pppppuVar30;
  goto LAB_108028138;
LAB_1080281a8:
  func_0x00010802a3bc();
  unaff_x23 = (ulong *****)ppppuStack_e0;
  while (uVar7 = unaff_x23 == unaff_x22, !(bool)uVar7) {
    param_3 = (ulong *****)(&PTR_DAT_110a17fe8)[*(int *)((long)unaff_x23 + 0x1c)];
    func_0x00010802a3b4();
    func_0x00010802a54c();
    func_0x00010802a380();
    unaff_x23 = pppppuVar30;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x00010802a46c();
  func_0x00010802a250(&UNK_10f471756);
  func_0x00010802a28c();
  func_0x00010802995c();
  func_0x00010802a390();
  func_0x00010802a18c();
  pppppuVar12 = pppppuVar10;
  goto LAB_108028408;
LAB_10802822c:
  cVar5 = SBORROW8((long)pppppuVar12,(long)pppppuVar30);
  cVar6 = (long)pppppuVar12 - (long)pppppuVar30 < 0;
  bVar8 = pppppuVar12 == pppppuVar30;
  if (bVar8) goto LAB_10802829c;
  func_0x00010802a508();
  if (bVar8) {
LAB_108028248:
    func_0x00010802a4c8();
    if (extraout_x8_01 != 0) {
      pppppuVar12 = pppppuVar31 + 1;
      ppppuStack_80 = (ulong ****)pppppuVar31;
      goto LAB_108028268;
    }
LAB_108028274:
    func_0x00010802a294();
    func_0x00010802a324();
    FUN_108029c48();
    func_0x00010802a42c();
    func_0x000108029c70();
  }
  else {
    func_0x00010802a544();
    func_0x00010802a4e8();
    if (cVar6 != cVar5) goto LAB_108028248;
    func_0x00010802a47c();
    FUN_108029c00();
    pppppuVar12 = pppppuVar31;
LAB_108028268:
    if (*pppppuVar12 == (ulong ****)0x0) goto LAB_108028274;
  }
  func_0x00010802a380();
  pppppuVar12 = pppppuVar31;
  goto LAB_10802822c;
LAB_10802829c:
  func_0x00010802a3bc();
  unaff_x23 = (ulong *****)ppppuStack_e0;
  while (uVar7 = unaff_x23 == unaff_x22, !(bool)uVar7) {
    param_3 = (ulong *****)(&PTR_DAT_110a18008)[*(int *)((long)unaff_x23 + 0x1c)];
    func_0x00010802a3b4();
    func_0x00010802a54c();
    func_0x00010802a380();
    unaff_x23 = pppppuVar31;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x00010802a46c();
  func_0x00010802a250(&UNK_10f4717bb);
  func_0x00010802a28c();
  func_0x0001080299ac();
  func_0x00010802a390();
  func_0x00010802a18c();
  pppppuVar12 = pppppuVar10;
  goto LAB_108028408;
LAB_108028320:
  cVar5 = SBORROW8((long)pppppuVar30,(long)pppppuVar12);
  cVar6 = (long)pppppuVar30 - (long)pppppuVar12 < 0;
  bVar8 = pppppuVar30 == pppppuVar12;
  if (bVar8) goto LAB_108028390;
  func_0x00010802a508();
  if (bVar8) {
LAB_10802833c:
    func_0x00010802a4c8();
    if (extraout_x8_02 != 0) {
      pppppuVar30 = pppppuVar31 + 1;
      ppppuStack_80 = (ulong ****)pppppuVar31;
      goto LAB_10802835c;
    }
LAB_108028368:
    func_0x00010802a294();
    func_0x00010802a324();
    FUN_108029cdc();
    func_0x00010802a42c();
    func_0x000108029d04();
  }
  else {
    func_0x00010802a544();
    func_0x00010802a4e8();
    if (cVar6 != cVar5) goto LAB_10802833c;
    func_0x00010802a47c();
    FUN_108029c94();
    pppppuVar30 = pppppuVar31;
LAB_10802835c:
    if (*pppppuVar30 == (ulong ****)0x0) goto LAB_108028368;
  }
  func_0x00010802a380();
  pppppuVar30 = pppppuVar31;
  goto LAB_108028320;
LAB_10802851c:
  cVar5 = SBORROW8((long)pppppuVar30,(long)pppppuVar31);
  cVar6 = (long)pppppuVar30 - (long)pppppuVar31 < 0;
  bVar8 = pppppuVar30 == pppppuVar31;
  if (bVar8) goto LAB_10802858c;
  func_0x00010802a4f8();
  if (bVar8) {
LAB_108028538:
    func_0x00010802a4d8();
    if (extraout_x8_04 != 0) {
      unaff_x23 = pppppuVar10 + 1;
      ppppuStack_80 = (ulong ****)pppppuVar10;
      goto LAB_108028558;
    }
LAB_108028564:
    func_0x00010802a294();
    func_0x00010802a30c();
    FUN_108029d70();
    func_0x00010802a42c();
    func_0x000108029d98();
  }
  else {
    func_0x00010802a464();
    func_0x00010802a3c4();
    if (cVar6 != cVar5) goto LAB_108028538;
    func_0x00010802a47c();
    FUN_108029d28();
    unaff_x23 = pppppuVar10;
LAB_108028558:
    if (*unaff_x23 == (ulong ****)0x0) goto LAB_108028564;
  }
  func_0x00010802a414();
  pppppuVar30 = pppppuVar10;
  goto LAB_10802851c;
LAB_10802858c:
  func_0x00010802a3bc();
  func_0x00010802a4b8();
  while (uVar7 = unaff_x23 == pppppuVar12, !(bool)uVar7) {
    func_0x00010802a3b4();
    func_0x00010802a554();
    func_0x00010802a380();
    unaff_x23 = pppppuVar10;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x00010802a424();
  func_0x00010802a4a8();
  param_3 = (ulong *****)0x46;
  func_0x00010802a53c(&ppppuStack_a0,&UNK_10f47187f);
  func_0x00010802a28c();
  func_0x000108029a4c(ppppuStack_d8);
  func_0x00010802a390();
  func_0x00010802a18c();
  pppppuVar10 = &ppppuStack_a0;
  goto LAB_1080285fc;
LAB_1080287c8:
  cVar5 = SBORROW8((long)pppppuVar30,(long)pppppuVar31);
  cVar6 = (long)pppppuVar30 - (long)pppppuVar31 < 0;
  bVar8 = pppppuVar30 == pppppuVar31;
  if (bVar8) goto LAB_108028838;
  func_0x00010802a4f8();
  if (bVar8) {
LAB_1080287e4:
    func_0x00010802a4d8();
    if (extraout_x8_06 != 0) {
      pppppuVar10 = pppppuVar11 + 1;
      ppppuStack_80 = (ulong ****)pppppuVar11;
      goto LAB_108028804;
    }
LAB_108028810:
    func_0x00010802a294();
    func_0x00010802a30c();
    FUN_108029e04();
    func_0x00010802a42c();
    func_0x000108029e2c();
  }
  else {
    func_0x00010802a464();
    func_0x00010802a3c4();
    if (cVar6 != cVar5) goto LAB_1080287e4;
    func_0x00010802a47c();
    FUN_108029dbc();
    pppppuVar10 = pppppuVar11;
LAB_108028804:
    if (*pppppuVar10 == (ulong ****)0x0) goto LAB_108028810;
  }
  func_0x00010802a414();
  pppppuVar30 = pppppuVar11;
  goto LAB_1080287c8;
LAB_108028838:
  func_0x00010802a3bc();
  func_0x00010802a4b8();
  while (uVar7 = pppppuVar10 == pppppuVar27, !(bool)uVar7) {
    func_0x00010802a3b4();
    func_0x00010802a554();
    func_0x00010802a380();
    pppppuVar10 = pppppuVar11;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x00010802a424();
  func_0x00010802a4a8();
  func_0x00010802a53c(&ppppuStack_a0,&UNK_10f4718dc,0x39);
  func_0x00010802a28c();
  func_0x000108029a9c(ppppuStack_d8);
  func_0x00010802a390();
  func_0x00010802a18c();
  pppppuVar10 = &ppppuStack_a0;
LAB_1080288a8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar10);
  goto LAB_1080288ac;
LAB_108028fbc:
  cVar5 = SBORROW8((long)pppppuVar11,(long)pppppuVar10);
  cVar6 = (long)pppppuVar11 - (long)pppppuVar10 < 0;
  bVar8 = pppppuVar11 == pppppuVar10;
  if (bVar8) goto LAB_10802902c;
  func_0x00010802a4f8();
  if (bVar8) {
LAB_108028fd8:
    func_0x00010802a4d8();
    if (extraout_x8_10 != 0) {
      ppppuStack_80 = (ulong ****)pppppuVar12;
      pppppuVar31 = pppppuVar12 + 1;
      goto LAB_108028ff8;
    }
LAB_108029004:
    func_0x00010802a294();
    func_0x00010802a30c();
    FUN_108029e98();
    func_0x00010802a42c();
    func_0x000108029ec0();
  }
  else {
    func_0x00010802a464();
    func_0x00010802a3c4();
    if (cVar6 != cVar5) goto LAB_108028fd8;
    func_0x00010802a47c();
    FUN_108029e50();
    pppppuVar31 = pppppuVar12;
LAB_108028ff8:
    if (*pppppuVar31 == (ulong ****)0x0) goto LAB_108029004;
  }
  func_0x00010802a414();
  pppppuVar11 = pppppuVar12;
  goto LAB_108028fbc;
LAB_10802902c:
  func_0x00010802a3bc();
  func_0x00010802a4b8();
  while (uVar7 = pppppuVar31 == pppppuVar30, !(bool)uVar7) {
    func_0x00010802a3b4();
    func_0x00010802a554();
    func_0x00010802a380();
    pppppuVar31 = pppppuVar12;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x00010802a424();
  func_0x00010802a4a8();
  func_0x00010802a53c(&ppppuStack_a0,&UNK_10f4719c4,0x2b);
  func_0x00010802a28c();
  func_0x000108029aec(ppppuStack_d8);
  func_0x00010802a390();
  func_0x00010802a18c();
  pppppuVar10 = &ppppuStack_a0;
LAB_108028a2c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar10);
  goto LAB_108028a30;
LAB_108028390:
  func_0x00010802a3bc();
  unaff_x23 = (ulong *****)ppppuStack_e0;
  while (uVar7 = unaff_x23 == unaff_x22, !(bool)uVar7) {
    func_0x00010802a3b4();
    func_0x00010802a54c();
    func_0x00010802a380();
    unaff_x23 = pppppuVar31;
  }
  func_0x00010802a218();
  func_0x00010802a2e0();
  func_0x000105988308(auStack_1f0,pppppuVar10,&uStack_c0);
  func_0x00010802a250(&UNK_10f471811);
  func_0x00010802a28c();
  func_0x0001080299fc();
  func_0x00010802a390();
  func_0x00010802a18c();
  param_3 = pppppuVar10;
  pppppuVar12 = (ulong *****)&PTR_DAT_110a18040;
LAB_108028408:
  func_0x00010802a2d8();
  pppppuVar10 = pppppuVar11;
LAB_10802840c:
  func_0x00010802a164();
  func_0x00010802a488();
  if ((bStack_2a1 & 1) == 0) {
    func_0x00010802a41c(&puStack_2d8);
    func_0x00010802a35c();
    uStack_250 = uStack_2d0;
    puStack_258 = puStack_2d8;
    puStack_2d8 = (undefined8 *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010802a0cc();
    func_0x00010802a304();
    ppuVar13 = &puStack_2d8;
LAB_1080291f8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar13);
  }
  else {
    func_0x00010802a3f8();
    lVar24 = extraout_x9_02 + 0xf30;
    if (!(bool)uVar7) {
      lVar24 = extraout_x8_03;
    }
    if (((*(byte *)(lVar24 + 0x10) & 1) == 0) ||
       (uVar15 = *(ulong *)(*(long *)(lVar24 + 0x30) + 0x28), uVar15 == 0)) {
LAB_1080284a0:
      func_0x00010802a3e8();
      func_0x00010802a1d8();
    }
    else {
      if (*(long *)(param_2 + 0x60) != 0) {
        pppppuVar31 = (ulong *****)(param_2 + 0x58);
        uVar19 = 1;
        for (; uVar15 != 0; uVar15 = uVar15 >> 1) {
          pppppuVar11 = pppppuVar31;
          pppppuVar30 = pppppuVar31;
          if ((uVar15 & 1) != 0) {
            while (pppppuVar27 = (ulong *****)*pppppuVar30, pppppuVar27 != (ulong *****)0x0) {
              lVar24 = 8;
              if ((int)uVar19 <= *(int *)((long)pppppuVar27 + 0x1c)) {
                lVar24 = 0;
              }
              pppppuVar30 = (ulong *****)((long)pppppuVar27 + lVar24);
              if ((int)uVar19 <= *(int *)((long)pppppuVar27 + 0x1c)) {
                pppppuVar11 = pppppuVar27;
              }
            }
            if ((pppppuVar31 == pppppuVar11) ||
               (uVar7 = uVar19 == *(uint *)((long)pppppuVar11 + 0x1c),
               (int)uVar19 < (int)*(uint *)((long)pppppuVar11 + 0x1c))) {
              func_0x00010802a33c((&PTR_DAT_110a17ef0)[uVar19]);
              pppppuVar30 = *(ulong ******)(param_2 + 0x50);
              goto LAB_10802851c;
            }
          }
          uVar19 = uVar19 + 1;
        }
        goto LAB_1080284a0;
      }
      ppppuStack_a0 = (ulong ****)0x0;
      ppppuStack_98 = (ulong ****)0x0;
      func_0x00010802a518(&UNK_10f471857);
      param_3 = (ulong *****)0x27;
      func_0x00010802a354();
      func_0x00010802a390();
      func_0x00010802a264();
      pppppuVar10 = (ulong *****)auStack_1f0;
LAB_1080285fc:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar10);
    }
    func_0x00010802a164();
    func_0x00010802a488();
    if ((bStack_2a1 & 1) == 0) {
      func_0x00010802a41c(&puStack_2f0);
      func_0x00010802a35c();
      uStack_250 = uStack_2e8;
      puStack_258 = puStack_2f0;
      puStack_2f0 = (undefined8 *)0x0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      func_0x00010802a0cc();
      func_0x00010802a304();
      ppuVar13 = &puStack_2f0;
      goto LAB_1080291f8;
    }
    func_0x00010802a3f8();
    lVar24 = extraout_x9_03 + 0xf30;
    if (!(bool)uVar7) {
      lVar24 = extraout_x8_05;
    }
    ppppuVar20 = *(ulong *****)(lVar24 + 0x18);
    pppppuVar10 = (ulong *****)(lVar24 + 0x18);
    if (((ulong)ppppuVar20 & 1) != 0) {
      pppppuVar10 = (ulong *****)((long)ppppuVar20 + 7);
    }
    pppppuVar30 = pppppuVar10 + *(int *)(lVar24 + 0x20);
    plVar16 = (long *)(param_2 + 0x160);
    pppppuVar31 = (ulong *****)(param_2 + 0x70);
    for (; uVar7 = pppppuVar10 == pppppuVar30, !(bool)uVar7; pppppuVar10 = pppppuVar10 + 1) {
      uVar7 = *(int *)(*pppppuVar10 + 7) == 1;
      if ((bool)uVar7) {
        iStack_1f4 = *(int *)((long)(*pppppuVar10)[6] + 0x4c);
        plVar21 = plVar16;
        plVar22 = plVar16;
        if (iStack_1f4 == 0) {
          pppppuVar10 = (ulong *****)0x0;
          func_0x00010b51f160();
          func_0x0001005d466c();
          ppppuStack_a0 = (ulong ****)pppppuVar10;
          ppppuStack_98 = (ulong ****)param_3;
          func_0x00010802a518(&UNK_10f4718c6);
          func_0x00010802a2e8();
          func_0x00010802a390();
          func_0x00010802a264();
          pppppuVar10 = (ulong *****)auStack_1f0;
          goto LAB_1080288a8;
        }
        while (plVar25 = (long *)*plVar22, plVar25 != (long *)0x0) {
          lVar24 = 8;
          if (iStack_1f4 <= *(int *)((long)plVar25 + 0x1c)) {
            lVar24 = 0;
          }
          plVar22 = (long *)((long)plVar25 + lVar24);
          if (iStack_1f4 <= *(int *)((long)plVar25 + 0x1c)) {
            plVar21 = plVar25;
          }
        }
        if ((plVar16 != plVar21) && (*(int *)((long)plVar21 + 0x1c) <= iStack_1f4)) {
          pppppuVar12 = (ulong *****)(param_2 + 0x158);
          param_3 = &ppppuStack_a0;
          FUN_108027380(pppppuVar12,param_3,&iStack_1f4);
          pppppuVar27 = (ulong *****)*pppppuVar12;
          pppppuVar11 = pppppuVar12;
          if (pppppuVar27 == (ulong *****)0x0) {
            pppppuVar27 = (ulong *****)0x28;
            __Znwm();
            *(int *)((long)pppppuVar27 + 0x1c) = iStack_1f4;
            *(undefined4 *)(pppppuVar27 + 4) = 0;
            pppppuVar11 = (ulong *****)(param_2 + 0x158);
            param_3 = (ulong *****)ppppuStack_a0;
            FUN_108027338(pppppuVar11,ppppuStack_a0,pppppuVar12,pppppuVar27);
            func_0x00010802a42c();
            FUN_1080273cc();
          }
          iVar4 = *(int *)(pppppuVar27 + 4);
          pppppuVar23 = pppppuVar31;
          pppppuVar12 = pppppuVar31;
          while (pppppuVar29 = (ulong *****)*pppppuVar12, pppppuVar29 != (ulong *****)0x0) {
            lVar24 = 8;
            if (iVar4 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              lVar24 = 0;
            }
            pppppuVar12 = (ulong *****)((long)pppppuVar29 + lVar24);
            if (iVar4 <= *(int *)((long)pppppuVar29 + 0x1c)) {
              pppppuVar23 = pppppuVar29;
            }
          }
          if ((pppppuVar31 == pppppuVar23) || (iVar4 < *(int *)((long)pppppuVar23 + 0x1c))) {
            func_0x00010802a33c((&PTR_s_UNSET_110a17f28)[iVar4]);
            pppppuVar30 = *(ulong ******)(param_2 + 0x68);
            goto LAB_1080287c8;
          }
        }
      }
    }
    func_0x00010802a3e8();
    func_0x00010802a1d8();
LAB_1080288ac:
    func_0x00010802a164();
    func_0x00010802a488();
    if ((bStack_2a1 & 1) == 0) {
      func_0x00010802a41c(&puStack_308);
      func_0x00010802a35c();
      uStack_250 = uStack_300;
      puStack_258 = puStack_308;
      puStack_308 = (undefined8 *)0x0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      func_0x00010802a0cc();
      func_0x00010802a304();
      ppuVar13 = &puStack_308;
      goto LAB_1080291f8;
    }
    func_0x00010802a3f8();
    lVar24 = extraout_x9_04 + 0xf30;
    if (!(bool)uVar7) {
      lVar24 = extraout_x8_07;
    }
    if (((*(byte *)(lVar24 + 0x10) & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar24 + 0x30) + 0x10) >> 1 & 1) != 0)) {
      func_0x00010802a524(*(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x30) + 0x20) + 0x10));
      for (plVar16 = extraout_x8_08; plVar16 != extraout_x9_05; plVar16 = plVar16 + 1) {
        puVar26 = (ulong *)(*plVar16 + 0x10);
        uVar15 = *puVar26;
        if ((uVar15 & 1) != 0) {
          puVar26 = (ulong *)(uVar15 + 7);
        }
        puVar1 = puVar26 + *(int *)(*plVar16 + 0x18);
        for (; puVar26 != puVar1; puVar26 = puVar26 + 1) {
          puVar28 = (ulong *)(*puVar26 + 0x10);
          uVar15 = *puVar28;
          if ((uVar15 & 1) != 0) {
            puVar28 = (ulong *)(uVar15 + 7);
          }
          for (lVar24 = (long)*(int *)(*puVar26 + 0x18) << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
            uVar15 = *puVar28;
            if (*(int *)(uVar15 + 0x28) != 1) {
              uVar7 = *(int *)(uVar15 + 0x28) == 5;
              if ((bool)uVar7) {
                uVar7 = *(int *)(*(long *)(uVar15 + 0x20) + 0x1c) == 1;
                if ((bool)uVar7) goto LAB_1080289c8;
                ppppuStack_a0 = (ulong ****)0x0;
                ppppuStack_98 = (ulong ****)0x0;
                func_0x00010802a518(&UNK_10f471916);
                func_0x00010802a354();
                func_0x00010802a390();
                func_0x00010802a264();
              }
              else {
                ppppuStack_a0 = (ulong ****)0x0;
                ppppuStack_98 = (ulong ****)0x0;
                func_0x00010802a518(&UNK_10f471990);
                func_0x00010802a354();
                func_0x00010802a390();
                func_0x00010802a264();
              }
LAB_108028a28:
              pppppuVar10 = (ulong *****)auStack_1f0;
              goto LAB_108028a2c;
            }
            if ((((*(byte *)(*(long *)(uVar15 + 0x20) + 0x10) & 1) != 0) &&
                (lVar32 = *(long *)(*(long *)(uVar15 + 0x20) + 0x20),
                (*(byte *)(lVar32 + 0x10) >> 1 & 1) != 0)) &&
               (iVar4 = *(int *)(*(long *)(lVar32 + 0x40) + 0x1c),
               uVar7 = iVar4 == 0x10 || iVar4 == 0x1b, iVar4 != 0x10 && iVar4 != 0x1b)) {
              ppppuStack_a0 = (ulong ****)0x0;
              ppppuStack_98 = (ulong ****)0x0;
              func_0x00010802a518(&UNK_10f471952);
              func_0x00010802a354();
              func_0x00010802a390();
              func_0x00010802a264();
              goto LAB_108028a28;
            }
LAB_1080289c8:
            puVar28 = puVar28 + 1;
          }
        }
      }
      pppppuVar30 = *(ulong ******)(param_2 + 0x170);
      pppppuVar10 = (ulong *****)(param_2 + 0x88);
      pppppuVar31 = (ulong *****)0x8;
      while (uVar7 = pppppuVar30 == (ulong *****)(param_2 + 0x178), !(bool)uVar7) {
        pppppuVar12 = (ulong *****)apppuStack_240;
        (*(code *)pppppuVar30[5])();
        if ((int)pppppuVar12 != 0) {
          iVar4 = *(int *)(pppppuVar30 + 4);
          pppppuVar27 = pppppuVar10;
          pppppuVar11 = pppppuVar10;
          while (pppppuVar23 = (ulong *****)*pppppuVar11, pppppuVar23 != (ulong *****)0x0) {
            lVar24 = 8;
            if (iVar4 <= *(int *)((long)pppppuVar23 + 0x1c)) {
              lVar24 = 0;
            }
            pppppuVar11 = (ulong *****)((long)pppppuVar23 + lVar24);
            if (iVar4 <= *(int *)((long)pppppuVar23 + 0x1c)) {
              pppppuVar27 = pppppuVar23;
            }
          }
          if ((pppppuVar10 == pppppuVar27) || (iVar4 < *(int *)((long)pppppuVar27 + 0x1c))) {
            func_0x00010802a33c((&PTR_DAT_110a17f78)[iVar4]);
            pppppuVar11 = *(ulong ******)(param_2 + 0x80);
            goto LAB_108028fbc;
          }
        }
        func_0x00010002c7d4();
      }
    }
    func_0x00010802a3e8();
    func_0x00010802a1d8();
LAB_108028a30:
    func_0x00010802a164();
    func_0x00010802a488();
    if ((bStack_2a1 & 1) == 0) {
      func_0x00010802a41c(&puStack_320);
      func_0x00010802a35c();
      uStack_250 = uStack_318;
      puStack_258 = puStack_320;
      puStack_320 = (undefined8 *)0x0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010802a0cc();
      func_0x00010802a304();
      ppuVar13 = &puStack_320;
      goto LAB_1080291f8;
    }
    func_0x00010802a3f8();
    lVar24 = extraout_x9_06 + 0xf30;
    if (!(bool)uVar7) {
      lVar24 = extraout_x8_09;
    }
    uVar15 = *(ulong *)(lVar24 + 0x18);
    puVar26 = (ulong *)(lVar24 + 0x18);
    if ((uVar15 & 1) != 0) {
      puVar26 = (ulong *)(uVar15 + 7);
    }
    for (lVar24 = (long)*(int *)(lVar24 + 0x20) << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
      iVar4 = *(int *)(*puVar26 + 0x38);
      if (iVar4 == 1) goto LAB_108028bcc;
      if (iVar4 != 4) {
        ppppuStack_a0 = (ulong ****)0x0;
        ppppuStack_98 = (ulong ****)0x0;
        func_0x00010802a354(&ppppbStack_260,&UNK_10f471bf6,0x12);
        func_0x00010802a2f0();
        func_0x00010802a180();
LAB_10802918c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppbStack_260);
        goto LAB_108029194;
      }
      lVar32 = *(long *)(*puVar26 + 0x30);
      if ((*(uint *)(lVar32 + 0x10) & 1) != 0) {
        ppuVar17 = *(undefined ***)(*(long *)(lVar32 + 0x20) + 0x40);
        ppuVar2 = &PTR_PTR_113393f10;
        if (ppuVar17 != (undefined **)0x0) {
          ppuVar2 = ppuVar17;
        }
        iVar4 = *(int *)((long)ppuVar2 + 0x1c) + -1;
        bVar8 = iVar4 == 0x17;
        switch(iVar4) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 0x11:
        case 0x17:
          FUN_10802a450();
          if (!bVar8) goto LAB_108028bcc;
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471aca);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          break;
        case 6:
          FUN_10802a450();
          if (!bVar8) goto LAB_108028bcc;
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a270(&UNK_10f471b09);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          break;
        default:
          ppppuStack_a0 = (ulong ****)0x0;
          ppppuStack_98 = (ulong ****)0x0;
          func_0x00010802a354(&ppppbStack_260,&UNK_10f471b4c,0x1d);
          func_0x00010802a2f0();
          func_0x00010802a180();
          break;
        case 10:
          FUN_10802a450();
          if (!bVar8) goto LAB_108028bcc;
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471a8b);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          break;
        case 0x13:
          FUN_10802a450();
          if (!bVar8) goto LAB_108028bcc;
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471a09);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          break;
        case 0x15:
          FUN_10802a450();
          if (!bVar8) goto LAB_108028bcc;
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a270(&UNK_10f471a48);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
        }
        goto LAB_10802918c;
      }
      if ((*(uint *)(lVar32 + 0x10) >> 1 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&ppppbStack_260,*(ulong *)(lVar32 + 0x18) & 0xfffffffffffffffc);
        uVar19 = (uint)(byte)(uStack_250 >> 0x38);
        puVar9 = puStack_258;
        if (-1 < (long)uStack_250) {
          puVar9 = (undefined8 *)(uStack_250 >> 0x38);
        }
        if ((puVar9 == (undefined8 *)0x0) && ((*(byte *)(lVar32 + 0x10) & 1) != 0)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppppbStack_260,
                     *(ulong *)(*(long *)(lVar32 + 0x20) + 0x30) & 0xfffffffffffffffc);
          uVar19 = (uint)(byte)(uStack_250 >> 0x38);
        }
        if (uVar19 >> 7 == 0) {
          if (uVar19 == 0) goto LAB_108028d4c;
          pppppbVar18 = &ppppbStack_260;
LAB_108028b8c:
          uVar15 = (ulong)*(byte *)pppppbVar18;
          if (*(byte *)pppppbVar18 < 0x29) {
            bVar8 = (1L << (uVar15 & 0x3f) & 0x1040210003eU) == 0;
            if (bVar8) {
              bVar8 = uVar15 == 0x1b;
              if (bVar8) {
                pppppuVar10 = (ulong *****)(param_2 + 0x98);
                uVar14 = 5;
                FUN_10802a450();
                if (!bVar8) goto LAB_108028bc4;
                func_0x00010802a55c();
                func_0x00010802a570();
                func_0x00010802a424();
                ppppuStack_80 = (ulong ****)pppppuVar10;
                uStack_78 = uVar14;
                func_0x00010802a2e8(&ppppuStack_a0,&UNK_10f471b09,0x42);
                func_0x00010802a28c();
                func_0x00010802a568();
                func_0x00010802a2f0();
                func_0x00010802a18c();
              }
              else {
                if ((1L << (uVar15 & 0x3f) & 0x5004000000U) == 0) goto LAB_108029128;
                uStack_c0 = 0;
                uStack_b8 = 0;
                func_0x00010802a354(&ppppuStack_a0,&UNK_10f471b6a,0x1b);
                func_0x00010802a2f0();
                func_0x00010802a18c();
              }
            }
            else {
              pppppuVar10 = (ulong *****)(param_2 + 0x98);
              uVar14 = 3;
              FUN_10802a450();
              if (!bVar8) {
LAB_108028bc4:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                          (&ppppbStack_260);
                goto LAB_108028bcc;
              }
              func_0x00010802a55c();
              func_0x00010802a570();
              func_0x00010802a424();
              ppppuStack_80 = (ulong ****)pppppuVar10;
              uStack_78 = uVar14;
              func_0x00010802a2e8(&ppppuStack_a0,&UNK_10f471aca,0x3e);
              func_0x00010802a28c();
              func_0x00010802a568();
              func_0x00010802a2f0();
              func_0x00010802a18c();
            }
          }
          else {
LAB_108029128:
            uStack_c0 = 0;
            uStack_b8 = 0;
            func_0x00010802a354(&ppppuStack_a0,&UNK_10f471b86,0x30);
            func_0x00010802a2f0();
            func_0x00010802a18c();
          }
        }
        else {
          pppppbVar18 = (byte *****)ppppbStack_260;
          if (puStack_258 != (undefined8 *)0x0) goto LAB_108028b8c;
LAB_108028d4c:
          uStack_c0 = 0;
          uStack_b8 = 0;
          func_0x00010802a354(&ppppuStack_a0,&UNK_10f471bb7,0x3e);
          func_0x00010802a2f0();
          func_0x00010802a18c();
        }
        func_0x00010802a2d8();
        goto LAB_10802918c;
      }
      iVar4 = *(int *)(*(long *)(lVar32 + 0x28) + 0x1c) + -1;
      bVar8 = iVar4 == 0xc;
      switch(iVar4) {
      case 0:
      case 2:
      case 9:
      case 0xb:
      case 0xc:
        FUN_10802a450();
        if (bVar8) {
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471aca);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          goto LAB_10802918c;
        }
        break;
      case 1:
        FUN_10802a450();
        if (bVar8) {
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471a8b);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          goto LAB_10802918c;
        }
        break;
      default:
        ppppuStack_a0 = (ulong ****)0x0;
        ppppuStack_98 = (ulong ****)0x0;
        func_0x00010802a354(&ppppbStack_260,&UNK_10f471b4c,0x1d);
        func_0x00010802a2f0();
        func_0x00010802a180();
        goto LAB_10802918c;
      case 4:
      case 5:
        break;
      case 7:
        FUN_10802a450();
        if (bVar8) {
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a150(&UNK_10f471a09);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          goto LAB_10802918c;
        }
        break;
      case 8:
        FUN_10802a450();
        if (bVar8) {
          func_0x00010802a1cc();
          func_0x00010802a1c0();
          func_0x00010802a388();
          func_0x00010802a270(&UNK_10f471a48);
          func_0x00010802a2d8();
          func_0x00010802a36c();
          func_0x00010802a2f0();
          func_0x00010802a180();
          goto LAB_10802918c;
        }
      }
LAB_108028bcc:
      puVar26 = puVar26 + 1;
    }
    uVar19 = (uint)auStack_1f0[0] >> 8;
    auStack_1f0[0] = CONCAT31((int3)uVar19,1);
    func_0x00010802a1d8(auStack_1f0);
LAB_108029194:
    ppppbStack_260 = (byte ****)&bStack_2a1;
    puStack_258 = &uStack_2c0;
    FUN_1080294a4(&ppppbStack_260,auStack_1f0);
    func_0x00010802a304();
    if ((bStack_2a1 & 1) == 0) {
      func_0x00010802a41c(&puStack_338);
      func_0x00010802a35c();
      uStack_250 = uStack_330;
      puStack_258 = puStack_338;
      puStack_338 = (undefined8 *)0x0;
      uStack_330 = 0;
      uStack_328 = 0;
      func_0x00010802a0cc();
      func_0x00010802a304();
      ppuVar13 = &puStack_338;
      goto LAB_1080291f8;
    }
    *(undefined1 *)param_1 = 1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2c0);
  func_0x000100100f40(&ppppuStack_2a0);
LAB_10802920c:
  func_0x0001080296fc(apppuStack_240);
  return;
}



/* Entry: 1080294a4; end: 1080294cf;  */

undefined8 * FUN_1080294a4(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *(undefined1 *)*param_1 = *param_2;
  func_0x000100066230(uVar1,param_2 + 8);
  return param_1;
}



/* Entry: 1080294d0; end: 108029637;  */

void FUN_1080294d0(ulong *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_88 [16];
  byte bStack_78;
  long lStack_58;
  byte bStack_48;
  
  FUN_10802a60c(auStack_88,param_3);
  if ((bStack_48 & 1) == 0) {
    func_0x00010002b838(&uStack_e0,&UNK_10f4715dd);
    uVar1 = uStack_d0;
    uStack_c8 = 0;
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010802a2a4(uVar1);
    func_0x00010802a304();
    puVar4 = &uStack_e0;
  }
  else {
    if (((bStack_78 & 1) != 0) && ((*(byte *)(lStack_58 + 0x10) & 1) != 0)) {
      uVar6 = 0;
      lVar5 = *(long *)(param_2 + 0x188);
      while (lVar5 != param_2 + 400) {
        if ((bStack_48 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10802961c);
          (*pcVar2)();
        }
        iVar3 = (int)auStack_88;
        (**(code **)(lVar5 + 0x28))();
        if (iVar3 != 0) {
          uVar6 = uVar6 | (long)(1 << (ulong)(*(int *)(lVar5 + 0x20) - 1U & 0x1f));
        }
        func_0x00010002c7d4();
      }
      *param_1 = uVar6;
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_108029590;
    }
    func_0x00010002b838(&uStack_f8,&UNK_10f471621);
    uVar1 = uStack_e8;
    uStack_c8 = 0;
    uStack_b8 = uStack_f0;
    uStack_c0 = uStack_f8;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x00010802a2a4(uVar1);
    func_0x00010802a304();
    puVar4 = &uStack_f8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
LAB_108029590:
  func_0x0001080296fc(auStack_88);
  return;
}



/* Entry: 108029638; end: 1080296e3;  */

void FUN_108029638(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  
  func_0x0001054901a8(&uStack_148);
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != param_2 + 1) {
    piVar1 = (int *)((long)puVar2 + 0x1c);
    puVar2 = &uStack_148;
    func_0x00010549023c(puVar2,(&PTR_s_UNKNOWN_110a18068)[*piVar1]);
    func_0x00010549023c();
    func_0x00010802a414();
  }
  func_0x000105491b64(param_1,auStack_140);
  func_0x000105490284(&uStack_148);
  return;
}



/* Entry: 1080296e4; end: 1080296e7;  */

undefined8 * FUN_1080296e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17e50;
  FUN_108027124(param_1 + 0x31);
  FUN_108026f14(param_1 + 0x2e);
  FUN_108027408(param_1 + 0x2b);
  func_0x000107276ba4(param_1 + 0x16);
  func_0x000108029b1c(param_1 + 0x13);
  func_0x000108029acc(param_1 + 0x10);
  func_0x000108029a7c(param_1 + 0xd);
  func_0x000108029a2c(param_1 + 10);
  func_0x0001080299dc(param_1 + 7);
  func_0x00010802998c(param_1 + 4);
  func_0x00010802993c(param_1 + 1);
  return param_1;
}



/* Entry: 1080296e8; end: 10802971b;  */

void FUN_1080296e8(void)

{
  FUN_10802971c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802971c; end: 1080297c3;  */

undefined8 * FUN_10802971c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17e50;
  FUN_108027124(param_1 + 0x31);
  FUN_108026f14(param_1 + 0x2e);
  FUN_108027408(param_1 + 0x2b);
  func_0x000107276ba4(param_1 + 0x16);
  func_0x000108029b1c(param_1 + 0x13);
  func_0x000108029acc(param_1 + 0x10);
  func_0x000108029a7c(param_1 + 0xd);
  func_0x000108029a2c(param_1 + 10);
  func_0x0001080299dc(param_1 + 7);
  func_0x00010802998c(param_1 + 4);
  func_0x00010802993c(param_1 + 1);
  return param_1;
}



/* Entry: 1080297c4; end: 108029857;  */

undefined1 * FUN_1080297c4(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_108029858(auStack_40);
  FUN_1080298b0(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010802992c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010802992c();
  func_0x00010802a2fc();
  *(undefined8 *)(puVar3 + 8) = uVar4;
  puVar2 = puVar3;
  FUN_108029880();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 108029858; end: 10802987f;  */

long FUN_108029858(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108029880();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108029880; end: 1080298af;  */

undefined8 * FUN_108029880(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x94f2094f2094f3) {
    puVar1 = (undefined8 *)(param_2 * 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a17fa8;
  FUN_1080279e4(param_1 + 3);
  return param_1;
}



/* Entry: 1080298b0; end: 1080298f3;  */

undefined8 * FUN_1080298b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a17fa8;
  FUN_1080279e4(param_1 + 3);
  return param_1;
}



/* Entry: 1080298f4; end: 1080298f7;  */

void FUN_1080298f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a17fa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080298f8; end: 10802990b;  */

void FUN_1080298f8(void)

{
  func_0x00010802991c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802990c; end: 10802993b;  */

void FUN_10802990c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108029914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10802993c; end: 108029b6b;  */

void FUN_10802993c(void)

{
  func_0x00010802a408();
  func_0x00010802995c();
  return;
}



/* Entry: 108029b6c; end: 108029bb3;  */

long * FUN_108029b6c(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029bb0;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029bb0;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029bb0:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029bb4; end: 108029bff;  */

void FUN_108029bb4(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029c00; end: 108029c47;  */

long * FUN_108029c00(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029c44;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029c44;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029c44:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029c48; end: 108029c93;  */

void FUN_108029c48(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029c94; end: 108029cdb;  */

long * FUN_108029c94(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029cd8;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029cd8;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029cd8:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029cdc; end: 108029d27;  */

void FUN_108029cdc(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029d28; end: 108029d6f;  */

long * FUN_108029d28(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029d6c;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029d6c;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029d6c:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029d70; end: 108029dbb;  */

void FUN_108029d70(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029dbc; end: 108029e03;  */

long * FUN_108029dbc(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029e00;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029e00;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029e00:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029e04; end: 108029e4f;  */

void FUN_108029e04(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029e50; end: 108029e97;  */

long * FUN_108029e50(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029e94;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029e94;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029e94:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108029e98; end: 108029ee3;  */

void FUN_108029e98(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029ee4; end: 108029f2b;  */

long * FUN_108029ee4(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(int *)((long)plVar2 + 0x1c) <= param_3) {
      if (param_3 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_108029f28;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108029f28;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108029f28:
  *param_2 = plVar2;
  return plVar1;
}


