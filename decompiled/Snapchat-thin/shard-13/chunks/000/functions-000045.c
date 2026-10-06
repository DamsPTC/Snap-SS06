/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e9fdec; end: 109e9fe17;  */

void FUN_109e9fdec(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x38))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__printf_11034c7f0)("; ");
  return;
}



/* Entry: 109e9fe18; end: 109ea0187;  */

void FUN_109e9fe18(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  (**(code **)**(undefined8 **)(param_1 + 0x38))();
  _printf(&UNK_10f61330b);
  for (plVar1 = *(long **)(param_1 + 0x48); plVar2 = plVar1 + -5,
      *plVar1 != 0 && plVar2 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)*plVar2)(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__putchar_11034c9b0)(0x29);
  return;
}



/* Entry: 109ea0188; end: 109ea024b;  */

void FUN_109ea0188(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      puVar2 = &UNK_10f61331f;
    }
    else {
      puVar2 = &UNK_10f613314;
    }
    _printf(puVar2);
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x38))();
  }
  plVar3 = *(long **)(param_1 + 0x40) + -5;
  if (**(long **)(param_1 + 0x40) != 0 && plVar3 != (long *)0x0) {
    do {
      if (*(long **)(param_1 + 0x40) == (long *)(param_1 + 0x50) ||
          *(long **)(param_1 + 0x40) != plVar3 + 5) {
        _printf(&DAT_10f68f19e);
      }
      (**(code **)*plVar3)(plVar3);
      plVar1 = plVar3 + 5;
      plVar3 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar3 != (long *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__printf_11034c7f0)("; ");
  return;
}



/* Entry: 109ea024c; end: 109ea02e7;  */

void FUN_109ea024c(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      pcVar2 = "continue; ";
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      pcVar2 = "break; ";
    }
  }
  else if (iVar1 == 2) {
    _printf(&UNK_10f486005);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x40))();
    }
    pcVar2 = "; ";
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    pcVar2 = "discard; ";
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__printf_11034c7f0)(pcVar2);
  return;
}



/* Entry: 109ea02e8; end: 109ea02f3;  */

void FUN_109ea02e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__printf_11034c7f0)(&UNK_10f613345);
  return;
}



/* Entry: 109ea02f4; end: 109ea06d3;  */

void FUN_109ea02f4(long param_1)

{
  _printf(&UNK_10f61334e);
  (**(code **)**(undefined8 **)(param_1 + 0x38))();
  _printf(&UNK_10f48d1ae);
  (**(code **)**(undefined8 **)(param_1 + 0x40))();
  if (*(long *)(param_1 + 0x48) != 0) {
    _printf(&UNK_10f613354);
                    /* WARNING: Could not recover jumptable at 0x000109ea0364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x48))();
    return;
  }
  return;
}



/* Entry: 109ea06d4; end: 109ea0757;  */

void FUN_109ea06d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38) + -5;
  if (**(long **)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      if (*(long **)(param_1 + 0x38) == (long *)(param_1 + 0x48) ||
          *(long **)(param_1 + 0x38) != plVar2 + 5) {
        _printf(&DAT_10f68f19e);
      }
      (**(code **)*plVar2)(plVar2);
      plVar1 = plVar2 + 5;
      plVar2 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar2 != (long *)0x0);
  }
  return;
}



/* Entry: 109ea0758; end: 109ea2073;  */

bool FUN_109ea0758(long param_1,uint param_2,uint param_3)

{
  if (*(char *)(*(long *)(param_1 + 8) + 6) != '\0') {
    return (byte)(&UNK_110b87d80)[param_2] <= param_3;
  }
  return false;
}



/* Entry: 109ea2074; end: 109ea2117;  */

undefined1 * FUN_109ea2074(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  puVar1 = param_1;
  FUN_109f619d8();
  *(undefined1 **)(param_1 + 8) = puVar1;
  puVar2 = (undefined8 *)0x30;
  _malloc();
  puVar3 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar3 = puVar2 + 6;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  FUN_109f6658c();
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  return param_1;
}



/* Entry: 109ea2118; end: 109ea235f;  */

bool FUN_109ea2118(char *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*param_1 == '\x01') {
    plVar2 = *(long **)(param_1 + 8);
    FUN_109f61800(plVar2,*(undefined8 *)(param_2 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_109f61798(uVar3,*(undefined8 *)(param_2 + 0x28));
    if ((int)uVar3 == 0) {
      if ((*plVar2 != 0) || (plVar2[2] != 0)) {
        return false;
      }
      *plVar2 = param_2;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x18);
      FUN_109f6650c(plVar4,0x40);
      *plVar4 = param_2;
      plVar4[2] = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[3] = 0;
      plVar4[6] = 0;
      plVar4[5] = 0;
      plVar4[7] = 0;
      if (plVar2 != (long *)0x0) {
        plVar4[1] = plVar2[1];
      }
      FUN_109f61854(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x28),plVar4);
    }
    bVar1 = true;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x18);
    FUN_109f6650c(plVar2,0x40);
    *plVar2 = param_2;
    plVar2[2] = 0;
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[7] = 0;
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_109f61854(uVar3,*(undefined8 *)(param_2 + 0x28),plVar2);
    bVar1 = (int)uVar3 == 0;
  }
  return bVar1;
}



/* Entry: 109ea2360; end: 109ea23f7;  */

bool FUN_109ea2360(char *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_109f61798(uVar1,*(undefined8 *)(param_2 + 0x20));
    if ((int)uVar1 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      FUN_109f61800(lVar2,*(undefined8 *)(param_2 + 0x20));
      if ((*(long *)(lVar2 + 8) == 0) && (*(long *)(lVar2 + 0x10) == 0)) {
        *(long *)(lVar2 + 8) = param_2;
        return true;
      }
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = param_2;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_109f61854(uVar1,*(undefined8 *)(param_2 + 0x20),puVar3);
  return (int)uVar1 == 0;
}



/* Entry: 109ea23f8; end: 109ea24e3;  */

bool FUN_109ea23f8(long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_109f65d74(uVar2,&UNK_10f6141fa);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  FUN_109f6650c(puVar3,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_110b5e8c8;
  puVar3[1] = 0;
  puVar3[7] = 0;
  puVar3[8] = uVar2;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(byte *)(puVar3 + 0xb) = *(byte *)(puVar3 + 0xb) & 0xfc | param_3 & 3;
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  FUN_109f6650c(puVar4,0x40);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  puVar4[7] = puVar3;
  lVar5 = *(long *)(param_1 + 8);
  FUN_109f61800(lVar5,uVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (lVar5 == 0) {
    FUN_109f61854(uVar6,uVar2,puVar4);
    iVar1 = (int)uVar6;
  }
  else {
    FUN_109f61974();
    iVar1 = (int)uVar6;
  }
  return iVar1 == 0;
}



/* Entry: 109ea24e4; end: 109ea2537;  */

void FUN_109ea24e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109f65d74(uVar1,&UNK_10f6141fa);
  FUN_109f61800(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



/* Entry: 109ea2538; end: 109ea27eb;  */

undefined ***
FUN_109ea2538(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte *param_6)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined **ppuStack_160;
  undefined1 uStack_158;
  undefined ***pppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_cd [45];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined ***pppuStack_68;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = (undefined ***)0x0;
  FUN_109eca628(0,param_4,param_5,param_3);
  ppuStack_160 = &PTR_FUN_110b632e8;
  uStack_158 = *(undefined1 *)(param_1 + 0x4c2);
  uStack_100 = 1;
  uVar5 = 0;
  pppuStack_150 = pppuVar4;
  lStack_d8 = param_1;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  uVar6 = 0;
  uStack_f0 = uVar5;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  uVar5 = 0;
  uStack_e8 = uVar6;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  ppuStack_140 = (undefined **)0x0;
  ppuStack_148 = (undefined **)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  plStack_118 = (long *)0x0;
  uStack_f8 = 0;
  uStack_108 = 0;
  uStack_e0 = uVar5;
  if (param_6 != (byte *)0x0) {
    uVar9 = 0;
    do {
      bVar2 = *param_6;
      *(undefined *)((long)&uStack_a0 + uVar9) = (&UNK_10f624e1f)[bVar2 >> 4];
      *(undefined *)((long)&uStack_a0 + uVar9 + 1) = (&UNK_10f624e1f)[(ulong)bVar2 & 0xf];
      bVar3 = uVar9 < 0x3e;
      uVar9 = uVar9 + 2;
      param_6 = param_6 + 1;
    } while (bVar3);
    uStack_60 = 0;
    _snprintf(auStack_cd,0x2d,&UNK_10f603fa4);
    pppuVar7 = pppuVar4;
    func_0x000109ecab14(pppuVar4,auStack_cd);
    *(undefined1 *)((long)pppuVar7 + 0x3e) = 1;
    ppuVar8 = pppuVar7[3];
    FUN_109ecabf8();
    pppuVar7[6] = ppuVar8;
    ppuVar8[4] = (undefined *)pppuVar7;
    plStack_118 = (long *)ppuVar8[9];
    if ((int)plStack_118[2] == 0) {
      uStack_138 = 1;
      plStack_130 = plStack_118;
      goto LAB_109ea26f0;
    }
    uStack_138 = 0;
    plVar11 = (long *)*plStack_118;
    plStack_118 = (long *)0x0;
    if (*plVar11 != 0) {
      plStack_118 = plVar11;
    }
    iVar1 = (int)plVar11[2];
    plStack_130 = plStack_118;
    while (iVar1 != 3) {
LAB_109ea26f0:
      plStack_118 = (long *)plStack_118[3];
      iVar1 = (int)plStack_118[2];
    }
    uStack_120 = *(undefined8 *)(plStack_118[4] + 0x18);
    ppuStack_140 = ppuVar8;
  }
  uStack_128 = 0;
  uStack_77 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  pppuStack_68 = &ppuStack_160;
  uStack_a0 = &PTR_FUN_110b63190;
  ppuStack_148 = ppuStack_140;
  FUN_109eb4670(&uStack_a0,*param_2);
  puVar10 = (undefined8 *)*param_2;
  plVar11 = (long *)*puVar10;
  if (*plVar11 != 0) {
    do {
      (**(code **)(plVar11[-1] + 0x10))(plVar11 + -1,&ppuStack_160);
      plVar11 = (long *)*plVar11;
    } while (*plVar11 != 0);
    puVar10 = (undefined8 *)*param_2;
    if (puVar10 == (undefined8 *)0x0) goto LAB_109ea278c;
  }
  FUN_109f65aa4(puVar10 + -6);
  FUN_109f65ae0(puVar10 + -6);
LAB_109ea278c:
  *param_2 = 0;
  pppuVar7 = &ppuStack_160;
  FUN_109ea27ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  FUN_109ea27ec(&ppuStack_160);
  __Unwind_Resume();
  *pppuVar7 = &PTR_FUN_110b632e8;
  if (pppuVar7[0xe] != (undefined **)0x0) {
    ppuVar8 = pppuVar7[0xe] + -6;
    FUN_109f65aa4(ppuVar8);
    FUN_109f65ae0(ppuVar8);
  }
  if (pppuVar7[0xf] != (undefined **)0x0) {
    ppuVar8 = pppuVar7[0xf] + -6;
    FUN_109f65aa4(ppuVar8);
    FUN_109f65ae0(ppuVar8);
  }
  func_0x000109f66a2c(pppuVar7[0x10],0);
  return pppuVar7;
}



/* Entry: 109ea27ec; end: 109ea285b;  */

undefined8 * FUN_109ea27ec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b632e8;
  if (param_1[0xe] != 0) {
    lVar1 = param_1[0xe] + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  if (param_1[0xf] != 0) {
    lVar1 = param_1[0xf] + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  func_0x000109f66a2c(param_1[0x10],0);
  return param_1;
}



/* Entry: 109ea285c; end: 109ea2a47;  */

undefined8 FUN_109ea285c(long param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  plVar4 = *(long **)(param_2 + 0x28);
  for (plVar12 = (long *)**(long **)(param_2 + 0x28); plVar12 != (long *)0x0;
      plVar12 = (long *)*plVar12) {
    if (*(int *)((long)plVar4 + 0x44) == 0) {
      lVar14 = *(long *)(param_1 + 0x38);
      lVar5 = *(long *)(lVar14 + 0x10);
      func_0x000109ecab14(lVar5,*(undefined8 *)(plVar4[0xe] + 0x20));
      uVar6 = *(undefined8 *)(plVar4[0xe] + 0x20);
      _strcmp(uVar6,"main");
      if ((int)uVar6 == 0) {
        *(undefined1 *)(lVar5 + 0x38) = 1;
      }
      lVar13 = (long)(plVar4 + -1);
      plVar12 = (long *)plVar4[4];
      uVar2 = 0xffffffff;
      do {
        uVar8 = uVar2;
        plVar12 = (long *)*plVar12;
        uVar2 = uVar8 + 1;
      } while (plVar12 != (long *)0x0);
      if ((undefined *)plVar4[3] != &DAT_10e05d768) {
        uVar2 = uVar8 + 2;
      }
      *(uint *)(lVar5 + 0x20) = uVar2;
      puVar7 = *(undefined2 **)(lVar14 + 0x10);
      FUN_109f658b0(puVar7,(ulong)uVar2 << 4);
      *(undefined2 **)(lVar5 + 0x28) = puVar7;
      puVar9 = (undefined *)plVar4[3];
      if (puVar9 != &DAT_10e05d768) {
        *puVar7 = 0x2001;
        *(undefined **)(puVar7 + 4) = puVar9;
        *(undefined1 *)(puVar7 + 1) = 1;
        *(undefined4 *)(puVar7 + 2) = 0x8000;
      }
      uVar10 = (ulong)(puVar9 != &DAT_10e05d768);
      plVar12 = (long *)plVar4[4];
      for (plVar3 = (long *)*(long *)plVar4[4]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        puVar1 = puVar7 + uVar10 * 8;
        *puVar1 = 0x2001;
        *(long *)(puVar1 + 4) = plVar12[3];
        *(undefined1 *)(puVar1 + 1) = 0;
        *(undefined4 *)(puVar1 + 2) =
             *(undefined4 *)
              (&UNK_10e06b440 + (ulong)((*(uint *)(plVar12 + 7) >> 0xb & 0xf) - 6) * 4);
        *(byte *)((long)puVar1 + 3) = *(byte *)((long)plVar12 + 0x3e) >> 2 & 1;
        uVar10 = (ulong)((int)uVar10 + 1);
        plVar12 = plVar3;
      }
      lVar11 = plVar4[0xe];
      *(undefined1 *)(lVar5 + 0x3d) = *(undefined1 *)(lVar11 + 0x48);
      uVar2 = *(uint *)(lVar11 + 0x4c);
      *(uint *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(lVar11 + 0x58);
      lVar11 = lVar5;
      FUN_109f658b0(lVar5,(ulong)uVar2 << 3);
      *(long *)(lVar5 + 0x48) = lVar11;
      uVar2 = *(uint *)(lVar5 + 0x40);
      if (0 < (int)uVar2) {
        lVar11 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar5 + 0x48) + lVar11) =
               *(undefined8 *)(*(long *)(plVar4[0xe] + 0x50) + lVar11);
          lVar11 = lVar11 + 8;
        } while ((ulong)uVar2 * 8 - lVar11 != 0);
      }
      lVar11 = *(long *)(lVar14 + 0x78);
      lVar14 = lVar13;
      (**(code **)(lVar11 + 8))(lVar13);
      func_0x000109f650c0(lVar11,lVar14,lVar13,lVar5);
      plVar12 = (long *)*plVar4;
    }
    plVar4 = plVar12;
  }
  return 1;
}



/* Entry: 109ea2a48; end: 109ea2a5b;  */

void FUN_109ea2a48(void)

{
  FUN_109ea27ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ea2a5c; end: 109ea2a5f;  */

void FUN_109ea2a5c(void)

{
  return;
}



/* Entry: 109ea2a60; end: 109ea31a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_109ea2a60(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  bool bVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  uint *puVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  uint *puVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  uint unaff_w25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint *unaff_x28;
  byte bVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  if ((*(uint *)(param_2 + 0x40) & 0x7800) == 0x3800) {
    return param_1;
  }
  plVar15 = (long *)param_1[2];
  FUN_109f658b0(plVar15,0x98);
  if (plVar15 != (long *)0x0) {
    plVar15[0x12] = 0;
    plVar15[0xf] = 0;
    plVar15[0xe] = 0;
    plVar15[0x11] = 0;
    plVar15[0x10] = 0;
    plVar15[0xb] = 0;
    plVar15[10] = 0;
    plVar15[0xd] = 0;
    plVar15[0xc] = 0;
    plVar15[7] = 0;
    plVar15[6] = 0;
    plVar15[9] = 0;
    plVar15[8] = 0;
    plVar15[3] = 0;
    plVar15[2] = 0;
    plVar15[5] = 0;
    plVar15[4] = 0;
    plVar15[1] = 0;
    *plVar15 = 0;
  }
  uVar30 = *(undefined8 *)(param_2 + 0x28);
  plVar15[2] = *(long *)(param_2 + 0x20);
  plVar33 = plVar15;
  FUN_109f65c2c(plVar15,uVar30);
  plVar15[3] = (long)plVar33;
  uVar18 = plVar15[4];
  uVar22 = ((ulong)(*(uint *)(param_2 + 0x40) >> 8) & 1) << 0x1e;
  uVar21 = uVar18 & 0xffffffff80000000;
  uVar19 = uVar21 | uVar18 & 0x3fffffff | uVar22;
  plVar15[4] = uVar19;
  uVar25 = uVar18 & 0x1fffff | ((ulong)*(uint *)(param_2 + 0x40) & 1) << 0x15;
  plVar15[4] = uVar21 | uVar18 & 0x3fc00000 | uVar22 | uVar25;
  uVar25 = uVar25 | ((ulong)(*(uint *)(param_2 + 0x40) >> 1) & 1) << 0x16;
  plVar15[4] = uVar21 | uVar18 & 0x3f800000 | uVar22 | uVar25;
  uVar25 = uVar25 | ((ulong)(*(uint *)(param_2 + 0x40) >> 2) & 1) << 0x17;
  plVar15[4] = uVar21 | uVar18 & 0x3f000000 | uVar22 | uVar25;
  uVar25 = uVar25 | ((ulong)(*(uint *)(param_2 + 0x40) >> 3) & 1) << 0x18;
  plVar15[4] = uVar21 | uVar18 & 0x3e000000 | uVar22 | uVar25;
  uVar10 = *(uint *)(param_2 + 0x40) >> 9 & 3;
  uVar24 = 0x2000;
  if (uVar10 != 2) {
    uVar24 = 0;
  }
  uVar28 = *(ulong *)((long)plVar15 + 0x2c);
  bVar13 = uVar10 == 3;
  uVar35 = 0x4000;
  if (!bVar13) {
    uVar35 = uVar24;
  }
  *(ulong *)((long)plVar15 + 0x2c) = uVar35 | uVar28 & 0xffffffffffff9fff;
  uVar25 = uVar25 | ((ulong)(*(uint *)(param_2 + 0x40) >> 5) & 1) << 0x19;
  plVar15[4] = uVar21 | uVar18 & 0x3c000000 | uVar22 | uVar25;
  uVar25 = uVar25 | ((ulong)(*(uint *)(param_2 + 0x40) >> 4) & 1) << 0x1a;
  plVar15[4] = uVar21 | uVar18 & 0x38000000 | uVar22 | uVar25;
  *(undefined4 *)((long)plVar15 + 0x3c) = *(undefined4 *)(param_2 + 0x50);
  uVar24 = uVar28 & 0x7ff | ((ulong)(*(ushort *)(param_2 + 0x44) >> 1) & 1) << 0xb;
  *(ulong *)((long)plVar15 + 0x2c) = uVar35 | uVar28 & 0xffffffffffff9000 | uVar24;
  uVar10 = *(int *)(param_2 + 0x58) << 0x15;
  uVar24 = uVar35 | uVar28 & 0xffffffffc01f9000 | uVar24;
  uVar35 = uVar24 | uVar10 & 0x3fe00000;
  *(ulong *)((long)plVar15 + 0x2c) = uVar35;
  if (*(int *)(param_2 + 0x58) < 0) {
    uVar35 = uVar24 | (uVar10 & 0x1fe00000 | 0x20000000);
    *(ulong *)((long)plVar15 + 0x2c) = uVar35;
  }
  uVar25 = uVar18 & 0x8000000 | uVar25 | ((ulong)(*(ushort *)(param_2 + 0x44) >> 3) & 3) << 0x1c;
  plVar15[4] = uVar21 | uVar22 | uVar25;
  uVar22 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x11 & 1) << 0x2a;
  uVar28 = uVar18 & 0xfffff80000000000 | uVar19 & 0x3ffc0000000 | uVar25 | uVar22;
  plVar15[4] = uVar28;
  uVar24 = uVar35 & 0x7f | (ulong)(*(uint *)(param_2 + 0x40) >> 0x1e) << 7;
  *(ulong *)((long)plVar15 + 0x2c) = uVar35 & 0xfffffffffffffe00 | uVar24;
  uVar24 = uVar24 | ((ulong)*(ushort *)(param_2 + 0x44) & 1) << 9;
  *(ulong *)((long)plVar15 + 0x2c) = uVar35 & 0xfffffffffffffc00 | uVar24;
  plVar15[4] = uVar18 & 0xfffff80000000000 | uVar19 & 0x3bfc0000000 | uVar25 | uVar22;
  uVar21 = ((ulong)(*(uint *)(param_2 + 0x40) >> 7) & 1) << 0xc;
  uVar19 = uVar35 & 0xffffffffffffe000 | uVar35 & 0xc00 | uVar24 | uVar21;
  *(ulong *)((long)plVar15 + 0x2c) = uVar19;
  *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(param_2 + 0x60);
  uVar22 = (ulong)(*(ushort *)(param_2 + 0x44) >> 0xe & 1) << 0x2b;
  uVar18 = uVar28 & 0xfffff7bfffffffff | uVar22;
  plVar15[4] = uVar18;
  uVar24 = uVar24 | ((ulong)(*(ushort *)(param_2 + 0x44) >> 0xd) & 1) << 10;
  *(ulong *)((long)plVar15 + 0x2c) = uVar35 & 0xffffffffffffe000 | uVar35 & 0x800 | uVar21 | uVar24;
  uVar10 = *(uint *)(param_2 + 0x40) >> 0xb & 0xf;
  uVar25 = (ulong)uVar10;
  bVar17 = true;
  uVar21 = 0x40000;
  bVar11 = false;
  switch(uVar10) {
  case 0:
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) goto code_r0x000109ea2ca8;
    bVar11 = false;
    bVar17 = true;
    uVar21 = 0x20000;
    break;
  case 1:
    if (*(long *)(param_2 + 0x88) == 0) {
      iVar14 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x000109ec6798();
      if ((iVar14 == 0) || ((*(byte *)(param_2 + 0x46) & 1) != 0)) {
        bVar11 = false;
        bVar17 = true;
        uVar21 = 2;
      }
      else {
        bVar11 = false;
        bVar17 = true;
        uVar21 = 0x10;
      }
    }
    else {
      bVar11 = false;
      bVar17 = false;
      uVar21 = 0x80;
    }
    break;
  case 2:
    bVar11 = false;
    bVar17 = false;
    uVar21 = 0x200;
    break;
  case 3:
    bVar11 = false;
    uVar21 = 0x80000;
    break;
  case 4:
    if ((*(char *)(param_1[2] + 0x61) == '\x03') && (*(int *)(param_2 + 0x50) == 0x15)) {
      bVar11 = false;
      *(undefined4 *)((long)plVar15 + 0x3c) = 0x22;
      uVar21 = 1;
      bVar17 = true;
    }
    else {
      bVar11 = false;
      bVar17 = true;
      uVar21 = 4;
    }
    break;
  case 5:
    bVar11 = true;
    uVar21 = 8;
    break;
  case 7:
  case 8:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x109ea31a4);
    (*pcVar12)();
  case 10:
    bVar11 = false;
    uVar21 = 1;
    break;
  case 0xb:
code_r0x000109ea2ca8:
    bVar11 = false;
    bVar17 = true;
    uVar21 = 0x40000;
    break;
  case 0xc:
  case 0xd:
    goto code_r0x000109ea2e24;
  case 0xe:
    while (!bVar13) {
      uVar25 = *(ulong *)(uVar25 + 0x18);
      bVar13 = *(int *)(uVar25 + 0x10) == 3;
    }
    uVar30 = *(undefined8 *)(*(long *)(uVar25 + 0x20) + 0x18);
    *(undefined8 *)(param_2 + 0x28) = 0x40000;
    *(undefined8 *)(param_2 + 0x30) = 1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = uVar30;
    *(ulong *)(param_2 + 0x48) = uVar25;
  case 0xf:
    *(undefined1 *)(param_2 + 0x60) = 1;
    return plVar33;
  }
  unaff_x26 = uVar28 & 0xfffff7bfffe00000 | uVar22 | uVar21;
  plVar15[4] = unaff_x26;
  uVar8 = *(ushort *)(param_2 + 0x44);
  uVar22 = NEON_ushl(CONCAT26(uVar8,CONCAT24(uVar8,CONCAT22(uVar8,uVar8))),0xfff7fff6fffafffc,2);
  uVar10 = (uint)(uVar22 & 0x4000100080010) | (uint)((uVar22 & 0x4000100080010) >> 0x20);
  unaff_w25 = uVar10 & 0xffff | uVar10 >> 0x10 | uVar8 >> 0xb & 2;
  lVar29 = *(long *)(param_2 + 0x88);
  plVar15[0x11] = lVar29;
  if (!bVar17) {
    for (lVar26 = *(long *)(param_2 + 0x20); *(char *)(lVar26 + 4) == '\x13';
        lVar26 = *(long *)(lVar26 + 0x30)) {
    }
    if ((*(char *)(lVar26 + 4) != '\x12') &&
       (unaff_x27 = (ulong)*(uint *)(lVar29 + 0x10), *(uint *)(lVar29 + 0x10) != 0)) {
      uVar18 = *(ulong *)(param_2 + 0x28);
      unaff_x28 = (uint *)(*(long *)(lVar29 + 0x30) + 0x28);
      while (uVar22 = uVar18, _strcmp(uVar18,*(undefined8 *)(unaff_x28 + -8)), (int)uVar22 != 0) {
        unaff_x28 = unaff_x28 + 0xc;
        unaff_x27 = unaff_x27 - 1;
        if (unaff_x27 == 0) goto code_r0x000109ea2e6c;
code_r0x000109ea2e24:
      }
      uVar10 = *unaff_x28;
      auVar39._4_4_ = uVar10;
      auVar39._0_4_ = uVar10;
      auVar39._8_4_ = uVar10;
      auVar39._12_4_ = uVar10;
      auVar39 = NEON_ushl(auVar39,_UNK_10e06b410,4);
      bVar37 = auVar39[0] & 0x10;
      auVar40._0_5_ = CONCAT14(auVar39[4],(uint)bVar37) & 0x8ffffffff;
      auVar40._5_3_ = 0;
      auVar40[8] = auVar39[8] & 1;
      auVar40._9_3_ = 0;
      auVar40[0xc] = auVar39[0xc] & 4;
      auVar40._13_3_ = 0;
      auVar40 = NEON_ext(auVar40,auVar40,8,1);
      uVar38 = CONCAT13(auVar40[3],CONCAT12(auVar40[2],CONCAT11(auVar40[1],bVar37 | auVar40[0])));
      unaff_w25 = uVar38 | uVar10 >> 0xd & 2 |
                  (uint)(CONCAT17(auVar40[7],
                                  CONCAT16(auVar40[6],
                                           CONCAT15(auVar40[5],
                                                    CONCAT14(auVar39[4] & 8 | auVar40[4],uVar38))))
                        >> 0x20) | unaff_w25;
    }
  }
code_r0x000109ea2e6c:
  uVar22 = (ulong)(*(uint *)(param_2 + 0x40) >> 0xf & 3) << 0x21;
  plVar15[4] = unaff_x26 & 0xffffffb1ffee029f | uVar22;
  uVar21 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x1c & 3) << 0x24;
  plVar15[4] = unaff_x26 & 0xffffff81ffee029f | uVar22 | uVar21;
  uVar8 = *(ushort *)(param_2 + 0x44) >> 5 & 7;
  uVar24 = uVar19 & 0xffffffffffe3f800 | uVar24;
  uVar25 = uVar24 | 0xc0000;
  if (uVar8 != 3) {
    uVar25 = uVar24 | 0x100000;
  }
  uVar18 = uVar24 | 0x80000;
  if (uVar8 != 2) {
    uVar18 = uVar25;
  }
  if (uVar8 != 0) {
    uVar24 = uVar24 | 0x40000;
  }
  if (uVar8 < 2) {
    uVar18 = uVar24;
  }
  *(ulong *)((long)plVar15 + 0x2c) = uVar18;
  uVar8 = *(ushort *)(param_2 + 0x44);
  *(ulong *)((long)plVar15 + 0x2c) = uVar18 & 0xffffc1ffffffffff;
  uVar9 = *(ushort *)(param_2 + 0x4e);
  *(uint *)((long)plVar15 + 0x34) = uVar8 >> 2 & 1;
  *(uint *)(plVar15 + 7) = (uint)uVar9;
  uVar25 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x13 & 1) << 0x29;
  plVar15[4] = unaff_x26 & 0xfffffd81ffee029f | uVar22 | uVar21 | uVar25;
  uVar19 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x14) & 0x40;
  *(ulong *)((long)plVar15 + 0x2c) = uVar18 & 0xffffc1ffffffffbf | uVar19;
  uVar24 = (ulong)(*(byte *)(param_2 + 0x46) & 1) << 0x28;
  plVar15[4] = unaff_x26 & 0xfffffc81ffee029f | uVar22 | uVar21 | uVar25 | uVar24;
  *(undefined4 *)(plVar15 + 9) = *(undefined4 *)(param_2 + 0x5c);
  uVar18 = (uVar18 & 0xffffc000ffffffbf | uVar19) + ((ulong)unaff_w25 << 0x20);
  *(ulong *)((long)plVar15 + 0x2c) = uVar18;
  uVar19 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x15) & 1;
  *(ulong *)((long)plVar15 + 0x2c) = uVar18 & 0xffffc1fffffffffe | uVar19;
  uVar35 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x15) & 2;
  *(ulong *)((long)plVar15 + 0x2c) = uVar18 & 0xffffc1fffffffffc | uVar19 | uVar35;
  for (lVar29 = plVar15[2]; *(char *)(lVar29 + 4) == '\x13'; lVar29 = *(long *)(lVar29 + 0x30)) {
  }
  if (*(char *)(lVar29 + 4) == '\x0f') {
    *(undefined4 *)((long)plVar15 + 0x4c) = *(undefined4 *)(param_2 + 0x48);
  }
  else if (bVar11) {
    *(byte *)((long)plVar15 + 0x4c) =
         *(byte *)((long)plVar15 + 0x4c) & 0xfc | *(byte *)(param_2 + 100) & 3;
    *(short *)((long)plVar15 + 0x4e) = (short)*(undefined4 *)(param_2 + 0x68);
  }
  plVar15[4] = unaff_x26 & 0xfffffc0000000000 | uVar25 | uVar24 |
               unaff_x26 & 0x1ffee029f | uVar22 | uVar21 |
               (ulong)(*(ushort *)(param_2 + 0x44) >> 0xf) << 0x27;
  uVar22 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x15) & 0x10;
  *(ulong *)((long)plVar15 + 0x2c) = uVar18 & 0xffffc1ffffffffec | uVar19 | uVar35 | uVar22;
  *(ulong *)((long)plVar15 + 0x2c) =
       uVar18 & 0xffffc1ffffffffcc | uVar19 | uVar35 | uVar22 |
       (ulong)(*(uint *)(param_2 + 0x40) >> 0x16) & 0x20;
  for (lVar29 = *(long *)(param_2 + 0x20); *(char *)(lVar29 + 4) == '\x13';
      lVar29 = *(long *)(lVar29 + 0x30)) {
  }
  if ((lVar29 == *(long *)(param_2 + 0x88)) && (*(long *)(param_2 + 0x80) != 0)) {
    plVar33 = plVar15;
    func_0x000109f6590c(plVar15,(ulong)*(uint *)(*(long *)(param_2 + 0x88) + 0x10) << 2);
    plVar15[0xc] = (long)plVar33;
    _memcpy();
  }
  uVar8 = *(ushort *)(param_2 + 0x4c);
  *(ushort *)(plVar15 + 0xd) = uVar8;
  if ((ulong)uVar8 == 0) {
    plVar15[0xe] = 0;
  }
  else {
    plVar33 = plVar15;
    func_0x000109f6590c(plVar15,(ulong)uVar8 << 3);
    plVar15[0xe] = (long)plVar33;
    for (lVar29 = *(long *)(param_2 + 0x20); *(char *)(lVar29 + 4) == '\x13';
        lVar29 = *(long *)(lVar29 + 0x30)) {
    }
    if (lVar29 == *(long *)(param_2 + 0x88)) {
      lVar29 = 0;
    }
    else {
      lVar29 = *(long *)(param_2 + 0x80);
    }
    if ((short)plVar15[0xd] != 0) {
      uVar22 = 0;
      do {
        lVar26 = 0;
        do {
          *(undefined2 *)((long)plVar33 + lVar26) = *(undefined2 *)(lVar29 + lVar26);
          lVar26 = lVar26 + 2;
        } while (lVar26 != 8);
        uVar22 = uVar22 + 1;
        plVar33 = plVar33 + 1;
        lVar29 = lVar29 + 8;
      } while (uVar22 < *(ushort *)(plVar15 + 0xd));
    }
  }
  lVar29 = *(long *)(param_2 + 0x78);
  if (lVar29 == 0) {
    lVar29 = *(long *)(param_2 + 0x70);
  }
  FUN_109ea7b44(lVar29,plVar15);
  plVar15[0xf] = lVar29;
  if ((plVar15[4] & 0x1fffffU) == 0x40000) {
    lVar29 = param_1[3];
    puVar27 = *(undefined8 **)(lVar29 + 0x70);
    *plVar15 = lVar29 + 0x68;
    plVar15[1] = (long)puVar27;
    *puVar27 = plVar15;
    *(long **)(lVar29 + 0x70) = plVar15;
  }
  else {
    FUN_109eca704(param_1[2],plVar15);
  }
  plVar33 = (long *)param_1[0xe];
  uVar22 = param_2;
  (*(code *)plVar33[1])();
  uVar10 = *(uint *)(plVar33 + 7);
  if (*(uint *)(plVar33 + 8) < uVar10) {
    if (*(uint *)((long)plVar33 + 0x44) + *(uint *)(plVar33 + 8) < uVar10) goto LAB_109f65210;
    uVar38 = *(uint *)((long)plVar33 + 0x3c);
    if (*(uint *)((long)plVar33 + 0x44) == uVar10) {
      _bzero(*plVar33,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar38 * 0x20) * 0x18);
      plVar33[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar38 = *(int *)((long)plVar33 + 0x3c) + 1;
  }
  if (uVar38 < 0x1f) {
    if (*plVar33 == 0) {
      lVar29 = 0;
    }
    else {
      lVar26 = *(long *)(*plVar33 + -0x30);
      lVar29 = 0;
      if (lVar26 != 0) {
        lVar29 = lVar26 + 0x30;
      }
    }
    lVar26 = (ulong)uVar38 * 0x20;
    uVar10 = *(uint *)(&UNK_10e47d50c + lVar26);
    func_0x000109f6590c(lVar29,(ulong)uVar10 * 0x18);
    if (lVar29 != 0) {
      puVar20 = (uint *)*plVar33;
      lVar23 = plVar33[3];
      uVar1 = *(uint *)(plVar33 + 4);
      *plVar33 = lVar29;
      uVar7 = *(uint *)(&UNK_10e47d510 + lVar26);
      *(uint *)(plVar33 + 4) = uVar10;
      *(uint *)((long)plVar33 + 0x24) = uVar7;
      lVar5 = *(long *)(&UNK_10e47d518 + lVar26);
      lVar6 = *(long *)(&UNK_10e47d520 + lVar26);
      plVar33[5] = lVar5;
      plVar33[6] = lVar6;
      *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar26);
      *(uint *)((long)plVar33 + 0x3c) = uVar38;
      *(undefined4 *)((long)plVar33 + 0x44) = 0;
      if (uVar1 != 0) {
        lVar26 = (ulong)uVar1 * 0x18;
        puVar31 = puVar20;
        do {
          lVar32 = *(long *)(puVar31 + 2);
          if (lVar32 != 0 && lVar32 != lVar23) {
            do {
              uVar38 = *puVar31;
              uVar21 = lVar5 * (ulong)uVar38;
              uVar21 = ((uVar21 & 0xffffffff) * (ulong)uVar10 >> 0x20) +
                       (uVar21 >> 0x20) * (ulong)uVar10 >> 0x20;
              puVar16 = (uint *)(lVar29 + uVar21 * 0x18);
              if (*(long *)(puVar16 + 2) != 0) {
                uVar25 = lVar6 * (ulong)uVar38;
                do {
                  uVar2 = (int)(((uVar25 & 0xffffffff) * (ulong)uVar7 >> 0x20) +
                                (uVar25 >> 0x20) * (ulong)uVar7 >> 0x20) + 1 + (int)uVar21;
                  uVar3 = 0;
                  if (uVar10 <= uVar2) {
                    uVar3 = uVar10;
                  }
                  uVar21 = (ulong)(uVar2 - uVar3);
                  puVar16 = (uint *)(lVar29 + uVar21 * 0x18);
                } while (*(long *)(puVar16 + 2) != 0);
              }
              uVar30 = *(undefined8 *)(puVar31 + 4);
              *puVar16 = uVar38;
              *(long *)(puVar16 + 2) = lVar32;
              *(undefined8 *)(puVar16 + 4) = uVar30;
              puVar16 = puVar31;
              do {
                puVar31 = puVar16 + 6;
                if (puVar31 == puVar20 + (ulong)uVar1 * 6) goto LAB_109f651f8;
                lVar32 = *(long *)(puVar16 + 8);
                puVar16 = puVar31;
              } while (lVar32 == 0 || lVar32 == lVar23);
            } while( true );
          }
          puVar31 = puVar31 + 6;
          lVar26 = lVar26 + -0x18;
        } while (lVar26 != 0);
      }
LAB_109f651f8:
      if (puVar20 != (uint *)0x0) {
        FUN_109f65aa4(puVar20 + -0xc);
        FUN_109f65ae0(puVar20 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar21 = plVar33[5] * (uVar22 & 0xffffffff);
  uVar10 = *(uint *)(plVar33 + 4);
  uVar38 = *(uint *)((long)plVar33 + 0x24);
  uVar25 = ((uVar21 & 0xffffffff) * (ulong)uVar10 >> 0x20) + (uVar21 >> 0x20) * (ulong)uVar10;
  uVar24 = uVar25 >> 0x20;
  uVar21 = plVar33[6] * (uVar22 & 0xffffffff);
  plVar36 = (long *)0x0;
  do {
    plVar34 = (long *)(*plVar33 + uVar24 * 0x18);
    lVar29 = plVar34[1];
    if (lVar29 == 0) {
      if (plVar36 != (long *)0x0) {
        plVar34 = plVar36;
      }
      goto LAB_109f652cc;
    }
    plVar4 = plVar34;
    if (plVar36 != (long *)0x0 || lVar29 != plVar33[3]) {
      plVar4 = plVar36;
    }
    if (((lVar29 != plVar33[3]) && ((int)*plVar34 == (int)uVar22)) &&
       (uVar18 = param_2, (*(code *)plVar33[2])(), (uVar18 & 1) != 0)) goto LAB_109f652fc;
    uVar1 = (int)(((uVar21 & 0xffffffff) * (ulong)uVar38 >> 0x20) + (uVar21 >> 0x20) * (ulong)uVar38
                 >> 0x20) + 1 + (int)uVar24;
    uVar7 = 0;
    if (uVar10 <= uVar1) {
      uVar7 = uVar10;
    }
    uVar1 = uVar1 - uVar7;
    uVar24 = (ulong)uVar1;
    plVar36 = plVar4;
  } while (uVar1 != (uint)(uVar25 >> 0x20));
  plVar34 = plVar4;
  if (plVar4 == (long *)0x0) {
    plVar34 = (long *)0x0;
  }
  else {
LAB_109f652cc:
    if (plVar34[1] == plVar33[3]) {
      *(int *)((long)plVar33 + 0x44) = *(int *)((long)plVar33 + 0x44) + -1;
    }
    *(int *)plVar34 = (int)uVar22;
    *(int *)(plVar33 + 8) = (int)plVar33[8] + 1;
LAB_109f652fc:
    plVar34[1] = param_2;
    plVar34[2] = (long)plVar15;
  }
  return plVar34;
}



/* Entry: 109ea31a4; end: 109ea331b;  */

void FUN_109ea31a4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    return;
  }
  *(long *)(param_1 + 0x68) = param_2;
  lVar7 = *(long *)(param_1 + 0x78);
  lVar2 = param_2;
  (**(code **)(lVar7 + 8))(param_2);
  FUN_109f64fdc(lVar7,lVar2,param_2);
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x10);
    lVar2 = *(long *)(lVar7 + 0x18);
    FUN_109ecabf8();
    *(long *)(lVar7 + 0x30) = lVar2;
    *(long *)(lVar2 + 0x20) = lVar7;
    *(long *)(param_1 + 0x18) = lVar2;
    *(undefined1 *)(param_1 + 0x60) = 0;
    plVar3 = *(long **)(lVar2 + 0x48);
    if ((int)plVar3[2] == 0) {
      uVar4 = 1;
      plVar5 = plVar3;
      goto LAB_109ea324c;
    }
    uVar4 = 0;
    plVar5 = (long *)*plVar3;
    plVar3 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar3 = plVar5;
    }
    iVar1 = (int)plVar5[2];
    plVar5 = plVar3;
    while (iVar1 != 3) {
LAB_109ea324c:
      plVar3 = (long *)plVar3[3];
      iVar1 = (int)plVar3[2];
    }
    uVar6 = *(undefined8 *)(plVar3[4] + 0x18);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(long **)(param_1 + 0x30) = plVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    *(long **)(param_1 + 0x48) = plVar3;
    for (plVar3 = *(long **)(param_2 + 0x50); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      (**(code **)(plVar3[-1] + 0x10))(plVar3 + -1,param_1);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 != 0) {
      plVar3 = *(long **)(lVar2 + 0x48);
      if ((int)plVar3[2] == 0) {
        uVar4 = 1;
        plVar5 = plVar3;
        goto LAB_109ea32e0;
      }
      uVar4 = 0;
      plVar5 = (long *)*plVar3;
      plVar3 = (long *)0x0;
      if (*plVar5 != 0) {
        plVar3 = plVar5;
      }
      iVar1 = (int)plVar5[2];
      plVar5 = plVar3;
      while (iVar1 != 3) {
LAB_109ea32e0:
        plVar3 = (long *)plVar3[3];
        iVar1 = (int)plVar3[2];
      }
      uVar6 = *(undefined8 *)(plVar3[4] + 0x18);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      *(long **)(param_1 + 0x30) = plVar5;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      *(long **)(param_1 + 0x48) = plVar3;
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return;
}



