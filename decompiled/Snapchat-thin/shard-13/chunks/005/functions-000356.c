/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7a483c; end: 10a7a489f;  */

void FUN_10a7a483c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x68;
        FUN_10a7a3158(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a48a0; end: 10a7a48fb;  */

long FUN_10a7a48a0(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if (0x10 < (ulong)*(byte *)(param_1 + 0x40)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a48fc);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[*(byte *)(param_1 + 0x40)])(param_1);
    func_0x00010a365274(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10a7a48fc; end: 10a7a4abb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a4a80) */

long * FUN_10a7a48fc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  long *plStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  undefined1 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((long *)((param_1[2] - (long)plVar5 >> 4) * -0x5555555555555555) < param_4) {
    plVar1 = param_1;
    plVar5 = param_2;
    plVar3 = param_3;
    plVar6 = param_4;
    FUN_10a7a42a0();
    if ((long *)0x555555555555555 < param_4) {
      FUN_10a7a40b0();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x555555555555555;
      __Unwind_Resume();
      pcStack_48 = FUN_10a7a4abc;
      ppuStack_70 = &puStack_50;
      plStack_60 = param_3;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if (plVar5 < (long *)0x555555555555556) {
        plVar2 = plVar5;
        FUN_10a7a40c4();
        *plVar1 = (long)plVar5;
        plVar1[1] = (long)plVar5;
        plVar1[2] = (long)(plVar5 + (long)plVar2 * 6);
        return plVar5;
      }
      FUN_10a7a40b0();
      uStack_88 = 0x555555555555555;
      pcStack_68 = FUN_10a7a4b08;
      pplStack_b8 = &plStack_a0;
      pplStack_b0 = &plStack_98;
      uStack_a8 = 0;
      plStack_c0 = plVar1;
      plStack_a0 = plVar6;
      plStack_80 = param_3;
      plStack_90 = param_2;
      plStack_78 = param_1;
      for (; plStack_98 = plVar6, plVar5 != plVar3; plVar5 = plVar5 + 6) {
        if (*(char *)((long)plVar5 + 0x17) < '\0') {
          func_0x000107c3192c(plVar6,*plVar5,plVar5[1]);
        }
        else {
          lVar7 = plVar5[1];
          lVar4 = *plVar5;
          plVar6[2] = plVar5[2];
          plVar6[1] = lVar7;
          *plVar6 = lVar4;
        }
        plVar6[3] = plVar5[3];
        lVar4 = plVar5[4];
        *(int *)(plVar6 + 5) = (int)plVar5[5];
        plVar6[4] = lVar4;
        plVar6 = plStack_98 + 6;
      }
      uStack_a8 = 1;
      FUN_10a7a41d0(&plStack_c0);
      return plVar6;
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    plVar5 = (long *)(lVar4 * 0x5555555555555556);
    if (plVar5 < param_4 || (long)plVar5 - (long)param_4 == 0) {
      plVar5 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      plVar5 = (long *)0x555555555555555;
    }
    FUN_10a7a4abc(param_1,plVar5);
    FUN_10a7a4b08(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (param_4 <= (long *)(((long)plVar6 - (long)plVar5 >> 4) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          plVar2 = plVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
          plVar5[3] = param_2[3];
          lVar4 = param_2[4];
          *(int *)(plVar5 + 5) = (int)param_2[5];
          plVar5[4] = lVar4;
          param_2 = param_2 + 6;
          plVar5 = plVar5 + 6;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      for (; plVar6 != plVar5; plVar6 = plVar6 + -6) {
      }
      param_1[1] = (long)plVar5;
      return plVar2;
    }
    plVar1 = (long *)((long)param_2 + ((long)plVar6 - (long)plVar5));
    if (plVar6 != plVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
        plVar5[3] = param_2[3];
        lVar4 = param_2[4];
        *(int *)(plVar5 + 5) = (int)param_2[5];
        plVar5[4] = lVar4;
        param_2 = param_2 + 6;
        plVar5 = plVar5 + 6;
      } while (param_2 != plVar1);
      plVar6 = (long *)param_1[1];
    }
    FUN_10a7a4b08(param_1,plVar1,param_3,plVar6);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 10a7a4abc; end: 10a7a4b07;  */

undefined8 *
FUN_10a7a4abc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    puVar1 = param_2;
    FUN_10a7a40c4();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (long)puVar1 * 6;
    return param_2;
  }
  FUN_10a7a40b0();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  puStack_80 = param_1;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar3;
      *param_4 = uVar2;
    }
    param_4[3] = param_2[3];
    uVar2 = param_2[4];
    *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_2 + 5);
    param_4[4] = uVar2;
    param_4 = puStack_58 + 6;
  }
  uStack_68 = 1;
  FUN_10a7a41d0(&puStack_80);
  return param_4;
}



/* Entry: 10a7a4b08; end: 10a7a4bdf;  */

undefined8 *
FUN_10a7a4b08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    uVar1 = param_2[4];
    *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_2 + 5);
    param_4[4] = uVar1;
    param_4 = puStack_38 + 6;
  }
  uStack_48 = 1;
  FUN_10a7a41d0(&uStack_60);
  return param_4;
}



/* Entry: 10a7a4be0; end: 10a7a4bf3;  */

void FUN_10a7a4be0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&UNK_10f676ba7;
  FUN_109ffde64();
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        param_3[3] = puVar2[3];
        uVar4 = puVar2[5];
        uVar3 = puVar2[4];
        param_3[6] = puVar2[6];
        param_3[5] = uVar4;
        param_3[4] = uVar3;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[4] = 0;
        param_3[7] = puVar2[7];
        uVar4 = puVar2[9];
        uVar3 = puVar2[8];
        param_3[10] = puVar2[10];
        param_3[9] = uVar4;
        param_3[8] = uVar3;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[8] = 0;
        *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(puVar2 + 0xb);
        puVar2 = puVar2 + 0xc;
        param_3 = param_3 + 0xc;
      } while (puVar2 != param_2);
      do {
        func_0x00010a7a4ce8(puVar1);
        puVar1 = puVar1 + 0xc;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x60);
  return;
}



/* Entry: 10a7a4bf4; end: 10a7a4dfb;  */

void FUN_10a7a4bf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_3[3] = puVar1[3];
        uVar3 = puVar1[5];
        uVar2 = puVar1[4];
        param_3[6] = puVar1[6];
        param_3[5] = uVar3;
        param_3[4] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        param_3[7] = puVar1[7];
        uVar3 = puVar1[9];
        uVar2 = puVar1[8];
        param_3[10] = puVar1[10];
        param_3[9] = uVar3;
        param_3[8] = uVar2;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[8] = 0;
        *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
        puVar1 = puVar1 + 0xc;
        param_3 = param_3 + 0xc;
      } while (puVar1 != param_2);
      do {
        func_0x00010a7a4ce8(param_1);
        param_1 = param_1 + 0xc;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x60);
  return;
}



/* Entry: 10a7a4dfc; end: 10a7a4e0f;  */

long * FUN_10a7a4dfc(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  plVar3[3] = 0;
  plVar3[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    if ((undefined8 *)0x555555555555555 < param_2) {
      func_0x000109ffded8();
      plVar9 = (long *)*plVar3;
      plVar2 = (long *)plVar3[1];
      plVar1 = (long *)((long)plVar9 + (param_2[1] - (long)plVar2));
      plVar5 = plVar3;
      plVar6 = plVar9;
      plVar8 = plVar1;
      if (plVar2 != plVar9) {
        do {
          lVar4 = *plVar6;
          plVar8[1] = plVar6[1];
          *plVar8 = lVar4;
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar8[2] = 0;
          plVar8[3] = 0;
          plVar8[4] = 0;
          lVar4 = plVar6[2];
          plVar8[3] = plVar6[3];
          plVar8[2] = lVar4;
          plVar8[4] = plVar6[4];
          plVar6[2] = 0;
          plVar6[3] = 0;
          plVar6[4] = 0;
          *(int *)(plVar8 + 5) = (int)plVar6[5];
          plVar6 = plVar6 + 6;
          plVar8 = plVar8 + 6;
        } while (plVar6 != plVar2);
        do {
          plVar5 = plVar9;
          func_0x00010a7a4fb4(plVar9);
          plVar9 = plVar9 + 6;
        } while (plVar9 != plVar2);
        plVar9 = (long *)*plVar3;
      }
      param_2[1] = plVar1;
      *plVar3 = (long)plVar1;
      plVar3[1] = (long)plVar9;
      param_2[1] = plVar9;
      lVar4 = plVar3[1];
      plVar3[1] = param_2[2];
      param_2[2] = lVar4;
      lVar4 = plVar3[2];
      plVar3[2] = param_2[3];
      param_2[3] = lVar4;
      *param_2 = param_2[1];
      return plVar5;
    }
    lVar4 = (long)param_2 * 0x30;
    __Znwm();
  }
  lVar7 = lVar4 + param_3 * 0x30;
  *plVar3 = lVar4;
  plVar3[1] = lVar7;
  plVar3[2] = lVar7;
  plVar3[3] = lVar4 + (long)param_2 * 0x30;
  return plVar3;
}



/* Entry: 10a7a4e10; end: 10a7a4e87;  */

long * FUN_10a7a4e10(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((undefined8 *)0x555555555555555 < param_2) {
      func_0x000109ffded8();
      plVar8 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar1 = (long *)((long)plVar8 + (param_2[1] - (long)plVar2));
      plVar4 = param_1;
      plVar5 = plVar8;
      plVar7 = plVar1;
      if (plVar2 != plVar8) {
        do {
          lVar3 = *plVar5;
          plVar7[1] = plVar5[1];
          *plVar7 = lVar3;
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          lVar3 = plVar5[2];
          plVar7[3] = plVar5[3];
          plVar7[2] = lVar3;
          plVar7[4] = plVar5[4];
          plVar5[2] = 0;
          plVar5[3] = 0;
          plVar5[4] = 0;
          *(int *)(plVar7 + 5) = (int)plVar5[5];
          plVar5 = plVar5 + 6;
          plVar7 = plVar7 + 6;
        } while (plVar5 != plVar2);
        do {
          plVar4 = plVar8;
          func_0x00010a7a4fb4(plVar8);
          plVar8 = plVar8 + 6;
        } while (plVar8 != plVar2);
        plVar8 = (long *)*param_1;
      }
      param_2[1] = plVar1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar8;
      param_2[1] = plVar8;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return plVar4;
    }
    lVar3 = (long)param_2 * 0x30;
    __Znwm();
  }
  lVar6 = lVar3 + param_3 * 0x30;
  *param_1 = lVar3;
  param_1[1] = lVar6;
  param_1[2] = lVar6;
  param_1[3] = lVar3 + (long)param_2 * 0x30;
  return param_1;
}



/* Entry: 10a7a4e88; end: 10a7a4f67;  */

void FUN_10a7a4e88(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar3 = puVar6;
  puVar5 = puVar1;
  if (puVar2 != puVar6) {
    do {
      uVar7 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar7;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      uVar7 = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[2] = uVar7;
      puVar5[4] = puVar3[4];
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar3 + 5);
      puVar3 = puVar3 + 6;
      puVar5 = puVar5 + 6;
    } while (puVar3 != puVar2);
    do {
      func_0x00010a7a4fb4(puVar6);
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar6;
  param_2[1] = puVar6;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a7a4f68; end: 10a7a4fe3;  */

long * FUN_10a7a4f68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    func_0x00010a7a4fb4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a4fe4; end: 10a7a4ff7;  */

void FUN_10a7a4fe4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109ffde64(&UNK_10f676ba7);
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_4[3] = puVar1[3];
        uVar3 = puVar1[5];
        uVar2 = puVar1[4];
        param_4[6] = puVar1[6];
        param_4[5] = uVar3;
        param_4[4] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        param_4[7] = puVar1[7];
        uVar2 = puVar1[8];
        param_4[9] = puVar1[9];
        param_4[8] = uVar2;
        puVar1[8] = 0;
        puVar1[9] = 0;
        param_4[10] = puVar1[10];
        puVar1 = puVar1 + 0xb;
        param_4 = param_4 + 0xb;
      } while (puVar1 != param_3);
      do {
        FUN_10a7a3390(param_2);
        param_2 = param_2 + 0xb;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x58);
  return;
}



/* Entry: 10a7a4ff8; end: 10a7a512f;  */

void FUN_10a7a4ff8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_4[3] = puVar1[3];
        uVar3 = puVar1[5];
        uVar2 = puVar1[4];
        param_4[6] = puVar1[6];
        param_4[5] = uVar3;
        param_4[4] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        param_4[7] = puVar1[7];
        uVar2 = puVar1[8];
        param_4[9] = puVar1[9];
        param_4[8] = uVar2;
        puVar1[8] = 0;
        puVar1[9] = 0;
        param_4[10] = puVar1[10];
        puVar1 = puVar1 + 0xb;
        param_4 = param_4 + 0xb;
      } while (puVar1 != param_3);
      do {
        FUN_10a7a3390(param_2);
        param_2 = param_2 + 0xb;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x58);
  return;
}



/* Entry: 10a7a5130; end: 10a7a51b3;  */

void FUN_10a7a5130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a7a4abc(param_1,param_4);
    lVar1 = param_1;
    FUN_10a7a4b08(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a7a51b4; end: 10a7a5217;  */

void FUN_10a7a51b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a7a3390(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a5218; end: 10a7a522b;  */

undefined8 *
FUN_10a7a5218(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar5 = puVar1[2];
  puVar6 = (undefined8 *)*puVar1;
  if (param_4 <= (undefined8 *)((lVar5 - (long)puVar6 >> 5) * -0x5555555555555555)) {
    lVar5 = puVar1[1] - (long)puVar6;
    if (param_4 <= (undefined8 *)((lVar5 >> 5) * -0x5555555555555555)) {
      FUN_10a7a5528(param_2,param_3,puVar6);
      puVar6 = (undefined8 *)puVar1[1];
      puVar3 = param_2;
      while (puVar6 != param_2) {
        puVar6 = puVar6 + -0xc;
        puVar3 = puVar6;
        func_0x00010a7a4ce8(puVar6);
      }
      puVar1[1] = param_2;
      return puVar3;
    }
    FUN_10a7a5528(param_2,(long)param_2 + lVar5,puVar6);
    param_2 = (undefined8 *)((long)param_2 + lVar5);
    FUN_10a7a53c4(param_2,param_3,puVar1[1]);
LAB_10a7a5360:
    puVar1[1] = param_2;
    return param_2;
  }
  puVar2 = puVar1;
  puVar4 = param_2;
  puVar3 = param_3;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)puVar1[1];
    puVar2 = puVar6;
    if (puVar7 != puVar6) {
      do {
        puVar7 = puVar7 + -0xc;
        func_0x00010a7a4ce8(puVar7);
      } while (puVar7 != puVar6);
      puVar2 = (undefined8 *)*puVar1;
    }
    puVar1[1] = puVar6;
    __ZdlPv();
    lVar5 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  if (param_4 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    puVar2 = (undefined8 *)((lVar5 >> 5) * 0x5555555555555556);
    if (puVar2 < param_4 || (long)puVar2 - (long)param_4 == 0) {
      puVar2 = param_4;
    }
    if (0x155555555555554 < (ulong)((lVar5 >> 5) * -0x5555555555555555)) {
      puVar2 = (undefined8 *)0x2aaaaaaaaaaaaaa;
    }
    if (puVar2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
      func_0x00010a7a4bf4();
      *puVar1 = puVar2;
      puVar1[1] = puVar2;
      puVar1[2] = puVar2 + (long)puVar4 * 0xc;
      FUN_10a7a53c4(param_2,param_3,puVar2);
      goto LAB_10a7a5360;
    }
  }
  FUN_10a7a4be0();
  puVar1[1] = param_4;
  __Unwind_Resume();
  if (puVar2 != puVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)((long)puVar2 + lVar5);
      puVar6 = (undefined8 *)((long)puVar3 + lVar5);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        func_0x000107c3192c(puVar6,*puVar1,puVar1[1]);
      }
      else {
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        puVar6[2] = puVar1[2];
        puVar6[1] = uVar9;
        *puVar6 = uVar8;
      }
      *(undefined8 *)((long)puVar3 + lVar5 + 0x18) = *(undefined8 *)((long)puVar2 + lVar5 + 0x18);
      if (*(char *)((long)puVar2 + lVar5 + 0x37) < '\0') {
        func_0x000107c3192c((long)puVar3 + lVar5 + 0x20,*(undefined8 *)((long)puVar2 + lVar5 + 0x20)
                            ,*(undefined8 *)((long)puVar2 + lVar5 + 0x28));
      }
      else {
        uVar9 = *(undefined8 *)((long)puVar2 + lVar5 + 0x28);
        uVar8 = *(undefined8 *)((long)puVar2 + lVar5 + 0x20);
        *(undefined8 *)((long)puVar3 + lVar5 + 0x30) = *(undefined8 *)((long)puVar2 + lVar5 + 0x30);
        *(undefined8 *)((long)puVar3 + lVar5 + 0x28) = uVar9;
        *(undefined8 *)((long)puVar3 + lVar5 + 0x20) = uVar8;
      }
      *(undefined8 *)((long)puVar3 + lVar5 + 0x38) = *(undefined8 *)((long)puVar2 + lVar5 + 0x38);
      if (*(char *)((long)puVar2 + lVar5 + 0x57) < '\0') {
        func_0x000107c3192c((long)puVar3 + lVar5 + 0x40,*(undefined8 *)((long)puVar2 + lVar5 + 0x40)
                            ,*(undefined8 *)((long)puVar2 + lVar5 + 0x48));
      }
      else {
        uVar9 = *(undefined8 *)((long)puVar2 + lVar5 + 0x48);
        uVar8 = *(undefined8 *)((long)puVar2 + lVar5 + 0x40);
        *(undefined8 *)((long)puVar3 + lVar5 + 0x50) = *(undefined8 *)((long)puVar2 + lVar5 + 0x50);
        *(undefined8 *)((long)puVar3 + lVar5 + 0x48) = uVar9;
        *(undefined8 *)((long)puVar3 + lVar5 + 0x40) = uVar8;
      }
      *(undefined4 *)((long)puVar3 + lVar5 + 0x58) = *(undefined4 *)((long)puVar2 + lVar5 + 0x58);
      lVar5 = lVar5 + 0x60;
    } while ((undefined8 *)((long)puVar2 + lVar5) != puVar4);
    puVar3 = (undefined8 *)((long)puVar3 + lVar5);
  }
  return puVar3;
}



