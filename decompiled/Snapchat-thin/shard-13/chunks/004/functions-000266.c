/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a527e6c; end: 10a527ef7;  */

undefined8 * FUN_10a527e6c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110bee280;
  FUN_10a22ff44(&puStack_28);
  return param_1;
}



/* Entry: 10a527ef8; end: 10a52805f;  */

void FUN_10a527ef8(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  code **ppcVar3;
  code **ppcVar4;
  code ***pppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code **ppcStack_d0;
  code **ppcStack_c8;
  long lStack_c0;
  code **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a7ae5,0x1f,&uStack_a0,0);
  lVar10 = *param_2;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_6c = SUB84(plVar2,0);
  ppcVar7 = &pcStack_68;
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_88,0,&uStack_6c);
  uStack_58 = *(undefined8 *)(param_1 + 8);
  pcStack_68 = FUN_10a528060;
  ppuStack_60 = &PTR_FUN_110bee2b0;
  ppcVar6 = &pcStack_68;
  func_0x0001098bb6d0(lVar10 + 0x18,ppcVar6,&lStack_88);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  ppcVar3 = &pcStack_68;
  pcStack_68 = (code *)&uStack_a0;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  pcStack_68 = (code *)&uStack_a0;
  FUN_10a22ff44(&pcStack_68);
  ppcVar4 = ppcVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    pppcVar5 = &ppcStack_d0;
    pcStack_a8 = FUN_10a528060;
    ppcStack_d0 = ppcVar4;
    ppcStack_c8 = ppcVar6;
    lStack_c0 = lVar10;
    ppcStack_b8 = ppcVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010a291414(&ppcStack_d0,*(undefined4 *)ppcVar7);
    *(code ****)(*(long *)(lVar9 + 0x10) + 0x28) = pppcVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5280a8);
  (*pcVar1)();
}



/* Entry: 10a528060; end: 10a5280a7;  */

void FUN_10a528060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a291414(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x28) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5280a8);
  (*pcVar1)();
}



/* Entry: 10a5280a8; end: 10a5280c3;  */

void FUN_10a5280a8(void)

{
  return;
}



/* Entry: 10a5280c4; end: 10a528123;  */

void FUN_10a5280c4(int *param_1,long param_2)

{
  int *piStack_30;
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[8] == '\x01') {
    piStack_30 = param_1 + 2;
    FUN_10a22ff44(&piStack_30);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10a528124; end: 10a5281e7;  */

void FUN_10a528124(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a22fc9c(&uStack_50,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x2e8ba2e8ba2e8ba3);
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee2d8;
    puVar2[1] = param_3;
    puVar2[3] = uStack_48;
    puVar2[2] = uStack_50;
    puVar2[4] = uStack_40;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    *param_1 = puVar2;
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_10a22ff44(&puStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5281d0);
  (*pcVar1)();
}



/* Entry: 10a5281e8; end: 10a528273;  */

undefined8 * FUN_10a5281e8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110bee2d8;
  FUN_10a22ff44(&puStack_28);
  return param_1;
}



/* Entry: 10a528274; end: 10a5283db;  */

void FUN_10a528274(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  code **ppcVar3;
  code **ppcVar4;
  code ***pppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code **ppcStack_d0;
  code **ppcStack_c8;
  long lStack_c0;
  code **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bea76,0x26,&uStack_a0,0);
  lVar10 = *param_2;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_6c = SUB84(plVar2,0);
  ppcVar7 = &pcStack_68;
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_88,0,&uStack_6c);
  uStack_58 = *(undefined8 *)(param_1 + 8);
  pcStack_68 = FUN_10a5283dc;
  ppuStack_60 = &PTR_FUN_110bee308;
  ppcVar6 = &pcStack_68;
  func_0x0001098bb6d0(lVar10 + 0x18,ppcVar6,&lStack_88);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  ppcVar3 = &pcStack_68;
  pcStack_68 = (code *)&uStack_a0;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  pcStack_68 = (code *)&uStack_a0;
  FUN_10a22ff44(&pcStack_68);
  ppcVar4 = ppcVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    pppcVar5 = &ppcStack_d0;
    pcStack_a8 = FUN_10a5283dc;
    ppcStack_d0 = ppcVar4;
    ppcStack_c8 = ppcVar6;
    lStack_c0 = lVar10;
    ppcStack_b8 = ppcVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010a291414(&ppcStack_d0,*(undefined4 *)ppcVar7);
    *(code ****)(*(long *)(lVar9 + 0x10) + 0x30) = pppcVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a528424);
  (*pcVar1)();
}



/* Entry: 10a5283dc; end: 10a528423;  */

void FUN_10a5283dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a291414(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x30) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a528424);
  (*pcVar1)();
}



/* Entry: 10a528424; end: 10a52843f;  */

void FUN_10a528424(void)

{
  return;
}



/* Entry: 10a528440; end: 10a5284a3;  */

void FUN_10a528440(int *param_1,long param_2)

{
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[0x10] == '\x01') {
    *(undefined ***)(param_1 + 2) = &PTR_FUN_110bef348;
    func_0x00010a22fc28(param_1 + 6);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10a5284a4; end: 10a528563;  */

void FUN_10a5284a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x10);
    FUN_10a22ec14(auStack_68,param_2 + 0x18);
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    *puVar3 = &PTR_FUN_110bee330;
    puVar3[1] = param_3;
    *(undefined1 *)(puVar3 + 3) = uVar1;
    puVar3[2] = &PTR_FUN_110bef348;
    FUN_10a2311c0(puVar3 + 4,auStack_68);
    *param_1 = puVar3;
    func_0x00010a22fc28(auStack_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a52854c);
  (*pcVar2)();
}



/* Entry: 10a528564; end: 10a5285e3;  */

undefined8 * FUN_10a528564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee330;
  param_1[2] = &PTR_FUN_110bef348;
  func_0x00010a22fc28(param_1 + 4);
  return param_1;
}



/* Entry: 10a5285e4; end: 10a528757;  */

void FUN_10a5285e4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [40];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = *(undefined1 *)(param_1 + 0x18);
  ppuStack_d8 = &PTR_FUN_110bef348;
  FUN_10a2311c0(auStack_c8,param_1 + 0x20);
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bb2e7,0x26,&ppuStack_d8,0);
  lVar10 = *param_2;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = (code *)CONCAT44(uStack_88._4_4_,(int)plVar2);
  puVar7 = (undefined4 *)((long)&uStack_88 + 4);
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_a0,0,&uStack_88);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uStack_88 = FUN_10a528758;
  ppuStack_80 = &PTR_FUN_110bee360;
  puVar6 = &uStack_88;
  func_0x0001098bb6d0(lVar10 + 0x18,puVar6,&lStack_a0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  ppuStack_d8 = &PTR_FUN_110bef348;
  puVar3 = auStack_c8;
  func_0x00010a22fc28();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  ppuStack_d8 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(auStack_c8);
  puVar4 = puVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    ppuVar5 = &puStack_110;
    pcStack_e8 = FUN_10a528758;
    puStack_110 = puVar4;
    puStack_108 = puVar6;
    puStack_100 = &uStack_88;
    puStack_f8 = puVar3;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x00010a2926e4(&puStack_110,*puVar7);
    *(undefined1 ***)(*(long *)(lVar9 + 0x10) + 0x20) = ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5287a0);
  (*pcVar1)();
}



/* Entry: 10a528758; end: 10a52879f;  */

void FUN_10a528758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a2926e4(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x20) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5287a0);
  (*pcVar1)();
}



/* Entry: 10a5287a0; end: 10a5287bb;  */

void FUN_10a5287a0(void)

{
  return;
}



/* Entry: 10a5287bc; end: 10a528817;  */

void FUN_10a5287bc(int *param_1,long param_2)

{
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[8] == '\x01') {
    func_0x00010a22dfb0(param_1 + 2,*(undefined8 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10a528818; end: 10a5288d3;  */

void FUN_10a528818(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_10a22d2fc(&plStack_48,param_2 + 8);
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_DAT_110bee388;
    puVar2[1] = param_3;
    puVar2[2] = plStack_48;
    plVar3 = puVar2 + 3;
    *plVar3 = lStack_40;
    puVar2[4] = lStack_38;
    if (lStack_38 == 0) {
      puVar2[2] = plVar3;
    }
    else {
      plStack_48 = &lStack_40;
      *(long **)(lStack_40 + 0x10) = plVar3;
      lStack_40 = 0;
      lStack_38 = 0;
    }
    *param_1 = puVar2;
    func_0x00010a22dfb0(&plStack_48,lStack_40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5288bc);
  (*pcVar1)();
}



/* Entry: 10a5288d4; end: 10a528a13;  */

void FUN_10a5288d4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 2,param_2 + 2);
        lVar1 = param_2[6];
        plVar4[7] = param_2[7];
        plVar4[6] = lVar1;
        lVar1 = param_2[8];
        plVar4[9] = param_2[9];
        plVar4[8] = lVar1;
        lVar1 = param_2[10];
        plVar4[0xb] = param_2[0xb];
        plVar4[10] = lVar1;
        plVar4[0xc] = param_2[0xc];
        lVar1 = param_2[0xe];
        plVar4[0xf] = param_2[0xf];
        plVar4[0xe] = lVar1;
        lVar1 = param_2[0x10];
        plVar4[0x11] = param_2[0x11];
        plVar4[0x10] = lVar1;
        lVar1 = param_2[0x12];
        plVar4[0x13] = param_2[0x13];
        plVar4[0x12] = lVar1;
        lVar1 = param_2[0x14];
        plVar4[0x15] = param_2[0x15];
        plVar4[0x14] = lVar1;
        plVar4[0x16] = param_2[0x16];
        plVar3 = (long *)*plVar4;
        FUN_10a528a14(param_1,plVar4);
        param_2 = (long *)*param_2;
        if (plVar3 == (long *)0x0) break;
        plVar4 = plVar3;
      } while (param_2 != param_3);
    }
    func_0x00010a22deb0(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a528ee8(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a528a14; end: 10a528a63;  */

long FUN_10a528a14(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c2b05c(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_10a528a64(param_1,uVar1,param_2 + 0x10);
  FUN_10a528bbc(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 10a528a64; end: 10a528bbb;  */

long * FUN_10a528a64(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar4;
  
  uVar10 = param_1[1];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_10a528c8c(param_1,uVar5);
    uVar10 = param_1[1];
  }
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar11 = uVar5 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar10 <= param_2) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = param_2 / uVar10;
      }
      uVar11 = param_2 - uVar11 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + uVar11 * 8);
  if ((plVar9 != (long *)0x0) && (lVar6 = *plVar9, lVar6 != 0)) {
    uVar12 = 0;
    bVar1 = 0;
    do {
      uVar7 = *(ulong *)(lVar6 + 8);
      if ((uVar10 & uVar5) == 0) {
        uVar8 = uVar7 & uVar5;
      }
      else {
        uVar8 = uVar7;
        if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          uVar8 = uVar7 - uVar8 * uVar10;
        }
      }
      if (uVar8 != uVar11) {
        return plVar9;
      }
      if (uVar7 == param_2) {
        plVar4 = param_1;
        func_0x000107c2b068(param_1,lVar6 + 0x10,param_3);
        uVar3 = (uint)plVar4;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar12;
      if ((bool)(bVar1 & bVar2)) {
        return plVar9;
      }
      uVar12 = uVar12 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar9 = (long *)*plVar9;
      lVar6 = *plVar9;
    } while (lVar6 != 0);
  }
  return plVar9;
}



/* Entry: 10a528bbc; end: 10a528c8b;  */

void FUN_10a528bbc(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a528be4;
LAB_10a528c20:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a528c7c;
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
    if (param_3 == (long *)0x0) goto LAB_10a528c20;
LAB_10a528be4:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a528c7c;
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
    if (uVar4 == uVar2) goto LAB_10a528c7c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a528c7c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a528c8c; end: 10a528d5b;  */

void FUN_10a528c8c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_10a528cd4;
    }
    return;
  }
LAB_10a528cd4:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a528ee8;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a528f44(auStack_88);
      FUN_10a528a14(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000107c2b068(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_10a528ec4;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_10a528ec4:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a528d5c; end: 10a528ee7;  */

void FUN_10a528d5c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000109ffded8();
      pcStack_58 = FUN_10a528ee8;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a528f44(auStack_88);
      FUN_10a528a14(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000107c2b068(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_10a528ec4;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_10a528ec4:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a528ee8; end: 10a528f43;  */

void FUN_10a528ee8(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a528f44(auStack_38);
  FUN_10a528a14(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a528f44; end: 10a528fd3;  */

void FUN_10a528f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a22dda4(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c2b05c(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10a528fd4; end: 10a529047;  */

long * FUN_10a528fd4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10a529034;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10a529034:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a529048; end: 10a52909b;  */

void FUN_10a529048(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a52909c; end: 10a52915f;  */

undefined8 * FUN_10a52909c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010a22dfb0(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x00010a22dfb0(*param_1);
  }
  return param_1;
}



/* Entry: 10a529160; end: 10a5292df;  */

void FUN_10a529160(long param_1,long *param_2)

{
  code *pcVar1;
  long **pplVar2;
  long **pplVar3;
  long ***ppplVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long **pplStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)(param_1 + 0x18);
  lStack_a0 = *plVar8;
  plVar9 = *(long **)(param_1 + 0x10);
  plStack_a8 = &lStack_a0;
  lStack_98 = *(long *)(param_1 + 0x20);
  if (lStack_98 != 0) {
    *(long **)(lStack_a0 + 0x10) = plStack_a8;
    *(long **)(param_1 + 0x10) = plVar8;
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plStack_a8 = plVar9;
  }
  lVar7 = 1;
  plVar8 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bdf3c,0x2e,&plStack_a8,0);
  lVar10 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar8);
  puVar5 = (undefined4 *)((long)&uStack_78 + 4);
  lVar6 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a5292e0;
  ppuStack_70 = &PTR_FUN_110bee3b8;
  func_0x0001098bb6d0(lVar10 + 0x18,&uStack_78,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  pplVar2 = &plStack_a8;
  func_0x00010a22dfb0(pplVar2,lStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    lVar10 = lStack_a0;
    func_0x00010a22dfb0(&plStack_a8);
    pplVar3 = pplVar2;
    __Unwind_Resume();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529328);
      (*pcVar1)();
    }
    ppplVar4 = &pplStack_e0;
    pcStack_b8 = FUN_10a5292e0;
    pplStack_e0 = pplVar3;
    lStack_d8 = lVar10;
    puStack_d0 = &uStack_78;
    pplStack_c8 = pplVar2;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_10a4efdc0(&pplStack_e0,*puVar5);
    *(long ****)(*(long *)(lVar7 + 0x10) + 0x48) = ppplVar4;
    return;
  }
  return;
}



/* Entry: 10a5292e0; end: 10a529327;  */

void FUN_10a5292e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4efdc0(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x48) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529328);
  (*pcVar1)();
}



/* Entry: 10a529328; end: 10a52934b;  */

void FUN_10a529328(void)

{
  return;
}



/* Entry: 10a52934c; end: 10a52947f;  */

void FUN_10a52934c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c8fa1,0x27,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a529480;
  ppuStack_70 = &PTR_FUN_110bee410;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a529480;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a4fc70c(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x98) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5294c8);
  (*pcVar1)();
}