/* Entry: 109ea331c; end: 109ea3363;  */

void FUN_109ea331c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x28);
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    (**(code **)(plVar2[-1] + 0x10))(plVar2 + -1,param_1);
    plVar2 = (long *)*plVar2;
    lVar1 = *plVar2;
  }
  return;
}



/* Entry: 109ea3364; end: 109ea44f3;  */

void FUN_109ea3364(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uStack_d0;
  ulong uStack_c8;
  uint auStack_c0 [6];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 < 0x9d) {
    if (iVar1 != 0x73) {
      if (iVar1 == 0x75) {
        uVar9 = 100;
      }
      else {
        if (iVar1 != 0x76) goto LAB_109ea35f0;
        uVar9 = 0x65;
      }
      lVar8 = *(long *)(param_1 + 0x40);
      FUN_109ecb0a8(lVar8,uVar9);
      (**(code **)(**(long **)(param_2 + 0x30) + 0x10))(*(long **)(param_2 + 0x30),param_1);
      lVar12 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(long *)(lVar8 + 0x98) = lVar12 + 0x80;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        if (*(int *)(lVar8 + 0x18) == 4) {
          if (((&UNK_110b6719c)[(ulong)*(uint *)(lVar8 + 0x28) * 0x68] & 1) == 0) {
            FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar8,0x20
                         );
            *(undefined8 *)(param_1 + 0x28) = 3;
            *(long *)(param_1 + 0x30) = lVar8;
            return;
          }
        }
        else if (*(int *)(lVar8 + 0x18) == 3) {
          lVar12 = lVar8 + 0x38;
          goto LAB_109ea8064;
        }
        lVar12 = lVar8 + 0x30;
LAB_109ea8064:
        FUN_109ecb048(lVar8,lVar12,1);
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar8);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(long *)(param_1 + 0x30) = lVar8;
        *(long *)(param_1 + 0x50) = lVar12;
        return;
      }
      goto LAB_109ea44ec;
    }
  }
  else if (1 < iVar1 - 0x9dU) {
LAB_109ea35f0:
    if (*(char *)(param_2 + 0x50) != '\0') {
      uVar17 = 0;
      do {
        lVar8 = param_1;
        FUN_109ea7f04(param_1,((long *)(param_2 + 0x30))[uVar17]);
        alStack_90[uVar17] = lVar8;
        uVar17 = uVar17 + 1;
        uVar13 = (ulong)*(byte *)(param_2 + 0x50);
      } while (uVar17 < uVar13);
      if (*(byte *)(param_2 + 0x50) != 0) {
        puVar14 = auStack_c0;
        plVar16 = (long *)(param_2 + 0x30);
        do {
          *puVar14 = (uint)*(byte *)(*(long *)(*plVar16 + 0x20) + 4);
          uVar13 = uVar13 - 1;
          puVar14 = puVar14 + 1;
          plVar16 = plVar16 + 1;
        } while (uVar13 != 0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000109ea3664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10e06b468 + (ulong)*(uint *)(param_2 + 0x28) * 2) * 4 +
              0x109ea3668))();
    return;
  }
  plVar16 = *(long **)(param_2 + 0x30);
  if (plVar16 == (long *)0x0 || 2 < *(uint *)(plVar16 + 3)) {
    plVar18 = plVar16;
    if (*(uint *)(plVar16 + 3) != 4) {
      plVar18 = (long *)0x0;
    }
    if ((plVar18 == (long *)0x0) || (2 < *(uint *)((long *)plVar16[6] + 3))) {
      plVar11 = (long *)plVar16[5];
      if (2 < *(uint *)(plVar11 + 3)) {
        plVar11 = (long *)0x0;
      }
    }
    else {
      plVar11 = (long *)plVar16[6];
      plVar18 = plVar16;
      plVar16 = (long *)0x0;
    }
  }
  else {
    plVar18 = (long *)0x0;
    plVar11 = plVar16;
    plVar16 = (long *)0x0;
  }
  (**(code **)(*plVar11 + 0x10))(plVar11,param_1);
  if (*(int *)(param_2 + 0x28) == 0x73) {
    uVar9 = 0xbb;
  }
  else if (*(int *)(param_2 + 0x28) == 0x9e) {
    uVar9 = 0xbd;
  }
  else {
    uVar9 = 0xbc;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  FUN_109ecb0a8(lVar8,uVar9);
  *(undefined1 *)(lVar8 + 0x50) = *(undefined1 *)(plVar11[4] + 0xd);
  lVar12 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(long *)(lVar8 + 0x98) = lVar12 + 0x80;
  if ((*(uint *)(lVar8 + 0x28) & 0xfffffffe) == 0xbc) {
    lVar12 = param_1;
    FUN_109ea7f04(param_1,*(undefined8 *)(param_2 + 0x38));
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(long *)(lVar8 + 0xb8) = lVar12;
  }
  FUN_109ea8010(param_1,lVar8,*(undefined1 *)(plVar11[4] + 0xd),
                *(undefined4 *)(&UNK_10e06b7a0 + (ulong)*(byte *)(plVar11[4] + 4) * 4));
  if (plVar16 != (long *)0x0) {
    uVar4 = *(ushort *)(plVar16 + 6);
    uVar5 = CONCAT22(uVar4 >> 2,uVar4);
    uVar9 = NEON_ushl(CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4))),0xfffafffc,2);
    uVar17 = CONCAT44((int)uVar9,uVar5) & 0x3000300030003;
    uStack_c8 = (ulong)CONCAT24((short)(uVar17 >> 0x30),(uint)(ushort)(uVar17 >> 0x20));
    uStack_d0 = (ulong)(CONCAT24((short)(uVar17 >> 0x10),uVar5) & 0xffff00000003);
    lVar8 = *(long *)(param_1 + 0x50);
    bVar3 = *(byte *)(plVar16[4] + 0xd);
    alStack_90[2] = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = lVar8;
    uVar15 = (uint)bVar3;
    if (bVar3 == 0) {
      bVar6 = true;
    }
    else {
      uVar17 = 0;
      uVar10 = uVar15;
      if (0xf < bVar3) {
        uVar10 = 0x10;
      }
      bVar6 = true;
      do {
        uVar2 = *(uint *)((long)&uStack_d0 + uVar17 * 4);
        bVar6 = (bool)(uVar17 == uVar2 & bVar6);
        *(char *)((long)&uStack_70 + uVar17) = (char)uVar2;
        uVar17 = uVar17 + 1;
      } while (uVar10 != uVar17);
    }
    if ((*(byte *)(lVar8 + 0x1c) != uVar15) || (!bVar6)) {
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      lStack_a8 = lVar8;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      if (*(byte *)(lVar8 + 0x1c) == uVar15) {
        if (uVar15 != 0) {
          uVar17 = 0;
          bVar6 = false;
          do {
            bVar6 = (bool)(uVar17 != *(byte *)((long)&uStack_a0 + uVar17) | bVar6);
            uVar17 = uVar17 + 1;
          } while (bVar3 != uVar17);
          if (bVar6) goto LAB_109ea3714;
        }
      }
      else {
LAB_109ea3714:
        lVar12 = *(long *)(param_1 + 0x40);
        FUN_109ecaef8(lVar12,0x154);
        lVar8 = lVar12 + 0x30;
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x38);
        *(ushort *)(lVar12 + 0x2c) = uVar4;
        *(ushort *)(lVar12 + 0x2c) = (*(ushort *)(param_1 + 0x3c) & 0x1ff) << 3 | uVar4 & 0xf007;
        *(long *)(lVar12 + 0x58) = alStack_90[1];
        *(long *)(lVar12 + 0x50) = alStack_90[0];
        *(long *)(lVar12 + 0x68) = alStack_90[3];
        *(long *)(lVar12 + 0x60) = alStack_90[2];
        *(undefined8 *)(lVar12 + 0x78) = uStack_68;
        *(undefined8 *)(lVar12 + 0x70) = uStack_70;
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar12);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(long *)(param_1 + 0x30) = lVar12;
      }
    }
    *(long *)(param_1 + 0x50) = lVar8;
  }
  if (plVar18 != (long *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    lVar12 = *(long *)(param_1 + 0x40);
    FUN_109ecaef8(lVar12,0x8c);
    lVar8 = 0;
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x58) = 0;
      *(undefined8 *)(lVar12 + 0x60) = 0;
      *(undefined8 *)(lVar12 + 0x68) = uVar9;
      lVar8 = param_1 + 0x28;
      func_0x000109ecdf34(lVar8,lVar12);
    }
    *(long *)(param_1 + 0x50) = lVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_109ea44ec:
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ea44f4);
  (*pcVar7)();
}



/* Entry: 109ea44f4; end: 109ea4a07;  */

void FUN_109ea44f4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109ea4534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e06b5b6)[*(uint *)(param_2 + 0x28)] * 4 + 0x109ea4538))(1);
  return;
}



/* Entry: 109ea4a08; end: 109ea4beb;  */

void FUN_109ea4a08(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ushort *)(param_2 + 0x30);
  uVar4 = CONCAT22(uVar3 >> 2,uVar3);
  uVar17 = NEON_ushl(CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3))),0xfffafffc,2);
  uVar18 = CONCAT44((int)uVar17,uVar4) & 0x3000300030003;
  uStack_c0 = (ulong)(CONCAT24((short)(uVar18 >> 0x10),uVar4) & 0xffff00000003);
  uStack_b8 = (ulong)CONCAT24((short)(uVar18 >> 0x30),(uint)(ushort)(uVar18 >> 0x20));
  plVar10 = *(long **)(param_2 + 0x28);
  lVar6 = param_1;
  FUN_109ea7f04();
  bVar2 = *(byte *)(*(long *)(param_2 + 0x20) + 0xd);
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = lVar6;
  uVar16 = (uint)bVar2;
  if (bVar2 == 0) {
    bVar5 = true;
  }
  else {
    uVar18 = 0;
    uVar12 = uVar16;
    if (0xf < bVar2) {
      uVar12 = 0x10;
    }
    bVar5 = true;
    do {
      uVar1 = *(uint *)((long)&uStack_c0 + uVar18 * 4);
      bVar5 = (bool)(uVar18 == uVar1 & bVar5);
      *(char *)((long)&uStack_60 + uVar18) = (char)uVar1;
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
  }
  lVar15 = lVar6;
  if ((*(byte *)(lVar6 + 0x1c) == uVar16) && (bVar5)) goto LAB_109ea4bb4;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = lVar6;
  uStack_a0 = 0;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  if (*(byte *)(lVar6 + 0x1c) == uVar16) {
    if (uVar16 == 0) goto LAB_109ea4bb4;
    uVar18 = 0;
    bVar5 = false;
    do {
      bVar5 = (bool)(uVar18 != *(byte *)((long)&uStack_90 + uVar18) | bVar5);
      uVar18 = uVar18 + 1;
    } while (bVar2 != uVar18);
    if (!bVar5) goto LAB_109ea4bb4;
  }
  lVar7 = *(long *)(param_1 + 0x40);
  FUN_109ecaef8(lVar7,0x154);
  lVar15 = lVar7 + 0x30;
  FUN_109ecb048();
  uVar3 = *(ushort *)(lVar7 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x38);
  *(ushort *)(lVar7 + 0x2c) = uVar3;
  *(ushort *)(lVar7 + 0x2c) = (*(ushort *)(param_1 + 0x3c) & 0x1ff) << 3 | uVar3 & 0xf007;
  *(undefined8 *)(lVar7 + 0x58) = uStack_78;
  *(undefined8 *)(lVar7 + 0x50) = uStack_80;
  *(long *)(lVar7 + 0x68) = lStack_68;
  *(undefined8 *)(lVar7 + 0x60) = uStack_70;
  *(undefined8 *)(lVar7 + 0x78) = uStack_58;
  *(undefined8 *)(lVar7 + 0x70) = uStack_60;
  lVar6 = *(long *)(param_1 + 0x28);
  plVar10 = *(long **)(param_1 + 0x30);
  FUN_109ecb4f0(lVar6,plVar10,lVar7);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar7;
LAB_109ea4bb4:
  *(long *)(param_1 + 0x50) = lVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    plVar14 = plVar10;
    (**(code **)(*plVar10 + 0x40))();
    if ((((*(uint *)(plVar14 + 8) & 0x7800) == 0x3800) ||
        (plVar14 = plVar10, (**(code **)(*plVar10 + 0x40))(),
        (*(uint *)(plVar14 + 8) & 0x7800) == 0x4000)) ||
       (plVar14 = plVar10, (**(code **)(*plVar10 + 0x40))(),
       (*(uint *)(plVar14 + 8) & 0x7800) == 0x3000)) {
      uVar16 = (uint)(*(undefined **)(*(long *)(lVar6 + 0x68) + 0x20) != &DAT_10e05d768);
      for (plVar14 = *(long **)(*(long *)(lVar6 + 0x68) + 0x28);
          (*plVar14 != 0 &&
          (plVar8 = plVar10, (**(code **)(*plVar10 + 0x40))(), plVar14 + -1 != plVar8));
          plVar14 = (long *)*plVar14) {
        uVar16 = uVar16 + 1;
      }
      lVar15 = *(long *)(lVar6 + 0x40);
      uVar11 = *(undefined1 *)
                (*(long *)(*(long *)(*(long *)(lVar6 + 0x48) + 0x20) + 0x28) + (ulong)uVar16 * 0x10)
      ;
      FUN_109ecb0a8(lVar15,0x166);
      *(undefined1 *)(lVar15 + 0x50) = uVar11;
      FUN_109ecb048();
      *(uint *)(lVar15 + (ulong)(byte)(&UNK_110b671b6)[(ulong)*(uint *)(lVar15 + 0x28) * 0x68] * 4 +
               0x50) = uVar16;
      FUN_109ecb4f0(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),lVar15);
      *(undefined8 *)(lVar6 + 0x28) = 3;
      *(long *)(lVar6 + 0x30) = lVar15;
      lVar7 = plVar10[4];
      puVar9 = (undefined8 *)**(undefined8 **)(lVar6 + 0x40);
      FUN_109f6600c(puVar9,0xa0,8);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[0x11] = 0;
        puVar9[0x10] = 0;
        puVar9[0x13] = 0;
        puVar9[0x12] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
      }
      *(undefined4 *)(puVar9 + 3) = 1;
      *puVar9 = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[5] = 0x4000000000005;
      puVar9[6] = lVar7;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = lVar15 + 0x30;
      puVar9[0xb] = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0;
      uVar11 = *(undefined1 *)(lVar15 + 0x4c);
      uVar16 = (uint)*(byte *)(lVar15 + 0x4d);
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x70);
      lVar13 = plVar10[5];
      lVar15 = lVar13;
      (**(code **)(lVar7 + 8))(lVar13);
      FUN_109f64fdc(lVar7,lVar15,lVar13);
      lVar15 = *(long *)(lVar7 + 0x10);
      puVar9 = (undefined8 *)**(undefined8 **)(lVar6 + 0x40);
      FUN_109f6600c(puVar9,0xa0,8);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[0x11] = 0;
        puVar9[0x10] = 0;
        puVar9[0x13] = 0;
        puVar9[0x12] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
      }
      *(undefined4 *)(puVar9 + 3) = 1;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 5) = 0;
      *(uint *)((long)puVar9 + 0x2c) = *(uint *)(lVar15 + 0x20) & 0x1fffff;
      puVar9[6] = *(undefined8 *)(lVar15 + 0x10);
      puVar9[7] = lVar15;
      if (*(char *)(*(long *)(lVar6 + 0x40) + 0x61) == '\x0e') {
        uVar16 = *(uint *)(*(long *)(lVar6 + 0x40) + 0x160);
      }
      else {
        uVar16 = 0x20;
      }
      uVar11 = 1;
    }
    FUN_109ecb048(puVar9,puVar9 + 0x10,uVar11,uVar16);
    FUN_109ecb4f0(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),puVar9);
    *(undefined8 *)(lVar6 + 0x28) = 3;
    *(undefined8 **)(lVar6 + 0x30) = puVar9;
    *(undefined8 **)(lVar6 + 0x58) = puVar9;
    return;
  }
  return;
}



/* Entry: 109ea4bec; end: 109ea4e87;  */

void FUN_109ea4bec(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x40))();
  if ((((*(uint *)(plVar5 + 8) & 0x7800) == 0x3800) ||
      (plVar5 = param_2, (**(code **)(*param_2 + 0x40))(),
      (*(uint *)(plVar5 + 8) & 0x7800) == 0x4000)) ||
     (plVar5 = param_2, (**(code **)(*param_2 + 0x40))(), (*(uint *)(plVar5 + 8) & 0x7800) == 0x3000
     )) {
    uVar8 = (uint)(*(undefined **)(*(long *)(param_1 + 0x68) + 0x20) != &DAT_10e05d768);
    for (plVar5 = *(long **)(*(long *)(param_1 + 0x68) + 0x28);
        (*plVar5 != 0 && (plVar1 = param_2, (**(code **)(*param_2 + 0x40))(), plVar5 + -1 != plVar1)
        ); plVar5 = (long *)*plVar5) {
      uVar8 = uVar8 + 1;
    }
    lVar6 = *(long *)(param_1 + 0x40);
    uVar3 = *(undefined1 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x20) + 0x28) + (ulong)uVar8 * 0x10);
    FUN_109ecb0a8(lVar6,0x166);
    *(undefined1 *)(lVar6 + 0x50) = uVar3;
    FUN_109ecb048();
    *(uint *)(lVar6 + (ulong)(byte)(&UNK_110b671b6)[(ulong)*(uint *)(lVar6 + 0x28) * 0x68] * 4 +
             0x50) = uVar8;
    FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar6);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(long *)(param_1 + 0x30) = lVar6;
    lVar7 = param_2[4];
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    FUN_109f6600c(puVar2,0xa0,8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[5] = 0x4000000000005;
    puVar2[6] = lVar7;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = lVar6 + 0x30;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    uVar3 = *(undefined1 *)(lVar6 + 0x4c);
    uVar8 = (uint)*(byte *)(lVar6 + 0x4d);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x70);
    lVar4 = param_2[5];
    lVar6 = lVar4;
    (**(code **)(lVar7 + 8))(lVar4);
    FUN_109f64fdc(lVar7,lVar6,lVar4);
    lVar6 = *(long *)(lVar7 + 0x10);
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    FUN_109f6600c(puVar2,0xa0,8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(uint *)((long)puVar2 + 0x2c) = *(uint *)(lVar6 + 0x20) & 0x1fffff;
    puVar2[6] = *(undefined8 *)(lVar6 + 0x10);
    puVar2[7] = lVar6;
    if (*(char *)(*(long *)(param_1 + 0x40) + 0x61) == '\x0e') {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x40) + 0x160);
    }
    else {
      uVar8 = 0x20;
    }
    uVar3 = 1;
  }
  FUN_109ecb048(puVar2,puVar2 + 0x10,uVar3,uVar8);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar2);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  return;
}



/* Entry: 109ea4e88; end: 109ea4f37;  */

void FUN_109ea4e88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  FUN_109ea7f04(param_1,*(undefined8 *)(param_2 + 0x30));
  (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),param_1);
  lVar4 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x000109ecaf70(lVar2,1);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar4 + 0x2c);
  uVar3 = *(undefined8 *)(lVar4 + 0x30);
  func_0x000109eca118();
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(long *)(lVar2 + 0x50) = lVar4 + 0x80;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(long *)(lVar2 + 0x70) = lVar1;
  FUN_109ecb048(lVar2,lVar2 + 0x80,*(undefined1 *)(lVar4 + 0x9c),*(undefined1 *)(lVar4 + 0x9d));
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar2);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar2;
  *(long *)(param_1 + 0x58) = lVar2;
  return;
}



/* Entry: 109ea4f38; end: 109ea547f;  */