/* Entry: 10a7a522c; end: 10a7a53c3;  */

undefined8 *
FUN_10a7a522c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  if (param_4 <= (undefined8 *)((lVar4 - (long)puVar5 >> 5) * -0x5555555555555555)) {
    lVar4 = param_1[1] - (long)puVar5;
    if (param_4 <= (undefined8 *)((lVar4 >> 5) * -0x5555555555555555)) {
      FUN_10a7a5528(param_2,param_3,puVar5);
      puVar5 = (undefined8 *)param_1[1];
      puVar2 = param_2;
      while (puVar5 != param_2) {
        puVar5 = puVar5 + -0xc;
        puVar2 = puVar5;
        func_0x00010a7a4ce8(puVar5);
      }
      param_1[1] = param_2;
      return puVar2;
    }
    FUN_10a7a5528(param_2,(long)param_2 + lVar4,puVar5);
    param_2 = (undefined8 *)((long)param_2 + lVar4);
    FUN_10a7a53c4(param_2,param_3,param_1[1]);
LAB_10a7a5360:
    param_1[1] = param_2;
    return param_2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  puVar2 = param_3;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    puVar1 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -0xc;
        func_0x00010a7a4ce8(puVar6);
      } while (puVar6 != puVar5);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar5;
    __ZdlPv();
    lVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)((lVar4 >> 5) * 0x5555555555555556);
    if (puVar1 < param_4 || (long)puVar1 - (long)param_4 == 0) {
      puVar1 = param_4;
    }
    if (0x155555555555554 < (ulong)((lVar4 >> 5) * -0x5555555555555555)) {
      puVar1 = (undefined8 *)0x2aaaaaaaaaaaaaa;
    }
    if (puVar1 < (undefined8 *)0x2aaaaaaaaaaaaab) {
      func_0x00010a7a4bf4();
      *param_1 = puVar1;
      param_1[1] = puVar1;
      param_1[2] = puVar1 + (long)puVar3 * 0xc;
      FUN_10a7a53c4(param_2,param_3,puVar1);
      goto LAB_10a7a5360;
    }
  }
  FUN_10a7a4be0();
  param_1[1] = param_4;
  __Unwind_Resume();
  if (puVar1 != puVar3) {
    lVar4 = 0;
    do {
      puVar5 = (undefined8 *)((long)puVar1 + lVar4);
      puVar6 = (undefined8 *)((long)puVar2 + lVar4);
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000107c3192c(puVar6,*puVar5,puVar5[1]);
      }
      else {
        uVar8 = puVar5[1];
        uVar7 = *puVar5;
        puVar6[2] = puVar5[2];
        puVar6[1] = uVar8;
        *puVar6 = uVar7;
      }
      *(undefined8 *)((long)puVar2 + lVar4 + 0x18) = *(undefined8 *)((long)puVar1 + lVar4 + 0x18);
      if (*(char *)((long)puVar1 + lVar4 + 0x37) < '\0') {
        func_0x000107c3192c((long)puVar2 + lVar4 + 0x20,*(undefined8 *)((long)puVar1 + lVar4 + 0x20)
                            ,*(undefined8 *)((long)puVar1 + lVar4 + 0x28));
      }
      else {
        uVar8 = *(undefined8 *)((long)puVar1 + lVar4 + 0x28);
        uVar7 = *(undefined8 *)((long)puVar1 + lVar4 + 0x20);
        *(undefined8 *)((long)puVar2 + lVar4 + 0x30) = *(undefined8 *)((long)puVar1 + lVar4 + 0x30);
        *(undefined8 *)((long)puVar2 + lVar4 + 0x28) = uVar8;
        *(undefined8 *)((long)puVar2 + lVar4 + 0x20) = uVar7;
      }
      *(undefined8 *)((long)puVar2 + lVar4 + 0x38) = *(undefined8 *)((long)puVar1 + lVar4 + 0x38);
      if (*(char *)((long)puVar1 + lVar4 + 0x57) < '\0') {
        func_0x000107c3192c((long)puVar2 + lVar4 + 0x40,*(undefined8 *)((long)puVar1 + lVar4 + 0x40)
                            ,*(undefined8 *)((long)puVar1 + lVar4 + 0x48));
      }
      else {
        uVar8 = *(undefined8 *)((long)puVar1 + lVar4 + 0x48);
        uVar7 = *(undefined8 *)((long)puVar1 + lVar4 + 0x40);
        *(undefined8 *)((long)puVar2 + lVar4 + 0x50) = *(undefined8 *)((long)puVar1 + lVar4 + 0x50);
        *(undefined8 *)((long)puVar2 + lVar4 + 0x48) = uVar8;
        *(undefined8 *)((long)puVar2 + lVar4 + 0x40) = uVar7;
      }
      *(undefined4 *)((long)puVar2 + lVar4 + 0x58) = *(undefined4 *)((long)puVar1 + lVar4 + 0x58);
      lVar4 = lVar4 + 0x60;
    } while ((undefined8 *)((long)puVar1 + lVar4) != puVar3);
    puVar2 = (undefined8 *)((long)puVar2 + lVar4);
  }
  return puVar2;
}



/* Entry: 10a7a53c4; end: 10a7a5527;  */

long FUN_10a7a53c4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_3 + lVar5);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        func_0x000107c3192c(puVar2,*puVar1,puVar1[1]);
      }
      else {
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar7;
        *puVar2 = uVar6;
      }
      lVar3 = param_3 + lVar5;
      lVar4 = param_1 + lVar5;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      if (*(char *)(lVar4 + 0x37) < '\0') {
        func_0x000107c3192c(lVar3 + 0x20,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28)
                           );
      }
      else {
        uVar7 = *(undefined8 *)(lVar4 + 0x28);
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar3 + 0x28) = uVar7;
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
      }
      lVar3 = param_3 + lVar5;
      lVar4 = param_1 + lVar5;
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
      if (*(char *)(lVar4 + 0x57) < '\0') {
        func_0x000107c3192c(lVar3 + 0x40,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48)
                           );
      }
      else {
        uVar7 = *(undefined8 *)(lVar4 + 0x48);
        uVar6 = *(undefined8 *)(lVar4 + 0x40);
        *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
        *(undefined8 *)(lVar3 + 0x48) = uVar7;
        *(undefined8 *)(lVar3 + 0x40) = uVar6;
      }
      *(undefined4 *)(param_3 + lVar5 + 0x58) = *(undefined4 *)(param_1 + lVar5 + 0x58);
      lVar5 = lVar5 + 0x60;
    } while (param_1 + lVar5 != param_2);
    param_3 = param_3 + lVar5;
  }
  return param_3;
}



/* Entry: 10a7a5528; end: 10a7a5613;  */

long FUN_10a7a5528(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x20,param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x40,param_1 + 0x40);
    *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    param_3 = param_3 + 0x60;
  }
  return param_3;
}



/* Entry: 10a7a5614; end: 10a7a5627;  */