/* Entry: 10a529480; end: 10a5294c7;  */

void FUN_10a529480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4fc70c(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x98) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5294c8);
  (*pcVar1)();
}



/* Entry: 10a5294c8; end: 10a5294eb;  */

void FUN_10a5294c8(void)

{
  return;
}



/* Entry: 10a5294ec; end: 10a529627;  */

void FUN_10a5294ec(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = *(undefined ***)(param_1 + 0x18);
  uStack_80 = *(code **)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c8fc9,0x23,&uStack_80,0);
  lVar9 = *param_2;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = (code *)CONCAT44(uStack_80._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_80 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_98,0,&uStack_80);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_80 = FUN_10a529628;
  ppuStack_78 = &PTR_FUN_110bee468;
  puVar5 = &uStack_80;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_98);
  (*(code *)*ppuStack_78)(&ppuStack_78);
  lVar3 = lStack_98;
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_78)(&ppuStack_78);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_d0;
    pcStack_a8 = FUN_10a529628;
    lStack_d0 = lVar4;
    puStack_c8 = puVar5;
    lStack_c0 = lVar9;
    lStack_b8 = lVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    FUN_10a4fcdbc(&lStack_d0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x68) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529670);
  (*pcVar1)();
}



/* Entry: 10a529628; end: 10a52966f;  */

void FUN_10a529628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4fcdbc(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x68) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529670);
  (*pcVar1)();
}



/* Entry: 10a529670; end: 10a529693;  */

void FUN_10a529670(void)

{
  return;
}



/* Entry: 10a529694; end: 10a5297cf;  */

void FUN_10a529694(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (code *)CONCAT71(uStack_78._1_7_,*(undefined1 *)(param_1 + 0x10));
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c90b0,0x29,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a5297d0;
  ppuStack_70 = &PTR_FUN_110bee4c0;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a5297d0;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a4fcdbc(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0xa0) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529818);
  (*pcVar1)();
}



/* Entry: 10a5297d0; end: 10a529817;  */

void FUN_10a5297d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4fcdbc(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0xa0) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529818);
  (*pcVar1)();
}



/* Entry: 10a529818; end: 10a52983b;  */

void FUN_10a529818(void)

{
  return;
}



/* Entry: 10a52983c; end: 10a52997f;  */

void FUN_10a52983c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (code *)CONCAT62(CONCAT51(uStack_78._3_5_,*(undefined1 *)(param_1 + 0x12)),
                               *(undefined2 *)(param_1 + 0x10));
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c911b,0x23,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a529980;
  ppuStack_70 = &PTR_FUN_110bee518;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a529980;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a4fc000(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x90) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5299c8);
  (*pcVar1)();
}



/* Entry: 10a529980; end: 10a5299c7;  */

void FUN_10a529980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4fc000(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x90) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5299c8);
  (*pcVar1)();
}



/* Entry: 10a5299c8; end: 10a5299eb;  */

void FUN_10a5299c8(void)

{
  return;
}



/* Entry: 10a5299ec; end: 10a529b1f;  */

void FUN_10a5299ec(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bd6df,0x20,&uStack_78,0);
  lVar6 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar3 = (undefined4 *)((long)&uStack_78 + 4);
  lVar4 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a529b20;
  ppuStack_70 = &PTR_FUN_110bee570;
  plVar2 = &uStack_78;
  func_0x0001098bb6d0(lVar6 + 0x18,plVar2,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar6 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (lVar4 != 0) {
    FUN_10a26d738(plVar2,*puVar3);
    lVar4 = 0x113302568;
    if (*plVar2 != -1) {
      lVar4 = *plVar2 + lVar6;
    }
    *(long *)(*(long *)(lVar5 + 0x10) + 8) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529b78);
  (*pcVar1)();
}



/* Entry: 10a529b20; end: 10a529b77;  */

void FUN_10a529b20(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  if (param_5 != 0) {
    FUN_10a26d738(param_2,*param_4);
    lVar1 = 0x113302568;
    if (*param_2 != -1) {
      lVar1 = *param_2 + param_1;
    }
    *(long *)(*(long *)(param_6 + 0x10) + 8) = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a529b78);
  (*pcVar2)();
}



/* Entry: 10a529b78; end: 10a529b9b;  */

void FUN_10a529b78(void)

{
  return;
}



/* Entry: 10a529b9c; end: 10a529cdf;  */

void FUN_10a529b9c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = *(undefined ***)(param_1 + 0x18);
  uStack_80 = *(code **)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c8f2d,0x26,&uStack_80,0);
  lVar9 = *param_2;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = (code *)CONCAT44(uStack_80._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_80 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_98,0,&uStack_80);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_80 = FUN_10a529ce0;
  ppuStack_78 = &PTR_FUN_110bee5c8;
  puVar5 = &uStack_80;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_98);
  (*(code *)*ppuStack_78)(&ppuStack_78);
  lVar3 = lStack_98;
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_78)(&ppuStack_78);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_d0;
    pcStack_a8 = FUN_10a529ce0;
    lStack_d0 = lVar4;
    puStack_c8 = puVar5;
    lStack_c0 = lVar9;
    lStack_b8 = lVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010a4efd18(&lStack_d0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x10) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529d28);
  (*pcVar1)();
}



/* Entry: 10a529ce0; end: 10a529d27;  */

void FUN_10a529ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a4efd18(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x10) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529d28);
  (*pcVar1)();
}



/* Entry: 10a529d28; end: 10a529d4b;  */

void FUN_10a529d28(void)

{
  return;
}



/* Entry: 10a529d4c; end: 10a529e7f;  */

void FUN_10a529d4c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c0339,0x1c,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a529e80;
  ppuStack_70 = &PTR_FUN_110bee620;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a529e80;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a51d480(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x78) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529ec8);
  (*pcVar1)();
}



/* Entry: 10a529e80; end: 10a529ec7;  */

void FUN_10a529e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a51d480(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x78) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a529ec8);
  (*pcVar1)();
}



/* Entry: 10a529ec8; end: 10a529ee3;  */

void FUN_10a529ec8(void)

{
  return;
}



/* Entry: 10a529ee4; end: 10a529f27;  */

void FUN_10a529ee4(int *param_1,long param_2)

{
  undefined8 uStack_28;
  
  if (*param_1 != 0) {
    uStack_28 = (int *)CONCAT44(*param_1,(undefined4)uStack_28);
    func_0x0001098b0050(param_2 + 0x18,(long)&uStack_28 + 4);
    *param_1 = 0;
  }
  if ((char)param_1[0x12] == '\x01') {
    if (((char)param_1[0x10] == '\x01') && (*(char *)((long)param_1 + 0x3f) < '\0')) {
      __ZdlPv(*(undefined8 *)(param_1 + 10));
    }
    uStack_28 = param_1 + 4;
    FUN_10a2303d4(&uStack_28);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}



/* Entry: 10a529f28; end: 10a52a063;  */

void FUN_10a529f28(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    uVar1 = *(undefined1 *)(param_2 + 8);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_10a2300f4(&uStack_80,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                  (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) * 0x6db6db6db6db6db7)
    ;
    FUN_10a1ccb30(&uStack_68,param_2 + 0x28);
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    *puVar3 = &PTR_FUN_110bee648;
    puVar3[1] = param_3;
    *(undefined1 *)(puVar3 + 2) = uVar1;
    puVar3[4] = uStack_78;
    puVar3[3] = uStack_80;
    puVar3[5] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    if (cStack_50 == '\x01') {
      puVar3[7] = uStack_60;
      puVar3[6] = uStack_68;
      puVar3[8] = uStack_58;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      *(undefined1 *)(puVar3 + 9) = 1;
    }
    *param_1 = puVar3;
    puStack_48 = &uStack_80;
    FUN_10a2303d4(&puStack_48);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a52a03c);
  (*pcVar2)();
}



/* Entry: 10a52a064; end: 10a52a0cf;  */

long FUN_10a52a064(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    FUN_10a52a0d0(param_3 + 0x18,param_1 + 0x18);
    func_0x00010a52a14c(param_3 + 0x28,param_1 + 0x28);
    param_3 = param_3 + 0x38;
  }
  return param_3;
}



/* Entry: 10a52a0d0; end: 10a52a1c7;  */

undefined8 * FUN_10a52a0d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a52a1c8; end: 10a52a1cb;  */

undefined8 * FUN_10a52a1c8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bee648;
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    __ZdlPv(param_1[6]);
  }
  puStack_28 = param_1 + 3;
  FUN_10a2303d4(&puStack_28);
  return param_1;
}



/* Entry: 10a52a1cc; end: 10a52a1df;  */

void FUN_10a52a1cc(void)

{
  FUN_10a52a39c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a52a1e0; end: 10a52a39b;  */

undefined8 * FUN_10a52a1e0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  char cStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_d0[0] = *(undefined1 *)(param_1 + 0x10);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  cStack_98 = *(char *)(param_1 + 0x48) == '\x01';
  if ((bool)cStack_98) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(ulong *)(param_1 + 0x30);
    lStack_a0 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  plVar1 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bfc14,0x2e,auStack_d0,0,1);
  lVar4 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (undefined8 *)CONCAT44(uStack_78._4_4_,(int)plVar1);
  FUN_10a26ebc0(&lStack_90,0,&uStack_78,(long)&uStack_78 + 4,1);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = (undefined8 *)0x10a52a3fc;
  ppuStack_70 = &PTR_FUN_110bee678;
  func_0x0001098bb6d0(lVar4 + 0x18,&uStack_78,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if ((cStack_98 == '\x01') && (lStack_a0 < 0)) {
    __ZdlPv(uStack_b0);
  }
  puVar2 = &uStack_78;
  uStack_78 = &uStack_c8;
  FUN_10a2303d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  FUN_10a4ef8a4(auStack_d0);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a52a39c;
  puStack_f0 = &uStack_78;
  puStack_e8 = puVar2;
  puStack_e0 = &stack0xfffffffffffffff0;
  *puVar3 = &PTR_FUN_110bee648;
  if ((*(char *)(puVar3 + 9) == '\x01') && (*(char *)((long)puVar3 + 0x47) < '\0')) {
    __ZdlPv(puVar3[6]);
  }
  puStack_f8 = puVar3 + 3;
  FUN_10a2303d4(&puStack_f8);
  return puVar3;
}



/* Entry: 10a52a39c; end: 10a52a443;  */

undefined8 * FUN_10a52a39c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bee648;
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    __ZdlPv(param_1[6]);
  }
  puStack_28 = param_1 + 3;
  FUN_10a2303d4(&puStack_28);
  return param_1;
}



/* Entry: 10a52a444; end: 10a52a45f;  */

void FUN_10a52a444(void)

{
  return;
}



/* Entry: 10a52a460; end: 10a52a4bf;  */

void FUN_10a52a460(int *param_1,long param_2)

{
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[10] == '\x01') {
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 4));
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



/* Entry: 10a52a4c0; end: 10a52a58f;  */

void FUN_10a52a4c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined2 *)(param_2 + 0xc);
    if (*(char *)(param_2 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_48,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18)
                         );
    }
    else {
      uStack_40 = *(undefined8 *)(param_2 + 0x18);
      uStack_48 = *(undefined8 *)(param_2 + 0x10);
      uStack_38 = *(undefined8 *)(param_2 + 0x20);
    }
    puVar4 = (undefined8 *)0x30;
    __Znwm();
    *puVar4 = &PTR_FUN_110bee6a0;
    puVar4[1] = param_3;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    *(undefined2 *)((long)puVar4 + 0x14) = uVar2;
    puVar4[4] = uStack_40;
    puVar4[3] = uStack_48;
    puVar4[5] = uStack_38;
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a52a574);
  (*pcVar3)();
}



/* Entry: 10a52a590; end: 10a52a607;  */

undefined8 * FUN_10a52a590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee6a0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10a52a608; end: 10a52a77f;  */

void FUN_10a52a608(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = *(undefined4 *)(param_1 + 0x10);
  uStack_ac = *(undefined2 *)(param_1 + 0x14);
  uStack_a0 = *(undefined8 *)(param_1 + 0x20);
  lStack_a8 = *(long *)(param_1 + 0x18);
  lStack_98 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar7 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c90fd,0x1d,&uStack_b0,0);
  lVar8 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar5 = (undefined4 *)((long)&uStack_78 + 4);
  lVar6 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a52a780;
  ppuStack_70 = &PTR_FUN_110bee6d0;
  puVar4 = &uStack_78;
  func_0x0001098bb6d0(lVar8 + 0x18,puVar4,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar8 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_98 < 0) {
    lVar8 = lStack_a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_98 < 0) {
    __ZdlPv(lStack_a8);
  }
  lVar3 = lVar8;
  __Unwind_Resume();
  if (lVar6 != 0) {
    plVar2 = &lStack_e0;
    pcStack_b8 = FUN_10a52a780;
    lStack_e0 = lVar3;
    puStack_d8 = puVar4;
    puStack_d0 = &uStack_78;
    lStack_c8 = lVar8;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_10a4ff0c0(&lStack_e0,*puVar5);
    **(undefined8 **)(lVar7 + 0x10) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52a7c8);
  (*pcVar1)();
}



/* Entry: 10a52a780; end: 10a52a7c7;  */

void FUN_10a52a780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4ff0c0(&uStack_30,*param_4);
    **(undefined8 **)(param_6 + 0x10) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52a7c8);
  (*pcVar1)();
}



/* Entry: 10a52a7c8; end: 10a52a7eb;  */

void FUN_10a52a7c8(void)

{
  return;
}



/* Entry: 10a52a7ec; end: 10a52a91f;  */

void FUN_10a52a7ec(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c008b,0x1d,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a52a920;
  ppuStack_70 = &PTR_FUN_110bee728;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a52a920;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a51c63c(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x70) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52a968);
  (*pcVar1)();
}



/* Entry: 10a52a920; end: 10a52a967;  */

void FUN_10a52a920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a51c63c(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x70) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52a968);
  (*pcVar1)();
}



/* Entry: 10a52a968; end: 10a52a98b;  */

void FUN_10a52a968(void)

{
  return;
}



/* Entry: 10a52a98c; end: 10a52aac7;  */

void FUN_10a52a98c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(code **)(param_1 + 0x10);
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bf94d,0x22,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a52aac8;
  ppuStack_70 = &PTR_FUN_110bee780;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a52aac8;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a4f8f34(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x58) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52ab10);
  (*pcVar1)();
}



/* Entry: 10a52aac8; end: 10a52ab0f;  */