void FUN_109ea4f38(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  byte bVar26;
  ulong unaff_x24;
  undefined **unaff_x25;
  ulong uVar27;
  uint auStack_1e0 [4];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  uint auStack_110 [22];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),param_1);
  uVar17 = *(uint *)(param_2 + 0x30);
  uVar27 = (ulong)uVar17;
  puVar21 = *(undefined8 **)(param_1 + 0x58);
  if (*(int *)(puVar21 + 5) == 0) {
    lVar11 = *(long *)(param_1 + 0x80);
    uVar22 = puVar21[7];
    uVar7 = uVar22;
    (**(code **)(lVar11 + 0x10))(uVar22);
    FUN_109f66ba8(lVar11,uVar7,uVar22);
    puVar21 = *(undefined8 **)(param_1 + 0x58);
    if (lVar11 == 0) goto LAB_109ea4f94;
    uVar2 = *(undefined1 *)(puVar21[6] + 0xd);
    lVar11 = *(long *)(param_1 + 0x40);
    FUN_109ecb0a8(lVar11,0x112);
    *(undefined1 *)(lVar11 + 0x50) = uVar2;
    puVar6 = (undefined8 *)(lVar11 + 0x30);
    FUN_109ecb048();
    *(undefined8 *)(lVar11 + 0x80) = 0;
    *(undefined8 *)(lVar11 + 0x88) = 0;
    *(undefined8 *)(lVar11 + 0x90) = 0;
    *(undefined8 **)(lVar11 + 0x98) = puVar21 + 0x10;
    unaff_x25 = &PTR_DAT_110b67188;
    *(undefined4 *)
     (lVar11 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar11 + 0x28) * 0x68] * 4 + 0x50) = 0
    ;
    FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar11);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(long *)(param_1 + 0x30) = lVar11;
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
    FUN_109ec85e4(uVar7,"code");
    bVar26 = *(byte *)(lVar11 + 0x4c);
    if (uVar17 == (uint)uVar7) {
      uVar17 = bVar26 - 1;
      uVar27 = (ulong)uVar17;
      if (uVar17 != 0) {
        lVar11 = *(long *)(param_1 + 0x40);
        FUN_109ecaef8(lVar11,0x154);
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar11 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x38);
        *(ushort *)(lVar11 + 0x2c) = uVar4;
        *(ushort *)(lVar11 + 0x2c) = (*(ushort *)(param_1 + 0x3c) & 0x1ff) << 3 | uVar4 & 0xf007;
        *(undefined8 *)(lVar11 + 0x50) = 0;
        *(undefined8 *)(lVar11 + 0x58) = 0;
        *(undefined8 *)(lVar11 + 0x60) = 0;
        *(undefined8 **)(lVar11 + 0x68) = puVar6;
        *(char *)(lVar11 + 0x70) = (char)uVar17;
        *(undefined8 *)(lVar11 + 0x71) = 0;
        *(undefined8 *)(lVar11 + 0x78) = 0;
LAB_109ea52e8:
        puVar6 = (undefined8 *)(lVar11 + 0x30);
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar11);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(long *)(param_1 + 0x30) = lVar11;
      }
    }
    else {
      uVar17 = 0;
      uVar23 = 0;
      uVar19 = bVar26 - 1;
      auStack_110[10] = 0;
      auStack_110[0xb] = 0;
      auStack_110[8] = 0;
      auStack_110[9] = 0;
      auStack_110[0xe] = 0;
      auStack_110[0xf] = 0;
      auStack_110[0xc] = 0;
      auStack_110[0xd] = 0;
      auStack_110[2] = 0;
      auStack_110[3] = 0;
      auStack_110[0] = 0;
      auStack_110[1] = 0;
      auStack_110[6] = 0;
      auStack_110[7] = 0;
      auStack_110[4] = 0;
      auStack_110[5] = 0;
      uVar14 = 0xffff;
      if (uVar19 != 0x20) {
        uVar14 = (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU) & 0xffff;
      }
      do {
        if ((uVar14 >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
          auStack_110[uVar23] = uVar17;
          uVar23 = (ulong)((int)uVar23 + 1);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x10);
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = puVar6;
      uVar17 = (uint)uVar23;
      if (uVar17 == 0) {
        bVar5 = true;
      }
      else {
        uVar18 = 0;
        uVar14 = uVar17;
        if (0xf < uVar17) {
          uVar14 = 0x10;
        }
        bVar5 = true;
        do {
          bVar5 = (bool)(uVar18 == auStack_110[uVar18] & bVar5);
          *(char *)((long)&uStack_80 + uVar18) = (char)auStack_110[uVar18];
          uVar18 = uVar18 + 1;
        } while (uVar14 != uVar18);
      }
      if ((uVar17 != bVar26) || (!bVar5)) {
        auStack_110[0x12] = 0;
        auStack_110[0x13] = 0;
        auStack_110[0x10] = 0;
        auStack_110[0x11] = 0;
        puStack_b8 = puVar6;
        auStack_110[0x14] = 0;
        auStack_110[0x15] = 0;
        uStack_a8 = uStack_78;
        uStack_b0 = uStack_80;
        if (uVar17 != *(byte *)(lVar11 + 0x4c)) {
LAB_109ea528c:
          lVar11 = *(long *)(param_1 + 0x40);
          FUN_109ecaef8(lVar11,0x154);
          FUN_109ecb048();
          uVar4 = *(ushort *)(lVar11 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x38);
          *(ushort *)(lVar11 + 0x2c) = uVar4;
          *(ushort *)(lVar11 + 0x2c) = (*(ushort *)(param_1 + 0x3c) & 0x1ff) << 3 | uVar4 & 0xf007;
          *(undefined8 *)(lVar11 + 0x58) = uStack_98;
          *(undefined8 *)(lVar11 + 0x50) = uStack_a0;
          *(undefined8 **)(lVar11 + 0x68) = puStack_88;
          *(undefined8 *)(lVar11 + 0x60) = uStack_90;
          *(undefined8 *)(lVar11 + 0x78) = uStack_78;
          *(undefined8 *)(lVar11 + 0x70) = uStack_80;
          goto LAB_109ea52e8;
        }
        if (uVar17 != 0) {
          uVar18 = 0;
          bVar5 = false;
          do {
            bVar5 = (bool)(uVar18 != *(byte *)((long)&uStack_b0 + uVar18) | bVar5);
            uVar18 = uVar18 + 1;
          } while (uVar23 != uVar18);
          if (bVar5) goto LAB_109ea528c;
        }
      }
    }
    lVar11 = *(long *)(param_1 + 0x18);
    FUN_109eca8c0(lVar11,*(undefined8 *)(param_2 + 0x20),&UNK_10f614210);
    puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    FUN_109f6600c(puVar8,0xa0,8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
    }
    *(undefined4 *)(puVar8 + 3) = 1;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(uint *)((long)puVar8 + 0x2c) = *(uint *)(lVar11 + 0x20) & 0x1fffff;
    puVar8[6] = *(undefined8 *)(lVar11 + 0x10);
    puVar8[7] = lVar11;
    if (*(char *)(*(long *)(param_1 + 0x40) + 0x61) == '\x0e') {
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x160);
    }
    else {
      uVar12 = 0x20;
    }
    puVar21 = puVar8 + 0x10;
    FUN_109ecb048(puVar8,puVar21,1,uVar12);
    FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar8);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(undefined8 **)(param_1 + 0x58) = puVar8;
    bVar26 = *(byte *)((long)puVar6 + 0x1c);
    unaff_x24 = (ulong)bVar26;
    unaff_x23 = 0xffffffff;
    param_2 = *(long *)(param_1 + 0x40);
    FUN_109ecb0a8(param_2,0x26f);
    bVar3 = *(byte *)((long)puVar6 + 0x1c);
    *(byte *)(param_2 + 0x50) = bVar3;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 **)(param_2 + 0x98) = puVar21;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 **)(param_2 + 0xb8) = puVar6;
    if (unaff_x24 == 0) {
      uVar17 = 0xffffffff;
      if (bVar3 != 0x20) {
        uVar17 = ~(-1 << (ulong)(bVar3 & 0x1f));
      }
    }
    else {
      uVar17 = ~(-1 << (ulong)(bVar26 & 0x1f));
    }
    lVar11 = (ulong)*(uint *)(param_2 + 0x28) * 0x68;
    *(uint *)(param_2 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar11] * 4 + -4) = uVar17;
    *(undefined4 *)(param_2 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar11] * 4 + -4) = 0;
    lVar11 = *(long *)(param_1 + 0x28);
    lVar15 = *(long *)(param_1 + 0x30);
    FUN_109ecb4f0(lVar11,lVar15,param_2);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(long *)(param_1 + 0x30) = param_2;
  }
  else {
LAB_109ea4f94:
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    FUN_109f6600c(puVar6,0xa0,8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
    }
    *(undefined4 *)(puVar6 + 3) = 1;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 5) = 4;
    puVar6[10] = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)((long)puVar21 + 0x2c);
    puVar6[6] = *(undefined8 *)(*(long *)(puVar21[6] + 0x30) + uVar27 * 0x30);
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = puVar21 + 0x10;
    *(uint *)(puVar6 + 0xb) = uVar17;
    FUN_109ecb048(puVar6,puVar6 + 0x10,*(undefined1 *)((long)puVar21 + 0x9c),
                  *(undefined1 *)((long)puVar21 + 0x9d));
    lVar11 = *(long *)(param_1 + 0x28);
    lVar15 = *(long *)(param_1 + 0x30);
    FUN_109ecb4f0(lVar11,lVar15,puVar6);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(undefined8 **)(param_1 + 0x30) = puVar6;
    *(undefined8 **)(param_1 + 0x58) = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_109ea5480;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(lVar15 + 0x20);
  bVar3 = *(byte *)(plVar9[4] + 0xd);
  bVar26 = *(byte *)(lVar15 + 0x30);
  uStack_160 = uVar27;
  ppuStack_158 = unaff_x25;
  uStack_150 = unaff_x24;
  uStack_148 = unaff_x23;
  puStack_140 = puVar21;
  lStack_138 = param_2;
  puStack_130 = puVar6;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar9 + 0x40))();
  if ((*(byte *)(plVar9 + 8) >> 5 & 1) == 0) {
    plVar9 = *(long **)(lVar15 + 0x20);
    (**(code **)(*plVar9 + 0x40))();
    bVar13 = *(byte *)(plVar9 + 8) >> 6 & 1;
  }
  else {
    bVar13 = 1;
  }
  uVar17 = bVar26 & 0xf;
  *(byte *)(lVar11 + 0x38) = bVar13;
  lVar25 = *(long *)(lVar15 + 0x28);
  if ((lVar25 == 0) || (3 < *(uint *)(lVar25 + 0x18))) {
    bVar26 = 0;
    if ((lVar25 != 0) && (*(uint *)(lVar25 + 0x18) == 6)) {
      bVar26 = *(byte *)(lVar25 + 0x70);
    }
  }
  else {
    if ((-1 << (ulong)(bVar3 & 0x1f) ^ uVar17) == 0xffffffff && bVar3 != 0x20 || (bVar26 & 0xf) == 0
       ) {
      (**(code **)(**(long **)(lVar15 + 0x20) + 0x10))(*(long **)(lVar15 + 0x20),lVar11);
      lVar20 = *(long *)(lVar11 + 0x58);
      (**(code **)(**(long **)(lVar15 + 0x28) + 0x10))(*(long **)(lVar15 + 0x28),lVar11);
      lVar24 = *(long *)(lVar11 + 0x58);
      lVar25 = lVar20;
      FUN_109ea8668();
      lVar15 = lVar24;
      FUN_109ea8668();
      uVar12 = (undefined4)lVar15;
      lVar10 = *(long *)(lVar11 + 0x40);
      FUN_109ecb0a8(lVar10,0x54);
      *(undefined8 *)(lVar10 + 0x80) = 0;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      *(undefined8 *)(lVar10 + 0x90) = 0;
      *(long *)(lVar10 + 0x98) = lVar20 + 0x80;
      *(undefined8 *)(lVar10 + 0xa0) = 0;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
      *(long *)(lVar10 + 0xb8) = lVar24 + 0x80;
      lVar15 = (ulong)*(uint *)(lVar10 + 0x28) * 0x68;
      *(int *)(lVar10 + (ulong)(byte)(&UNK_110b671c8)[lVar15] * 4 + 0x50) = (int)lVar25;
      pbVar16 = &UNK_110b671c9 + lVar15;
      goto LAB_109ea584c;
    }
    bVar26 = 0;
  }
  (**(code **)(**(long **)(lVar15 + 0x20) + 0x10))(*(long **)(lVar15 + 0x20),lVar11);
  lVar24 = *(long *)(lVar11 + 0x58);
  lVar20 = lVar11;
  FUN_109ea7f04(lVar11,*(undefined8 *)(lVar15 + 0x28));
  if ((bVar26 & 1) == 0) {
    uVar14 = -1 << (ulong)(bVar3 & 0x1f);
  }
  else {
    FUN_109ea8b04(lVar11,lVar24,*(undefined8 *)(lVar25 + 0x20),lVar20);
    bVar3 = *(byte *)(lVar20 + 0x1c);
    uVar17 = 0xffffffff;
    uVar14 = -1 << (ulong)(bVar3 & 0x1f);
    if (bVar3 != 0x20) {
      uVar17 = ~uVar14;
    }
  }
  uVar14 = ~uVar14;
  uVar19 = (uint)bVar3;
  if (uVar19 == 0x20) {
    uVar14 = 0xffffffff;
  }
  if ((uVar17 != 0) && (uVar17 != uVar14)) {
    lVar15 = 0;
    uVar14 = 0;
    do {
      if ((1 << (ulong)((uint)lVar15 & 0x1f) & uVar17) == 0) {
        uVar1 = uVar14;
        uVar14 = 0;
      }
      else {
        uVar1 = uVar14 + 1;
      }
      auStack_1e0[lVar15] = uVar14;
      lVar15 = lVar15 + 1;
      uVar14 = uVar1;
    } while (lVar15 != 4);
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_188 = lVar20;
    if (uVar19 == 0) {
      bVar5 = true;
    }
    else {
      uVar27 = 0;
      uVar14 = uVar19;
      if (0xf < uVar19) {
        uVar14 = 0x10;
      }
      bVar5 = true;
      do {
        bVar5 = (bool)(uVar27 == auStack_1e0[uVar27] & bVar5);
        *(char *)((long)&uStack_180 + uVar27) = (char)auStack_1e0[uVar27];
        uVar27 = uVar27 + 1;
      } while (uVar14 != uVar27);
    }
    if ((uVar19 != *(byte *)(lVar20 + 0x1c)) || (!bVar5)) {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1b8 = lVar20;
      uStack_1c0 = 0;
      uStack_1a8 = uStack_178;
      uStack_1b0 = uStack_180;
      if (uVar19 == *(byte *)(lVar20 + 0x1c)) {
        if (uVar19 != 0) {
          uVar27 = 0;
          bVar5 = false;
          do {
            bVar5 = (bool)(uVar27 != *(byte *)((long)&uStack_1b0 + uVar27) | bVar5);
            uVar27 = uVar27 + 1;
          } while (bVar3 != uVar27);
          if (bVar5) goto LAB_109ea5758;
        }
      }
      else {
LAB_109ea5758:
        lVar15 = *(long *)(lVar11 + 0x40);
        FUN_109ecaef8(lVar15,0x154);
        lVar20 = lVar15 + 0x30;
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar15 + 0x2c) & 0xfffe | (ushort)*(byte *)(lVar11 + 0x38);
        *(ushort *)(lVar15 + 0x2c) = uVar4;
        *(ushort *)(lVar15 + 0x2c) = (*(ushort *)(lVar11 + 0x3c) & 0x1ff) << 3 | uVar4 & 0xf007;
        *(undefined8 *)(lVar15 + 0x58) = uStack_198;
        *(undefined8 *)(lVar15 + 0x50) = uStack_1a0;
        *(long *)(lVar15 + 0x68) = lStack_188;
        *(undefined8 *)(lVar15 + 0x60) = uStack_190;
        *(undefined8 *)(lVar15 + 0x78) = uStack_178;
        *(undefined8 *)(lVar15 + 0x70) = uStack_180;
        FUN_109ecb4f0(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30),lVar15);
        *(undefined8 *)(lVar11 + 0x28) = 3;
        *(long *)(lVar11 + 0x30) = lVar15;
      }
    }
  }
  lVar15 = lVar24;
  FUN_109ea8668();
  uVar12 = (undefined4)lVar15;
  uVar17 = uVar17 & (-1 << (ulong)(*(byte *)(lVar20 + 0x1c) & 0x1f) ^ 0xffffffffU);
  lVar10 = *(long *)(lVar11 + 0x40);
  FUN_109ecb0a8(lVar10,0x26f);
  bVar26 = *(byte *)(lVar20 + 0x1c);
  *(byte *)(lVar10 + 0x50) = bVar26;
  *(undefined8 *)(lVar10 + 0x80) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(long *)(lVar10 + 0x98) = lVar24 + 0x80;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(long *)(lVar10 + 0xb8) = lVar20;
  uVar14 = 0xffffffff;
  if (bVar26 != 0x20) {
    uVar14 = ~(-1 << (ulong)(bVar26 & 0x1f));
  }
  if (uVar17 == 0) {
    uVar17 = uVar14;
  }
  lVar15 = (ulong)*(uint *)(lVar10 + 0x28) * 0x68;
  *(uint *)(lVar10 + (ulong)(byte)(&UNK_110b671aa)[lVar15] * 4 + 0x50) = uVar17;
  pbVar16 = &UNK_110b671ba + lVar15;
LAB_109ea584c:
  *(undefined4 *)(lVar10 + (ulong)*pbVar16 * 4 + 0x50) = uVar12;
  lVar15 = *(long *)(lVar11 + 0x28);
  lVar25 = *(long *)(lVar11 + 0x30);
  FUN_109ecb4f0(lVar15,lVar25,lVar10);
  *(undefined8 *)(lVar11 + 0x28) = 3;
  *(long *)(lVar11 + 0x30) = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    lVar11 = *(long *)(lVar15 + 0x18);
    FUN_109eca8c0(lVar11,*(undefined8 *)(lVar25 + 0x20),&UNK_10f61421a);
    *(ulong *)(lVar11 + 0x20) = *(ulong *)(lVar11 + 0x20) | 0x200000;
    FUN_109ea7b44(lVar25,lVar11);
    *(long *)(lVar11 + 0x78) = lVar25;
    puVar21 = (undefined8 *)**(undefined8 **)(lVar15 + 0x40);
    FUN_109f6600c(puVar21,0xa0,8);
    if (puVar21 != (undefined8 *)0x0) {
      puVar21[0x11] = 0;
      puVar21[0x10] = 0;
      puVar21[0x13] = 0;
      puVar21[0x12] = 0;
      puVar21[0xd] = 0;
      puVar21[0xc] = 0;
      puVar21[0xf] = 0;
      puVar21[0xe] = 0;
      puVar21[9] = 0;
      puVar21[8] = 0;
      puVar21[0xb] = 0;
      puVar21[10] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[7] = 0;
      puVar21[6] = 0;
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
    }
    *(undefined4 *)(puVar21 + 3) = 1;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    *(undefined4 *)(puVar21 + 5) = 0;
    *(uint *)((long)puVar21 + 0x2c) = *(uint *)(lVar11 + 0x20) & 0x1fffff;
    puVar21[6] = *(undefined8 *)(lVar11 + 0x10);
    puVar21[7] = lVar11;
    if (*(char *)(*(long *)(lVar15 + 0x40) + 0x61) == '\x0e') {
      uVar12 = *(undefined4 *)(*(long *)(lVar15 + 0x40) + 0x160);
    }
    else {
      uVar12 = 0x20;
    }
    FUN_109ecb048(puVar21,puVar21 + 0x10,1,uVar12);
    FUN_109ecb4f0(*(undefined8 *)(lVar15 + 0x28),*(undefined8 *)(lVar15 + 0x30),puVar21);
    *(undefined8 *)(lVar15 + 0x28) = 3;
    *(undefined8 **)(lVar15 + 0x30) = puVar21;
    *(undefined8 **)(lVar15 + 0x58) = puVar21;
    return;
  }
  return;
}



/* Entry: 109ea5480; end: 109ea58a3;  */

void FUN_109ea5480(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  uint auStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x20);
  bVar2 = *(byte *)(plVar5[4] + 0xd);
  bVar19 = *(byte *)(param_2 + 0x30);
  (**(code **)(*plVar5 + 0x40))();
  if ((*(byte *)(plVar5 + 8) >> 5 & 1) == 0) {
    plVar5 = *(long **)(param_2 + 0x20);
    (**(code **)(*plVar5 + 0x40))();
    bVar10 = *(byte *)(plVar5 + 8) >> 6 & 1;
  }
  else {
    bVar10 = 1;
  }
  uVar13 = bVar19 & 0xf;
  *(byte *)(param_1 + 0x38) = bVar10;
  lVar18 = *(long *)(param_2 + 0x28);
  if ((lVar18 == 0) || (3 < *(uint *)(lVar18 + 0x18))) {
    bVar19 = 0;
    if ((lVar18 != 0) && (*(uint *)(lVar18 + 0x18) == 6)) {
      bVar19 = *(byte *)(lVar18 + 0x70);
    }
  }
  else {
    if ((-1 << (ulong)(bVar2 & 0x1f) ^ uVar13) == 0xffffffff && bVar2 != 0x20 || (bVar19 & 0xf) == 0
       ) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20),param_1);
      lVar16 = *(long *)(param_1 + 0x58);
      (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),param_1);
      lVar17 = *(long *)(param_1 + 0x58);
      lVar7 = lVar16;
      FUN_109ea8668();
      lVar18 = lVar17;
      FUN_109ea8668();
      uVar9 = (undefined4)lVar18;
      lVar6 = *(long *)(param_1 + 0x40);
      FUN_109ecb0a8(lVar6,0x54);
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(long *)(lVar6 + 0x98) = lVar16 + 0x80;
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      *(long *)(lVar6 + 0xb8) = lVar17 + 0x80;
      lVar18 = (ulong)*(uint *)(lVar6 + 0x28) * 0x68;
      *(int *)(lVar6 + (ulong)(byte)(&UNK_110b671c8)[lVar18] * 4 + 0x50) = (int)lVar7;
      pbVar12 = &UNK_110b671c9 + lVar18;
      goto LAB_109ea584c;
    }
    bVar19 = 0;
  }
  (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20),param_1);
  lVar16 = *(long *)(param_1 + 0x58);
  lVar7 = param_1;
  FUN_109ea7f04(param_1,*(undefined8 *)(param_2 + 0x28));
  if ((bVar19 & 1) == 0) {
    uVar11 = -1 << (ulong)(bVar2 & 0x1f);
  }
  else {
    FUN_109ea8b04(param_1,lVar16,*(undefined8 *)(lVar18 + 0x20),lVar7);
    bVar2 = *(byte *)(lVar7 + 0x1c);
    uVar13 = 0xffffffff;
    uVar11 = -1 << (ulong)(bVar2 & 0x1f);
    if (bVar2 != 0x20) {
      uVar13 = ~uVar11;
    }
  }
  uVar11 = ~uVar11;
  uVar15 = (uint)bVar2;
  if (uVar15 == 0x20) {
    uVar11 = 0xffffffff;
  }
  if ((uVar13 != 0) && (uVar13 != uVar11)) {
    lVar18 = 0;
    uVar11 = 0;
    do {
      if ((1 << (ulong)((uint)lVar18 & 0x1f) & uVar13) == 0) {
        uVar1 = uVar11;
        uVar11 = 0;
      }
      else {
        uVar1 = uVar11 + 1;
      }
      auStack_d0[lVar18] = uVar11;
      lVar18 = lVar18 + 1;
      uVar11 = uVar1;
    } while (lVar18 != 4);
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = lVar7;
    if (uVar15 == 0) {
      bVar3 = true;
    }
    else {
      uVar14 = 0;
      uVar11 = uVar15;
      if (0xf < uVar15) {
        uVar11 = 0x10;
      }
      bVar3 = true;
      do {
        bVar3 = (bool)(uVar14 == auStack_d0[uVar14] & bVar3);
        *(char *)((long)&uStack_70 + uVar14) = (char)auStack_d0[uVar14];
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
    if ((uVar15 != *(byte *)(lVar7 + 0x1c)) || (!bVar3)) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = lVar7;
      uStack_b0 = 0;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      if (uVar15 == *(byte *)(lVar7 + 0x1c)) {
        if (uVar15 != 0) {
          uVar14 = 0;
          bVar3 = false;
          do {
            bVar3 = (bool)(uVar14 != *(byte *)((long)&uStack_a0 + uVar14) | bVar3);
            uVar14 = uVar14 + 1;
          } while (bVar2 != uVar14);
          if (bVar3) goto LAB_109ea5758;
        }
      }
      else {
LAB_109ea5758:
        lVar18 = *(long *)(param_1 + 0x40);
        FUN_109ecaef8(lVar18,0x154);
        lVar7 = lVar18 + 0x30;
        FUN_109ecb048();
        uVar4 = *(ushort *)(lVar18 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x38);
        *(ushort *)(lVar18 + 0x2c) = uVar4;
        *(ushort *)(lVar18 + 0x2c) = (*(ushort *)(param_1 + 0x3c) & 0x1ff) << 3 | uVar4 & 0xf007;
        *(undefined8 *)(lVar18 + 0x58) = uStack_88;
        *(undefined8 *)(lVar18 + 0x50) = uStack_90;
        *(long *)(lVar18 + 0x68) = lStack_78;
        *(undefined8 *)(lVar18 + 0x60) = uStack_80;
        *(undefined8 *)(lVar18 + 0x78) = uStack_68;
        *(undefined8 *)(lVar18 + 0x70) = uStack_70;
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar18);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(long *)(param_1 + 0x30) = lVar18;
      }
    }
  }
  lVar18 = lVar16;
  FUN_109ea8668();
  uVar9 = (undefined4)lVar18;
  uVar13 = uVar13 & (-1 << (ulong)(*(byte *)(lVar7 + 0x1c) & 0x1f) ^ 0xffffffffU);
  lVar6 = *(long *)(param_1 + 0x40);
  FUN_109ecb0a8(lVar6,0x26f);
  bVar19 = *(byte *)(lVar7 + 0x1c);
  *(byte *)(lVar6 + 0x50) = bVar19;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(long *)(lVar6 + 0x98) = lVar16 + 0x80;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(long *)(lVar6 + 0xb8) = lVar7;
  uVar11 = 0xffffffff;
  if (bVar19 != 0x20) {
    uVar11 = ~(-1 << (ulong)(bVar19 & 0x1f));
  }
  if (uVar13 == 0) {
    uVar13 = uVar11;
  }
  lVar18 = (ulong)*(uint *)(lVar6 + 0x28) * 0x68;
  *(uint *)(lVar6 + (ulong)(byte)(&UNK_110b671aa)[lVar18] * 4 + 0x50) = uVar13;
  pbVar12 = &UNK_110b671ba + lVar18;
LAB_109ea584c:
  *(undefined4 *)(lVar6 + (ulong)*pbVar12 * 4 + 0x50) = uVar9;
  lVar18 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  FUN_109ecb4f0(lVar18,lVar7,lVar6);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar6 = *(long *)(lVar18 + 0x18);
    FUN_109eca8c0(lVar6,*(undefined8 *)(lVar7 + 0x20),&UNK_10f61421a);
    *(ulong *)(lVar6 + 0x20) = *(ulong *)(lVar6 + 0x20) | 0x200000;
    FUN_109ea7b44(lVar7,lVar6);
    *(long *)(lVar6 + 0x78) = lVar7;
    puVar8 = (undefined8 *)**(undefined8 **)(lVar18 + 0x40);
    FUN_109f6600c(puVar8,0xa0,8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
    }
    *(undefined4 *)(puVar8 + 3) = 1;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *(uint *)((long)puVar8 + 0x2c) = *(uint *)(lVar6 + 0x20) & 0x1fffff;
    puVar8[6] = *(undefined8 *)(lVar6 + 0x10);
    puVar8[7] = lVar6;
    if (*(char *)(*(long *)(lVar18 + 0x40) + 0x61) == '\x0e') {
      uVar9 = *(undefined4 *)(*(long *)(lVar18 + 0x40) + 0x160);
    }
    else {
      uVar9 = 0x20;
    }
    FUN_109ecb048(puVar8,puVar8 + 0x10,1,uVar9);
    FUN_109ecb4f0(*(undefined8 *)(lVar18 + 0x28),*(undefined8 *)(lVar18 + 0x30),puVar8);
    *(undefined8 *)(lVar18 + 0x28) = 3;
    *(undefined8 **)(lVar18 + 0x30) = puVar8;
    *(undefined8 **)(lVar18 + 0x58) = puVar8;
    return;
  }
  return;
}



/* Entry: 109ea58a4; end: 109ea599f;  */

void FUN_109ea58a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_109eca8c0(lVar1,*(undefined8 *)(param_2 + 0x20),&UNK_10f61421a);
  *(ulong *)(lVar1 + 0x20) = *(ulong *)(lVar1 + 0x20) | 0x200000;
  FUN_109ea7b44(param_2,lVar1);
  *(long *)(lVar1 + 0x78) = param_2;
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
  FUN_109f6600c(puVar2,0xa0,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(uint *)((long)puVar2 + 0x2c) = *(uint *)(lVar1 + 0x20) & 0x1fffff;
  puVar2[6] = *(undefined8 *)(lVar1 + 0x10);
  puVar2[7] = lVar1;
  if (*(char *)(*(long *)(param_1 + 0x40) + 0x61) == '\x0e') {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x160);
  }
  else {
    uVar3 = 0x20;
  }
  FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar3);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar2);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  return;
}



/* Entry: 109ea59a0; end: 109ea739f;  */