void FUN_10a7a5614(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  plVar3 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if ((ulong)plVar3 >> 0x3d == 0) {
    __Znwm((long)plVar3 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)plVar3[1];
  if (puVar2 < (undefined8 *)plVar3[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar8 = (long)puVar2 - *plVar3;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a7a5720();
      plVar3 = (long *)&UNK_10f676ba7;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar8 = *plVar3;
      *plVar3 = 0;
      if (lVar8 != 0) {
        if ((char)plVar3[2] == '\x01') {
          func_0x00010a1f74b8(lVar8 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar8);
        return;
      }
      return;
    }
    uVar5 = plVar3[2] - *plVar3;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar4 = plVar3;
    FUN_10a7a5734();
    puVar2 = (undefined8 *)((long)plVar4 + lVar8);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar7 = (long)puVar2 - (plVar3[1] - *plVar3);
    _memcpy(lVar7);
    lVar8 = *plVar3;
    *plVar3 = lVar7;
    plVar3[1] = (long)puVar9;
    plVar3[2] = (long)(plVar4 + uVar6);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  plVar3[1] = (long)puVar9;
  return;
}



/* Entry: 10a7a5628; end: 10a7a565b;  */

void FUN_10a7a5628(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a7a5720();
      plVar3 = (long *)&UNK_10f676ba7;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar7 = *plVar3;
      *plVar3 = 0;
      if (lVar7 != 0) {
        if ((char)plVar3[2] == '\x01') {
          func_0x00010a1f74b8(lVar7 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar7);
        return;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a7a5734();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a7a565c; end: 10a7a571f;  */

void FUN_10a7a565c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a7a5720();
      plVar3 = (long *)&UNK_10f676ba7;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar7 = *plVar3;
      *plVar3 = 0;
      if (lVar7 != 0) {
        if ((char)plVar3[2] == '\x01') {
          func_0x00010a1f74b8(lVar7 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar7);
        return;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a7a5734();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a7a5720; end: 10a7a5733;  */

void FUN_10a7a5720(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    if ((char)plVar1[2] == '\x01') {
      func_0x00010a1f74b8(lVar2 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a5734; end: 10a7a57af;  */

void FUN_10a7a5734(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1f74b8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a57b0; end: 10a7a580b;  */

long * FUN_10a7a57b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a1f74b8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a580c; end: 10a7a581f;  */

void FUN_10a7a580c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = lVar4;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar4) {
      do {
        lVar3 = lVar2 + -0x28;
        lStack_48 = lVar2 + -0x18;
        FUN_10a436ac0(&lStack_48);
        func_0x00010a1f74b8(lVar3);
        lVar2 = lVar3;
      } while (lVar3 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a7a5820; end: 10a7a5907;  */

void FUN_10a7a5820(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    lVar1 = param_1[1];
    if (param_1[1] != lVar3) {
      do {
        lVar2 = lVar1 + -0x28;
        lStack_38 = lVar1 + -0x18;
        FUN_10a436ac0(&lStack_38);
        func_0x00010a1f74b8(lVar2);
        lVar1 = lVar2;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a5908; end: 10a7a5acb;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a5a90) */

void FUN_10a7a5908(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x23;
  
  lVar5 = *param_1;
  plVar2 = param_1;
  if (param_4 <= (long *)((param_1[2] - lVar5 >> 3) * -0x3333333333333333)) {
    lVar3 = param_1[1];
    if (param_4 <= (long *)((lVar3 - lVar5 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_2 + 0x20);
          param_2 = param_2 + 0x28;
          lVar5 = lVar5 + 0x28;
        } while (param_2 != param_3);
        lVar3 = param_1[1];
      }
      for (; lVar3 != lVar5; lVar3 = lVar3 + -0x28) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar3 - lVar5);
    if (lVar3 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        param_2 = param_2 + 0x28;
        lVar5 = lVar5 + 0x28;
      } while (param_2 != lVar1);
      lVar3 = param_1[1];
    }
    FUN_10a7a5b04(param_1,lVar1,param_3,lVar3);
LAB_10a7a5a40:
    param_1[1] = (long)plVar2;
    return;
  }
  plVar4 = param_1;
  lVar5 = param_2;
  FUN_10a7a5acc();
  if (param_4 < (long *)0x666666666666667) {
    lVar3 = param_1[2] - *param_1 >> 3;
    plVar4 = (long *)(lVar3 * -0x6666666666666666);
    if (plVar4 < param_4 || (long)plVar4 - (long)param_4 == 0) {
      plVar4 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      plVar4 = (long *)0x666666666666666;
    }
    if (plVar4 < (long *)0x666666666666667) {
      FUN_10a7a37f4();
      *param_1 = (long)plVar4;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)(plVar4 + lVar5 * 5);
      FUN_10a7a5b04(param_1,param_2,param_3,plVar4);
      goto LAB_10a7a5a40;
    }
  }
  FUN_10a7a37e0();
  param_1[1] = unaff_x23;
  __Unwind_Resume();
  param_1[1] = 0x666666666666666;
  __Unwind_Resume();
  if (*plVar4 != 0) {
    FUN_10a7a3f80();
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
  }
  return;
}



/* Entry: 10a7a5acc; end: 10a7a5b03;  */

void FUN_10a7a5acc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a7a3f80();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a5b04; end: 10a7a5bd3;  */

undefined8 *
FUN_10a7a5b04(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10a7a38f8(&uStack_60);
  return param_4;
}



/* Entry: 10a7a5bd4; end: 10a7a5d97;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a5d5c) */

void FUN_10a7a5bd4(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x23;
  undefined8 uVar6;
  
  lVar5 = *param_1;
  plVar2 = param_1;
  if (param_4 <= (long *)((param_1[2] - lVar5 >> 4) * -0x5555555555555555)) {
    lVar3 = param_1[1];
    if (param_4 <= (long *)((lVar3 - lVar5 >> 4) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar5 + 0x20) = uVar6;
          param_2 = param_2 + 0x30;
          lVar5 = lVar5 + 0x30;
        } while (param_2 != param_3);
        lVar3 = param_1[1];
      }
      for (; lVar3 != lVar5; lVar3 = lVar3 + -0x30) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar3 - lVar5);
    if (lVar3 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        param_2 = param_2 + 0x30;
        lVar5 = lVar5 + 0x30;
      } while (param_2 != lVar1);
      lVar3 = param_1[1];
    }
    FUN_10a7a5dd0(param_1,lVar1,param_3,lVar3);
LAB_10a7a5d0c:
    param_1[1] = (long)plVar2;
    return;
  }
  plVar4 = param_1;
  lVar5 = param_2;
  FUN_10a7a5d98();
  if (param_4 < (long *)0x555555555555556) {
    lVar3 = param_1[2] - *param_1 >> 4;
    plVar4 = (long *)(lVar3 * 0x5555555555555556);
    if (plVar4 < param_4 || (long)plVar4 - (long)param_4 == 0) {
      plVar4 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      plVar4 = (long *)0x555555555555555;
    }
    if (plVar4 < (long *)0x555555555555556) {
      FUN_10a7a3d14();
      *param_1 = (long)plVar4;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)(plVar4 + lVar5 * 6);
      FUN_10a7a5dd0(param_1,param_2,param_3,plVar4);
      goto LAB_10a7a5d0c;
    }
  }
  FUN_10a7a3d00();
  param_1[1] = unaff_x23;
  __Unwind_Resume();
  param_1[1] = 0x555555555555555;
  __Unwind_Resume();
  if (*plVar4 != 0) {
    FUN_10a7a3f04();
    __ZdlPv(*plVar4);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
  }
  return;
}



/* Entry: 10a7a5d98; end: 10a7a5dcf;  */

void FUN_10a7a5d98(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a7a3f04();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a5dd0; end: 10a7a5e9f;  */

undefined8 *
FUN_10a7a5dd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    uVar1 = param_2[4];
    param_4[5] = param_2[5];
    param_4[4] = uVar1;
    param_4 = puStack_38 + 6;
  }
  uStack_48 = 1;
  FUN_10a7a3e18(&uStack_60);
  return param_4;
}



/* Entry: 10a7a5ea0; end: 10a7a600f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a5fd4) */

void FUN_10a7a5ea0(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)(param_1[2] - lVar5 >> 5) < param_4) {
    plVar2 = param_1;
    FUN_10a7a6010();
    if (param_4 >> 0x3b != 0) {
      FUN_10a36f344();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = lVar5;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a021eb4();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1 >> 4;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0x7ffffffffffffff;
    }
    FUN_10a66dbb0(param_1,uVar4);
    FUN_10a7a6048(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)(lVar6 - lVar5 >> 5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          param_2 = param_2 + 0x20;
          lVar5 = lVar5 + 0x20;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x20) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        param_2 = param_2 + 0x20;
        lVar5 = lVar5 + 0x20;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a7a6048(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a7a6010; end: 10a7a6047;  */

void FUN_10a7a6010(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a021eb4();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a6048; end: 10a7a610f;  */

undefined8 *
FUN_10a7a6048(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a36f444(&uStack_60);
  return param_4;
}



/* Entry: 10a7a6110; end: 10a7a6123;  */

void FUN_10a7a6110(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar11 = (undefined8 *)&UNK_10f676ba7;
  FUN_109ffde64();
  uVar8 = puVar11[2];
  puVar13 = (undefined8 *)*puVar11;
  if ((ulong)((long)(uVar8 - (long)puVar13) >> 4) < param_4) {
    puVar9 = puVar11;
    puVar10 = param_2;
    puVar6 = param_3;
    uVar7 = param_4;
    if (puVar13 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puVar11[1];
      puVar9 = puVar13;
      if (puVar4 != puVar13) {
        do {
          puVar4 = puVar4 + -2;
          func_0x00010a042cd8();
        } while (puVar4 != puVar13);
        puVar9 = (undefined8 *)*puVar11;
      }
      puVar11[1] = puVar13;
      __ZdlPv();
      uVar8 = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a7a6324();
      if ((ulong)puVar10 >> 0x3c == 0) {
        puVar11 = puVar9;
        FUN_10a7a6338();
        *puVar9 = puVar11;
        puVar9[1] = puVar11;
        puVar9[2] = puVar11 + (long)puVar10 * 2;
        return;
      }
      FUN_10a7a6324();
      puVar5 = &UNK_10f676ba7;
      FUN_109ffde64();
      if ((ulong)puVar10 >> 0x3c == 0) {
        __Znwm((long)puVar10 << 4);
        return;
      }
      func_0x000109ffded8();
      if (uVar7 != 0) {
        FUN_10a7a62ec();
        puVar11 = *(undefined8 **)(puVar5 + 8);
        for (; puVar10 != puVar6; puVar10 = puVar10 + 2) {
          lVar12 = puVar10[1];
          uVar14 = *puVar10;
          puVar11[1] = puVar10[1];
          *puVar11 = uVar14;
          if (lVar12 != 0) {
            plVar1 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puVar11 = puVar11 + 2;
        }
        *(undefined8 **)(puVar5 + 8) = puVar11;
      }
      return;
    }
    uVar7 = (long)uVar8 >> 3;
    if ((ulong)((long)uVar8 >> 3) <= param_4) {
      uVar7 = param_4;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar7 = 0xfffffffffffffff;
    }
    FUN_10a7a62ec(puVar11,uVar7);
    puVar10 = (undefined8 *)puVar11[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar12 = param_2[1];
      uVar14 = *param_2;
      puVar10[1] = param_2[1];
      *puVar10 = uVar14;
      if (lVar12 != 0) {
        plVar1 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = puVar10 + 2;
    }
  }
  else {
    puVar10 = (undefined8 *)puVar11[1];
    lVar12 = (long)puVar10 - (long)puVar13;
    if (param_4 <= (ulong)(lVar12 >> 4)) {
      if (param_2 != param_3) {
        do {
          FUN_10a350d34(puVar13,param_2);
          param_2 = param_2 + 2;
          puVar13 = puVar13 + 2;
        } while (param_2 != param_3);
        puVar10 = (undefined8 *)puVar11[1];
      }
      while (puVar10 != puVar13) {
        puVar10 = puVar10 + -2;
        func_0x00010a042cd8();
      }
      puVar11[1] = puVar13;
      return;
    }
    puVar9 = (undefined8 *)((long)param_2 + lVar12);
    if (puVar10 != puVar13) {
      do {
        FUN_10a350d34(puVar13,param_2);
        param_2 = param_2 + 2;
        puVar13 = puVar13 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
      puVar10 = (undefined8 *)puVar11[1];
    }
    for (; puVar9 != param_3; puVar9 = puVar9 + 2) {
      lVar12 = puVar9[1];
      uVar14 = *puVar9;
      puVar10[1] = puVar9[1];
      *puVar10 = uVar14;
      if (lVar12 != 0) {
        plVar1 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = puVar10 + 2;
    }
  }
  puVar11[1] = puVar10;
  return;
}



/* Entry: 10a7a6124; end: 10a7a62eb;  */

void FUN_10a7a6124(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  uVar8 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar8 - (long)puVar12) >> 4) < param_4) {
    puVar9 = param_1;
    puVar10 = param_2;
    puVar6 = param_3;
    uVar7 = param_4;
    if (puVar12 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[1];
      puVar9 = puVar12;
      if (puVar4 != puVar12) {
        do {
          puVar4 = puVar4 + -2;
          func_0x00010a042cd8();
        } while (puVar4 != puVar12);
        puVar9 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar12;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a7a6324();
      if ((ulong)puVar10 >> 0x3c == 0) {
        puVar12 = puVar9;
        FUN_10a7a6338();
        *puVar9 = puVar12;
        puVar9[1] = puVar12;
        puVar9[2] = puVar12 + (long)puVar10 * 2;
        return;
      }
      FUN_10a7a6324();
      puVar5 = &UNK_10f676ba7;
      FUN_109ffde64();
      if ((ulong)puVar10 >> 0x3c == 0) {
        __Znwm((long)puVar10 << 4);
        return;
      }
      func_0x000109ffded8();
      if (uVar7 != 0) {
        FUN_10a7a62ec();
        puVar12 = *(undefined8 **)(puVar5 + 8);
        for (; puVar10 != puVar6; puVar10 = puVar10 + 2) {
          lVar11 = puVar10[1];
          uVar13 = *puVar10;
          puVar12[1] = puVar10[1];
          *puVar12 = uVar13;
          if (lVar11 != 0) {
            plVar1 = (long *)(lVar11 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puVar12 = puVar12 + 2;
        }
        *(undefined8 **)(puVar5 + 8) = puVar12;
      }
      return;
    }
    uVar7 = (long)uVar8 >> 3;
    if ((ulong)((long)uVar8 >> 3) <= param_4) {
      uVar7 = param_4;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar7 = 0xfffffffffffffff;
    }
    FUN_10a7a62ec(param_1,uVar7);
    puVar10 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar11 = param_2[1];
      uVar13 = *param_2;
      puVar10[1] = param_2[1];
      *puVar10 = uVar13;
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = puVar10 + 2;
    }
  }
  else {
    puVar10 = (undefined8 *)param_1[1];
    lVar11 = (long)puVar10 - (long)puVar12;
    if (param_4 <= (ulong)(lVar11 >> 4)) {
      if (param_2 != param_3) {
        do {
          FUN_10a350d34(puVar12,param_2);
          param_2 = param_2 + 2;
          puVar12 = puVar12 + 2;
        } while (param_2 != param_3);
        puVar10 = (undefined8 *)param_1[1];
      }
      while (puVar10 != puVar12) {
        puVar10 = puVar10 + -2;
        func_0x00010a042cd8();
      }
      param_1[1] = puVar12;
      return;
    }
    puVar9 = (undefined8 *)((long)param_2 + lVar11);
    if (puVar10 != puVar12) {
      do {
        FUN_10a350d34(puVar12,param_2);
        param_2 = param_2 + 2;
        puVar12 = puVar12 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
      puVar10 = (undefined8 *)param_1[1];
    }
    for (; puVar9 != param_3; puVar9 = puVar9 + 2) {
      lVar11 = puVar9[1];
      uVar13 = *puVar9;
      puVar10[1] = puVar9[1];
      *puVar10 = uVar13;
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = puVar10 + 2;
    }
  }
  param_1[1] = puVar10;
  return;
}



/* Entry: 10a7a62ec; end: 10a7a6323;  */

void FUN_10a7a62ec(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10a7a6338();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    return;
  }
  FUN_10a7a6324();
  puVar4 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a7a62ec();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a7a6324; end: 10a7a6337;  */

void FUN_10a7a6324(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a7a62ec();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a7a6338; end: 10a7a636b;  */

void FUN_10a7a6338(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a7a62ec();
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a7a636c; end: 10a7a6407;  */

void FUN_10a7a636c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a7a62ec(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a7a6408; end: 10a7a646f;  */

void FUN_10a7a6408(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x30;
        FUN_10a350abc(lVar1 + -0x18);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a7a6470; end: 10a7a64bb;  */

long * FUN_10a7a6470(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a042cd8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a7a64bc; end: 10a7a64cb;  */

void FUN_10a7a64bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c183d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7a64cc; end: 10a7a64eb;  */

void FUN_10a7a64cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c183d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a64ec; end: 10a7a6707;  */

void FUN_10a7a64ec(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_70;
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined4 uStack_50;
  
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar4 == (long *)0x0) goto LAB_10a7a66a4;
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    uStack_68 = 0;
    lStack_70 = 0;
    lStack_58 = 0;
    plStack_60 = (long *)0x0;
    uStack_50 = 0x3f800000;
    uVar9 = param_1 + 0x38;
    FUN_10a7acec0();
    plVar5 = (long *)0x20;
    __Znwm();
    *plVar5 = 0;
    plVar5[1] = uVar9;
    lVar10 = *(long *)(param_1 + 0x38);
    plVar5[3] = *(long *)(param_1 + 0x40);
    plVar5[2] = lVar10;
    FUN_10a7acf10(&lStack_70,1);
    uVar6 = uStack_68 - 1;
    if ((uStack_68 & uVar6) == 0) {
      uVar9 = uVar6 & uVar9;
    }
    else if (uStack_68 <= uVar9) {
      uVar3 = 0;
      if (uStack_68 != 0) {
        uVar3 = uVar9 / uStack_68;
      }
      uVar9 = uVar9 - uVar3 * uStack_68;
    }
    plVar7 = *(long **)(lStack_70 + uVar9 * 8);
    if (plVar7 == (long *)0x0) {
      *plVar5 = (long)plStack_60;
      *(long ***)(lStack_70 + uVar9 * 8) = &plStack_60;
      plStack_60 = plVar5;
      if (*plVar5 != 0) {
        uVar9 = *(ulong *)(*plVar5 + 8);
        if ((uStack_68 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uStack_68 <= uVar9) {
          uVar6 = 0;
          if (uStack_68 != 0) {
            uVar6 = uVar9 / uStack_68;
          }
          uVar9 = uVar9 - uVar6 * uStack_68;
        }
        plVar7 = (long *)(lStack_70 + uVar9 * 8);
        goto LAB_10a7a65f0;
      }
    }
    else {
      *plVar5 = *plVar7;
LAB_10a7a65f0:
      *plVar7 = (long)plVar5;
    }
    lStack_58 = lStack_58 + 1;
    FUN_10a773cbc(lVar8,param_1 + 0x38,&lStack_70,lVar8 + 0x68,1);
    for (plVar5 = plStack_60; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      FUN_10a773b6c(lVar8,plVar5[2],plVar5[3],0);
    }
    FUN_10a7ad0e0(&lStack_70);
    *(float *)(lVar8 + 0x90) =
         *(float *)(lVar8 + 0x90) -
         (float)((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) *
                (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38))) /
         (float)(*(int *)(lVar8 + 0x84) * *(int *)(lVar8 + 0x80));
  }
  plVar5 = plVar4 + 1;
  do {
    lVar8 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a7a66a4:
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a7a6708; end: 10a7a670b;  */

void FUN_10a7a6708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a670c; end: 10a7a671f;  */

undefined * FUN_10a7a670c(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f676ba7;
  FUN_109ffde64();
  if ((puVar1[8] & 1) == 0) {
    FUN_10a7a6754(puVar1);
  }
  return puVar1;
}



/* Entry: 10a7a6720; end: 10a7a6753;  */

long FUN_10a7a6720(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10a7a6754(param_1);
  }
  return param_1;
}



/* Entry: 10a7a6754; end: 10a7a6c87;  */

void FUN_10a7a6754(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar4 = *param_1 - (ulong)uRam0000000113301c20;
    uVar1 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc7eb8;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = *param_1 - (ulong)uRam0000000113301c20;
        uVar1 = *(ushort *)(lVar4 + 0x70);
        if (((uVar1 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar1 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar1 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar3 = (ulong)uRam0000000113301c20;
        if ((*(ushort *)((lVar4 - uVar3) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar3 = (ulong)uRam0000000113301c20;
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar3 = (ulong)uRam0000000113301c20;
          }
        }
        FUN_10a1c054c((lVar4 - uVar3) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar5 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc7eb8 || ppuVar5 != &PTR_DAT_110bc7eb8) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc7eb8) {
          FUN_10a1bd648(param_1,lVar4 + 0xd0,&PTR_DAT_110bc7eb8);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc7eb8;
        }
        if (ppuVar5 != &PTR_DAT_110bc7eb8) {
          FUN_10a1bd7d8(param_1,lVar4 + 0x40,&PTR_DAT_110bc7eb8);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc7eb8;
        }
      }
    }
  }
  return;
}



/* Entry: 10a7a6c88; end: 10a7a6d57;  */

void FUN_10a7a6c88(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a7a6cb0;
LAB_10a7a6cec:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a7a6d48;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a7a6cec;
LAB_10a7a6cb0:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a7a6d48;
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
    if (uVar4 == uVar2) goto LAB_10a7a6d48;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a7a6d48:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a7a6d58; end: 10a7a6de3;  */

undefined8 * FUN_10a7a6d58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = param_2[3];
  param_1[4] = 0;
  param_1[3] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10a7a636c();
  return param_1;
}



/* Entry: 10a7a6de4; end: 10a7a6e2b;  */

void FUN_10a7a6de4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a436a7c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a6e2c; end: 10a7a6ffb;  */

long * FUN_10a7a6e2c(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  plVar5 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) {
      return plVar5;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar12 <= param_2) {
      return plVar5;
    }
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)*param_1;
      *param_1 = 0;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar5;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (param_2 != plVar6);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar12 = (long *)plVar6[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar7);
      }
      else if (param_2 <= plVar12) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar12 / (ulong)param_2;
        }
        plVar12 = (long *)((long)plVar12 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar6;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar12) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar6;
            plVar12 = plVar11;
          }
          else {
            *plVar6 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + (long)plVar11 * 8);
            **(long **)(lVar4 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar6;
          }
        }
        plVar6 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
    return plVar5;
  }
  func_0x000109ffded8();
  if (plVar5 == plVar6) {
    return (long *)0x0;
  }
  do {
    plVar12 = (long *)plVar5[1];
    if (plVar12 == (long *)0x0) {
      lVar4 = *param_3;
LAB_10a7a7088:
      if (lVar4 == 0) {
        return (long *)0x1;
      }
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      lVar4 = *param_3;
      if (plVar12 == (long *)0x0) goto LAB_10a7a7088;
      lVar13 = *plVar5;
      plVar9 = plVar12 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      if (lVar13 == lVar4) {
        return (long *)0x1;
      }
    }
    plVar5 = plVar5 + 2;
    if (plVar5 == plVar6) {
      return (long *)0x0;
    }
  } while( true );
}



/* Entry: 10a7a6ffc; end: 10a7a70b7;  */

undefined8 FUN_10a7a6ffc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return 0;
  }
  do {
    plVar4 = (long *)param_1[1];
    if (plVar4 == (long *)0x0) {
      lVar6 = *param_3;
LAB_10a7a7088:
      if (lVar6 == 0) {
        return 1;
      }
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      lVar6 = *param_3;
      if (plVar4 == (long *)0x0) goto LAB_10a7a7088;
      lVar7 = *param_1;
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      if (lVar7 == lVar6) {
        return 1;
      }
    }
    param_1 = param_1 + 2;
    if (param_1 == param_2) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a7a70b8; end: 10a7a7143;  */

long FUN_10a7a70b8(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x108) == '\x01') {
    lStack_28 = param_1 + 0xe8;
    FUN_10a044868(&lStack_28);
    func_0x00010a7b1c58(*(undefined8 *)(param_1 + 0xd8));
    func_0x00010a7b1c58(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010a363354(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xa8));
    func_0x00010a363354(param_1 + 0x88,*(undefined8 *)(param_1 + 0x90));
    lStack_28 = param_1 + 0x60;
    FUN_10a044868(&lStack_28);
    func_0x00010a7a3ed4(param_1 + 0x48);
    FUN_10a7a3f50(param_1 + 0x30);
  }
  return param_1;
}



/* Entry: 10a7a7144; end: 10a7a727f;  */

void FUN_10a7a7144(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a4477a4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a7280; end: 10a7a72e3;  */

void FUN_10a7a7280(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 0xc;
  FUN_10a7a76a4(&puStack_28);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  puStack_28 = param_1 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a7a72e4; end: 10a7a731f;  */

long * FUN_10a7a72e4(undefined8 param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined *puVar14;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  FUN_109ffde64(&UNK_10f676ba7);
  uStack_18 = 0x10a7a72f8;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_109ffde64(&UNK_10f676ba7);
  uStack_28 = 0x10a7a730c;
  plVar3 = (long *)&UNK_10f676ba7;
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_109ffde64();
  pcStack_38 = FUN_10a7a7320;
  plVar4 = (long *)plVar3[1];
  if (plVar3[2] - (long)plVar4 < 9) {
    lVar8 = *plVar3;
    uVar1 = ((long)plVar4 - lVar8 >> 2) + 3;
    if (uVar1 >> 0x3e != 0) {
      puStack_40 = (undefined1 *)&puStack_30;
      FUN_109ffe1ac();
      pcStack_78 = FUN_10a7a7528;
      if ((char)plVar3[0xb] == '\x01') {
        plStack_98 = plVar3 + 8;
        plStack_90 = param_3;
        plStack_88 = param_2;
        ppuStack_80 = &puStack_40;
        FUN_10a7a76a4(&plStack_98);
        if (*(char *)((long)plVar3 + 0x37) < '\0') {
          __ZdlPv(plVar3[4]);
        }
        plStack_98 = plVar3;
        func_0x00010a1f4614(&plStack_98);
      }
      return plVar3;
    }
    uVar6 = plVar3[2] - lVar8;
    uVar9 = (long)uVar6 >> 1;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar9 = 0x3fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
      puStack_40 = (undefined1 *)&puStack_30;
    }
    else {
      plVar4 = plVar3;
      puStack_40 = (undefined1 *)&puStack_30;
      FUN_109ffe1c0();
    }
    lVar7 = 0;
    do {
      *(undefined4 *)((long)plVar4 + (long)((long)param_2 + (lVar7 - lVar8))) =
           *(undefined4 *)((long)param_3 + lVar7);
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xc);
    puVar2 = (undefined *)((long)plVar4 + (long)((long)param_2 + (0xc - lVar8)));
    _memcpy(puVar2,param_2,plVar3[1] - (long)param_2);
    lVar7 = plVar3[1];
    plVar3[1] = (long)param_2;
    puVar14 = (undefined *)((long)plVar4 + (*plVar3 - lVar8));
    _memcpy(puVar14);
    plVar5 = (long *)*plVar3;
    *plVar3 = (long)puVar14;
    plVar3[1] = (long)(puVar2 + (lVar7 - (long)param_2));
    plVar3[2] = (long)((long)plVar4 + uVar9 * 4);
    plVar3 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar5;
    }
  }
  else {
    lVar8 = (long)plVar4 - (long)param_2;
    if (lVar8 >> 2 < 3) {
      plVar5 = plVar4;
      plVar10 = plVar4;
      for (puVar12 = (undefined4 *)((long)param_3 + lVar8); puVar12 != param_4;
          puVar12 = puVar12 + 1) {
        *(undefined4 *)plVar10 = *puVar12;
        plVar5 = (long *)((long)plVar5 + 4);
        plVar10 = (long *)((long)plVar10 + 4);
      }
      plVar3[1] = (long)plVar5;
      if (0 < lVar8 >> 2) {
        plVar11 = (long *)((long)param_2 + 0xc);
        plVar13 = (long *)((long)plVar5 + -0xc);
        for (; plVar13 < plVar4; plVar13 = (long *)((long)plVar13 + 4)) {
          *(int *)plVar5 = (int)*plVar13;
          plVar5 = (long *)((long)plVar5 + 4);
        }
        plVar3[1] = (long)plVar5;
        puStack_40 = (undefined1 *)&puStack_30;
        if (plVar10 != plVar11) {
          puStack_40 = (undefined1 *)&puStack_30;
          _memmove(plVar11,param_2);
          plVar3 = plVar11;
        }
        if (plVar4 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar8);
          return param_2;
        }
      }
    }
    else {
      plVar5 = (long *)((long)param_2 + 0xc);
      plVar10 = plVar4;
      for (plVar11 = (long *)((long)plVar4 + -0xc); plVar11 < plVar4;
          plVar11 = (long *)((long)plVar11 + 4)) {
        *(int *)plVar10 = (int)*plVar11;
        plVar10 = (long *)((long)plVar10 + 4);
      }
      plVar3[1] = (long)plVar10;
      if (plVar4 != plVar5) {
        puStack_40 = (undefined1 *)&puStack_30;
        _memmove(plVar5,param_2);
        plVar3 = plVar5;
      }
      lVar8 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_2 = lVar8;
    }
  }
  return plVar3;
}



/* Entry: 10a7a7320; end: 10a7a7527;  */

long * FUN_10a7a7320(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar3 = (long *)param_1[1];
  if (param_1[2] - (long)plVar3 < 9) {
    lVar7 = *param_1;
    uVar1 = ((long)plVar3 - lVar7 >> 2) + 3;
    if (uVar1 >> 0x3e != 0) {
      FUN_109ffe1ac();
      pcStack_48 = FUN_10a7a7528;
      if ((char)param_1[0xb] == '\x01') {
        plStack_68 = param_1 + 8;
        plStack_60 = param_3;
        plStack_58 = param_2;
        puStack_50 = &stack0xfffffffffffffff0;
        FUN_10a7a76a4(&plStack_68);
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          __ZdlPv(param_1[4]);
        }
        plStack_68 = param_1;
        func_0x00010a1f4614(&plStack_68);
      }
      return param_1;
    }
    uVar5 = param_1[2] - lVar7;
    uVar8 = (long)uVar5 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109ffe1c0();
    }
    lVar6 = 0;
    do {
      *(undefined4 *)((long)plVar3 + (long)param_2 + (lVar6 - lVar7)) =
           *(undefined4 *)((long)param_3 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xc);
    lVar6 = (long)plVar3 + (long)param_2 + (0xc - lVar7);
    _memcpy(lVar6,param_2,param_1[1] - (long)param_2);
    lVar2 = param_1[1];
    param_1[1] = (long)param_2;
    lVar7 = (long)plVar3 + (*param_1 - lVar7);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar6 + (lVar2 - (long)param_2);
    param_1[2] = (long)plVar3 + uVar8 * 4;
    param_1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    lVar7 = (long)plVar3 - (long)param_2;
    if (lVar7 >> 2 < 3) {
      plVar4 = plVar3;
      plVar9 = plVar3;
      for (puVar11 = (undefined4 *)((long)param_3 + lVar7); puVar11 != param_4;
          puVar11 = puVar11 + 1) {
        *(undefined4 *)plVar9 = *puVar11;
        plVar4 = (long *)((long)plVar4 + 4);
        plVar9 = (long *)((long)plVar9 + 4);
      }
      param_1[1] = (long)plVar4;
      if (0 < lVar7 >> 2) {
        plVar10 = (long *)((long)param_2 + 0xc);
        plVar12 = (long *)((long)plVar4 - 0xc);
        for (; plVar12 < plVar3; plVar12 = (long *)((long)plVar12 + 4)) {
          *(int *)plVar4 = (int)*plVar12;
          plVar4 = (long *)((long)plVar4 + 4);
        }
        param_1[1] = (long)plVar4;
        if (plVar9 != plVar10) {
          _memmove(plVar10,param_2);
          param_1 = plVar10;
        }
        if (plVar3 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar7);
          return param_2;
        }
      }
    }
    else {
      plVar4 = (long *)((long)param_2 + 0xc);
      plVar9 = plVar3;
      for (plVar10 = (long *)((long)plVar3 - 0xc); plVar10 < plVar3;
          plVar10 = (long *)((long)plVar10 + 4)) {
        *(int *)plVar9 = (int)*plVar10;
        plVar9 = (long *)((long)plVar9 + 4);
      }
      param_1[1] = (long)plVar9;
      if (plVar3 != plVar4) {
        _memmove(plVar4,param_2);
        param_1 = plVar4;
      }
      lVar7 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_2 = lVar7;
    }
  }
  return param_1;
}



/* Entry: 10a7a7528; end: 10a7a75fb;  */

long FUN_10a7a7528(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lStack_28 = param_1 + 0x40;
    FUN_10a7a76a4(&lStack_28);
    if (*(char *)(param_1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
    lStack_28 = param_1;
    func_0x00010a1f4614(&lStack_28);
  }
  return param_1;
}



/* Entry: 10a7a75fc; end: 10a7a7623;  */

void FUN_10a7a75fc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_109ffde64(&UNK_10f676ba7);
  plVar2 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  lVar3 = *param_2;
  *param_2 = 0;
  *plVar2 = lVar3;
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  plVar2[2] = param_2[2];
  plVar2[1] = lVar4;
  param_2[1] = 0;
  lVar4 = param_2[3];
  plVar2[3] = lVar4;
  *(int *)(plVar2 + 4) = (int)param_2[4];
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    uVar7 = plVar2[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(long **)(lVar3 + uVar6 * 8) = plVar2 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a7a7624; end: 10a7a768f;  */

void FUN_10a7a7624(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a7a7690; end: 10a7a76a3;  */

void FUN_10a7a7690(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a7b6008();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a7a76a4; end: 10a7a7713;  */

void FUN_10a7a76a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a7b6008();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a7714; end: 10a7a77a7;  */

long FUN_10a7a7714(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c28478(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
    if (*(long *)(param_1 + 0xa8) != 0) {
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
      __ZdlPv();
    }
    FUN_10a7c5b24(param_1 + 0x68);
    if (*(long *)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
    lStack_28 = param_1;
    func_0x00010a1f4614(&lStack_28);
  }
  return param_1;
}



/* Entry: 10a7a77a8; end: 10a7a77af;  */

void FUN_10a7a77a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a77ac);
  (*pcVar1)();
}



/* Entry: 10a7a77b0; end: 10a7a780b;  */

void FUN_10a7a77b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x228;
        FUN_10a58e034();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a7a780c; end: 10a7a781f;  */

void FUN_10a7a780c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10f676ba7;
  FUN_109ffde64();
  if (param_4 != 0) {
    func_0x00010a191c6c();
    puVar2 = *(undefined8 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar3 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar3;
      puVar2 = puVar2 + 2;
    }
    *(undefined8 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10a7a7820; end: 10a7a788f;  */

void FUN_10a7a7820(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    func_0x00010a191c6c(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a7a7890; end: 10a7a7a3f;  */

undefined8 * FUN_10a7a7890(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_1 = *param_2;
    FUN_10a14c0b0(param_1 + 1,param_2 + 1);
    param_1[0x36] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x36];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar4;
    if (param_1[0x37] != 0) {
      piVar3 = (int *)(param_1[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x36] = &PTR_DAT_110b05358;
    param_1[0x38] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    param_1[0x38] = uVar4;
    if (param_1[0x39] != 0) {
      piVar3 = (int *)(param_1[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x38] = &PTR_DAT_110b05018;
    param_1[0x3a] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3a] = uVar4;
    if (param_1[0x3b] != 0) {
      piVar3 = (int *)(param_1[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3a] = &PTR_DAT_110b05018;
    param_1[0x3c] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3c];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3c] = uVar4;
    if (param_1[0x3d] != 0) {
      piVar3 = (int *)(param_1[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3c] = &PTR_DAT_110b05018;
    param_1[0x3e] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3e];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x3e] = uVar4;
    if (param_1[0x3f] != 0) {
      piVar3 = (int *)(param_1[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3e] = &PTR_DAT_110b05018;
    param_1[0x40] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x40];
    param_1[0x41] = param_2[0x41];
    param_1[0x40] = uVar4;
    if (param_1[0x41] != 0) {
      piVar3 = (int *)(param_1[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x40] = &PTR_DAT_110b05018;
    param_1[0x42] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x42];
    param_1[0x43] = param_2[0x43];
    param_1[0x42] = uVar4;
    if (param_1[0x43] != 0) {
      piVar3 = (int *)(param_1[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x42] = &PTR_DAT_110b05018;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return param_1;
}



/* Entry: 10a7a7a40; end: 10a7a7a53;  */

void FUN_10a7a7a40(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  float *pfVar4;
  code *pcVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  long lVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  pfVar6 = (float *)&UNK_10f676ba7;
  FUN_109ffde64();
LAB_10a7a7a84:
  pfVar14 = param_2 + -4;
  pfVar12 = pfVar6;
LAB_10a7a7a94:
  do {
    pfVar6 = pfVar12;
    uVar9 = (long)param_2 - (long)pfVar6 >> 4;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        pfVar12 = param_2 + -4;
        if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar12) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
          return;
        }
        uVar33 = *(undefined8 *)(pfVar6 + 2);
        uVar34 = *(undefined8 *)pfVar6;
        uVar35 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)pfVar6 = uVar35;
        *(undefined8 *)(param_2 + -2) = uVar33;
        *(undefined8 *)pfVar12 = uVar34;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        pfVar12 = pfVar6 + 4;
        fVar25 = ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar14) *
                 ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar14 >> 0x20));
        fVar28 = ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                 ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar12 >> 0x20));
        if (fVar28 <= ((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                      ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                      (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
          if (fVar28 < fVar25) {
            uVar35 = *(undefined8 *)(pfVar6 + 6);
            uVar34 = *(undefined8 *)pfVar12;
            uVar33 = *(undefined8 *)pfVar14;
            *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar12 = uVar33;
            *(undefined8 *)(param_2 + -2) = uVar35;
            *(undefined8 *)pfVar14 = uVar34;
            if (((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar12 >> 0x20))) {
              uVar35 = *(undefined8 *)(pfVar6 + 2);
              uVar34 = *(undefined8 *)pfVar6;
              *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 6);
              *(undefined8 *)pfVar6 = *(undefined8 *)pfVar12;
              *(undefined8 *)(pfVar6 + 6) = uVar35;
              *(undefined8 *)pfVar12 = uVar34;
            }
          }
        }
        else {
          if (fVar25 <= fVar28) {
            uVar35 = *(undefined8 *)(pfVar6 + 2);
            uVar34 = *(undefined8 *)pfVar6;
            *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 6);
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar6 + 6) = uVar35;
            *(undefined8 *)pfVar12 = uVar34;
            if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar14) *
                ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar14 >> 0x20)) <=
                ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar12 >> 0x20))) {
              return;
            }
            uVar34 = *(undefined8 *)(pfVar6 + 6);
            uVar26 = (undefined4)*(undefined8 *)pfVar12;
            uVar27 = (undefined4)((ulong)*(undefined8 *)pfVar12 >> 0x20);
            uVar35 = *(undefined8 *)pfVar14;
            *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar12 = uVar35;
          }
          else {
            uVar34 = *(undefined8 *)(pfVar6 + 2);
            uVar26 = (undefined4)*(undefined8 *)pfVar6;
            uVar27 = (undefined4)((ulong)*(undefined8 *)pfVar6 >> 0x20);
            uVar35 = *(undefined8 *)pfVar14;
            *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar6 = uVar35;
          }
          *(undefined8 *)(param_2 + -2) = uVar34;
          *(ulong *)pfVar14 = CONCAT44(uVar27,uVar26);
        }
        return;
      }
      if (uVar9 == 4) {
        FUN_10a7a837c(pfVar6,pfVar6 + 4,pfVar6 + 8);
        pfVar12 = param_2 + -4;
        if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar12) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)(pfVar6 + 8)) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar6 + 8) >> 0x20))) {
          return;
        }
        uVar35 = *(undefined8 *)(pfVar6 + 10);
        uVar34 = *(undefined8 *)(pfVar6 + 8);
        uVar33 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar6 + 10) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(pfVar6 + 8) = uVar33;
        *(undefined8 *)(param_2 + -2) = uVar35;
        *(undefined8 *)pfVar12 = uVar34;
        if (((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)(pfVar6 + 8)) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar6 + 8) >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)(pfVar6 + 4)) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20))) {
          return;
        }
        uVar35 = *(undefined8 *)(pfVar6 + 6);
        uVar34 = *(undefined8 *)(pfVar6 + 4);
        *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(pfVar6 + 10);
        *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(pfVar6 + 8);
        *(undefined8 *)(pfVar6 + 10) = uVar35;
        *(undefined8 *)(pfVar6 + 8) = uVar34;
        if (((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)(pfVar6 + 4)) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
          return;
        }
        uVar35 = *(undefined8 *)(pfVar6 + 2);
        uVar34 = *(undefined8 *)pfVar6;
        *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 6);
        *(undefined8 *)pfVar6 = *(undefined8 *)(pfVar6 + 4);
        *(undefined8 *)(pfVar6 + 6) = uVar35;
        *(undefined8 *)(pfVar6 + 4) = uVar34;
        return;
      }
      if (uVar9 == 5) {
        pfVar12 = pfVar6 + 4;
        pfVar7 = pfVar6 + 8;
        pfVar8 = pfVar6 + 0xc;
        FUN_10a7a837c();
        if (((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)pfVar7) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <
            ((float)*(undefined8 *)(pfVar6 + 0xe) - (float)*(undefined8 *)pfVar8) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar8 >> 0x20))) {
          uVar35 = *(undefined8 *)(pfVar6 + 10);
          uVar34 = *(undefined8 *)pfVar7;
          *(undefined8 *)(pfVar6 + 10) = *(undefined8 *)(pfVar6 + 0xe);
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
          *(undefined8 *)(pfVar6 + 0xe) = uVar35;
          *(undefined8 *)pfVar8 = uVar34;
          if (((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
              ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) <
              ((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)pfVar7) *
              ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar7 >> 0x20))) {
            uVar35 = *(undefined8 *)(pfVar6 + 6);
            uVar34 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(pfVar6 + 10);
            *(undefined8 *)pfVar12 = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar6 + 10) = uVar35;
            *(undefined8 *)pfVar7 = uVar34;
            if (((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar12 >> 0x20))) {
              uVar35 = *(undefined8 *)(pfVar6 + 2);
              uVar34 = *(undefined8 *)pfVar6;
              *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 6);
              *(undefined8 *)pfVar6 = *(undefined8 *)pfVar12;
              *(undefined8 *)(pfVar6 + 6) = uVar35;
              *(undefined8 *)pfVar12 = uVar34;
            }
          }
        }
        if (((float)*(undefined8 *)(pfVar6 + 0xe) - (float)*(undefined8 *)pfVar8) *
            ((float)((ulong)*(undefined8 *)(pfVar6 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar8 >> 0x20)) <
            ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar14) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar14 >> 0x20))) {
          uVar35 = *(undefined8 *)(pfVar6 + 0xe);
          uVar34 = *(undefined8 *)pfVar8;
          uVar33 = *(undefined8 *)pfVar14;
          *(undefined8 *)(pfVar6 + 0xe) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)pfVar8 = uVar33;
          *(undefined8 *)(param_2 + -2) = uVar35;
          *(undefined8 *)pfVar14 = uVar34;
          if (((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)pfVar7) *
              ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <
              ((float)*(undefined8 *)(pfVar6 + 0xe) - (float)*(undefined8 *)pfVar8) *
              ((float)((ulong)*(undefined8 *)(pfVar6 + 0xe) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar8 >> 0x20))) {
            uVar35 = *(undefined8 *)(pfVar6 + 10);
            uVar34 = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar6 + 10) = *(undefined8 *)(pfVar6 + 0xe);
            *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
            *(undefined8 *)(pfVar6 + 0xe) = uVar35;
            *(undefined8 *)pfVar8 = uVar34;
            if (((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar6 + 10) - (float)*(undefined8 *)pfVar7) *
                ((float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar7 >> 0x20))) {
              uVar35 = *(undefined8 *)(pfVar6 + 6);
              uVar34 = *(undefined8 *)pfVar12;
              *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(pfVar6 + 10);
              *(undefined8 *)pfVar12 = *(undefined8 *)pfVar7;
              *(undefined8 *)(pfVar6 + 10) = uVar35;
              *(undefined8 *)pfVar7 = uVar34;
              if (((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                  ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
                  ((float)*(undefined8 *)(pfVar6 + 6) - (float)*(undefined8 *)pfVar12) *
                  ((float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20) -
                  (float)((ulong)*(undefined8 *)pfVar12 >> 0x20))) {
                uVar35 = *(undefined8 *)(pfVar6 + 2);
                uVar34 = *(undefined8 *)pfVar6;
                *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 6);
                *(undefined8 *)pfVar6 = *(undefined8 *)pfVar12;
                *(undefined8 *)(pfVar6 + 6) = uVar35;
                *(undefined8 *)pfVar12 = uVar34;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      pfVar12 = pfVar6 + 4;
      if ((param_4 & 1) == 0) {
        if (pfVar6 == param_2 || pfVar12 == param_2) {
          return;
        }
        lVar15 = 0;
        lVar20 = 0x10;
        do {
          puVar2 = (undefined8 *)((long)pfVar6 + lVar15);
          fVar28 = *pfVar12;
          fVar31 = *(float *)((long)puVar2 + 0x14);
          fVar25 = *(float *)(puVar2 + 3);
          fVar29 = *(float *)((long)puVar2 + 0x1c);
          fVar32 = (fVar25 - fVar28) * (fVar29 - fVar31);
          if (((float)puVar2[1] - (float)*puVar2) *
              ((float)((ulong)puVar2[1] >> 0x20) - (float)((ulong)*puVar2 >> 0x20)) < fVar32) {
            do {
              lVar11 = lVar15;
              puVar2 = (undefined8 *)((long)pfVar6 + lVar11);
              puVar2[3] = puVar2[1];
              puVar2[2] = *puVar2;
              if (lVar11 == -0x10) {
LAB_10a7a8378:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7a837c);
                (*pcVar5)();
              }
              lVar15 = lVar11 + -0x10;
            } while (((float)puVar2[-1] - (float)puVar2[-2]) *
                     ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) <
                     fVar32);
            *(float *)((long)pfVar6 + lVar11) = fVar28;
            *(float *)((long)pfVar6 + lVar11 + 4) = fVar31;
            *(float *)((long)pfVar6 + lVar11 + 8) = fVar25;
            *(float *)((long)pfVar6 + lVar11 + 0xc) = fVar29;
          }
          pfVar12 = (float *)((long)pfVar6 + lVar20 + 0x10);
          lVar15 = lVar20;
          lVar20 = lVar20 + 0x10;
          if (pfVar12 == param_2) {
            return;
          }
        } while( true );
      }
      if (pfVar6 == param_2 || pfVar12 == param_2) {
        return;
      }
      lVar15 = 0;
      pfVar14 = pfVar6;
      break;
    }
    if (param_3 == 0) {
      if (pfVar6 == param_2) {
        return;
      }
      uVar13 = uVar9 - 2 >> 1;
      uVar17 = uVar13;
      goto LAB_10a7a8050;
    }
    pfVar12 = pfVar6 + (uVar9 >> 1) * 4;
    if (uVar9 < 0x81) {
      FUN_10a7a837c(pfVar12,pfVar6,pfVar14);
    }
    else {
      FUN_10a7a837c(pfVar6,pfVar12,pfVar14);
      FUN_10a7a837c(pfVar6 + 4,pfVar12 + -4,param_2 + -8);
      FUN_10a7a837c(pfVar6 + 8,pfVar12 + 4,param_2 + -0xc);
      FUN_10a7a837c(pfVar12 + -4,pfVar12,pfVar12 + 4);
      uVar33 = *(undefined8 *)(pfVar6 + 2);
      uVar34 = *(undefined8 *)pfVar6;
      uVar35 = *(undefined8 *)pfVar12;
      *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar12 + 2);
      *(undefined8 *)pfVar6 = uVar35;
      *(undefined8 *)(pfVar12 + 2) = uVar33;
      *(undefined8 *)pfVar12 = uVar34;
    }
    param_3 = param_3 + -1;
    fVar25 = *pfVar6;
    if ((param_4 & 1) != 0) {
      fVar31 = pfVar6[1];
      fVar28 = pfVar6[2];
      fVar29 = pfVar6[3];
      fVar32 = (fVar28 - fVar25) * (fVar29 - fVar31);
LAB_10a7a7ba8:
      lVar15 = 0;
      do {
        pfVar12 = (float *)((long)pfVar6 + lVar15 + 0x10);
        if (pfVar12 == param_2) goto LAB_10a7a8378;
        uVar34 = *(undefined8 *)((long)pfVar6 + lVar15 + 0x18);
        uVar35 = *(undefined8 *)pfVar12;
        lVar15 = lVar15 + 0x10;
      } while (fVar32 < ((float)uVar34 - (float)uVar35) *
                        ((float)((ulong)uVar34 >> 0x20) - (float)((ulong)uVar35 >> 0x20)));
      pfVar7 = (float *)((long)pfVar6 + lVar15);
      pfVar12 = param_2;
      if (lVar15 == 0x10) {
        do {
          pfVar8 = pfVar12;
          if (pfVar12 <= pfVar7) break;
          pfVar8 = pfVar12 + -4;
          pfVar24 = pfVar12 + -2;
          pfVar12 = pfVar8;
        } while (((float)*(undefined8 *)pfVar24 - (float)*(undefined8 *)pfVar8) *
                 ((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar8 >> 0x20)) <= fVar32);
      }
      else {
        do {
          if (pfVar12 == pfVar6) goto LAB_10a7a8378;
          pfVar8 = pfVar12 + -4;
          pfVar24 = pfVar12 + -2;
          pfVar12 = pfVar8;
        } while (((float)*(undefined8 *)pfVar24 - (float)*(undefined8 *)pfVar8) *
                 ((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar8 >> 0x20)) <= fVar32);
      }
      pfVar10 = pfVar8;
      pfVar12 = pfVar7;
      pfVar24 = pfVar7;
      if (pfVar7 < pfVar8) {
        do {
          uVar33 = *(undefined8 *)(pfVar24 + 2);
          uVar34 = *(undefined8 *)pfVar24;
          uVar35 = *(undefined8 *)pfVar10;
          *(undefined8 *)(pfVar24 + 2) = *(undefined8 *)(pfVar10 + 2);
          *(undefined8 *)pfVar24 = uVar35;
          *(undefined8 *)(pfVar10 + 2) = uVar33;
          *(undefined8 *)pfVar10 = uVar34;
          do {
            pfVar12 = pfVar24 + 4;
            if (pfVar12 == param_2) goto LAB_10a7a8378;
            pfVar4 = pfVar24 + 6;
            pfVar24 = pfVar12;
          } while (fVar32 < ((float)*(undefined8 *)pfVar4 - (float)*(undefined8 *)pfVar12) *
                            ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)));
          do {
            if (pfVar10 == pfVar6) goto LAB_10a7a8378;
            pfVar16 = pfVar10 + -4;
            pfVar4 = pfVar10 + -2;
            pfVar10 = pfVar16;
          } while (((float)*(undefined8 *)pfVar4 - (float)*(undefined8 *)pfVar16) *
                   ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) -
                   (float)((ulong)*(undefined8 *)pfVar16 >> 0x20)) <= fVar32);
        } while (pfVar12 < pfVar16);
      }
      pfVar24 = pfVar12 + -4;
      if (pfVar24 != pfVar6) {
        uVar34 = *(undefined8 *)pfVar24;
        *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar12 + -2);
        *(undefined8 *)pfVar6 = uVar34;
      }
      pfVar12[-4] = fVar25;
      pfVar12[-3] = fVar31;
      pfVar12[-2] = fVar28;
      pfVar12[-1] = fVar29;
      if (pfVar8 <= pfVar7) {
        pfVar7 = pfVar6;
        FUN_10a7a8664(pfVar6,pfVar24);
        pfVar8 = pfVar12;
        FUN_10a7a8664(pfVar12,param_2);
        if ((int)pfVar8 != 0) goto LAB_10a7a7e10;
        if (((ulong)pfVar7 & 1) != 0) goto LAB_10a7a7a94;
      }
      FUN_10a7a7a54(pfVar6,pfVar24,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_10a7a7a94;
    }
    fVar31 = pfVar6[1];
    fVar28 = pfVar6[2];
    fVar29 = pfVar6[3];
    fVar32 = (fVar28 - fVar25) * (fVar29 - fVar31);
    if (fVar32 < ((float)*(undefined8 *)(pfVar6 + -2) - (float)*(undefined8 *)(pfVar6 + -4)) *
                 ((float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20))) goto LAB_10a7a7ba8;
    pfVar7 = pfVar6 + 4;
    if (fVar32 <= ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)(param_2 + -4)) *
                  ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + -4) >> 0x20))) {
      do {
        pfVar12 = pfVar7;
        if (param_2 <= pfVar12) break;
        pfVar7 = pfVar12 + 4;
      } while (fVar32 <= ((float)*(undefined8 *)(pfVar12 + 2) - (float)*(undefined8 *)pfVar12) *
                         ((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)));
    }
    else {
      do {
        pfVar12 = pfVar7;
        if (pfVar12 == param_2) goto LAB_10a7a8378;
        pfVar7 = pfVar12 + 4;
      } while (fVar32 <= ((float)*(undefined8 *)(pfVar12 + 2) - (float)*(undefined8 *)pfVar12) *
                         ((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)));
    }
    pfVar7 = param_2;
    pfVar8 = param_2;
    if (pfVar12 < param_2) {
      do {
        if (pfVar8 == pfVar6) goto LAB_10a7a8378;
        pfVar7 = pfVar8 + -4;
        pfVar24 = pfVar8 + -2;
        pfVar8 = pfVar7;
      } while (((float)*(undefined8 *)pfVar24 - (float)*(undefined8 *)pfVar7) *
               ((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) < fVar32);
    }
    while (pfVar12 < pfVar7) {
      uVar33 = *(undefined8 *)(pfVar12 + 2);
      uVar34 = *(undefined8 *)pfVar12;
      uVar35 = *(undefined8 *)pfVar7;
      *(undefined8 *)(pfVar12 + 2) = *(undefined8 *)(pfVar7 + 2);
      *(undefined8 *)pfVar12 = uVar35;
      *(undefined8 *)(pfVar7 + 2) = uVar33;
      *(undefined8 *)pfVar7 = uVar34;
      pfVar8 = pfVar12;
      do {
        pfVar12 = pfVar8 + 4;
        if (pfVar12 == param_2) goto LAB_10a7a8378;
        pfVar24 = pfVar8 + 6;
        pfVar10 = pfVar7;
        pfVar8 = pfVar12;
      } while (fVar32 <= ((float)*(undefined8 *)pfVar24 - (float)*(undefined8 *)pfVar12) *
                         ((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)));
      do {
        if (pfVar10 == pfVar6) goto LAB_10a7a8378;
        pfVar7 = pfVar10 + -4;
        pfVar8 = pfVar10 + -2;
        pfVar10 = pfVar7;
      } while (((float)*(undefined8 *)pfVar8 - (float)*(undefined8 *)pfVar7) *
               ((float)((ulong)*(undefined8 *)pfVar8 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) < fVar32);
    }
    if (pfVar12 + -4 != pfVar6) {
      uVar34 = *(undefined8 *)(pfVar12 + -4);
      *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar12 + -2);
      *(undefined8 *)pfVar6 = uVar34;
    }
    param_4 = 0;
    pfVar12[-4] = fVar25;
    pfVar12[-3] = fVar31;
    pfVar12[-2] = fVar28;
    pfVar12[-1] = fVar29;
  } while( true );