void FUN_10a52aac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4f8f34(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x58) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52ab10);
  (*pcVar1)();
}



/* Entry: 10a52ab10; end: 10a52ab2b;  */

void FUN_10a52ab10(void)

{
  return;
}



/* Entry: 10a52ab2c; end: 10a52abb3;  */

void FUN_10a52ab2c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_10a22dff8(auStack_58,param_2 + 8);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee7a8;
    puVar2[1] = param_3;
    FUN_10a231018(puVar2 + 2,auStack_58);
    *param_1 = puVar2;
    func_0x00010a22eba0(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52aba0);
  (*pcVar1)();
}



/* Entry: 10a52abb4; end: 10a52ac13;  */

undefined8 * FUN_10a52abb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee7a8;
  func_0x00010a22eba0(param_1 + 2);
  return param_1;
}



/* Entry: 10a52ac14; end: 10a52ad5f;  */

void FUN_10a52ac14(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a231018(auStack_b8,param_1 + 0x10);
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a6e3c,0x2c,auStack_b8,0);
  lVar10 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar7 = (undefined4 *)((long)&uStack_78 + 4);
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a52ad60;
  ppuStack_70 = &PTR_FUN_110bee7d8;
  puVar6 = &uStack_78;
  func_0x0001098bb6d0(lVar10 + 0x18,puVar6,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  puVar3 = auStack_b8;
  func_0x00010a22eba0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  func_0x00010a22eba0(auStack_b8);
  puVar4 = puVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    ppuVar5 = &puStack_f0;
    pcStack_c8 = FUN_10a52ad60;
    puStack_f0 = puVar4;
    puStack_e8 = puVar6;
    puStack_e0 = &uStack_78;
    puStack_d8 = puVar3;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010a2935a4(&puStack_f0,*puVar7);
    *(undefined1 ***)(*(long *)(lVar9 + 0x10) + 0x50) = ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52ada8);
  (*pcVar1)();
}



/* Entry: 10a52ad60; end: 10a52ada7;  */

void FUN_10a52ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a2935a4(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x50) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52ada8);
  (*pcVar1)();
}



/* Entry: 10a52ada8; end: 10a52adc3;  */

void FUN_10a52ada8(void)

{
  return;
}



/* Entry: 10a52adc4; end: 10a52ae23;  */

bool FUN_10a52adc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  __ZNSt3__15mutex4lockEv();
  lVar1 = param_1 + 0x40;
  FUN_10a52ae24(lVar1,&uStack_30);
  __ZNSt3__15mutex6unlockEv(param_1);
  return lVar1 != 0;
}



/* Entry: 10a52ae24; end: 10a52af1f;  */

long * FUN_10a52ae24(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar4 == plVar7) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a52af20; end: 10a52b303;  */