void FUN_109ea59a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *puStack_a8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_2 + 0x28);
  if (*(int *)(lVar17 + 0x4c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109ea5a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10e06b5c2 + (ulong)(*(int *)(lVar17 + 0x4c) - 3) * 2) * 4 +
              0x109ea5a24))();
    return;
  }
  lVar20 = *(long *)(param_1 + 0x78);
  lVar6 = lVar17;
  (**(code **)(lVar20 + 8))(lVar17);
  FUN_109f64fdc(lVar20,lVar6,lVar17);
  lVar17 = *(long *)(param_1 + 0x10);
  func_0x000109ecb114(lVar17,*(undefined8 *)(lVar20 + 0x10));
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar23 = 0;
    puStack_a8 = (undefined8 *)0x0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    FUN_109eca8c0(lVar6,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20),&UNK_10f614225);
    puStack_a8 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
    FUN_109f6600c(puStack_a8,0xa0,8);
    if (puStack_a8 != (undefined8 *)0x0) {
      puStack_a8[0x11] = 0;
      puStack_a8[0x10] = 0;
      puStack_a8[0x13] = 0;
      puStack_a8[0x12] = 0;
      puStack_a8[0xd] = 0;
      puStack_a8[0xc] = 0;
      puStack_a8[0xf] = 0;
      puStack_a8[0xe] = 0;
      puStack_a8[9] = 0;
      puStack_a8[8] = 0;
      puStack_a8[0xb] = 0;
      puStack_a8[10] = 0;
      puStack_a8[5] = 0;
      puStack_a8[4] = 0;
      puStack_a8[7] = 0;
      puStack_a8[6] = 0;
      puStack_a8[1] = 0;
      *puStack_a8 = 0;
      puStack_a8[3] = 0;
      puStack_a8[2] = 0;
    }
    *(undefined4 *)(puStack_a8 + 3) = 1;
    puStack_a8[1] = 0;
    puStack_a8[2] = 0;
    *puStack_a8 = 0;
    *(undefined4 *)(puStack_a8 + 5) = 0;
    *(uint *)((long)puStack_a8 + 0x2c) = *(uint *)(lVar6 + 0x20) & 0x1fffff;
    puStack_a8[6] = *(undefined8 *)(lVar6 + 0x10);
    puStack_a8[7] = lVar6;
    if (*(char *)(*(long *)(param_1 + 0x40) + 0x61) == '\x0e') {
      uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x160);
    }
    else {
      uVar8 = 0x20;
    }
    uVar23 = 1;
    FUN_109ecb048(puStack_a8,puStack_a8 + 0x10,1,uVar8);
    FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puStack_a8);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(undefined8 **)(param_1 + 0x30) = puStack_a8;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined8 *)(lVar17 + 0x40) = 0;
    *(undefined8 *)(lVar17 + 0x48) = 0;
    *(undefined8 **)(lVar17 + 0x50) = puStack_a8 + 0x10;
  }
  plVar18 = *(long **)(*(long *)(param_2 + 0x28) + 0x28);
  plVar12 = (long *)**(long **)(param_2 + 0x30);
  plVar10 = (long *)*plVar18;
  if (plVar10 != (long *)0x0 && plVar12 != (long *)0x0) {
    plVar15 = *(long **)(param_2 + 0x30);
    do {
      plVar16 = plVar12;
      plVar14 = plVar10;
      plVar15 = plVar15 + -1;
      lVar6 = plVar18[3];
      if (((*(uint *)(plVar18 + 7) & 0x7800) == 0x3000) &&
         (lVar20 = lVar6, func_0x000109ec6694(), (int)lVar20 != 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15,param_1);
        puVar21 = *(undefined8 **)(param_1 + 0x58);
      }
      else {
        lVar20 = *(long *)(param_1 + 0x18);
        FUN_109eca8c0(lVar20,lVar6,&DAT_10f3c8c20);
        *(ulong *)(lVar20 + 0x20) =
             *(ulong *)(lVar20 + 0x20) & 0xffffffffc0000000 |
             *(ulong *)(lVar20 + 0x20) & 0xfffffff |
             ((ulong)(*(ushort *)((long)plVar18 + 0x3c) >> 3) & 3) << 0x1c;
        puVar21 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
        FUN_109f6600c(puVar21,0xa0,8);
        if (puVar21 != (undefined8 *)0x0) {
          puVar21[0x11] = 0;
          puVar21[0x10] = 0;
          puVar21[0x13] = 0;
          puVar21[0x12] = 0;
          puVar21[0xd] = 0;
          puVar21[0xc] = 0;
          puVar21[0xf] = 0;
          puVar21[0xe] = 0;
          puVar21[9] = 0;
          puVar21[8] = 0;
          puVar21[0xb] = 0;
          puVar21[10] = 0;
          puVar21[5] = 0;
          puVar21[4] = 0;
          puVar21[7] = 0;
          puVar21[6] = 0;
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar21[3] = 0;
          puVar21[2] = 0;
        }
        *(undefined4 *)(puVar21 + 3) = 1;
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 0;
        *(undefined4 *)(puVar21 + 5) = 0;
        *(uint *)((long)puVar21 + 0x2c) = *(uint *)(lVar20 + 0x20) & 0x1fffff;
        puVar21[6] = *(undefined8 *)(lVar20 + 0x10);
        puVar21[7] = lVar20;
        if (*(char *)(*(long *)(param_1 + 0x40) + 0x61) == '\x0e') {
          uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x160);
        }
        else {
          uVar8 = 0x20;
        }
        puVar1 = puVar21 + 0x10;
        FUN_109ecb048(puVar21,puVar1,1,uVar8);
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar21);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(undefined8 **)(param_1 + 0x30) = puVar21;
        uVar13 = *(uint *)(plVar18 + 7) >> 0xb & 0xf;
        if ((uVar13 == 8) || (uVar13 == 6)) {
          lVar6 = *(long *)(lVar20 + 0x10);
          if (*(byte *)(lVar6 + 0xd) < 2) {
            if ((*(byte *)(lVar6 + 0xd) != 1) || ((*(byte *)(lVar6 + 4) & 0xf0) != 0))
            goto LAB_109ea5d38;
LAB_109ea5da4:
            lVar6 = param_1;
            FUN_109ea7f04(param_1,plVar15);
            bVar3 = *(byte *)(lVar6 + 0x1c);
            lVar20 = *(long *)(param_1 + 0x40);
            func_0x000109ecb0a8(lVar20,0x26f);
            bVar4 = *(byte *)(lVar6 + 0x1c);
            *(byte *)(lVar20 + 0x50) = bVar4;
            *(undefined8 *)(lVar20 + 0x80) = 0;
            *(undefined8 *)(lVar20 + 0x88) = 0;
            *(undefined8 *)(lVar20 + 0x90) = 0;
            *(undefined8 **)(lVar20 + 0x98) = puVar1;
            *(undefined8 *)(lVar20 + 0xa0) = 0;
            *(undefined8 *)(lVar20 + 0xa8) = 0;
            *(undefined8 *)(lVar20 + 0xb0) = 0;
            *(long *)(lVar20 + 0xb8) = lVar6;
            if (bVar3 == 0) {
              uVar13 = 0xffffffff;
              if (bVar4 != 0x20) {
                uVar13 = ~(-1 << (ulong)(bVar4 & 0x1f));
              }
            }
            else {
              uVar13 = ~(-1 << (ulong)(bVar3 & 0x1f));
            }
            lVar6 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
            *(uint *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar6] * 4 + -4) = uVar13;
            lVar6 = lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar6] * 4;
          }
          else {
            if ((*(char *)(lVar6 + 0xe) == '\x01') && ((*(uint *)(lVar6 + 4) & 0xfc) < 0xc))
            goto LAB_109ea5da4;
LAB_109ea5d38:
            (**(code **)(*plVar15 + 0x10))(plVar15,param_1);
            lVar6 = *(long *)(param_1 + 0x58);
            lVar20 = *(long *)(param_1 + 0x40);
            func_0x000109ecb0a8(lVar20,0x54);
            *(undefined8 *)(lVar20 + 0x80) = 0;
            *(undefined8 *)(lVar20 + 0x88) = 0;
            *(undefined8 *)(lVar20 + 0x90) = 0;
            *(undefined8 **)(lVar20 + 0x98) = puVar1;
            *(undefined8 *)(lVar20 + 0xa0) = 0;
            *(undefined8 *)(lVar20 + 0xa8) = 0;
            *(undefined8 *)(lVar20 + 0xb0) = 0;
            *(long *)(lVar20 + 0xb8) = lVar6 + 0x80;
            lVar6 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
            *(undefined4 *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671c8)[lVar6] * 4 + -4) = 0;
            lVar6 = lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671c9)[lVar6] * 4;
          }
          *(undefined4 *)(lVar6 + -4) = 0;
          FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar20);
          *(undefined8 *)(param_1 + 0x28) = 3;
          *(long *)(param_1 + 0x30) = lVar20;
        }
      }
      puVar1 = (undefined8 *)(lVar17 + 0x38 + uVar23 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = puVar21 + 0x10;
      plVar10 = (long *)*plVar14;
      if (plVar10 == (long *)0x0) break;
      uVar23 = (ulong)((int)uVar23 + 1);
      plVar12 = (long *)*plVar16;
      plVar15 = plVar16;
      plVar18 = plVar14;
    } while (plVar12 != (long *)0x0);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),lVar6,lVar17);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar17;
  plVar10 = *(long **)(param_2 + 0x20);
  plVar12 = *(long **)(*(long *)(param_2 + 0x28) + 0x28);
  plVar18 = (long *)**(long **)(param_2 + 0x30);
  plVar15 = (long *)*plVar12;
  if (plVar15 != (long *)0x0 && plVar18 != (long *)0x0) {
    uVar23 = (ulong)(plVar10 != (long *)0x0);
    plVar10 = *(long **)(param_2 + 0x30);
    do {
      if ((*(uint *)(plVar12 + 7) >> 0xb & 0xf) - 7 < 2) {
        lVar6 = plVar12[3];
        if (*(byte *)(lVar6 + 0xd) < 2) {
          if (*(byte *)(lVar6 + 0xd) != 1) goto LAB_109ea5f28;
          bVar5 = (*(byte *)(lVar6 + 4) & 0xf0) == 0;
        }
        else if (*(char *)(lVar6 + 0xe) == '\x01') {
          bVar5 = (*(uint *)(lVar6 + 4) & 0xfc) < 0xc;
        }
        else {
LAB_109ea5f28:
          bVar5 = false;
        }
        (**(code **)(plVar10[-1] + 0x10))(plVar10 + -1,param_1);
        lVar19 = *(long *)(param_1 + 0x58);
        lVar20 = **(long **)(lVar17 + 0x50 + uVar23 * 0x20);
        lVar6 = lVar20;
        if (*(int *)(lVar20 + 0x18) != 1) {
          lVar6 = 0;
        }
        if (bVar5) {
          uVar2 = *(undefined1 *)(*(long *)(lVar20 + 0x30) + 0xd);
          lVar7 = *(long *)(param_1 + 0x40);
          func_0x000109ecb0a8(lVar7,0x112);
          *(undefined1 *)(lVar7 + 0x50) = uVar2;
          FUN_109ecb048();
          *(undefined8 *)(lVar7 + 0x80) = 0;
          *(undefined8 *)(lVar7 + 0x88) = 0;
          *(undefined8 *)(lVar7 + 0x90) = 0;
          *(long *)(lVar7 + 0x98) = lVar6 + 0x80;
          *(undefined4 *)
           (lVar7 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar7 + 0x28) * 0x68] * 4 + 0x50)
               = 0;
          FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar7);
          *(undefined8 *)(param_1 + 0x28) = 3;
          *(long *)(param_1 + 0x30) = lVar7;
          bVar3 = *(byte *)(lVar7 + 0x4c);
          lVar20 = *(long *)(param_1 + 0x40);
          func_0x000109ecb0a8(lVar20,0x26f);
          bVar4 = *(byte *)(lVar7 + 0x4c);
          *(byte *)(lVar20 + 0x50) = bVar4;
          *(undefined8 *)(lVar20 + 0x80) = 0;
          *(undefined8 *)(lVar20 + 0x88) = 0;
          *(undefined8 *)(lVar20 + 0x90) = 0;
          *(long *)(lVar20 + 0x98) = lVar19 + 0x80;
          *(undefined8 *)(lVar20 + 0xa0) = 0;
          *(undefined8 *)(lVar20 + 0xa8) = 0;
          *(undefined8 *)(lVar20 + 0xb0) = 0;
          *(long *)(lVar20 + 0xb8) = lVar7 + 0x30;
          if (bVar3 == 0) {
            uVar13 = 0xffffffff;
            if (bVar4 != 0x20) {
              uVar13 = ~(-1 << (ulong)(bVar4 & 0x1f));
            }
          }
          else {
            uVar13 = ~(-1 << (ulong)(bVar3 & 0x1f));
          }
          lVar6 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
          *(uint *)(lVar20 + (ulong)(byte)(&UNK_110b671aa)[lVar6] * 4 + 0x50) = uVar13;
          pbVar11 = &UNK_110b671ba + lVar6;
        }
        else {
          lVar20 = *(long *)(param_1 + 0x40);
          func_0x000109ecb0a8(lVar20,0x54);
          *(undefined8 *)(lVar20 + 0x80) = 0;
          *(undefined8 *)(lVar20 + 0x88) = 0;
          *(undefined8 *)(lVar20 + 0x90) = 0;
          *(long *)(lVar20 + 0x98) = lVar19 + 0x80;
          *(undefined8 *)(lVar20 + 0xa0) = 0;
          *(undefined8 *)(lVar20 + 0xa8) = 0;
          *(undefined8 *)(lVar20 + 0xb0) = 0;
          *(long *)(lVar20 + 0xb8) = lVar6 + 0x80;
          lVar6 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
          *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671c8)[lVar6] * 4 + 0x50) = 0;
          pbVar11 = &UNK_110b671c9 + lVar6;
        }
        *(undefined4 *)(lVar20 + (ulong)*pbVar11 * 4 + 0x50) = 0;
        lVar6 = *(long *)(param_1 + 0x30);
        FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),lVar6,lVar20);
        *(undefined8 *)(param_1 + 0x28) = 3;
        *(long *)(param_1 + 0x30) = lVar20;
      }
      uVar23 = (ulong)((int)uVar23 + 1);
      plVar14 = (long *)*plVar18;
      plVar16 = (long *)*plVar15;
      plVar10 = plVar18;
      plVar12 = plVar15;
      plVar18 = plVar14;
      plVar15 = plVar16;
    } while (plVar16 != (long *)0x0 && plVar14 != (long *)0x0);
    plVar10 = *(long **)(param_2 + 0x20);
  }
  lVar17 = 0;
  if (plVar10 != (long *)0x0) {
    lVar17 = plVar10[4];
    if (*(byte *)(lVar17 + 0xd) < 2) {
      if (*(byte *)(lVar17 + 0xd) != 1) goto LAB_109ea6138;
      bVar5 = (*(byte *)(lVar17 + 4) & 0xf0) == 0;
    }
    else if (*(char *)(lVar17 + 0xe) == '\x01') {
      bVar5 = (*(uint *)(lVar17 + 4) & 0xfc) < 0xc;
    }
    else {
LAB_109ea6138:
      bVar5 = false;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,param_1);
    lVar17 = *(long *)(param_1 + 0x58);
    if (bVar5) {
      uVar2 = *(undefined1 *)(puStack_a8[6] + 0xd);
      lVar6 = *(long *)(param_1 + 0x40);
      func_0x000109ecb0a8(lVar6,0x112);
      *(undefined1 *)(lVar6 + 0x50) = uVar2;
      FUN_109ecb048();
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 **)(lVar6 + 0x98) = puStack_a8 + 0x10;
      *(undefined4 *)
       (lVar6 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar6 + 0x28) * 0x68] * 4 + 0x50) = 0
      ;
      FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar6);
      *(undefined8 *)(param_1 + 0x28) = 3;
      *(long *)(param_1 + 0x30) = lVar6;
      bVar3 = *(byte *)(lVar6 + 0x4c);
      lVar20 = *(long *)(param_1 + 0x40);
      func_0x000109ecb0a8(lVar20,0x26f);
      bVar4 = *(byte *)(lVar6 + 0x4c);
      *(byte *)(lVar20 + 0x50) = bVar4;
      *(undefined8 *)(lVar20 + 0x80) = 0;
      *(undefined8 *)(lVar20 + 0x88) = 0;
      *(undefined8 *)(lVar20 + 0x90) = 0;
      *(long *)(lVar20 + 0x98) = lVar17 + 0x80;
      *(undefined8 *)(lVar20 + 0xa0) = 0;
      *(undefined8 *)(lVar20 + 0xa8) = 0;
      *(undefined8 *)(lVar20 + 0xb0) = 0;
      *(long *)(lVar20 + 0xb8) = lVar6 + 0x30;
      if (bVar3 == 0) {
        uVar13 = 0xffffffff;
        if (bVar4 != 0x20) {
          uVar13 = ~(-1 << (ulong)(bVar4 & 0x1f));
        }
      }
      else {
        uVar13 = ~(-1 << (ulong)(bVar3 & 0x1f));
      }
      lVar17 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
      *(uint *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar17] * 4 + -4) = uVar13;
      *(undefined4 *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar17] * 4 + -4) = 0;
      lVar17 = *(long *)(param_1 + 0x28);
      lVar6 = *(long *)(param_1 + 0x30);
      FUN_109ecb4f0(lVar17,lVar6,lVar20);
      *(undefined8 *)(param_1 + 0x28) = 3;
      *(long *)(param_1 + 0x30) = lVar20;
    }
    else {
      lVar20 = *(long *)(param_1 + 0x40);
      func_0x000109ecb0a8(lVar20,0x54);
      *(undefined8 *)(lVar20 + 0x80) = 0;
      *(undefined8 *)(lVar20 + 0x88) = 0;
      *(undefined8 *)(lVar20 + 0x90) = 0;
      *(long *)(lVar20 + 0x98) = lVar17 + 0x80;
      *(undefined8 *)(lVar20 + 0xa0) = 0;
      *(undefined8 *)(lVar20 + 0xa8) = 0;
      *(undefined8 *)(lVar20 + 0xb0) = 0;
      *(undefined8 **)(lVar20 + 0xb8) = puStack_a8 + 0x10;
      lVar17 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
      *(undefined4 *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671c8)[lVar17] * 4 + -4) = 0;
      *(undefined4 *)(lVar20 + 0x54 + (ulong)(byte)(&UNK_110b671c9)[lVar17] * 4 + -4) = 0;
      lVar17 = *(long *)(param_1 + 0x28);
      lVar6 = *(long *)(param_1 + 0x30);
      FUN_109ecb4f0(lVar17,lVar6,lVar20);
      *(undefined8 *)(param_1 + 0x28) = 3;
      *(long *)(param_1 + 0x30) = lVar20;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar6 + 0x20) == 0) goto LAB_109ea7608;
  lVar9 = *(long *)(lVar17 + 0x40);
  uVar2 = **(undefined1 **)(*(long *)(*(long *)(lVar17 + 0x48) + 0x20) + 0x28);
  func_0x000109ecb0a8(lVar9,0x166);
  *(undefined1 *)(lVar9 + 0x50) = uVar2;
  FUN_109ecb048();
  *(undefined4 *)
   (lVar9 + (ulong)(byte)(&UNK_110b671b6)[(ulong)*(uint *)(lVar9 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30),lVar9);
  *(undefined8 *)(lVar17 + 0x28) = 3;
  *(long *)(lVar17 + 0x30) = lVar9;
  uVar22 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x20);
  puVar21 = (undefined8 *)**(undefined8 **)(lVar17 + 0x40);
  FUN_109f6600c(puVar21,0xa0,8);
  if (puVar21 != (undefined8 *)0x0) {
    puVar21[0x11] = 0;
    puVar21[0x10] = 0;
    puVar21[0x13] = 0;
    puVar21[0x12] = 0;
    puVar21[0xd] = 0;
    puVar21[0xc] = 0;
    puVar21[0xf] = 0;
    puVar21[0xe] = 0;
    puVar21[9] = 0;
    puVar21[8] = 0;
    puVar21[0xb] = 0;
    puVar21[10] = 0;
    puVar21[5] = 0;
    puVar21[4] = 0;
    puVar21[7] = 0;
    puVar21[6] = 0;
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
  }
  *(undefined4 *)(puVar21 + 3) = 1;
  *puVar21 = 0;
  puVar21[2] = 0;
  puVar21[1] = 0;
  puVar21[5] = 0x4000000000005;
  puVar21[6] = uVar22;
  puVar21[7] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[10] = lVar9 + 0x30;
  puVar21[0xb] = 0;
  *(undefined4 *)(puVar21 + 0xc) = 0;
  puVar1 = puVar21 + 0x10;
  FUN_109ecb048(puVar21,puVar1,*(undefined1 *)(lVar9 + 0x4c),*(undefined1 *)(lVar9 + 0x4d));
  FUN_109ecb4f0(*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30),puVar21);
  *(undefined8 *)(lVar17 + 0x28) = 3;
  *(undefined8 **)(lVar17 + 0x30) = puVar21;
  plVar10 = *(long **)(lVar6 + 0x20);
  lVar9 = plVar10[4];
  if (*(byte *)(lVar9 + 0xd) < 2) {
    if ((*(byte *)(lVar9 + 0xd) != 1) || ((*(byte *)(lVar9 + 4) & 0xf0) != 0)) goto LAB_109ea7518;
LAB_109ea7574:
    lVar9 = lVar17;
    FUN_109ea7f04();
    bVar3 = *(byte *)(lVar9 + 0x1c);
    lVar20 = *(long *)(lVar17 + 0x40);
    func_0x000109ecb0a8(lVar20,0x26f);
    bVar4 = *(byte *)(lVar9 + 0x1c);
    *(byte *)(lVar20 + 0x50) = bVar4;
    *(undefined8 *)(lVar20 + 0x80) = 0;
    *(undefined8 *)(lVar20 + 0x88) = 0;
    *(undefined8 *)(lVar20 + 0x90) = 0;
    *(undefined8 **)(lVar20 + 0x98) = puVar1;
    *(undefined8 *)(lVar20 + 0xa0) = 0;
    *(undefined8 *)(lVar20 + 0xa8) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(long *)(lVar20 + 0xb8) = lVar9;
    if (bVar3 == 0) {
      uVar13 = 0xffffffff;
      if (bVar4 != 0x20) {
        uVar13 = ~(-1 << (ulong)(bVar4 & 0x1f));
      }
    }
    else {
      uVar13 = ~(-1 << (ulong)(bVar3 & 0x1f));
    }
    lVar9 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
    *(uint *)(lVar20 + (ulong)(byte)(&UNK_110b671aa)[lVar9] * 4 + 0x50) = uVar13;
    pbVar11 = &UNK_110b671ba + lVar9;
  }
  else {
    if ((*(char *)(lVar9 + 0xe) == '\x01') && ((*(uint *)(lVar9 + 4) & 0xfc) < 0xc))
    goto LAB_109ea7574;
LAB_109ea7518:
    (**(code **)(*plVar10 + 0x10))(plVar10,lVar17);
    lVar9 = *(long *)(lVar17 + 0x58);
    lVar20 = *(long *)(lVar17 + 0x40);
    func_0x000109ecb0a8(lVar20,0x54);
    *(undefined8 *)(lVar20 + 0x80) = 0;
    *(undefined8 *)(lVar20 + 0x88) = 0;
    *(undefined8 *)(lVar20 + 0x90) = 0;
    *(undefined8 **)(lVar20 + 0x98) = puVar1;
    *(undefined8 *)(lVar20 + 0xa0) = 0;
    *(undefined8 *)(lVar20 + 0xa8) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(long *)(lVar20 + 0xb8) = lVar9 + 0x80;
    lVar9 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
    *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671c8)[lVar9] * 4 + 0x50) = 0;
    pbVar11 = &UNK_110b671c9 + lVar9;
  }
  *(undefined4 *)(lVar20 + (ulong)*pbVar11 * 4 + 0x50) = 0;
  FUN_109ecb4f0(*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30),lVar20);
  *(undefined8 *)(lVar17 + 0x28) = 3;
  *(long *)(lVar17 + 0x30) = lVar20;
LAB_109ea7608:
  puVar21 = (undefined8 *)**(undefined8 **)(lVar17 + 0x10);
  FUN_109f6600c(puVar21,0x60,8);
  *(undefined4 *)(puVar21 + 3) = 6;
  puVar21[1] = 0;
  puVar21[2] = 0;
  *puVar21 = 0;
  *(undefined4 *)(puVar21 + 5) = 0;
  puVar21[10] = 0;
  puVar21[0xb] = 0;
  puVar21[9] = 0;
  FUN_109ecb4f0(*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30),puVar21);
  *(undefined8 *)(lVar17 + 0x28) = 3;
  *(undefined8 **)(lVar17 + 0x30) = puVar21;
  while( true ) {
    plVar10 = *(long **)(lVar6 + 8);
    lVar9 = *plVar10;
    if (lVar9 == 0) break;
    plVar12 = (long *)plVar10[1];
    *(long **)(lVar9 + 8) = plVar12;
    *plVar12 = lVar9;
    *plVar10 = 0;
    plVar10[1] = 0;
  }
  return;
}



/* Entry: 109ea73a0; end: 109ea7687;  */

void FUN_109ea73a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if (*(long *)(param_2 + 0x20) == 0) goto LAB_109ea7608;
  lVar8 = *(long *)(param_1 + 0x40);
  uVar2 = **(undefined1 **)(*(long *)(*(long *)(param_1 + 0x48) + 0x20) + 0x28);
  FUN_109ecb0a8(lVar8,0x166);
  *(undefined1 *)(lVar8 + 0x50) = uVar2;
  FUN_109ecb048();
  *(undefined4 *)
   (lVar8 + (ulong)(byte)(&UNK_110b671b6)[(ulong)*(uint *)(lVar8 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar8);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar8;
  uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
  FUN_109f6600c(puVar5,0xa0,8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
  }
  *(undefined4 *)(puVar5 + 3) = 1;
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[5] = 0x4000000000005;
  puVar5[6] = uVar12;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = lVar8 + 0x30;
  puVar5[0xb] = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  puVar1 = puVar5 + 0x10;
  FUN_109ecb048(puVar5,puVar1,*(undefined1 *)(lVar8 + 0x4c),*(undefined1 *)(lVar8 + 0x4d));
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar5);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  plVar7 = *(long **)(param_2 + 0x20);
  lVar8 = plVar7[4];
  if (*(byte *)(lVar8 + 0xd) < 2) {
    if ((*(byte *)(lVar8 + 0xd) == 1) && ((*(byte *)(lVar8 + 4) & 0xf0) == 0)) goto LAB_109ea7574;
LAB_109ea7518:
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
    lVar8 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x40);
    FUN_109ecb0a8(lVar6,0x54);
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 **)(lVar6 + 0x98) = puVar1;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    *(undefined8 *)(lVar6 + 0xa8) = 0;
    *(undefined8 *)(lVar6 + 0xb0) = 0;
    *(long *)(lVar6 + 0xb8) = lVar8 + 0x80;
    lVar8 = (ulong)*(uint *)(lVar6 + 0x28) * 0x68;
    *(undefined4 *)(lVar6 + (ulong)(byte)(&UNK_110b671c8)[lVar8] * 4 + 0x50) = 0;
    pbVar9 = &UNK_110b671c9 + lVar8;
  }
  else {
    if ((*(char *)(lVar8 + 0xe) != '\x01') || (0xb < (*(uint *)(lVar8 + 4) & 0xfc)))
    goto LAB_109ea7518;
LAB_109ea7574:
    lVar8 = param_1;
    FUN_109ea7f04();
    bVar3 = *(byte *)(lVar8 + 0x1c);
    lVar6 = *(long *)(param_1 + 0x40);
    FUN_109ecb0a8(lVar6,0x26f);
    bVar4 = *(byte *)(lVar8 + 0x1c);
    *(byte *)(lVar6 + 0x50) = bVar4;
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 **)(lVar6 + 0x98) = puVar1;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    *(undefined8 *)(lVar6 + 0xa8) = 0;
    *(undefined8 *)(lVar6 + 0xb0) = 0;
    *(long *)(lVar6 + 0xb8) = lVar8;
    if (bVar3 == 0) {
      uVar11 = 0xffffffff;
      if (bVar4 != 0x20) {
        uVar11 = ~(-1 << (ulong)(bVar4 & 0x1f));
      }
    }
    else {
      uVar11 = ~(-1 << (ulong)(bVar3 & 0x1f));
    }
    lVar8 = (ulong)*(uint *)(lVar6 + 0x28) * 0x68;
    *(uint *)(lVar6 + (ulong)(byte)(&UNK_110b671aa)[lVar8] * 4 + 0x50) = uVar11;
    pbVar9 = &UNK_110b671ba + lVar8;
  }
  *(undefined4 *)(lVar6 + (ulong)*pbVar9 * 4 + 0x50) = 0;
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar6);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar6;
LAB_109ea7608:
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  FUN_109f6600c(puVar5,0x60,8);
  *(undefined4 *)(puVar5 + 3) = 6;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[9] = 0;
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar5);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  while( true ) {
    plVar7 = *(long **)(param_2 + 8);
    lVar8 = *plVar7;
    if (lVar8 == 0) break;
    plVar10 = (long *)plVar7[1];
    *(long **)(lVar8 + 8) = plVar10;
    *plVar10 = lVar8;
    *plVar7 = 0;
    plVar7[1] = 0;
  }
  return;
}



/* Entry: 109ea7688; end: 109ea7727;  */

void FUN_109ea7688(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    uVar3 = 0x60;
    if (*(char *)(*(long *)(lVar2 + 0x28) + 0xc2) == '\0') {
      uVar3 = 0x294;
    }
    FUN_109ecb0a8(lVar2,uVar3);
  }
  else {
    lVar1 = param_1;
    FUN_109ea7f04();
    lVar2 = *(long *)(param_1 + 0x40);
    uVar3 = 0x61;
    if (*(char *)(*(long *)(lVar2 + 0x28) + 0xc2) == '\0') {
      uVar3 = 0x295;
    }
    FUN_109ecb0a8(lVar2,uVar3);
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(long *)(lVar2 + 0x98) = lVar1;
  }
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar2);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}



/* Entry: 109ea7728; end: 109ea7767;  */

void FUN_109ea7728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_109ecb0a8(uVar1,0x60);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),uVar1);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 109ea7768; end: 109ea787b;  */

void FUN_109ea7768(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar1 = param_1;
  FUN_109ea7f04(param_1,*(undefined8 *)(param_2 + 0x20));
  FUN_109ece6c4(param_1 + 0x28,lVar1);
  for (plVar4 = *(long **)(param_2 + 0x28); *plVar4 != 0; plVar4 = (long *)*plVar4) {
    (**(code **)(plVar4[-1] + 0x10))(plVar4 + -1,param_1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if ((*(ulong *)(param_1 + 0x28) & 0xfffffffe) == 2) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x18) + 0x68);
  if (*(int *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (long *)(lVar1 + 8);
    lVar1 = 0;
    if (*(long *)(*plVar4 + 8) != 0) {
      lVar1 = *plVar4;
    }
    uVar3 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(long *)(param_1 + 0x30) = lVar1;
  plVar4 = *(long **)(param_2 + 0x48);
  if (*plVar4 != 0) {
    do {
      (**(code **)(plVar4[-1] + 0x10))(plVar4 + -1,param_1);
      plVar4 = (long *)*plVar4;
    } while (*plVar4 != 0);
    lVar1 = *(long *)(param_1 + 0x30);
    if ((*(ulong *)(param_1 + 0x28) & 0xfffffffe) == 2) {
      lVar1 = *(long *)(lVar1 + 0x10);
    }
  }
  plVar4 = *(long **)(lVar1 + 0x18);
  if ((int)plVar4[2] == 0) {
    uVar3 = 1;
    plVar2 = plVar4;
  }
  else {
    uVar3 = 0;
    plVar2 = (long *)0x0;
    if (*(long *)*plVar4 != 0) {
      plVar2 = (long *)*plVar4;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(long **)(param_1 + 0x30) = plVar2;
  return;
}



/* Entry: 109ea787c; end: 109ea790b;  */

void FUN_109ea787c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  FUN_109ece8f0(param_1 + 0x28);
  for (plVar4 = *(long **)(param_2 + 0x20); *plVar4 != 0; plVar4 = (long *)*plVar4) {
    (**(code **)(plVar4[-1] + 0x10))(plVar4 + -1,param_1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if ((*(ulong *)(param_1 + 0x28) & 0xfffffffe) == 2) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  plVar4 = *(long **)(lVar1 + 0x18);
  if ((int)plVar4[2] == 0) {
    uVar3 = 1;
    plVar2 = plVar4;
  }
  else {
    uVar3 = 0;
    plVar2 = (long *)0x0;
    if (*(long *)*plVar4 != 0) {
      plVar2 = (long *)*plVar4;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(long **)(param_1 + 0x30) = plVar2;
  return;
}



/* Entry: 109ea790c; end: 109ea7b43;  */

void FUN_109ea790c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = 2;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar2 = 3;
  }
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  FUN_109f6600c(puVar1,0x60,8);
  *(undefined4 *)(puVar1 + 3) = 6;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = uVar2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar1);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  while( true ) {
    plVar3 = *(long **)(param_2 + 8);
    lVar4 = *plVar3;
    if (lVar4 == 0) break;
    plVar5 = (long *)plVar3[1];
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *plVar3 = 0;
    plVar3[1] = 0;
  }
  return;
}



/* Entry: 109ea7b44; end: 109ea7f03;  */

void FUN_109ea7b44(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined2 uVar17;
  undefined8 *puVar18;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == 0) goto code_r0x000109ea7ce0;
  puVar7 = param_2;
  FUN_109f658b0(param_2,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  bVar3 = *(byte *)((long)puVar11 + 0xd);
  puVar18 = (undefined8 *)(ulong)bVar3;
  bVar4 = *(byte *)((long)puVar11 + 0xe);
  *(undefined4 *)((long)puVar7 + 0x84) = 0;
  puVar13 = (undefined8 *)(ulong)*(uint *)((long)puVar11 + 4);
  puVar16 = (undefined8 *)((ulong)puVar13 & 0xff);
  uVar17 = 0xb6a6;
  puVar9 = puVar7;
  puVar8 = puVar13;
  switch(puVar16) {
  case (undefined8 *)0x0:
    if (bVar3 != 0) {
      lVar12 = 0;
      puVar15 = (undefined4 *)(param_1 + 0x28);
      do {
        *(undefined4 *)((long)puVar7 + lVar12) = *puVar15;
        lVar12 = lVar12 + 8;
        puVar15 = puVar15 + 1;
      } while ((long)puVar18 * 8 - lVar12 != 0);
    }
    break;
  case (undefined8 *)0x1:
    if (bVar3 != 0) {
      lVar12 = 0;
      puVar15 = (undefined4 *)(param_1 + 0x28);
      do {
        *(undefined4 *)((long)puVar7 + lVar12) = *puVar15;
        lVar12 = lVar12 + 8;
        puVar15 = puVar15 + 1;
      } while ((long)puVar18 * 8 - lVar12 != 0);
    }
    break;
  default:
    in_CY = 1 < bVar4;
  case (undefined8 *)0xaa:
  case (undefined8 *)0xd2:
    if ((bool)in_CY) {
code_r0x000109ea7bd4:
code_r0x000109ea7bd8:
      puVar8 = param_2;
      FUN_109f658b0();
      unaff_x24 = 0;
      puVar7[0x11] = puVar8;
      *(uint *)((long)puVar7 + 0x84) = (uint)bVar4;
      unaff_x25 = (undefined8 *)(param_1 + 0x28);
      lStack_68 = (long)puVar18 << 3;
      lStack_70 = (long)puVar18 << 1;
      unaff_x28 = (long)puVar18 << 2;
      unaff_x26 = unaff_x25;
      puVar11 = unaff_x25;
      do {
        puVar9 = param_2;
        FUN_109f658b0(param_2,0x90);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[0xf] = 0;
          puVar9[0xe] = 0;
          puVar9[0x11] = 0;
          puVar9[0x10] = 0;
          puVar9[0xb] = 0;
          puVar9[10] = 0;
          puVar9[0xd] = 0;
          puVar9[0xc] = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
        }
        *(undefined4 *)((long)puVar9 + 0x84) = 0;
        cVar5 = *(char *)(*(long *)(param_1 + 0x20) + 4);
        unaff_x27 = puVar11;
        if (cVar5 == '\x02') {
          puVar8 = puVar9;
          puVar16 = puVar18;
          if (bVar3 != 0) {
            do {
              puVar13 = puVar8 + 1;
              *(undefined4 *)puVar8 = *(undefined4 *)puVar11;
              puVar16 = (undefined8 *)((long)puVar16 + -1);
              in_ZR = puVar16 == (undefined8 *)0x0;
              puVar11 = (undefined8 *)((long)puVar11 + 4);
code_r0x000109ea7c8c:
              puVar8 = puVar13;
            } while (!(bool)in_ZR);
code_r0x000109ea7c90:
          }
        }
        else if (cVar5 == '\x03') {
code_r0x000109ea7c4c:
          puVar13 = unaff_x25;
          puVar11 = puVar9;
          puVar8 = puVar18;
          if (bVar3 != 0) {
            do {
              *(undefined2 *)puVar11 = *(undefined2 *)puVar13;
              puVar8 = (undefined8 *)((long)puVar8 + -1);
              puVar13 = (undefined8 *)((long)puVar13 + 2);
              puVar11 = puVar11 + 1;
            } while (puVar8 != (undefined8 *)0x0);
          }
        }
        else {
code_r0x000109ea7c94:
          puVar13 = unaff_x26;
          puVar11 = puVar9;
          puVar8 = puVar18;
          if (bVar3 != 0) {
            do {
              *puVar11 = *puVar13;
              puVar8 = (undefined8 *)((long)puVar8 + -1);
              puVar13 = puVar13 + 1;
              puVar11 = puVar11 + 1;
            } while (puVar8 != (undefined8 *)0x0);
          }
        }
        *(undefined8 **)(puVar7[0x11] + unaff_x24 * 8) = puVar9;
        unaff_x24 = unaff_x24 + 1;
        unaff_x26 = (undefined8 *)((long)unaff_x26 + lStack_68);
        unaff_x25 = (undefined8 *)((long)unaff_x25 + lStack_70);
        unaff_x27 = (undefined8 *)((long)unaff_x27 + unaff_x28);
code_r0x000109ea7cd0:
        in_ZR = unaff_x24 == bVar4;
code_r0x000109ea7cd4:
        puVar11 = unaff_x27;
      } while (!(bool)in_ZR);
    }
    else {
      uVar1 = *(uint *)((long)puVar11 + 4) & 0xff;
      puVar11 = (undefined8 *)(ulong)uVar1;
      in_ZR = uVar1 == 2;
code_r0x000109ea7d64:
      if ((bool)in_ZR) {
        if (bVar3 != 0) {
          lVar12 = 0;
          puVar15 = (undefined4 *)(param_1 + 0x28);
          do {
            *(undefined4 *)((long)puVar7 + lVar12) = *puVar15;
            lVar12 = lVar12 + 8;
            puVar15 = puVar15 + 1;
          } while ((long)puVar18 * 8 - lVar12 != 0);
        }
      }
      else if ((int)puVar11 == 3) {
code_r0x000109ea7d70:
        if (bVar3 != 0) {
          puVar11 = (undefined8 *)0x0;
          puVar8 = (undefined8 *)(param_1 + 0x28);
          puVar16 = (undefined8 *)((long)puVar18 << 3);
          do {
            puVar13 = (undefined8 *)((long)puVar8 + 2);
            uVar17 = *(undefined2 *)puVar8;
code_r0x000109ea7d84:
            *(undefined2 *)((long)puVar7 + (long)puVar11) = uVar17;
            puVar8 = puVar13;
code_r0x000109ea7d88:
            puVar11 = puVar11 + 1;
          } while (puVar16 != puVar11);
code_r0x000109ea7d94:
        }
      }
      else if (bVar3 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)((long)puVar7 + lVar12) = *(undefined8 *)(param_1 + 0x28 + lVar12);
          lVar12 = lVar12 + 8;
        } while ((long)puVar18 * 8 - lVar12 != 0);
      }
    }
    break;
  case (undefined8 *)0x5:
  case (undefined8 *)0x6:
  case (undefined8 *)0xc:
  case (undefined8 *)0xd:
  case (undefined8 *)0xe:
  case (undefined8 *)0xf:
  case (undefined8 *)0x10:
  case (undefined8 *)0x12:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109ea7f04);
    (*pcVar6)();
  case (undefined8 *)0x7:
    if (bVar3 != 0) {
      puVar11 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)(param_1 + 0x28);
      puVar16 = (undefined8 *)((long)puVar18 << 3);
      do {
        puVar13 = (undefined8 *)((long)puVar8 + 2);
        uVar17 = *(undefined2 *)puVar8;
code_r0x000109ea7e4c:
        *(undefined2 *)((long)puVar7 + (long)puVar11) = uVar17;
        puVar8 = puVar13;
code_r0x000109ea7e50:
        puVar11 = puVar11 + 1;
      } while (puVar16 != puVar11);
    }
    break;
  case (undefined8 *)0x8:
    if (bVar3 != 0) {
      lVar12 = 0;
      puVar14 = (undefined2 *)(param_1 + 0x28);
      do {
        *(undefined2 *)((long)puVar7 + lVar12) = *puVar14;
        lVar12 = lVar12 + 8;
        puVar14 = puVar14 + 1;
      } while ((long)puVar18 * 8 - lVar12 != 0);
    }
    break;
  case (undefined8 *)0x9:
    if (bVar3 != 0) {
      lVar12 = 0;
      do {
        *(undefined8 *)((long)puVar7 + lVar12) = *(undefined8 *)(param_1 + 0x28 + lVar12);
        lVar12 = lVar12 + 8;
      } while ((long)puVar18 * 8 - lVar12 != 0);
    }
    break;
  case (undefined8 *)0xa:
    if (bVar3 != 0) {
      lVar12 = 0;
      do {
        *(undefined8 *)((long)puVar7 + lVar12) = *(undefined8 *)(param_1 + 0x28 + lVar12);
        lVar12 = lVar12 + 8;
      } while ((long)puVar18 * 8 - lVar12 != 0);
    }
    break;
  case (undefined8 *)0xb:
  case (undefined8 *)0x34:
  case (undefined8 *)0x52:
  case (undefined8 *)0x60:
    if (bVar3 != 0) goto code_r0x000109ea7d9c;
    break;
  case (undefined8 *)0x11:
  case (undefined8 *)0x13:
  case (undefined8 *)0x14:
  case (undefined8 *)0x20:
  case (undefined8 *)0x3b:
  case (undefined8 *)0x47:
    puVar11 = (undefined8 *)(ulong)*(uint *)(puVar11 + 2);
  case (undefined8 *)0x1a:
  case (undefined8 *)0x41:
    puVar18 = param_2;
    FUN_109f658b0(param_2,(long)puVar11 << 3);
    puVar7[0x11] = puVar18;
    iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
    *(int *)((long)puVar7 + 0x84) = iVar2;
    if (iVar2 != 0) {
      puVar18 = (undefined8 *)0x0;
      do {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)puVar18 * 8);
        FUN_109ea7b44(uVar10,param_2);
        *(undefined8 *)(puVar7[0x11] + (long)puVar18 * 8) = uVar10;
        puVar18 = (undefined8 *)((long)puVar18 + 1);
code_r0x000109ea7d48:
      } while (puVar18 < (undefined8 *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x10));