LAB_10a7a7fac:
  pfVar7 = pfVar12;
  fVar25 = pfVar14[6];
  fVar28 = pfVar14[7];
  fVar29 = pfVar14[4];
  fVar31 = pfVar14[5];
  fVar32 = (fVar25 - fVar29) * (fVar28 - fVar31);
  lVar20 = lVar15;
  if (((float)*(undefined8 *)(pfVar14 + 2) - (float)*(undefined8 *)pfVar14) *
      ((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) -
      (float)((ulong)*(undefined8 *)pfVar14 >> 0x20)) < fVar32) {
    do {
      lVar11 = lVar20;
      puVar2 = (undefined8 *)((long)pfVar6 + lVar11);
      puVar2[3] = puVar2[1];
      puVar2[2] = *puVar2;
      pfVar12 = pfVar6;
      if (lVar11 == 0) goto LAB_10a7a8024;
      lVar20 = lVar11 + -0x10;
    } while (((float)puVar2[-1] - (float)puVar2[-2]) *
             ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) < fVar32);
    pfVar12 = (float *)((long)pfVar6 + lVar11);
LAB_10a7a8024:
    *pfVar12 = fVar29;
    pfVar12[1] = fVar31;
    pfVar12[2] = fVar25;
    pfVar12[3] = fVar28;
  }
  pfVar12 = pfVar7 + 4;
  lVar15 = lVar15 + 0x10;
  pfVar14 = pfVar7;
  if (pfVar12 == param_2) {
    return;
  }
  goto LAB_10a7a7fac;