void FUN_10a52af20(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  __ZNSt3__15mutex4lockEv();
  if (999 < *(ulong *)(param_4 + 0x68)) {
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar7,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a52b2b8);
    (*pcVar4)();
  }
  puVar18 = *(undefined8 **)(param_4 + 0x48);
  puVar11 = *(undefined8 **)(param_4 + 0x50);
  uVar2 = (long)puVar11 - (long)puVar18;
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = ((long)puVar11 - (long)puVar18 >> 3) * 0x155 - 1;
  }
  uVar14 = *(ulong *)(param_4 + 0x60);
  uVar12 = *(ulong *)(param_4 + 0x68) + uVar14;
  if (uVar1 != uVar12) goto LAB_10a52b214;
  if (uVar14 < 0x155) {
    puVar15 = *(undefined8 **)(param_4 + 0x58);
    puVar16 = *(undefined8 **)(param_4 + 0x40);
    if (uVar2 < (ulong)((long)puVar15 - (long)puVar16)) {
      uVar7 = 0xffc;
      __Znwm();
      if (puVar15 == puVar11) {
        if (puVar18 == puVar16) {
          lVar10 = (long)puVar15 - (long)puVar18 >> 2;
          if (puVar11 == puVar18) {
            lVar10 = 1;
          }
          lVar5 = lVar10;
          FUN_10a52b458();
          puVar18 = (undefined8 *)(lVar5 + (lVar10 * 2 + 6U & 0xfffffffffffffff8));
          lVar10 = *(long *)(param_4 + 0x50) - (long)*(undefined8 **)(param_4 + 0x48);
          puVar11 = puVar18;
          if (lVar10 != 0) {
            puVar11 = (undefined8 *)((long)puVar18 + lVar10);
            puVar15 = *(undefined8 **)(param_4 + 0x48);
            puVar16 = puVar18;
            do {
              *puVar16 = *puVar15;
              lVar10 = lVar10 + -8;
              puVar15 = puVar15 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar10 != 0);
          }
          lVar10 = *(long *)(param_4 + 0x40);
          *(long *)(param_4 + 0x40) = lVar5;
          *(undefined8 **)(param_4 + 0x48) = puVar18;
          *(undefined8 **)(param_4 + 0x50) = puVar11;
          *(long *)(param_4 + 0x58) = lVar5 + (long)param_5 * 8;
          if (lVar10 != 0) {
            __ZdlPv(lVar10);
            puVar18 = *(undefined8 **)(param_4 + 0x48);
          }
        }
        puVar18[-1] = uVar7;
        puVar11 = *(undefined8 **)(param_4 + 0x48);
        puVar18 = puVar11 + -1;
        *(undefined8 **)(param_4 + 0x48) = puVar18;
        goto LAB_10a52afa4;
      }
      *puVar11 = uVar7;
      *(long *)(param_4 + 0x50) = *(long *)(param_4 + 0x50) + 8;
    }
    else {
      puVar9 = (undefined8 *)((long)puVar15 - (long)puVar16 >> 2);
      if (puVar15 == puVar16) {
        puVar9 = (undefined8 *)0x1;
      }
      FUN_10a52b458();
      uVar7 = 0xffc;
      puVar8 = param_5;
      __Znwm();
      puVar15 = (undefined8 *)((long)puVar9 + uVar2);
      puVar16 = puVar9 + (long)param_5;
      puVar6 = puVar9;
      if (uVar2 == (long)param_5 * 8) {
        if ((long)uVar2 < 1) {
          puVar15 = (undefined8 *)((long)puVar15 - (long)puVar9 >> 2);
          if (puVar11 == puVar18) {
            puVar15 = (undefined8 *)0x1;
          }
          puVar6 = puVar15;
          FUN_10a52b458();
          puVar15 = puVar6 + ((ulong)puVar15 >> 2);
          puVar16 = puVar6 + (long)puVar8;
          if (puVar9 != (undefined8 *)0x0) {
            __ZdlPv(puVar9);
          }
        }
        else {
          lVar10 = ((long)puVar15 - (long)puVar9 >> 3) + 1;
          puVar15 = puVar15 + -((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
        }
      }
      puVar18 = puVar15 + 1;
      *puVar15 = uVar7;
      puVar11 = *(undefined8 **)(param_4 + 0x50);
      puVar9 = puVar6;
      if (puVar11 != *(undefined8 **)(param_4 + 0x48)) {
        do {
          puVar6 = puVar9;
          puVar17 = puVar15;
          if (puVar15 == puVar9) {
            if (puVar18 < puVar16) {
              lVar10 = ((long)puVar16 - (long)puVar18 >> 3) + 1;
              lVar5 = (long)puVar18 - (long)puVar9;
              lVar3 = (long)puVar18 - (long)puVar9;
              puVar18 = puVar18 + ((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
              puVar17 = (undefined8 *)((long)puVar18 - lVar5);
              if (lVar3 != 0) {
                _memmove(puVar17,puVar15,lVar3);
                puVar8 = puVar15;
              }
            }
            else {
              puVar17 = (undefined8 *)((long)puVar16 - (long)puVar9 >> 2);
              if ((long)puVar16 - (long)puVar9 == 0) {
                puVar17 = (undefined8 *)0x1;
              }
              puVar6 = puVar17;
              FUN_10a52b458();
              puVar17 = (undefined8 *)((long)puVar6 + ((long)puVar17 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar10 = (long)puVar18 - (long)puVar9;
              puVar18 = puVar17;
              if (lVar10 != 0) {
                puVar18 = (undefined8 *)((long)puVar17 + lVar10);
                puVar16 = puVar17;
                do {
                  *puVar16 = *puVar15;
                  lVar10 = lVar10 + -8;
                  puVar16 = puVar16 + 1;
                  puVar15 = puVar15 + 1;
                } while (lVar10 != 0);
              }
              puVar16 = puVar6 + (long)puVar8;
              if (puVar9 != (undefined8 *)0x0) {
                __ZdlPv(puVar9);
              }
            }
          }
          puVar11 = puVar11 + -1;
          puVar15 = puVar17 + -1;
          *puVar15 = *puVar11;
          puVar9 = puVar6;
        } while (puVar11 != *(undefined8 **)(param_4 + 0x48));
      }
      lVar10 = *(long *)(param_4 + 0x40);
      *(undefined8 **)(param_4 + 0x40) = puVar6;
      *(undefined8 **)(param_4 + 0x48) = puVar15;
      *(undefined8 **)(param_4 + 0x50) = puVar18;
      *(undefined8 **)(param_4 + 0x58) = puVar16;
      if (lVar10 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    *(ulong *)(param_4 + 0x60) = uVar14 - 0x155;
    puVar11 = puVar18 + 1;
LAB_10a52afa4:
    uVar7 = *puVar18;
    *(undefined8 **)(param_4 + 0x48) = puVar11;
    FUN_10a52b35c(param_4 + 0x40,uVar7);
  }
  puVar18 = *(undefined8 **)(param_4 + 0x48);
  uVar12 = *(long *)(param_4 + 0x68) + *(long *)(param_4 + 0x60);
LAB_10a52b214:
  puVar13 = (undefined4 *)(puVar18[uVar12 / 0x155] + (uVar12 % 0x155) * 0xc);
  *puVar13 = param_1;
  puVar13[1] = param_2;
  puVar13[2] = param_3;
  *(long *)(param_4 + 0x68) = *(long *)(param_4 + 0x68) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_4);
  return;
}



/* Entry: 10a52b304; end: 10a52b35b;  */

long FUN_10a52b304(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a52b35c; end: 10a52b457;  */

void FUN_10a52b35c(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a52b458();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a52b458; end: 10a52b48b;  */

void FUN_10a52b458(ulong param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined1 auStack_140 [24];
  undefined1 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 uStack_108;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = param_1 + 0x90;
  *(long *)(param_1 + 0x3e0) = lStack_90;
  *(ulong *)(param_1 + 1000) = param_1 + 0x328;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  ppuStack_c8 = &PTR_DAT_110ae9180;
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  func_0x0001098b7de0(param_1 + 0x3f0,&lStack_90);
  func_0x0001092ba41c(&lStack_90);
  pppuVar2 = &ppuStack_c8;
  (*(code *)*ppuStack_c8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&lStack_90);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  __Unwind_Resume(pppuVar2);
  uVar3 = 0x50;
  ___cxa_allocate_exception(0x50);
  func_0x000107c2b054(auStack_120,pppuVar2);
  uStack_108 = 1;
  auStack_140[0] = 0;
  uStack_128 = 0;
  FUN_10a234b84(uVar3,auStack_120,auStack_140);
  ___cxa_throw(uVar3,&PTR_DAT_110bb57a0,FUN_10a234b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52b5d0);
  (*pcVar1)();
}



/* Entry: 10a52b48c; end: 10a52b55f;  */

void FUN_10a52b48c(long param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined1 auStack_120 [24];
  undefined1 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 uStack_e8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_70 = param_1 + 0x90;
  *(long *)(param_1 + 0x3e0) = lStack_70;
  *(long *)(param_1 + 1000) = param_1 + 0x328;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  ppuStack_a8 = &PTR_DAT_110ae9180;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  func_0x0001098b7de0(param_1 + 0x3f0,&lStack_70);
  func_0x0001092ba41c(&lStack_70);
  pppuVar2 = &ppuStack_a8;
  (*(code *)*ppuStack_a8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&lStack_70);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  __Unwind_Resume(pppuVar2);
  uVar3 = 0x50;
  ___cxa_allocate_exception(0x50);
  func_0x000107c2b054(auStack_100,pppuVar2);
  uStack_e8 = 1;
  auStack_120[0] = 0;
  uStack_108 = 0;
  FUN_10a234b84(uVar3,auStack_100,auStack_120);
  ___cxa_throw(uVar3,&PTR_DAT_110bb57a0,FUN_10a234b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52b5d0);
  (*pcVar1)();
}



/* Entry: 10a52b560; end: 10a52b62f;  */

void FUN_10a52b560(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  uVar2 = 0x50;
  ___cxa_allocate_exception(0x50);
  func_0x000107c2b054(auStack_50,param_1);
  uStack_38 = 1;
  auStack_70[0] = 0;
  uStack_58 = 0;
  FUN_10a234b84(uVar2,auStack_50,auStack_70);
  ___cxa_throw(uVar2,&PTR_DAT_110bb57a0,FUN_10a234b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a52b5d0);
  (*pcVar1)();
}



/* Entry: 10a52b630; end: 10a52bc37;  */

void FUN_10a52b630(undefined8 *param_1,long param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *aplStack_1d0 [2];
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [3];
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [232];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x2a8;
  __Znwm();
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110bee800;
  plVar7[3] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[4] = 0;
  plVar7[5] = (long)(plVar7 + 6);
  aplStack_1d0[0] = (long *)CONCAT26(aplStack_1d0[0]._6_2_,0x10100000000);
  uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
  auStack_1b8[0] = 0xffffffffffffffff;
  auStack_1b8[1] = 0;
  lStack_1a0 = 0;
  auStack_1b8[2] = 0;
  aplStack_1d0[1] = (long *)0x3200000002;
  aplStack_1d0[0] = (long *)CONCAT44(aplStack_1d0[0]._4_4_,0x1010000);
  FUN_10a4cb950(plVar7 + 8,aplStack_1d0);
  if (lStack_1a0 < 0) {
    __ZdlPv(auStack_1b8[1]);
  }
  plVar7[0x14] = (long)&PTR_DAT_110aea318;
  plVar7[0x27] = 0;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  *(undefined4 *)(plVar7 + 0x15) = 0x42ff0000;
  *(undefined8 *)((long)plVar7 + 0xb4) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xc4) = 0;
  *(undefined8 *)((long)plVar7 + 0xbc) = 0;
  *(undefined8 *)((long)plVar7 + 0xd4) = 0;
  *(undefined8 *)((long)plVar7 + 0xcc) = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1d] = (long)(plVar7 + 0x16);
  plVar7[0x1e] = (long)(plVar7 + 0x1f);
  plVar7[0x20] = 0;
  plVar7[0x24] = 0;
  plVar7[0x23] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(undefined4 *)(plVar7 + 0x2a) = 0xffffffff;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2d] = (long)&UNK_1096ec598;
  plVar7[0x2e] = (long)(plVar7 + 0x2f);
  plVar7[0x2f] = 0;
  plVar7[0x30] = 0;
  plVar7[0x31] = param_2;
  *(byte *)(plVar7 + 0x32) = param_3 & 1;
  *(undefined1 *)(plVar7 + 0x33) = 0;
  *(undefined1 *)(plVar7 + 0x3b) = 0;
  if ((bRam00000001137eb2d8 & 1) == 0) {
    puVar9 = (undefined8 *)0x1137eb2d8;
    ___cxa_guard_acquire();
    if ((int)puVar9 != 0) {
      FUN_109d1a80c();
      uStack_1c0 = *puVar9;
      aplStack_1d0[0] = (long *)CONCAT44(aplStack_1d0[0]._4_4_,4);
      aplStack_1d0[1] = (long *)0x0;
      FUN_109d1a80c();
      auStack_1b8[2] = *puVar9;
      auStack_1b8[0] = CONCAT44(auStack_1b8[0]._4_4_,4);
      auStack_1b8[1] = 100;
      FUN_109d1a80c();
      uStack_190 = *puVar9;
      lStack_1a0 = CONCAT44(lStack_1a0._4_4_,4);
      uStack_198 = 200;
      FUN_10a102184();
      uStack_178 = *puVar9;
      uStack_188 = CONCAT44(uStack_188._4_4_,4);
      uStack_180 = 500;
      FUN_10a102184();
      uStack_160 = *puVar9;
      uStack_170 = 4;
      uStack_168 = 1000;
      lRam00000001137eb328 = 0;
      uRam00000001137eb330 = 0;
      lRam00000001137eb320 = 0;
      FUN_10a4f95b0(aplStack_1d0,auStack_158);
      ___cxa_guard_release(0x1137eb2d8);
    }
  }
  lVar10 = lRam00000001137eb328 - lRam00000001137eb320;
  if (lVar10 == 0) {
    lVar11 = 0;
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < (ulong)((lVar10 >> 3) * -0x5555555555555555)) goto LAB_10a52baf8;
    lVar11 = lVar10;
    __Znwm();
    lVar8 = lVar11 + lVar10;
    _memcpy();
    lVar10 = lVar11 + ((lVar10 - 0x18U) / 0x18) * 0x18 + 0x18;
  }
  plVar7[0x3c] = 0;
  plVar7[0x3d] = lVar11;
  plVar7[0x3e] = lVar10;
  plVar7[0x3f] = lVar8;
  plVar7[0x40] = 0;
  *(undefined1 *)(plVar7 + 0x41) = 1;
  aplStack_1d0[1] = (long *)0x3fe0000000000000;
  aplStack_1d0[0] = (long *)0xbfe0000000000000;
  auStack_1b8[0] = 0x3fe0000000000000;
  uStack_1c0 = 0;
  auVar16 = NEON_fmov(0xbfe0000000000000,8);
  auStack_1b8[2] = 0;
  auStack_1b8[1] = 0x3fe0000000000000;
  uStack_198 = auVar16._8_8_;
  lStack_1a0 = auVar16._0_8_;
  uStack_188 = 0x3fe0000000000000;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0xbfe0000000000000;
  plVar7[0x42] = 0;
  plVar7[0x44] = 0;
  plVar7[0x43] = 0;
  lVar8 = 0x60;
  __Znwm();
  lVar10 = 0;
  plVar7[0x42] = lVar8;
  plVar7[0x43] = lVar8;
  plVar7[0x44] = lVar8 + 0x60;
  do {
    puVar9 = (undefined8 *)(lVar8 + lVar10);
    uVar14 = *(undefined8 *)((long)aplStack_1d0 + lVar10 + 8);
    uVar13 = *(undefined8 *)((long)aplStack_1d0 + lVar10);
    uVar15 = *(undefined8 *)((long)&uStack_1c0 + lVar10);
    uVar4 = *(undefined8 *)((long)auStack_1b8 + lVar10 + 8);
    uVar5 = *(undefined8 *)((long)auStack_1b8 + lVar10 + 0x10);
    puVar9[3] = *(undefined8 *)((long)auStack_1b8 + lVar10);
    puVar9[2] = uVar15;
    puVar9[5] = uVar5;
    puVar9[4] = uVar4;
    puVar9[1] = uVar14;
    *puVar9 = uVar13;
    lVar10 = lVar10 + 0x30;
  } while (lVar10 != 0x60);
  plVar7[0x43] = lVar8 + 0x60;
  func_0x000109a8261c(aplStack_1d0,4,1,6);
  *(undefined4 *)(plVar7 + 0x45) = 0x42ff0000;
  plVar7[0x4c] = 0;
  plVar7[0x4b] = 0;
  *(undefined8 *)((long)plVar7 + 0x244) = 0;
  *(undefined8 *)((long)plVar7 + 0x23c) = 0;
  *(undefined8 *)((long)plVar7 + 0x254) = 0;
  *(undefined8 *)((long)plVar7 + 0x24c) = 0;
  *(undefined8 *)((long)plVar7 + 0x234) = 0;
  *(undefined8 *)((long)plVar7 + 0x22c) = 0;
  plVar7[0x4d] = (long)(plVar7 + 0x46);
  plVar7[0x4e] = (long)(plVar7 + 0x4f);
  plVar7[0x50] = 0;
  plVar7[0x4f] = 0;
  (**(code **)(*aplStack_1d0[0] + 0x18))(aplStack_1d0[0],aplStack_1d0,plVar7 + 0x45,0xffffffff);
  func_0x00010918eb6c(aplStack_1d0);
  *(undefined1 *)(plVar7 + 0x51) = 0;
  *(undefined1 *)(plVar7 + 0x54) = 0;
  *param_1 = plVar7 + 3;
  param_1[1] = plVar7;
  if (plVar7[4] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[3] = (long)(plVar7 + 3);
    plVar7[4] = (long)plVar7;
LAB_10a52b9bc:
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 != 0) goto LAB_10a52b9d0;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  else {
    if (*(long *)(plVar7[4] + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7[3] = (long)(plVar7 + 3);
      plVar7[4] = (long)plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10a52b9bc;
    }
LAB_10a52b9d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a52baf8:
  FUN_10a4f9664();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a52bb00);
  (*pcVar6)();
}



/* Entry: 10a52bc38; end: 10a52bc47;  */

void FUN_10a52bc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a52bc48; end: 10a52bc67;  */

void FUN_10a52bc48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a52bc68; end: 10a52bddf;  */

void FUN_10a52bc68(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0x2a0) == '\x01') {
    func_0x00010a1bb0e8(param_1 + 0x288);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x260) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x228);
    }
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (0 < *(int *)(param_1 + 0x22c)) {
    lVar7 = 0;
    lVar8 = *(long *)(param_1 + 0x268);
    do {
      *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x22c));
  }
  lVar7 = *(long *)(param_1 + 0x270);
  if (lVar7 != param_1 + 0x278 && lVar7 != 0) {
    _free(*(undefined8 *)(lVar7 + -8));
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x210);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1e8);
    __ZdlPv();
  }
  FUN_10a4f9678(param_1 + 0x198);
  func_0x00010a22dfb0(param_1 + 0x170,*(undefined8 *)(param_1 + 0x178));
  lVar7 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar7 != 0) {
    (**(code **)(param_1 + 0x168))();
  }
  plVar6 = *(long **)(param_1 + 0x158);
  if (plVar6 != (long *)0x0) {
    puVar2 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar9 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x00010a1bb0e8(param_1 + 0x140);
  func_0x0001092cf444(param_1 + 0xa0);
  FUN_10a4cbbb0(param_1 + 0x40);
  FUN_10a52bde4(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a52bde0; end: 10a52bde3;  */

void FUN_10a52bde0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a52bde4; end: 10a52be67;  */

void FUN_10a52bde4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a52bde4(*param_1);
    FUN_10a52bde4(param_1[1]);
    func_0x00010a52be24(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a52be68; end: 10a52bfd7;  */

void FUN_10a52be68(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    uVar2 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = uVar2;
    uVar5 = param_2[3];
    uVar2 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    param_1[2] = uVar2;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    uVar8 = param_2[0x17];
    uVar7 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar2 = param_2[0x18];
    uVar6 = *(undefined8 *)((long)param_2 + 0xcc);
    uVar10 = param_2[0x15];
    uVar9 = param_2[0x14];
    *(undefined8 *)((long)param_1 + 0xd4) = *(undefined8 *)((long)param_2 + 0xd4);
    *(undefined8 *)((long)param_1 + 0xcc) = uVar6;
    param_1[0x17] = uVar8;
    param_1[0x16] = uVar7;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar2;
    param_1[0x15] = uVar10;
    param_1[0x14] = uVar9;
    uVar6 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar2 = param_2[0x12];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar2;
    param_1[0xf] = uVar8;
    param_1[0xe] = uVar7;
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_1[0x1e] = param_2[0x1e];
    uVar2 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar2;
    param_1[0x21] = param_2[0x21];
    uVar2 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar2;
    uVar2 = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar2;
    uVar2 = param_2[0x26];
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    piVar3 = (int *)((long)param_2 + 0xfc);
    iVar1 = *piVar3;
    param_1[0x26] = uVar2;
    param_1[0x27] = param_1 + 0x20;
    param_1[0x28] = param_1 + 0x29;
    puVar4 = (undefined8 *)param_2[0x28];
    if (iVar1 < 3) {
      param_1[0x29] = *puVar4;
      param_1[0x2a] = puVar4[1];
    }
    else {
      param_1[0x27] = param_2[0x27];
      param_1[0x28] = puVar4;
      param_2[0x27] = param_2 + 0x20;
      param_2[0x28] = param_2 + 0x29;
    }
    *(undefined4 *)(param_2 + 0x1f) = 0x42ff0000;
    param_2[0x26] = 0;
    param_2[0x25] = 0;
    *(undefined8 *)((long)param_2 + 0x114) = 0;
    *(undefined8 *)((long)param_2 + 0x10c) = 0;
    *(undefined8 *)((long)param_2 + 0x124) = 0;
    *(undefined8 *)((long)param_2 + 0x11c) = 0;
    *(undefined8 *)((long)param_2 + 0x104) = 0;
    piVar3[0] = 0;
    piVar3[1] = 0;
    uVar2 = param_2[0x2c];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = uVar2;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  return;
}



/* Entry: 10a52bfd8; end: 10a52c08b;  */

void FUN_10a52bfd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a52be24(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a52c08c; end: 10a52e1cf;  */

void FUN_10a52c08c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  int iVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  double *pdVar24;
  double *pdVar25;
  long lVar26;
  uint uVar27;
  undefined1 (**ppauVar28) [16];
  undefined8 uVar29;
  double dVar30;
  undefined1 (*pauVar31) [16];
  int iVar32;
  ulong uVar33;
  undefined1 (*pauVar34) [16];
  ulong uVar35;
  undefined1 (*pauVar36) [16];
  int iVar37;
  long *plVar38;
  ulong uVar39;
  int *piVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  undefined1 (*pauVar45) [16];
  long lVar46;
  long *unaff_x28;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  double *pdStack_710;
  int iStack_708;
  double *pdStack_700;
  undefined8 uStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined1 (*pauStack_6d0) [16];
  undefined1 (*pauStack_6c8) [16];
  undefined1 (*pauStack_6c0) [16];
  uint uStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined8 uStack_63c;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  int iStack_618;
  int iStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  long **pplStack_5d8;
  long *plStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  char cStack_5a8;
  long lStack_5a0;
  double *pdStack_598;
  int iStack_590;
  double *pdStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined1 (*pauStack_558) [16];
  undefined1 (*pauStack_550) [16];
  undefined1 (*pauStack_548) [16];
  uint uStack_540;
  byte bStack_538;
  long lStack_530;
  long *plStack_528;
  int iStack_520;
  int iStack_51c;
  int iStack_518;
  int iStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  long lStack_4e8;
  int *piStack_4e0;
  long *plStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  double *pdStack_4a0;
  double *pdStack_498;
  double *pdStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined2 uStack_460;
  undefined2 uStack_45e;
  int iStack_45c;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 *puStack_420;
  undefined8 **ppuStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  int iStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long lStack_3b8;
  int *piStack_3b0;
  long *plStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 **ppuStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  int iStack_330;
  int iStack_32c;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  long **pplStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 **ppuStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined4 auStack_260 [2];
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined4 auStack_248 [2];
  int *piStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  int *piStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined1 auStack_f4 [8];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
  uStack_328 = (long *)CONCAT44(uStack_328._4_4_,(int)uStack_328);
  uStack_2b8 = (double **)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
  uStack_120 = (undefined4 *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
  puVar22 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) goto LAB_10a52dddc;
  lVar46 = param_1[0x17];
  param_1[0x17] = 0;
  plVar21 = (long *)param_1[1];
  lStack_5a0 = lVar46;
  if (plVar21 == (long *)0x0) {
LAB_10a52c124:
    pdStack_710 = (double *)((ulong)pdStack_710 & 0xffffffffffffff00);
    cStack_5a8 = '\0';
LAB_10a52dc08:
    plVar21 = (long *)(lVar46 + 0x10);
    do {
      lVar43 = *plVar21;
      if (lVar43 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if (*(char *)(lVar46 + 0x208) == '\x01') {
            if (*(char *)(lVar46 + 0x200) == '\x01') {
              FUN_10a4f96d8(lVar46 + 0x98);
            }
            *(undefined1 *)(lVar46 + 0x208) = 0;
          }
          FUN_10a52be68(lVar46 + 0x98,&pdStack_710);
          *(undefined1 *)(lVar46 + 0x208) = 1;
          *(undefined8 *)(lVar46 + 0x10) = 2;
          FUN_109d1b4dc(lVar46 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar43 >> 1 & 1) == 0);
    if (cStack_5a8 == '\x01') {
      FUN_10a4f96d8(&pdStack_710);
    }
    if ((char)param_1[0x16] == '\x01') {
      func_0x00010a042d30(param_1 + 0x12);
      func_0x00010a136de4(param_1 + 2);
      if (param_1[1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    lVar46 = lStack_5a0;
    lStack_5a0 = 0;
    if (lVar46 != 0) {
      func_0x0001092b4274(&lStack_5a0);
      if (lStack_5a0 != 0) {
        func_0x0001092b4274(&lStack_5a0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_528 = plVar21;
    if (plVar21 == (long *)0x0) goto LAB_10a52c124;
    lVar43 = *param_1;
    lStack_530 = lVar43;
    if (lVar43 == 0) {
      pdStack_710 = (double *)((ulong)pdStack_710 & 0xffffffffffffff00);
      cStack_5a8 = '\0';
LAB_10a52dbd8:
      plVar38 = plVar21 + 1;
      do {
        lVar43 = *plVar38;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar7) {
          *plVar38 = lVar43 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar43 == 0) {
        (**(code **)(*plVar21 + 0x10))();
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
      goto LAB_10a52dc08;
    }
    bVar5 = *(byte *)(lVar43 + 0x178);
    unaff_x28 = param_1 + 2;
    lVar26 = *unaff_x28;
    if (*(int *)(lVar26 + 0x24) == *(int *)(lVar43 + 0x138)) {
      puVar22 = *(undefined8 **)(lVar43 + 0x128);
LAB_10a52c1a0:
      iStack_520 = 0;
      uStack_1f0._0_4_ = (int)*(undefined8 *)(lVar26 + 0x10);
      uStack_1f0._4_4_ = (int)((ulong)*(undefined8 *)(lVar26 + 0x10) >> 0x20);
      (**(code **)*puVar22)(&pdStack_4a0,puVar22,lVar26,&iStack_520,&uStack_1f0);
      pdVar25 = (double *)0x0;
      if (pdStack_4a0 != (double *)0x0) {
        pdVar25 = pdStack_4a0 + 2;
      }
      FUN_10a0f3910(&iStack_520,pdVar25,0);
      iStack_32c = 0;
      if (iStack_514 != 0) {
        iStack_32c = (iStack_518 * 0x230) / iStack_514;
      }
      uStack_1f0._0_4_ = 0x42ff0000;
      uStack_460 = 0;
      uStack_45e = 0x101;
      piVar40 = (int *)((ulong)&uStack_1f0 | 8);
      uStack_1e8._4_4_ = 0;
      uStack_1e0 = 0;
      uStack_1f0._4_4_ = 0;
      uStack_1e8._0_4_ = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1c4 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_2c0 = 0x2010000;
      uStack_198 = 0;
      lStack_1a0 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      iVar20 = 0;
      if (iStack_518 != 0) {
        iVar20 = (iStack_514 * 0x230) / iStack_518;
      }
      iStack_330 = 0x230;
      if (iStack_514 < iStack_518) {
        iStack_330 = iVar20;
      }
      uStack_2b0 = 0;
      uStack_2ac = 0;
      if (iStack_514 < iStack_518) {
        iStack_32c = 0x230;
      }
      piStack_1b0 = piVar40;
      plStack_1a8 = &lStack_1a0;
      uStack_458 = &iStack_520;
      uStack_2b8 = (double **)&uStack_1f0;
      func_0x000109b0f718(0x4008000000000000,0,&uStack_460,&uStack_2c0,&iStack_330,1);
      if (lStack_4e8 != 0) {
        piVar2 = (int *)(lStack_4e8 + 0x14);
        do {
          iVar20 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&iStack_520);
        }
      }
      lStack_4e8 = 0;
      uStack_508 = 0;
      uStack_504 = 0;
      uStack_510 = 0;
      uStack_50c = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_500 = 0;
      uStack_4fc = 0;
      if (0 < iStack_51c) {
        lVar26 = 0;
        do {
          piStack_4e0[lVar26] = 0;
          lVar26 = lVar26 + 1;
        } while (lVar26 < iStack_51c);
      }
      if (plStack_4d8 != &lStack_4d0 && plStack_4d8 != (long *)0x0) {
        _free(plStack_4d8[-1]);
      }
      uStack_460 = 0;
      uStack_45e = 0x42ff;
      uStack_458._4_4_ = 0;
      uStack_450 = 0;
      iStack_45c = 0;
      uStack_458._0_4_ = 0;
      puStack_420 = (undefined8 *)((ulong)&uStack_460 | 8);
      uStack_444 = 0;
      uStack_440 = 0;
      uStack_44c = 0;
      uStack_448 = 0;
      uStack_434 = 0;
      uStack_43c = 0;
      uStack_438 = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      uStack_408 = 0;
      puStack_410 = (undefined8 *)0x0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      uStack_2c0 = 0x1010000;
      uStack_2b8 = (double **)&uStack_1f0;
      iStack_330 = 0x2010000;
      uStack_320 = 0;
      uStack_31c = 0;
      ppuStack_418 = &puStack_410;
      uStack_328 = (long *)&uStack_460;
      func_0x000109ac9fc8(&uStack_2c0,&iStack_330,7,0);
      if (bVar5 != 0) {
        uStack_2b0 = 0;
        uStack_2ac = 0;
        uStack_2c0 = 0x1010000;
        uStack_2b8 = (double **)&uStack_460;
        iStack_330 = 0x2010000;
        uStack_320 = 0;
        uStack_31c = 0;
        uStack_328 = (long *)uStack_2b8;
        func_0x000109a491e0(&uStack_2c0,&iStack_330,1);
        uStack_2b0 = 0;
        uStack_2ac = 0;
        uStack_2c0 = 0x1010000;
        uStack_2b8 = (double **)&uStack_1f0;
        iStack_330 = 0x2010000;
        uStack_320 = 0;
        uStack_31c = 0;
        uStack_328 = (long *)uStack_2b8;
        func_0x000109a491e0(&uStack_2c0,&iStack_330,1);
      }
      puVar22 = (undefined8 *)((ulong)&uStack_1f0 | 4);
      piStack_3b0 = (int *)((ulong)&iStack_3f0 | 8);
      iStack_3e8 = (int)uStack_1e8;
      iStack_3e4 = uStack_1e8._4_4_;
      iStack_3f0 = (int)uStack_1f0;
      iStack_3ec = uStack_1f0._4_4_;
      uStack_3d8 = uStack_1d8;
      uStack_3d4 = uStack_1d4;
      uStack_3e0 = uStack_1e0;
      uStack_3dc = uStack_1dc;
      uStack_3c8 = uStack_1c8;
      uStack_3c4 = uStack_1c4;
      uStack_3d0 = uStack_1d0;
      uStack_3cc = uStack_1cc;
      lStack_3b8 = lStack_1b8;
      uStack_3c0 = uStack_1c0;
      uStack_3bc = uStack_1bc;
      plStack_3a8 = &lStack_3a0;
      lStack_398 = 0;
      lStack_3a0 = 0;
      if (uStack_1f0._4_4_ < 3) {
        lStack_3a0 = *plStack_1a8;
        lStack_398 = plStack_1a8[1];
      }
      else {
        plStack_3a8 = plStack_1a8;
        piStack_3b0 = piStack_1b0;
        piStack_1b0 = piVar40;
        plStack_1a8 = &lStack_1a0;
      }
      uStack_1f0._0_4_ = 0x42ff0000;
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      *(undefined8 *)((long)puVar22 + 0x34) = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      puStack_350 = &uStack_388;
      uStack_388 = CONCAT44(uStack_458._4_4_,(undefined4)uStack_458);
      uStack_390 = CONCAT44(iStack_45c,CONCAT22(uStack_45e,uStack_460));
      uStack_378 = CONCAT44(uStack_444,uStack_448);
      uStack_380 = CONCAT44(uStack_44c,uStack_450);
      uStack_368 = CONCAT44(uStack_434,uStack_438);
      uStack_370 = CONCAT44(uStack_43c,uStack_440);
      lStack_358 = CONCAT44(uStack_424,uStack_428);
      uStack_360 = CONCAT44(uStack_42c,uStack_430);
      ppuStack_348 = &puStack_340;
      puStack_338 = (undefined8 *)0x0;
      puStack_340 = (undefined8 *)0x0;
      if (iStack_45c < 3) {
        puVar22 = (undefined8 *)((ulong)&uStack_460 | 4);
        puStack_340 = *ppuStack_418;
        puStack_338 = ppuStack_418[1];
        uStack_460 = 0;
        uStack_45e = 0x42ff;
        puVar22[1] = 0;
        *puVar22 = 0;
        puVar22[3] = 0;
        puVar22[2] = 0;
        puVar22[5] = 0;
        puVar22[4] = 0;
        *(undefined8 *)((long)puVar22 + 0x34) = 0;
        *(undefined8 *)((long)puVar22 + 0x2c) = 0;
        if (ppuStack_418 != &puStack_410) {
          _free(ppuStack_418[-1]);
          if (lStack_1b8 != 0) {
            piVar40 = (int *)(lStack_1b8 + 0x14);
            do {
              iVar20 = *piVar40;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
              if (bVar7) {
                *piVar40 = iVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 + -1 == 0) {
              func_0x000109a848d4(&uStack_1f0);
            }
          }
        }
      }
      else {
        ppuStack_348 = ppuStack_418;
        puStack_350 = puStack_420;
      }
      lStack_1b8 = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < uStack_1f0._4_4_) {
        lVar26 = 0;
        do {
          piStack_1b0[lVar26] = 0;
          lVar26 = lVar26 + 1;
        } while (lVar26 < uStack_1f0._4_4_);
      }
      if (plStack_1a8 != &lStack_1a0 && plStack_1a8 != (long *)0x0) {
        _free(plStack_1a8[-1]);
      }
      pdVar25 = pdStack_498;
      if (pdStack_498 != (double *)0x0) {
        pdVar24 = pdStack_498 + 1;
        do {
          dVar30 = *pdVar24;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pdVar24,0x10);
          if (bVar7) {
            *pdVar24 = (double)((long)dVar30 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (dVar30 == 0.0) {
          (**(code **)((long)*pdStack_498 + 0x10))(pdStack_498);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pdVar25);
        }
      }
      puVar22 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
      puVar12 = (undefined4 *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
      uStack_460 = 0;
      uStack_458._0_4_ = 0x42ff0000;
      ppuStack_418 = (undefined8 **)&uStack_450;
      uStack_44c = 0;
      uStack_448 = 0;
      uStack_458._4_4_ = 0;
      uStack_450 = 0;
      uStack_43c = 0;
      uStack_438 = 0;
      uStack_444 = 0;
      uStack_440 = 0;
      uStack_42c = 0;
      uStack_434 = 0;
      uStack_430 = 0;
      puStack_420 = (undefined8 *)0x0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      pdStack_598 = (double *)((ulong)pdStack_598 & 0xffffffffffffff00);
      bStack_538 = 0;
      uVar42 = 1;
      puStack_410 = &uStack_408;
      do {
        pdStack_498 = (double *)((ulong)pdStack_498 & 0xffffffff00000000);
        pdStack_4a0 = (double *)(((ulong)pdStack_4a0 >> 8 & 0xffffff) << 8);
        uStack_488 = 0;
        pdStack_490 = (double *)0x0;
        lStack_478 = 0;
        lStack_480 = 0;
        uStack_468 = 0;
        lStack_470 = 0;
        pauStack_208 = (undefined1 (*) [16])0x0;
        pauStack_210 = (undefined1 (*) [16])0x0;
        pauStack_200 = (undefined1 (*) [16])0x0;
        uStack_120 = puVar12;
        uStack_118 = puVar22;
        if ((bRam00000001137eb2d0 & 1) == 0) {
          iVar20 = 0x137eb2d0;
          ___cxa_guard_acquire();
          if (iVar20 != 0) {
            puVar22 = (undefined8 *)0x8;
            __Znwm();
            *puVar22 = &PTR_DAT_110ae9d88;
            uStack_1f0._0_4_ = 2;
            uStack_1e8._0_4_ = (int)puVar22;
            uStack_1e8._4_4_ = (int)((ulong)puVar22 >> 0x20);
            uVar29 = 0x10;
            __Znwm();
            func_0x0001092d96a8();
            uStack_1e0 = 1;
            uStack_1d8 = (undefined4)uVar29;
            uStack_1d4 = (undefined4)((ulong)uVar29 >> 0x20);
            uVar29 = 0x10;
            __Znwm();
            func_0x0001092dac9c();
            uStack_1d0 = 4;
            uStack_1c8 = (undefined4)uVar29;
            uStack_1c4 = (undefined4)((ulong)uVar29 >> 0x20);
            FUN_10a4f8ff4(&uStack_1f0,3);
            ___cxa_guard_release(0x1137eb2d0);
          }
        }
        if (uRam00000001137eb340 == 0) {
LAB_10a52dd2c:
          FUN_10a00946c(&UNK_10f65d603);
          piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
          puVar22 = uStack_118;
          goto LAB_10a52dddc;
        }
        uVar33 = uRam00000001137eb340 - 1;
        uVar27 = (uint)uRam00000001137eb340;
        uVar41 = (uint)uVar42;
        if ((uRam00000001137eb340 & uVar33) == 0) {
          uVar35 = uVar27 + 0x7fffffff & uVar42;
        }
        else {
          uVar35 = uVar42;
          if (uRam00000001137eb340 <= uVar42) {
            uVar9 = 0;
            if (uVar27 != 0) {
              uVar9 = uVar41 / uVar27;
            }
            uVar35 = (ulong)(uVar41 - uVar9 * uVar27);
          }
        }
        plVar38 = *(long **)(lRam00000001137eb338 + uVar35 * 8);
        if (plVar38 == (long *)0x0) goto LAB_10a52dd2c;
        do {
          while( true ) {
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) goto LAB_10a52dd2c;
            uVar39 = plVar38[1];
            if (uVar39 == uVar42) break;
            if ((uRam00000001137eb340 & uVar33) == 0) {
              uVar39 = uVar39 & uVar33;
            }
            else if (uRam00000001137eb340 <= uVar39) {
              uVar10 = 0;
              if (uRam00000001137eb340 != 0) {
                uVar10 = uVar39 / uRam00000001137eb340;
              }
              uVar39 = uVar39 - uVar10 * uRam00000001137eb340;
            }
            if (uVar39 != uVar35) goto LAB_10a52dd2c;
          }
        } while (*(uint *)(plVar38 + 2) != uVar41);
        plVar38 = (long *)plVar38[3];
        if (uVar41 - 1 < 2) {
          uStack_2b8._0_4_ = (undefined4)uStack_388;
          uStack_2b8._4_4_ = (undefined4)((ulong)uStack_388 >> 0x20);
          uStack_2c0 = (undefined4)uStack_390;
          uStack_2a8 = (undefined4)uStack_378;
          uStack_2a4 = (undefined4)((ulong)uStack_378 >> 0x20);
          uStack_2b0 = (undefined4)uStack_380;
          uStack_2ac = (undefined4)((ulong)uStack_380 >> 0x20);
          uStack_298 = (undefined4)uStack_368;
          uStack_294 = (undefined4)((ulong)uStack_368 >> 0x20);
          uStack_2a0 = (undefined4)uStack_370;
          uStack_29c = (undefined4)((ulong)uStack_370 >> 0x20);
          lStack_288 = lStack_358;
          uStack_290 = (undefined4)uStack_360;
          uStack_28c = (undefined4)((ulong)uStack_360 >> 0x20);
          puStack_270 = (undefined8 *)0x0;
          puStack_268 = (undefined8 *)0x0;
          if (lStack_358 != 0) {
            piVar40 = (int *)(lStack_358 + 0x14);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
              if (bVar7) {
                *piVar40 = *piVar40 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puStack_280 = (undefined8 *)((ulong)&uStack_2c0 | 8);
          ppuStack_278 = &puStack_270;
          if (uStack_390._4_4_ < 3) {
            puStack_270 = *ppuStack_348;
            puStack_268 = ppuStack_348[1];
            iStack_2bc = uStack_390._4_4_;
          }
          else {
            iStack_2bc = 0;
            func_0x000109a84868(&uStack_2c0,&uStack_390);
          }
          uStack_328._0_4_ = iStack_3e8;
          uStack_328._4_4_ = iStack_3e4;
          iStack_330 = iStack_3f0;
          iStack_32c = iStack_3ec;
          uStack_318 = uStack_3d8;
          uStack_314 = uStack_3d4;
          uStack_320 = uStack_3e0;
          uStack_31c = uStack_3dc;
          uStack_308 = uStack_3c8;
          uStack_304 = uStack_3c4;
          uStack_310 = uStack_3d0;
          uStack_30c = uStack_3cc;
          lStack_2f8 = lStack_3b8;
          uStack_300 = uStack_3c0;
          uStack_2fc = uStack_3bc;
          lStack_2e0 = 0;
          lStack_2d8 = 0;
          if (lStack_3b8 != 0) {
            piVar40 = (int *)(lStack_3b8 + 0x14);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
              if (bVar7) {
                *piVar40 = *piVar40 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          pplStack_2f0 = (long **)((ulong)&iStack_330 | 8);
          plStack_2e8 = &lStack_2e0;
          if (iStack_3ec < 3) {
            lStack_2e0 = *plStack_3a8;
            lStack_2d8 = plStack_3a8[1];
          }
          else {
            iStack_32c = 0;
            func_0x000109a84868(&iStack_330,&iStack_3f0);
          }
          func_0x0001092e3f30(lVar43 + 0x88,&uStack_2c0,&pdStack_4a0,&uStack_460,plVar38,&iStack_330
                              ,0);
          if (lStack_2f8 != 0) {
            piVar40 = (int *)(lStack_2f8 + 0x14);
            do {
              iVar20 = *piVar40;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
              if (bVar7) {
                *piVar40 = iVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 + -1 == 0) {
              func_0x000109a848d4(&iStack_330);
            }
          }
          lStack_2f8 = 0;
          uStack_318 = 0;
          uStack_314 = 0;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          if (0 < iStack_32c) {
            lVar26 = 0;
            do {
              *(undefined4 *)((long)pplStack_2f0 + lVar26 * 4) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar26 < iStack_32c);
          }
          if (plStack_2e8 != &lStack_2e0 && plStack_2e8 != (long *)0x0) {
            _free(plStack_2e8[-1]);
          }
          if (lStack_288 != 0) {
            piVar40 = (int *)(lStack_288 + 0x14);
            do {
              iVar20 = *piVar40;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
              if (bVar7) {
                *piVar40 = iVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 + -1 == 0) {
              func_0x000109a848d4(&uStack_2c0);
            }
          }
          lStack_288 = 0;
          uStack_2a8 = 0;
          uStack_2a4 = 0;
          uStack_2b0 = 0;
          uStack_2ac = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          if (0 < iStack_2bc) {
            lVar26 = 0;
            do {
              *(undefined4 *)((long)puStack_280 + lVar26 * 4) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar26 < iStack_2bc);
          }
          if (ppuStack_278 != &puStack_270 && ppuStack_278 != (undefined8 **)0x0) {
            _free(ppuStack_278[-1]);
          }
          uStack_1e8._0_4_ = 0;
          uStack_1e8._4_4_ = 0;
          uStack_1f0._0_4_ = 0;
          uStack_1f0._4_4_ = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          FUN_10a4f9464(&uStack_1f0,*(long *)(lVar43 + 0x108),*(long *)(lVar43 + 0x110),
                        *(long *)(lVar43 + 0x110) - *(long *)(lVar43 + 0x108) >> 3);
          if (pauStack_210 != (undefined1 (*) [16])0x0) {
            pauStack_208 = pauStack_210;
            __ZdlPv();
          }
          pauStack_210 = (undefined1 (*) [16])CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0);
          pauStack_208 = (undefined1 (*) [16])CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
          pauStack_200 = (undefined1 (*) [16])CONCAT44(uStack_1dc,uStack_1e0);
        }
        else {
          if (uVar41 != 4) {
            FUN_109febc44(&uStack_1f0);
            FUN_10a002568(&uStack_1e0,&UNK_10f65d383,0x2d);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(&uStack_1e0,uVar42);
            FUN_10a05168c(&iStack_520,&uStack_1e0);
            piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
            puVar22 = uStack_118;
            goto LAB_10a52dddc;
          }
          (**(code **)(*plVar38 + 0xd0))(&iStack_520,plVar38);
          plStack_1a8 = plStack_4d8;
          piStack_1b0 = piStack_4e0;
          uStack_198 = uStack_4c8;
          lStack_1a0 = lStack_4d0;
          uStack_188 = uStack_4b8;
          uStack_190 = uStack_4c0;
          lStack_180 = lStack_4b0;
          uStack_1e8._0_4_ = iStack_518;
          uStack_1e8._4_4_ = iStack_514;
          uStack_1f0._0_4_ = iStack_520;
          uStack_1f0._4_4_ = iStack_51c;
          uStack_1d8 = uStack_508;
          uStack_1d4 = uStack_504;
          uStack_1e0 = uStack_510;
          uStack_1dc = uStack_50c;
          uStack_1c8 = uStack_4f8;
          uStack_1c4 = uStack_4f4;
          uStack_1d0 = uStack_500;
          uStack_1cc = uStack_4fc;
          lStack_1b8 = lStack_4e8;
          uStack_1c0 = uStack_4f0;
          uStack_1bc = uStack_4ec;
          lStack_170 = 0;
          lStack_168 = 0;
          lStack_178 = 0;
          uStack_160 = 0x42ff0000;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_12c = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0x42ff0000;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_cc = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          auStack_f4 = (undefined1  [8])0x0;
          uStack_fc = 0;
          iStack_f8 = 0;
          plStack_b0 = (long *)0x0;
          lStack_a8 = 0;
          piStack_c0 = &iStack_f8;
          pplStack_b8 = &plStack_b0;
          uStack_120 = &uStack_158;
          uStack_118 = &uStack_110;
          func_0x0001092ca8ac(&uStack_1f0,&iStack_3f0,&pdStack_4a0,plVar38,0,0);
          iStack_518 = 0;
          iStack_514 = 0;
          iStack_520 = 0;
          iStack_51c = 0;
          uStack_510 = 0;
          uStack_50c = 0;
          FUN_10a000fa0(&iStack_520,lStack_178,lStack_170,lStack_170 - lStack_178 >> 3);
          puVar22 = (undefined8 *)CONCAT44(iStack_51c,iStack_520);
          puVar11 = (undefined8 *)CONCAT44(iStack_514,iStack_518);
          if (puVar22 != puVar11) {
            do {
              if (pauStack_208 < pauStack_200) {
                uVar29 = NEON_scvtf(*puVar22,4);
                pauVar45 = (undefined1 (*) [16])(*pauStack_208 + 8);
                *(undefined8 *)*pauStack_208 = uVar29;
              }
              else {
                lVar44 = (long)pauStack_208 - (long)pauStack_210;
                lVar26 = lVar44 >> 3;
                uVar42 = lVar26 + 1;
                if (uVar42 >> 0x3d != 0) {
                  FUN_10a4f950c();
                  piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
                  puVar22 = uStack_118;
                  goto LAB_10a52dddc;
                }
                uVar33 = (long)pauStack_200 - (long)pauStack_210 >> 2;
                if (uVar33 <= uVar42) {
                  uVar33 = uVar42;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)pauStack_200 - (long)pauStack_210)) {
                  uVar33 = 0x1fffffffffffffff;
                }
                if (uVar33 == 0) {
                  ppauVar28 = (undefined1 (**) [16])0x0;
                  pauVar23 = pauStack_210;
                  pauVar31 = pauStack_208;
                }
                else {
                  ppauVar28 = &pauStack_210;
                  func_0x00010a4f9520();
                  lVar26 = (long)pauStack_208 - (long)pauStack_210 >> 3;
                  pauVar23 = pauStack_210;
                  pauVar31 = pauStack_208;
                }
                puVar3 = (undefined8 *)((long)ppauVar28 + lVar44);
                uVar29 = NEON_scvtf(*puVar22,4);
                pauVar34 = (undefined1 (*) [16])(puVar3 + -lVar26);
                pauVar45 = (undefined1 (*) [16])(puVar3 + 1);
                *puVar3 = uVar29;
                pauVar14 = pauVar34;
                for (pauVar36 = pauVar23; pauVar36 != pauVar31;
                    pauVar36 = (undefined1 (*) [16])(*pauVar36 + 8)) {
                  *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar36;
                  pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8);
                }
                pauStack_200 = (undefined1 (*) [16])(ppauVar28 + uVar33);
                pauStack_210 = pauVar34;
                if (pauVar23 != (undefined1 (*) [16])0x0) {
                  pauStack_208 = pauVar45;
                  __ZdlPv();
                }
              }
              puVar22 = puVar22 + 1;
              pauStack_208 = pauVar45;
            } while (puVar22 != puVar11);
            puVar22 = (undefined8 *)CONCAT44(iStack_51c,iStack_520);
          }
          if (puVar22 != (undefined8 *)0x0) {
            iStack_518 = (int)puVar22;
            iStack_514 = (int)((ulong)puVar22 >> 0x20);
            __ZdlPv(puVar22);
          }
          func_0x0001092cf31c(&uStack_1f0);
        }
        if ((((char)pdStack_4a0 == '\x01') && ((uint)pdStack_498 < 3)) &&
           ((long)pauStack_208 - (long)pauStack_210 == 0x20)) {
          if (bStack_538 == 1) {
            if (pauStack_558 != (undefined1 (*) [16])0x0) {
              pauStack_550 = pauStack_558;
              __ZdlPv();
            }
            if (lStack_570 != 0) {
              lStack_568 = lStack_570;
              __ZdlPv();
            }
            if (uStack_578._7_1_ < '\0') {
              __ZdlPv(pdStack_588);
            }
          }
          uStack_578 = lStack_480;
          pdStack_598 = pdStack_4a0;
          iStack_590 = (uint)pdStack_498;
          uStack_580 = uStack_488;
          pdStack_588 = pdStack_490;
          pdStack_490 = (double *)0x0;
          uStack_488 = 0;
          lStack_480 = 0;
          lStack_568 = lStack_470;
          lStack_570 = lStack_478;
          uStack_560 = uStack_468;
          pauStack_550 = pauStack_208;
          pauStack_548 = pauStack_200;
          bStack_538 = 1;
          pauStack_558 = pauStack_210;
          uStack_540 = uVar41;
          puVar12 = uStack_120;
          puVar22 = uStack_118;
          goto LAB_10a52cd58;
        }
        if (pauStack_210 != (undefined1 (*) [16])0x0) {
          pauStack_208 = pauStack_210;
          __ZdlPv();
        }
        if (lStack_478 != 0) {
          lStack_470 = lStack_478;
          __ZdlPv();
        }
        puVar12 = uStack_120;
        puVar22 = uStack_118;
        if (lStack_480 < 0) {
          __ZdlPv(pdStack_490);
          puVar12 = uStack_120;
          puVar22 = uStack_118;
        }
        uVar42 = (ulong)(uVar41 << 1);
      } while (uVar41 < 3);
      if (bStack_538 == 1) {
LAB_10a52cd58:
        fVar47 = (float)*(int *)(*unaff_x28 + 0x10);
        fVar50 = fVar47 / (float)piStack_3b0[1];
        fVar49 = (float)*(int *)(*unaff_x28 + 0x14) / (float)*piStack_3b0;
        if (fVar49 <= fVar50) {
          fVar49 = fVar50;
        }
        lVar26 = (long)pauStack_550 - (long)pauStack_558;
        pauVar23 = pauStack_558;
        if (lVar26 != 0) {
          do {
            fVar50 = (float)*(undefined8 *)*pauVar23 * fVar49;
            *(ulong *)*pauVar23 =
                 CONCAT44((float)((ulong)*(undefined8 *)*pauVar23 >> 0x20) * fVar49,fVar50);
            if (bVar5 != 0) {
              *(float *)*pauVar23 = (fVar47 - fVar50) + -1.0;
            }
            puVar13 = *pauVar23;
            pauVar23 = (undefined1 (*) [16])(puVar13 + 8);
          } while ((undefined1 (*) [16])(puVar13 + 8) != pauStack_550);
        }
        if ((bVar5 & 1) != 0) {
          uVar42 = lVar26 >> 3;
          piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
          uStack_120 = puVar12;
          if ((uVar42 == 0) ||
             (piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8), uVar42 == 1))
          goto LAB_10a52dddc;
          auVar48 = NEON_ext(*pauStack_558,*pauStack_558,8,1);
          *(long *)(*pauStack_558 + 8) = auVar48._8_8_;
          *(long *)*pauStack_558 = auVar48._0_8_;
          piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
          if ((uVar42 < 3) ||
             (piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8), lVar26 == 0x18))
          goto LAB_10a52dddc;
          auVar48 = NEON_ext(pauStack_558[1],pauStack_558[1],8,1);
          *(long *)(pauStack_558[1] + 8) = auVar48._8_8_;
          *(long *)pauStack_558[1] = auVar48._0_8_;
        }
      }
      uStack_120 = puVar12;
      uStack_118 = puVar22;
      if (puStack_420 != (undefined8 *)0x0) {
        piVar40 = (int *)((long)puStack_420 + 0x14);
        do {
          iVar20 = *piVar40;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
          if (bVar7) {
            *piVar40 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 == 0) {
          func_0x000109a848d4(&uStack_458);
        }
      }
      puStack_420 = (undefined8 *)0x0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_448 = 0;
      uStack_444 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      if (0 < uStack_458._4_4_) {
        lVar26 = 0;
        do {
          *(undefined4 *)((long)ppuStack_418 + lVar26 * 4) = 0;
          lVar26 = lVar26 + 1;
        } while (lVar26 < uStack_458._4_4_);
      }
      if (puStack_410 != &uStack_408 && puStack_410 != (undefined8 *)0x0) {
        _free(puStack_410[-1]);
      }
      FUN_10a4e7884(&iStack_3f0);
      piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
      if ((bStack_538 & 1) == 0) {
        lVar26 = *(long *)(lVar43 + 0x1d0);
        if (lVar26 != *(long *)(lVar43 + 0x1d8)) {
          iVar20 = *(int *)(lVar43 + 0x1e8);
          uVar42 = (ulong)iVar20;
          uVar33 = (*(long *)(lVar43 + 0x1d8) - lVar26 >> 3) * -0x5555555555555555;
          puVar22 = uStack_118;
          if (uVar33 < uVar42 || uVar33 - uVar42 == 0) goto LAB_10a52dddc;
          iVar32 = *(int *)(lVar43 + 0x1ec);
          iVar37 = iVar32 + 1;
          *(int *)(lVar43 + 0x1ec) = iVar37;
          if (*(int *)(lVar26 + (long)iVar20 * 0x18) <= iVar37) {
            if (uVar33 - 1 == uVar42) {
              *(int *)(lVar43 + 0x1ec) = iVar32;
            }
            else {
              *(undefined4 *)(lVar43 + 0x1ec) = 0;
              *(int *)(lVar43 + 0x1e8) = iVar20 + 1;
            }
          }
        }
        pdStack_710 = (double *)((ulong)pdStack_710 & 0xffffffffffffff00);
        cStack_5a8 = '\0';
      }
      else {
        plStack_2c8 = (long *)0x0;
        lStack_2d0 = 0;
        if ((*(char *)(lVar43 + 0x1c0) == '\x01') &&
           (lStack_568 - lStack_570 == *(long *)(lVar43 + 0x1b0) - *(long *)(lVar43 + 0x1a8))) {
          lVar26 = lStack_570;
          _memcmp();
          if ((int)lVar26 != 0) goto LAB_10a52cec4;
        }
        else {
LAB_10a52cec4:
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f65d3b1,&UNK_10f65d3e9,0x6b,&UNK_10f65d486);
            piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
            puVar22 = uStack_118;
            if ((bStack_538 & 1) == 0) goto LAB_10a52dddc;
          }
          FUN_10a4e799c(&uStack_1f0,lVar43 + 0x148,uStack_540,iStack_590,&lStack_570,0,0);
          lVar26 = CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0);
          iStack_520 = (int)uStack_1f0;
          iStack_51c = uStack_1f0._4_4_;
          if (lVar26 == 0) {
            plVar38 = (long *)0x0;
          }
          else {
            plVar38 = (long *)0x20;
            __Znwm();
            *plVar38 = (long)&PTR_DAT_110bea2c0;
            plVar38[1] = 0;
            plVar38[2] = 0;
            plVar38[3] = lVar26;
          }
          iStack_518 = (int)plVar38;
          iStack_514 = (int)((ulong)plVar38 >> 0x20);
          if (*(char *)(lVar43 + 0x178) == '\x01') {
            FUN_10a1b498c(&uStack_1f0,*(undefined4 *)(lVar26 + 0x24),*(undefined4 *)(lVar26 + 0x24))
            ;
            uStack_2c0 = 8;
            uVar29 = *(undefined8 *)(lVar26 + 0x10);
            uStack_460 = (undefined2)uVar29;
            uStack_45e = (undefined2)((ulong)uVar29 >> 0x10);
            iStack_45c = (int)((ulong)uVar29 >> 0x20);
            (*(code *)**(undefined8 **)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0))
                      (&iStack_3f0,(undefined8 *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0),lVar26,
                       &uStack_2c0,&uStack_460);
            iStack_514 = iStack_3e4;
            iStack_518 = iStack_3e8;
            iStack_51c = iStack_3ec;
            iStack_520 = iStack_3f0;
            iStack_3e8 = 0;
            iStack_3e4 = 0;
            iStack_3f0 = 0;
            iStack_3ec = 0;
            if (plVar38 != (long *)0x0) {
              plVar1 = plVar38 + 1;
              do {
                lVar26 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
              }
            }
            plVar38 = (long *)CONCAT44(iStack_3e4,iStack_3e8);
            if (plVar38 != (long *)0x0) {
              plVar1 = plVar38 + 1;
              do {
                lVar26 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
              }
            }
            plVar38 = (long *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
            if (plVar38 != (long *)0x0) {
              plVar1 = plVar38 + 1;
              do {
                lVar26 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
              }
            }
            lVar26 = CONCAT44(iStack_51c,iStack_520);
            plVar38 = (long *)CONCAT44(iStack_514,iStack_518);
          }
          piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
          lStack_2d0 = lVar26;
          plStack_2c8 = plVar38;
          puVar22 = uStack_118;
          if ((bStack_538 & 1) == 0) goto LAB_10a52dddc;
        }
        dVar30 = 1.0;
        if (*(char *)(lVar43 + 0x174) == '\x01') {
          dVar30 = (double)*(float *)(lVar43 + 0x170);
        }
        func_0x000109a8261c(&uStack_1f0,3,3,6);
        iStack_3f0 = 0x42ff0000;
        piStack_3b0 = &iStack_3e8;
        iStack_3e4 = 0;
        uStack_3e0 = 0;
        iStack_3ec = 0;
        iStack_3e8 = 0;
        lStack_3b8 = 0;
        uStack_3bc = 0;
        uStack_3c4 = 0;
        uStack_3c0 = 0;
        uStack_3cc = 0;
        uStack_3c8 = 0;
        uStack_3d4 = 0;
        uStack_3d0 = 0;
        uStack_3dc = 0;
        uStack_3d8 = 0;
        lStack_398 = 0;
        lStack_3a0 = 0;
        plStack_3a8 = &lStack_3a0;
        (**(code **)(*(long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0) + 0x18))
                  ((long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0),&uStack_1f0,&iStack_3f0,
                   0xffffffff);
        func_0x00010918eb6c(&uStack_1f0);
        pauVar31 = pauStack_550;
        pauVar23 = pauStack_558;
        pdVar25 = (double *)CONCAT44(uStack_3dc,uStack_3e0);
        *pdVar25 = (double)*(float *)((long)param_1 + 0x34);
        lVar26 = *plStack_3a8;
        *(double *)((long)pdVar25 + lVar26 + 8) = (double)*(float *)(param_1 + 7);
        pdVar25[2] = (double)*(float *)((long)param_1 + 0x3c);
        *(double *)((long)pdVar25 + lVar26 + 0x10) = (double)*(float *)(param_1 + 8);
        *(undefined8 *)((long)pdVar25 + lVar26 * 2 + 0x10) = 0x3ff0000000000000;
        pdStack_490 = (double *)0x0;
        pdStack_4a0 = (double *)0x0;
        pdStack_498 = (double *)0x0;
        lVar26 = (long)pauStack_550 - (long)pauStack_558;
        if (lVar26 != 0) {
          if ((ulong)(lVar26 >> 3) >> 0x3c != 0) {
            FUN_10a4f96c4();
            piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
            puVar22 = uStack_118;
            goto LAB_10a52dddc;
          }
          pdVar24 = (double *)(lVar26 * 2);
          __Znwm();
          pdStack_490 = pdVar24 + (lVar26 >> 3) * 2;
          pdVar25 = pdVar24;
          do {
            puVar13 = *pauVar23;
            uVar29 = *(undefined8 *)*pauVar23;
            pdStack_498 = pdVar25 + 2;
            pdVar25[1] = (double)(float)((ulong)uVar29 >> 0x20);
            *pdVar25 = (double)(float)uVar29;
            pdVar25 = pdStack_498;
            pauVar23 = (undefined1 (*) [16])(puVar13 + 8);
            pdStack_4a0 = pdVar24;
          } while ((undefined1 (*) [16])(puVar13 + 8) != pauVar31);
        }
        iStack_520 = 0x42ff0000;
        piStack_240 = &iStack_520;
        iStack_514 = 0;
        uStack_510 = 0;
        iStack_51c = 0;
        iStack_518 = 0;
        piStack_4e0 = &iStack_518;
        uStack_504 = 0;
        uStack_500 = 0;
        uStack_50c = 0;
        uStack_508 = 0;
        uStack_4f4 = 0;
        uStack_4fc = 0;
        uStack_4f8 = 0;
        lStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4c8 = 0;
        lStack_4d0 = 0;
        uStack_460 = 0;
        uStack_45e = 0x42ff;
        puStack_420 = &uStack_458;
        uStack_458._4_4_ = 0;
        uStack_450 = 0;
        iStack_45c = 0;
        uStack_458._0_4_ = 0;
        uStack_444 = 0;
        uStack_440 = 0;
        uStack_44c = 0;
        uStack_448 = 0;
        uStack_434 = 0;
        uStack_43c = 0;
        uStack_438 = 0;
        uStack_428 = 0;
        uStack_424 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        uStack_408 = 0;
        puStack_410 = (undefined8 *)0x0;
        uStack_1e8 = (int *)(lVar43 + 0x1f8);
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1f0._0_4_ = 0x81030016;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        uStack_2c0 = 0x8103000e;
        uStack_2b8 = &pdStack_4a0;
        pauStack_200 = (undefined1 (*) [16])0x0;
        pauStack_210._0_4_ = 0x1010000;
        pauStack_208 = (undefined1 (*) [16])&iStack_3f0;
        lStack_228 = lVar43 + 0x210;
        uStack_220 = 0;
        uStack_230 = CONCAT44(uStack_230._4_4_,0x1010000);
        auStack_248[0] = 0x2010000;
        uStack_238 = 0;
        auStack_260[0] = 0x2010000;
        uStack_250 = 0;
        plStack_4d8 = &lStack_4d0;
        ppuStack_418 = &puStack_410;
        puStack_258 = (undefined8 *)&uStack_460;
        func_0x000109ba43b4(&uStack_1f0,&uStack_2c0,&pauStack_210,&uStack_230,auStack_248,
                            auStack_260,0,0);
        uStack_1f0._0_4_ = 0x2010000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1e8 = (int *)&uStack_460;
        func_0x000109a41858(dVar30,0,&uStack_460,&uStack_1f0,0xffffffff);
        func_0x000109a82c84(&uStack_1f0,4,4,6);
        iStack_330 = 0x42ff0000;
        uStack_328._4_4_ = 0;
        uStack_320 = 0;
        iStack_32c = 0;
        uStack_328._0_4_ = 0;
        lStack_2f8 = 0;
        uStack_2fc = 0;
        uStack_304 = 0;
        uStack_300 = 0;
        uStack_30c = 0;
        uStack_308 = 0;
        uStack_314 = 0;
        uStack_310 = 0;
        uStack_31c = 0;
        uStack_318 = 0;
        lStack_2d8 = 0;
        lStack_2e0 = 0;
        pplStack_2f0 = (long **)&uStack_328;
        plStack_2e8 = &lStack_2e0;
        (**(code **)(*(long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0) + 0x18))
                  ((long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0),&uStack_1f0,&iStack_330,
                   0xffffffff);
        func_0x00010918eb6c(&uStack_1f0);
        func_0x000109a8261c(&uStack_1f0,3,3,6);
        uStack_2c0 = 0x42ff0000;
        puStack_280 = &uStack_2b8;
        uStack_2b8._4_4_ = 0;
        uStack_2b0 = 0;
        iStack_2bc = 0;
        uStack_2b8._0_4_ = 0;
        lStack_288 = 0;
        uStack_28c = 0;
        uStack_294 = 0;
        uStack_290 = 0;
        uStack_29c = 0;
        uStack_298 = 0;
        uStack_2a4 = 0;
        uStack_2a0 = 0;
        uStack_2ac = 0;
        uStack_2a8 = 0;
        puStack_268 = (undefined8 *)0x0;
        puStack_270 = (undefined8 *)0x0;
        ppuStack_278 = &puStack_270;
        (**(code **)(*(long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0) + 0x18))
                  ((long *)CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0),&uStack_1f0,&uStack_2c0,
                   0xffffffff);
        puVar22 = &uStack_1f0;
        func_0x00010918eb6c(puVar22);
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1f0._0_4_ = 0x1010000;
        uStack_1e8 = &iStack_520;
        pauStack_210._0_4_ = 0x2010000;
        pauStack_200 = (undefined1 (*) [16])0x0;
        pauStack_208 = (undefined1 (*) [16])&uStack_2c0;
        func_0x000109a91d90();
        func_0x000109b8d8fc(&uStack_1f0,&pauStack_210,puVar22);
        lStack_228 = 0x300000003;
        uStack_230 = 0;
        func_0x000109a852c8(&uStack_1f0,&iStack_330,&uStack_230);
        pauStack_210 = (undefined1 (*) [16])CONCAT44(pauStack_210._4_4_,0xc2010000);
        pauStack_200 = (undefined1 (*) [16])0x0;
        pauStack_208 = (undefined1 (*) [16])&uStack_1f0;
        func_0x000109a479a0(&uStack_2c0,&pauStack_210);
        if (lStack_1b8 != 0) {
          piVar40 = (int *)(lStack_1b8 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&uStack_1f0);
          }
        }
        lStack_1b8 = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        if (0 < uStack_1f0._4_4_) {
          lVar26 = 0;
          do {
            piStack_1b0[lVar26] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < uStack_1f0._4_4_);
        }
        if (plStack_1a8 != &lStack_1a0 && plStack_1a8 != (long *)0x0) {
          _free(plStack_1a8[-1]);
        }
        lStack_228 = 0x300000001;
        uStack_230 = 3;
        func_0x000109a852c8(&uStack_1f0,&iStack_330,&uStack_230);
        pauStack_210 = (undefined1 (*) [16])CONCAT44(pauStack_210._4_4_,0xc2010000);
        pauStack_200 = (undefined1 (*) [16])0x0;
        pauStack_208 = (undefined1 (*) [16])&uStack_1f0;
        func_0x000109a479a0(&uStack_460,&pauStack_210);
        if (lStack_1b8 != 0) {
          piVar40 = (int *)(lStack_1b8 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&uStack_1f0);
          }
        }
        lStack_1b8 = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        if (0 < uStack_1f0._4_4_) {
          lVar26 = 0;
          do {
            piStack_1b0[lVar26] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < uStack_1f0._4_4_);
        }
        if (plStack_1a8 != &lStack_1a0 && plStack_1a8 != (long *)0x0) {
          _free(plStack_1a8[-1]);
        }
        if (lStack_288 != 0) {
          piVar40 = (int *)(lStack_288 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&uStack_2c0);
          }
        }
        lStack_288 = 0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        uStack_298 = 0;
        uStack_294 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0;
        if (0 < iStack_2bc) {
          lVar26 = 0;
          do {
            *(undefined4 *)((long)puStack_280 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < iStack_2bc);
        }
        if (ppuStack_278 != &puStack_270 && ppuStack_278 != (undefined8 **)0x0) {
          _free(ppuStack_278[-1]);
        }
        if (CONCAT44(uStack_424,uStack_428) != 0) {
          piVar40 = (int *)(CONCAT44(uStack_424,uStack_428) + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&uStack_460);
          }
        }
        uStack_428 = 0;
        uStack_424 = 0;
        uStack_448 = 0;
        uStack_444 = 0;
        uStack_450 = 0;
        uStack_44c = 0;
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        if (0 < iStack_45c) {
          lVar26 = 0;
          do {
            *(undefined4 *)((long)puStack_420 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < iStack_45c);
        }
        if (ppuStack_418 != &puStack_410 && ppuStack_418 != (undefined8 **)0x0) {
          _free(ppuStack_418[-1]);
        }
        if (lStack_4e8 != 0) {
          piVar40 = (int *)(lStack_4e8 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&iStack_520);
          }
        }
        lStack_4e8 = 0;
        uStack_508 = 0;
        uStack_504 = 0;
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_4f8 = 0;
        uStack_4f4 = 0;
        uStack_500 = 0;
        uStack_4fc = 0;
        if (0 < iStack_51c) {
          lVar26 = 0;
          do {
            piStack_4e0[lVar26] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < iStack_51c);
        }
        if (plStack_4d8 != &lStack_4d0 && plStack_4d8 != (long *)0x0) {
          _free(plStack_4d8[-1]);
        }
        if (pdStack_4a0 != (double *)0x0) {
          pdStack_498 = pdStack_4a0;
          __ZdlPv();
        }
        if (lStack_3b8 != 0) {
          piVar40 = (int *)(lStack_3b8 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&iStack_3f0);
          }
        }
        lStack_3b8 = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        if (0 < iStack_3ec) {
          lVar26 = 0;
          do {
            piStack_3b0[lVar26] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < iStack_3ec);
        }
        piVar40 = uStack_1e8;
        puVar22 = uStack_118;
        if (plStack_3a8 != &lStack_3a0 && plStack_3a8 != (long *)0x0) {
          _free(plStack_3a8[-1]);
          piVar40 = uStack_1e8;
          puVar22 = uStack_118;
        }
        plVar1 = plStack_2c8;
        lVar18 = lStack_2d0;
        plVar38 = plStack_2e8;
        iVar20 = iStack_330;
        pauVar14 = pauStack_548;
        pauVar31 = pauStack_550;
        pauVar23 = pauStack_558;
        uVar17 = uStack_560;
        lVar16 = lStack_568;
        lVar15 = lStack_570;
        lVar44 = uStack_578;
        uVar29 = uStack_580;
        pdVar25 = pdStack_588;
        uStack_118._4_4_ = (undefined4)((ulong)puVar22 >> 0x20);
        uStack_1e8._4_4_ = (int)((ulong)piVar40 >> 0x20);
        lVar26 = *(long *)(lVar43 + 0x1d0);
        if (lVar26 != *(long *)(lVar43 + 0x1d8)) {
          iVar37 = *(int *)(lVar43 + 0x1ec);
          uVar42 = (*(long *)(lVar43 + 0x1d8) - lVar26 >> 3) * -0x5555555555555555;
          iVar32 = 4;
          do {
            if (iVar37 == 0) {
              uVar27 = *(int *)(lVar43 + 0x1e8) - 1;
              if (*(int *)(lVar43 + 0x1e8) < 1) break;
              *(uint *)(lVar43 + 0x1e8) = uVar27;
              uStack_328 = (long *)CONCAT44(uStack_328._4_4_,(int)uStack_328);
              uStack_2b8 = (double **)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
              if (uVar42 < uVar27 || uVar42 - uVar27 == 0) goto LAB_10a52dddc;
              iVar37 = *(int *)(lVar26 + (ulong)uVar27 * 0x18);
            }
            iVar4 = iVar37;
            if (iVar32 <= iVar37) {
              iVar4 = iVar32;
            }
            iVar37 = iVar37 - iVar4;
            *(int *)(lVar43 + 0x1ec) = iVar37;
            iVar8 = iVar32 - iVar4;
            bVar7 = iVar4 <= iVar32;
            iVar32 = iVar8;
          } while (iVar8 != 0 && bVar7);
        }
        uStack_328 = (long *)CONCAT44(uStack_328._4_4_,(int)uStack_328);
        uStack_2b8 = (double **)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
        if ((bStack_538 & 1) == 0) goto LAB_10a52dddc;
        puVar22 = (undefined8 *)((ulong)&iStack_330 | 4);
        uStack_1f0._0_4_ = (int)pdStack_598;
        uStack_1f0._4_4_ = (int)((ulong)pdStack_598 >> 0x20);
        uStack_1e8._0_4_ = iStack_590;
        uStack_580 = 0;
        pdStack_588 = (double *)0x0;
        uStack_560 = 0;
        lStack_568 = 0;
        uStack_578 = 0;
        lStack_570 = 0;
        pauStack_558 = (undefined1 (*) [16])0x0;
        pauStack_550 = (undefined1 (*) [16])0x0;
        pauStack_548 = (undefined1 (*) [16])0x0;
        uStack_198 = CONCAT44(uStack_198._4_4_,uStack_540);
        lStack_6b0 = param_1[2];
        lStack_6a8 = param_1[3];
        *unaff_x28 = 0;
        param_1[3] = 0;
        lStack_168 = param_1[7];
        lStack_170 = param_1[6];
        lStack_178 = param_1[5];
        lStack_180 = param_1[4];
        uStack_120._4_4_ = (undefined4)*(undefined8 *)((long)param_1 + 0x84);
        uStack_118._0_4_ = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x84) >> 0x20);
        uStack_120._0_4_ = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x7c) >> 0x20);
        uStack_128 = (undefined4)param_1[0xf];
        uStack_124 = (undefined4)((ulong)param_1[0xf] >> 0x20);
        uStack_130 = (undefined4)param_1[0xe];
        uStack_12c = (undefined4)((ulong)param_1[0xe] >> 0x20);
        uStack_138 = (undefined4)param_1[0xd];
        uStack_134 = (undefined4)((ulong)param_1[0xd] >> 0x20);
        uStack_140 = (undefined4)param_1[0xc];
        uStack_13c = (undefined4)((ulong)param_1[0xc] >> 0x20);
        uStack_158 = (undefined4)param_1[9];
        uStack_154 = (undefined4)((ulong)param_1[9] >> 0x20);
        uStack_160 = (undefined4)param_1[8];
        uStack_15c = (undefined4)((ulong)param_1[8] >> 0x20);
        uStack_148 = (undefined4)param_1[0xb];
        uStack_144 = (undefined4)((ulong)param_1[0xb] >> 0x20);
        uStack_150 = (undefined4)param_1[10];
        uStack_14c = (undefined4)((ulong)param_1[10] >> 0x20);
        lStack_630 = param_1[0x12];
        lStack_628 = param_1[0x13];
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        lStack_620 = param_1[0x14];
        uStack_100 = (undefined4)lStack_620;
        uStack_fc = (undefined4)((ulong)lStack_620 >> 0x20);
        iStack_f8 = iStack_330;
        auStack_f4._4_4_ = (int)uStack_328;
        auStack_f4._0_4_ = iStack_32c;
        uStack_ec = uStack_328._4_4_;
        uStack_608 = CONCAT44(uStack_31c,uStack_320);
        uStack_600 = CONCAT44(uStack_314,uStack_318);
        uStack_e8 = uStack_320;
        uStack_e4 = uStack_31c;
        uStack_e0 = uStack_318;
        uStack_dc = uStack_314;
        uStack_5f8 = CONCAT44(uStack_30c,uStack_310);
        uStack_5f0 = CONCAT44(uStack_304,uStack_308);
        uStack_d8 = uStack_310;
        uStack_d4 = uStack_30c;
        uStack_d0 = uStack_308;
        uStack_cc = uStack_304;
        uStack_5e8 = CONCAT44(uStack_2fc,uStack_300);
        uStack_c8 = uStack_300;
        uStack_c4 = uStack_2fc;
        piStack_c0 = (int *)lStack_2f8;
        pplStack_b8 = (long **)(auStack_f4 + 4);
        plStack_b0 = &lStack_a8;
        lStack_a0 = 0;
        lStack_a8 = 0;
        if (iStack_32c < 3) {
          lStack_a8 = *plStack_2e8;
          lStack_a0 = plStack_2e8[1];
          plVar38 = &lStack_a8;
        }
        else {
          plStack_b0 = plStack_2e8;
          pplStack_b8 = pplStack_2f0;
          plStack_2e8 = &lStack_2e0;
          pplStack_2f0 = (long **)&uStack_328;
        }
        iStack_330 = 0x42ff0000;
        puVar22[1] = 0;
        *puVar22 = 0;
        puVar22[3] = 0;
        puVar22[2] = 0;
        puVar22[5] = 0;
        puVar22[4] = 0;
        *(undefined8 *)((long)puVar22 + 0x34) = 0;
        *(undefined8 *)((long)puVar22 + 0x2c) = 0;
        lStack_98 = lStack_2d0;
        plStack_90 = plStack_2c8;
        plStack_2c8 = (long *)0x0;
        lStack_2d0 = 0;
        pdStack_710 = pdStack_598;
        iStack_708 = iStack_590;
        lStack_6f0 = lVar44;
        pdStack_700 = pdVar25;
        uStack_6f8 = uVar29;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        lStack_6e8 = lVar15;
        lStack_6e0 = lVar16;
        uStack_6d8 = uVar17;
        pauStack_6d0 = pauVar23;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        lStack_1b8 = 0;
        pauStack_6c8 = pauVar31;
        pauStack_6c0 = pauVar14;
        plStack_1a8 = (long *)0x0;
        lStack_1a0 = 0;
        piStack_1b0 = (int *)0x0;
        uStack_6b8 = uStack_540;
        uStack_190 = 0;
        uStack_188 = 0;
        lStack_6a0 = param_1[4];
        lStack_698 = param_1[5];
        lStack_688 = param_1[7];
        lStack_690 = param_1[6];
        lStack_680 = param_1[8];
        lStack_678 = param_1[9];
        lStack_668 = param_1[0xb];
        lStack_670 = param_1[10];
        uStack_63c = *(undefined8 *)((long)param_1 + 0x84);
        uStack_640 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x7c) >> 0x20);
        lStack_658 = param_1[0xd];
        lStack_660 = param_1[0xc];
        lStack_650 = param_1[0xe];
        uStack_648 = (undefined4)param_1[0xf];
        uStack_644 = (undefined4)((ulong)param_1[0xf] >> 0x20);
        uStack_110 = 0;
        uStack_108 = 0;
        iStack_618 = iVar20;
        iStack_614 = iStack_32c;
        pplStack_5d8 = (long **)&uStack_610;
        uStack_610 = (int)uStack_328;
        uStack_60c = uStack_328._4_4_;
        lStack_5e0 = lStack_2f8;
        lStack_5c8 = 0;
        lStack_5c0 = 0;
        if (iStack_32c < 3) {
          lStack_5c8 = *plVar38;
          lStack_5c0 = plVar38[1];
          plStack_5d0 = &lStack_5c8;
          plStack_b0 = plVar38;
        }
        else {
          pplStack_5d8 = pplStack_b8;
          plStack_5d0 = plVar38;
          pplStack_b8 = (long **)(auStack_f4 + 4);
          plStack_b0 = &lStack_a8;
        }
        iStack_f8 = 0x42ff0000;
        uStack_ec = 0;
        uStack_e8 = 0;
        auStack_f4 = (undefined1  [8])0x0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_cc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        piStack_c0 = (int *)0x0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        lStack_5b8 = lVar18;
        plStack_5b0 = plVar1;
        lStack_98 = 0;
        plStack_90 = (long *)0x0;
        cStack_5a8 = '\x01';
        FUN_10a4f96d8(&uStack_1f0);
        if (lStack_2f8 != 0) {
          piVar40 = (int *)(lStack_2f8 + 0x14);
          do {
            iVar20 = *piVar40;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar40,0x10);
            if (bVar7) {
              *piVar40 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            func_0x000109a848d4(&iStack_330);
          }
        }
        lStack_2f8 = 0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_320 = 0;
        uStack_31c = 0;
        uStack_308 = 0;
        uStack_304 = 0;
        uStack_310 = 0;
        uStack_30c = 0;
        if (0 < iStack_32c) {
          lVar43 = 0;
          do {
            *(undefined4 *)((long)pplStack_2f0 + lVar43 * 4) = 0;
            lVar43 = lVar43 + 1;
          } while (lVar43 < iStack_32c);
        }
        if (plStack_2e8 != &lStack_2e0 && plStack_2e8 != (long *)0x0) {
          _free(plStack_2e8[-1]);
        }
        plVar1 = plStack_2c8;
        unaff_x28 = plVar38;
        uStack_328 = (long *)CONCAT44(uStack_328._4_4_,(int)uStack_328);
        uStack_2b8 = (double **)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
        uStack_120 = (undefined4 *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
        uStack_118 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
        if (plStack_2c8 != (long *)0x0) {
          plVar38 = plStack_2c8 + 1;
          do {
            lVar43 = *plVar38;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar7) {
              *plVar38 = lVar43 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          uStack_328 = (long *)CONCAT44(uStack_328._4_4_,(int)uStack_328);
          uStack_2b8 = (double **)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
          uStack_120 = (undefined4 *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          uStack_118 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
          if (lVar43 == 0) {
            (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      func_0x00010a4f9554(&pdStack_598);
      goto LAB_10a52dbd8;
    }
    FUN_10a1b498c(&uStack_1f0,*(int *)(lVar26 + 0x24),3);
    func_0x00010a343394(lVar43 + 0x128,&uStack_1f0);
    plVar38 = (long *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
    if (plVar38 != (long *)0x0) {
      plVar1 = plVar38 + 1;
      do {
        lVar26 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar26 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar38 + 0x10))(plVar38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
      }
    }
    puVar22 = *(undefined8 **)(lVar43 + 0x128);
    if (puVar22 != (undefined8 *)0x0) {
      lVar26 = *unaff_x28;
      *(undefined4 *)(lVar43 + 0x138) = *(undefined4 *)(lVar26 + 0x24);
      goto LAB_10a52c1a0;
    }
  }
  FUN_109febc44(&uStack_1f0);
  FUN_10a002568(&uStack_1e0,&UNK_10f65d343,0x37);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
            (&uStack_1e0,*(undefined4 *)(*unaff_x28 + 0x24));
  FUN_10a002568(&uStack_1e0,&UNK_10f65d37b,7);
  FUN_10a05168c(&iStack_3f0,&uStack_1e0);
  piVar40 = (int *)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
  puVar22 = uStack_118;
LAB_10a52dddc:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a52dde0);
  uStack_1e8 = piVar40;
  uStack_118 = puVar22;
  (*pcVar19)();
}



/* Entry: 10a52e1d0; end: 10a52e543;  */

undefined8 * FUN_10a52e1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee850;
  if (param_1[0x59] != 0) {
    func_0x0001092b4274(param_1 + 0x59);
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010a042d30(param_1 + 0x54);
    func_0x00010a136de4(param_1 + 0x44);
    if (param_1[0x43] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = &PTR_DAT_110bee8a0;
  if ((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)(param_1 + 0x40) == '\x01')) {
    FUN_10a4f96d8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a52e544; end: 10a52e59f;  */

void FUN_10a52e544(void)

{
  return;
}



/* Entry: 10a52e5a0; end: 10a52e603;  */

long * FUN_10a52e5a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)plVar1[4])();
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



/* Entry: 10a52e604; end: 10a52e833;  */

long * FUN_10a52e604(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar6 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x58;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  lVar3 = *param_3;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[4] = (long)&PTR_DAT_110950c70;
  plVar5[2] = lVar3;
  plVar5[3] = (long)FUN_10a4f9aa0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a4f9aac(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10a52e7ec;
    uVar2 = *(ulong *)(*plVar5 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar6 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a52e7ec:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}