code_r0x000109ea7d58:
    }
    break;
  case (undefined8 *)0x15:
  case (undefined8 *)0x22:
  case (undefined8 *)0x3c:
  case (undefined8 *)0x49:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x59:
    goto code_r0x000109ea7c90;
  case (undefined8 *)0x16:
  case (undefined8 *)0x23:
  case (undefined8 *)0x3d:
    goto code_r0x000109ea7c94;
  case (undefined8 *)0x17:
  case (undefined8 *)0x1e:
  case (undefined8 *)0x1f:
  case (undefined8 *)0x21:
  case (undefined8 *)0x28:
  case (undefined8 *)0x31:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x45:
  case (undefined8 *)0x46:
  case (undefined8 *)0x48:
  case (undefined8 *)0x4f:
  case (undefined8 *)0x5d:
    goto code_r0x000109ea7d48;
  case (undefined8 *)0x18:
  case (undefined8 *)0x3f:
    goto code_r0x000109ea7ce8;
  case (undefined8 *)0x19:
  case (undefined8 *)0x1d:
  case (undefined8 *)0x40:
  case (undefined8 *)0x44:
    goto code_r0x000109ea7cfc;
  case (undefined8 *)0x1b:
  case (undefined8 *)0x42:
    goto code_r0x000109ea7cd4;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x43:
    goto code_r0x000109ea7cd0;
  case (undefined8 *)0x24:
  case (undefined8 *)0x5a:
    goto code_r0x000109ea7c8c;
  case (undefined8 *)0x25:
  case (undefined8 *)0x2b:
  case (undefined8 *)0x30:
  case (undefined8 *)0x4c:
    goto code_r0x000109ea7d84;
  case (undefined8 *)0x26:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x33:
  case (undefined8 *)0x35:
  case (undefined8 *)0x4d:
  case (undefined8 *)0x51:
  case (undefined8 *)0x53:
  case (undefined8 *)0x5b:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x61:
    goto code_r0x000109ea7d70;
  case (undefined8 *)0x27:
  case (undefined8 *)0x38:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x56:
  case (undefined8 *)0x5c:
  case (undefined8 *)0x64:
    goto code_r0x000109ea7d94;
  case (undefined8 *)0x29:
    goto code_r0x000109ea7d64;
  case (undefined8 *)0x2c:
    goto code_r0x000109ea7d58;
  case (undefined8 *)0x2d:
  case (undefined8 *)0x36:
  case (undefined8 *)0x54:
  case (undefined8 *)0x62:
code_r0x000109ea7d9c:
    puVar11 = (undefined8 *)0x0;
  case (undefined8 *)0x2a:
    puVar13 = (undefined8 *)(param_1 + 0x28);
code_r0x000109ea7da4:
    do {
      *(undefined1 *)((long)puVar7 + (long)puVar11) = *(undefined1 *)puVar13;
      puVar11 = puVar11 + 1;
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while ((long)puVar18 * 8 - (long)puVar11 != 0);
    break;
  case (undefined8 *)0x2f:
  case (undefined8 *)0x37:
  case (undefined8 *)0x55:
  case (undefined8 *)0x63:
    goto code_r0x000109ea7d88;
  case (undefined8 *)0x32:
  case (undefined8 *)0x50:
  case (undefined8 *)0x5e:
    goto code_r0x000109ea7da4;
  case (undefined8 *)0x39:
  case (undefined8 *)0x57:
    break;
  case (undefined8 *)0x66:
  case (undefined8 *)0x6a:
  case (undefined8 *)0x7a:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x82:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8a:
  case (undefined8 *)0x8e:
  case (undefined8 *)0x92:
  case (undefined8 *)0x9a:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xa2:
    goto code_r0x000109ea7e50;
  case (undefined8 *)0x67:
  case (undefined8 *)0x6b:
  case (undefined8 *)0x6f:
  case (undefined8 *)0x73:
  case (undefined8 *)0x77:
  case (undefined8 *)0x7b:
  case (undefined8 *)0x7f:
  case (undefined8 *)0x83:
  case (undefined8 *)0x87:
  case (undefined8 *)0x8b:
  case (undefined8 *)0x8f:
  case (undefined8 *)0x93:
  case (undefined8 *)0x97:
  case (undefined8 *)0x9b:
  case (undefined8 *)0x9f:
  case (undefined8 *)0xa3:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xca:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
    goto code_r0x000109ea7bd4;
  case (undefined8 *)0x6e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x76:
  case (undefined8 *)0x96:
    goto code_r0x000109ea7e4c;
  case (undefined8 *)0xba:
  case (undefined8 *)0xc2:
    goto code_r0x000109ea7bd8;
  case (undefined8 *)0xfa:
  case (undefined8 *)0xfe:
    goto code_r0x000109ea7c4c;
  }
code_r0x000109ea7ce0:
code_r0x000109ea7ce8:
code_r0x000109ea7cfc:
  return;
}



/* Entry: 109ea7f04; end: 109ea7ffb;  */

long FUN_109ea7f04(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  if (*(uint *)(param_2 + 3) < 4) {
    uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x58);
    FUN_109ea8668();
    lVar4 = *(long *)(param_1 + 0x58);
    uVar1 = *(undefined1 *)(*(long *)(lVar4 + 0x30) + 0xd);
    lVar3 = *(long *)(param_1 + 0x40);
    FUN_109ecb0a8(lVar3,0x112);
    *(undefined1 *)(lVar3 + 0x50) = uVar1;
    lVar5 = lVar3 + 0x30;
    FUN_109ecb048();
    *(undefined8 *)(lVar3 + 0x80) = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0;
    *(undefined8 *)(lVar3 + 0x90) = 0;
    *(long *)(lVar3 + 0x98) = lVar4 + 0x80;
    *(undefined4 *)
     (lVar3 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar3 + 0x28) * 0x68] * 4 + 0x50) =
         uVar2;
    FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar3);
    *(undefined8 *)(param_1 + 0x28) = 3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x50) = lVar5;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x50);
  }
  return lVar5;
}



/* Entry: 109ea7ffc; end: 109ea800f;  */

undefined4 FUN_109ea7ffc(uint param_1)

{
  return *(undefined4 *)(&UNK_10e06b7a0 + (ulong)(param_1 & 0xff) * 4);
}



/* Entry: 109ea8010; end: 109ea80af;  */

void FUN_109ea8010(long param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x18) == 4) {
    if (((&UNK_110b6719c)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] & 1) == 0) {
      FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
      *(undefined8 *)(param_1 + 0x28) = 3;
      *(long *)(param_1 + 0x30) = param_2;
      return;
    }
  }
  else if (*(int *)(param_2 + 0x18) == 3) {
    lVar1 = param_2 + 0x38;
    goto LAB_109ea8064;
  }
  lVar1 = param_2 + 0x30;
LAB_109ea8064:
  FUN_109ecb048(param_2,lVar1);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  *(undefined8 *)(param_1 + 0x28) = 3;
  *(long *)(param_1 + 0x30) = param_2;
  *(long *)(param_1 + 0x50) = lVar1;
  return;
}



/* Entry: 109ea80b0; end: 109ea8167;  */