LAB_10a7a8050:
  do {
    if ((long)uVar17 <= (long)uVar13) {
      uVar22 = uVar17 << 1 | 1;
      pauVar21 = (undefined1 (*) [16])(pfVar6 + uVar22 * 4);
      uVar1 = uVar17 * 2 + 2;
      pauVar19 = pauVar21;
      uVar23 = uVar22;
      if (((long)uVar1 < (long)uVar9) &&
         (uVar34 = *(undefined8 *)pauVar21[1], pauVar19 = pauVar21 + 1, uVar23 = uVar1,
         ((float)*(undefined8 *)(*pauVar21 + 8) - (float)*(undefined8 *)*pauVar21) *
         ((float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20) -
         (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20)) <=
         ((float)*(undefined8 *)(pauVar21[1] + 8) - (float)uVar34) *
         ((float)((ulong)*(undefined8 *)(pauVar21[1] + 8) >> 0x20) - (float)((ulong)uVar34 >> 0x20))
         )) {
        pauVar19 = pauVar21;
        uVar23 = uVar22;
      }
      pauVar21 = (undefined1 (*) [16])(pfVar6 + uVar17 * 4);
      uVar35 = *(undefined8 *)(*pauVar21 + 8);
      uVar34 = *(undefined8 *)*pauVar21;
      auVar30 = NEON_ext(*pauVar21,*pauVar21,8,1);
      fVar25 = (auVar30._0_4_ - (float)uVar34) * (auVar30._4_4_ - (float)((ulong)uVar34 >> 0x20));
      if (((float)*(undefined8 *)(*pauVar19 + 8) - (float)*(undefined8 *)*pauVar19) *
          ((float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20)) <= fVar25) {
        do {
          pauVar18 = pauVar19;
          auVar30 = *pauVar18;
          *(long *)(*pauVar21 + 8) = auVar30._8_8_;
          *(long *)*pauVar21 = auVar30._0_8_;
          if ((long)uVar13 < (long)uVar23) break;
          uVar22 = uVar23 << 1 | 1;
          pauVar21 = (undefined1 (*) [16])(pfVar6 + uVar22 * 4);
          uVar1 = uVar23 * 2 + 2;
          pauVar19 = pauVar21;
          uVar23 = uVar22;
          if (((long)uVar1 < (long)uVar9) &&
             (uVar33 = *(undefined8 *)pauVar21[1], pauVar19 = pauVar21 + 1, uVar23 = uVar1,
             ((float)*(undefined8 *)(*pauVar21 + 8) - (float)*(undefined8 *)*pauVar21) *
             ((float)((ulong)*(undefined8 *)(*pauVar21 + 8) >> 0x20) -
             (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20)) <=
             ((float)*(undefined8 *)(pauVar21[1] + 8) - (float)uVar33) *
             ((float)((ulong)*(undefined8 *)(pauVar21[1] + 8) >> 0x20) -
             (float)((ulong)uVar33 >> 0x20)))) {
            pauVar19 = pauVar21;
            uVar23 = uVar22;
          }
          pauVar21 = pauVar18;
        } while (((float)*(undefined8 *)(*pauVar19 + 8) - (float)*(undefined8 *)*pauVar19) *
                 ((float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20) -
                 (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20)) <= fVar25);
        *(undefined8 *)(*pauVar18 + 8) = uVar35;
        *(undefined8 *)*pauVar18 = uVar34;
      }
    }
    bVar3 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar3);
  do {
    uVar35 = *(undefined8 *)(pfVar6 + 2);
    uVar34 = *(undefined8 *)pfVar6;
    pfVar12 = pfVar6;
    uVar17 = 0;
    do {
      uVar1 = uVar17 << 1 | 1;
      uVar13 = uVar17 * 2 + 2;
      pfVar14 = pfVar12 + uVar17 * 4 + 4;
      uVar22 = uVar1;
      if (((long)uVar13 < (long)uVar9) &&
         (uVar33 = *(undefined8 *)(pfVar12 + uVar17 * 4 + 8), pfVar14 = pfVar12 + uVar17 * 4 + 8,
         uVar22 = uVar13,
         ((float)*(undefined8 *)(pfVar12 + uVar17 * 4 + 6) -
         (float)*(undefined8 *)(pfVar12 + uVar17 * 4 + 4)) *
         ((float)((ulong)*(undefined8 *)(pfVar12 + uVar17 * 4 + 6) >> 0x20) -
         (float)((ulong)*(undefined8 *)(pfVar12 + uVar17 * 4 + 4) >> 0x20)) <=
         ((float)*(undefined8 *)(pfVar12 + uVar17 * 4 + 10) - (float)uVar33) *
         ((float)((ulong)*(undefined8 *)(pfVar12 + uVar17 * 4 + 10) >> 0x20) -
         (float)((ulong)uVar33 >> 0x20)))) {
        pfVar14 = pfVar12 + uVar17 * 4 + 4;
        uVar22 = uVar1;
      }
      uVar33 = *(undefined8 *)pfVar14;
      *(undefined8 *)(pfVar12 + 2) = *(undefined8 *)(pfVar14 + 2);
      *(undefined8 *)pfVar12 = uVar33;
      pfVar12 = pfVar14;
      uVar17 = uVar22;
    } while ((long)uVar22 <= (long)(uVar9 - 2 >> 1));
    pfVar12 = param_2 + -4;
    if (pfVar14 == pfVar12) {
      *(undefined8 *)(pfVar14 + 2) = uVar35;
      *(undefined8 *)pfVar14 = uVar34;
    }
    else {
      uVar33 = *(undefined8 *)pfVar12;
      *(undefined8 *)(pfVar14 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar14 = uVar33;
      *(undefined8 *)(param_2 + -2) = uVar35;
      *(undefined8 *)pfVar12 = uVar34;
      lVar15 = (long)((long)pfVar14 + (0x10 - (long)pfVar6)) >> 4;
      if (1 < lVar15) {
        uVar17 = lVar15 - 2U >> 1;
        pfVar7 = pfVar6 + uVar17 * 4;
        fVar25 = pfVar14[2];
        fVar28 = pfVar14[3];
        fVar29 = *pfVar14;
        fVar31 = pfVar14[1];
        fVar32 = (fVar25 - fVar29) * (fVar28 - fVar31);
        if (fVar32 < ((float)*(undefined8 *)(pfVar7 + 2) - (float)*(undefined8 *)pfVar7) *
                     ((float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) -
                     (float)((ulong)*(undefined8 *)pfVar7 >> 0x20))) {
          do {
            pfVar8 = pfVar7;
            uVar34 = *(undefined8 *)pfVar8;
            *(undefined8 *)(pfVar14 + 2) = *(undefined8 *)(pfVar8 + 2);
            *(undefined8 *)pfVar14 = uVar34;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            pfVar7 = pfVar6 + uVar17 * 4;
            pfVar14 = pfVar8;
          } while (fVar32 < ((float)*(undefined8 *)(pfVar7 + 2) - (float)*(undefined8 *)pfVar7) *
                            ((float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)));
          *pfVar8 = fVar29;
          pfVar8[1] = fVar31;
          pfVar8[2] = fVar25;
          pfVar8[3] = fVar28;
        }
      }
    }
    bVar3 = (long)uVar9 < 3;
    uVar9 = uVar9 - 1;
    param_2 = pfVar12;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10a7a7e10:
  param_2 = pfVar24;
  if (((ulong)pfVar7 & 1) != 0) {
    return;
  }
  goto LAB_10a7a7a84;
}



/* Entry: 10a7a7a54; end: 10a7a837b;  */

void FUN_10a7a7a54(float *param_1,float *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  float *pfVar4;
  code *pcVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  long lVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
LAB_10a7a7a84:
  pfVar13 = param_2 + -4;
  pfVar11 = param_1;
LAB_10a7a7a94:
  do {
    param_1 = pfVar11;
    uVar8 = (long)param_2 - (long)param_1 >> 4;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        pfVar11 = param_2 + -4;
        if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar11) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)) <=
            ((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
            ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)param_1 >> 0x20))) {
          return;
        }
        uVar32 = *(undefined8 *)(param_1 + 2);
        uVar33 = *(undefined8 *)param_1;
        uVar34 = *(undefined8 *)pfVar11;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_1 = uVar34;
        *(undefined8 *)(param_2 + -2) = uVar32;
        *(undefined8 *)pfVar11 = uVar33;
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        pfVar11 = param_1 + 4;
        fVar24 = ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar13) *
                 ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar13 >> 0x20));
        fVar27 = ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                 ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar11 >> 0x20));
        if (fVar27 <= ((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
                      ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20))) {
          if (fVar27 < fVar24) {
            uVar34 = *(undefined8 *)(param_1 + 6);
            uVar33 = *(undefined8 *)pfVar11;
            uVar32 = *(undefined8 *)pfVar13;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar11 = uVar32;
            *(undefined8 *)(param_2 + -2) = uVar34;
            *(undefined8 *)pfVar13 = uVar33;
            if (((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
                ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)param_1 >> 0x20)) <
                ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar11 >> 0x20))) {
              uVar34 = *(undefined8 *)(param_1 + 2);
              uVar33 = *(undefined8 *)param_1;
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
              *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
              *(undefined8 *)(param_1 + 6) = uVar34;
              *(undefined8 *)pfVar11 = uVar33;
            }
          }
        }
        else {
          if (fVar24 <= fVar27) {
            uVar34 = *(undefined8 *)(param_1 + 2);
            uVar33 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
            *(undefined8 *)(param_1 + 6) = uVar34;
            *(undefined8 *)pfVar11 = uVar33;
            if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar13) *
                ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar13 >> 0x20)) <=
                ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar11 >> 0x20))) {
              return;
            }
            uVar33 = *(undefined8 *)(param_1 + 6);
            uVar25 = (undefined4)*(undefined8 *)pfVar11;
            uVar26 = (undefined4)((ulong)*(undefined8 *)pfVar11 >> 0x20);
            uVar34 = *(undefined8 *)pfVar13;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar11 = uVar34;
          }
          else {
            uVar33 = *(undefined8 *)(param_1 + 2);
            uVar25 = (undefined4)*(undefined8 *)param_1;
            uVar26 = (undefined4)((ulong)*(undefined8 *)param_1 >> 0x20);
            uVar34 = *(undefined8 *)pfVar13;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)param_1 = uVar34;
          }
          *(undefined8 *)(param_2 + -2) = uVar33;
          *(ulong *)pfVar13 = CONCAT44(uVar26,uVar25);
        }
        return;
      }
      if (uVar8 == 4) {
        FUN_10a7a837c(param_1,param_1 + 4,param_1 + 8);
        pfVar11 = param_2 + -4;
        if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar11) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)) <=
            ((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)(param_1 + 8)) *
            ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20))) {
          return;
        }
        uVar34 = *(undefined8 *)(param_1 + 10);
        uVar33 = *(undefined8 *)(param_1 + 8);
        uVar32 = *(undefined8 *)pfVar11;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_1 + 8) = uVar32;
        *(undefined8 *)(param_2 + -2) = uVar34;
        *(undefined8 *)pfVar11 = uVar33;
        if (((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)(param_1 + 8)) *
            ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20)) <=
            ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_1 + 4)) *
            ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20))) {
          return;
        }
        uVar34 = *(undefined8 *)(param_1 + 6);
        uVar33 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 10) = uVar34;
        *(undefined8 *)(param_1 + 8) = uVar33;
        if (((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_1 + 4)) *
            ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20)) <=
            ((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
            ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)param_1 >> 0x20))) {
          return;
        }
        uVar34 = *(undefined8 *)(param_1 + 2);
        uVar33 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 6) = uVar34;
        *(undefined8 *)(param_1 + 4) = uVar33;
        return;
      }
      if (uVar8 == 5) {
        pfVar11 = param_1 + 4;
        pfVar6 = param_1 + 8;
        pfVar7 = param_1 + 0xc;
        FUN_10a7a837c();
        if (((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)pfVar6) *
            ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
            ((float)*(undefined8 *)(param_1 + 0xe) - (float)*(undefined8 *)pfVar7) *
            ((float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20))) {
          uVar34 = *(undefined8 *)(param_1 + 10);
          uVar33 = *(undefined8 *)pfVar6;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)pfVar6 = *(undefined8 *)pfVar7;
          *(undefined8 *)(param_1 + 0xe) = uVar34;
          *(undefined8 *)pfVar7 = uVar33;
          if (((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
              ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)) <
              ((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)pfVar6) *
              ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
            uVar34 = *(undefined8 *)(param_1 + 6);
            uVar33 = *(undefined8 *)pfVar11;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar6;
            *(undefined8 *)(param_1 + 10) = uVar34;
            *(undefined8 *)pfVar6 = uVar33;
            if (((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
                ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)param_1 >> 0x20)) <
                ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar11 >> 0x20))) {
              uVar34 = *(undefined8 *)(param_1 + 2);
              uVar33 = *(undefined8 *)param_1;
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
              *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
              *(undefined8 *)(param_1 + 6) = uVar34;
              *(undefined8 *)pfVar11 = uVar33;
            }
          }
        }
        if (((float)*(undefined8 *)(param_1 + 0xe) - (float)*(undefined8 *)pfVar7) *
            ((float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <
            ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar13) *
            ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar13 >> 0x20))) {
          uVar34 = *(undefined8 *)(param_1 + 0xe);
          uVar33 = *(undefined8 *)pfVar7;
          uVar32 = *(undefined8 *)pfVar13;
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)pfVar7 = uVar32;
          *(undefined8 *)(param_2 + -2) = uVar34;
          *(undefined8 *)pfVar13 = uVar33;
          if (((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)pfVar6) *
              ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
              ((float)*(undefined8 *)(param_1 + 0xe) - (float)*(undefined8 *)pfVar7) *
              ((float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar7 >> 0x20))) {
            uVar34 = *(undefined8 *)(param_1 + 10);
            uVar33 = *(undefined8 *)pfVar6;
            *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 *)pfVar6 = *(undefined8 *)pfVar7;
            *(undefined8 *)(param_1 + 0xe) = uVar34;
            *(undefined8 *)pfVar7 = uVar33;
            if (((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)) <
                ((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)pfVar6) *
                ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
              uVar34 = *(undefined8 *)(param_1 + 6);
              uVar33 = *(undefined8 *)pfVar11;
              *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
              *(undefined8 *)pfVar11 = *(undefined8 *)pfVar6;
              *(undefined8 *)(param_1 + 10) = uVar34;
              *(undefined8 *)pfVar6 = uVar33;
              if (((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
                  ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)param_1 >> 0x20)) <
                  ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)pfVar11) *
                  ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
                  (float)((ulong)*(undefined8 *)pfVar11 >> 0x20))) {
                uVar34 = *(undefined8 *)(param_1 + 2);
                uVar33 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
                *(undefined8 *)param_1 = *(undefined8 *)pfVar11;
                *(undefined8 *)(param_1 + 6) = uVar34;
                *(undefined8 *)pfVar11 = uVar33;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      pfVar11 = param_1 + 4;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || pfVar11 == param_2) {
          return;
        }
        lVar14 = 0;
        lVar19 = 0x10;
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar14);
          fVar27 = *pfVar11;
          fVar30 = *(float *)((long)puVar2 + 0x14);
          fVar24 = *(float *)(puVar2 + 3);
          fVar28 = *(float *)((long)puVar2 + 0x1c);
          fVar31 = (fVar24 - fVar27) * (fVar28 - fVar30);
          if (((float)puVar2[1] - (float)*puVar2) *
              ((float)((ulong)puVar2[1] >> 0x20) - (float)((ulong)*puVar2 >> 0x20)) < fVar31) {
            do {
              lVar10 = lVar14;
              puVar2 = (undefined8 *)((long)param_1 + lVar10);
              puVar2[3] = puVar2[1];
              puVar2[2] = *puVar2;
              if (lVar10 == -0x10) {
LAB_10a7a8378:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7a837c);
                (*pcVar5)();
              }
              lVar14 = lVar10 + -0x10;
            } while (((float)puVar2[-1] - (float)puVar2[-2]) *
                     ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) <
                     fVar31);
            *(float *)((long)param_1 + lVar10) = fVar27;
            *(float *)((long)param_1 + lVar10 + 4) = fVar30;
            *(float *)((long)param_1 + lVar10 + 8) = fVar24;
            *(float *)((long)param_1 + lVar10 + 0xc) = fVar28;
          }
          pfVar11 = (float *)((long)param_1 + lVar19 + 0x10);
          lVar14 = lVar19;
          lVar19 = lVar19 + 0x10;
          if (pfVar11 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || pfVar11 == param_2) {
        return;
      }
      lVar14 = 0;
      pfVar13 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar8 - 2 >> 1;
      uVar16 = uVar12;
      goto LAB_10a7a8050;
    }
    pfVar11 = param_1 + (uVar8 >> 1) * 4;
    if (uVar8 < 0x81) {
      FUN_10a7a837c(pfVar11,param_1,pfVar13);
    }
    else {
      FUN_10a7a837c(param_1,pfVar11,pfVar13);
      FUN_10a7a837c(param_1 + 4,pfVar11 + -4,param_2 + -8);
      FUN_10a7a837c(param_1 + 8,pfVar11 + 4,param_2 + -0xc);
      FUN_10a7a837c(pfVar11 + -4,pfVar11,pfVar11 + 4);
      uVar32 = *(undefined8 *)(param_1 + 2);
      uVar33 = *(undefined8 *)param_1;
      uVar34 = *(undefined8 *)pfVar11;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(pfVar11 + 2);
      *(undefined8 *)param_1 = uVar34;
      *(undefined8 *)(pfVar11 + 2) = uVar32;
      *(undefined8 *)pfVar11 = uVar33;
    }
    param_3 = param_3 + -1;
    fVar24 = *param_1;
    if ((param_4 & 1) != 0) {
      fVar30 = param_1[1];
      fVar27 = param_1[2];
      fVar28 = param_1[3];
      fVar31 = (fVar27 - fVar24) * (fVar28 - fVar30);
LAB_10a7a7ba8:
      lVar14 = 0;
      do {
        pfVar11 = (float *)((long)param_1 + lVar14 + 0x10);
        if (pfVar11 == param_2) goto LAB_10a7a8378;
        uVar33 = *(undefined8 *)((long)param_1 + lVar14 + 0x18);
        uVar34 = *(undefined8 *)pfVar11;
        lVar14 = lVar14 + 0x10;
      } while (fVar31 < ((float)uVar33 - (float)uVar34) *
                        ((float)((ulong)uVar33 >> 0x20) - (float)((ulong)uVar34 >> 0x20)));
      pfVar6 = (float *)((long)param_1 + lVar14);
      pfVar11 = param_2;
      if (lVar14 == 0x10) {
        do {
          pfVar7 = pfVar11;
          if (pfVar11 <= pfVar6) break;
          pfVar7 = pfVar11 + -4;
          pfVar23 = pfVar11 + -2;
          pfVar11 = pfVar7;
        } while (((float)*(undefined8 *)pfVar23 - (float)*(undefined8 *)pfVar7) *
                 ((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <= fVar31);
      }
      else {
        do {
          if (pfVar11 == param_1) goto LAB_10a7a8378;
          pfVar7 = pfVar11 + -4;
          pfVar23 = pfVar11 + -2;
          pfVar11 = pfVar7;
        } while (((float)*(undefined8 *)pfVar23 - (float)*(undefined8 *)pfVar7) *
                 ((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <= fVar31);
      }
      pfVar9 = pfVar7;
      pfVar11 = pfVar6;
      pfVar23 = pfVar6;
      if (pfVar6 < pfVar7) {
        do {
          uVar32 = *(undefined8 *)(pfVar23 + 2);
          uVar33 = *(undefined8 *)pfVar23;
          uVar34 = *(undefined8 *)pfVar9;
          *(undefined8 *)(pfVar23 + 2) = *(undefined8 *)(pfVar9 + 2);
          *(undefined8 *)pfVar23 = uVar34;
          *(undefined8 *)(pfVar9 + 2) = uVar32;
          *(undefined8 *)pfVar9 = uVar33;
          do {
            pfVar11 = pfVar23 + 4;
            if (pfVar11 == param_2) goto LAB_10a7a8378;
            pfVar4 = pfVar23 + 6;
            pfVar23 = pfVar11;
          } while (fVar31 < ((float)*(undefined8 *)pfVar4 - (float)*(undefined8 *)pfVar11) *
                            ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)));
          do {
            if (pfVar9 == param_1) goto LAB_10a7a8378;
            pfVar15 = pfVar9 + -4;
            pfVar4 = pfVar9 + -2;
            pfVar9 = pfVar15;
          } while (((float)*(undefined8 *)pfVar4 - (float)*(undefined8 *)pfVar15) *
                   ((float)((ulong)*(undefined8 *)pfVar4 >> 0x20) -
                   (float)((ulong)*(undefined8 *)pfVar15 >> 0x20)) <= fVar31);
        } while (pfVar11 < pfVar15);
      }
      pfVar23 = pfVar11 + -4;
      if (pfVar23 != param_1) {
        uVar33 = *(undefined8 *)pfVar23;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(pfVar11 + -2);
        *(undefined8 *)param_1 = uVar33;
      }
      pfVar11[-4] = fVar24;
      pfVar11[-3] = fVar30;
      pfVar11[-2] = fVar27;
      pfVar11[-1] = fVar28;
      if (pfVar7 <= pfVar6) {
        pfVar6 = param_1;
        FUN_10a7a8664(param_1,pfVar23);
        pfVar7 = pfVar11;
        FUN_10a7a8664(pfVar11,param_2);
        if ((int)pfVar7 != 0) goto LAB_10a7a7e10;
        if (((ulong)pfVar6 & 1) != 0) goto LAB_10a7a7a94;
      }
      FUN_10a7a7a54(param_1,pfVar23,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_10a7a7a94;
    }
    fVar30 = param_1[1];
    fVar27 = param_1[2];
    fVar28 = param_1[3];
    fVar31 = (fVar27 - fVar24) * (fVar28 - fVar30);
    if (fVar31 < ((float)*(undefined8 *)(param_1 + -2) - (float)*(undefined8 *)(param_1 + -4)) *
                 ((float)((ulong)*(undefined8 *)(param_1 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_1 + -4) >> 0x20))) goto LAB_10a7a7ba8;
    pfVar6 = param_1 + 4;
    if (fVar31 <= ((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)(param_2 + -4)) *
                  ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + -4) >> 0x20))) {
      do {
        pfVar11 = pfVar6;
        if (param_2 <= pfVar11) break;
        pfVar6 = pfVar11 + 4;
      } while (fVar31 <= ((float)*(undefined8 *)(pfVar11 + 2) - (float)*(undefined8 *)pfVar11) *
                         ((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)));
    }
    else {
      do {
        pfVar11 = pfVar6;
        if (pfVar11 == param_2) goto LAB_10a7a8378;
        pfVar6 = pfVar11 + 4;
      } while (fVar31 <= ((float)*(undefined8 *)(pfVar11 + 2) - (float)*(undefined8 *)pfVar11) *
                         ((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)));
    }
    pfVar6 = param_2;
    pfVar7 = param_2;
    if (pfVar11 < param_2) {
      do {
        if (pfVar7 == param_1) goto LAB_10a7a8378;
        pfVar6 = pfVar7 + -4;
        pfVar23 = pfVar7 + -2;
        pfVar7 = pfVar6;
      } while (((float)*(undefined8 *)pfVar23 - (float)*(undefined8 *)pfVar6) *
               ((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) < fVar31);
    }
    while (pfVar11 < pfVar6) {
      uVar32 = *(undefined8 *)(pfVar11 + 2);
      uVar33 = *(undefined8 *)pfVar11;
      uVar34 = *(undefined8 *)pfVar6;
      *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)pfVar11 = uVar34;
      *(undefined8 *)(pfVar6 + 2) = uVar32;
      *(undefined8 *)pfVar6 = uVar33;
      pfVar7 = pfVar11;
      do {
        pfVar11 = pfVar7 + 4;
        if (pfVar11 == param_2) goto LAB_10a7a8378;
        pfVar23 = pfVar7 + 6;
        pfVar9 = pfVar6;
        pfVar7 = pfVar11;
      } while (fVar31 <= ((float)*(undefined8 *)pfVar23 - (float)*(undefined8 *)pfVar11) *
                         ((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar11 >> 0x20)));
      do {
        if (pfVar9 == param_1) goto LAB_10a7a8378;
        pfVar6 = pfVar9 + -4;
        pfVar7 = pfVar9 + -2;
        pfVar9 = pfVar6;
      } while (((float)*(undefined8 *)pfVar7 - (float)*(undefined8 *)pfVar6) *
               ((float)((ulong)*(undefined8 *)pfVar7 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) < fVar31);
    }
    if (pfVar11 + -4 != param_1) {
      uVar33 = *(undefined8 *)(pfVar11 + -4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(pfVar11 + -2);
      *(undefined8 *)param_1 = uVar33;
    }
    param_4 = 0;
    pfVar11[-4] = fVar24;
    pfVar11[-3] = fVar30;
    pfVar11[-2] = fVar27;
    pfVar11[-1] = fVar28;
  } while( true );
LAB_10a7a7fac:
  pfVar6 = pfVar11;
  fVar24 = pfVar13[6];
  fVar27 = pfVar13[7];
  fVar28 = pfVar13[4];
  fVar30 = pfVar13[5];
  fVar31 = (fVar24 - fVar28) * (fVar27 - fVar30);
  lVar19 = lVar14;
  if (((float)*(undefined8 *)(pfVar13 + 2) - (float)*(undefined8 *)pfVar13) *
      ((float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) -
      (float)((ulong)*(undefined8 *)pfVar13 >> 0x20)) < fVar31) {
    do {
      lVar10 = lVar19;
      puVar2 = (undefined8 *)((long)param_1 + lVar10);
      puVar2[3] = puVar2[1];
      puVar2[2] = *puVar2;
      pfVar11 = param_1;
      if (lVar10 == 0) goto LAB_10a7a8024;
      lVar19 = lVar10 + -0x10;
    } while (((float)puVar2[-1] - (float)puVar2[-2]) *
             ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) < fVar31);
    pfVar11 = (float *)((long)param_1 + lVar10);
LAB_10a7a8024:
    *pfVar11 = fVar28;
    pfVar11[1] = fVar30;
    pfVar11[2] = fVar24;
    pfVar11[3] = fVar27;
  }
  pfVar11 = pfVar6 + 4;
  lVar14 = lVar14 + 0x10;
  pfVar13 = pfVar6;
  if (pfVar11 == param_2) {
    return;
  }
  goto LAB_10a7a7fac;
LAB_10a7a8050:
  do {
    if ((long)uVar16 <= (long)uVar12) {
      uVar21 = uVar16 << 1 | 1;
      pauVar20 = (undefined1 (*) [16])(param_1 + uVar21 * 4);
      uVar1 = uVar16 * 2 + 2;
      pauVar18 = pauVar20;
      uVar22 = uVar21;
      if (((long)uVar1 < (long)uVar8) &&
         (uVar33 = *(undefined8 *)pauVar20[1], pauVar18 = pauVar20 + 1, uVar22 = uVar1,
         ((float)*(undefined8 *)(*pauVar20 + 8) - (float)*(undefined8 *)*pauVar20) *
         ((float)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20) -
         (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20)) <=
         ((float)*(undefined8 *)(pauVar20[1] + 8) - (float)uVar33) *
         ((float)((ulong)*(undefined8 *)(pauVar20[1] + 8) >> 0x20) - (float)((ulong)uVar33 >> 0x20))
         )) {
        pauVar18 = pauVar20;
        uVar22 = uVar21;
      }
      pauVar20 = (undefined1 (*) [16])(param_1 + uVar16 * 4);
      uVar34 = *(undefined8 *)(*pauVar20 + 8);
      uVar33 = *(undefined8 *)*pauVar20;
      auVar29 = NEON_ext(*pauVar20,*pauVar20,8,1);
      fVar24 = (auVar29._0_4_ - (float)uVar33) * (auVar29._4_4_ - (float)((ulong)uVar33 >> 0x20));
      if (((float)*(undefined8 *)(*pauVar18 + 8) - (float)*(undefined8 *)*pauVar18) *
          ((float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20)) <= fVar24) {
        do {
          pauVar17 = pauVar18;
          auVar29 = *pauVar17;
          *(long *)(*pauVar20 + 8) = auVar29._8_8_;
          *(long *)*pauVar20 = auVar29._0_8_;
          if ((long)uVar12 < (long)uVar22) break;
          uVar21 = uVar22 << 1 | 1;
          pauVar20 = (undefined1 (*) [16])(param_1 + uVar21 * 4);
          uVar1 = uVar22 * 2 + 2;
          pauVar18 = pauVar20;
          uVar22 = uVar21;
          if (((long)uVar1 < (long)uVar8) &&
             (uVar32 = *(undefined8 *)pauVar20[1], pauVar18 = pauVar20 + 1, uVar22 = uVar1,
             ((float)*(undefined8 *)(*pauVar20 + 8) - (float)*(undefined8 *)*pauVar20) *
             ((float)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20) -
             (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20)) <=
             ((float)*(undefined8 *)(pauVar20[1] + 8) - (float)uVar32) *
             ((float)((ulong)*(undefined8 *)(pauVar20[1] + 8) >> 0x20) -
             (float)((ulong)uVar32 >> 0x20)))) {
            pauVar18 = pauVar20;
            uVar22 = uVar21;
          }
          pauVar20 = pauVar17;
        } while (((float)*(undefined8 *)(*pauVar18 + 8) - (float)*(undefined8 *)*pauVar18) *
                 ((float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20) -
                 (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20)) <= fVar24);
        *(undefined8 *)(*pauVar17 + 8) = uVar34;
        *(undefined8 *)*pauVar17 = uVar33;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  do {
    uVar34 = *(undefined8 *)(param_1 + 2);
    uVar33 = *(undefined8 *)param_1;
    pfVar11 = param_1;
    uVar16 = 0;
    do {
      uVar1 = uVar16 << 1 | 1;
      uVar12 = uVar16 * 2 + 2;
      pfVar13 = pfVar11 + uVar16 * 4 + 4;
      uVar21 = uVar1;
      if (((long)uVar12 < (long)uVar8) &&
         (uVar32 = *(undefined8 *)(pfVar11 + uVar16 * 4 + 8), pfVar13 = pfVar11 + uVar16 * 4 + 8,
         uVar21 = uVar12,
         ((float)*(undefined8 *)(pfVar11 + uVar16 * 4 + 6) -
         (float)*(undefined8 *)(pfVar11 + uVar16 * 4 + 4)) *
         ((float)((ulong)*(undefined8 *)(pfVar11 + uVar16 * 4 + 6) >> 0x20) -
         (float)((ulong)*(undefined8 *)(pfVar11 + uVar16 * 4 + 4) >> 0x20)) <=
         ((float)*(undefined8 *)(pfVar11 + uVar16 * 4 + 10) - (float)uVar32) *
         ((float)((ulong)*(undefined8 *)(pfVar11 + uVar16 * 4 + 10) >> 0x20) -
         (float)((ulong)uVar32 >> 0x20)))) {
        pfVar13 = pfVar11 + uVar16 * 4 + 4;
        uVar21 = uVar1;
      }
      uVar32 = *(undefined8 *)pfVar13;
      *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)(pfVar13 + 2);
      *(undefined8 *)pfVar11 = uVar32;
      pfVar11 = pfVar13;
      uVar16 = uVar21;
    } while ((long)uVar21 <= (long)(uVar8 - 2 >> 1));
    pfVar11 = param_2 + -4;
    if (pfVar13 == pfVar11) {
      *(undefined8 *)(pfVar13 + 2) = uVar34;
      *(undefined8 *)pfVar13 = uVar33;
    }
    else {
      uVar32 = *(undefined8 *)pfVar11;
      *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar13 = uVar32;
      *(undefined8 *)(param_2 + -2) = uVar34;
      *(undefined8 *)pfVar11 = uVar33;
      lVar14 = (long)pfVar13 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar14) {
        uVar16 = lVar14 - 2U >> 1;
        pfVar6 = param_1 + uVar16 * 4;
        fVar24 = pfVar13[2];
        fVar27 = pfVar13[3];
        fVar28 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar31 = (fVar24 - fVar28) * (fVar27 - fVar30);
        if (fVar31 < ((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                     ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                     (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
          do {
            pfVar7 = pfVar6;
            uVar33 = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar7 + 2);
            *(undefined8 *)pfVar13 = uVar33;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            pfVar6 = param_1 + uVar16 * 4;
            pfVar13 = pfVar7;
          } while (fVar31 < ((float)*(undefined8 *)(pfVar6 + 2) - (float)*(undefined8 *)pfVar6) *
                            ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)));
          *pfVar7 = fVar28;
          pfVar7[1] = fVar30;
          pfVar7[2] = fVar24;
          pfVar7[3] = fVar27;
        }
      }
    }
    bVar3 = (long)uVar8 < 3;
    uVar8 = uVar8 - 1;
    param_2 = pfVar11;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10a7a7e10:
  param_2 = pfVar23;
  if (((ulong)pfVar6 & 1) != 0) {
    return;
  }
  goto LAB_10a7a7a84;
}