long FUN_109ea80b0(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  bVar4 = *(byte *)(param_2 + 0x1d);
  uVar7 = (ulong)bVar4;
  FUN_109ecc128();
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x50,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 5;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_109ecb048(puVar2,puVar2 + 5,1,(ulong)bVar4);
  puVar2[9] = uVar7;
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  lVar3 = param_1[3];
  FUN_109ecaef8(lVar3,0xe8);
  if (lVar3 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(long *)(lVar3 + 0x68) = param_2;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 **)(lVar3 + 0x98) = puVar2 + 5;
  lVar12 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar3 + 0x2c) = uVar1;
  *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar4 = (&UNK_110b78541)[lVar12];
  if (bVar4 == 0) {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
    if ((&UNK_110b78540)[lVar12] == 0) {
      bVar4 = 0;
      uVar5 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar12) & 0x79) != 0) {
        uVar5 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar4 = 0;
    plVar8 = (long *)(lVar3 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar12;
    uVar9 = uVar7;
    do {
      if ((*pcVar10 == '\0') && (bVar4 <= *(byte *)(*plVar8 + 0x1c))) {
        bVar4 = *(byte *)(*plVar8 + 0x1c);
      }
      plVar8 = plVar8 + 6;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
  }
  uVar6 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
  if (uVar6 == 0) {
    if ((int)uVar7 == 0) {
      uVar5 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar8 = (long *)(lVar3 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar12);
    uVar9 = uVar7;
    uVar5 = 0;
    do {
      uVar6 = (uint)*(byte *)(*plVar8 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar9 = uVar9 - 1;
      plVar8 = plVar8 + 6;
      puVar11 = puVar11 + 1;
      uVar5 = uVar6;
    } while (uVar9 != 0);
  }
  else {
    uVar5 = uVar6;
    if ((int)uVar7 == 0) goto LAB_109ece0a8;
  }
  uVar9 = 0;
  lVar12 = lVar3 + 0x70;
  do {
    lVar13 = *(long *)(lVar3 + uVar9 * 0x30 + 0x68);
    uVar14 = (ulong)*(byte *)(lVar13 + 0x1c);
    if (uVar14 < 0x10) {
      do {
        *(char *)(lVar12 + uVar14) = *(char *)(lVar13 + 0x1c) + -1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x10);
    }
    uVar9 = uVar9 + 1;
    lVar12 = lVar12 + 0x30;
  } while (uVar9 != uVar7);
  uVar5 = 0x20;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar3,lVar3 + 0x30,bVar4,uVar5);
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3 + 0x30;
}



/* Entry: 109ea8168; end: 109ea818b;  */

long FUN_109ea8168(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,*(undefined4 *)
                       (&UNK_10e06b7f8 + ((ulong)(*(byte *)(param_2 + 0x1c) - 1) & 0xff) * 4));
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(long *)(lVar2 + 0x68) = param_2;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = param_3;
  lVar11 = (ulong)*(uint *)(lVar2 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar3 = (&UNK_110b78541)[lVar11];
  if (bVar3 == 0) {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
    if ((&UNK_110b78540)[lVar11] == 0) {
      bVar3 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar11) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar3 = 0;
    plVar7 = (long *)(lVar2 + 0x68);
    pcVar9 = &UNK_110b78548 + lVar11;
    uVar8 = uVar6;
    do {
      if ((*pcVar9 == '\0') && (bVar3 <= *(byte *)(*plVar7 + 0x1c))) {
        bVar3 = *(byte *)(*plVar7 + 0x1c);
      }
      plVar7 = plVar7 + 6;
      uVar8 = uVar8 - 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = (ulong)(byte)(&UNK_110b78540)[lVar11];
  }
  uVar5 = *(uint *)(&UNK_110b78544 + lVar11) & 0x79;
  if (uVar5 == 0) {
    if ((int)uVar6 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar7 = (long *)(lVar2 + 0x68);
    puVar10 = (uint *)(&UNK_110b78558 + lVar11);
    uVar8 = uVar6;
    uVar4 = 0;
    do {
      uVar5 = (uint)*(byte *)(*plVar7 + 0x1d);
      if ((*puVar10 & 0x79) != 0 || uVar4 != 0) {
        uVar5 = uVar4;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 6;
      puVar10 = puVar10 + 1;
      uVar4 = uVar5;
    } while (uVar8 != 0);
  }
  else {
    uVar4 = uVar5;
    if ((int)uVar6 == 0) goto LAB_109ece0a8;
  }
  uVar8 = 0;
  lVar11 = lVar2 + 0x70;
  do {
    lVar12 = *(long *)(lVar2 + uVar8 * 0x30 + 0x68);
    uVar13 = (ulong)*(byte *)(lVar12 + 0x1c);
    if (uVar13 < 0x10) {
      do {
        *(char *)(lVar11 + uVar13) = *(char *)(lVar12 + 0x1c) + -1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 0x30;
  } while (uVar8 != uVar6);
  uVar4 = 0x20;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar2,lVar2 + 0x30,bVar3,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109ea818c; end: 109ea83f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_109ea818c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_210 [56];
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  ulong auStack_1a8 [16];
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long alStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *param_3;
  plVar18 = param_1;
  plVar4 = param_3;
  if (*(int *)(lVar6 + 0x18) == 5) {
    uVar9 = *(ulong *)(lVar6 + 0x48);
    uVar5 = (*(byte *)(lVar6 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar6 + 0x45) & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
    uVar11 = uVar9 & 0xffffffff;
    if (uVar5 != 5) {
      uVar11 = uVar9;
    }
    unaff_x23 = uVar9 & 0xffff;
    if (uVar5 != 4) {
      unaff_x23 = uVar11;
    }
    uVar11 = uVar9 & 1;
    if (uVar5 != 0) {
      uVar11 = uVar9 & 0xff;
    }
    if (uVar5 < 4) {
      unaff_x23 = uVar11;
    }
    if (unaff_x23 < *(byte *)((long)param_2 + 0x1c)) {
      plStack_100 = param_2;
      param_3 = unaff_x21;
      if (*(byte *)((long)param_2 + 0x1c) != 1) {
        param_3 = (long *)param_1[3];
        FUN_109ecaef8(param_3,0x154);
        unaff_x22 = param_3 + 6;
        param_4 = (long *)(ulong)*(byte *)((long)param_2 + 0x1d);
        FUN_109ecb048();
        uVar2 = *(ushort *)((long)param_3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)((long)param_3 + 0x2c) = uVar2;
        *(ushort *)((long)param_3 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = (long)param_2;
        *(char *)(param_3 + 0xe) = (char)unaff_x23;
        *(undefined8 *)((long)param_3 + 0x71) = 0;
        param_3[0xf] = 0;
        plVar18 = (long *)*param_1;
        param_2 = (long *)param_1[1];
        plVar4 = param_3;
        FUN_109ecb4f0();
        *param_1 = 3;
        param_1[1] = (long)param_3;
        plStack_100 = unaff_x22;
      }
    }
    else {
      param_3 = (long *)(ulong)*(byte *)((long)param_2 + 0x1d);
      unaff_x22 = *(long **)param_1[3];
      FUN_109f6600c(unaff_x22,0x48,8);
      *(undefined4 *)(unaff_x22 + 3) = 7;
      unaff_x22[1] = 0;
      unaff_x22[2] = 0;
      *unaff_x22 = 0;
      plVar4 = (long *)0x1;
      param_4 = param_3;
      FUN_109ecb048();
      param_2 = unaff_x22;
      FUN_109ece5ec();
      plStack_100 = unaff_x22 + 5;
    }
  }
  else {
    uVar11 = (ulong)*(byte *)((long)param_2 + 0x1c);
    if (*(byte *)((long)param_2 + 0x1c) != 0) {
      unaff_x24 = 0;
      do {
        if (((int)uVar11 == 1) && (unaff_x24 == 0)) {
          uVar11 = 1;
          unaff_x22 = param_2;
        }
        else {
          unaff_x23 = param_1[3];
          FUN_109ecaef8(unaff_x23,0x154);
          unaff_x22 = (long *)(unaff_x23 + 0x30);
          FUN_109ecb048();
          uVar2 = *(ushort *)(unaff_x23 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
          *(ushort *)(unaff_x23 + 0x2c) = uVar2;
          *(ushort *)(unaff_x23 + 0x2c) =
               (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
          *(undefined8 *)(unaff_x23 + 0x50) = 0;
          *(undefined8 *)(unaff_x23 + 0x58) = 0;
          *(undefined8 *)(unaff_x23 + 0x60) = 0;
          *(long **)(unaff_x23 + 0x68) = param_2;
          *(char *)(unaff_x23 + 0x70) = (char)unaff_x24;
          *(undefined8 *)(unaff_x23 + 0x71) = 0;
          *(undefined8 *)(unaff_x23 + 0x78) = 0;
          FUN_109ecb4f0(*param_1,param_1[1],unaff_x23);
          *param_1 = 3;
          param_1[1] = unaff_x23;
          uVar11 = (ulong)*(byte *)((long)param_2 + 0x1c);
        }
        alStack_d8[unaff_x24] = (long)unaff_x22;
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x24 < uVar11);
    }
    param_2 = alStack_d8;
    param_4 = (long *)0x0;
    func_0x000109ea8958();
    plStack_100 = plVar18;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plStack_100;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_109ea83f8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *param_4;
  uStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  plStack_110 = unaff_x22;
  plStack_108 = param_3;
  plStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (*(int *)(lVar6 + 0x18) == 5) {
    plVar10 = *(long **)(lVar6 + 0x48);
    uVar5 = (*(byte *)(lVar6 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar6 + 0x45) & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar5 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
    plVar3 = (long *)((ulong)plVar10 & 0xffffffff);
    if (uVar5 != 5) {
      plVar3 = plVar10;
    }
    plVar1 = (long *)((ulong)plVar10 & 0xffff);
    if (uVar5 != 4) {
      plVar1 = plVar3;
    }
    plVar3 = (long *)((ulong)plVar10 & 1);
    if (uVar5 != 0) {
      plVar3 = (long *)((ulong)plVar10 & 0xff);
    }
    if (uVar5 < 4) {
      plVar1 = plVar3;
    }
    plVar3 = (long *)(ulong)*(byte *)((long)param_2 + 0x1c);
    if (plVar3 <= plVar1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
        return param_2;
      }
LAB_109ea8664:
      ___stack_chk_fail();
      pcStack_1b8 = FUN_109ea8668;
      plStack_1d0 = plVar18;
      plStack_1c8 = param_2;
      ppuStack_1c0 = &puStack_f0;
      FUN_109ef9548(auStack_210,plVar3,0);
      lVar6 = *plStack_1d8;
      if (*(int *)(lVar6 + 0x28) == 0) {
        plVar18 = (long *)(ulong)(*(uint *)(*(long *)(lVar6 + 0x38) + 0x30) & 0x1ff);
        if (plStack_1d8[1] != 0) {
          plVar4 = plStack_1d8 + 2;
          lVar15 = plStack_1d8[1];
          do {
            if (*(char *)(*(long *)(lVar6 + 0x30) + 4) == '\x12') {
              uVar5 = *(uint *)(*(long *)(*(long *)(lVar6 + 0x30) + 0x30) +
                                (ulong)*(uint *)(lVar15 + 0x58) * 0x30 + 0x28);
              auVar20._4_4_ = uVar5;
              auVar20._0_4_ = uVar5;
              auVar20._8_4_ = uVar5;
              auVar20._12_4_ = uVar5;
              auVar20 = NEON_ushl(auVar20,_UNK_10e06b410,4);
              bVar19 = auVar20[0] & 0x10;
              auVar21._0_5_ = CONCAT14(auVar20[4],(uint)bVar19) & 0x8ffffffff;
              auVar21._5_3_ = 0;
              auVar21[8] = auVar20[8] & 1;
              auVar21._9_3_ = 0;
              auVar21[0xc] = auVar20[0xc] & 4;
              auVar21._13_3_ = 0;
              auVar21 = NEON_ext(auVar21,auVar21,8,1);
              uVar8 = CONCAT13(auVar21[3],
                               CONCAT12(auVar21[2],CONCAT11(auVar21[1],bVar19 | auVar21[0])));
              plVar18 = (long *)(ulong)(uVar8 | uVar5 >> 0xd & 2 |
                                        (uint)(CONCAT17(auVar21[7],
                                                        CONCAT16(auVar21[6],
                                                                 CONCAT15(auVar21[5],
                                                                          CONCAT14(auVar20[4] & 8 |
                                                                                   auVar21[4],uVar8)
                                                                         ))) >> 0x20) |
                                       (uint)plVar18);
            }
            lVar16 = *plVar4;
            lVar6 = lVar15;
            plVar4 = plVar4 + 1;
            lVar15 = lVar16;
          } while (lVar16 != 0);
        }
        FUN_109ef9640(auStack_210);
      }
      else {
        plVar18 = (long *)0x0;
      }
      return plVar18;
    }
    func_0x000109ecd728();
    plVar10 = (long *)plVar18[3];
    FUN_109ecaef8(plVar10,plVar3);
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      plVar7 = (long *)0x0;
      plVar3 = plVar10 + 0xe;
      do {
        if (plVar1 == plVar7) {
          plVar10[(long)plVar1 * 6 + 10] = 0;
          plVar10[(long)plVar1 * 6 + 0xb] = 0;
          plVar10[(long)plVar1 * 6 + 0xc] = 0;
          plVar10[(long)plVar1 * 6 + 0xd] = (long)plVar4;
          *(undefined1 *)(plVar10 + (long)plVar1 * 6 + 0xe) = 0;
        }
        else {
          plVar3[-4] = 0;
          plVar3[-3] = 0;
          plVar3[-2] = 0;
          plVar3[-1] = (long)param_2;
          *(char *)plVar3 = (char)plVar7;
        }
        plVar7 = (long *)((long)plVar7 + 1);
        plVar3 = plVar3 + 6;
      } while (plVar7 < (long *)(ulong)*(byte *)((long)param_2 + 0x1c));
    }
    plVar3 = plVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) goto LAB_109ea8664;
  }
  else {
    uVar11 = 0;
    uVar5 = (*(byte *)((long)param_4 + 0x1d) & 0xaaaaaaaa) >> 1 |
            (*(byte *)((long)param_4 + 0x1d) & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    do {
      uVar8 = (uint)LZCOUNT((uVar5 >> 4 | (uVar5 & 0xf0f0f0f) << 4) << 0x18);
      uVar9 = uVar11;
      if (uVar8 < 5) {
        if (uVar8 == 0) {
          uVar14 = 0;
          uVar17 = 0;
          uVar9 = (ulong)(uVar11 != 0);
        }
        else {
          uVar14 = 0;
          uVar17 = 0;
          if (uVar8 != 3) {
            uVar17 = uVar11;
          }
        }
      }
      else {
        uVar14 = uVar11 & 0x7fff0000;
        uVar17 = uVar11;
      }
      auStack_1a8[uVar11] = uVar17 & 0xff00 | uVar14 | uVar9;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x10);
    bVar19 = *(byte *)((long)param_2 + 0x1c);
    lVar6 = plVar18[3];
    FUN_109ecafe4(lVar6,(ulong)bVar19);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      _memcpy(lVar6 + 0x48,auStack_1a8,(ulong)bVar19 << 3);
      FUN_109ecb4f0(*plVar18,plVar18[1],lVar6);
      *plVar18 = 3;
      plVar18[1] = lVar6;
      lVar6 = lVar6 + 0x28;
    }
    plVar3 = plVar18;
    FUN_109ece1b0(plVar18,0x124,param_4,lVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) goto LAB_109ea8664;
    plVar10 = (long *)plVar18[3];
    FUN_109ecaef8(plVar10,0x71);
    if (plVar10 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[0xd] = (long)plVar3;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = (long)plVar4;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = (long)param_2;
  }
  lVar6 = (ulong)*(uint *)(plVar10 + 5) * 0x68;
  uVar2 = *(ushort *)((long)plVar10 + 0x2c) & 0xfffe | (ushort)*(byte *)(plVar18 + 2);
  *(ushort *)((long)plVar10 + 0x2c) = uVar2;
  *(ushort *)((long)plVar10 + 0x2c) =
       (*(ushort *)((long)plVar18 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar19 = (&UNK_110b78541)[lVar6];
  if (bVar19 == 0) {
    uVar11 = (ulong)(byte)(&UNK_110b78540)[lVar6];
    if ((&UNK_110b78540)[lVar6] == 0) {
      bVar19 = 0;
      uVar5 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar6) & 0x79) != 0) {
        uVar5 = *(uint *)(&UNK_110b78544 + lVar6) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar19 = 0;
    plVar4 = plVar10 + 0xd;
    pcVar12 = &UNK_110b78548 + lVar6;
    uVar9 = uVar11;
    do {
      if ((*pcVar12 == '\0') && (bVar19 <= *(byte *)(*plVar4 + 0x1c))) {
        bVar19 = *(byte *)(*plVar4 + 0x1c);
      }
      plVar4 = plVar4 + 6;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar11 = (ulong)(byte)(&UNK_110b78540)[lVar6];
  }
  uVar8 = *(uint *)(&UNK_110b78544 + lVar6) & 0x79;
  if (uVar8 == 0) {
    if ((int)uVar11 == 0) {
      uVar5 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar4 = plVar10 + 0xd;
    puVar13 = (uint *)(&UNK_110b78558 + lVar6);
    uVar9 = uVar11;
    uVar5 = 0;
    do {
      uVar8 = (uint)*(byte *)(*plVar4 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar5 != 0) {
        uVar8 = uVar5;
      }
      uVar9 = uVar9 - 1;
      plVar4 = plVar4 + 6;
      puVar13 = puVar13 + 1;
      uVar5 = uVar8;
    } while (uVar9 != 0);
  }
  else {
    uVar5 = uVar8;
    if ((int)uVar11 == 0) goto LAB_109ece0a8;
  }
  uVar9 = 0;
  plVar4 = plVar10 + 0xe;
  do {
    lVar6 = plVar10[uVar9 * 6 + 0xd];
    uVar17 = (ulong)*(byte *)(lVar6 + 0x1c);
    if (uVar17 < 0x10) {
      do {
        *(char *)((long)plVar4 + uVar17) = *(char *)(lVar6 + 0x1c) + -1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x10);
    }
    uVar9 = uVar9 + 1;
    plVar4 = plVar4 + 6;
  } while (uVar9 != uVar11);
  uVar5 = 0x20;
  if (uVar8 != 0) {
    uVar5 = uVar8;
  }
LAB_109ece0a8:
  FUN_109ecb048(plVar10,plVar10 + 6,bVar19,uVar5);
  FUN_109ecb4f0(*plVar18,plVar18[1],plVar10);
  *plVar18 = 3;
  plVar18[1] = (long)plVar10;
  return plVar10 + 6;
}



/* Entry: 109ea83f8; end: 109ea8667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109ea83f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_130 [56];
  long *plStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong auStack_c8 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_4;
  if (*(int *)(lVar5 + 0x18) == 5) {
    puVar8 = *(undefined8 **)(lVar5 + 0x48);
    uVar4 = (*(byte *)(lVar5 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar5 + 0x45) & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uint)LZCOUNT((uVar4 >> 4 | (uVar4 & 0xf0f0f0f) << 4) << 0x18);
    puVar3 = (undefined8 *)((ulong)puVar8 & 0xffffffff);
    if (uVar4 != 5) {
      puVar3 = puVar8;
    }
    puVar1 = (undefined8 *)((ulong)puVar8 & 0xffff);
    if (uVar4 != 4) {
      puVar1 = puVar3;
    }
    puVar3 = (undefined8 *)((ulong)puVar8 & 1);
    if (uVar4 != 0) {
      puVar3 = (undefined8 *)((ulong)puVar8 & 0xff);
    }
    if (uVar4 < 4) {
      puVar1 = puVar3;
    }
    puVar3 = (undefined8 *)(ulong)*(byte *)((long)param_2 + 0x1c);
    if (puVar3 <= puVar1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_2;
      }
LAB_109ea8664:
      ___stack_chk_fail();
      pcStack_d8 = FUN_109ea8668;
      puStack_f0 = param_1;
      puStack_e8 = param_2;
      puStack_e0 = &stack0xfffffffffffffff0;
      FUN_109ef9548(auStack_130,puVar3,0);
      lVar5 = *plStack_f8;
      if (*(int *)(lVar5 + 0x28) == 0) {
        puVar3 = (undefined8 *)(ulong)(*(uint *)(*(long *)(lVar5 + 0x38) + 0x30) & 0x1ff);
        if (plStack_f8[1] != 0) {
          plVar10 = plStack_f8 + 2;
          lVar15 = plStack_f8[1];
          do {
            if (*(char *)(*(long *)(lVar5 + 0x30) + 4) == '\x12') {
              uVar4 = *(uint *)(*(long *)(*(long *)(lVar5 + 0x30) + 0x30) +
                                (ulong)*(uint *)(lVar15 + 0x58) * 0x30 + 0x28);
              auVar19._4_4_ = uVar4;
              auVar19._0_4_ = uVar4;
              auVar19._8_4_ = uVar4;
              auVar19._12_4_ = uVar4;
              auVar19 = NEON_ushl(auVar19,_UNK_10e06b410,4);
              bVar18 = auVar19[0] & 0x10;
              auVar20._0_5_ = CONCAT14(auVar19[4],(uint)bVar18) & 0x8ffffffff;
              auVar20._5_3_ = 0;
              auVar20[8] = auVar19[8] & 1;
              auVar20._9_3_ = 0;
              auVar20[0xc] = auVar19[0xc] & 4;
              auVar20._13_3_ = 0;
              auVar20 = NEON_ext(auVar20,auVar20,8,1);
              uVar7 = CONCAT13(auVar20[3],
                               CONCAT12(auVar20[2],CONCAT11(auVar20[1],bVar18 | auVar20[0])));
              puVar3 = (undefined8 *)
                       (ulong)(uVar7 | uVar4 >> 0xd & 2 |
                               (uint)(CONCAT17(auVar20[7],
                                               CONCAT16(auVar20[6],
                                                        CONCAT15(auVar20[5],
                                                                 CONCAT14(auVar19[4] & 8 |
                                                                          auVar20[4],uVar7)))) >>
                                     0x20) | (uint)puVar3);
            }
            lVar16 = *plVar10;
            lVar5 = lVar15;
            plVar10 = plVar10 + 1;
            lVar15 = lVar16;
          } while (lVar16 != 0);
        }
        FUN_109ef9640(auStack_130);
      }
      else {
        puVar3 = (undefined8 *)0x0;
      }
      return puVar3;
    }
    func_0x000109ecd728();
    puVar8 = (undefined8 *)param_1[3];
    FUN_109ecaef8(puVar8,puVar3);
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      puVar6 = (undefined8 *)0x0;
      puVar3 = puVar8 + 0xe;
      do {
        if (puVar1 == puVar6) {
          puVar8[(long)puVar1 * 6 + 10] = 0;
          puVar8[(long)puVar1 * 6 + 0xb] = 0;
          puVar8[(long)puVar1 * 6 + 0xc] = 0;
          puVar8[(long)puVar1 * 6 + 0xd] = param_3;
          *(undefined1 *)(puVar8 + (long)puVar1 * 6 + 0xe) = 0;
        }
        else {
          puVar3[-4] = 0;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = param_2;
          *(char *)puVar3 = (char)puVar6;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        puVar3 = puVar3 + 6;
      } while (puVar6 < (undefined8 *)(ulong)*(byte *)((long)param_2 + 0x1c));
    }
    puVar3 = puVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_109ea8664;
  }
  else {
    uVar9 = 0;
    uVar4 = (*(byte *)((long)param_4 + 0x1d) & 0xaaaaaaaa) >> 1 |
            (*(byte *)((long)param_4 + 0x1d) & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    do {
      uVar7 = (uint)LZCOUNT((uVar4 >> 4 | (uVar4 & 0xf0f0f0f) << 4) << 0x18);
      uVar11 = uVar9;
      if (uVar7 < 5) {
        if (uVar7 == 0) {
          uVar14 = 0;
          uVar17 = 0;
          uVar11 = (ulong)(uVar9 != 0);
        }
        else {
          uVar14 = 0;
          uVar17 = 0;
          if (uVar7 != 3) {
            uVar17 = uVar9;
          }
        }
      }
      else {
        uVar14 = uVar9 & 0x7fff0000;
        uVar17 = uVar9;
      }
      auStack_c8[uVar9] = uVar17 & 0xff00 | uVar14 | uVar11;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x10);
    bVar18 = *(byte *)((long)param_2 + 0x1c);
    lVar5 = param_1[3];
    FUN_109ecafe4(lVar5,(ulong)bVar18);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      _memcpy(lVar5 + 0x48,auStack_c8,(ulong)bVar18 << 3);
      FUN_109ecb4f0(*param_1,param_1[1],lVar5);
      *param_1 = 3;
      param_1[1] = lVar5;
      lVar5 = lVar5 + 0x28;
    }
    puVar3 = param_1;
    FUN_109ece1b0(param_1,0x124,param_4,lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_109ea8664;
    puVar8 = (undefined8 *)param_1[3];
    FUN_109ecaef8(puVar8,0x71);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = puVar3;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = param_3;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = param_2;
  }
  lVar5 = (ulong)*(uint *)(puVar8 + 5) * 0x68;
  uVar2 = *(ushort *)((long)puVar8 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)((long)puVar8 + 0x2c) = uVar2;
  *(ushort *)((long)puVar8 + 0x2c) =
       (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
  bVar18 = (&UNK_110b78541)[lVar5];
  if (bVar18 == 0) {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar5];
    if ((&UNK_110b78540)[lVar5] == 0) {
      bVar18 = 0;
      uVar4 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar5) & 0x79) != 0) {
        uVar4 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar18 = 0;
    plVar10 = puVar8 + 0xd;
    pcVar12 = &UNK_110b78548 + lVar5;
    uVar11 = uVar9;
    do {
      if ((*pcVar12 == '\0') && (bVar18 <= *(byte *)(*plVar10 + 0x1c))) {
        bVar18 = *(byte *)(*plVar10 + 0x1c);
      }
      plVar10 = plVar10 + 6;
      uVar11 = uVar11 - 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar9 = (ulong)(byte)(&UNK_110b78540)[lVar5];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar5) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar9 == 0) {
      uVar4 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar10 = puVar8 + 0xd;
    puVar13 = (uint *)(&UNK_110b78558 + lVar5);
    uVar11 = uVar9;
    uVar4 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar10 + 0x1d);
      if ((*puVar13 & 0x79) != 0 || uVar4 != 0) {
        uVar7 = uVar4;
      }
      uVar11 = uVar11 - 1;
      plVar10 = plVar10 + 6;
      puVar13 = puVar13 + 1;
      uVar4 = uVar7;
    } while (uVar11 != 0);
  }
  else {
    uVar4 = uVar7;
    if ((int)uVar9 == 0) goto LAB_109ece0a8;
  }
  uVar11 = 0;
  puVar3 = puVar8 + 0xe;
  do {
    lVar5 = puVar8[uVar11 * 6 + 0xd];
    uVar17 = (ulong)*(byte *)(lVar5 + 0x1c);
    if (uVar17 < 0x10) {
      do {
        *(char *)((long)puVar3 + uVar17) = *(char *)(lVar5 + 0x1c) + -1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x10);
    }
    uVar11 = uVar11 + 1;
    puVar3 = puVar3 + 6;
  } while (uVar11 != uVar9);
  uVar4 = 0x20;
  if (uVar7 != 0) {
    uVar4 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(puVar8,puVar8 + 6,bVar18,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],puVar8);
  *param_1 = 3;
  param_1[1] = puVar8;
  return puVar8 + 6;
}



/* Entry: 109ea8668; end: 109ea8743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109ea8668(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_60 [56];
  long *plStack_28;
  
  FUN_109ef9548(auStack_60,param_1,0);
  lVar2 = *plStack_28;
  if (*(int *)(lVar2 + 0x28) == 0) {
    uVar6 = *(uint *)(*(long *)(lVar2 + 0x38) + 0x30) & 0x1ff;
    if (plStack_28[1] != 0) {
      plVar3 = plStack_28 + 2;
      lVar4 = plStack_28[1];
      do {
        if (*(char *)(*(long *)(lVar2 + 0x30) + 4) == '\x12') {
          uVar1 = *(uint *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x30) +
                            (ulong)*(uint *)(lVar4 + 0x58) * 0x30 + 0x28);
          auVar9._4_4_ = uVar1;
          auVar9._0_4_ = uVar1;
          auVar9._8_4_ = uVar1;
          auVar9._12_4_ = uVar1;
          auVar9 = NEON_ushl(auVar9,_UNK_10e06b410,4);
          bVar7 = auVar9[0] & 0x10;
          auVar10._0_5_ = CONCAT14(auVar9[4],(uint)bVar7) & 0x8ffffffff;
          auVar10._5_3_ = 0;
          auVar10[8] = auVar9[8] & 1;
          auVar10._9_3_ = 0;
          auVar10[0xc] = auVar9[0xc] & 4;
          auVar10._13_3_ = 0;
          auVar10 = NEON_ext(auVar10,auVar10,8,1);
          uVar8 = CONCAT13(auVar10[3],CONCAT12(auVar10[2],CONCAT11(auVar10[1],bVar7 | auVar10[0])));
          uVar6 = uVar8 | uVar1 >> 0xd & 2 |
                  (uint)(CONCAT17(auVar10[7],
                                  CONCAT16(auVar10[6],
                                           CONCAT15(auVar10[5],
                                                    CONCAT14(auVar9[4] & 8 | auVar10[4],uVar8)))) >>
                        0x20) | uVar6;
        }
        lVar5 = *plVar3;
        lVar2 = lVar4;
        plVar3 = plVar3 + 1;
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
    FUN_109ef9640(auStack_60);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 109ea8744; end: 109ea8b03;  */

/* WARNING: Possible PIC construction at 0x000109ea8ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ea8ab4) */
/* WARNING: Removing unreachable block (ram,0x000109ece210) */
/* WARNING: Removing unreachable block (ram,0x000109ece26c) */
/* WARNING: Removing unreachable block (ram,0x000109ece23c) */
/* WARNING: Removing unreachable block (ram,0x000109ecdf34) */
/* WARNING: Removing unreachable block (ram,0x000109ecdf94) */
/* WARNING: Removing unreachable block (ram,0x000109ece088) */
/* WARNING: Removing unreachable block (ram,0x000109ece09c) */
/* WARNING: Removing unreachable block (ram,0x000109ecdf9c) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfac) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfb4) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfc0) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfc4) */
/* WARNING: Removing unreachable block (ram,0x000109ecdf8c) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfd0) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfec) */
/* WARNING: Removing unreachable block (ram,0x000109ece0a4) */
/* WARNING: Removing unreachable block (ram,0x000109ecdff0) */
/* WARNING: Removing unreachable block (ram,0x000109ece004) */
/* WARNING: Removing unreachable block (ram,0x000109ece020) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfe0) */
/* WARNING: Removing unreachable block (ram,0x000109ecdfe4) */
/* WARNING: Removing unreachable block (ram,0x000109ece02c) */
/* WARNING: Removing unreachable block (ram,0x000109ece03c) */
/* WARNING: Removing unreachable block (ram,0x000109ece050) */
/* WARNING: Removing unreachable block (ram,0x000109ece068) */
/* WARNING: Removing unreachable block (ram,0x000109ece078) */
/* WARNING: Removing unreachable block (ram,0x000109ece080) */
/* WARNING: Removing unreachable block (ram,0x000109ece0a8) */

undefined8 *
FUN_109ea8744(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar20;
  undefined8 auStack_f0 [17];
  long lStack_68;
  undefined1 *puVar7;
  
  puVar10 = auStack_f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined1 *)param_1[3];
  if ((*(char *)(*(long *)(puVar15 + 0x28) + 0xc4) == '\x01') &&
     (puVar8 = (undefined8 *)(ulong)(byte)param_2[0x1c], 1 < (byte)param_2[0x1c])) {
    unaff_x26 = (undefined8 *)0x0;
    auStack_f0[0xd] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xf] = 0;
    auStack_f0[0xe] = 0;
    auStack_f0[9] = 0;
    auStack_f0[8] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[10] = 0;
    auStack_f0[5] = 0;
    auStack_f0[4] = 0;
    auStack_f0[7] = 0;
    auStack_f0[6] = 0;
    unaff_x27 = (undefined1 *)0x3;
    auStack_f0[1] = 0;
    auStack_f0[0] = 0;
    auStack_f0[3] = 0;
    auStack_f0[2] = 0;
    do {
      puVar17 = (undefined1 *)(ulong)(byte)param_2[0x1d];
      puVar15 = (undefined1 *)param_1[3];
      if ((unaff_x26 != (undefined8 *)0x0) || (puVar19 = param_2, (int)puVar8 != 1)) {
        FUN_109ecaef8(puVar15,0x154);
        puVar19 = puVar15 + 0x30;
        FUN_109ecb048();
        uVar3 = *(ushort *)(puVar15 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(puVar15 + 0x2c) = uVar3;
        *(ushort *)(puVar15 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar3 & 0xf007;
        *(undefined8 *)(puVar15 + 0x50) = 0;
        *(undefined8 *)(puVar15 + 0x58) = 0;
        *(undefined8 *)(puVar15 + 0x60) = 0;
        *(undefined1 **)(puVar15 + 0x68) = param_2;
        puVar15[0x70] = (char)unaff_x26;
        *(undefined8 *)(puVar15 + 0x71) = 0;
        *(undefined8 *)(puVar15 + 0x78) = 0;
        FUN_109ecb4f0(*param_1,param_1[1],puVar15);
        *param_1 = 3;
        param_1[1] = puVar15;
        puVar15 = (undefined1 *)param_1[3];
      }
      FUN_109ecb0a8(puVar15,0x59);
      puVar15[0x50] = puVar19[0x1c];
      unaff_x25 = (undefined8 *)(puVar15 + 0x30);
      FUN_109ecb048();
      *(undefined8 *)(puVar15 + 0x80) = 0;
      *(undefined8 *)(puVar15 + 0x88) = 0;
      *(undefined8 *)(puVar15 + 0x90) = 0;
      *(undefined1 **)(puVar15 + 0x98) = puVar19;
      FUN_109ecb4f0(*param_1,param_1[1],puVar15);
      auStack_f0[(long)unaff_x26] = unaff_x25;
      *param_1 = 3;
      param_1[1] = puVar15;
      *(int *)(*(long *)(puVar15 + 0x30) + 0x28) = (int)param_3;
      unaff_x26 = (undefined8 *)((long)unaff_x26 + 1);
      puVar8 = (undefined8 *)(ulong)(byte)param_2[0x1c];
    } while (unaff_x26 < puVar8);
    func_0x000109ecd728();
    puVar9 = param_1;
    FUN_109ece300();
    puVar18 = puVar9;
    unaff_x28 = auStack_f0;
  }
  else {
    puVar19 = (undefined1 *)(ulong)(byte)param_2[0x1d];
    FUN_109ecb0a8(puVar15,0x59);
    puVar15[0x50] = param_2[0x1c];
    puVar18 = (undefined8 *)(puVar15 + 0x30);
    puVar17 = puVar19;
    FUN_109ecb048();
    *(undefined8 *)(puVar15 + 0x80) = 0;
    *(undefined8 *)(puVar15 + 0x88) = 0;
    *(undefined8 *)(puVar15 + 0x90) = 0;
    *(undefined1 **)(puVar15 + 0x98) = param_2;
    puVar9 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)puVar15;
    FUN_109ecb4f0();
    *param_1 = 3;
    param_1[1] = puVar15;
    *(int *)(*(long *)(puVar15 + 0x30) + 0x28) = (int)param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    uVar20 = 0x109ea8958;
    ___stack_chk_fail();
    puVar5 = auStack_f0;
    puVar6 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar13 = param_5;
      puVar7 = (undefined1 *)puVar5;
      *(undefined8 **)(puVar7 + -0x60) = unaff_x28;
      *(undefined1 **)(puVar7 + -0x58) = unaff_x27;
      *(undefined8 **)(puVar7 + -0x50) = unaff_x26;
      *(undefined8 **)(puVar7 + -0x48) = unaff_x25;
      *(undefined1 **)(puVar7 + -0x40) = puVar15;
      *(undefined1 **)(puVar7 + -0x38) = puVar19;
      *(undefined8 **)(puVar7 + -0x30) = puVar18;
      *(undefined1 **)(puVar7 + -0x28) = param_2;
      *(undefined1 **)(puVar7 + -0x20) = param_3;
      *(undefined8 **)(puVar7 + -0x18) = param_1;
      *(undefined1 **)(puVar7 + -0x10) = puVar6 + -0x10;
      *(undefined8 *)(puVar7 + -8) = uVar20;
      iVar12 = (int)puVar13;
      iVar11 = (int)puVar17;
      if (iVar12 + -1 == iVar11) break;
      uVar1 = iVar11 + ((uint)(iVar12 - iVar11) >> 1);
      puVar15 = (undefined1 *)(ulong)uVar1;
      bVar2 = *(byte *)((long)puVar10 + 0x1d);
      uVar14 = (bVar2 & 0xaaaaaaaa) >> 1 | (bVar2 & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar16 = (ulong)puVar15 & 0xffff0000;
      uVar14 = (uint)LZCOUNT((uVar14 >> 4 | (uVar14 & 0xf0f0f0f) << 4) << 0x18);
      puVar19 = (undefined1 *)0x0;
      if (uVar14 != 3) {
        puVar19 = puVar15;
      }
      puVar6 = (undefined1 *)(ulong)(uVar1 != 0);
      puVar4 = (undefined1 *)0x0;
      if (uVar14 != 0) {
        puVar6 = puVar15;
        puVar4 = puVar19;
      }
      if (uVar14 < 5) {
        uVar16 = 0;
      }
      *(ulong *)(puVar7 + -0x68) = uVar16;
      unaff_x28 = (undefined8 *)puVar15;
      unaff_x27 = puVar15;
      if (uVar14 < 5) {
        unaff_x28 = (undefined8 *)puVar6;
        unaff_x27 = puVar4;
      }
      unaff_x26 = *(undefined8 **)puVar9[3];
      FUN_109f6600c(unaff_x26,0x50,8);
      if (unaff_x26 != (undefined8 *)0x0) {
        unaff_x26[7] = 0;
        unaff_x26[6] = 0;
        unaff_x26[9] = 0;
        unaff_x26[8] = 0;
        unaff_x26[3] = 0;
        unaff_x26[2] = 0;
        unaff_x26[5] = 0;
        unaff_x26[4] = 0;
        unaff_x26[1] = 0;
        *unaff_x26 = 0;
      }
      *(undefined4 *)(unaff_x26 + 3) = 5;
      unaff_x26[1] = 0;
      unaff_x26[2] = 0;
      *unaff_x26 = 0;
      FUN_109ecb048(unaff_x26,unaff_x26 + 5,1,bVar2);
      unaff_x26[9] = (ulong)unaff_x27 & 0xff00 | *(ulong *)(puVar7 + -0x68) |
                     (ulong)unaff_x28 & 0xff;
      FUN_109ecb4f0(*puVar9,puVar9[1],unaff_x26);
      *puVar9 = 3;
      puVar9[1] = unaff_x26;
      unaff_x25 = puVar9;
      FUN_109ece1b0(puVar9,0x12f,puVar10,unaff_x26 + 5);
      uVar20 = 0x109ea8ab4;
      puVar5 = (undefined8 *)(puVar7 + -0x70);
      param_5 = puVar15;
      param_1 = puVar9;
      param_3 = puVar13;
      param_2 = (undefined1 *)puVar10;
      puVar18 = puVar8;
      puVar19 = puVar17;
      puVar6 = puVar7;
    }
    return (undefined8 *)puVar8[(ulong)puVar17 & 0xffffffff];
  }
  return puVar18;
}



/* Entry: 109ea8b04; end: 109ea8bbf;  */

void FUN_109ea8b04(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3;
  FUN_109ec85e4(param_3,&UNK_10f60a9f1);
  if ((int)uVar2 == -1) {
    puVar1 = &UNK_10e05d730;
  }
  else {
    puVar1 = *(undefined **)(*(long *)(param_3 + 0x30) + (uVar2 & 0xffffffff) * 0x30);
  }
  lVar5 = *(long *)(param_2 + 0x38);
  FUN_109ec6810();
  uVar2 = (ulong)(byte)puVar1[4];
  func_0x000109ec6c94(uVar2,*(undefined1 *)(param_4 + 0x1c),1,0,0,0);
  *(ulong *)(lVar5 + 0x10) = uVar2;
  *(ulong *)(param_2 + 0x30) = uVar2;
  lVar4 = *(long *)(param_1 + 0x80);
  lVar3 = lVar5;
  (**(code **)(lVar4 + 0x10))(lVar5);
  FUN_109f66e48(lVar4,lVar3,lVar5,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = lVar5;
  }
  return;
}



/* Entry: 109ea8bc0; end: 109ea8c47;  */

undefined8 * FUN_109ea8bc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar1,0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  *(undefined4 *)(puVar1 + 3) = 5;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109ecb048(puVar1,puVar1 + 5,1,0x20);
  puVar1[9] = 0;
  FUN_109ecb4f0(*param_1,param_1[1],puVar1);
  *param_1 = 3;
  param_1[1] = puVar1;
  return puVar1 + 5;
}



/* Entry: 109ea8c48; end: 109ea8eaf;  */

void FUN_109ea8c48(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[3];
  FUN_109ecb0a8(lVar4,0x2d);
  lVar1 = lVar4 + 0x54;
  lVar3 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671ce)[lVar3] * 4 + -4) =
       *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671cd)[lVar3] * 4 + -4) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671cb)[lVar3] * 4 + -4) =
       *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(lVar1 + (ulong)(byte)(&UNK_110b671cc)[lVar3] * 4 + -4) = uVar2;
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return;
}



/* Entry: 109ea8eb0; end: 109ea8ec7;  */

undefined8 FUN_109ea8eb0(void)

{
  return 0;
}



/* Entry: 109ea8ec8; end: 109ea909b;  */

void FUN_109ea8ec8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uStack_48;
  ushort auStack_44 [2];
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x18) == 5)) {
    do {
      auStack_44[0] = 0;
      auStack_44[1] = 0;
      uVar6 = *(ushort *)(param_2 + 0x30);
      bVar3 = *(byte *)(param_1 + 6);
      if ((uVar6 & 0x700) == 0) {
        bVar8 = 0;
      }
      else {
        uVar7 = 0;
        uVar9 = 0;
        do {
          uVar4 = uVar6 >> 6 & 3;
          if (uVar7 != 3) {
            uVar4 = 0;
          }
          uVar2 = uVar6 >> 4 & 3;
          if (uVar7 != 2) {
            uVar2 = uVar4;
          }
          uVar4 = uVar6 >> 2 & 3;
          if (uVar7 != 1) {
            uVar4 = 0;
          }
          uVar1 = uVar6 & 3;
          if (uVar7 != 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar7 < 2) {
            uVar2 = uVar1;
          }
          uVar9 = ((bVar3 & 0xf) >> (ulong)(uVar7 & 0x1f) & 1) << (ulong)uVar2 | uVar9;
          bVar8 = (byte)uVar9;
          FUN_109ea909c(auStack_44,uVar7);
          auStack_44[0] =
               (*(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 0x20) + 0xd) & 7) << 8 |
               auStack_44[0] & 0xf8ff;
          uVar7 = uVar7 + 1;
          uVar6 = *(ushort *)(param_2 + 0x30);
        } while (uVar7 < (uVar6 >> 8 & 7));
      }
      *(byte *)(param_1 + 6) = bVar8 | bVar3 & 0xf0;
      param_2 = *(long *)(param_2 + 0x28);
      puVar5 = param_1;
      FUN_109f658b0(param_1,0x38);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[6] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      func_0x000109eab894();
      param_1[5] = puVar5;
    } while ((param_2 != 0) && (*(int *)(param_2 + 0x18) == 5));
    uVar7 = 0;
    uVar6 = 0;
    uStack_48 = 0;
    bVar3 = *(byte *)(param_1 + 6);
    do {
      if (((bVar3 & 0xf) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        uVar6 = uVar6 + 1;
        FUN_109ea909c(&uStack_48,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    uStack_48 = CONCAT22(uStack_48._2_2_,(ushort)uStack_48 & 0xf8ff | (uVar6 & 7) << 8);
    puVar5 = param_1;
    FUN_109f658b0(param_1,0x38);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    func_0x000109eab894();
    param_1[5] = puVar5;
  }
  param_1[4] = param_2;
  return;
}



/* Entry: 109ea909c; end: 109ea90f3;  */

void FUN_109ea909c(ushort *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = *param_1 & 0xfffc | (ushort)param_2 & 3;
    }
    else {
      if (param_3 != 1) {
        return;
      }
      uVar1 = *param_1 & 0xfff0 | *param_1 & 3 | (ushort)((param_2 & 3) << 2);
    }
  }
  else if (param_3 == 2) {
    uVar1 = *param_1 & 0xffc0 | *param_1 & 0xf | (ushort)((param_2 & 3) << 4);
  }
  else {
    if (param_3 != 3) {
      return;
    }
    uVar1 = *param_1 & 0xff00 | *param_1 & 0x3f | (ushort)((param_2 & 3) << 6);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 109ea90f4; end: 109ea95e7;  */

void FUN_109ea90f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* Entry: 109ea95e8; end: 109ea96a7;  */

void FUN_109ea95e8(undefined8 *param_1,uint param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = &UNK_10e05d730;
  *param_1 = &PTR_FUN_110b64370;
  *(uint *)(param_1 + 5) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = 0;
  if (param_2 == 0xa6) {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar2 = 3;
    if (0xa4 < param_2) {
      uVar2 = 4;
    }
    uVar1 = 2;
    if (0x9f < param_2) {
      uVar1 = uVar2;
    }
    uVar2 = 1;
    if (0x7a < (int)param_2) {
      uVar2 = uVar1;
    }
    *(undefined1 *)(param_1 + 10) = uVar2;
    if (param_2 - 0xa0 < 5) {
      if (param_2 - 0xa0 == 2) {
        puVar3 = *(undefined **)(param_4 + 0x20);
      }
      else {
        puVar3 = *(undefined **)(param_3 + 0x20);
      }
      goto LAB_109ea966c;
    }
  }
  puVar3 = &DAT_10e05dc38;
LAB_109ea966c:
  param_1[4] = puVar3;
  return;
}



/* Entry: 109ea96a8; end: 109ea9757;  */

undefined8 * FUN_109ea96a8(undefined8 *param_1,undefined2 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[4] = &UNK_10e05d730;
  *param_1 = &PTR_DAT_110b63f80;
  param_1[0x15] = 0;
  uVar1 = 3;
  func_0x000109ec6c94(3,param_3,1,0,0,0);
  param_1[4] = uVar1;
  uVar3 = (uint)param_3;
  if (uVar3 != 0) {
    param_3 = param_3 & 0xffffffff;
    puVar2 = param_1 + 5;
    do {
      *(undefined2 *)puVar2 = param_2;
      param_3 = param_3 - 1;
      puVar2 = (undefined8 *)((long)puVar2 + 2);
    } while (param_3 != 0);
    if (0xf < uVar3) {
      return param_1;
    }
  }
  _bzero((long)param_1 + (ulong)(uVar3 << 2) + 0x28,uVar3 * -4 + 0x40);
  return param_1;
}



/* Entry: 109ea9758; end: 109ea98af;  */

undefined8 * FUN_109ea9758(undefined4 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  param_2[4] = &UNK_10e05d730;
  *param_2 = &PTR_DAT_110b63f80;
  param_2[0x15] = 0;
  uVar1 = 2;
  func_0x000109ec6c94(2,param_3,1,0,0,0);
  param_2[4] = uVar1;
  uVar3 = (uint)param_3;
  if (uVar3 != 0) {
    param_3 = param_3 & 0xffffffff;
    puVar2 = param_2 + 5;
    do {
      *(undefined4 *)puVar2 = param_1;
      param_3 = param_3 - 1;
      puVar2 = (undefined8 *)((long)puVar2 + 4);
    } while (param_3 != 0);
    if (0xf < uVar3) {
      return param_2;
    }
  }
  _bzero((long)param_2 + (ulong)(uVar3 << 2) + 0x28,uVar3 * -4 + 0x40);
  return param_2;
}



/* Entry: 109ea98b0; end: 109ea9d6b;  */

undefined8 * FUN_109ea98b0(undefined8 *param_1,undefined4 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[4] = &UNK_10e05d730;
  *param_1 = &PTR_DAT_110b63f80;
  param_1[0x15] = 0;
  uVar1 = 0;
  func_0x000109ec6c94(0,param_3,1,0,0,0);
  param_1[4] = uVar1;
  uVar3 = (uint)param_3;
  if (uVar3 != 0) {
    param_3 = param_3 & 0xffffffff;
    puVar2 = param_1 + 5;
    do {
      *(undefined4 *)puVar2 = param_2;
      param_3 = param_3 - 1;
      puVar2 = (undefined8 *)((long)puVar2 + 4);
    } while (param_3 != 0);
    if (0xf < uVar3) {
      return param_1;
    }
  }
  _bzero((long)param_1 + (ulong)(uVar3 << 2) + 0x28,uVar3 * -4 + 0x40);
  return param_1;
}



/* Entry: 109ea9d6c; end: 109eaa2f7;  */

undefined8 * FUN_109ea9d6c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  *param_1 = &PTR_DAT_110b63f80;
  param_1[0x15] = 0;
  param_1[4] = param_2;
  if ((*(byte *)(param_2 + 4) | 2) == 0x13) {
    puVar9 = param_1;
    FUN_109f658b0(param_1,(ulong)*(uint *)(param_2 + 0x10) << 3);
    param_1[0x15] = puVar9;
    param_3 = (long *)*param_3;
    if (*param_3 != 0) {
      uVar14 = 0;
      do {
        *(long **)(param_1[0x15] + uVar14 * 8) = param_3 + -1;
        uVar14 = (ulong)((int)uVar14 + 1);
        param_3 = (long *)*param_3;
      } while (*param_3 != 0);
    }
  }
  else {
    uVar12 = 0;
    puVar18 = param_1 + 5;
    param_1[6] = 0;
    *puVar18 = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    puVar11 = (undefined8 *)*param_3;
    puVar9 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar9 = puVar11 + -1;
    }
    lVar16 = puVar9[4];
    bVar3 = *(byte *)(lVar16 + 0xd);
    if (((bVar3 == 1) && ((*(byte *)(lVar16 + 4) & 0xf0) == 0)) && (*(long *)*puVar11 == 0)) {
      bVar3 = *(byte *)(param_2 + 0xe);
      bVar4 = *(byte *)(param_2 + 4);
      uVar15 = (uint)bVar4;
      if ((bVar3 < 2) || (2 < uVar15 - 2)) {
        uVar19 = (uint)bVar3;
        if (bVar4 < 7) {
          if (bVar4 < 3) {
            if (bVar4 < 2) {
              if (*(byte *)(param_2 + 0xd) * uVar19 != 0) {
                uVar14 = 0;
                uVar20 = *(undefined4 *)(puVar11 + 4);
                do {
                  *(undefined4 *)((long)puVar18 + uVar14 * 4) = uVar20;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd))
                ;
              }
            }
            else if ((uVar15 == 2) && (*(byte *)(param_2 + 0xd) * uVar19 != 0)) {
              uVar14 = 0;
              uVar20 = *(undefined4 *)(puVar11 + 4);
              do {
                *(undefined4 *)((long)puVar18 + uVar14 * 4) = uVar20;
                uVar14 = uVar14 + 1;
              } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
            }
          }
          else if (uVar15 == 3) {
            if ((uint)*(byte *)(param_2 + 0xd) * (uint)bVar3 != 0) {
              uVar14 = 0;
              uVar8 = *(undefined2 *)(puVar11 + 4);
              do {
                *(undefined2 *)((long)puVar18 + uVar14 * 2) = uVar8;
                uVar14 = uVar14 + 1;
              } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
            }
          }
          else if ((uVar15 == 4) && (*(byte *)(param_2 + 0xd) * uVar19 != 0)) {
            uVar14 = 0;
            uVar12 = puVar11[4];
            do {
              puVar18[uVar14] = uVar12;
              uVar14 = uVar14 + 1;
            } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
          }
        }
        else if (uVar15 == 10 || bVar4 < 10) {
          if (uVar15 - 7 < 2) {
            if (*(byte *)(param_2 + 0xd) * uVar19 != 0) {
              uVar14 = 0;
              uVar8 = *(undefined2 *)(puVar11 + 4);
              do {
                *(undefined2 *)((long)puVar18 + uVar14 * 2) = uVar8;
                uVar14 = uVar14 + 1;
              } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
            }
          }
          else if ((uVar15 - 9 < 2) && (*(byte *)(param_2 + 0xd) * uVar19 != 0)) {
            uVar14 = 0;
            uVar12 = puVar11[4];
            do {
              puVar18[uVar14] = uVar12;
              uVar14 = uVar14 + 1;
            } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
          }
        }
        else if ((uVar15 == 0xf) || (uVar15 == 0xd)) {
          *puVar18 = puVar11[4];
        }
        else if ((uVar15 == 0xb) && (*(byte *)(param_2 + 0xd) * uVar19 != 0)) {
          uVar14 = 0;
          uVar7 = *(undefined1 *)(puVar11 + 4);
          do {
            *(undefined1 *)((long)puVar18 + uVar14) = uVar7;
            uVar14 = uVar14 + 1;
          } while (uVar14 < (ulong)*(byte *)(param_2 + 0xe) * (ulong)*(byte *)(param_2 + 0xd));
        }
      }
      else {
        uVar15 = 0;
        do {
          cVar6 = *(char *)(param_2 + 4);
          if (cVar6 == '\x04') {
            puVar18[uVar15 + uVar15 * *(byte *)(param_2 + 0xd)] = puVar11[4];
          }
          else if (cVar6 == '\x03') {
            *(undefined2 *)((long)puVar18 + (ulong)(uVar15 + uVar15 * *(byte *)(param_2 + 0xd)) * 2)
                 = *(undefined2 *)(puVar11 + 4);
          }
          else if (cVar6 == '\x02') {
            *(undefined4 *)((long)puVar18 + (ulong)(uVar15 + uVar15 * *(byte *)(param_2 + 0xd)) * 4)
                 = *(undefined4 *)(puVar11 + 4);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(byte *)(param_2 + 0xe));
      }
    }
    else {
      bVar4 = *(byte *)(param_2 + 0xe);
      uVar15 = (uint)bVar4;
      if (((bVar4 < 2) || (2 < *(byte *)(param_2 + 4) - 2)) ||
         ((bVar5 = *(byte *)(lVar16 + 0xe), bVar5 < 2 || (2 < *(byte *)(lVar16 + 4) - 2)))) {
        uVar19 = 0;
        puVar9 = puVar11 + -1;
LAB_109ea9f3c:
        if ((uint)*(byte *)(puVar9[4] + 0xe) * (uint)*(byte *)(puVar9[4] + 0xd) == 0) {
          uVar10 = uVar15 * *(byte *)(param_2 + 0xd);
        }
        else {
          uVar2 = 0;
          do {
            uVar13 = uVar2;
            uVar2 = uVar19 + uVar13;
            puVar11 = puVar9;
            switch(*(undefined1 *)(param_2 + 4)) {
            case 0:
              func_0x000109eaa478(puVar9,uVar13);
              uVar20 = SUB84(puVar11,0);
              goto code_r0x000109ea9fb8;
            case 1:
              func_0x000109eaa544(puVar9,uVar13);
              uVar20 = SUB84(puVar11,0);
code_r0x000109ea9fb8:
              *(undefined4 *)((long)puVar18 + (ulong)uVar2 * 4) = uVar20;
              break;
            case 2:
              func_0x000109eaa610(puVar9,uVar13);
              *(int *)((long)puVar18 + (ulong)uVar2 * 4) = (int)uVar12;
              break;
            case 3:
              FUN_109eaa710(puVar9,uVar13);
              uVar8 = SUB82(puVar11,0);
              goto code_r0x000109ea9fec;
            case 4:
              func_0x000109eaa810(puVar9,uVar13);
              puVar18[uVar2] = uVar12;
              break;
            case 7:
              func_0x000109eaa2f8(puVar9,uVar13);
              uVar8 = SUB82(puVar11,0);
              goto code_r0x000109ea9fec;
            case 8:
              func_0x000109eaa3b8(puVar9,uVar13);
              uVar8 = SUB82(puVar11,0);
code_r0x000109ea9fec:
              *(undefined2 *)((long)puVar18 + (ulong)uVar2 * 2) = uVar8;
              break;
            case 9:
              func_0x000109eaa908(puVar9,uVar13);
              goto code_r0x000109eaa028;
            case 10:
              func_0x000109eaa9e4(puVar9,uVar13);
code_r0x000109eaa028:
              puVar18[uVar2] = puVar11;
              break;
            case 0xb:
              FUN_109eaa740(puVar9,uVar13);
              *(char *)((long)puVar18 + (ulong)uVar2) = (char)puVar11;
            }
            uVar15 = (uint)*(byte *)(param_2 + 0xe);
            uVar10 = (uint)*(byte *)(param_2 + 0xe) * (uint)*(byte *)(param_2 + 0xd);
          } while ((uVar2 + 1 < uVar10) &&
                  (uVar2 = uVar13 + 1,
                  uVar13 + 1 < (uint)*(byte *)(puVar9[4] + 0xe) * (uint)*(byte *)(puVar9[4] + 0xd)))
          ;
          uVar19 = uVar19 + uVar13 + 1;
        }
        if (uVar19 < uVar10) {
          plVar1 = puVar9 + 1;
          puVar9 = (undefined8 *)0x0;
          if (*plVar1 != 0) {
            puVar9 = (undefined8 *)(*plVar1 + -8);
          }
          goto LAB_109ea9f3c;
        }
      }
      else {
        lVar16 = 0;
        if (bVar5 <= bVar4) {
          bVar4 = bVar5;
        }
        uVar15 = (uint)bVar4;
        bVar5 = *(byte *)(param_2 + 0xd);
        bVar4 = bVar5;
        if (bVar3 <= bVar5) {
          bVar4 = bVar3;
        }
        if (bVar5 <= bVar3) {
          bVar3 = bVar5;
        }
        do {
          if (bVar4 != 0) {
            lVar17 = 0;
            do {
              *(undefined4 *)
               ((long)puVar18 + (lVar17 + lVar16 * (ulong)*(byte *)(param_2 + 0xd)) * 4) =
                   *(undefined4 *)
                    ((long)puVar11 +
                    (lVar17 + lVar16 * (ulong)*(byte *)(puVar9[4] + 0xd)) * 4 + 0x20);
              lVar17 = lVar17 + 1;
            } while ((uint)bVar3 != (uint)lVar17);
          }
          lVar16 = lVar16 + 1;
        } while ((uint)lVar16 != uVar15);
        if (uVar15 < *(byte *)(param_2 + 0xe)) {
          do {
            *(undefined4 *)((long)puVar18 + (ulong)(uVar15 + uVar15 * *(byte *)(param_2 + 0xd)) * 4)
                 = 0x3f800000;
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(byte *)(param_2 + 0xe));
        }
      }
    }
  }
  return param_1;
}



/* Entry: 109eaa2f8; end: 109eaa70f;  */

uint FUN_109eaa2f8(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  switch(*(undefined1 *)(*(long *)(param_1 + 0x20) + 4)) {
  case 0:
  case 1:
    lVar1 = (ulong)param_2 * 4;
    goto code_r0x000109eaa330;
  case 2:
    fVar3 = *(float *)(param_1 + (ulong)param_2 * 4 + 0x28);
    goto code_r0x000109eaa39c;
  case 3:
    uVar2 = (uint)*(short *)(param_1 + (ulong)param_2 * 2 + 0x28);
    fVar3 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar3) {
      fVar3 = (float)((uint)fVar3 | 0x7f800000);
    }
    fVar3 = (float)((uint)fVar3 | uVar2 & 0x80000000);
code_r0x000109eaa39c:
    uVar2 = (uint)fVar3;
    break;
  case 4:
    uVar2 = (uint)*(double *)(param_1 + (ulong)param_2 * 8 + 0x28);
    break;
  case 7:
  case 8:
    uVar2 = (uint)*(ushort *)(param_1 + (ulong)param_2 * 2 + 0x28);
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xf:
    lVar1 = (ulong)param_2 * 8;
code_r0x000109eaa330:
    uVar2 = *(uint *)(param_1 + lVar1 + 0x28);
    break;
  case 0xb:
    uVar2 = (uint)*(byte *)(param_1 + (ulong)param_2 + 0x28);
  }
  return uVar2 & 0xffff;
}



/* Entry: 109eaa710; end: 109eaa73f;  */

uint FUN_109eaa710(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(*(long *)(param_2 + 0x20) + 4) == '\x03') {
    return (uint)*(ushort *)(param_2 + (ulong)param_3 * 2 + 0x28);
  }
  func_0x000109eaa610();
  uVar3 = (uint)param_1 & 0x7fffff;
  uVar1 = (uint)param_1 >> 0x17 & 0xff;
  if (uVar1 == 0 && uVar3 == 0) {
    uVar3 = 0;
    iVar2 = 0;
    goto LAB_109f64b8c;
  }
  if ((uVar3 != 0) && (uVar1 == 0)) {
    uVar3 = 0;
    iVar2 = 0;
    goto LAB_109f64b8c;
  }
  if ((uVar3 == 0) && (uVar1 == 0xff)) {
LAB_109f64b64:
    uVar3 = 0;
  }
  else {
    if ((uVar3 == 0) || (uVar1 != 0xff)) {
      iVar2 = uVar1 - 0x70;
      if (uVar1 < 0x70 || iVar2 == 0) {
        iVar2 = 0;
        uVar3 = (uint)(long)(float)(int)(ABS(param_1) * 16777216.0);
        goto LAB_109f64b8c;
      }
      if (uVar1 < 0x8f) {
        uVar3 = (uint)(long)(float)(int)((float)uVar3 / 8192.0);
        goto LAB_109f64b8c;
      }
      goto LAB_109f64b64;
    }
    if (uVar3 < 0x2001) {
      uVar3 = 0x2000;
    }
    uVar3 = uVar3 >> 0xd;
  }
  iVar2 = 0x1f;
LAB_109f64b8c:
  if (uVar3 == 0x400) {
    iVar2 = iVar2 + 1;
    uVar3 = 0;
  }
  return (uVar3 | ((uint)param_1 >> 0x1f) << 0xf | iVar2 << 10) & 0xffff;
}



/* Entry: 109eaa740; end: 109eaaabf;  */

byte FUN_109eaa740(long param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  
  bVar2 = 0;
  switch(*(undefined1 *)(*(long *)(param_1 + 0x20) + 4)) {
  case 0:
  case 1:
    uVar3 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x28);
    break;
  case 2:
    fVar4 = *(float *)(param_1 + (ulong)param_2 * 4 + 0x28);
    goto code_r0x000109eaa7ec;
  case 3:
    uVar3 = (uint)*(short *)(param_1 + (ulong)param_2 * 2 + 0x28);
    fVar4 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar4) {
      fVar4 = (float)((uint)fVar4 | 0x7f800000);
    }
    fVar4 = (float)((uint)fVar4 | uVar3 & 0x80000000);
code_r0x000109eaa7ec:
    uVar3 = (uint)fVar4;
    break;
  case 4:
    bVar1 = *(double *)(param_1 + (ulong)param_2 * 8 + 0x28) == 0.0;
    goto code_r0x000109eaa7f4;
  default:
    goto LAB_109eaa7f8;
  case 7:
  case 8:
    uVar3 = (uint)*(ushort *)(param_1 + (ulong)param_2 * 2 + 0x28);
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xf:
    bVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x28) == 0;
    goto code_r0x000109eaa7f4;
  case 0xb:
    bVar2 = *(byte *)(param_1 + (ulong)param_2 + 0x28);
    goto LAB_109eaa7f8;
  }
  bVar1 = uVar3 == 0;
code_r0x000109eaa7f4:
  bVar2 = !bVar1;
LAB_109eaa7f8:
  return bVar2 & 1;
}



/* Entry: 109eaaac0; end: 109eaac0f;  */

undefined8 * FUN_109eaaac0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = param_1;
  FUN_109f658b0(param_1,0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 3;
  *puVar2 = &PTR_DAT_110b63f80;
  puVar2[0x15] = 0;
  puVar2[4] = param_2;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  if (*(char *)(param_2 + 4) == '\x13') {
    puVar3 = puVar2;
    FUN_109f658b0(puVar2,(ulong)*(uint *)(param_2 + 0x10) << 3);
    iVar1 = *(int *)(param_2 + 0x10);
    puVar2[0x15] = puVar3;
    if (iVar1 != 0) {
      uVar4 = 0;
      do {
        puVar3 = puVar2;
        FUN_109eaaac0(puVar2,*(undefined8 *)(param_2 + 0x30));
        *(undefined8 **)(puVar2[0x15] + uVar4 * 8) = puVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 0x10));
    }
  }
  if (*(char *)(param_2 + 4) == '\x11') {
    puVar3 = puVar2;
    FUN_109f658b0(puVar2,(ulong)*(uint *)(param_2 + 0x10) << 3);
    iVar1 = *(int *)(param_2 + 0x10);
    puVar2[0x15] = puVar3;
    if (iVar1 != 0) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        puVar3 = param_1;
        FUN_109eaaac0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar5));
        *(undefined8 **)(puVar2[0x15] + uVar4 * 8) = puVar3;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x30;
      } while (uVar4 < *(uint *)(param_2 + 0x10));
    }
  }
  return puVar2;
}



/* Entry: 109eaac10; end: 109eaadc7;  */

void FUN_109eaac10(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = (undefined4)param_1;
  lVar7 = *(long *)(param_2 + 0x20);
  if (*(byte *)(lVar7 + 4) < 0x14) {
    uVar1 = 1 << (ulong)(*(byte *)(lVar7 + 4) & 0x1f);
    if ((uVar1 & 0xaf9f) == 0) {
      if (((uVar1 & 0xa0000) != 0) && (*(int *)(lVar7 + 0x10) != 0)) {
        uVar8 = 0;
        do {
          plVar5 = *(long **)(*(long *)(param_3 + 0xa8) + uVar8 * 8);
          (**(code **)(*plVar5 + 0x20))(plVar5,param_2,0);
          *(long **)(*(long *)(param_2 + 0xa8) + uVar8 * 8) = plVar5;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(*(long *)(param_2 + 0x20) + 0x10));
      }
    }
    else {
      uVar1 = (uint)*(byte *)(*(long *)(param_3 + 0x20) + 0xe) *
              (uint)*(byte *)(*(long *)(param_3 + 0x20) + 0xd);
      uVar8 = (ulong)uVar1;
      if (uVar1 != 0) {
        iVar6 = 0;
        param_2 = param_2 + 0x28;
        do {
          lVar4 = param_3;
          switch(*(undefined1 *)(lVar7 + 4)) {
          case 0:
            func_0x000109eaa478(param_3,iVar6);
            uVar3 = (undefined4)lVar4;
            goto code_r0x000109eaad10;
          case 1:
            func_0x000109eaa544(param_3,iVar6);
            uVar3 = (undefined4)lVar4;
code_r0x000109eaad10:
            *(undefined4 *)(param_2 + (ulong)param_4 * 4) = uVar3;
            break;
          case 2:
            func_0x000109eaa610(param_3,iVar6);
            *(undefined4 *)(param_2 + (ulong)param_4 * 4) = uVar9;
            break;
          case 3:
            FUN_109eaa710(param_3,iVar6);
            uVar2 = (undefined2)lVar4;
            goto code_r0x000109eaad34;
          case 4:
            func_0x000109eaa810(param_3,iVar6);
            *(ulong *)(param_2 + (ulong)param_4 * 8) = CONCAT44(uVar10,uVar9);
            break;
          case 7:
            func_0x000109eaa2f8(param_3,iVar6);
            uVar2 = (undefined2)lVar4;
            goto code_r0x000109eaad34;
          case 8:
            func_0x000109eaa3b8(param_3,iVar6);
            uVar2 = (undefined2)lVar4;
code_r0x000109eaad34:
            *(undefined2 *)(param_2 + (ulong)param_4 * 2) = uVar2;
            break;
          case 9:
          case 0xd:
          case 0xf:
            func_0x000109eaa908(param_3,iVar6);
            goto code_r0x000109eaacb4;
          case 10:
            func_0x000109eaa9e4(param_3,iVar6);
code_r0x000109eaacb4:
            *(long *)(param_2 + (ulong)param_4 * 8) = lVar4;
            break;
          case 0xb:
            func_0x000109eaa740(param_3,iVar6);
            *(char *)(param_2 + (ulong)param_4) = (char)lVar4;
          }
          param_4 = param_4 + 1;
          iVar6 = iVar6 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}



/* Entry: 109eaadc8; end: 109eaaf87;  */

void FUN_109eaadc8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,uint param_5)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulong)param_1 >> 0x20);
  uVar12 = (undefined4)param_1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (*(byte *)(lVar6 + 0xd) < 2 || *(byte *)(lVar6 + 0xe) != 1) {
    if (*(byte *)(lVar6 + 0xe) < 2) {
      uVar7 = 0;
      param_5 = 1;
      goto LAB_109eaae40;
    }
    bVar1 = 2 < (*(uint *)(lVar6 + 4) & 0xff) - 2;
  }
  else {
    bVar1 = 0xb < (*(uint *)(lVar6 + 4) & 0xfc);
  }
  if (bVar1) {
    param_4 = 0;
  }
  uVar7 = (ulong)param_4;
  if (bVar1) {
    param_5 = 1;
  }
LAB_109eaae40:
  lVar8 = 0;
  iVar5 = 0;
  lVar6 = (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3) + 0x28;
  lVar9 = (long)(int)uVar7 + 0x28;
  lVar10 = (-(uVar7 >> 0x1f) & 0xfffffffe00000000 | uVar7 << 1) + 0x28;
  lVar11 = (-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2) + 0x28;
  do {
    if ((param_5 >> (ulong)((uint)lVar8 & 0x1f) & 1) == 0) goto LAB_109eaaf50;
    uVar4 = param_3;
    switch(*(undefined1 *)(*(long *)(param_2 + 0x20) + 4)) {
    case 0:
      func_0x000109eaa478();
      uVar3 = (undefined4)uVar4;
      goto code_r0x000109eaaf0c;
    case 1:
      func_0x000109eaa544();
      uVar3 = (undefined4)uVar4;
code_r0x000109eaaf0c:
      *(undefined4 *)(param_2 + lVar11) = uVar3;
      break;
    case 2:
      func_0x000109eaa610(param_3);
      *(undefined4 *)(param_2 + lVar11) = uVar12;
      break;
    case 3:
      FUN_109eaa710();
      uVar2 = (undefined2)uVar4;
      goto code_r0x000109eaaf20;
    case 4:
      func_0x000109eaa810(param_3);
      *(ulong *)(param_2 + lVar6) = CONCAT44(uVar13,uVar12);
      break;
    default:
      goto LAB_109eaaf6c;
    case 7:
      func_0x000109eaa2f8();
      uVar2 = (undefined2)uVar4;
      goto code_r0x000109eaaf20;
    case 8:
      func_0x000109eaa3b8();
      uVar2 = (undefined2)uVar4;
code_r0x000109eaaf20:
      *(undefined2 *)(param_2 + lVar10) = uVar2;
      break;
    case 9:
    case 0xd:
    case 0xf:
      func_0x000109eaa908();
      goto code_r0x000109eaaf48;
    case 10:
      func_0x000109eaa9e4();
code_r0x000109eaaf48:
      *(undefined8 *)(param_2 + lVar6) = uVar4;
      break;
    case 0xb:
      func_0x000109eaa740(param_3,iVar5);
      *(char *)(param_2 + lVar9) = (char)uVar4;
    }
    iVar5 = iVar5 + 1;
LAB_109eaaf50:
    lVar8 = lVar8 + 1;
    lVar6 = lVar6 + 8;
    lVar9 = lVar9 + 1;
    lVar10 = lVar10 + 2;
    lVar11 = lVar11 + 4;
  } while (lVar8 != 4);
LAB_109eaaf6c:
  return;
}



/* Entry: 109eaaf88; end: 109eab16b;  */

undefined8 FUN_109eaaf88(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != *(long *)(param_2 + 0x20)) {
    return 0;
  }
  uVar1 = *(uint *)(lVar6 + 4);
  if ((uVar1 & 0xff | 2) == 0x13) {
    uVar5 = (ulong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0xa8);
      puVar10 = *(undefined8 **)(param_2 + 0xa8);
      do {
        uVar5 = uVar5 - 1;
        uVar2 = *puVar9;
        FUN_109eaaf88(uVar2,*puVar10);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar5 != 0);
      return uVar2;
    }
  }
  else {
    if ((uint)*(byte *)(lVar6 + 0xe) * (uint)*(byte *)(lVar6 + 0xd) == 0) {
      return 1;
    }
    if (0xf < (uVar1 & 0xff) || (1 << (ulong)(uVar1 & 0x1f) & 0xaf9fU) == 0) {
      return 0;
    }
    lVar7 = 0;
    lVar8 = 0;
    uVar5 = 0;
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      switch(uVar1 & 0xff) {
      case 0:
      case 1:
        uVar3 = *(uint *)(param_1 + lVar7);
        uVar4 = *(uint *)(param_2 + lVar7);
        goto code_r0x000109eab10c;
      case 2:
        fVar11 = *(float *)(param_1 + lVar7);
        fVar12 = *(float *)(param_2 + lVar7);
        goto code_r0x000109eab120;
      case 3:
        uVar3 = (uint)*(short *)(param_1 + uVar5 * 2);
        fVar11 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar11) {
          fVar11 = (float)((uint)fVar11 | 0x7f800000);
        }
        fVar11 = (float)((uint)fVar11 | uVar3 & 0x80000000);
        uVar3 = (uint)*(short *)(param_2 + uVar5 * 2);
        fVar12 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar12) {
          fVar12 = (float)((uint)fVar12 | 0x7f800000);
        }
        fVar12 = (float)((uint)fVar12 | uVar3 & 0x80000000);
code_r0x000109eab120:
        if (fVar11 != fVar12) {
          return 0;
        }
        break;
      case 4:
        if (*(double *)(param_1 + lVar8) != *(double *)(param_2 + lVar8)) {
          return 0;
        }
        break;
      default:
        if (*(long *)(param_1 + lVar8) != *(long *)(param_2 + lVar8)) {
          return 0;
        }
        break;
      case 7:
      case 8:
        uVar3 = (uint)*(ushort *)(param_1 + uVar5 * 2);
        uVar4 = (uint)*(ushort *)(param_2 + uVar5 * 2);
        goto code_r0x000109eab10c;
      case 0xb:
        uVar3 = (uint)*(byte *)(param_1 + uVar5);
        uVar4 = (uint)*(byte *)(param_2 + uVar5);
code_r0x000109eab10c:
        if (uVar3 != uVar4) {
          return 0;
        }
      }
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 8;
      lVar7 = lVar7 + 4;
    } while (uVar5 < (ulong)(uint)*(byte *)(lVar6 + 0xe) * (ulong)(uint)*(byte *)(lVar6 + 0xd));
  }
  return 1;
}



/* Entry: 109eab16c; end: 109eab363;  */

undefined8 FUN_109eab16c(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_2 + 0x20);
  bVar2 = *(byte *)(lVar4 + 0xd);
  if (bVar2 != 0) {
    if (bVar2 == 1) {
      uVar3 = *(uint *)(lVar4 + 4);
      if ((uVar3 & 0xf0) != 0) {
        return 0;
      }
    }
    else {
      if (*(char *)(lVar4 + 0xe) != '\x01') {
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 4);
      if (0xb < (uVar3 & 0xfc)) {
        return 0;
      }
    }
    uVar1 = uVar3 & 0xff;
    if (((param_3 < 2) || (uVar1 != 0xb)) &&
       (uVar1 < 0x10 && (1 << (ulong)(uVar3 & 0x1f) & 0xaf9fU) != 0)) {
      lVar5 = 0;
      lVar4 = 0;
      uVar6 = 0;
      param_2 = param_2 + 0x28;
      do {
        switch(uVar1) {
        case 0:
        case 1:
          if (*(uint *)(param_2 + lVar5) != param_3) {
            return 0;
          }
          break;
        case 2:
          fVar7 = *(float *)(param_2 + lVar5);
          goto joined_r0x000109eab2a0;
        case 3:
          uVar3 = (uint)*(short *)(param_2 + uVar6 * 2);
          fVar7 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar7) {
            fVar7 = (float)((uint)fVar7 | 0x7f800000);
          }
          fVar7 = (float)((uint)fVar7 | uVar3 & 0x80000000);
joined_r0x000109eab2a0:
          if (param_1 != fVar7) {
            return 0;
          }
          break;
        case 4:
          if (*(double *)(param_2 + lVar4) != (double)param_1) {
            return 0;
          }
          break;
        default:
          if (*(long *)(param_2 + lVar4) != (long)(int)param_3) {
            return 0;
          }
          break;
        case 7:
          if ((uint)*(ushort *)(param_2 + uVar6 * 2) != (param_3 & 0xffff)) {
            return 0;
          }
          break;
        case 8:
          if ((short)param_3 != *(short *)(param_2 + uVar6 * 2)) {
            return 0;
          }
          break;
        case 0xb:
          if ((bool)*(char *)(param_2 + uVar6) != (param_3 != 0)) {
            return 0;
          }
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + 4;
        if (bVar2 <= uVar6) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109eab364; end: 109eab47f;  */

void FUN_109eab364(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x28) = param_2;
  lVar2 = *(long *)(param_2 + 0x20);
  bVar1 = *(byte *)(lVar2 + 4);
  if (bVar1 == 0x13) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else if (*(byte *)(lVar2 + 0xe) < 2 || 2 < bVar1 - 2) {
    if ((*(byte *)(lVar2 + 0xe) != 1 || *(byte *)(lVar2 + 0xd) < 2) || 0xb < (bVar1 & 0xfc)) {
      return;
    }
    FUN_109ec6810();
  }
  else {
    func_0x000109ec8580();
  }
  *(long *)(param_1 + 0x20) = lVar2;
  return;
}



/* Entry: 109eab480; end: 109eab613;  */

undefined8 * FUN_109eab480(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = &UNK_10e05d730;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = &PTR_DAT_110b64158;
  param_1[4] = &UNK_10e05d730;
  param_1[5] = param_2;
  uVar3 = *(ulong *)(param_2 + 0x20);
  uVar1 = uVar3;
  FUN_109ec85e4(uVar3,param_3);
  if ((int)uVar1 != -1) {
    puVar4 = *(undefined **)(*(long *)(uVar3 + 0x30) + (uVar1 & 0xffffffff) * 0x30);
  }
  param_1[4] = puVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_109ec85e4(uVar2,param_3);
  *(int *)(param_1 + 6) = (int)uVar2;
  return param_1;
}



/* Entry: 109eab614; end: 109eab907;  */

void FUN_109eab614(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x40))();
  if ((plVar1 != (long *)0x0) && ((*(byte *)(plVar1 + 8) & 1) == 0)) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x2f7) & 1) != 0)) {
      uVar3 = param_1[4];
      uVar2 = uVar3;
      FUN_109ec64b4();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uVar2 = uVar3;
      func_0x000109ec6798();
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    else {
      uVar3 = param_1[4];
    }
    func_0x000109ec6694(uVar3);
  }
  return;
}



/* Entry: 109eab908; end: 109eaba6b;  */

long * FUN_109eab908(long param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x0;
  if (param_1 != 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plVar4 = plVar5;
  if (0xe5 < (byte)(*param_2 + 0x85U)) {
    uVar6 = 0;
    bVar1 = (&UNK_10e06b9c0)[(byte)(*param_2 + 0x9f)];
    do {
      bVar2 = param_2[uVar6];
      if (bVar2 == 0) break;
      if ((byte)(bVar2 + 0x85) < 0xe6) goto LAB_109eab9d0;
      iVar3 = (uint)(byte)(&UNK_10e06b9da)[(ulong)(bVar2 - 0x61) & 0xff] - (uint)bVar1;
      *(int *)((long)&uStack_60 + uVar6 * 4) = iVar3;
      plVar7 = (long *)0x0;
      if ((iVar3 < 0) || (param_3 <= iVar3)) goto LAB_109eab9d4;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 4);
    if (param_2[uVar6 & 0xffffffff] == '\0') {
      FUN_109f658b0(plVar5,0x38);
      if (plVar5 != (long *)0x0) {
        plVar5[6] = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
      }
      plVar5[1] = 0;
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 3) = 5;
      *plVar5 = (long)&PTR_DAT_110b641e0;
      plVar5[4] = (long)&UNK_10e05d730;
      plVar5[5] = param_1;
      uStack_48 = uStack_58;
      uStack_50 = uStack_60;
      plVar4 = plVar5;
      func_0x000109eab760(plVar5,&uStack_50,uVar6);
      plVar7 = plVar5;
      goto LAB_109eab9d4;
    }
  }
LAB_109eab9d0:
  plVar7 = (long *)0x0;
LAB_109eab9d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    __Unwind_Resume();
    plVar5 = (long *)plVar4[5];
                    /* WARNING: Could not recover jumptable at 0x000109eaba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x40))();
    return plVar5;
  }
  return plVar7;
}



/* Entry: 109eaba6c; end: 109eaba7b;  */

void FUN_109eaba6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109eaba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x40))();
  return;
}



/* Entry: 109eaba7c; end: 109eabbe3;  */

undefined8 * FUN_109eaba7c(undefined8 *param_1,long param_2,undefined *param_3,uint param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 7;
  *param_1 = &PTR_DAT_110b64260;
  param_1[4] = param_2;
  puVar2 = param_3;
  if (cRam000000011383472c == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (param_4 == 0xb) {
    puVar3 = (undefined8 *)&UNK_10e06b9f4;
    param_3 = puVar2;
    if (puVar2 == (undefined *)0x0 || puVar2 == &UNK_10e06b9f4) goto LAB_109eabb20;
LAB_109eabaec:
    puVar2 = param_3;
    _strlen();
    if ((undefined *)0xf < puVar2) {
      puVar3 = param_1;
      FUN_109f65c2c(param_1,param_3);
      goto LAB_109eabb20;
    }
  }
  else {
    if (param_3 != (undefined *)0x0) goto LAB_109eabaec;
    param_3 = &DAT_10f6147d9;
  }
  puVar3 = param_1 + 6;
  _strcpy(puVar3,param_3);
LAB_109eabb20:
  param_1[5] = puVar3;
  *(undefined1 *)((long)param_1 + 0x47) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar4 = 0x600;
  if (param_4 != 0xb) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 8) = uVar4 | (param_4 & 0xf) << 0xb;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(byte *)((long)param_1 + 0x46) = *(byte *)((long)param_1 + 0x46) & 0xf8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 != '\x12') {
    lVar5 = param_2;
    if (cVar1 == '\x13') {
      do {
        cVar1 = *(char *)(*(long *)(lVar5 + 0x30) + 4);
        lVar5 = *(long *)(lVar5 + 0x30);
      } while (cVar1 == '\x13');
      if (cVar1 != '\x12') {
        return param_1;
      }
      do {
        param_2 = *(long *)(param_2 + 0x30);
      } while (*(char *)(param_2 + 4) == '\x13');
    }
    else if (cVar1 != '\x12') {
      return param_1;
    }
  }
  FUN_109e232ac(param_1,param_2);
  return param_1;
}



/* Entry: 109eabbe4; end: 109eabc7f;  */

long FUN_109eabbe4(long param_1,long *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = *(long **)(param_1 + 0x28);
  plVar7 = (long *)*param_2;
  while( true ) {
    plVar6 = plVar5;
    if ((long *)*plVar6 == (long *)0x0 || (long *)*plVar7 == (long *)0x0) {
      return 0;
    }
    uVar2 = *(uint *)(plVar7 + 7) ^ *(uint *)(plVar6 + 7);
    if ((uVar2 & 1) != 0) break;
    uVar3 = *(uint *)(plVar6 + 7) >> 0xb & 0xf;
    uVar4 = *(uint *)(plVar7 + 7) >> 0xb & 0xf;
    if ((uVar3 == uVar4) || (uVar3 == 9 && uVar4 == 6)) {
      if ((uVar2 & 0x18000) != 0) break;
    }
    else if (((uVar2 & 0x18000) != 0 || uVar3 != 6) || uVar4 != 9) break;
    if (((uVar2 & 0xe) != 0) ||
       (puVar1 = (ushort *)((long)plVar7 + 0x3c), plVar5 = (long *)*plVar6, plVar7 = (long *)*plVar7
       , ((*puVar1 ^ *(ushort *)((long)plVar6 + 0x3c)) & 0x1f00) != 0)) break;
  }
  return plVar6[4];
}



/* Entry: 109eabc80; end: 109eabce7;  */

void FUN_109eabc80(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(((undefined8 *)*param_1)[-1] + 0x10))();
    while (lVar2 != 0) {
      plVar3 = (long *)*plVar1;
      lVar2 = *plVar3;
      (**(code **)(plVar1[-1] + 0x10))(plVar1 + -1,param_2);
      plVar1 = plVar3;
    }
  }
  return;
}



/* Entry: 109eabce8; end: 109eabdbb;  */

undefined * FUN_109eabce8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f614879;
  switch(*(uint *)(param_1 + 0x40) >> 0xb & 0xf) {
  case 0:
    puVar1 = &UNK_10f614869;
    if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
      puVar1 = &UNK_10f614859;
    }
    return puVar1;
  case 1:
    goto code_r0x000109eabd90;
  case 2:
    return &UNK_10f614881;
  default:
    puVar1 = &UNK_10f6148e4;
code_r0x000109eabd90:
    return puVar1;
  case 4:
  case 10:
    return &UNK_10f614888;
  case 5:
    return &UNK_10f614895;
  case 6:
  case 9:
    return &UNK_10f6148a3;
  case 7:
    return &UNK_10f6148b2;
  case 8:
    return &UNK_10f6148c2;
  case 0xb:
    return &UNK_10f6148d1;
  }
}



/* Entry: 109eabdbc; end: 109eabf1b;  */

void FUN_109eabdbc(undefined8 *param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  if (*plVar4 != 0) {
    plVar5 = (long *)0x0;
    do {
      plVar2 = plVar4 + -1;
      plVar3 = plVar2;
      if (plVar5 != (long *)0x0) {
        plVar3 = plVar5;
      }
      iVar1 = (int)plVar4[2];
      if (iVar1 < 0xd) {
        if (iVar1 == 9) goto LAB_109eabe88;
        if (iVar1 == 10) {
          for (plVar5 = (long *)plVar4[4]; *plVar5 != 0; plVar5 = (long *)*plVar5) {
            FUN_109eabdbc(plVar5 + 9,UNRECOVERED_JUMPTABLE,param_3);
          }
        }
        else if (iVar1 == 0xc) {
          (*UNRECOVERED_JUMPTABLE)(plVar3,plVar2,param_3);
          FUN_109eabdbc(plVar4 + 4,UNRECOVERED_JUMPTABLE,param_3);
          plVar5 = plVar4 + 8;
          goto LAB_109eabe78;
        }
      }
      else {
        if (iVar1 - 0xeU < 3) {
LAB_109eabe88:
          (*UNRECOVERED_JUMPTABLE)(plVar3,plVar2,param_3);
        }
        else {
          if (iVar1 != 0xd) goto LAB_109eabea4;
          (*UNRECOVERED_JUMPTABLE)(plVar3,plVar2,param_3);
          plVar5 = plVar4 + 3;
LAB_109eabe78:
          FUN_109eabdbc(plVar5,UNRECOVERED_JUMPTABLE,param_3);
        }
        plVar3 = (long *)0x0;
      }
LAB_109eabea4:
      plVar4 = (long *)*plVar4;
      plVar5 = plVar3;
    } while (*plVar4 != 0);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109eabf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar3,plVar2,param_3);
      return;
    }
  }
  return;
}



/* Entry: 109eabf1c; end: 109eac02b;  */

void FUN_109eabf1c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)param_1[1];
  FUN_109f658b0(puVar2,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  lVar3 = *param_1;
  puVar2[1] = lVar3 + 0x10;
  plVar1 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = puVar2 + 1;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x18);
  puVar2[2] = puVar4;
  *puVar4 = plVar1;
  *(long **)(lVar3 + 0x18) = plVar1;
  return;
}



/* Entry: 109eac02c; end: 109eac08f;  */

void FUN_109eac02c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar1 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0xf;
  *puVar1 = &PTR_DAT_110b63a60;
  puVar1[4] = param_1;
  return;
}