/* Entry: 10a7a837c; end: 10a7a8477;  */

void FUN_10a7a837c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  
  fVar1 = ((float)param_3[1] - (float)*param_3) *
          ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20));
  fVar3 = ((float)param_2[1] - (float)*param_2) *
          ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20));
  if (fVar3 <= ((float)param_1[1] - (float)*param_1) *
               ((float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20))) {
    if (fVar3 < fVar1) {
      uVar4 = param_2[1];
      uVar2 = *param_2;
      uVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar5;
      param_3[1] = uVar4;
      *param_3 = uVar2;
      if (((float)param_1[1] - (float)*param_1) *
          ((float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20)) <
          ((float)param_2[1] - (float)*param_2) *
          ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20))) {
        uVar4 = param_1[1];
        uVar2 = *param_1;
        uVar5 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar5;
        param_2[1] = uVar4;
        *param_2 = uVar2;
      }
    }
  }
  else {
    if (fVar1 <= fVar3) {
      uVar4 = param_1[1];
      uVar2 = *param_1;
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_2[1] = uVar4;
      *param_2 = uVar2;
      if (((float)param_3[1] - (float)*param_3) *
          ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20)) <=
          ((float)param_2[1] - (float)*param_2) *
          ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20))) {
        return;
      }
      uVar4 = param_2[1];
      uVar2 = *param_2;
      uVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar5;
    }
    else {
      uVar4 = param_1[1];
      uVar2 = *param_1;
      uVar5 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar5;
    }
    param_3[1] = uVar4;
    *param_3 = uVar2;
  }
  return;
}



/* Entry: 10a7a8478; end: 10a7a8663;  */

void FUN_10a7a8478(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10a7a837c();
  if (((float)param_3[1] - (float)*param_3) *
      ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20)) <
      ((float)param_4[1] - (float)*param_4) *
      ((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)*param_4 >> 0x20))) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar3 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar3;
    param_4[1] = uVar2;
    *param_4 = uVar1;
    if (((float)param_2[1] - (float)*param_2) *
        ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20)) <
        ((float)param_3[1] - (float)*param_3) *
        ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20))) {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      uVar3 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar3;
      param_3[1] = uVar2;
      *param_3 = uVar1;
      if (((float)param_1[1] - (float)*param_1) *
          ((float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20)) <
          ((float)param_2[1] - (float)*param_2) *
          ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20))) {
        uVar2 = param_1[1];
        uVar1 = *param_1;
        uVar3 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar3;
        param_2[1] = uVar2;
        *param_2 = uVar1;
      }
    }
  }
  if (((float)param_4[1] - (float)*param_4) *
      ((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)*param_4 >> 0x20)) <
      ((float)param_5[1] - (float)*param_5) *
      ((float)((ulong)param_5[1] >> 0x20) - (float)((ulong)*param_5 >> 0x20))) {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    uVar3 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar3;
    param_5[1] = uVar2;
    *param_5 = uVar1;
    if (((float)param_3[1] - (float)*param_3) *
        ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20)) <
        ((float)param_4[1] - (float)*param_4) *
        ((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)*param_4 >> 0x20))) {
      uVar2 = param_3[1];
      uVar1 = *param_3;
      uVar3 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar3;
      param_4[1] = uVar2;
      *param_4 = uVar1;
      if (((float)param_2[1] - (float)*param_2) *
          ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20)) <
          ((float)param_3[1] - (float)*param_3) *
          ((float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20))) {
        uVar2 = param_2[1];
        uVar1 = *param_2;
        uVar3 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar3;
        param_3[1] = uVar2;
        *param_3 = uVar1;
        if (((float)param_1[1] - (float)*param_1) *
            ((float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20)) <
            ((float)param_2[1] - (float)*param_2) *
            ((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20))) {
          uVar2 = param_1[1];
          uVar1 = *param_1;
          uVar3 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar3;
          param_2[1] = uVar2;
          *param_2 = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a7a8664; end: 10a7a88cb;  */

bool FUN_10a7a8664(float *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar2 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      pfVar7 = param_2 + -4;
      if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar7) *
          ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
          (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <=
          ((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
          ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20))) {
        return true;
      }
      uVar16 = *(undefined8 *)(param_1 + 2);
      uVar15 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)pfVar7;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar11;
      *(undefined8 *)(param_2 + -2) = uVar16;
      *(undefined8 *)pfVar7 = uVar15;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      FUN_10a7a837c(param_1,param_1 + 4,param_2 + -4);
      return true;
    }
    if (uVar2 == 4) {
      FUN_10a7a837c(param_1,param_1 + 4,param_1 + 8);
      pfVar7 = param_2 + -4;
      if (((float)*(undefined8 *)(param_2 + -2) - (float)*(undefined8 *)pfVar7) *
          ((float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) -
          (float)((ulong)*(undefined8 *)pfVar7 >> 0x20)) <=
          ((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)(param_1 + 8)) *
          ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20))) {
        return true;
      }
      uVar16 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)pfVar7;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_1 + 8) = uVar11;
      *(undefined8 *)(param_2 + -2) = uVar16;
      *(undefined8 *)pfVar7 = uVar15;
      if (((float)*(undefined8 *)(param_1 + 10) - (float)*(undefined8 *)(param_1 + 8)) *
          ((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20)) <=
          ((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_1 + 4)) *
          ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20))) {
        return true;
      }
      uVar16 = *(undefined8 *)(param_1 + 6);
      uVar15 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 10) = uVar16;
      *(undefined8 *)(param_1 + 8) = uVar15;
      if (((float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_1 + 4)) *
          ((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20)) <=
          ((float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1) *
          ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20))) {
        return true;
      }
      uVar16 = *(undefined8 *)(param_1 + 2);
      uVar15 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 6) = uVar16;
      *(undefined8 *)(param_1 + 4) = uVar15;
      return true;
    }
    if (uVar2 == 5) {
      FUN_10a7a8478(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
      return true;
    }
  }
  FUN_10a7a837c(param_1,param_1 + 4,param_1 + 8);
  if (param_1 + 0xc != param_2) {
    lVar4 = 0;
    iVar5 = 0;
    pfVar7 = param_1 + 0xc;
    pfVar8 = param_1 + 8;
    do {
      pfVar3 = pfVar7;
      fVar9 = pfVar3[2];
      fVar10 = pfVar3[3];
      fVar12 = *pfVar3;
      fVar13 = pfVar3[1];
      fVar14 = (fVar9 - fVar12) * (fVar10 - fVar13);
      lVar1 = lVar4;
      if (((float)*(undefined8 *)(pfVar8 + 2) - (float)*(undefined8 *)pfVar8) *
          ((float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) -
          (float)((ulong)*(undefined8 *)pfVar8 >> 0x20)) < fVar14) {
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)param_1 + lVar6 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x28);
          *(undefined8 *)((long)param_1 + lVar6 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x20);
          pfVar7 = param_1;
          if (lVar6 == -0x20) goto LAB_10a7a87c4;
          uVar16 = *(undefined8 *)((long)param_1 + lVar6 + 0x10);
          uVar15 = *(undefined8 *)((long)param_1 + lVar6 + 0x18);
          lVar1 = lVar6 + -0x10;
        } while (((float)uVar15 - (float)uVar16) *
                 ((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar16 >> 0x20)) < fVar14);
        pfVar7 = (float *)((long)param_1 + lVar6 + 0x20);
LAB_10a7a87c4:
        *pfVar7 = fVar12;
        pfVar7[1] = fVar13;
        pfVar7[2] = fVar9;
        pfVar7[3] = fVar10;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return pfVar3 + 4 == param_2;
        }
      }
      lVar4 = lVar4 + 0x10;
      pfVar7 = pfVar3 + 4;
      pfVar8 = pfVar3;
    } while (pfVar3 + 4 != param_2);
  }
  return true;
}



/* Entry: 10a7a88cc; end: 10a7a89d3;  */

undefined8 * FUN_10a7a88cc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ba8488;
  param_1[2] = 0;
  param_1[6] = &PTR_SUB_110ba84d0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = &PTR_SUB_110ba84d0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  FUN_10a14b750(param_1 + 0x28);
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



/* Entry: 10a7a89d4; end: 10a7a8acf;  */

undefined1  [16] FUN_10a7a89d4(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c18e58;
  puVar1 = &UNK_10f674def;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c18e58;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a7a8ad0; end: 10a7a8b33;  */

ulong FUN_10a7a8ad0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a8b34);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a7a8b34,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a7a8b34; end: 10a7a8c63;  */

void FUN_10a7a8b34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a76c38c(&plStack_68,plVar5);
      FUN_10a07b380(param_1,param_2,&plStack_68);
      func_0x000104c4f944(&plStack_68);
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a8c40);
  (*pcVar1)();
}



/* Entry: 10a7a8c64; end: 10a7a8cc7;  */

ulong FUN_10a7a8c64(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a8cc8);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a7a8cc8,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a7a8cc8; end: 10a7a8e4b;  */

void FUN_10a7a8cc8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a43b1c4(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
      FUN_10a76bdb0(plVar5,&stack0xffffffffffffffa8,&lStack_70);
      if (in_stack_ffffffffffffffa0 < 0) {
        __ZdlPv(lStack_70);
      }
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a8e08);
  (*pcVar1)();
}



/* Entry: 10a7a8e4c; end: 10a7a8f07;  */

void FUN_10a7a8e4c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6767f5,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7a8f08);
  (*pcVar4)();
}



/* Entry: 10a7a8f08; end: 10a7a9007;  */

void FUN_10a7a8f08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  lVar8 = plVar4[8];
  lVar5 = lVar8;
  func_0x00010a79db50(lVar8,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = lVar8 + 8 != lVar5;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar8 = plVar3[0x4c];
  lVar9 = lVar8 - lVar5;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar8 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar8 = lVar2 + lVar9;
          _bzero(lVar8,uVar13 * 0x10);
          lVar10 = lVar8 + uVar12 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar8 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar8,uVar13 * 0x10);
    plVar3[0x4c] = lVar8 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar8 != lVar5) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a7a9008; end: 10a7a906f;  */

void FUN_10a7a9008(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c18e20;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a7a9128(extraout_x8,plVar4,FUN_10a76dda8,0,param_2,param_3,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a7a9070; end: 10a7a9127;  */

void FUN_10a7a9070(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a7a9128(param_1,param_2,FUN_10a76dda8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a7a9128; end: 10a7a922f;  */

void FUN_10a7a9128(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar4 = param_2;
  FUN_10a7a9008(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_78,plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a052f68(param_1,param_2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10a7a9230; end: 10a7a939b;  */

void FUN_10a7a9230(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a7a939c(param_5);
  func_0x000109898570(&plStack_68,param_2,param_4);
  FUN_10a7a93c0(param_2,param_4 + 0x10);
  lVar9 = plVar6[8];
  FUN_10a2ea178(&stack0xffffffffffffffb0);
  FUN_10a79dbcc(lVar9,&plStack_68,&plStack_68);
  FUN_10a2c8f88(lVar9 + 0x38,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a7a939c; end: 10a7a93bf;  */

void FUN_10a7a939c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *extraout_x8;
  ulong uVar21;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 unaff_x22;
  long lVar23;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar28;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 2) {
    return;
  }
  ppuVar12 = (undefined **)0x2;
  ppuVar18 = (undefined **)0x0;
  FUN_10a052ee0(2,0,param_1);
  puVar10 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a7a93c0;
  ppppuVar28 = &pppuStack_20;
  ppuVar13 = ppuVar12;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar14 = (undefined **)&UNK_10f68f52e;
    pcVar9 = FUN_10a7a93f8;
    func_0x00010988bd28();
  }
  else {
    puVar10 = &stack0xfffffffffffffff0;
    ppuVar14 = ppuVar12;
    ppuVar18 = ppuVar13;
    ppuVar12 = unaff_x19;
    ppppuVar28 = (undefined8 ****)pppuStack_20;
    pcVar9 = pcStack_18;
  }
  *(undefined8 *****)(puVar10 + -0x10) = ppppuVar28;
  *(code **)(puVar10 + -8) = pcVar9;
  FUN_10a053854();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar18 = &PTR_DAT_110b178e0;
    param_1 = &PTR_DAT_110c42c58;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar14 != (undefined **)0x0) {
      return;
    }
  }
  plVar15 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar10 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar10 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar10 + -0x30) = unaff_x20;
  *(undefined ***)(puVar10 + -0x28) = ppuVar12;
  *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
  *(code **)(puVar10 + -0x18) = FUN_10a7a9438;
  plVar16 = plVar15;
  (**(code **)(*plVar15 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar17 = plVar15;
  FUN_10a7a9008(plVar15,ppuVar18);
  FUN_10a0584c8(param_4);
  func_0x000109898570(puVar10 + -0x68,plVar15,param_1);
  FUN_10a76de28(plVar17,puVar10 + -0x68);
  if ((char)puVar10[-0x51] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar10 + -0x68));
  }
  *extraout_x8 = 0;
  plVar15 = plVar16 + 0x4b;
  uVar1 = *(undefined8 *)(puVar10 + -0x20);
  uVar5 = *(undefined8 *)(puVar10 + -0x18);
  uVar2 = *(undefined8 *)(puVar10 + -0x30);
  uVar6 = *(undefined8 *)(puVar10 + -0x28);
  uVar3 = *(undefined8 *)(puVar10 + -0x40);
  uVar7 = *(undefined8 *)(puVar10 + -0x38);
  uVar4 = *(undefined8 *)(puVar10 + -0x50);
  uVar8 = *(undefined8 *)(puVar10 + -0x48);
  lVar19 = plVar16[0x59];
  uVar20 = lVar19 - 1;
  plVar16[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar15[lVar19 + 2];
    if (plVar16[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar16[0x57] + -8);
    plVar16[0x57] = plVar16[0x57] + -8;
    if (plVar16[0x5a] == uVar20) {
      return;
    }
  }
  *(undefined8 *)(puVar10 + -0x70) = unaff_x28;
  *(undefined8 *)(puVar10 + -0x68) = unaff_x27;
  *(undefined8 *)(puVar10 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar10 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar10 + -0x50) = uVar4;
  *(undefined8 *)(puVar10 + -0x48) = uVar8;
  *(undefined8 *)(puVar10 + -0x40) = uVar3;
  *(undefined8 *)(puVar10 + -0x38) = uVar7;
  *(undefined8 *)(puVar10 + -0x30) = uVar2;
  *(undefined8 *)(puVar10 + -0x28) = uVar6;
  *(undefined8 *)(puVar10 + -0x20) = uVar1;
  *(undefined8 *)(puVar10 + -0x18) = uVar5;
  lVar19 = *plVar15;
  lVar24 = plVar16[0x4c];
  lVar22 = lVar24 - lVar19;
  uVar26 = lVar22 >> 4;
  if (uVar26 < uVar20) {
    uVar27 = uVar20 - uVar26;
    lVar25 = plVar16[0x4d];
    if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = lVar25 - lVar19 >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar25 - lVar19)) {
          uVar21 = 0xfffffffffffffff;
        }
        *(long **)(puVar10 + -0x78) = plVar15;
        if (uVar21 >> 0x3c == 0) {
          lVar11 = uVar21 << 4;
          __Znwm();
          lVar24 = lVar11 + lVar22;
          _bzero(lVar24,uVar27 * 0x10);
          lVar23 = lVar24 + uVar26 * -0x10;
          _memcpy(lVar23,lVar19,lVar22);
          *plVar15 = lVar23;
          plVar16[0x4c] = lVar24 + uVar27 * 0x10;
          plVar16[0x4d] = lVar11 + uVar21 * 0x10;
          *(long *)(puVar10 + -0x88) = lVar19;
          *(long *)(puVar10 + -0x80) = lVar25;
          *(long *)(puVar10 + -0x98) = lVar19;
          *(long *)(puVar10 + -0x90) = lVar19;
          func_0x00010988c1b8(puVar10 + -0x98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(lVar24,uVar27 * 0x10);
    plVar16[0x4c] = lVar24 + uVar27 * 0x10;
  }
  else if (uVar20 < uVar26) {
    lVar19 = lVar19 + uVar20 * 0x10;
    while (lVar24 != lVar19) {
      lVar24 = lVar24 + -0x10;
      func_0x00010988c204(lVar24);
    }
    plVar16[0x4c] = lVar19;
  }
code_r0x00010988c138:
  plVar16[0x5a] = uVar20;
  return;
}



/* Entry: 10a7a93c0; end: 10a7a93f7;  */

void FUN_10a7a93c0(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long lVar21;
  long lVar22;
  undefined8 unaff_x23;
  long lVar23;
  undefined8 unaff_x24;
  ulong uVar24;
  undefined8 unaff_x25;
  ulong uVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_71 [81];
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar12 = param_1;
  func_0x000109898688();
  ppuVar13 = param_1;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a7a93f8;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar12 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar12 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c42c58;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar13 != (undefined **)0x0) {
      return;
    }
  }
  plVar14 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a7a9438;
  plVar15 = plVar14;
  (**(code **)(*plVar14 + 0x58))();
  if ((ulong)plVar15[0x59] < 8) {
    plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
    plVar15[0x59] = plVar15[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar15 + 0x4b);
  }
  plVar16 = plVar14;
  FUN_10a7a9008(plVar14,ppuVar12);
  FUN_10a0584c8(param_4);
  func_0x000109898570((undefined1 *)((long)register0x00000008 + -0x68),plVar14,param_3);
  FUN_10a76de28(plVar16,(undefined1 *)((long)register0x00000008 + -0x68));
  if (*(char *)((long)register0x00000008 + -0x51) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x68));
  }
  *extraout_x8 = 0;
  plVar14 = plVar15 + 0x4b;
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
  lVar17 = plVar15[0x59];
  uVar18 = lVar17 - 1;
  plVar15[0x59] = uVar18;
  if (uVar18 < 8) {
    uVar18 = plVar14[lVar17 + 2];
    if (plVar15[0x5a] == uVar18) {
      return;
    }
  }
  else {
    uVar18 = *(ulong *)(plVar15[0x57] + -8);
    plVar15[0x57] = plVar15[0x57] + -8;
    if (plVar15[0x5a] == uVar18) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
  lVar17 = *plVar14;
  lVar22 = plVar15[0x4c];
  lVar20 = lVar22 - lVar17;
  uVar24 = lVar20 >> 4;
  if (uVar24 < uVar18) {
    uVar25 = uVar18 - uVar24;
    lVar23 = plVar15[0x4d];
    if ((ulong)(lVar23 - lVar22 >> 4) < uVar25) {
      if (uVar18 >> 0x3c == 0) {
        uVar19 = lVar23 - lVar17 >> 3;
        if (uVar19 <= uVar18) {
          uVar19 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar23 - lVar17)) {
          uVar19 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x78) = plVar14;
        if (uVar19 >> 0x3c == 0) {
          lVar11 = uVar19 << 4;
          __Znwm();
          lVar22 = lVar11 + lVar20;
          _bzero(lVar22,uVar25 * 0x10);
          lVar21 = lVar22 + uVar24 * -0x10;
          _memcpy(lVar21,lVar17,lVar20);
          *plVar14 = lVar21;
          plVar15[0x4c] = lVar22 + uVar25 * 0x10;
          plVar15[0x4d] = lVar11 + uVar19 * 0x10;
          *(long *)((long)register0x00000008 + -0x88) = lVar17;
          *(long *)((long)register0x00000008 + -0x80) = lVar23;
          *(long *)((long)register0x00000008 + -0x98) = lVar17;
          *(long *)((long)register0x00000008 + -0x90) = lVar17;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar10)();
    }
    _bzero(lVar22,uVar25 * 0x10);
    plVar15[0x4c] = lVar22 + uVar25 * 0x10;
  }
  else if (uVar18 < uVar24) {
    lVar17 = lVar17 + uVar18 * 0x10;
    while (lVar22 != lVar17) {
      lVar22 = lVar22 + -0x10;
      func_0x00010988c204(lVar22);
    }
    plVar15[0x4c] = lVar17;
  }
code_r0x00010988c138:
  plVar15[0x5a] = uVar18;
  return;
}



/* Entry: 10a7a93f8; end: 10a7a9437;  */

void FUN_10a7a93f8(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c42c58;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a7a9008(plVar3,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_3);
  FUN_10a76de28(plVar5,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a7a9438; end: 10a7a951b;  */

void FUN_10a7a9438(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a76de28(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a7a951c; end: 10a7a97db;  */

void FUN_10a7a951c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a7a939c(param_5);
  func_0x000109898570(&lStack_78,param_2,param_4);
  FUN_10a7a93c0(param_2,param_4 + 0x10);
  lVar12 = plVar6[8];
  FUN_10a2ea178(&stack0xffffffffffffffa0);
  if ((in_stack_ffffffffffffffa0 == 0) ||
     (lVar10 = in_stack_ffffffffffffffa0,
     ___dynamic_cast(in_stack_ffffffffffffffa0,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0), lVar10 == 0
     )) {
    puVar8 = (undefined8 *)&stack0xffffffffffffffb0;
  }
  else {
    puVar8 = (undefined8 *)&stack0xffffffffffffffa0;
    in_stack_ffffffffffffffb0 = lVar10;
    in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffa8;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if ((in_stack_ffffffffffffffb0 == 0) || (*(int *)(in_stack_ffffffffffffffb0 + 0x110) != 1)) {
    FUN_10a00946c(&UNK_10f676b23);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7a977c);
    (*pcVar3)();
  }
  FUN_10a34a3a8(&stack0xffffffffffffffa0,in_stack_ffffffffffffffb0,0,1);
  FUN_10a2ea178(&lStack_88,in_stack_ffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  FUN_10a79dbcc(lVar12,&lStack_78,&lStack_78);
  FUN_10a2e9dcc(lVar12 + 0x38,&lStack_88);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  if ((long)plStack_68 < 0) {
    __ZdlPv(lStack_78);
  }
  FUN_10a052f68(param_1,param_2,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar7 = lVar12 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar12 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar10 = plVar5[0x4c];
  lVar11 = lVar10 - lVar12;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar10 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar12 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar11;
          _bzero(lVar10,uVar16 * 0x10);
          lVar13 = lVar10 + uVar15 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar6 = lVar13;
          plVar5[0x4c] = lVar10 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar12;
          plStack_80 = (long *)lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar16 * 0x10);
    plVar5[0x4c] = lVar10 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
    lVar12 = lVar12 + uVar7 * 0x10;
    while (lVar10 != lVar12) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a7a97dc; end: 10a7a983f;  */

ulong FUN_10a7a97dc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7a9840);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a7a9840,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a7a9840; end: 10a7a9957;  */

void FUN_10a7a9840(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a7a9958(param_5);
  plVar7 = param_2;
  FUN_10a7a93c0(param_2,param_4);
  FUN_10a76dec8(&stack0xffffffffffffffb0,plVar6[8],plVar7);
  FUN_10a7a997c(param_1,param_2,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a7a9958; end: 10a7a997b;  */

void FUN_10a7a9958(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar5 = 1;
  uVar6 = 0;
  FUN_10a052ee0(1,0);
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_1;
  plStack_38 = param_4;
  FUN_10a052f68(uVar5,uVar6,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7a997c; end: 10a7a9a03;  */

void FUN_10a7a997c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_3;
  plStack_28 = param_4;
  FUN_10a052f68(param_1,param_2,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7a9a04; end: 10a7a9b67;  */

/* WARNING: Removing unreachable block (ram,0x00010a7a9ac0) */

void FUN_10a7a9a04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a2eb2f0(param_5);
  FUN_10a2eb314(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a76e454(&lStack_70,plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
  }
  FUN_10a7a997c(param_1,param_2,lStack_70,plStack_68);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a7a9b68; end: 10a7a9cab;  */

void FUN_10a7a9b68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a7a9008(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a770f5c(&plStack_68,plVar6[8],&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a204898(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}