/* Entry: 109eac090; end: 109eac18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109eac090(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  undefined1 uVar13;
  int *piVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 **ppuVar18;
  code *pcVar19;
  int aiStack_a0 [6];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  uVar10 = (uint)&uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar7 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar7,0x38);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 5;
  *puVar7 = &PTR_DAT_110b641e0;
  puVar7[4] = &UNK_10e05d730;
  puVar7[5] = param_1;
  uVar16 = (undefined4)param_2;
  auVar17._4_4_ = uVar16;
  auVar17._0_4_ = uVar16;
  auVar17._8_4_ = uVar16;
  auVar17._12_4_ = uVar16;
  auVar17 = NEON_ushl(auVar17,_UNK_10e061c50,4);
  uStack_50 = (ulong)(CONCAT14((char)(param_2 >> 3),(uint)((byte)param_2 & 7)) & 0x7ffffffff);
  uStack_48 = (ulong)(CONCAT14(auVar17[4],(uint)(auVar17[0] & 7)) & 0x700ffffff);
  puVar8 = puVar7;
  func_0x000109eab760(puVar7,&uStack_50,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  piVar11 = aiStack_a0;
  pcStack_58 = FUN_109eac18c;
  ppuVar18 = &puStack_60;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    if (puVar8[-6] != 0) {
      puVar9 = (undefined8 *)(puVar8[-6] + 0x30);
    }
  }
  bVar4 = *(byte *)(puVar8[4] + 0xd);
  uVar2 = (uint)bVar4;
  if (uVar10 <= bVar4) {
    uVar2 = uVar10;
  }
  uVar15 = (ulong)uVar2;
  aiStack_a0[2] = 2;
  aiStack_a0[3] = 3;
  aiStack_a0[0] = 0;
  aiStack_a0[1] = 1;
  lStack_80 = param_1;
  uStack_78 = param_2;
  puStack_70 = puVar7;
  uStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar2 < 4) {
    uVar3 = (ulong)bVar4;
    if ((ulong)uVar10 <= (ulong)bVar4) {
      uVar3 = (ulong)uVar10;
    }
    lVar12 = uVar3 - (((int)uVar3 - uVar2) + 4);
    piVar14 = aiStack_a0 + uVar3;
    do {
      *piVar14 = uVar2 - 1;
      bVar5 = lVar12 != -1;
      lVar12 = lVar12 + 1;
      piVar14 = piVar14 + 1;
    } while (bVar5);
  }
  FUN_109f658b0();
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[6] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 5;
  *puVar9 = &PTR_DAT_110b641e0;
  puVar9[4] = &UNK_10e05d730;
  puVar9[5] = puVar8;
  puVar7 = puVar9;
  func_0x000109eab760(puVar9,aiStack_a0,uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar19 = FUN_109eac2ac;
  if (piVar11 == (int *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if (*(long *)((long)piVar11 + -0x30) != 0) {
      puVar9 = (undefined8 *)(*(long *)((long)piVar11 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar9,0x58);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[10] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  *(undefined4 *)(puVar9 + 3) = 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[4] = &UNK_10e05d730;
  *puVar9 = &PTR_FUN_110b64370;
  uVar10 = (uint)puVar7;
  *(uint *)(puVar9 + 5) = uVar10;
  puVar9[6] = piVar11;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  if (uVar10 == 0xa6) {
    *(undefined1 *)(puVar9 + 10) = 0;
LAB_109ea92f0:
    puVar6 = *(undefined **)((long)piVar11 + 0x20);
    goto LAB_109ea941c;
  }
  uVar13 = 3;
  if (0xa4 < uVar10) {
    uVar13 = 4;
  }
  uVar1 = 2;
  if (0x9f < uVar10) {
    uVar1 = uVar13;
  }
  uVar13 = 1;
  if (0x7a < (int)uVar10) {
    uVar13 = uVar1;
  }
  *(undefined1 *)(puVar9 + 10) = uVar13;
  puVar6 = &DAT_10e05dae8;
  switch((ulong)puVar7 & 0xffffffff) {
  default:
    goto LAB_109ea92f0;
  case 0xc:
  case 0x13:
  case 0x16:
  case 0x1f:
  case 0x2a:
  case 0x31:
  case 0x38:
  case 0x39:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x71:
  case 0x72:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    goto code_r0x000109ea9300;
  case 0xd:
  case 0x15:
  case 0x1d:
  case 0x2c:
  case 0x33:
  case 0x3a:
  case 0x3b:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    goto code_r0x000109ea9350;
  case 0xe:
  case 0x10:
  case 0x14:
  case 0x17:
  case 0x1b:
  case 0x30:
  case 0x32:
  case 0x3d:
  case 0x3e:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0x2;
    break;
  case 0xf:
  case 0x12:
  case 0x2e:
  case 0x2f:
  case 0x3c:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0xb;
    break;
  case 0x11:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
  case 0x24:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0x3;
    break;
  case 0x18:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x34:
  case 0x35:
  case 0x3f:
  case 0x40:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0x4;
    break;
  case 0x23:
  case 0x36:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0x9;
    break;
  case 0x25:
  case 0x37:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4a:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    puVar6 = (undefined *)0xa;
    break;
  case 0x26:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    if (*(char *)(*(long *)((long)piVar11 + 0x20) + 4) == '\x01') goto code_r0x000109ea9404;
code_r0x000109ea9300:
    puVar6 = (undefined *)0x1;
    break;
  case 0x27:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
code_r0x000109ea9404:
    puVar6 = (undefined *)0x8;
    break;
  case 0x28:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
    if (*(char *)(*(long *)((long)piVar11 + 0x20) + 4) == '\0') goto code_r0x000109ea93dc;
code_r0x000109ea9350:
    puVar6 = (undefined *)0x0;
    break;
  case 0x29:
    uVar13 = *(undefined1 *)(*(long *)((long)piVar11 + 0x20) + 0xd);
code_r0x000109ea93dc:
    puVar6 = (undefined *)0x7;
    break;
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    puVar6 = &DAT_10e05dab0;
    goto LAB_109ea941c;
  case 0x5f:
  case 0x61:
  case 99:
    puVar6 = &DAT_10e05dc70;
    goto LAB_109ea941c;
  case 0x60:
  case 0x62:
    puVar6 = &DAT_10e05dce0;
    goto LAB_109ea941c;
  case 0x6a:
    puVar6 = &DAT_10e05df48;
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x7a:
    goto LAB_109ea941c;
  case 0x74:
  case 0x75:
  case 0x76:
    puVar6 = &DAT_10e05d928;
    goto LAB_109ea941c;
  case 0x77:
    puVar6 = &DAT_10e05e0d0;
    goto LAB_109ea941c;
  case 0x78:
    puVar6 = &DAT_10e05e258;
    goto LAB_109ea941c;
  case 0x79:
    puVar6 = &DAT_10e05d960;
    goto LAB_109ea941c;
  }
  func_0x000109ec6c94(puVar6,uVar13,1,0,0,0,in_x6,in_x7,uVar15,puVar8,ppuVar18,pcVar19);
LAB_109ea941c:
  puVar9[4] = puVar6;
  return puVar9;
}



/* Entry: 109eac18c; end: 109eac2ab;  */

undefined8 * FUN_109eac18c(long param_1,uint param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  undefined1 uVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *puVar14;
  code *pcVar15;
  int aiStack_50 [6];
  long lStack_38;
  
  piVar9 = aiStack_50;
  puVar14 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar6 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0x20) + 0xd);
  uVar8 = (uint)bVar3;
  if (param_2 <= bVar3) {
    uVar8 = param_2;
  }
  uVar13 = (ulong)uVar8;
  aiStack_50[2] = 2;
  aiStack_50[3] = 3;
  aiStack_50[0] = 0;
  aiStack_50[1] = 1;
  if (uVar8 < 4) {
    uVar2 = (ulong)bVar3;
    if ((ulong)param_2 <= (ulong)bVar3) {
      uVar2 = (ulong)param_2;
    }
    lVar10 = uVar2 - (((int)uVar2 - uVar8) + 4);
    piVar12 = aiStack_50 + uVar2;
    do {
      *piVar12 = uVar8 - 1;
      bVar4 = lVar10 != -1;
      lVar10 = lVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (bVar4);
  }
  FUN_109f658b0(puVar6,0x38);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 5;
  *puVar6 = &PTR_DAT_110b641e0;
  puVar6[4] = &UNK_10e05d730;
  puVar6[5] = param_1;
  puVar7 = puVar6;
  func_0x000109eab760(puVar6,aiStack_50,uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar15 = FUN_109eac2ac;
  if (piVar9 == (int *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if (*(long *)((long)piVar9 + -0x30) != 0) {
      puVar6 = (undefined8 *)(*(long *)((long)piVar9 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar6,0x58);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[10] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  *(undefined4 *)(puVar6 + 3) = 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = &UNK_10e05d730;
  *puVar6 = &PTR_FUN_110b64370;
  uVar8 = (uint)puVar7;
  *(uint *)(puVar6 + 5) = uVar8;
  puVar6[6] = piVar9;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  if (uVar8 == 0xa6) {
    *(undefined1 *)(puVar6 + 10) = 0;
LAB_109ea92f0:
    puVar5 = *(undefined **)((long)piVar9 + 0x20);
    goto LAB_109ea941c;
  }
  uVar11 = 3;
  if (0xa4 < uVar8) {
    uVar11 = 4;
  }
  uVar1 = 2;
  if (0x9f < uVar8) {
    uVar1 = uVar11;
  }
  uVar11 = 1;
  if (0x7a < (int)uVar8) {
    uVar11 = uVar1;
  }
  *(undefined1 *)(puVar6 + 10) = uVar11;
  puVar5 = &DAT_10e05dae8;
  switch((ulong)puVar7 & 0xffffffff) {
  default:
    goto LAB_109ea92f0;
  case 0xc:
  case 0x13:
  case 0x16:
  case 0x1f:
  case 0x2a:
  case 0x31:
  case 0x38:
  case 0x39:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x71:
  case 0x72:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    goto code_r0x000109ea9300;
  case 0xd:
  case 0x15:
  case 0x1d:
  case 0x2c:
  case 0x33:
  case 0x3a:
  case 0x3b:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    goto code_r0x000109ea9350;
  case 0xe:
  case 0x10:
  case 0x14:
  case 0x17:
  case 0x1b:
  case 0x30:
  case 0x32:
  case 0x3d:
  case 0x3e:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0x2;
    break;
  case 0xf:
  case 0x12:
  case 0x2e:
  case 0x2f:
  case 0x3c:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0xb;
    break;
  case 0x11:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
  case 0x24:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0x3;
    break;
  case 0x18:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x34:
  case 0x35:
  case 0x3f:
  case 0x40:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0x4;
    break;
  case 0x23:
  case 0x36:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0x9;
    break;
  case 0x25:
  case 0x37:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4a:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    puVar5 = (undefined *)0xa;
    break;
  case 0x26:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    if (*(char *)(*(long *)((long)piVar9 + 0x20) + 4) == '\x01') goto code_r0x000109ea9404;
code_r0x000109ea9300:
    puVar5 = (undefined *)0x1;
    break;
  case 0x27:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
code_r0x000109ea9404:
    puVar5 = (undefined *)0x8;
    break;
  case 0x28:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
    if (*(char *)(*(long *)((long)piVar9 + 0x20) + 4) == '\0') goto code_r0x000109ea93dc;
code_r0x000109ea9350:
    puVar5 = (undefined *)0x0;
    break;
  case 0x29:
    uVar11 = *(undefined1 *)(*(long *)((long)piVar9 + 0x20) + 0xd);
code_r0x000109ea93dc:
    puVar5 = (undefined *)0x7;
    break;
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    puVar5 = &DAT_10e05dab0;
    goto LAB_109ea941c;
  case 0x5f:
  case 0x61:
  case 99:
    puVar5 = &DAT_10e05dc70;
    goto LAB_109ea941c;
  case 0x60:
  case 0x62:
    puVar5 = &DAT_10e05dce0;
    goto LAB_109ea941c;
  case 0x6a:
    puVar5 = &DAT_10e05df48;
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x7a:
    goto LAB_109ea941c;
  case 0x74:
  case 0x75:
  case 0x76:
    puVar5 = &DAT_10e05d928;
    goto LAB_109ea941c;
  case 0x77:
    puVar5 = &DAT_10e05e0d0;
    goto LAB_109ea941c;
  case 0x78:
    puVar5 = &DAT_10e05e258;
    goto LAB_109ea941c;
  case 0x79:
    puVar5 = &DAT_10e05d960;
    goto LAB_109ea941c;
  }
  func_0x000109ec6c94(puVar5,uVar11,1,0,0,0,in_x6,in_x7,uVar13,param_1,puVar14,pcVar15);
LAB_109ea941c:
  puVar6[4] = puVar5;
  return puVar6;
}



/* Entry: 109eac2ac; end: 109eac30f;  */

undefined8 * FUN_109eac2ac(uint param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar3,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[10] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 4;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = &UNK_10e05d730;
  *puVar3 = &PTR_FUN_110b64370;
  *(uint *)(puVar3 + 5) = param_1;
  puVar3[6] = param_2;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  if (param_1 == 0xa6) {
    *(undefined1 *)(puVar3 + 10) = 0;
LAB_109ea92f0:
    puVar2 = *(undefined **)(param_2 + 0x20);
    goto LAB_109ea941c;
  }
  uVar4 = 3;
  if (0xa4 < param_1) {
    uVar4 = 4;
  }
  uVar1 = 2;
  if (0x9f < param_1) {
    uVar1 = uVar4;
  }
  uVar4 = 1;
  if (0x7a < (int)param_1) {
    uVar4 = uVar1;
  }
  *(undefined1 *)(puVar3 + 10) = uVar4;
  puVar2 = &DAT_10e05dae8;
  switch(param_1) {
  default:
    goto LAB_109ea92f0;
  case 0xc:
  case 0x13:
  case 0x16:
  case 0x1f:
  case 0x2a:
  case 0x31:
  case 0x38:
  case 0x39:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x71:
  case 0x72:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    goto code_r0x000109ea9300;
  case 0xd:
  case 0x15:
  case 0x1d:
  case 0x2c:
  case 0x33:
  case 0x3a:
  case 0x3b:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    goto code_r0x000109ea9350;
  case 0xe:
  case 0x10:
  case 0x14:
  case 0x17:
  case 0x1b:
  case 0x30:
  case 0x32:
  case 0x3d:
  case 0x3e:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0x2;
    break;
  case 0xf:
  case 0x12:
  case 0x2e:
  case 0x2f:
  case 0x3c:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0xb;
    break;
  case 0x11:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
  case 0x24:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0x3;
    break;
  case 0x18:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x34:
  case 0x35:
  case 0x3f:
  case 0x40:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0x4;
    break;
  case 0x23:
  case 0x36:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0x9;
    break;
  case 0x25:
  case 0x37:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4a:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar2 = (undefined *)0xa;
    break;
  case 0x26:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    if (*(char *)(*(long *)(param_2 + 0x20) + 4) == '\x01') goto code_r0x000109ea9404;
code_r0x000109ea9300:
    puVar2 = (undefined *)0x1;
    break;
  case 0x27:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
code_r0x000109ea9404:
    puVar2 = (undefined *)0x8;
    break;
  case 0x28:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    if (*(char *)(*(long *)(param_2 + 0x20) + 4) == '\0') goto code_r0x000109ea93dc;
code_r0x000109ea9350:
    puVar2 = (undefined *)0x0;
    break;
  case 0x29:
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
code_r0x000109ea93dc:
    puVar2 = (undefined *)0x7;
    break;
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    puVar2 = &DAT_10e05dab0;
    goto LAB_109ea941c;
  case 0x5f:
  case 0x61:
  case 99:
    puVar2 = &DAT_10e05dc70;
    goto LAB_109ea941c;
  case 0x60:
  case 0x62:
    puVar2 = &DAT_10e05dce0;
    goto LAB_109ea941c;
  case 0x6a:
    puVar2 = &DAT_10e05df48;
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x7a:
    goto LAB_109ea941c;
  case 0x74:
  case 0x75:
  case 0x76:
    puVar2 = &DAT_10e05d928;
    goto LAB_109ea941c;
  case 0x77:
    puVar2 = &DAT_10e05e0d0;
    goto LAB_109ea941c;
  case 0x78:
    puVar2 = &DAT_10e05e258;
    goto LAB_109ea941c;
  case 0x79:
    puVar2 = &DAT_10e05d960;
    goto LAB_109ea941c;
  }
  func_0x000109ec6c94(puVar2,uVar4,1,0,0,0,in_x6,in_x7,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
LAB_109ea941c:
  puVar3[4] = puVar2;
  return puVar3;
}



/* Entry: 109eac310; end: 109eac497;  */

undefined8 * FUN_109eac310(uint param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar4,0x58);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[10] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[4] = &UNK_10e05d730;
  *puVar4 = &PTR_FUN_110b64370;
  *(uint *)(puVar4 + 5) = param_1;
  puVar4[6] = param_2;
  puVar4[7] = param_3;
  puVar4[8] = 0;
  puVar4[9] = 0;
  if (param_1 == 0xa6) {
    *(undefined1 *)(puVar4 + 10) = 0;
LAB_109ea9494:
    puVar3 = &DAT_10e05dc38;
    goto LAB_109ea95bc;
  }
  uVar6 = 3;
  if (0xa4 < param_1) {
    uVar6 = 4;
  }
  uVar1 = 2;
  if (0x9f < param_1) {
    uVar1 = uVar6;
  }
  uVar6 = 1;
  if (0x7a < (int)param_1) {
    uVar6 = uVar1;
  }
  *(undefined1 *)(puVar4 + 10) = uVar6;
  puVar3 = &DAT_10e05d7a0;
  switch(param_1) {
  case 0x7b:
  case 0x7c:
  case 0x82:
  case 0x85:
  case 0x88:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9f:
    puVar2 = *(undefined **)(param_2 + 0x20);
    if (puVar2[0xd] == '\x01') {
      puVar5 = *(undefined **)(param_3 + 0x20);
      puVar3 = puVar5;
      if ((puVar2[4] & 0xf0) == 0) break;
    }
    else {
      puVar5 = *(undefined **)(param_3 + 0x20);
    }
    puVar3 = puVar2;
    if (puVar5[0xd] == '\x01') {
      if ((param_1 != 0x82) || ((*(uint *)(puVar5 + 4) & 0xf0) == 0)) break;
    }
    else if (param_1 != 0x82) break;
    FUN_109ec8408(puVar2,puVar5);
    puVar3 = puVar2;
    break;
  case 0x7d:
  case 0x7e:
  case 0x80:
  case 0x81:
  case 0x83:
  case 0x84:
  case 0x86:
  case 0x87:
  case 0x8f:
  case 0x90:
  case 0x9b:
  case 0x9d:
  case 0x9e:
    puVar3 = *(undefined **)(param_2 + 0x20);
    break;
  case 0x7f:
    puVar3 = (undefined *)
             (ulong)*(uint *)(&UNK_10e06ba14 + (ulong)*(byte *)(*(long *)(param_2 + 0x20) + 4) * 4);
    uVar6 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    goto code_r0x000109ea95a4;
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
    uVar6 = *(undefined1 *)(*(long *)(param_2 + 0x20) + 0xd);
    puVar3 = (undefined *)0xb;
code_r0x000109ea95a4:
    func_0x000109ec6c94(puVar3,uVar6,1,0,0,0,in_x6,in_x7,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
    break;
  case 0x8d:
  case 0x8e:
    break;
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
    puVar2 = *(undefined **)(param_2 + 0x20);
    puVar3 = puVar2;
    if ((puVar2[0xd] == '\x01') &&
       (puVar3 = *(undefined **)(param_3 + 0x20), (puVar2[4] & 0xf0) != 0)) {
      puVar3 = puVar2;
    }
    break;
  case 0x97:
    puVar3 = *(undefined **)(param_2 + 0x20);
    FUN_109ec6810();
    break;
  case 0x9c:
    puVar3 = *(undefined **)(param_2 + 0x20);
    FUN_109ec6840();
    break;
  default:
    goto LAB_109ea9494;
  }
LAB_109ea95bc:
  puVar4[4] = puVar3;
  return puVar4;
}



/* Entry: 109eac498; end: 109eac54b;  */

void FUN_109eac498(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar2,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xc;
  *puVar2 = &PTR_FUN_110b639a8;
  puVar2[4] = param_1;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  puVar2[9] = puVar2 + 0xb;
  puVar2[10] = 0;
  puVar2[0xc] = puVar2 + 9;
  *(undefined8 *)(param_2 + 8) = puVar2 + 7;
  puVar1 = (undefined8 *)0x0;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 8);
  }
  puVar2[5] = puVar1;
  *(undefined8 **)(param_2 + 0x10) = puVar2 + 5;
  puVar2[8] = puVar1;
  return;
}



/* Entry: 109eac54c; end: 109eac62b;  */

void FUN_109eac54c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  FUN_109f658b0(puVar2,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xc;
  *puVar2 = &PTR_FUN_110b639a8;
  puVar2[4] = param_1;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar3 = puVar2 + 0xb;
  *puVar3 = 0;
  puVar2[9] = puVar3;
  puVar2[10] = 0;
  puVar2[0xc] = puVar2 + 9;
  *(undefined8 *)(param_2 + 8) = puVar2 + 7;
  puVar1 = (undefined8 *)0x0;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 8);
  }
  puVar2[5] = puVar1;
  *(undefined8 **)(param_2 + 0x10) = puVar2 + 5;
  puVar2[8] = puVar1;
  *(undefined8 *)(param_3 + 8) = puVar3;
  puVar1 = (undefined8 *)0x0;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_3 + 8);
  }
  puVar3 = (undefined8 *)puVar2[0xc];
  *(undefined8 **)(param_3 + 0x10) = puVar3;
  *puVar3 = puVar1;
  puVar2[0xc] = puVar1;
  return;
}



/* Entry: 109eac62c; end: 109eac67b;  */

void FUN_109eac62c(undefined8 param_1,undefined8 *param_2)

{
  FUN_109f658b0(param_2,0x28);
  if (param_2 != (undefined8 *)0x0) {
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0x16;
  *param_2 = &PTR_DAT_110b63eb8;
  param_2[4] = &UNK_10e05d730;
  return;
}



/* Entry: 109eac67c; end: 109eac847;  */

undefined8 * FUN_109eac67c(long param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = param_2;
  FUN_109f658b0(param_2,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(uint *)(param_1 + 0x40) >> 0xb & 0xf);
  *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(param_1 + 0x60);
  for (lVar6 = *(long *)(param_1 + 0x20); *(char *)(lVar6 + 4) == '\x13';
      lVar6 = *(long *)(lVar6 + 0x30)) {
  }
  if (lVar6 == *(long *)(param_1 + 0x88)) {
    puVar4 = puVar3;
    func_0x000109f6590c(puVar3,(ulong)*(uint *)(*(long *)(param_1 + 0x88) + 0x10) << 2);
    puVar3[0x10] = puVar4;
    _memcpy();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)((long)puVar3 + 100) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)((long)puVar3 + 0x5c) = uVar11;
  puVar3[9] = uVar8;
  puVar3[8] = uVar7;
  puVar3[0xb] = uVar10;
  puVar3[10] = uVar9;
  for (lVar6 = *(long *)(param_1 + 0x20); *(char *)(lVar6 + 4) == '\x13';
      lVar6 = *(long *)(lVar6 + 0x30)) {
  }
  if ((lVar6 != *(long *)(param_1 + 0x88)) && (*(long *)(param_1 + 0x80) != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x4c);
    puVar4 = puVar3;
    FUN_109f658b0(puVar3,(ulong)uVar2 << 3);
    puVar3[0x10] = puVar4;
    uVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar1 = uVar2;
    }
    *(ushort *)((long)puVar3 + 0x4c) = uVar1;
    for (lVar6 = *(long *)(param_1 + 0x20); *(char *)(lVar6 + 4) == '\x13';
        lVar6 = *(long *)(lVar6 + 0x30)) {
    }
    _memcpy();
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,param_3);
    puVar3[0xe] = plVar5;
  }
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,param_3);
    puVar3[0xf] = plVar5;
  }
  puVar3[0x11] = *(undefined8 *)(param_1 + 0x88);
  if (param_3 != 0) {
    lVar6 = param_1;
    (**(code **)(param_3 + 8))(param_1);
    func_0x000109f650c0(param_3,lVar6,param_1,puVar3);
  }
  return puVar3;
}



/* Entry: 109eac848; end: 109eac8bb;  */

undefined8 * FUN_109eac848(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  puVar3 = param_2;
  FUN_109f658b0(param_2,0x38);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(puVar3 + 3) = 5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b641e0;
  puVar3[4] = &UNK_10e05d730;
  puVar3[5] = plVar4;
  *(short *)(puVar3 + 6) = (short)uVar1;
  *(short *)((long)puVar3 + 0x32) = (short)(uVar1 >> 0x10);
  uVar2 = (ulong)*(byte *)(plVar4[4] + 4);
  func_0x000109ec6c94(uVar2,uVar1 >> 8 & 7,1,0,0,0,in_x6,in_x7,unaff_x20,unaff_x19,unaff_x29,
                      unaff_x30);
  puVar3[4] = uVar2;
  return puVar3;
}



/* Entry: 109eac8bc; end: 109eac9ab;  */

void FUN_109eac8bc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  FUN_109f658b0(param_2,0x28);
  if (param_2 != (undefined8 *)0x0) {
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xf;
  *param_2 = &PTR_DAT_110b63a60;
  param_2[4] = plVar1;
  return;
}



/* Entry: 109eac9ac; end: 109eac9eb;  */

void FUN_109eac9ac(undefined8 param_1,undefined8 *param_2)

{
  FUN_109f658b0(param_2,0x20);
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0x11;
  *param_2 = &PTR_DAT_110b63b80;
  return;
}



/* Entry: 109eac9ec; end: 109eaca3b;  */

void FUN_109eac9ec(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  FUN_109f658b0(param_2,0x20);
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_DAT_110b63ad0;
  *(undefined4 *)(param_2 + 3) = 0xe;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 109eaca3c; end: 109eacb9f;  */

undefined8 * FUN_109eaca3c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xc;
  *puVar2 = &PTR_FUN_110b639a8;
  puVar2[4] = plVar3;
  puVar6 = puVar2 + 7;
  *puVar6 = 0;
  puVar2[5] = puVar6;
  puVar2[6] = 0;
  puVar2[8] = puVar2 + 5;
  puVar7 = puVar2 + 0xb;
  *puVar7 = 0;
  puVar2[9] = puVar7;
  puVar2[10] = 0;
  puVar2[0xc] = puVar2 + 9;
  for (plVar3 = *(long **)(param_1 + 0x28); *plVar3 != 0; plVar3 = (long *)*plVar3) {
    plVar4 = plVar3 + -1;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    plVar4[1] = (long)puVar6;
    puVar5 = (undefined8 *)puVar2[8];
    plVar4[2] = (long)puVar5;
    plVar1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
    }
    *puVar5 = plVar1;
    puVar2[8] = plVar1;
  }
  for (plVar3 = *(long **)(param_1 + 0x48); *plVar3 != 0; plVar3 = (long *)*plVar3) {
    plVar4 = plVar3 + -1;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    plVar4[1] = (long)puVar7;
    puVar6 = (undefined8 *)puVar2[0xc];
    plVar4[2] = (long)puVar6;
    plVar1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
    }
    *puVar6 = plVar1;
    puVar2[0xc] = plVar1;
  }
  return puVar2;
}



/* Entry: 109eacba0; end: 109eacefb;  */

undefined8 * FUN_109eacba0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xd;
  *puVar2 = &PTR_FUN_110b64008;
  puVar6 = puVar2 + 6;
  *puVar6 = 0;
  puVar2[4] = puVar6;
  puVar2[5] = 0;
  puVar2[7] = puVar2 + 4;
  for (plVar5 = *(long **)(param_1 + 0x20); *plVar5 != 0; plVar5 = (long *)*plVar5) {
    plVar3 = plVar5 + -1;
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    plVar3[1] = (long)puVar6;
    puVar4 = (undefined8 *)puVar2[7];
    plVar3[2] = (long)puVar4;
    plVar1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
    }
    *puVar4 = plVar1;
    puVar2[7] = plVar1;
  }
  return puVar2;
}



/* Entry: 109eacefc; end: 109eacf97;  */

void FUN_109eacefc(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x28);
  if (param_3 != 0) {
    lVar2 = *plVar3;
    lVar1 = lVar2;
    (**(code **)(param_3 + 8))(lVar2);
    FUN_109f64fdc(param_3,lVar1,lVar2);
    if (param_3 != 0) {
      plVar3 = (long *)(param_3 + 0x10);
    }
  }
  lVar1 = *plVar3;
  FUN_109f658b0(param_2,0x30);
  if (param_2 != (undefined8 *)0x0) {
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *param_2 = &PTR_DAT_110b64048;
  param_2[4] = *(undefined8 *)(lVar1 + 0x20);
  param_2[5] = lVar1;
  return;
}



/* Entry: 109eacf98; end: 109ead3c7;  */

undefined8 * FUN_109eacf98(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_2;
  FUN_109f658b0(param_2,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
  plVar3 = *(long **)(param_1 + 0x30);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = &UNK_10e05d730;
  *puVar1 = &PTR_DAT_110b640d0;
  puVar1[6] = plVar3;
  FUN_109eab364(puVar1,plVar2);
  return puVar1;
}



/* Entry: 109ead3c8; end: 109ead6d7;  */

undefined8 * FUN_109ead3c8(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar2 = param_2;
  FUN_109f658b0(param_2,0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 10;
  *puVar2 = &PTR_DAT_110b642e0;
  puVar9 = puVar2 + 7;
  *puVar9 = 0;
  puVar2[5] = puVar9;
  puVar2[6] = 0;
  puVar2[8] = puVar2 + 5;
  *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  puVar7 = puVar2;
  FUN_109f65c2c(puVar2,uVar5);
  puVar2[4] = puVar7;
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(uint *)((long)puVar2 + 0x4c) = uVar1;
  puVar7 = param_2;
  FUN_109f658b0(param_2,(ulong)uVar1 << 3);
  uVar1 = *(uint *)((long)puVar2 + 0x4c);
  puVar2[10] = puVar7;
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      *(undefined8 *)(puVar2[10] + lVar6) = *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar6);
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar1 * 8 - lVar6 != 0);
  }
  for (plVar10 = *(long **)(param_1 + 0x28); *plVar10 != 0; plVar10 = (long *)*plVar10) {
    plVar8 = plVar10 + -1;
    plVar3 = plVar8;
    (**(code **)(*plVar8 + 0x20))(plVar8,param_2,param_3);
    plVar3[0xf] = (long)puVar2;
    plVar3[1] = (long)puVar9;
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3 + 1;
    }
    puVar7 = (undefined8 *)puVar2[8];
    plVar3[2] = (long)puVar7;
    *puVar7 = plVar4;
    puVar2[8] = plVar4;
    if (param_3 != 0) {
      plVar4 = plVar8;
      (**(code **)(param_3 + 8))(plVar8);
      func_0x000109f650c0(param_3,plVar4,plVar8,plVar3);
    }
  }
  return puVar2;
}



/* Entry: 109ead6d8; end: 109ead887;  */

undefined8 * FUN_109ead6d8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 4);
  if ((bVar1 < 0xc) || (bVar1 - 0xd < 3)) {
    FUN_109f658b0(param_2,0xb0);
    if (param_2 != (undefined8 *)0x0) {
      param_2[0x13] = 0;
      param_2[0x12] = 0;
      param_2[0x15] = 0;
      param_2[0x14] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 3;
    *param_2 = &PTR_DAT_110b63f80;
    param_2[0x15] = 0;
    param_2[4] = uVar4;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    param_2[0xc] = *(undefined8 *)(param_1 + 0x60);
    param_2[0xb] = uVar13;
    param_2[10] = uVar12;
    param_2[9] = uVar11;
    param_2[8] = uVar10;
    param_2[7] = uVar9;
    param_2[6] = uVar8;
    param_2[5] = uVar4;
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    uVar12 = *(undefined8 *)(param_1 + 0x90);
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    uVar13 = *(undefined8 *)(param_1 + 0x98);
    param_2[0x14] = *(undefined8 *)(param_1 + 0xa0);
    param_2[0x13] = uVar13;
    param_2[0x12] = uVar12;
    param_2[0x11] = uVar11;
    param_2[0x10] = uVar10;
    param_2[0xf] = uVar9;
    param_2[0xe] = uVar8;
    param_2[0xd] = uVar4;
    puVar6 = param_2;
  }
  else if (bVar1 == 0x11 || bVar1 == 0x13) {
    puVar6 = param_2;
    FUN_109f658b0(param_2,0xb0);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 3;
    puVar6[4] = &UNK_10e05d730;
    *puVar6 = &PTR_DAT_110b63f80;
    puVar6[0x15] = 0;
    lVar5 = *(long *)(param_1 + 0x20);
    puVar6[4] = lVar5;
    puVar2 = puVar6;
    FUN_109f658b0(puVar6,(ulong)*(uint *)(lVar5 + 0x10) << 3);
    puVar6[0x15] = puVar2;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
      uVar7 = 0;
      do {
        plVar3 = *(long **)(*(long *)(param_1 + 0xa8) + uVar7 * 8);
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,0);
        *(long **)(puVar6[0x15] + uVar7 * 8) = plVar3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(*(long *)(param_1 + 0x20) + 0x10));
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}



/* Entry: 109ead888; end: 109ead977;  */

void FUN_109ead888(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  long lStack_48;
  
  lVar2 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  plVar5 = (long *)*param_3;
  if (*plVar5 != 0) {
    do {
      plVar3 = plVar5 + -1;
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1,lVar2);
      plVar3[1] = param_2 + 0x10;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      plVar3[2] = (long)puVar4;
      plVar1 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
      }
      *puVar4 = plVar1;
      *(long **)(param_2 + 0x18) = plVar1;
      plVar5 = (long *)*plVar5;
    } while (*plVar5 != 0);
  }
  uStack_57 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  ppuStack_80 = &PTR_FUN_110b63d60;
  lStack_48 = lVar2;
  FUN_109eb4670(&ppuStack_80,param_2);
  if (lVar2 != 0) {
    FUN_109f65aa4(lVar2 + -0x30);
    FUN_109f65ae0(lVar2 + -0x30);
  }
  return;
}



/* Entry: 109ead978; end: 109ead97b;  */

void FUN_109ead978(void)

{
  return;
}



/* Entry: 109ead97c; end: 109ead9ab;  */

void FUN_109ead97c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_109f65aa4(param_1 + -0x30);
  lVar1 = *(long *)(param_1 + -0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(param_1 + -0x28);
  }
  if (*(code **)(param_1 + -0x10) != (code *)0x0) {
    (**(code **)(param_1 + -0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -0x30);
  return;
}



/* Entry: 109ead9ac; end: 109ead9c7;  */

void FUN_109ead9ac(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109ead9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x90))(param_2,param_1);
  return;
}


